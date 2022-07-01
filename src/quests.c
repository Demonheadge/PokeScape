#include "global.h"
#include "strings.h"
#include "bg.h"
#include "data.h"
#include "decompress.h"
#include "gpu_regs.h"
#include "graphics.h"
#include "item.h"
#include "item_icon.h"
#include "item_menu.h"
#include "item_menu_icons.h"
#include "list_menu.h"
#include "item_use.h"
#include "main.h"
#include "malloc.h"
#include "menu.h"
#include "menu_helpers.h"
#include "palette.h"
#include "party_menu.h"
#include "scanline_effect.h"
#include "sound.h"
#include "string_util.h"
#include "strings.h"
#include "task.h"
#include "text_window.h"
#include "quests.h"
#include "overworld.h"
#include "event_data.h"
#include "constants/items.h"
#include "constants/field_weather.h"
#include "constants/songs.h"
#include "constants/rgb.h"
#include "mgba_printf/mgba.h"
#include "constants/event_objects.h"
#include "event_object_movement.h"

#include "random.h"

#define tCount          data[2]
#define tPageItems      data[4]
#define tItemPcParam    data[6]
#define tWindowId       data[10]
#define tListMenuTaskId data[11]

#define tState          data[0]
#define tXSpeed         data[1]
#define tYSpeed         data[2]
#define tWin0Left       data[3]
#define tWin0Right      data[4]
#define tWin0Top        data[5]
#define tWin0Bottom     data[6]
#define tBldCntBak      data[7]
#define tBldYBak        data[8]

struct QuestMenuResources
{
	MainCallback savedCallback;
	u8 moveModeOrigPos;
	u8 itemMenuIconSlot;
	u8 maxShowed;
	u8 nItems;
	u8 scrollIndicatorArrowPairId;
	s16 data[3];
	u8 filterMode;
	u8 parentQuest;
};

struct QuestMenuStaticResources
{
	MainCallback savedCallback;
	u16 scroll;
	u16 row;
	u8 initialized;
	u16 storedScrollOffset;
	u16 storedRowPosition;
};

// RAM
EWRAM_DATA static struct QuestMenuResources *sStateDataPtr = NULL;
EWRAM_DATA static u8 *sBg1TilemapBuffer = NULL;
EWRAM_DATA static struct ListMenuItem *sListMenuItems = NULL;
EWRAM_DATA static struct QuestMenuStaticResources sListMenuState = {0};
EWRAM_DATA static u8 gUnknown_2039878[12] = {0};        // from pokefirered src/item_menu_icons.c
EWRAM_DATA static void *questNamePointer = NULL;
EWRAM_DATA static u8 **questNameArray = NULL;

// This File's Functions
static void QuestMenu_RunSetup(void);
static bool8 QuestMenu_DoGfxSetup(void);
static void QuestMenu_FadeAndBail(void);
static void Task_QuestMenuWaitFadeAndBail(u8 taskId);
static bool8 QuestMenu_InitBgs(void);
static bool8 QuestMenu_LoadGraphics(void);
static bool8 QuestMenu_AllocateResourcesForListMenu(void);
static u8 QuestMenu_GenerateTotalItems(u8 mode);
static s8 QuestMenu_CheckHasChildren(u16 itemId);
static u16 QuestMenu_BuildFilteredMenuTemplate(void);
static void QuestMenu_AssignCancelNameAndId(u8 numRow);
static void QuestMenu_MoveCursorFunc(s32 itemIndex, bool8 onInit, struct ListMenu *list);
static void QuestMenu_PrintProgressFunc(u8 windowId, u32 itemId, u8 y);
static void QuestMenu_PrintOrRemoveCursorAt(u8 y, u8 state);
s8 QuestMenu_CountUnlockedQuests(void);
s8 QuestMenu_CountInactiveQuests(void);
s8 QuestMenu_CountActiveQuests(void);
s8 QuestMenu_CountRewardQuests(void);
s8 QuestMenu_CountCompletedQuests(void);
s8 QuestMenu_CountFavoriteQuests(void);
s8 QuestMenu_CountFavoriteAndState(void);
static void QuestMenu_PrintHeader(void);
static void QuestMenu_PlaceTopMenuScrollIndicatorArrows(void);
static void QuestMenu_SetCursorPosition(void);
static void QuestMenu_FreeResources(void);
static void Task_QuestMenuTurnOff2(u8 taskId);
static void QuestMenu_InitItems(void);
static void QuestMenu_SetScrollPosition(void);
static s8 QuestMenu_SetMode(bool8 subquest);
static void Task_QuestMenuMain(u8 taskId);
static void Task_QuestMenuCleanUp(u8 taskId);
static void QuestMenu_InitWindows(void);
static void QuestMenu_AddTextPrinterParameterized(u8 windowId, u8 fontId, const u8 *str, u8 x, u8 y,
            u8 letterSpacing, u8 lineSpacing, u8 speed, u8 colorIdx);
static void QuestMenu_SetInitializedFlag(u8 a0);
static void QuestMenu_TextFadeIn(void);
static void QuestMenu_TextFadeOut(void);
static void QuestMenu_InitModeOnStartup(void);

static void SetGpuRegBaseForFade(bool8 fadeSprites); //Sets the GPU registers to prepare for a hardware fade
static void PrepareFadeOut(u8 taskId, bool8 fadeSprites); //Prepares the input handler for a hardware fade out
static void PrepareFadeIn(u8 taskId, bool8 fadeSprites); //Prepares the input handler for a hardware fade in
static bool8 HandleFadeOut(u8 taskId); //Handles the hardware fade out
static bool8 HandleFadeIn(u8 taskId); //Handles the hardware fade in
static void Task_QuestMenu_FadeOut(u8 taskId);
static void Task_QuestMenu_FadeIn(u8 taskId);

// Data
// graphics
static const u32 sQuestMenuTiles[] = INCBIN_U32("graphics/quest_menu/menu.4bpp.lz");
static const u32 sQuestMenuBgPals[] = INCBIN_U32("graphics/quest_menu/menu_pal.gbapal.lz");
static const u32 sQuestMenuTilemap[] = INCBIN_U32("graphics/quest_menu/tilemap.bin.lz");

// strings
static const u8 sText_Empty[] = _("");
static const u8 sText_QuestMenu_AllHeader[] = _("All Missions");
static const u8 sText_QuestMenu_InactiveHeader[] = _("Inactive Missions");
static const u8 sText_QuestMenu_ActiveHeader[] = _("Active Missions");
static const u8 sText_QuestMenu_RewardHeader[] = _("Reward Available");
static const u8 sText_QuestMenu_CompletedHeader[] = _("Completed Missions");
static const u8 sText_QuestMenu_QuestNumberDisplay[] = _("{STR_VAR_1}/{STR_VAR_2}");
static const u8 sText_QuestMenu_Unk[] = _("??????");
static const u8 sText_QuestMenu_Active[] = _("Active");
static const u8 sText_QuestMenu_Reward[] = _("Reward");
static const u8 sText_QuestMenu_Complete[] = _("Done");
static const u8 sText_QuestMenu_ShowLocation[] =  _("Location: {STR_VAR_2}");
static const u8 sText_QuestMenu_StartForMore[] = _("Start for more details.");
static const u8 sText_QuestMenu_ReturnRecieveReward[] =
      _("Return to {STR_VAR_2}\nto recieve your reward!");
static const u8 sText_QuestMenu_SubQuestButton[] = _("{A_BUTTON}");
static const u8 sText_QuestMenu_Type[] = _("{R_BUTTON}Type");
static const u8 sText_QuestMenu_Caught[] = _("Caught");
static const u8 sText_QuestMenu_Found[] = _("Found");
static const u8 sText_QuestMenu_Read[] = _("Read");
static const u8 sText_QuestMenu_Back[] = _("Back");
static const u8 sText_QuestMenu_DotSpace[] = _(". ");
static const u8 sText_QuestMenu_Close[] = _("Close");
static const u8 sText_QuestMenu_GreenColor[] = _("{COLOR}{GREEN}");

#define sub_quest(n, d, m, o) {.name = n, .desc = d, .map = m, .object = o}
static const struct SubQuest sSubQuests1[SUB_QUEST_1_COUNT] =
{
	sub_quest(gText_SubQuest1_Name1,  gText_SubQuest1_Desc1,  gText_SideQuestMap1, OBJ_EVENT_GFX_WALLY),
	sub_quest(gText_SubQuest1_Name2,  gText_SubQuest1_Desc2,  gText_SideQuestMap2, OBJ_EVENT_GFX_WALLY),
	sub_quest(gText_SubQuest1_Name3,  gText_SubQuest1_Desc3,  gText_SideQuestMap3, OBJ_EVENT_GFX_WALLY),
	sub_quest(gText_SubQuest1_Name4,  gText_SubQuest1_Desc4,  gText_SideQuestMap4, OBJ_EVENT_GFX_WALLY),
	sub_quest(gText_SubQuest1_Name5,  gText_SubQuest1_Desc5,  gText_SideQuestMap5, OBJ_EVENT_GFX_WALLY),
	sub_quest(gText_SubQuest1_Name6,  gText_SubQuest1_Desc6,  gText_SideQuestMap6, OBJ_EVENT_GFX_WALLY),
	sub_quest(gText_SubQuest1_Name7,  gText_SubQuest1_Desc7,  gText_SideQuestMap7, OBJ_EVENT_GFX_WALLY),
	sub_quest(gText_SubQuest1_Name8,  gText_SubQuest1_Desc8,  gText_SideQuestMap8, OBJ_EVENT_GFX_WALLY),
	sub_quest(gText_SubQuest1_Name9,  gText_SubQuest1_Desc9,  gText_SideQuestMap9, OBJ_EVENT_GFX_WALLY),
	sub_quest(gText_SubQuest1_Name10, gText_SubQuest1_Desc10, gText_SideQuestMap10, OBJ_EVENT_GFX_WALLY),

};

