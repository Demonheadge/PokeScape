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

//PSF TODO pressing down on last item loops around to the top, also works on the top
//PSF TODO pressing select on "close" should do nothing
//PSF TODO Change header text to black or do some accessibility color testing

//PSF TODO in original Unbound an unlocked quest just means it appears in the list, all quests with a NAME are considered Active... deal with this
//PSF TODO Saveblock2 is overloaded. To fix this, subquests need to become flat and not 2d. I could make one giant array so two seperate arrays and just link them to each other.

//PSF TODO The sprite in the bottom left does not fade in and out despite the object layer being told to blend. The object arrows in the center of the screen fade without issue.
//PSF TODO There is a strange artifact when going from object to item.

struct QuestMenuResources
{
	MainCallback savedCallback;
	u8 moveModeOrigPos;
	u8 spriteIconSlot;
	u8 maxShowed;
	u8 nItems;
	u8 scrollIndicatorArrowPairId;
	s16 data[3];
	u8 filterMode;
	u8 parentQuest;
	bool8 restoreCursor;
	u8 cycle;
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
static u8 QuestMenu_GenerateTotalItems();
static s8 QuestMenu_CheckHasChildren(u16 itemId);
static u16 QuestMenu_BuildMenuTemplate(void);
static void QuestMenu_AssignCancelNameAndId(u8 numRow);
static void QuestMenu_MoveCursorFunc(s32 itemIndex, bool8 onInit,
                                     struct ListMenu *list);
static void QuestMenu_PrintProgressFunc(u8 windowId, u32 itemId, u8 y);
static void QuestMenu_PrintOrRemoveCursorAt(u8 y, u8 state);
s8 QuestMenu_CountUnlockedQuests(void);
s8 QuestMenu_CountInactiveQuests(void);
s8 QuestMenu_CountActiveQuests(void);
s8 QuestMenu_CountRewardQuests(void);
s8 QuestMenu_CountCompletedQuests(void);
s8 QuestMenu_CountFavoriteQuests(void);
s8 QuestMenu_CountFavoriteAndState(void);
static void QuestMenu_GenerateAndPrintHeader(void);
static void QuestMenu_PlaceTopMenuScrollIndicatorArrows(void);
static void QuestMenu_SetCursorPosition(void);
static void QuestMenu_FreeResources(void);
static void Task_QuestMenuTurnOff2(u8 taskId);
static void QuestMenu_InitItems(void);
static void QuestMenu_SetScrollPosition(void);
static s8 QuestMenu_ManageMode(u8 action);
static void Task_QuestMenuMain(u8 taskId);
static void Task_QuestMenuCleanUp(u8 taskId);
static void QuestMenu_InitWindows(void);
static void QuestMenu_AddTextPrinterParameterized(u8 windowId, u8 fontId,
            const u8 *str, u8 x, u8 y,
            u8 letterSpacing, u8 lineSpacing, u8 speed, u8 colorIdx);
static void QuestMenu_SetInitializedFlag(u8 a0);
static void QuestMenu_InitModeOnStartup(void);

static void SetGpuRegBaseForFade(
      void); //Sets the GPU registers to prepare for a hardware fade
static void PrepareFadeOut(u8
                           taskId); //Prepares the input handler for a hardware fade out
static void PrepareFadeIn(u8
                          taskId); //Prepares the input handler for a hardware fade in
static bool8 HandleFadeOut(u8 taskId); //Handles the hardware fade out
static bool8 HandleFadeIn(u8 taskId); //Handles the hardware fade in
static void Task_QuestMenu_FadeOut(u8 taskId);
static void Task_QuestMenu_FadeIn(u8 taskId);

void QuestMenu_GenerateAndPrintQuestDetails(s32 questId);
void QuestMenu_CreateNPCOrItemSprite(s32 questId);
void QuestMenu_PrintQuestLocation(s32 questId);

void QuestMenu_GenerateQuestFlavorText(s32 questId);
void QuestMenu_PrintQuestFlavorText(s32 questId);
void QuestMenu_GenerateQuestLocation(s32 questId);

bool8 QuestMenu_IsSubquestCompletedState(s32 questId);
bool8 QuestMenu_IsQuestRewardState(s32 questId);
bool8 QuestMenu_IsQuestCompletedState(s32 questId);
bool8 QuestMenu_IsQuestUnlocked(s32 questId);
bool8 QuestMenu_IsQuestOnlyActive(s32 questId);
bool8 QuestMenu_IsQuestActive(s32 questId);
bool8 QuestMenu_IsQuestInactive(s32 questId);
void QuestMenu_UpdateQuestFlavorText(s32 questId);

u8 QuestMenu_ToggleSubquestMode(u8 mode);
u8 QuestMenu_ToggleAlphaMode(u8 mode);
u8 QuestMenu_IncrementMode(u8 mode);

u8 QuestMenu_GenerateSubquestList();
u8 QuestMenu_GenerateFilteredList();
u8 QuestMenu_GenerateDefaultList();
void QuestMenu_GenerateAndPrependQuestNumber(u8 countQuest);
u8 QuestMenu_PopulateMenuNameAndId(u8 row, u8 countQuest);
void QuestMenu_PopulateSubquestTitle(u8 parentQuest, u8 countQuest);
void QuestMenu_PopulateEmptyRow(u8 countQuest);
void QuestMenu_PopulateQuestTitle(u8 countQuest);
void QuestMenu_AddSubQuestButton(u8 countQuest);
void QuestMenu_MarkFavoriteQuests(u8 countQuest);
void QuestMenu_AllocateArray();
u8 QuestMenu_CheckModeAndGenerateList();
u8 *QuestMenu_DefineQuestOrder();

// Data
// graphics
static const u32 sQuestMenuTiles[] =
      INCBIN_U32("graphics/quest_menu/menu.4bpp.lz");
static const u32 sQuestMenuBgPals[] =
      INCBIN_U32("graphics/quest_menu/menu_pal.gbapal.lz");
static const u32 sQuestMenuTilemap[] =
      INCBIN_U32("graphics/quest_menu/tilemap.bin.lz");

// strings
static const u8 sText_Empty[] = _("");
static const u8 sText_QuestMenu_AllHeader[] = _("All Missions");
static const u8 sText_QuestMenu_InactiveHeader[] = _("Inactive Missions");
static const u8 sText_QuestMenu_ActiveHeader[] = _("Active Missions");
static const u8 sText_QuestMenu_RewardHeader[] = _("Reward Available");
static const u8 sText_QuestMenu_CompletedHeader[] =
      _("Completed Missions");
static const u8 sText_QuestMenu_QuestNumberDisplay[] =
      _("{STR_VAR_1}/{STR_VAR_2}");
static const u8 sText_QuestMenu_Unk[] = _("??????");
static const u8 sText_QuestMenu_Active[] = _("Active");
static const u8 sText_QuestMenu_Reward[] = _("Reward");
static const u8 sText_QuestMenu_Complete[] = _("Done");
static const u8 sText_QuestMenu_ShowLocation[] =
      _("Location: {STR_VAR_2}");
static const u8 sText_QuestMenu_StartForMore[] =
      _("Start for more details.");
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
static const u8 sText_QuestMenu_ColorGreen[] = _("{COLOR}{GREEN}");
static const u8 sText_QuestMenu_AZ[] = _(" A-Z");

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
	sStateDataPtr->spriteIconSlot = 0;
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
			ResetQuestSpriteState();
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
			QuestMenu_AllocateArray();
			QuestMenu_BuildMenuTemplate();
			gMain.state++;
			break;
		case 13:
			//header does not print
			QuestMenu_GenerateAndPrintHeader();
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
			gTasks[taskId].data[0] = ListMenuInit(&gMultiuseListMenuTemplate,
			                                      sListMenuState.scroll,
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
	InitBgsFromTemplates(0, sQuestMenuBgTemplates,
	                     NELEMS(sQuestMenuBgTemplates));
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
	try_alloc(sListMenuItems,
	          sizeof(struct ListMenuItem) * QuestMenu_GenerateTotalItems() + 1);
	return TRUE;
}

void QuestMenu_AllocateArray(void)
{
	u8 i;
	questNameArray = Alloc(sizeof(void *) * SIDE_QUEST_COUNT + 1);

	for (i = 0; i < 32; i++)
	{
		questNameArray[i] = Alloc(sizeof(u8) * 32);
	}
}

static s8 QuestMenu_CheckHasChildren(u16 itemId)
{
	if (sSideQuests[itemId].childtype != 0
	            && GetSetQuestFlag(itemId, FLAG_GET_UNLOCKED)
	            && !GetSetQuestFlag(itemId, FLAG_GET_INACTIVE))
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
	if (sStateDataPtr->filterMode > SORT_DONE_AZ)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}

static u8 QuestMenu_GenerateTotalItems()
{
	u8 mode = sStateDataPtr->filterMode % 10;

	if (QuestMenu_CheckSubquestMode())
	{
		return sSideQuests[sStateDataPtr->parentQuest].numSubquests + 1;
	}

	switch (mode)
	{
		case SORT_DEFAULT:
			return SIDE_QUEST_COUNT + 1;
		case SORT_INACTIVE:
			return QuestMenu_CountInactiveQuests() + 1;
		case SORT_ACTIVE:
			return QuestMenu_CountActiveQuests() + 1;
		case SORT_REWARD:
			return QuestMenu_CountRewardQuests() + 1;
		case SORT_DONE:
			return QuestMenu_CountCompletedQuests() + 1;
	}

}


static bool8 QuestMenu_CheckDefaultMode(void)
{
	u8 mode = sStateDataPtr->filterMode % 10;

	if (mode == FLAG_GET_UNLOCKED)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}

static bool8 QuestMenu_CheckAlphaMode(void)
{
	if (sStateDataPtr->filterMode < SORT_SUBQUEST
	            && sStateDataPtr->filterMode > SORT_DONE)
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

u8 QuestMenu_GenerateSubquestList()
{
	u8 parentQuest = sStateDataPtr->parentQuest;
	u8 mode = sStateDataPtr->filterMode % 10;
	u8 lastRow = 0, numRow = 0, countQuest = 0;

	for (numRow = 0; numRow < sSideQuests[parentQuest].numSubquests; numRow++)
	{
		QuestMenu_GenerateAndPrependQuestNumber(countQuest);
		QuestMenu_PopulateSubquestTitle(parentQuest, countQuest);
		QuestMenu_PopulateMenuNameAndId(numRow, countQuest);

		countQuest++;
		lastRow = numRow + 1;
	}
	return lastRow;
}

u8 QuestMenu_PopulateMenuNameAndId(u8 row, u8 countQuest)
{
	sListMenuItems[row].name = questNameArray[countQuest];
	sListMenuItems[row].id = countQuest;
}

void QuestMenu_PopulateSubquestTitle(u8 parentQuest, u8 countQuest)
{
	if (ChangeSubQuestFlags(parentQuest, FLAG_GET_COMPLETED, countQuest))
	{
		questNamePointer = StringAppend(questNamePointer,
		                                sSideQuests[parentQuest].subquests[countQuest].name);
	}
	else
	{
		questNamePointer = StringAppend(questNamePointer, sText_QuestMenu_Unk);
	}
}

void QuestMenu_GenerateAndPrependQuestNumber(u8 countQuest)
{
	questNamePointer = ConvertIntToDecimalStringN(questNameArray[countQuest],
	                   countQuest + 1, STR_CONV_MODE_LEFT_ALIGN, 2);
	questNamePointer = StringAppend(questNamePointer,
	                                sText_QuestMenu_DotSpace);
}

u8 QuestMenu_GenerateFilteredList()
{
	u8 mode = sStateDataPtr->filterMode % 10;
	u8 lastRow = 0, numRow = 0, offset = 0, newRow = 0, countQuest = 0, selectedQuestId = 0;
	u8 *sortedQuestList;

	sortedQuestList = QuestMenu_DefineQuestOrder();

	for (countQuest = 0; countQuest < sStateDataPtr->nItems; countQuest++)
	{
		selectedQuestId = *(sortedQuestList + countQuest);

		if (GetSetQuestFlag(selectedQuestId, mode))
		{
			QuestMenu_PopulateEmptyRow(selectedQuestId);

			if (GetSetQuestFlag(selectedQuestId,
			                    FLAG_GET_FAVORITE)) //how do only conditionally show this line? //PSF TODO
			{
				QuestMenu_MarkFavoriteQuests(selectedQuestId);
				newRow = numRow;
				numRow++;
			}
			else
			{
				newRow = QuestMenu_CountFavoriteAndState() + offset;
				offset++;
			}

			QuestMenu_PopulateQuestTitle(selectedQuestId);
			QuestMenu_PopulateMenuNameAndId(newRow, selectedQuestId);
		}
	}
	return numRow + offset;
}

void QuestMenu_MarkFavoriteQuests(u8 countQuest)
{
	questNamePointer = StringAppend(questNameArray[countQuest],
	                                sText_QuestMenu_ColorGreen);
}

u8 *QuestMenu_DefineQuestOrder()
{
	static u8 sortedList[SIDE_QUEST_COUNT];
	u8 a, c, d, e;
	u8 placeholderVariable;

	for (a = 0; a < SIDE_QUEST_COUNT; a++)
	{
		sortedList[a] = a;
	}

	if (QuestMenu_CheckAlphaMode())
	{
		for (c = 0; c < SIDE_QUEST_COUNT; c++)
		{
			for (d = c + 1; d < SIDE_QUEST_COUNT; d++)
			{
				if (StringCompare(sSideQuests[sortedList[c]].name, sSideQuests[sortedList[d]].name) > 0)
				{
					placeholderVariable = sortedList[c];
					sortedList[c] = sortedList[d];
					sortedList[d] = placeholderVariable;
				}
			}
		}
	}

	return sortedList;
}

void QuestMenu_PopulateQuestTitle(u8 countQuest)
{
	if (GetSetQuestFlag(countQuest, FLAG_GET_UNLOCKED))
	{
		questNamePointer = StringAppend(questNameArray[countQuest],
		                                sSideQuests[countQuest].name);
		QuestMenu_AddSubQuestButton(countQuest);
	}
	else
	{
		StringAppend(questNameArray[countQuest], sText_QuestMenu_Unk);
	}
}

void QuestMenu_AddSubQuestButton(u8 countQuest)
{
	if (QuestMenu_CheckHasChildren(countQuest))
	{
		questNamePointer = StringAppend(questNameArray[countQuest],
		                                sText_QuestMenu_SubQuestButton);
	}

}

void QuestMenu_PopulateEmptyRow(u8 countQuest)
{
	questNamePointer = StringCopy(questNameArray[countQuest], sText_Empty);
}


u8 QuestMenu_GenerateDefaultList()
{
	u8 mode = sStateDataPtr->filterMode % 10;
	u8 lastRow = 0, numRow = 0, offset = 0, newRow = 0, countQuest = 0, selectedQuestId = 0;
	u8 *sortedQuestList;

	sortedQuestList = QuestMenu_DefineQuestOrder();

	for (countQuest = 0; countQuest < sStateDataPtr->nItems; countQuest++)
	{
		selectedQuestId = *(sortedQuestList + countQuest);
		QuestMenu_PopulateEmptyRow(selectedQuestId);

		if (GetSetQuestFlag(selectedQuestId, FLAG_GET_FAVORITE))
		{
			QuestMenu_MarkFavoriteQuests(selectedQuestId);
			newRow = numRow;
			numRow++;
		}
		else
		{
			newRow = QuestMenu_CountFavoriteQuests() +
			         offset; //merge with CountState into one function PSF TODO
			offset++;
		}

		QuestMenu_PopulateQuestTitle(selectedQuestId);
		QuestMenu_PopulateMenuNameAndId(newRow, selectedQuestId);
		lastRow = numRow + offset;
	}
	return lastRow;
}

u8 QuestMenu_CheckModeAndGenerateList()
{
	if (QuestMenu_CheckSubquestMode())
	{
		return QuestMenu_GenerateSubquestList();
	}
	else if (!QuestMenu_CheckDefaultMode())
	{
		return QuestMenu_GenerateFilteredList();
	}
	else
	{
		return QuestMenu_GenerateDefaultList();
	}
}

static u16 QuestMenu_BuildMenuTemplate(void)
{

	u8 lastRow = QuestMenu_CheckModeAndGenerateList();
	MgbaPrintf(4,"size of subquests %lu",sizeof(gSaveBlock2Ptr->subQuests));
	MgbaPrintf(4,"size of reward %lu",sizeof(gSaveBlock2Ptr->rewardQuests));

	QuestMenu_AssignCancelNameAndId(lastRow);

	gMultiuseListMenuTemplate.totalItems = QuestMenu_GenerateTotalItems();
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

void CreateQuestSprite(u16 itemId, u8 idx, bool8 object)
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

		if (object != TRUE)
		{
			spriteId = AddItemIconSprite(102 + idx, 102 + idx, itemId);
		}
		else
			spriteId = CreateObjectGraphicsSprite(itemId, SpriteCallbackDummy, 20,
			                                      132, 0);

		gSprites[spriteId].oam.objMode = ST_OAM_OBJ_BLEND;

		if (spriteId != MAX_SPRITES)
		{
			ptr[idx] = spriteId;

			if (object != TRUE)
			{
				gSprites[spriteId].x2 = 24;
				gSprites[spriteId].y2 = 140;
			}
		}
	}
}

void ResetQuestSpriteState(void)
{
	u16 i;

	for (i = 0; i < NELEMS(gUnknown_2039878); i++)
	{
		gUnknown_2039878[i] = 0xFF;
	}
}

void DestroyQuestSprite(u8 idx)
{
	u8 *ptr = &gUnknown_2039878[10];

	if (ptr[idx] != 0xFF)
	{
		DestroySpriteAndFreeResources(&gSprites[ptr[idx]]);
		ptr[idx] = 0xFF;
	}
}

void QuestMenu_PlayCursorSound(bool8 firstRun)
{
	if (firstRun != TRUE)
	{
		PlaySE(SE_RG_BAG_CURSOR);
	}

}

void QuestMenu_CreateDetailsForCancel()
{
	FillWindowPixelBuffer(1, 0);

	QuestMenu_AddTextPrinterParameterized(1, 2, sText_Empty, 2, 3, 2, 0, 0,
	                                      0);
	QuestMenu_AddTextPrinterParameterized(1, 2, sText_Empty, 40, 19, 5, 0, 0,
	                                      0);

	CreateQuestSprite(-1, sStateDataPtr->spriteIconSlot, FALSE);
}

static void QuestMenu_MoveCursorFunc(s32 questId, bool8 onInit,
                                     struct ListMenu *list)
{
	QuestMenu_PlayCursorSound(onInit);