static const struct SubQuest sSubQuests2[SUB_QUEST_2_COUNT] =
{
	sub_quest(gText_SubQuest2_Name1,  gText_SubQuest2_Desc1,  gText_SideQuestMap1, OBJ_EVENT_GFX_WALLY),
	sub_quest(gText_SubQuest2_Name2,  gText_SubQuest2_Desc2,  gText_SideQuestMap2, OBJ_EVENT_GFX_WALLY),
	sub_quest(gText_SubQuest2_Name3,  gText_SubQuest2_Desc3,  gText_SideQuestMap3, OBJ_EVENT_GFX_WALLY),
	sub_quest(gText_SubQuest2_Name4,  gText_SubQuest2_Desc4,  gText_SideQuestMap4, OBJ_EVENT_GFX_WALLY),
	sub_quest(gText_SubQuest2_Name5,  gText_SubQuest2_Desc5,  gText_SideQuestMap5, OBJ_EVENT_GFX_WALLY),
	sub_quest(gText_SubQuest2_Name6,  gText_SubQuest2_Desc6,  gText_SideQuestMap6, OBJ_EVENT_GFX_WALLY),
	sub_quest(gText_SubQuest2_Name7,  gText_SubQuest2_Desc7,  gText_SideQuestMap7, OBJ_EVENT_GFX_WALLY),
	sub_quest(gText_SubQuest2_Name8,  gText_SubQuest2_Desc8,  gText_SideQuestMap8, OBJ_EVENT_GFX_WALLY),
	sub_quest(gText_SubQuest2_Name9,  gText_SubQuest2_Desc9,  gText_SideQuestMap9, OBJ_EVENT_GFX_WALLY),
	sub_quest(gText_SubQuest2_Name10, gText_SubQuest2_Desc10, gText_SideQuestMap10, OBJ_EVENT_GFX_WALLY),
	sub_quest(gText_SubQuest2_Name11,  gText_SubQuest2_Desc11,  gText_SideQuestMap11, OBJ_EVENT_GFX_WALLY),
	sub_quest(gText_SubQuest2_Name12,  gText_SubQuest2_Desc12,  gText_SideQuestMap12, OBJ_EVENT_GFX_WALLY),
	sub_quest(gText_SubQuest2_Name13,  gText_SubQuest2_Desc13,  gText_SideQuestMap13, OBJ_EVENT_GFX_WALLY),
	sub_quest(gText_SubQuest2_Name14,  gText_SubQuest2_Desc14,  gText_SideQuestMap14, OBJ_EVENT_GFX_WALLY),
	sub_quest(gText_SubQuest2_Name15,  gText_SubQuest2_Desc15,  gText_SideQuestMap15, OBJ_EVENT_GFX_WALLY),
	sub_quest(gText_SubQuest2_Name16,  gText_SubQuest2_Desc16,  gText_SideQuestMap16, OBJ_EVENT_GFX_WALLY),
	sub_quest(gText_SubQuest2_Name17,  gText_SubQuest2_Desc17,  gText_SideQuestMap17, OBJ_EVENT_GFX_WALLY),
	sub_quest(gText_SubQuest2_Name18,  gText_SubQuest2_Desc18,  gText_SideQuestMap18, OBJ_EVENT_GFX_WALLY),
	sub_quest(gText_SubQuest2_Name19,  gText_SubQuest2_Desc19,  gText_SideQuestMap19, OBJ_EVENT_GFX_WALLY),
	sub_quest(gText_SubQuest2_Name20, gText_SubQuest2_Desc20, gText_SideQuestMap20, OBJ_EVENT_GFX_WALLY),

};

#define side_quest(n, d, dd, m, o, sq, ct, ns) {.name = n, .desc = d, .donedesc = dd, .map = m, .object = o, .subquests = sq, .childtype = ct, .numSubquests = ns}
static const struct SideQuest sSideQuests[SIDE_QUEST_COUNT] =
{
	side_quest(gText_SideQuestName_1,  gText_SideQuestDesc_1, gText_SideQuestDoneDesc_1,  gText_SideQuestMap1, OBJ_EVENT_GFX_WALLY, sSubQuests1, SUBQUEST_FIND, SUB_QUEST_1_COUNT),
	side_quest(gText_SideQuestName_2,  gText_SideQuestDesc_2, gText_SideQuestDoneDesc_2,  gText_SideQuestMap2, OBJ_EVENT_GFX_WALLY, sSubQuests2, SUBQUEST_CATCH, SUB_QUEST_2_COUNT),
	side_quest(gText_SideQuestName_3,  gText_SideQuestDesc_3, gText_SideQuestDoneDesc_3,  gText_SideQuestMap3, OBJ_EVENT_GFX_WALLY,  NULL, 0, 0),
	side_quest(gText_SideQuestName_4,  gText_SideQuestDesc_4, gText_SideQuestDoneDesc_4,  gText_SideQuestMap4, OBJ_EVENT_GFX_WALLY,  NULL, 0, 0),
	side_quest(gText_SideQuestName_5,  gText_SideQuestDesc_5, gText_SideQuestDoneDesc_5,  gText_SideQuestMap5, OBJ_EVENT_GFX_WALLY,  NULL, 0, 0),
	side_quest(gText_SideQuestName_6,  gText_SideQuestDesc_6, gText_SideQuestDoneDesc_6,  gText_SideQuestMap6, OBJ_EVENT_GFX_WALLY,  NULL, 0, 0),
	side_quest(gText_SideQuestName_7,  gText_SideQuestDesc_7, gText_SideQuestDoneDesc_7,  gText_SideQuestMap7, OBJ_EVENT_GFX_WALLY,  NULL, 0, 0),
	side_quest(gText_SideQuestName_8,  gText_SideQuestDesc_8, gText_SideQuestDoneDesc_8,  gText_SideQuestMap8, OBJ_EVENT_GFX_WALLY,  NULL, 0, 0),
	side_quest(gText_SideQuestName_9,  gText_SideQuestDesc_9, gText_SideQuestDoneDesc_9,  gText_SideQuestMap9, OBJ_EVENT_GFX_WALLY,  NULL, 0, 0),
	side_quest(gText_SideQuestName_10, gText_SideQuestDesc_10, gText_SideQuestDoneDesc_10, gText_SideQuestMap10, OBJ_EVENT_GFX_WALLY, NULL, 0, 0),
	side_quest(gText_SideQuestName_11, gText_SideQuestDesc_11, gText_SideQuestDoneDesc_11, gText_SideQuestMap11, OBJ_EVENT_GFX_WALLY, NULL, 0, 0),
	side_quest(gText_SideQuestName_12, gText_SideQuestDesc_12, gText_SideQuestDoneDesc_12, gText_SideQuestMap12, OBJ_EVENT_GFX_WALLY, NULL, 0, 0),
	side_quest(gText_SideQuestName_13, gText_SideQuestDesc_13, gText_SideQuestDoneDesc_13, gText_SideQuestMap13, OBJ_EVENT_GFX_WALLY, NULL, 0, 0),
	side_quest(gText_SideQuestName_14, gText_SideQuestDesc_14, gText_SideQuestDoneDesc_14, gText_SideQuestMap14, OBJ_EVENT_GFX_WALLY, NULL, 0, 0),
	side_quest(gText_SideQuestName_15, gText_SideQuestDesc_15, gText_SideQuestDoneDesc_15, gText_SideQuestMap15, OBJ_EVENT_GFX_WALLY, NULL, 0, 0),
	side_quest(gText_SideQuestName_16, gText_SideQuestDesc_16, gText_SideQuestDoneDesc_16, gText_SideQuestMap16, OBJ_EVENT_GFX_WALLY, NULL, 0, 0),
	side_quest(gText_SideQuestName_17, gText_SideQuestDesc_17, gText_SideQuestDoneDesc_17, gText_SideQuestMap17, OBJ_EVENT_GFX_WALLY, NULL, 0, 0),
	side_quest(gText_SideQuestName_18, gText_SideQuestDesc_18, gText_SideQuestDoneDesc_18, gText_SideQuestMap18, OBJ_EVENT_GFX_WALLY, NULL, 0, 0),
	side_quest(gText_SideQuestName_19, gText_SideQuestDesc_19, gText_SideQuestDoneDesc_19, gText_SideQuestMap19, OBJ_EVENT_GFX_WALLY, NULL, 0, 0),
	side_quest(gText_SideQuestName_20, gText_SideQuestDesc_20, gText_SideQuestDoneDesc_20, gText_SideQuestMap20, OBJ_EVENT_GFX_WALLY, NULL, 0, 0),
	side_quest(gText_SideQuestName_21, gText_SideQuestDesc_21, gText_SideQuestDoneDesc_21, gText_SideQuestMap21, OBJ_EVENT_GFX_WALLY, NULL, 0, 0),
	side_quest(gText_SideQuestName_22, gText_SideQuestDesc_22, gText_SideQuestDoneDesc_22, gText_SideQuestMap22, OBJ_EVENT_GFX_WALLY, NULL, 0, 0),
	side_quest(gText_SideQuestName_23, gText_SideQuestDesc_23, gText_SideQuestDoneDesc_23, gText_SideQuestMap23, OBJ_EVENT_GFX_WALLY, NULL, 0, 0),
	side_quest(gText_SideQuestName_24, gText_SideQuestDesc_24, gText_SideQuestDoneDesc_24, gText_SideQuestMap24, OBJ_EVENT_GFX_WALLY, NULL, 0, 0),
	side_quest(gText_SideQuestName_25, gText_SideQuestDesc_25, gText_SideQuestDoneDesc_25, gText_SideQuestMap25, OBJ_EVENT_GFX_WALLY, NULL, 0, 0),
	side_quest(gText_SideQuestName_26, gText_SideQuestDesc_26, gText_SideQuestDoneDesc_26, gText_SideQuestMap26, OBJ_EVENT_GFX_WALLY, NULL, 0, 0),
	side_quest(gText_SideQuestName_27, gText_SideQuestDesc_27, gText_SideQuestDoneDesc_27, gText_SideQuestMap27, OBJ_EVENT_GFX_WALLY, NULL, 0, 0),
	side_quest(gText_SideQuestName_28, gText_SideQuestDesc_28, gText_SideQuestDoneDesc_28, gText_SideQuestMap28, OBJ_EVENT_GFX_WALLY, NULL, 0, 0),
	side_quest(gText_SideQuestName_29, gText_SideQuestDesc_29, gText_SideQuestDoneDesc_29, gText_SideQuestMap29, OBJ_EVENT_GFX_WALLY, NULL, 0, 0),
	side_quest(gText_SideQuestName_30, gText_SideQuestDesc_30, gText_SideQuestDoneDesc_30, gText_SideQuestMap30, OBJ_EVENT_GFX_WALLY, NULL, 0, 0),
};

static const struct BgTemplate sQuestMenuBgTemplates[2] =
{
	{
		.bg = 0, //content
		.charBaseIndex = 0,
		.mapBaseIndex = 31,
		.priority = 1
	},
	{
		.bg = 1, //loads UI tilemap
		.charBaseIndex = 3,
		.mapBaseIndex = 30,
		.priority = 2
	}
};

static const u8 sQuestMenuWindowFontColors[][4] =
{
	{TEXT_COLOR_TRANSPARENT,  TEXT_COLOR_WHITE,      TEXT_COLOR_DARK_GRAY},
	{TEXT_COLOR_TRANSPARENT,  TEXT_COLOR_RED,      TEXT_COLOR_TRANSPARENT},
	{TEXT_COLOR_TRANSPARENT,  TEXT_COLOR_GREEN,      TEXT_COLOR_TRANSPARENT},
	{TEXT_COLOR_TRANSPARENT,  TEXT_COLOR_BLUE,      TEXT_COLOR_TRANSPARENT},
};

static const struct WindowTemplate sQuestMenuHeaderWindowTemplates[] =
{
	{
		//0: List of items pane
		.bg = 0,
		.tilemapLeft = 0,
		.tilemapTop = 2,
		.width = 30,
		.height = 8,
		.paletteNum = 15,
		.baseBlock = 1
	},
	{
		//1: Description / Location pane
		.bg = 0,
		.tilemapLeft = 0,
		.tilemapTop = 12,
		.width = 30,
		.height = 12,
		.paletteNum = 15,
		.baseBlock = 361
	},
	{
		// 2: mission title or filter type header
		.bg = 0,
		.tilemapLeft = 0,
		.tilemapTop = 0,
		.width = 30,
		.height = 2,
		.paletteNum = 15,
		.baseBlock = 721
	},
	DUMMY_WIN_TEMPLATE
};

// Functions -> ported from pokefirered
void QuestMenu_Init(u8 a0, MainCallback callback)
{
	u8 i;

	if (a0 >= 2)
	{
		SetMainCallback2(callback);
		return;
	}

	if ((sStateDataPtr = Alloc(sizeof(struct QuestMenuResources))) == NULL)
	{
		SetMainCallback2(callback);
		return;
	}

	if (a0 != 1)
	{
		sListMenuState.savedCallback = callback;
		sListMenuState.scroll = sListMenuState.row = 0;
	}

	sStateDataPtr->moveModeOrigPos = 0xFF;
	sStateDataPtr->itemMenuIconSlot = 0;
	sStateDataPtr->scrollIndicatorArrowPairId = 0xFF;
	sStateDataPtr->savedCallback = 0;
	for (i = 0; i < 3; i++)
	{
		sStateDataPtr->data[i] = 0;
	}

	SetMainCallback2(QuestMenu_RunSetup);
}

static void QuestMenu_MainCB(void)
{
	RunTasks();
	AnimateSprites();
	BuildOamBuffer();
	DoScheduledBgTilemapCopiesToVram();
	UpdatePaletteFade();
}

static void QuestMenu_VBlankCB(void)
{
	LoadOam();
	ProcessSpriteCopyRequests();
	TransferPlttBuffer();
}

static void QuestMenu_RunSetup(void)
{
	while (1)
	{
		if (QuestMenu_DoGfxSetup() == TRUE)
		{
			break;
		}
	}
}

static bool8 QuestMenu_DoGfxSetup(void)
{
	u8 taskId;
	switch (gMain.state)
	{
		case 0:
			SetVBlankHBlankCallbacksToNull();
			ClearScheduledBgCopiesToVram();
			gMain.state++;
			break;
		case 1:
			ScanlineEffect_Stop();
			gMain.state++;
			break;
		case 2:
			FreeAllSpritePalettes();
			gMain.state++;
			break;
		case 3:
			ResetPaletteFade();
			gMain.state++;
			break;
		case 4:
			ResetSpriteData();
			gMain.state++;
			break;
		case 5:
			ResetItemMenuIconState();
			gMain.state++;
			break;
		case 6:
			ResetTasks();
			gMain.state++;
			break;
		case 7:
			if (QuestMenu_InitBgs())
			{
				sStateDataPtr->data[0] = 0;
				gMain.state++;
			}
			else
			{
				QuestMenu_FadeAndBail();
				return TRUE;
			}
			break;
		case 8:
			if (QuestMenu_LoadGraphics() == TRUE)
			{
				gMain.state++;
			}
			break;
		case 9:
			//Loads the background, text and sprites will still spawn
			QuestMenu_InitWindows();
			gMain.state++;
			break;
		case 10:
			//When commented out, question marks loads for every slot and page does not scroll when going past number 6
			QuestMenu_InitModeOnStartup();
			QuestMenu_InitItems();
			//Doesn't seem to do anything?
			QuestMenu_SetCursorPosition();
			//Doesn't seem to do anything?
			QuestMenu_SetScrollPosition();
			gMain.state++;
			break;
		case 11:
			//If allocating resource for the itemsin quest menu works, then advance, otherwise quit the quest menu
			if (QuestMenu_AllocateResourcesForListMenu())
			{
				gMain.state++;
			}
			else
			{
				QuestMenu_FadeAndBail();
				return TRUE;
			}
			break;
		case 12:
			//print the quest titles, avatars, desc and status
			//When this is gone, page does not seem to play nice
			QuestMenu_BuildFilteredMenuTemplate();
			gMain.state++;
			break;
		case 13:
			//header does not print
			QuestMenu_PrintHeader();
			gMain.state++;
			break;
		case 14:
			//sub_80985E4();
			gMain.state++;
			break;
		case 15:
			//everything loads, but cannot scroll or quit the meun
			taskId = CreateTask(Task_QuestMenuMain, 0);
			//background loads but interface is entirely glitched out
			gTasks[taskId].data[0] = ListMenuInit(&gMultiuseListMenuTemplate, sListMenuState.scroll,
			                                      sListMenuState.row);
			gMain.state++;
			break;
		case 16:
			//arrows at the top and bottom don't appear without this
			QuestMenu_PlaceTopMenuScrollIndicatorArrows();
			gMain.state++;
			break;
		case 17:
			gMain.state++;
			break;
		case 18:
			//unknown
			if (sListMenuState.initialized == 1)
			{
				BlendPalettes(0xFFFFFFFF, 16, RGB_BLACK);
			}
			gMain.state++;
			break;
		case 19:
			//unknown
			if (sListMenuState.initialized == 1)
			{
				BeginNormalPaletteFade(0xFFFFFFFF, 0, 16, 0, RGB_BLACK);
			}
			else
			{

				BeginNormalPaletteFade(0xFFFFFFFF, 0, 16, 0, RGB_BLACK);
				QuestMenu_SetInitializedFlag(1);
			}
			gMain.state++;
			break;
		default:
			//quest menu begins and loads, you can quit, but cannot see or interact
			SetVBlankCallback(QuestMenu_VBlankCB);
			//screen goes to black, nothing else happens
			SetMainCallback2(QuestMenu_MainCB);
			return TRUE;
	}
	return FALSE;
}