	if (sStateDataPtr->moveModeOrigPos == 0xFF)
	{
		DestroyQuestSprite(sStateDataPtr->spriteIconSlot ^ 1);
		sStateDataPtr->spriteIconSlot ^= 1;

		if (questId == LIST_CANCEL)
		{
			QuestMenu_CreateDetailsForCancel();
		}
		else
		{
			QuestMenu_GenerateAndPrintQuestDetails(questId);
			QuestMenu_CreateNPCOrItemSprite(questId);
		}
	}
}

void QuestMenu_CreateNPCOrItemSprite(s32 questId)
{
	u16 objectId;

	if (QuestMenu_CheckSubquestMode() == FALSE)
	{
		objectId = sSideQuests[questId].object;
		CreateQuestSprite(objectId, sStateDataPtr->spriteIconSlot, TRUE);
	}
	else if (QuestMenu_IsSubquestCompletedState(questId) == TRUE)
	{
		objectId =
		      sSideQuests[sStateDataPtr->parentQuest].subquests[questId].object;
		CreateQuestSprite(objectId, sStateDataPtr->spriteIconSlot, TRUE);
	}
	else
	{
		CreateQuestSprite(ITEM_NONE, sStateDataPtr->spriteIconSlot, FALSE);
	}
	DestroyQuestSprite(sStateDataPtr->spriteIconSlot ^ 1);
	sStateDataPtr->spriteIconSlot ^= 1;
}

void QuestMenu_GenerateAndPrintQuestDetails(s32 questId)
{
	QuestMenu_GenerateQuestLocation(questId);
	QuestMenu_PrintQuestLocation(questId);
	QuestMenu_GenerateQuestFlavorText(questId);
	QuestMenu_PrintQuestFlavorText(questId);
}

void QuestMenu_GenerateQuestLocation(s32 questId)
{
	if (!QuestMenu_CheckSubquestMode())
	{
		StringCopy(gStringVar2, sSideQuests[questId].map);
	}
	else
	{
		StringCopy(gStringVar2,
		           sSideQuests[sStateDataPtr->parentQuest].subquests[questId].map);
	}

	StringExpandPlaceholders(gStringVar4, sText_QuestMenu_ShowLocation);
}

void QuestMenu_PrintQuestLocation(s32 questId)
{
	FillWindowPixelBuffer(1, 0);
	QuestMenu_AddTextPrinterParameterized(1, 2, gStringVar4, 2, 3, 2, 0, 0,
	                                      0);
}

void QuestMenu_GenerateQuestFlavorText(s32 questId)
{
	if (QuestMenu_CheckSubquestMode() == FALSE)
	{
		if (QuestMenu_IsQuestInactive(questId) == TRUE)
		{
			StringCopy(gStringVar1, sText_QuestMenu_StartForMore);
		}
		if (QuestMenu_IsQuestActive(questId) == TRUE)
		{
			QuestMenu_UpdateQuestFlavorText(questId);
		}
		if (QuestMenu_IsQuestRewardState(questId) == TRUE)
		{
			StringCopy(gStringVar1, sText_QuestMenu_ReturnRecieveReward);
		}
		if (QuestMenu_IsQuestCompletedState(questId) == TRUE)
		{
			StringCopy(gStringVar1, sSideQuests[questId].donedesc);
		}
	}
	else
	{
		if (QuestMenu_IsSubquestCompletedState(questId) == TRUE)
		{
			StringCopy(gStringVar1,
			           sSideQuests[sStateDataPtr->parentQuest].subquests[questId].desc);
		}
		else
		{
			StringCopy(gStringVar1, sText_Empty);
		}
	}

	StringExpandPlaceholders(gStringVar3, gStringVar1);
}

void QuestMenu_PrintQuestFlavorText(s32 questId)
{
	QuestMenu_AddTextPrinterParameterized(1, 2, gStringVar3, 40, 19, 5, 0, 0,
	                                      0);
}

void QuestMenu_UpdateQuestFlavorText(s32 questId)
{
	StringCopy(gStringVar1, sSideQuests[questId].desc);
}

bool8 QuestMenu_IsQuestInactive(s32 questId)
{
	if (!GetSetQuestFlag(questId, FLAG_GET_ACTIVE))
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}

bool8 QuestMenu_IsQuestActive(s32 questId)
{
	if (GetSetQuestFlag(questId, FLAG_GET_ACTIVE))
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}

bool8 QuestMenu_IsSubquestCompletedState(s32 questId)
{
	if (ChangeSubQuestFlags(sStateDataPtr->parentQuest, FLAG_GET_COMPLETED,
	                        questId))
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}

bool8 QuestMenu_IsQuestRewardState(s32 questId)
{
	if (GetSetQuestFlag(questId, FLAG_GET_REWARD))
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}

bool8 QuestMenu_IsQuestCompletedState(s32 questId)
{
	if (GetSetQuestFlag(questId, FLAG_GET_COMPLETED))
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}

bool8 QuestMenu_IsQuestUnlocked(s32 questId)
{
	if (GetSetQuestFlag(questId, FLAG_GET_UNLOCKED))
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}

static void QuestMenu_PrintProgressFunc(u8 windowId, u32 itemId, u8 y)
{
	u8 colorIndex = 0;
	u8 parentQuest = sStateDataPtr->parentQuest;
	u8 questType = sSideQuests[parentQuest].childtype;

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
		QuestMenu_AddTextPrinterParameterized(windowId, 0, gStringVar4, 200, y, 0,
		                                      0, 0xFF, colorIndex);
	}
}