static void QuestMenu_FadeAndBail(void)
{
	BeginNormalPaletteFade(0xFFFFFFFF, 0, 0, 16, RGB_BLACK);
	CreateTask(Task_QuestMenuWaitFadeAndBail, 0);
	SetVBlankCallback(QuestMenu_VBlankCB);
	SetMainCallback2(QuestMenu_MainCB);
}

static void Task_QuestMenuWaitFadeAndBail(u8 taskId)
{
	if (!gPaletteFade.active)
	{
		SetMainCallback2(sListMenuState.savedCallback);
		QuestMenu_FreeResources();
		DestroyTask(taskId);
	}
}

static bool8 QuestMenu_InitBgs(void)
{
	ResetAllBgsCoordinatesAndBgCntRegs();
	sBg1TilemapBuffer = Alloc(0x800);
	if (sBg1TilemapBuffer == NULL)
	{
		return FALSE;
	}

	memset(sBg1TilemapBuffer, 0, 0x800);
	ResetBgsAndClearDma3BusyFlags(0);
	InitBgsFromTemplates(0, sQuestMenuBgTemplates, NELEMS(sQuestMenuBgTemplates));
	SetBgTilemapBuffer(1, sBg1TilemapBuffer);
	ScheduleBgCopyTilemapToVram(1);
	SetGpuReg(REG_OFFSET_DISPCNT, DISPCNT_OBJ_1D_MAP | DISPCNT_OBJ_ON);
	SetGpuReg(REG_OFFSET_BLDCNT, 0);
	ShowBg(0);
	ShowBg(1);
	return TRUE;
}

static bool8 QuestMenu_LoadGraphics(void)
{
	switch (sStateDataPtr->data[0])
	{
		case 0:
			ResetTempTileDataBuffers();
			DecompressAndCopyTileDataToVram(1, sQuestMenuTiles, 0, 0, 0);
			sStateDataPtr->data[0]++;
			break;
		case 1:
			if (FreeTempTileDataBuffersIfPossible() != TRUE)
			{
				LZDecompressWram(sQuestMenuTilemap, sBg1TilemapBuffer);
				sStateDataPtr->data[0]++;
			}
			break;
		case 2:
			LoadCompressedPalette(sQuestMenuBgPals, 0x00, 0x60);
			sStateDataPtr->data[0]++;
			break;
		case 3:
			sStateDataPtr->data[0]++;
			break;
		default:
			sStateDataPtr->data[0] = 0;
			return TRUE;
	}
	return FALSE;
}

#define try_alloc(ptr__, size) ({ \
		void ** ptr = (void **)&(ptr__);             \
		*ptr = Alloc(size);                 \
		if (*ptr == NULL)                   \
		{                                   \
			QuestMenu_FreeResources();                  \
			QuestMenu_FadeAndBail();                  \
			return FALSE;                   \
		}                                   \
	})

static bool8 QuestMenu_AllocateResourcesForListMenu(void)
{
	try_alloc(sListMenuItems, sizeof(struct ListMenuItem) * QuestMenu_GenerateTotalItems(
	                sStateDataPtr->filterMode) + 1);
	return TRUE;
}

static s8 QuestMenu_CheckHasChildren(u16 itemId)
{
	if (sSideQuests[itemId].childtype != 0 && GetSetQuestFlag(itemId, FLAG_GET_UNLOCKED)
	            && !GetSetQuestFlag(itemId, FLAG_GET_INACTIVE))
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}

static u8 QuestMenu_GenerateTotalItems(u8 mode)
{
	u8 parentQuest = sStateDataPtr->parentQuest;

	switch (mode)
	{
		case SORT_DEFAULT:
			return SIDE_QUEST_COUNT+ 1;
		case SORT_INACTIVE:
			return QuestMenu_CountInactiveQuests() + 1;
		case SORT_ACTIVE:
			return QuestMenu_CountActiveQuests() + 1;
		case SORT_REWARD:
			return QuestMenu_CountRewardQuests() + 1;
		case SORT_DONE:
			return QuestMenu_CountCompletedQuests() + 1;
		default:
			return sSideQuests[parentQuest].numSubquests + 1;
	}
}


static bool8 QuestMenu_CheckDefaultMode(void)
{
	if (sStateDataPtr->filterMode == FLAG_GET_UNLOCKED)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}

static bool8 QuestMenu_CheckSubquestMode(void)
{
	if (sStateDataPtr->filterMode > SORT_DONE)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}

static void QuestMenu_AssignCancelNameAndId(u8 numRow)
{

	if (QuestMenu_CheckSubquestMode())
	{
		sListMenuItems[numRow].name = sText_QuestMenu_Back;
		sListMenuItems[numRow].id = LIST_CANCEL;
	}
	else
	{
		sListMenuItems[numRow].name = sText_QuestMenu_Close;
		sListMenuItems[numRow].id = LIST_CANCEL;
	}
}

static u16 QuestMenu_BuildFilteredMenuTemplate(void)
{
	u8 parentQuest = sStateDataPtr->parentQuest;
	u16 countQuest, numRow = 0;
	u8 lastRow, newRow, offset = 0;
	u8 i;
    MgbaPrintf(4,"buildfiltered");

	questNameArray = Alloc(sizeof(void *) * SIDE_QUEST_COUNT);

	for (i = 0; i < 32; i++)
	{
		questNameArray[i] = Alloc(sizeof(u8) * 32);
	}

    MgbaPrintf(4,"mode %u",sStateDataPtr->filterMode);
    MgbaPrintf(4,"mode %u",sStateDataPtr->filterMode);

	if (QuestMenu_CheckSubquestMode())
	{
		countQuest = 0;
		parentQuest = sStateDataPtr->parentQuest;

		for (numRow = 0; numRow < sSideQuests[parentQuest].numSubquests; numRow++)
		{
            MgbaPrintf(4,"uh hello %u",numRow);
			questNamePointer = ConvertIntToDecimalStringN(questNameArray[countQuest], countQuest + 1,
			                   STR_CONV_MODE_LEFT_ALIGN, 2);
			questNamePointer = StringAppend(questNamePointer, sText_QuestMenu_DotSpace);

			if (ChangeSubQuestFlags(parentQuest, FLAG_GET_COMPLETED, countQuest))
			{
				questNamePointer = StringAppend(questNamePointer,
				                                sSideQuests[parentQuest].subquests[countQuest].name);
			}
			else
			{
				questNamePointer = StringAppend(questNamePointer, sText_QuestMenu_Unk);
			}

			sListMenuItems[numRow].name = questNameArray[countQuest];
			sListMenuItems[numRow].id = countQuest;
			countQuest++;
			lastRow = numRow + 1;
		}
	}
	else if (!QuestMenu_CheckDefaultMode())
	{

		for (countQuest = 0; countQuest < sStateDataPtr->nItems; countQuest++)
		{
			if (GetSetQuestFlag(countQuest, sStateDataPtr->filterMode))
			{
				questNamePointer = StringCopy(questNameArray[countQuest], sText_Empty);

				if (GetSetQuestFlag(countQuest, FLAG_GET_FAVORITE))
				{
					questNamePointer = StringAppend(questNameArray[countQuest], sText_QuestMenu_GreenColor);
					newRow = numRow;
					numRow++;
				}
				else
				{
					newRow = QuestMenu_CountFavoriteAndState() + offset;
					offset++;
				}

				if (GetSetQuestFlag(countQuest, FLAG_GET_UNLOCKED))
				{
					questNamePointer = StringAppend(questNameArray[countQuest], sSideQuests[countQuest].name);

					if (QuestMenu_CheckHasChildren(countQuest))
					{
						questNamePointer = StringAppend(questNameArray[countQuest], sText_QuestMenu_SubQuestButton);
					}
				}
				else
				{
					StringAppend(questNameArray[countQuest], sText_QuestMenu_Unk);
				}

				sListMenuItems[newRow].name = questNameArray[countQuest];
				sListMenuItems[newRow].id = countQuest;
			}
		}
		lastRow = numRow + offset;
	}
	else
	{
		for (countQuest = 0; countQuest < sStateDataPtr->nItems; countQuest++)
		{
			questNamePointer = StringCopy(questNameArray[countQuest], sText_Empty);

			if (GetSetQuestFlag(countQuest, FLAG_GET_FAVORITE))
			{
				questNamePointer = StringAppend(questNameArray[countQuest], sText_QuestMenu_GreenColor);
				newRow = numRow;
				numRow++;
			}
			else
			{
				newRow = QuestMenu_CountFavoriteQuests() + offset;
				offset++;
			}

			if (GetSetQuestFlag(countQuest, FLAG_GET_UNLOCKED))
			{
				questNamePointer = StringAppend(questNameArray[countQuest], sSideQuests[countQuest].name);

				if (QuestMenu_CheckHasChildren(countQuest))
				{
					questNamePointer = StringAppend(questNameArray[countQuest], sText_QuestMenu_SubQuestButton);
				}
			}
			else
			{
				StringAppend(questNameArray[countQuest], sText_QuestMenu_Unk);
			}

			sListMenuItems[newRow].name = questNameArray[countQuest];
			sListMenuItems[newRow].id = countQuest;
			lastRow = numRow + offset;
		}
	}

	QuestMenu_AssignCancelNameAndId(lastRow);

	gMultiuseListMenuTemplate.totalItems = QuestMenu_GenerateTotalItems(sStateDataPtr->filterMode);
	gMultiuseListMenuTemplate.items = sListMenuItems;
	gMultiuseListMenuTemplate.windowId = 0;
	gMultiuseListMenuTemplate.header_X = 0;
	gMultiuseListMenuTemplate.cursor_X = 15;
	gMultiuseListMenuTemplate.item_X = 23;
	gMultiuseListMenuTemplate.lettersSpacing = 1;
	gMultiuseListMenuTemplate.itemVerticalPadding = 2;
	gMultiuseListMenuTemplate.upText_Y = 2;
	gMultiuseListMenuTemplate.maxShowed = sStateDataPtr->maxShowed;
	gMultiuseListMenuTemplate.fontId = 2;
	gMultiuseListMenuTemplate.cursorPal = 2;
	gMultiuseListMenuTemplate.fillValue = 0;
	gMultiuseListMenuTemplate.cursorShadowPal = 0;
	gMultiuseListMenuTemplate.moveCursorFunc = QuestMenu_MoveCursorFunc;
	gMultiuseListMenuTemplate.itemPrintFunc = QuestMenu_PrintProgressFunc;
	gMultiuseListMenuTemplate.scrollMultiple = 1;
	gMultiuseListMenuTemplate.cursorKind = 0;
}

void CreateObjectMenuIcon(u16 itemId, u8 idx)
{
	u8 *ptr = &gUnknown_2039878[10];
	u8 spriteId;

	if (ptr[idx] == 0xFF)
	{

		FreeSpriteTilesByTag(102 + idx);
		FreeSpritePaletteByTag(102 + idx);


		spriteId = CreateObjectGraphicsSprite(itemId, SpriteCallbackDummy, 20, 132, 0);
		if (spriteId != MAX_SPRITES)
		{
			ptr[idx] = spriteId;
		}

	}
}

void CreateItemMenuIcon(u16 itemId, u8 idx)
{
	u8 *ptr = &gUnknown_2039878[10];
	u8 spriteId;
	struct SpriteSheet spriteSheet;
	struct CompressedSpritePalette spritePalette;
	struct SpriteTemplate *spriteTemplate;

	if (ptr[idx] == 0xFF)
	{
		FreeSpriteTilesByTag(102 + idx);
		FreeSpritePaletteByTag(102 + idx);

		spriteId = AddItemIconSprite(102 + idx, 102 + idx, itemId);

		if (spriteId != MAX_SPRITES)
		{
			ptr[idx] = spriteId;
			gSprites[spriteId].x2 = 24;
			gSprites[spriteId].y2 = 140;
		}
	}
}

void ResetItemMenuIconState(void)
{
	u16 i;

	for (i = 0; i < NELEMS(gUnknown_2039878); i++)
	{
		gUnknown_2039878[i] = 0xFF;
	}
}

void DestroyItemMenuIcon(u8 idx)
{
	u8 *ptr = &gUnknown_2039878[10];

	if (ptr[idx] != 0xFF)
	{
		DestroySpriteAndFreeResources(&gSprites[ptr[idx]]);
		ptr[idx] = 0xFF;
	}
}

void DestroyObjectMenuIcon(u8 idx)
{
	u8 *ptr = &gUnknown_2039878[10];

	if (ptr[idx] != 0xFF)
	{
		DestroySpriteAndFreeResources(&gSprites[ptr[idx]]);
		ptr[idx] = 0xFF;
	}
}

static void QuestMenu_MoveCursorFunc(s32 itemIndex, bool8 onInit, struct ListMenu *list)
{
	u16 itemId;
	u8 parentQuest = sStateDataPtr->parentQuest;
	const u8 *desc;

	if (onInit != TRUE)
	{
		PlaySE(SE_RG_BAG_CURSOR);
	}

	if (sStateDataPtr->moveModeOrigPos == 0xFF)
	{
		if (itemIndex != LIST_CANCEL)
		{
			DestroyObjectMenuIcon(sStateDataPtr->itemMenuIconSlot ^ 1);
			DestroyItemMenuIcon(sStateDataPtr->itemMenuIconSlot ^ 1);

			if (!QuestMenu_CheckSubquestMode())
			{
				if (GetSetQuestFlag(itemIndex, FLAG_GET_UNLOCKED))
				{

					//Look up the quest struct and get the description with this quest
					if (GetSetQuestFlag(itemIndex, FLAG_GET_REWARD))
					{
						StringCopy(gStringVar1, sText_QuestMenu_ReturnRecieveReward);
					}
					if (GetSetQuestFlag(itemIndex, FLAG_GET_COMPLETED))
					{
						StringCopy(gStringVar1, sSideQuests[itemIndex].donedesc);
					}
					else
					{
						StringCopy(gStringVar1, sSideQuests[itemIndex].desc);
					}
				}
				else
				{
					StringCopy(gStringVar1, sText_QuestMenu_StartForMore);
				}
				StringCopy(gStringVar2, sSideQuests[itemIndex].map);
			}
			else
			{

				if (ChangeSubQuestFlags(parentQuest, FLAG_GET_COMPLETED, itemIndex))
				{
					itemId = sSideQuests[parentQuest].subquests[itemIndex].object;
					StringCopy(gStringVar1, sSideQuests[parentQuest].subquests[itemIndex].desc);
				}
				else
				{
					CreateItemMenuIcon(ITEM_NONE, sStateDataPtr->itemMenuIconSlot);
					StringCopy(gStringVar1,  sText_Empty);
				}

				StringCopy(gStringVar2, sSideQuests[parentQuest].subquests[itemIndex].map);
				StringExpandPlaceholders(gStringVar4, sText_QuestMenu_ShowLocation);
				StringExpandPlaceholders(gStringVar3, gStringVar1);

				CreateObjectMenuIcon(itemId, sStateDataPtr->itemMenuIconSlot);
			}

			StringExpandPlaceholders(gStringVar4, sText_QuestMenu_ShowLocation);
			StringExpandPlaceholders(gStringVar3, gStringVar1);

			itemId = sSideQuests[itemIndex].object;
			CreateObjectMenuIcon(itemId, sStateDataPtr->itemMenuIconSlot);
		}
		else
		{
			DestroyObjectMenuIcon(sStateDataPtr->itemMenuIconSlot ^ 1);
			CreateItemMenuIcon(-1, sStateDataPtr->itemMenuIconSlot);
			StringCopy(gStringVar4, sText_Empty);
			StringCopy(gStringVar3, sText_Empty);
		}

		sStateDataPtr->itemMenuIconSlot ^= 1;
		FillWindowPixelBuffer(1, 0);

		QuestMenu_AddTextPrinterParameterized(1, 2, gStringVar4, 2, 3, 2, 0, 0, 0);
		QuestMenu_AddTextPrinterParameterized(1, 2, gStringVar3, 40, 19, 5, 0, 0, 0);
	}
}

static void QuestMenu_PrintProgressFunc(u8 windowId, u32 itemId, u8 y)
{
	u8 colorIndex = 0;
	u8 questType;
	u8 parentQuest = sStateDataPtr->parentQuest;
	questType = sSideQuests[parentQuest].childtype;

	if (sStateDataPtr->moveModeOrigPos != 0xFF)
	{
		if (sStateDataPtr->moveModeOrigPos == (u8)itemId)
		{
			QuestMenu_PrintOrRemoveCursorAt(y, 2);
		}
		else
		{
			QuestMenu_PrintOrRemoveCursorAt(y, 0xFF);
		}
	}

	if (itemId != LIST_CANCEL)
	{
		if (QuestMenu_CheckSubquestMode())
		{
			if (ChangeSubQuestFlags(parentQuest, FLAG_GET_COMPLETED, itemId))
			{
				colorIndex = 2;
				switch (questType)
				{
					case SUBQUEST_CATCH:
						StringCopy(gStringVar4, sText_QuestMenu_Caught);
						break;
					case SUBQUEST_FIND:
						StringCopy(gStringVar4, sText_QuestMenu_Found);
						break;
					case SUBQUEST_READ:
						StringCopy(gStringVar4, sText_QuestMenu_Read);
						break;
				}
			}
			else
			{
				StringCopy(gStringVar4, sText_Empty);
			}
		}
		else
		{
			if (GetSetQuestFlag(itemId, FLAG_GET_COMPLETED))
			{
				StringCopy(gStringVar4, sText_QuestMenu_Complete);
				colorIndex = 2;
			}
			else if (GetSetQuestFlag(itemId, FLAG_GET_REWARD))
			{
				StringCopy(gStringVar4, sText_QuestMenu_Reward);
				colorIndex = 1;
			}
			else if (GetSetQuestFlag(itemId, FLAG_GET_ACTIVE))
			{
				StringCopy(gStringVar4, sText_QuestMenu_Active);
				colorIndex = 3;
			}
			else
			{
				StringCopy(gStringVar4, sText_Empty);
			}
		}
		QuestMenu_AddTextPrinterParameterized(windowId, 0, gStringVar4, 200, y, 0, 0, 0xFF, colorIndex);
	}
}