static void QuestMenu_PrintOrRemoveCursor(u8 listMenuId, u8 colorIdx)
{
	QuestMenu_PrintOrRemoveCursorAt(ListMenuGetYCoordForPrintingArrowCursor(
	                                      listMenuId), colorIdx);
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
		QuestMenu_AddTextPrinterParameterized(0, 2, gText_SelectorArrow, 0, y, 0,
		                                      0, 0, colorIdx);
	}
}

s8 QuestMenu_CountUnlockedQuests(void)
{
	u8 q = 0, i = 0;

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
	u8 q = 0, i = 0;

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
	u8 q = 0, i = 0;

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
	u8 q = 0, i = 0;

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
	u8 q = 0, i = 0;

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
	u8 q = 0, i = 0;

	u8 mode = sStateDataPtr->filterMode % 10;

	for (i = 0; i < SIDE_QUEST_COUNT; i++)
	{
		if (GetSetQuestFlag(i, mode)
		            && GetSetQuestFlag(i, FLAG_GET_FAVORITE))
		{
			q++;
		}
	}

	return q;
}

s8 QuestMenu_CountCompletedQuests(void)
{
	u8 q = 0, i = 0;

	u8 parentQuest = sStateDataPtr->parentQuest;

	if (QuestMenu_CheckSubquestMode())
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

void QuestMenu_GenerateDenominatorNumQuests(void)
{
	ConvertIntToDecimalStringN(gStringVar2, SIDE_QUEST_COUNT,
	                           STR_CONV_MODE_LEFT_ALIGN, 6);
}

void QuestMenu_GenerateNumeratorNumQuests(void)
{
	u8 mode = sStateDataPtr->filterMode % 10;
	u8 parentQuest = sStateDataPtr->parentQuest;

	switch (mode)
	{
		case SORT_DEFAULT:
			ConvertIntToDecimalStringN(gStringVar1, QuestMenu_CountUnlockedQuests(),
			                           STR_CONV_MODE_LEFT_ALIGN,
			                           6);
			break;
		case SORT_INACTIVE:
			ConvertIntToDecimalStringN(gStringVar1, QuestMenu_CountInactiveQuests(),
			                           STR_CONV_MODE_LEFT_ALIGN,
			                           6);
			break;
		case SORT_ACTIVE:
			ConvertIntToDecimalStringN(gStringVar1, QuestMenu_CountActiveQuests(),
			                           STR_CONV_MODE_LEFT_ALIGN, 6);
			break;
		case SORT_REWARD:
			ConvertIntToDecimalStringN(gStringVar1, QuestMenu_CountRewardQuests(),
			                           STR_CONV_MODE_LEFT_ALIGN, 6);
			break;
		case SORT_DONE:
			ConvertIntToDecimalStringN(gStringVar1, QuestMenu_CountCompletedQuests(),
			                           STR_CONV_MODE_LEFT_ALIGN,
			                           6);
			break;
	}

	if (QuestMenu_CheckSubquestMode())
	{
		ConvertIntToDecimalStringN(gStringVar2,
		                           sSideQuests[parentQuest].numSubquests,
		                           STR_CONV_MODE_LEFT_ALIGN, 6);
		ConvertIntToDecimalStringN(gStringVar1, QuestMenu_CountCompletedQuests(),
		                           STR_CONV_MODE_LEFT_ALIGN,
		                           6);
	}
}

void QuestMenu_GenerateMissionContextHeader(void)
{
	u8 mode = sStateDataPtr->filterMode % 10;
	u8 parentQuest = sStateDataPtr->parentQuest;

	switch (mode)
	{
		case SORT_DEFAULT:
			questNamePointer = StringCopy(questNameArray[SIDE_QUEST_COUNT + 1],
			                              sText_QuestMenu_AllHeader);
			break;
		case SORT_INACTIVE:
			questNamePointer = StringCopy(questNameArray[SIDE_QUEST_COUNT + 1],
			                              sText_QuestMenu_InactiveHeader);
			break;
		case SORT_ACTIVE:
			questNamePointer = StringCopy(questNameArray[SIDE_QUEST_COUNT + 1],
			                              sText_QuestMenu_ActiveHeader);
			break;
		case SORT_REWARD:
			questNamePointer = StringCopy(questNameArray[SIDE_QUEST_COUNT + 1],
			                              sText_QuestMenu_RewardHeader);
			break;
		case SORT_DONE:
			questNamePointer = StringCopy(questNameArray[SIDE_QUEST_COUNT + 1],
			                              sText_QuestMenu_CompletedHeader);
			break;
	}

	if (QuestMenu_CheckAlphaMode())
	{
		questNamePointer = StringAppend(questNameArray[SIDE_QUEST_COUNT + 1],
		                                sText_QuestMenu_AZ);
	}
	if (QuestMenu_CheckSubquestMode())
	{
		questNamePointer = StringCopy(questNameArray[SIDE_QUEST_COUNT + 1],
		                              sSideQuests[parentQuest].name);

	}
}

void QuestMenu_PrintNumQuests(void)
{
	StringExpandPlaceholders(gStringVar4, sText_QuestMenu_QuestNumberDisplay);
	QuestMenu_AddTextPrinterParameterized(2, 0, gStringVar4, 167, 1, 0, 1, 0,
	                                      0);
}
void QuestMenu_PrintMissionContextHeader(void)
{
	QuestMenu_AddTextPrinterParameterized(2, 0,
	                                      questNameArray[SIDE_QUEST_COUNT + 1], 10, 1, 0, 1, 0, 0);
}
void QuestMenu_PrintTypeFilterButton(void)
{
	QuestMenu_AddTextPrinterParameterized(2, 0, sText_QuestMenu_Type, 198, 1,
	                                      0, 1, 0, 0);

}

static void QuestMenu_GenerateAndPrintHeader(void)
{
	QuestMenu_GenerateDenominatorNumQuests();
	QuestMenu_GenerateNumeratorNumQuests();
	QuestMenu_GenerateMissionContextHeader();

	QuestMenu_PrintNumQuests();
	QuestMenu_PrintMissionContextHeader();

	if (!QuestMenu_CheckSubquestMode())
	{
		QuestMenu_PrintTypeFilterButton();
	}
}

static void QuestMenu_PlaceTopMenuScrollIndicatorArrows(void)
{
	u8 listSize = QuestMenu_GenerateTotalItems();

	if (listSize < sStateDataPtr->maxShowed)
	{
		listSize = sStateDataPtr->maxShowed;
	}

	sStateDataPtr->scrollIndicatorArrowPairId =
	      AddScrollIndicatorArrowPairParameterized(2, 94, 8, 90,
	                  (listSize - sStateDataPtr->maxShowed), 110, 110, &sListMenuState.scroll);
}

static void QuestMenu_RemoveScrollIndicatorArrowPair(void)
{
	if (sStateDataPtr->scrollIndicatorArrowPairId != 0xFF)
	{
		RemoveScrollIndicatorArrowPair(sStateDataPtr->scrollIndicatorArrowPairId);
		sStateDataPtr->scrollIndicatorArrowPairId = 0xFF;
	}
}

static void QuestMenu_SetCursorPosition(void)
{
	if (sListMenuState.scroll != 0
	            && sListMenuState.scroll + sStateDataPtr->maxShowed >
	            sStateDataPtr->nItems + 1)
	{
		sListMenuState.scroll = (sStateDataPtr->nItems + 1) -
		                        sStateDataPtr->maxShowed;
	}
	if (sListMenuState.scroll + sListMenuState.row >= sStateDataPtr->nItems +
	            1)
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
	sStateDataPtr->nItems = (QuestMenu_GenerateTotalItems()) - 1;

	sStateDataPtr->maxShowed = sStateDataPtr->nItems + 1 <= 4 ?
	                           sStateDataPtr->nItems + 1 : 4;
}

static void QuestMenu_SetScrollPosition(void)
{
	u8 i;

	if (sListMenuState.row > 3)
	{
		for (i = 0; i <= sListMenuState.row - 3;
		            sListMenuState.row--, sListMenuState.scroll++, i++)
		{
			if (sListMenuState.scroll + sStateDataPtr->maxShowed ==
			            sStateDataPtr->nItems + 1)
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

static s8 QuestMenu_ManageMode(u8 action)
{
	u8 mode = sStateDataPtr->filterMode;

	switch (action)
	{
		case SUB:
			mode = QuestMenu_ToggleSubquestMode(mode);
			break;

		case ALPHA:
			mode = QuestMenu_ToggleAlphaMode(mode);
			break;

		default:
			mode = QuestMenu_IncrementMode(mode);
			break;
	}
	sStateDataPtr->filterMode = mode;
}

u8 QuestMenu_ToggleSubquestMode(u8 mode)
{
	if (QuestMenu_CheckSubquestMode())
	{
		mode -= SORT_SUBQUEST;
	}
	else
	{
		mode += SORT_SUBQUEST;
	}

	return mode;
}

u8 QuestMenu_ToggleAlphaMode(u8 mode)
{
	if (QuestMenu_CheckAlphaMode())
	{
		mode -= SORT_DEFAULT_AZ;
	}
	else
	{
		mode += SORT_DEFAULT_AZ;
	}

	return mode;
}

u8 QuestMenu_IncrementMode(u8 mode)
{
	if (mode % 10 == 4)
	{
		mode -= SORT_DONE;
	}
	else
	{
		mode++;
	}

	return mode;
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
	data[0] = ListMenuInit(&gMultiuseListMenuTemplate, sListMenuState.scroll,
	                       sListMenuState.row);
}

static void QuestMenu_RestoreSavedScrollAndRow(s16 *data)
{
	data[0] = ListMenuInit(&gMultiuseListMenuTemplate,
	                       sListMenuState.storedScrollOffset,
	                       sListMenuState.storedRowPosition);
}

static void Task_QuestMenuMain(u8 taskId)
{
	s16 *data = gTasks[taskId].data;
	u16 scroll;
	u16 row;
	s32 input;
	u8 selectedQuestId;

	if (!gPaletteFade.active)
	{
		input = ListMenu_ProcessInput(data[0]);

		ListMenuGetScrollAndRow(data[0], &sListMenuState.scroll,
		                        &sListMenuState.row);

		switch (input)
		{
			case LIST_NOTHING_CHOSEN:
				if (JOY_NEW(R_BUTTON))
				{
					if (!QuestMenu_CheckSubquestMode())
					{
						PlaySE(SE_SELECT);
						QuestMenu_ManageMode(INCREMENT);
						sStateDataPtr->restoreCursor = FALSE;
						Task_QuestMenuCleanUp(taskId);
					}
				}
				if (JOY_NEW(START_BUTTON))
				{
					if (!QuestMenu_CheckSubquestMode())
					{
						PlaySE(SE_SELECT);
						QuestMenu_ManageMode(ALPHA);
						Task_QuestMenuCleanUp(taskId);
					}
				}
				if (JOY_NEW(SELECT_BUTTON))
				{
					if (!QuestMenu_CheckSubquestMode())
					{
						PlaySE(SE_SELECT);
						selectedQuestId = sListMenuItems[sListMenuState.row +
						                                                    sListMenuState.scroll].id;
						QuestMenu_ManageFavoriteQuests(selectedQuestId);
						sStateDataPtr->restoreCursor = FALSE;
						Task_QuestMenuCleanUp(taskId);
					}
				}
				break;

			case LIST_CANCEL:
				if (QuestMenu_CheckSubquestMode())
				{
					PrepareFadeOut(taskId);

					QuestMenu_ManageMode(SUB);
					sStateDataPtr->restoreCursor = TRUE;

					gTasks[taskId].func = Task_QuestMenu_FadeOut;
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
						PrepareFadeOut(taskId);

						PlaySE(SE_SELECT);
						sStateDataPtr->parentQuest = input;
						QuestMenu_ManageMode(SUB);
						sStateDataPtr->restoreCursor = FALSE;
						QuestMenu_SaveScrollAndRow(data);
						gTasks[taskId].func = Task_QuestMenu_FadeOut;
					}
				}
				break;
		}
	}
}

static void Task_QuestMenuCleanUp(u8 taskId)
{
	s16 *data = gTasks[taskId].data;

	QuestMenu_RemoveScrollIndicatorArrowPair();
	DestroyListMenuTask(data[0], &sListMenuState.scroll, &sListMenuState.row);
	ClearStdWindowAndFrameToTransparent(2, FALSE);

	QuestMenu_GenerateAndPrintHeader();
	QuestMenu_AllocateResourcesForListMenu();
	QuestMenu_BuildMenuTemplate();
	QuestMenu_PlaceTopMenuScrollIndicatorArrows();

	if (sStateDataPtr->restoreCursor == TRUE)
	{
		QuestMenu_RestoreSavedScrollAndRow(data);
	}
	else
	{
		QuestMenu_ResetSavedRowScrollToTop(data);
	}

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

static void QuestMenu_AddTextPrinterParameterized(u8 windowId, u8 fontId,
            const u8 *str, u8 x, u8 y,
            u8 letterSpacing, u8 lineSpacing, u8 speed, u8 colorIdx)
{
	AddTextPrinterParameterized4(windowId, fontId, x, y, letterSpacing,
	                             lineSpacing,
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

s8 ChangeSubQuestFlags(u8 quest, u8 caseId, u8 childQuest)
{
	u8 index = quest / 8; //8 bits per byte
	u8	bit = quest % 8;
	u8	mask = 1 << bit;

	u8	childIndex = childQuest / 8; //8 bits per byte
	u8	childBit = childQuest % 8;
	u8	childMask = 1 << childBit;

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

s8 GetSetQuestFlag(u8 quest, u8 caseId)
{
	u8 index = quest / 8; //8 bits per byte
	u8 bit = quest % 8;
	u8 mask = 1 << bit;

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
	memset(&gSaveBlock2Ptr->unlockedQuests, 0,
	       sizeof(gSaveBlock2Ptr->unlockedQuests));
	memset(&gSaveBlock2Ptr->activeQuests, 0,
	       sizeof(gSaveBlock2Ptr->activeQuests));
	memset(&gSaveBlock2Ptr->rewardQuests, 0,
	       sizeof(gSaveBlock2Ptr->rewardQuests));
	memset(&gSaveBlock2Ptr->completedQuests, 0,
	       sizeof(gSaveBlock2Ptr->completedQuests));
	memset(&gSaveBlock2Ptr->subQuests, 0, sizeof(gSaveBlock2Ptr->subQuests));
	memset(&gSaveBlock2Ptr->favoriteQuests, 0,
	       sizeof(gSaveBlock2Ptr->favoriteQuests));
}

static void
SetGpuRegBaseForFade() //Sets the GPU registers to prepare for a hardware fade
{
	SetGpuReg(REG_OFFSET_BLDCNT,
	          BLDCNT_TGT1_OBJ | BLDCNT_TGT1_BG0 | BLDCNT_TGT2_BG1 |
	          BLDCNT_EFFECT_BLEND);      //Blend Sprites and BG0 into BG1

	SetGpuReg(REG_OFFSET_BLDY, 0);
}

#define MAX_FADE_INTENSITY 16
#define MIN_FADE_INTENSITY 0

static void PrepareFadeOut(u8 taskId)
{
	SetGpuRegBaseForFade();
	SetGpuReg(REG_OFFSET_BLDALPHA, BLDALPHA_BLEND(MAX_FADE_INTENSITY, 0));
	gTasks[taskId].data[1] = MAX_FADE_INTENSITY; //blend weight
	gTasks[taskId].data[2] = 0; //delay
	gTasks[taskId].data[3] = gTasks[taskId].data[2]; //delay timer
	gTasks[taskId].data[4] = 2; //delta
}

static bool8 HandleFadeOut(u8 taskId)
{
	if (gTasks[taskId].data[3]-- != 0)
	{
		return FALSE;
	}

	gTasks[taskId].data[3] = gTasks[taskId].data[2];
	gTasks[taskId].data[1] -= gTasks[taskId].data[4];
	gTasks[taskId].data[2] += gTasks[taskId].data[3];

	if (gTasks[taskId].data[1] <= 0)
	{
		SetGpuReg(REG_OFFSET_BLDALPHA, BLDALPHA_BLEND(0, gTasks[taskId].data[1]));
		return TRUE;
	}
	SetGpuReg(REG_OFFSET_BLDALPHA, BLDALPHA_BLEND(gTasks[taskId].data[1],
	            MAX_FADE_INTENSITY - gTasks[taskId].data[1]));
	return FALSE;
}

static void PrepareFadeIn(u8
                          taskId) //Prepares the input handler for a hardware fade in
{
	SetGpuRegBaseForFade();
	SetGpuReg(REG_OFFSET_BLDALPHA, BLDALPHA_BLEND(0,
	            MAX_FADE_INTENSITY));
	gTasks[taskId].data[1] = MIN_FADE_INTENSITY;
	gTasks[taskId].data[2] = 0; //delay
	gTasks[taskId].data[3] = gTasks[taskId].data[1]; // delay timer
	gTasks[taskId].data[4] = 2; //delta
}

static bool8 HandleFadeIn(u8 taskId) //Handles the hardware fade in
{
	gTasks[taskId].data[3] = gTasks[taskId].data[2];
	gTasks[taskId].data[1] += gTasks[taskId].data[4];

	if (gTasks[taskId].data[1] >= MAX_FADE_INTENSITY)
	{
		SetGpuReg(REG_OFFSET_BLDALPHA, BLDALPHA_BLEND(MAX_FADE_INTENSITY,
		            MIN_FADE_INTENSITY));
		return TRUE;
	}
	SetGpuReg(REG_OFFSET_BLDALPHA, BLDALPHA_BLEND(gTasks[taskId].data[1],
	            MAX_FADE_INTENSITY - gTasks[taskId].data[1]));
	return FALSE;
}

static void Task_QuestMenu_FadeOut(u8 taskId)
{
	if (HandleFadeOut(taskId))
	{
		PrepareFadeIn(taskId);
		Task_QuestMenuCleanUp(taskId);
		gTasks[taskId].func = Task_QuestMenu_FadeIn;
	}
}

static void Task_QuestMenu_FadeIn(u8 taskId)
{
	if (HandleFadeIn(taskId))
	{
		gTasks[taskId].func = Task_QuestMenuMain;
	}
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