static void QuestMenu_PrintOrRemoveCursor(u8 listMenuId, u8 colorIdx)
{
	QuestMenu_PrintOrRemoveCursorAt(ListMenuGetYCoordForPrintingArrowCursor(listMenuId), colorIdx);
}

static void QuestMenu_PrintOrRemoveCursorAt(u8 y, u8 colorIdx)
{
	if (colorIdx == 0xFF)
	{
		u8 maxWidth = GetFontAttribute(1, FONTATTR_MAX_LETTER_WIDTH);
		u8 maxHeight = GetFontAttribute(1, FONTATTR_MAX_LETTER_HEIGHT);
		FillWindowPixelRect(0, 0, 0, y, maxWidth, maxHeight);
	}
	else
	{
		QuestMenu_AddTextPrinterParameterized(0, 2, gText_SelectorArrow, 0, y, 0, 0, 0, colorIdx);
	}
}

s8 QuestMenu_CountUnlockedQuests(void)
{
	u8 i;
	u8 q = 0;

	for (i = 0; i < SIDE_QUEST_COUNT; i++)
	{
		if (GetSetQuestFlag(i, FLAG_GET_UNLOCKED))
		{
			q++;
		}
	}
	return q;
}

s8 QuestMenu_CountInactiveQuests(void)
{
	u8 i;
	u8 q = 0;

	for (i = 0; i < SIDE_QUEST_COUNT; i++)
	{
		if (GetSetQuestFlag(i, FLAG_GET_INACTIVE))
		{
			q++;
		}
	}
	return q;
}

s8 QuestMenu_CountActiveQuests(void)
{
	u8 i;
	u8 q = 0;

	for (i = 0; i < SIDE_QUEST_COUNT; i++)
	{
		if (GetSetQuestFlag(i, FLAG_GET_ACTIVE))
		{
			q++;
		}
	}
	return q;
}

s8 QuestMenu_CountRewardQuests(void)
{
	u8 i;
	u8 q = 0;

	for (i = 0; i < SIDE_QUEST_COUNT; i++)
	{
		if (GetSetQuestFlag(i, FLAG_GET_REWARD))
		{
			q++;
		}
	}
	return q;
}

s8 QuestMenu_CountFavoriteQuests(void)
{
	u8 i;
	u8 q = 0;

	for (i = 0; i < SIDE_QUEST_COUNT; i++)
	{
		if (GetSetQuestFlag(i, FLAG_GET_FAVORITE))
		{
			q++;
		}
	}
	return q;
}

s8 QuestMenu_CountFavoriteAndState(void)
{
	u8 i;
	u8 q = 0;

	for (i = 0; i < SIDE_QUEST_COUNT; i++)
	{
		if (GetSetQuestFlag(i, sStateDataPtr->filterMode) && GetSetQuestFlag(i, FLAG_GET_FAVORITE))
		{
			q++;
		}
	}
	return q;
}

s8 QuestMenu_CountCompletedQuests(void)
{
	u8 i;
	u8 q = 0;

	u8 mode = sStateDataPtr->filterMode;
	u8 parentQuest = sStateDataPtr->parentQuest;

	if (mode > SORT_DONE)
	{
		for (i = 0; i < sSideQuests[parentQuest].numSubquests; i++)
		{
			if (ChangeSubQuestFlags(parentQuest, FLAG_GET_COMPLETED, i))
			{
				q++;
			}
		}
	}
	else
	{
		for (i = 0; i < SIDE_QUEST_COUNT; i++)
		{
			if (GetSetQuestFlag(i, FLAG_GET_COMPLETED))
			{
				q++;
			}
		}
	}

	return q;
}

static void QuestMenu_PrintHeader(void)
{
	u8 mode = sStateDataPtr->filterMode;
	u8 parentQuest = sStateDataPtr->parentQuest;

	ConvertIntToDecimalStringN(gStringVar2, SIDE_QUEST_COUNT, STR_CONV_MODE_LEFT_ALIGN, 6);

	switch (mode)
	{
		case SORT_DEFAULT:
			ConvertIntToDecimalStringN(gStringVar1, QuestMenu_CountUnlockedQuests(), STR_CONV_MODE_LEFT_ALIGN,
			                           6);
			StringCopy(gStringVar3, sText_QuestMenu_AllHeader);
			break;
		case SORT_INACTIVE:
			ConvertIntToDecimalStringN(gStringVar1, QuestMenu_CountInactiveQuests(), STR_CONV_MODE_LEFT_ALIGN,
			                           6);
			StringCopy(gStringVar3, sText_QuestMenu_InactiveHeader);
			break;
		case SORT_ACTIVE:
			ConvertIntToDecimalStringN(gStringVar1, QuestMenu_CountActiveQuests(), STR_CONV_MODE_LEFT_ALIGN, 6);
			StringCopy(gStringVar3, sText_QuestMenu_ActiveHeader);
			break;
		case SORT_REWARD:
			ConvertIntToDecimalStringN(gStringVar1, QuestMenu_CountRewardQuests(), STR_CONV_MODE_LEFT_ALIGN, 6);
			StringCopy(gStringVar3, sText_QuestMenu_RewardHeader);
			break;
		case SORT_DONE:
			ConvertIntToDecimalStringN(gStringVar1, QuestMenu_CountCompletedQuests(), STR_CONV_MODE_LEFT_ALIGN,
			                           6);
			StringCopy(gStringVar3, sText_QuestMenu_CompletedHeader);
			break;
		default:
			ConvertIntToDecimalStringN(gStringVar2, sSideQuests[parentQuest].numSubquests,
			                           STR_CONV_MODE_LEFT_ALIGN, 6);
			ConvertIntToDecimalStringN(gStringVar1, QuestMenu_CountCompletedQuests(), STR_CONV_MODE_LEFT_ALIGN,
			                           6);
			StringCopy(gStringVar3, sSideQuests[parentQuest].name);
			break;
	}

	QuestMenu_AddTextPrinterParameterized(2, 0, gStringVar3, 10, 1, 0, 1, 0, 0);

	StringExpandPlaceholders(gStringVar4, sText_QuestMenu_QuestNumberDisplay);

	if (mode < SORT_SUBQUEST)
	{
		QuestMenu_AddTextPrinterParameterized(2, 0, gStringVar4, 167, 1, 0, 1, 0, 0);
		QuestMenu_AddTextPrinterParameterized(2, 0, sText_QuestMenu_Type, 198, 1, 0, 1, 0, 0);
	}
	else
	{
		QuestMenu_AddTextPrinterParameterized(2, 0, gStringVar4, 167, 1, 0, 1, 0, 0);
	}

}

static void QuestMenu_PlaceTopMenuScrollIndicatorArrows(void)
{

    u8 listSize = (QuestMenu_GenerateTotalItems(sStateDataPtr->filterMode));
    
    if (listSize < sStateDataPtr->maxShowed)
        listSize = sStateDataPtr->maxShowed;

	sStateDataPtr->scrollIndicatorArrowPairId = AddScrollIndicatorArrowPairParameterized(2, 94, 8, 90,
	            (listSize - sStateDataPtr->maxShowed), 110, 110, &sListMenuState.scroll);
}

static void QuestMenu_RemoveScrollIndicatorArrowPair(void)
{
    MgbaPrintf(4,"removescroll");
	if (sStateDataPtr->scrollIndicatorArrowPairId != 0xFF)
	{
		RemoveScrollIndicatorArrowPair(sStateDataPtr->scrollIndicatorArrowPairId);
		sStateDataPtr->scrollIndicatorArrowPairId = 0xFF;
	}
}

static void QuestMenu_SetCursorPosition(void)
{
	if (sListMenuState.scroll != 0
	            && sListMenuState.scroll + sStateDataPtr->maxShowed > sStateDataPtr->nItems + 1)
	{
		sListMenuState.scroll = (sStateDataPtr->nItems + 1) - sStateDataPtr->maxShowed;
	}
	if (sListMenuState.scroll + sListMenuState.row >= sStateDataPtr->nItems + 1)
	{
		if (sStateDataPtr->nItems + 1 < 2)
		{
			sListMenuState.row = 0;
		}
		else
		{
			sListMenuState.row = sStateDataPtr->nItems;
		}
	}
}

#define try_free(ptr) ({        \
		void ** ptr__ = (void **)&(ptr);   \
		if (*ptr__ != NULL)                \
			Free(*ptr__);                  \
	})

static void QuestMenu_FreeResources(void)
{
	int i;

	try_free(sStateDataPtr);
	try_free(sBg1TilemapBuffer);
	try_free(sListMenuItems);

	for (i = 31; i > -1 ; i--)
	{
		try_free(questNameArray[i]);
	}

	try_free(questNameArray);
	FreeAllWindowBuffers();
}

static void Task_QuestMenuTurnOff1(u8 taskId)
{
	if (sListMenuState.initialized == 1)
	{
		BeginNormalPaletteFade(0xFFFFFFFF, 0, 0, 16, RGB_BLACK);
	}
	else
	{
		BeginNormalPaletteFade(0xFFFFFFFF, 0, 0, 16, RGB_BLACK);
	}

	gTasks[taskId].func = Task_QuestMenuTurnOff2;
}

static void Task_QuestMenuTurnOff2(u8 taskId)
{
	s16 *data = gTasks[taskId].data;

	if (!gPaletteFade.active)
	{
		DestroyListMenuTask(data[0], &sListMenuState.scroll, &sListMenuState.row);
		if (sStateDataPtr->savedCallback != NULL)
		{
			SetMainCallback2(sStateDataPtr->savedCallback);
		}
		else
		{
			SetMainCallback2(sListMenuState.savedCallback);
		}

		QuestMenu_RemoveScrollIndicatorArrowPair();
		QuestMenu_FreeResources();
		DestroyTask(taskId);
	}
}

static u8 QuestMenu_GetCursorPosition(void)
{
	return sListMenuState.scroll + sListMenuState.row;
}


static void QuestMenu_InitItems(void)
{
	sStateDataPtr->nItems = (QuestMenu_GenerateTotalItems(sStateDataPtr->filterMode)) - 1;

	sStateDataPtr->maxShowed = sStateDataPtr->nItems + 1 <= 4 ? sStateDataPtr->nItems + 1 : 4;
}

static void QuestMenu_SetScrollPosition(void)
{
	u8 i;

	if (sListMenuState.row > 3)
	{
		for (i = 0; i <= sListMenuState.row - 3; sListMenuState.row--, sListMenuState.scroll++, i++)
		{
			if (sListMenuState.scroll + sStateDataPtr->maxShowed == sStateDataPtr->nItems + 1)
			{
				break;
			}
		}
	}
}

static void QuestMenu_SetInitializedFlag(u8 a0)
{
	sListMenuState.initialized = a0;
}

static s8 QuestMenu_SetMode(bool8 subquest)
{
	u8 mode = sStateDataPtr->filterMode;

	if (subquest)
	{
		mode += SORT_SUBQUEST;
	}
	else
	{
		if (mode == SORT_DONE)
		{
			mode = SORT_DEFAULT;
		}
		else if (mode > (SORT_SUBQUEST - 1))
		{
			mode -= SORT_SUBQUEST;
		}
		else
		{
			mode++;
		}
	}
	sStateDataPtr->filterMode = mode;
}

static void QuestMenu_SaveScrollAndRow(s16 *data)
{
	ListMenuGetScrollAndRow(data[0], &sListMenuState.storedScrollOffset,
	                        &sListMenuState.storedRowPosition);
}

static void QuestMenu_ResetSavedRowScrollToTop(s16 *data)
{
	//When this function gets run, place cursor back in the first position, used for resetting the list when filtering.
	sListMenuState.row = 0;
	sListMenuState.scroll = 0;
	data[0] = ListMenuInit(&gMultiuseListMenuTemplate, sListMenuState.scroll, sListMenuState.row);
}

static void QuestMenu_RestoreSavedScrollAndRow(s16 *data)
{
	data[0] = ListMenuInit(&gMultiuseListMenuTemplate, sListMenuState.storedScrollOffset,
	                       sListMenuState.storedRowPosition);
}

static void Task_QuestMenuMain(u8 taskId)
{
	s16 *data = gTasks[taskId].data;
	u16 scroll;
	u16 row;
	s32 input;
	bool8 subquest, fadeSprites;
	u8 mode = sStateDataPtr->filterMode;
	u8 selectedQuestId, fadeTask;

	if (!gPaletteFade.active)
	{
		input = ListMenu_ProcessInput(data[0]);

		ListMenuGetScrollAndRow(data[0], &sListMenuState.scroll, &sListMenuState.row);

		switch (input)
		{
			case LIST_NOTHING_CHOSEN:
				if (JOY_NEW(R_BUTTON))
				{
					if (!QuestMenu_CheckSubquestMode())
					{
						PlaySE(SE_SELECT);
						subquest = FALSE;
						QuestMenu_SetMode(subquest);
						Task_QuestMenuCleanUp(taskId);
						QuestMenu_ResetSavedRowScrollToTop(data);
					}
				}
				if (JOY_NEW(SELECT_BUTTON))
				{
					if (mode < SORT_SUBQUEST)
					{
						PlaySE(SE_SELECT);
						selectedQuestId = sListMenuItems[sListMenuState.row + sListMenuState.scroll].id;
						QuestMenu_ManageFavoriteQuests(selectedQuestId);
						Task_QuestMenuCleanUp(taskId);
						QuestMenu_ResetSavedRowScrollToTop(data);
					}
				}
				break;

			case LIST_CANCEL:
				if (mode > SORT_DONE)
				{
					//QuestMenu_TextFadeOut();
					subquest = FALSE;
					QuestMenu_SetMode(subquest);
					Task_QuestMenuCleanUp(taskId);
					//QuestMenu_TextFadeIn();
					QuestMenu_RestoreSavedScrollAndRow(data);
				}
				else
				{
					PlaySE(SE_SELECT);
					QuestMenu_SetInitializedFlag(0);
					gTasks[taskId].func = Task_QuestMenuTurnOff1;
				}
				break;

			default:
				if (!QuestMenu_CheckSubquestMode())
				{
					if (QuestMenu_CheckHasChildren(input))
					{
                        fadeSprites = TRUE;
                        fadeTask = 1;

                        PrepareFadeOut(fadeTask, fadeSprites);

						PlaySE(SE_SELECT);
						sStateDataPtr->parentQuest = input;
						subquest = TRUE;
						QuestMenu_SetMode(subquest);
						QuestMenu_SaveScrollAndRow(data);
                        //Task_QuestMenuCleanUp(taskId);
                        gTasks[taskId].func = Task_QuestMenu_FadeOut;
						QuestMenu_ResetSavedRowScrollToTop(data); //this line needs to be after clean up or game hangs
                        //gTasks[taskId].func = Task_QuestMenu_FadeIn;
                        //CreateTask(Task_QuestMenu_FadeIn, 0);
						//QuestMenu_TextFadeOut();

                        /*
                        PrepareFadeIn(taskId, fadeSprites);
                        MgbaPrintf(4,"prepare fade in");
                        CreateTask(Task_QuestMenu_FadeIn, 0);
						//QuestMenu_TextFadeIn();
                        */

					}
				}
				break;
		}
	}
}

static void Task_QuestMenuCleanUp(u8 taskId)
{

	s16 *data = gTasks[taskId].data;
    MgbaPrintf(4,"clean up");

    QuestMenu_RemoveScrollIndicatorArrowPair();
	DestroyListMenuTask(data[0], &sListMenuState.scroll, &sListMenuState.row);
	ClearStdWindowAndFrameToTransparent(2, FALSE);

    //QuestMenu_InitItems();
	QuestMenu_PrintHeader();
	QuestMenu_AllocateResourcesForListMenu();
	QuestMenu_BuildFilteredMenuTemplate();
	QuestMenu_PlaceTopMenuScrollIndicatorArrows();

	gTasks[taskId].func = Task_QuestMenuMain;
}

// pokefirered text_window.c
static void QuestMenu_InitWindows(void)
{
	u8 i;

	InitWindows(sQuestMenuHeaderWindowTemplates);
	DeactivateAllTextPrinters();

	for (i = 0; i < 3; i++)
	{
		FillWindowPixelBuffer(i, 0x00);
		PutWindowTilemap(i);
	}

	ScheduleBgCopyTilemapToVram(0);
}

static void QuestMenu_AddTextPrinterParameterized(u8 windowId, u8 fontId, const u8 *str, u8 x, u8 y,
            u8 letterSpacing, u8 lineSpacing, u8 speed, u8 colorIdx)
{
	AddTextPrinterParameterized4(windowId, fontId, x, y, letterSpacing, lineSpacing,
	                             sQuestMenuWindowFontColors[colorIdx], speed, str);
}


// Start Menu Function
void Task_OpenQuestMenuFromStartMenu(u8 taskId)
{
	s16 *data = gTasks[taskId].data;
	if (!gPaletteFade.active)
	{
		CleanupOverworldWindowsAndTilemaps();
		QuestMenu_Init(tItemPcParam, CB2_ReturnToFieldWithOpenMenu);
		DestroyTask(taskId);
	}
}

s8 ChangeSubQuestFlags(u8 quest, u8 caseId, u8 childQuest)
{
	u8 index;
	u8 bit;
	u8 mask;

	u8 childIndex;
	u8 childBit;
	u8 childMask;

	index = quest / 8; //8 bits per byte
	bit = quest % 8;
	mask = 1 << bit;

	childIndex = childQuest / 8; //8 bits per byte
	childBit = childQuest % 8;
	childMask = 1 << childBit;

	switch (caseId)
	{
		case FLAG_GET_COMPLETED:
			return gSaveBlock2Ptr->subQuests[quest][childIndex] & childMask;
		case FLAG_SET_COMPLETED:
			gSaveBlock2Ptr->subQuests[quest][childIndex] |= childMask;
			return 1;
	}

	return -1;
}

s8 QuestMenu_ManageFavoriteQuests(u8 selectedQuestId)
{
	if (GetSetQuestFlag(selectedQuestId, FLAG_GET_FAVORITE))
	{
		GetSetQuestFlag(selectedQuestId, FLAG_REMOVE_FAVORITE);
	}
	else
	{
		GetSetQuestFlag(selectedQuestId, FLAG_SET_FAVORITE);
	}
}

s8 GetSetQuestFlag(u8 quest, u8 caseId)
{
	u8 index;
	u8 bit;
	u8 mask;

	index = quest / 8; //8 bits per byte
	bit = quest % 8;
	mask = 1 << bit;

	switch (caseId)
	{
		case FLAG_GET_UNLOCKED:
			return gSaveBlock2Ptr->unlockedQuests[index] & mask;
		case FLAG_SET_UNLOCKED:
			gSaveBlock2Ptr->unlockedQuests[index] |= mask;
			return 1;
		case FLAG_GET_INACTIVE:
			return !(gSaveBlock2Ptr->activeQuests[index] & mask) && \
			       !(gSaveBlock2Ptr->rewardQuests[index] & mask) && \
			       !(gSaveBlock2Ptr->completedQuests[index] & mask);
		case FLAG_GET_ACTIVE:
			return gSaveBlock2Ptr->activeQuests[index] & mask;
		case FLAG_SET_ACTIVE:
			gSaveBlock2Ptr->activeQuests[index] |= mask;
			return 1;
		case FLAG_REMOVE_ACTIVE:
			gSaveBlock2Ptr->activeQuests[index] &= ~mask;
			return 1;
		case FLAG_GET_REWARD:
			return gSaveBlock2Ptr->rewardQuests[index] & mask;
		case FLAG_SET_REWARD:
			gSaveBlock2Ptr->rewardQuests[index] |= mask;
			return 1;
		case FLAG_REMOVE_REWARD:
			gSaveBlock2Ptr->rewardQuests[index] &= ~mask;
			return 1;
		case FLAG_GET_COMPLETED:
			return gSaveBlock2Ptr->completedQuests[index] & mask;
		case FLAG_SET_COMPLETED:
			gSaveBlock2Ptr->completedQuests[index] |= mask;
			return 1;
		case FLAG_GET_FAVORITE:
			return gSaveBlock2Ptr->favoriteQuests[index] & mask;
		case FLAG_SET_FAVORITE:
			gSaveBlock2Ptr->favoriteQuests[index] |= mask;
			return 1;
		case FLAG_REMOVE_FAVORITE:
			gSaveBlock2Ptr->favoriteQuests[index] &= ~mask;
			return 1;

	}
	return -1;  //failure
}

void SetQuestMenuActive(void)
{
	FlagSet(FLAG_QUEST_MENU_ACTIVE);
}

void CopyQuestName(u8 *dst, u8 questId)
{
	StringCopy(dst, sSideQuests[questId].name);
}

void ResetQuestMenuData(void)
{
	memset(&gSaveBlock2Ptr->unlockedQuests, 0, sizeof(gSaveBlock2Ptr->unlockedQuests));
	memset(&gSaveBlock2Ptr->activeQuests, 0, sizeof(gSaveBlock2Ptr->activeQuests));
	memset(&gSaveBlock2Ptr->rewardQuests, 0, sizeof(gSaveBlock2Ptr->rewardQuests));
	memset(&gSaveBlock2Ptr->completedQuests, 0, sizeof(gSaveBlock2Ptr->completedQuests));
	memset(&gSaveBlock2Ptr->subQuests, 0, sizeof(gSaveBlock2Ptr->subQuests));
	memset(&gSaveBlock2Ptr->favoriteQuests, 0, sizeof(gSaveBlock2Ptr->favoriteQuests));
}

static void SetGpuRegBaseForFade(bool8 fadeSprites) //Sets the GPU registers to prepare for a hardware fade
{
	if (fadeSprites)
		SetGpuReg(REG_OFFSET_BLDCNT, BLDCNT_TGT1_OBJ | BLDCNT_TGT1_BG0 | BLDCNT_TGT2_BG1 | BLDCNT_EFFECT_BLEND); //Blend Sprites and BG0 into BG1
	else
		SetGpuReg(REG_OFFSET_BLDCNT, BLDCNT_TGT1_BG0 | BLDCNT_TGT2_BG1 | BLDCNT_EFFECT_BLEND); //Blend BG0 into BG3 used for when the screen is only showing the exit arrow

	SetGpuReg(REG_OFFSET_BLDY, 0);
}

static void PrepareFadeOut(u8 taskId, bool8 fadeSprites) //Prepares the input handler for a hardware fade out
{
    MgbaPrintf(4,"prepare fade out");
	SetGpuRegBaseForFade(fadeSprites);
	SetGpuReg(REG_OFFSET_BLDALPHA, BLDALPHA_BLEND(0x10, 0x0));
	gTasks[taskId].data[1] = 16;
	gTasks[taskId].data[2] = 0;
	gTasks[taskId].data[3] = 0; //Fade Delay
	gTasks[taskId].data[4] = 0; //Fade Delay
}

static void PrepareFadeIn(u8 taskId, bool8 fadeSprites) //Prepares the input handler for a hardware fade in
{
	SetGpuRegBaseForFade(fadeSprites);
	SetGpuReg(REG_OFFSET_BLDALPHA, BLDALPHA_BLEND(0x0, 0x10));
	gTasks[taskId].data[1] = 0;
	gTasks[taskId].data[2] = 16;
	gTasks[taskId].data[3] = 0; //Fade Delay
	gTasks[taskId].data[4] = 0; //Fade Delay
}


static bool8 HandleFadeOut(u8 taskId) //Handles the hardware fade out
{
    MgbaPrintf(4,"handle fade out");

	if (gTasks[taskId].data[1] == 0){
        MgbaPrintf(4,"is tru");
		return TRUE;
    }
	else
	{
        MgbaPrintf(4,"is false");
		if (gTasks[taskId].data[4] > 0)
			gTasks[taskId].data[4]--;
		else
		{
			gTasks[taskId].data[4] = gTasks[taskId].data[3];
			gTasks[taskId].data[1] -= 2;
			gTasks[taskId].data[2] += 2;
			SetGpuReg(REG_OFFSET_BLDALPHA, (gTasks[taskId].data[2] * 256) + gTasks[taskId].data[1]);
		}
	}

	return FALSE;
}

static bool8 HandleFadeIn(u8 taskId) //Handles the hardware fade in
{
    MgbaPrintf(4,"handle fade in");
	if (gTasks[taskId].data[1] >= 16)
	{
		if (!gPaletteFade.active)
			return TRUE;
    MgbaPrintf(4,"true fade in");

	}
	else
	{
    MgbaPrintf(4,"false fade in");
		if (gTasks[taskId].data[4] > 0)
			gTasks[taskId].data[4]--;
		else
		{
			gTasks[taskId].data[4] = gTasks[taskId].data[3];
			gTasks[taskId].data[1] += 2;
			gTasks[taskId].data[2] -= 2;
			SetGpuReg(REG_OFFSET_BLDALPHA, (gTasks[taskId].data[2] * 256) + gTasks[taskId].data[1]);
		}
	}

	return FALSE;
}

static void Task_QuestMenu_FadeOut(u8 taskId)
{
   u8 taskId2 = 1;

	if (!HandleFadeOut(taskId2))
        HandleFadeOut(taskId2);
    else{
        Task_QuestMenuCleanUp(taskId);
        gTasks[taskId].func = Task_QuestMenu_FadeIn;
    }
}

static void Task_QuestMenu_FadeIn(u8 taskId)
{
   u8 taskId2 = 1;

	if (!HandleFadeIn(taskId2))
        HandleFadeIn(taskId2);
    else
        gTasks[taskId].func = Task_QuestMenuMain;
}

void QuestMenu_TextFadeOut(void)
{
	//BeginNormalPaletteFade(~0x8000, 0, 0, 16, RGB_BLACK);
	HideBg(0);
}

void QuestMenu_TextFadeIn(void)
{
	//BeginNormalPaletteFade(~0x8000, 0, 16, 0, RGB_BLACK);
	ShowBg(0);
}

void QuestMenu_InitModeOnStartup(void)
{
	sStateDataPtr->filterMode = 0;
}



#undef tBldYBak
#undef tBldCntBak
#undef tWin0Bottom
#undef tWin0Top
#undef tWin0Right
#undef tWin0Left
#undef tYSpeed
#undef tXSpeed
#undef tState
