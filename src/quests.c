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

// This File's Functions
static void DebugQuestMenu(void);
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
static void QuestMenu_MoveCursorFunc(s32 itemIndex, bool8 onInit, struct ListMenu * list);
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
static void QuestMenu_InsertItemIntoNewSlot(u8 taskId, u32 pos);
static void Task_QuestMenuRefreshAfterAcknowledgement(u8 taskId);
static void Task_QuestMenuCleanUp(u8 taskId);
static void QuestMenu_WithdrawMultipleInitWindow(u16 slotId);
static void Task_QuestMenuCancel(u8 taskId);
static void QuestMenu_InitWindows(void);
static void QuestMenu_AddTextPrinterParameterized(u8 windowId, u8 fontId, const u8 * str, u8 x, u8 y, u8 letterSpacing, u8 lineSpacing, u8 speed, u8 colorIdx);
static void QuestMenu_SetBorderStyleOnWindow(u8 windowId);
static void QuestMenu_SetInitializedFlag(u8 a0);
static bool8 IsActiveQuest(u8 questId);

// Data
// graphics
static const u32 sQuestMenuTiles[] = INCBIN_U32("graphics/quest_menu/menu.4bpp.lz");
static const u32 sQuestMenuBgPals[] = INCBIN_U32("graphics/quest_menu/menu_pal.gbapal.lz");
static const u32 sQuestMenuTilemap[] = INCBIN_U32("graphics/quest_menu/tilemap.bin.lz");

// strings
static const u8 sText_Empty[] = _("");
static const u8 sText_QuestMenu_AllHeader[] =_("All Missions");
static const u8 sText_QuestMenu_InactiveHeader[] =_("Inactive Missions");
static const u8 sText_QuestMenu_ActiveHeader[] =_("Active Missions");
static const u8 sText_QuestMenu_RewardHeader[] =_("Reward Available");
static const u8 sText_QuestMenu_CompletedHeader[] =_("Completed Missions");
static const u8 sText_QuestMenu_QuestNumberDisplay[] = _("{STR_VAR_1}/{STR_VAR_2}");
static const u8 sText_QuestMenu_Unk[] = _("??????");
static const u8 sText_QuestMenu_Active[] = _("Active");
static const u8 sText_QuestMenu_Reward[] = _("Reward");
static const u8 sText_QuestMenu_Complete[] = _("Done");
static const u8 sText_QuestMenu_ShowLocation[] =  _("Location: {STR_VAR_2}");
static const u8 sText_QuestMenu_StartForMore[] = _("Start for more details.");
static const u8 sText_QuestMenu_ReturnRecieveReward[] = _("Return to {STR_VAR_2}\nto recieve your reward!");
static const u8 sText_QuestMenu_SubQuestButton[] = _("{A_BUTTON}");
static const u8 sText_QuestMenu_Type[] = _("{R_BUTTON}Type");
static const u8 sText_QuestMenu_Caught[] = _("Caught");
static const u8 sText_QuestMenu_Found[] = _("Found");
static const u8 sText_QuestMenu_Read[] = _("Read");
static const u8 sText_QuestMenu_Back[] = _("Back");
static const u8 sText_QuestMenu_DotSpace[] = _(". ");
static const u8 sText_QuestMenu_Close[] = _("Close");
static const u8 sText_QuestMenu_GreenColor[] = _("{COLOR}{GREEN}");

#define sub_quest(n, d, p, m, o) {.name = n, .desc = d, .poc = p, .map = m, .object = o}
static const struct SubQuest sSubQuests1[SUB_QUEST_1_COUNT] =
{
    sub_quest(gText_SubQuest1_Name1,  gText_SubQuest1_Desc1,  gText_SideQuestPOC_1,  gText_SideQuestMap_1, OBJ_EVENT_GFX_WALLY),
    sub_quest(gText_SubQuest1_Name2,  gText_SubQuest1_Desc2,  gText_SideQuestPOC_2,  gText_SideQuestMap_2, OBJ_EVENT_GFX_WALLY),
    sub_quest(gText_SubQuest1_Name3,  gText_SubQuest1_Desc3,  gText_SideQuestPOC_3,  gText_SideQuestMap_3, OBJ_EVENT_GFX_WALLY),
    sub_quest(gText_SubQuest1_Name4,  gText_SubQuest1_Desc4,  gText_SideQuestPOC_4,  gText_SideQuestMap_4, OBJ_EVENT_GFX_WALLY),
    sub_quest(gText_SubQuest1_Name5,  gText_SubQuest1_Desc5,  gText_SideQuestPOC_5,  gText_SideQuestMap_5, OBJ_EVENT_GFX_WALLY),
    sub_quest(gText_SubQuest1_Name6,  gText_SubQuest1_Desc6,  gText_SideQuestPOC_6,  gText_SideQuestMap_6, OBJ_EVENT_GFX_WALLY),
    sub_quest(gText_SubQuest1_Name7,  gText_SubQuest1_Desc7,  gText_SideQuestPOC_7,  gText_SideQuestMap_7, OBJ_EVENT_GFX_WALLY),
    sub_quest(gText_SubQuest1_Name8,  gText_SubQuest1_Desc8,  gText_SideQuestPOC_8,  gText_SideQuestMap_8, OBJ_EVENT_GFX_WALLY),
    sub_quest(gText_SubQuest1_Name9,  gText_SubQuest1_Desc9,  gText_SideQuestPOC_9,  gText_SideQuestMap_9, OBJ_EVENT_GFX_WALLY),
    sub_quest(gText_SubQuest1_Name10, gText_SubQuest1_Desc10, gText_SideQuestPOC_10, gText_SideQuestMap_10, OBJ_EVENT_GFX_WALLY),

};
static const struct SubQuest sSubQuests2[SUB_QUEST_2_COUNT] =
{
    sub_quest(gText_SubQuest1_Name1,  gText_SubQuest1_Desc1,  gText_SideQuestPOC_1,  gText_SideQuestMap_1, OBJ_EVENT_GFX_WALLY),
    sub_quest(gText_SubQuest1_Name2,  gText_SubQuest1_Desc2,  gText_SideQuestPOC_2,  gText_SideQuestMap_2, OBJ_EVENT_GFX_WALLY),
    sub_quest(gText_SubQuest1_Name3,  gText_SubQuest1_Desc3,  gText_SideQuestPOC_3,  gText_SideQuestMap_3, OBJ_EVENT_GFX_WALLY),
    sub_quest(gText_SubQuest1_Name4,  gText_SubQuest1_Desc4,  gText_SideQuestPOC_4,  gText_SideQuestMap_4, OBJ_EVENT_GFX_WALLY),
    sub_quest(gText_SubQuest1_Name5,  gText_SubQuest1_Desc5,  gText_SideQuestPOC_5,  gText_SideQuestMap_5, OBJ_EVENT_GFX_WALLY),
    sub_quest(gText_SubQuest1_Name6,  gText_SubQuest1_Desc6,  gText_SideQuestPOC_6,  gText_SideQuestMap_6, OBJ_EVENT_GFX_WALLY),
    sub_quest(gText_SubQuest1_Name7,  gText_SubQuest1_Desc7,  gText_SideQuestPOC_7,  gText_SideQuestMap_7, OBJ_EVENT_GFX_WALLY),
    sub_quest(gText_SubQuest1_Name8,  gText_SubQuest1_Desc8,  gText_SideQuestPOC_8,  gText_SideQuestMap_8, OBJ_EVENT_GFX_WALLY),
    sub_quest(gText_SubQuest1_Name9,  gText_SubQuest1_Desc9,  gText_SideQuestPOC_9,  gText_SideQuestMap_9, OBJ_EVENT_GFX_WALLY),
    sub_quest(gText_SubQuest1_Name10, gText_SubQuest1_Desc10, gText_SideQuestPOC_10, gText_SideQuestMap_10, OBJ_EVENT_GFX_WALLY),
    sub_quest(gText_SubQuest1_Name1,  gText_SubQuest1_Desc1,  gText_SideQuestPOC_1,  gText_SideQuestMap_1, OBJ_EVENT_GFX_WALLY),
    sub_quest(gText_SubQuest1_Name2,  gText_SubQuest1_Desc2,  gText_SideQuestPOC_2,  gText_SideQuestMap_2, OBJ_EVENT_GFX_WALLY),
    sub_quest(gText_SubQuest1_Name3,  gText_SubQuest1_Desc3,  gText_SideQuestPOC_3,  gText_SideQuestMap_3, OBJ_EVENT_GFX_WALLY),
    sub_quest(gText_SubQuest1_Name4,  gText_SubQuest1_Desc4,  gText_SideQuestPOC_4,  gText_SideQuestMap_4, OBJ_EVENT_GFX_WALLY),
    sub_quest(gText_SubQuest1_Name5,  gText_SubQuest1_Desc5,  gText_SideQuestPOC_5,  gText_SideQuestMap_5, OBJ_EVENT_GFX_WALLY),
    sub_quest(gText_SubQuest1_Name6,  gText_SubQuest1_Desc6,  gText_SideQuestPOC_6,  gText_SideQuestMap_6, OBJ_EVENT_GFX_WALLY),
    sub_quest(gText_SubQuest1_Name7,  gText_SubQuest1_Desc7,  gText_SideQuestPOC_7,  gText_SideQuestMap_7, OBJ_EVENT_GFX_WALLY),
    sub_quest(gText_SubQuest1_Name8,  gText_SubQuest1_Desc8,  gText_SideQuestPOC_8,  gText_SideQuestMap_8, OBJ_EVENT_GFX_WALLY),
    sub_quest(gText_SubQuest1_Name9,  gText_SubQuest1_Desc9,  gText_SideQuestPOC_9,  gText_SideQuestMap_9, OBJ_EVENT_GFX_WALLY),
    sub_quest(gText_SubQuest1_Name10, gText_SubQuest1_Desc10, gText_SideQuestPOC_10, gText_SideQuestMap_10, OBJ_EVENT_GFX_WALLY),

};

#define side_quest(n, d, p, m, o, sq, ct, ns) {.name = n, .desc = d, .poc = p, .map = m, .object = o, .subquests = sq, .childtype = ct, .numSubquests = ns}
static const struct SideQuest sSideQuests[SIDE_QUEST_COUNT] =
{
    side_quest(gText_SideQuestName_1,  gText_SideQuestDesc_1,  gText_SideQuestPOC_1,  gText_SideQuestMap_1, OBJ_EVENT_GFX_ROXANNE, sSubQuests1, SUBQUEST_FIND, SUB_QUEST_1_COUNT), 
    side_quest(gText_SideQuestName_2,  gText_SideQuestDesc_2,  gText_SideQuestPOC_2,  gText_SideQuestMap_2, OBJ_EVENT_GFX_BRAWLY, sSubQuests2, SUBQUEST_CATCH, SUB_QUEST_2_COUNT),
    side_quest(gText_SideQuestName_3,  gText_SideQuestDesc_3,  gText_SideQuestPOC_3,  gText_SideQuestMap_3, OBJ_EVENT_GFX_WATTSON,  NULL, 0, 0),
    side_quest(gText_SideQuestName_4,  gText_SideQuestDesc_4,  gText_SideQuestPOC_4,  gText_SideQuestMap_4, OBJ_EVENT_GFX_FLANNERY,  NULL, 0, 0),
    side_quest(gText_SideQuestName_5,  gText_SideQuestDesc_5,  gText_SideQuestPOC_5,  gText_SideQuestMap_5, OBJ_EVENT_GFX_NORMAN,  NULL, 0, 0),
    side_quest(gText_SideQuestName_6,  gText_SideQuestDesc_6,  gText_SideQuestPOC_6,  gText_SideQuestMap_6, OBJ_EVENT_GFX_WINONA,  NULL, 0, 0),
    side_quest(gText_SideQuestName_7,  gText_SideQuestDesc_7,  gText_SideQuestPOC_7,  gText_SideQuestMap_7, OBJ_EVENT_GFX_TATE,  NULL, 0, 0),
    side_quest(gText_SideQuestName_8,  gText_SideQuestDesc_8,  gText_SideQuestPOC_8,  gText_SideQuestMap_8, OBJ_EVENT_GFX_JUAN,  NULL, 0, 0),
    side_quest(gText_SideQuestName_9,  gText_SideQuestDesc_9,  gText_SideQuestPOC_9,  gText_SideQuestMap_9, OBJ_EVENT_GFX_WALLY,  NULL, 0, 0),
    side_quest(gText_SideQuestName_10, gText_SideQuestDesc_10, gText_SideQuestPOC_10, gText_SideQuestMap_10, OBJ_EVENT_GFX_WALLY, NULL, 0, 0),
    side_quest(gText_SideQuestName_11, gText_SideQuestDesc_11, gText_SideQuestPOC_11, gText_SideQuestMap_11, OBJ_EVENT_GFX_WALLY, NULL, 0, 0),
    side_quest(gText_SideQuestName_12, gText_SideQuestDesc_12, gText_SideQuestPOC_12, gText_SideQuestMap_12, OBJ_EVENT_GFX_WALLY, NULL, 0, 0),
    side_quest(gText_SideQuestName_13, gText_SideQuestDesc_13, gText_SideQuestPOC_13, gText_SideQuestMap_13, OBJ_EVENT_GFX_WALLY, NULL, 0, 0),
    side_quest(gText_SideQuestName_14, gText_SideQuestDesc_14, gText_SideQuestPOC_14, gText_SideQuestMap_14, OBJ_EVENT_GFX_WALLY, NULL, 0, 0),
    side_quest(gText_SideQuestName_15, gText_SideQuestDesc_15, gText_SideQuestPOC_15, gText_SideQuestMap_15, OBJ_EVENT_GFX_WALLY, NULL, 0, 0),
    side_quest(gText_SideQuestName_16, gText_SideQuestDesc_16, gText_SideQuestPOC_16, gText_SideQuestMap_16, OBJ_EVENT_GFX_WALLY, NULL, 0, 0),
    side_quest(gText_SideQuestName_17, gText_SideQuestDesc_17, gText_SideQuestPOC_17, gText_SideQuestMap_17, OBJ_EVENT_GFX_WALLY, NULL, 0, 0),
    side_quest(gText_SideQuestName_18, gText_SideQuestDesc_18, gText_SideQuestPOC_18, gText_SideQuestMap_18, OBJ_EVENT_GFX_WALLY, NULL, 0, 0),
    side_quest(gText_SideQuestName_19, gText_SideQuestDesc_19, gText_SideQuestPOC_19, gText_SideQuestMap_19, OBJ_EVENT_GFX_WALLY, NULL, 0, 0),
    side_quest(gText_SideQuestName_20, gText_SideQuestDesc_20, gText_SideQuestPOC_20, gText_SideQuestMap_20, OBJ_EVENT_GFX_WALLY, NULL, 0, 0),
    side_quest(gText_SideQuestName_21, gText_SideQuestDesc_21, gText_SideQuestPOC_21, gText_SideQuestMap_21, OBJ_EVENT_GFX_WALLY, NULL, 0, 0),
    side_quest(gText_SideQuestName_22, gText_SideQuestDesc_22, gText_SideQuestPOC_22, gText_SideQuestMap_22, OBJ_EVENT_GFX_WALLY, NULL, 0, 0),
    side_quest(gText_SideQuestName_23, gText_SideQuestDesc_23, gText_SideQuestPOC_23, gText_SideQuestMap_23, OBJ_EVENT_GFX_WALLY, NULL, 0, 0),
    side_quest(gText_SideQuestName_24, gText_SideQuestDesc_24, gText_SideQuestPOC_24, gText_SideQuestMap_24, OBJ_EVENT_GFX_WALLY, NULL, 0, 0),
    side_quest(gText_SideQuestName_25, gText_SideQuestDesc_25, gText_SideQuestPOC_25, gText_SideQuestMap_25, OBJ_EVENT_GFX_WALLY, NULL, 0, 0),
    side_quest(gText_SideQuestName_26, gText_SideQuestDesc_26, gText_SideQuestPOC_26, gText_SideQuestMap_26, OBJ_EVENT_GFX_WALLY, NULL, 0, 0),
    side_quest(gText_SideQuestName_27, gText_SideQuestDesc_27, gText_SideQuestPOC_27, gText_SideQuestMap_27, OBJ_EVENT_GFX_WALLY, NULL, 0, 0),
    side_quest(gText_SideQuestName_28, gText_SideQuestDesc_28, gText_SideQuestPOC_28, gText_SideQuestMap_28, OBJ_EVENT_GFX_WALLY, NULL, 0, 0),
    side_quest(gText_SideQuestName_29, gText_SideQuestDesc_29, gText_SideQuestPOC_29, gText_SideQuestMap_29, OBJ_EVENT_GFX_WALLY, NULL, 0, 0),
    side_quest(gText_SideQuestName_30, gText_SideQuestDesc_30, gText_SideQuestPOC_30, gText_SideQuestMap_30, OBJ_EVENT_GFX_WALLY, NULL, 0, 0),
};

static const struct BgTemplate sQuestMenuBgTemplates[2] =
{
    {
        .bg = 0,
        .charBaseIndex = 0,
        .mapBaseIndex = 31,
        .priority = 0
    }, 
    {
        .bg = 1,
        .charBaseIndex = 3,
        .mapBaseIndex = 30,
        .priority = 1
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
            break;
    }
}

// PSF TODO remove PC screen effect on boot
// from pc_screen_effect
static void BeginPCScreenEffect(TaskFunc task, u16 a1, u16 a2, u16 priority)
{
    u8 taskId = CreateTask(task, priority);
    gTasks[taskId].data[0] = 0;
    if (a1 == 0)
        gTasks[taskId].data[1] = 16;
    else
        gTasks[taskId].data[1] = 0;

    if (a1 == 0)
        gTasks[taskId].data[2] = 20;
    else
        gTasks[taskId].data[2] = 0;

    gTasks[taskId].func(taskId);
}

/// from pc_screen_effect
static void Task_PCScreenEffect_TurnOn(u8 taskId)
{
    struct Task *task = &gTasks[taskId];

    switch (task->tState)
    {
        case 0:
            task->tWin0Left = 120;
            task->tWin0Right = 120;
            task->tWin0Top = 80;
            task->tWin0Bottom = 81;
            SetGpuRegBits(REG_OFFSET_DISPCNT, DISPCNT_WIN0_ON);
            SetGpuReg(REG_OFFSET_WIN0H, WIN_RANGE(task->tWin0Left, task->tWin0Right));
            SetGpuReg(REG_OFFSET_WIN0V, WIN_RANGE(task->tWin0Top, task->tWin0Bottom));
            SetGpuReg(REG_OFFSET_WININ, WININ_WIN0_BG_ALL | WININ_WIN0_OBJ | WININ_WIN0_CLR);
            SetGpuReg(REG_OFFSET_WINOUT, 0);
            break;
        case 1:
            task->tBldCntBak = GetGpuReg(REG_OFFSET_BLDCNT);
            task->tBldYBak = GetGpuReg(REG_OFFSET_BLDY);
            SetGpuReg(REG_OFFSET_BLDCNT, BLDCNT_TGT1_BG0 | BLDCNT_TGT1_BG1 | BLDCNT_TGT1_BG2 | BLDCNT_TGT1_BG3 | BLDCNT_TGT1_OBJ | BLDCNT_TGT1_BD | BLDCNT_EFFECT_LIGHTEN);
            SetGpuReg(REG_OFFSET_BLDY, 16);
            break;
        case 2:
            task->tWin0Left -= task->tXSpeed;
            task->tWin0Right += task->tXSpeed;
            if (task->tWin0Left <= 0 || task->tWin0Right >= DISPLAY_WIDTH)
            {
                task->tWin0Left = 0;
                task->tWin0Right = DISPLAY_WIDTH;
                SetGpuReg(REG_OFFSET_BLDY, 0);
                SetGpuReg(REG_OFFSET_BLDCNT, task->tBldCntBak);
                BlendPalettes(0xFFFFFFFF, 0, RGB_BLACK);
                gPlttBufferFaded[0] = 0;
            }
            SetGpuReg(REG_OFFSET_WIN0H, WIN_RANGE(task->tWin0Left, task->tWin0Right));
            if (task->tWin0Left)
                return;
            break;
        case 3:
            task->tWin0Top -= task->tYSpeed;
            task->tWin0Bottom += task->tYSpeed;
            if (task->tWin0Top <= 0 || task->tWin0Bottom >= DISPLAY_HEIGHT)
            {
                task->tWin0Top = 0;
                task->tWin0Bottom = DISPLAY_HEIGHT;
                ClearGpuRegBits(REG_OFFSET_DISPCNT, DISPCNT_WIN0_ON);
            }
            SetGpuReg(REG_OFFSET_WIN0V, WIN_RANGE(task->tWin0Top, task->tWin0Bottom));
            if (task->tWin0Top)
                return;
            break;
        default:
            SetGpuReg(REG_OFFSET_BLDCNT, task->tBldCntBak);
            DestroyTask(taskId);
            return;
    }
    ++task->tState;
}

// from pc_screen_effect
static void BeginPCScreenEffect_TurnOn(u16 a0, u16 a1, u16 a2)
{
    BeginPCScreenEffect(Task_PCScreenEffect_TurnOn, a0, a1, a2);
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
                gMain.state++;
            break;
        case 9:
            //Loads the background, text and sprites will still spawn
            QuestMenu_InitWindows();
            gMain.state++;
            break;
        case 10:
            //When commented out, question marks loads for every slot and page does not scroll when going past number 6
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
            sStateDataPtr->filterMode = 0; //set up filter mode to be zero
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
            gTasks[taskId].data[0] = ListMenuInit(&gMultiuseListMenuTemplate, sListMenuState.scroll, sListMenuState.row);
            gMain.state++;
            break;
        case 16:
            //arrows at the top and bottom don't appear without this
            QuestMenu_PlaceTopMenuScrollIndicatorArrows();
            gMain.state++;
            break;
        case 17:
            //HelpSystem_SetSomeVariable2(29);
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
                BeginPCScreenEffect_TurnOn(0, 0, 0);
                QuestMenu_SetInitializedFlag(1);
                PlaySE(SE_PC_LOGIN);
            }
            gMain.state++;
            break;
        case 20:
            //if ((u8)sub_80BF72C() != TRUE)
            //gMain.state++;
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
        return FALSE;

    memset(sBg1TilemapBuffer, 0, 0x800);
    ResetBgsAndClearDma3BusyFlags(0);
    InitBgsFromTemplates(0, sQuestMenuBgTemplates, NELEMS(sQuestMenuBgTemplates));
    SetBgTilemapBuffer(1, sBg1TilemapBuffer);
    ScheduleBgCopyTilemapToVram(1);
    SetGpuReg(REG_OFFSET_DISPCNT, DISPCNT_OBJ_1D_MAP | DISPCNT_OBJ_ON);
    SetGpuReg(REG_OFFSET_BLDCNT , 0);
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
            //LoadCompressedSpriteSheet(&gBagSwapSpriteSheet);
            sStateDataPtr->data[0]++;
            break;
        default:
            //LoadCompressedSpritePalette(&gBagSwapSpritePalette);
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
    try_alloc(sListMenuItems, sizeof(struct ListMenuItem) * QuestMenu_GenerateTotalItems(sStateDataPtr->filterMode) + 1);
    return TRUE;
}

static s8 QuestMenu_CheckHasChildren(u16 itemId){
    if (sSideQuests[itemId].childtype != 0 && GetSetQuestFlag(itemId, FLAG_GET_UNLOCKED) && !GetSetQuestFlag(itemId,FLAG_GET_INACTIVE)){
        return TRUE;
    }
    else{
        return FALSE;
    } 
}

static u8 QuestMenu_GenerateTotalItems(u8 mode)
{

    u8 parentQuest = sStateDataPtr->parentQuest;

    switch(mode){
        case SORT_DEFAULT:
            return sStateDataPtr->nItems + 1;
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


static bool8 QuestMenu_CheckDefaultMode(void){
    if (sStateDataPtr->filterMode == FLAG_GET_UNLOCKED)
        return TRUE;
    else
        return FALSE;
}

static bool8 QuestMenu_CheckSubquestMode(void){
    if (sStateDataPtr->filterMode > SORT_DONE)
    {
        return TRUE;
    }
    else
        return FALSE;
}

static void QuestMenu_AssignCancelNameAndId(u8 numRow){

    if (QuestMenu_CheckSubquestMode()){
        sListMenuItems[numRow].name = sText_QuestMenu_Back;
        sListMenuItems[numRow].id = LIST_CANCEL;
    } else {
        sListMenuItems[numRow].name = sText_QuestMenu_Close;
        sListMenuItems[numRow].id = LIST_CANCEL;
    }
}

static u16 QuestMenu_BuildFilteredMenuTemplate(void)
{
    //PSF TODO Inactive quests shows quests that are UNLOCKED but not active, should show both
    //PSF TODO Clicking on quest 2 while filtered goes to subquest3
    u8 parentQuest = sStateDataPtr->parentQuest;
    u16 countQuest, numRow = 0;
    u8 lastRow, newRow, offset = 0;

    bool8 usePointer = FALSE;

    u8 questNameArray[SIDE_QUEST_COUNT][32];
    //u8 *questNamePointer = Alloc(sizeof(u8) * SIDE_QUEST_COUNT);
    void *questNamePointer = AllocZeroed(sizeof(u8) * 3 * SIDE_QUEST_COUNT);

    if (usePointer){

        if (QuestMenu_CheckSubquestMode())
        {
            countQuest = 0;
            parentQuest = sStateDataPtr->parentQuest;

            for (numRow = 0; numRow < sSideQuests[parentQuest].numSubquests; numRow++)
            {
                questNamePointer = ConvertIntToDecimalStringN(questNameArray[countQuest], countQuest + 1, STR_CONV_MODE_LEFT_ALIGN, 2);
                questNamePointer = StringAppend(questNamePointer,sText_QuestMenu_DotSpace);

                if (ChangeSubQuestFlags(parentQuest, FLAG_GET_COMPLETED, countQuest))
                    questNamePointer = StringAppend(questNamePointer,sSideQuests[parentQuest].subquests[countQuest].name);
                else
                    questNamePointer = StringAppend(questNamePointer,sText_QuestMenu_Unk);

                sListMenuItems[numRow].name = questNameArray[countQuest];
                sListMenuItems[numRow].id = countQuest;
                countQuest++;
                lastRow = numRow+1;
            }
        }
        else if (!QuestMenu_CheckDefaultMode()){

            for (countQuest = 0; countQuest < sStateDataPtr->nItems; countQuest++)
            {
                if (GetSetQuestFlag(countQuest,sStateDataPtr->filterMode))
                {
                    questNamePointer = StringCopy(questNameArray[countQuest], sText_Empty);

                    if (GetSetQuestFlag(countQuest, FLAG_GET_FAVORITE)){
                        questNamePointer = StringAppend(questNameArray[countQuest], sText_QuestMenu_GreenColor);
                        newRow = numRow;
                        numRow++;
                    } else {
                        newRow = QuestMenu_CountFavoriteAndState() + offset;
                        offset++;
                    }

                    if (GetSetQuestFlag(countQuest, FLAG_GET_UNLOCKED)){
                        questNamePointer = StringAppend(questNameArray[countQuest], sSideQuests[countQuest].name);

                        if (QuestMenu_CheckHasChildren(countQuest)){
                            questNamePointer = StringAppend(questNamePointer,sText_QuestMenu_SubQuestButton);
                        }
                    }
                    else
                        questNamePointer = StringAppend(questNameArray[countQuest], sText_QuestMenu_Unk);

                    sListMenuItems[newRow].name = sSideQuests[countQuest].name;
                    sListMenuItems[newRow].id = countQuest;
                }
            }
            lastRow = numRow + offset;
        }
        else {
            for (countQuest = 0; countQuest < sStateDataPtr->nItems; countQuest++)
            {
                questNamePointer = StringCopy(questNameArray[countQuest], sText_Empty);

                if (GetSetQuestFlag(countQuest, FLAG_GET_FAVORITE)){
                    questNamePointer = StringAppend(questNameArray[countQuest], sText_QuestMenu_GreenColor);
                    newRow = numRow;
                    numRow++;
                }
                else {
                    newRow = QuestMenu_CountFavoriteQuests() + offset;
                    offset++;
                }

                if (GetSetQuestFlag(countQuest, FLAG_GET_UNLOCKED)){
                    questNamePointer = StringAppend(questNameArray[countQuest], sSideQuests[countQuest].name);

                    if (QuestMenu_CheckHasChildren(countQuest)){
                        questNamePointer = StringAppend(questNameArray[countQuest],sText_QuestMenu_SubQuestButton);
                    }
                }
                else
                    StringAppend(questNameArray[countQuest], sText_QuestMenu_Unk);

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
        gMultiuseListMenuTemplate.cursorPal = 1;
        gMultiuseListMenuTemplate.fillValue = 0;
        gMultiuseListMenuTemplate.cursorShadowPal = 0;
        gMultiuseListMenuTemplate.moveCursorFunc = QuestMenu_MoveCursorFunc;
        gMultiuseListMenuTemplate.itemPrintFunc = QuestMenu_PrintProgressFunc;
        gMultiuseListMenuTemplate.scrollMultiple = 1;
        gMultiuseListMenuTemplate.cursorKind = 0;
    }

    if (!usePointer){

        if (QuestMenu_CheckSubquestMode())
        {
            countQuest = 0;
            parentQuest = sStateDataPtr->parentQuest;

            for (numRow = 0; numRow < sSideQuests[parentQuest].numSubquests; numRow++)
            {
                if (ChangeSubQuestFlags(parentQuest, FLAG_GET_COMPLETED, countQuest))
                    sListMenuItems[numRow].name = sSideQuests[parentQuest].subquests[countQuest].name;
                else
                    sListMenuItems[numRow].name = sText_QuestMenu_Unk;

                sListMenuItems[numRow].id = countQuest;
                countQuest++;
                lastRow = numRow+1;
            }
        }
        else if (!QuestMenu_CheckDefaultMode()){

            for (countQuest = 0; countQuest < sStateDataPtr->nItems; countQuest++)
            {
                if (GetSetQuestFlag(countQuest,sStateDataPtr->filterMode))
                {
                    if (GetSetQuestFlag(countQuest, FLAG_GET_FAVORITE)){
                        newRow = numRow;
                        numRow++;
                    } else {
                        newRow = QuestMenu_CountFavoriteAndState() + offset;
                        offset++;
                    }
                    if (GetSetQuestFlag(countQuest, FLAG_GET_UNLOCKED))
                        sListMenuItems[newRow].name = sSideQuests[countQuest].name;

                    else
                        sListMenuItems[newRow].name = sText_QuestMenu_Unk;

                    sListMenuItems[newRow].id = countQuest;
                }
            }
            lastRow = numRow + offset;
        }
        else {
            for (countQuest = 0; countQuest < sStateDataPtr->nItems; countQuest++)
            {
                if (GetSetQuestFlag(countQuest, FLAG_GET_FAVORITE)){
                    newRow = numRow;
                    numRow++;
                }
                else {
                    newRow = QuestMenu_CountFavoriteQuests() + offset;
                    offset++;
                }

                if (GetSetQuestFlag(countQuest, FLAG_GET_UNLOCKED))
                    sListMenuItems[newRow].name = sSideQuests[countQuest].name;

                else
                    sListMenuItems[newRow].name = sText_QuestMenu_Unk;

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
        gMultiuseListMenuTemplate.cursorPal = 1;
        gMultiuseListMenuTemplate.fillValue = 0;
        gMultiuseListMenuTemplate.cursorShadowPal = 0;
        gMultiuseListMenuTemplate.moveCursorFunc = QuestMenu_MoveCursorFunc;
        gMultiuseListMenuTemplate.itemPrintFunc = QuestMenu_PrintProgressFunc;
        gMultiuseListMenuTemplate.scrollMultiple = 1;
        gMultiuseListMenuTemplate.cursorKind = 0;
    }
}

void CreateObjectMenuIcon(u16 itemId, u8 idx)
{
    u8 * ptr = &gUnknown_2039878[10];
    u8 spriteId;

    if (ptr[idx] == 0xFF)
    {

        FreeSpriteTilesByTag(102 + idx);
        FreeSpritePaletteByTag(102 + idx);

        spriteId = CreateObjectGraphicsSprite(itemId,SpriteCallbackDummy,20,132,0);
        gSprites[spriteId].oam.priority = 0;
        if (spriteId != MAX_SPRITES)
        {
            ptr[idx] = spriteId;
        }

    }
}

void CreateItemMenuIcon(u16 itemId, u8 idx)
{
    u8 * ptr = &gUnknown_2039878[10];
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
        gUnknown_2039878[i] = 0xFF;
}

void DestroyItemMenuIcon(u8 idx)
{
    u8 * ptr = &gUnknown_2039878[10];

    if (ptr[idx] != 0xFF)
    {
        DestroySpriteAndFreeResources(&gSprites[ptr[idx]]);
        ptr[idx] = 0xFF;
    }
}

void DestroyObjectMenuIcon(u8 idx)
{
    u8 * ptr = &gUnknown_2039878[10];

    if (ptr[idx] != 0xFF)
    {
        DestroySpriteAndFreeResources(&gSprites[ptr[idx]]);
        ptr[idx] = 0xFF;
    }
}

static void QuestMenu_MoveCursorFunc(s32 itemIndex, bool8 onInit, struct ListMenu * list)
{
    u16 itemId;
    u8 parentQuest = sStateDataPtr->parentQuest;
    const u8 * desc;

    if (onInit != TRUE)
        PlaySE(SE_SELECT);

    if (sStateDataPtr->moveModeOrigPos == 0xFF)
    {
        DestroyObjectMenuIcon(sStateDataPtr->itemMenuIconSlot ^ 1);

        if (itemIndex != LIST_CANCEL)
        {
            if (!QuestMenu_CheckSubquestMode()){

                if (GetSetQuestFlag(itemIndex, FLAG_GET_UNLOCKED))
                {

                    //Look up the quest struct and get the description with this quest
                    if (GetSetQuestFlag(itemIndex, FLAG_GET_REWARD))
                        StringCopy(gStringVar1, sText_QuestMenu_ReturnRecieveReward);
                    else
                        StringCopy(gStringVar1, sSideQuests[itemIndex].desc);
                }
                else
                {
                    StringCopy(gStringVar1, sText_QuestMenu_StartForMore);
                }
                StringCopy(gStringVar2, sSideQuests[itemIndex].map);
            }
            else {

                if (ChangeSubQuestFlags(parentQuest,FLAG_GET_COMPLETED,itemIndex))
                {
                    itemId = sSideQuests[parentQuest].subquests[itemIndex].object;
                    StringCopy(gStringVar1, sSideQuests[parentQuest].subquests[itemIndex].desc);
                    //PSF TODO Create completed string variants for each quest, add to struct
                } 
                else
                {
                    CreateItemMenuIcon(ITEM_NONE,sStateDataPtr->itemMenuIconSlot);
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
            //PSF TODO figure out why go to field arrow doesn't print here
            CreateItemMenuIcon(ITEM_FIELD_ARROW, sStateDataPtr->itemMenuIconSlot);
            StringCopy(gStringVar4, sText_Empty);
            StringCopy(gStringVar3, sText_Empty);
        }

        sStateDataPtr->itemMenuIconSlot ^= 1;
        FillWindowPixelBuffer(1, 0);

        QuestMenu_AddTextPrinterParameterized(1, 2, gStringVar4, 2, 3, 2, 0, 0, 0);
        QuestMenu_AddTextPrinterParameterized(1, 2, gStringVar3, 40,19, 5, 0, 0, 0);
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
            QuestMenu_PrintOrRemoveCursorAt(y, 2);
        else
            QuestMenu_PrintOrRemoveCursorAt(y, 0xFF);
    }

    if (itemId != LIST_CANCEL)
    {
        if (QuestMenu_CheckSubquestMode()){
            if (ChangeSubQuestFlags(parentQuest,FLAG_GET_COMPLETED,itemId)){
                colorIndex = 2;
                switch (questType){
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
            else {
                StringCopy(gStringVar4, sText_Empty);
            }
        }
        else {
            if (GetSetQuestFlag(itemId, FLAG_GET_COMPLETED)) {
                StringCopy(gStringVar4, sText_QuestMenu_Complete);
                colorIndex = 2;
            }
            else if (GetSetQuestFlag(itemId, FLAG_GET_REWARD)){
                StringCopy(gStringVar4, sText_QuestMenu_Reward);
                colorIndex = 1;
            }
            else if (GetSetQuestFlag(itemId, FLAG_GET_ACTIVE)){
                StringCopy(gStringVar4, sText_QuestMenu_Active);
                colorIndex = 3;
            }
            else{
                StringCopy(gStringVar4, sText_Empty);
            }
        }
        //PSF TODO Figure out how to use TEXT_DYNAMIC_COLOR_1 to get better colors
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

    for (i = 0; i < SIDE_QUEST_COUNT; i++){
        if (GetSetQuestFlag(i,FLAG_GET_UNLOCKED)) {
            q++;
        }
    }
    return q;
}

s8 QuestMenu_CountInactiveQuests(void)
{
    u8 i;
    u8 q = 0;

    for (i = 0; i < SIDE_QUEST_COUNT; i++){
        if (GetSetQuestFlag(i,FLAG_GET_INACTIVE)) {
            q++;
        }
    }
    return q;
}

s8 QuestMenu_CountActiveQuests(void)
{
    u8 i;
    u8 q = 0;

    for (i = 0; i < SIDE_QUEST_COUNT; i++){
        if (GetSetQuestFlag(i,FLAG_GET_ACTIVE)) {
            q++;
        }
    }
    return q;
}

s8 QuestMenu_CountRewardQuests(void)
{
    u8 i;
    u8 q = 0;

    for (i = 0; i < SIDE_QUEST_COUNT; i++){
        if (GetSetQuestFlag(i,FLAG_GET_REWARD)) {
            q++;
        }
    }
    return q;
}

s8 QuestMenu_CountFavoriteQuests(void)
{
    u8 i;
    u8 q = 0;

    for (i = 0; i < SIDE_QUEST_COUNT; i++){
        if (GetSetQuestFlag(i,FLAG_GET_FAVORITE)) {
            q++;
        }
    }
    return q;
}

s8 QuestMenu_CountFavoriteAndState(void)
{
    u8 i;
    u8 q = 0;

    for (i = 0; i < SIDE_QUEST_COUNT; i++){
        if (GetSetQuestFlag(i,sStateDataPtr->filterMode) && GetSetQuestFlag(i,FLAG_GET_FAVORITE)){
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

    if (mode > SORT_DONE){
        for (i = 0; i < sSideQuests[parentQuest].numSubquests; i++){
            if (ChangeSubQuestFlags(parentQuest,FLAG_GET_COMPLETED,i)){
                q++;
            }
        }
    }
    else {
        for (i = 0; i < SIDE_QUEST_COUNT; i++){
            if (GetSetQuestFlag(i,FLAG_GET_COMPLETED)) {
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

    switch(mode){
        case SORT_DEFAULT:
            ConvertIntToDecimalStringN(gStringVar1, QuestMenu_CountUnlockedQuests(), STR_CONV_MODE_LEFT_ALIGN, 6);
            StringCopy(gStringVar3,sText_QuestMenu_AllHeader);
            break;
        case SORT_INACTIVE:
            ConvertIntToDecimalStringN(gStringVar1, QuestMenu_CountInactiveQuests(), STR_CONV_MODE_LEFT_ALIGN, 6);
            StringCopy(gStringVar3,sText_QuestMenu_InactiveHeader);
            break;
        case SORT_ACTIVE:
            ConvertIntToDecimalStringN(gStringVar1, QuestMenu_CountActiveQuests(), STR_CONV_MODE_LEFT_ALIGN, 6);
            StringCopy(gStringVar3,sText_QuestMenu_ActiveHeader);
            break;
        case SORT_REWARD:
            ConvertIntToDecimalStringN(gStringVar1, QuestMenu_CountRewardQuests(), STR_CONV_MODE_LEFT_ALIGN, 6);
            StringCopy(gStringVar3,sText_QuestMenu_RewardHeader);
            break;
        case SORT_DONE:
            ConvertIntToDecimalStringN(gStringVar1, QuestMenu_CountCompletedQuests(), STR_CONV_MODE_LEFT_ALIGN, 6);
            StringCopy(gStringVar3,sText_QuestMenu_CompletedHeader);
            break;
        default:
            ConvertIntToDecimalStringN(gStringVar2,sSideQuests[parentQuest].numSubquests,STR_CONV_MODE_LEFT_ALIGN, 6);
            ConvertIntToDecimalStringN(gStringVar1,QuestMenu_CountCompletedQuests(), STR_CONV_MODE_LEFT_ALIGN, 6);
            StringCopy(gStringVar3,sSideQuests[parentQuest].name);
            break;
    }
    QuestMenu_AddTextPrinterParameterized(2, 0, gStringVar3, 21, 1, 0, 1, 0, 0);

    StringExpandPlaceholders(gStringVar4,sText_QuestMenu_QuestNumberDisplay);

    if (mode < SORT_SUBQUEST){
        QuestMenu_AddTextPrinterParameterized(2, 0, gStringVar4, 167, 1, 0, 1, 0, 0);
        QuestMenu_AddTextPrinterParameterized(2,0,sText_QuestMenu_Type,198,1,0,1,0,0);
    }else {
        QuestMenu_AddTextPrinterParameterized(2, 0, gStringVar4, 202, 1, 0, 1, 0, 0);
    }

}

static void QuestMenu_PlaceTopMenuScrollIndicatorArrows(void)
{
    sStateDataPtr->scrollIndicatorArrowPairId = AddScrollIndicatorArrowPairParameterized(2, 94, 8, 90, sStateDataPtr->nItems - sStateDataPtr->maxShowed + 1, 110, 110, &sListMenuState.scroll);
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
    if (sListMenuState.scroll != 0 && sListMenuState.scroll + sStateDataPtr->maxShowed > sStateDataPtr->nItems + 1)
        sListMenuState.scroll = (sStateDataPtr->nItems + 1) - sStateDataPtr->maxShowed;
    if (sListMenuState.scroll + sListMenuState.row >= sStateDataPtr->nItems + 1)
    {
        if (sStateDataPtr->nItems + 1 < 2)
            sListMenuState.row = 0;
        else
            sListMenuState.row = sStateDataPtr->nItems;
    }
}

#define try_free(ptr) ({        \
        void ** ptr__ = (void **)&(ptr);   \
        if (*ptr__ != NULL)                \
        Free(*ptr__);                  \
        })

static void QuestMenu_FreeResources(void)
{
    try_free(sStateDataPtr);
    try_free(sBg1TilemapBuffer);
    try_free(sListMenuItems);
    //try_free(sUnusedStringAllocation);
    FreeAllWindowBuffers();
}

// pc_screen_effect
static void Task_PCScreenEffect_TurnOff(u8 taskId)
{
    struct Task *task = &gTasks[taskId];

    switch (task->tState)
    {
        case 0:
            gPlttBufferFaded[0] = 0;
            break;
        case 1:
            task->tWin0Left = 0;
            task->tWin0Right = DISPLAY_WIDTH;
            task->tWin0Top = 0;
            task->tWin0Bottom = DISPLAY_HEIGHT;
            SetGpuRegBits(REG_OFFSET_DISPCNT, DISPCNT_WIN0_ON);
            SetGpuReg(REG_OFFSET_WIN0H, WIN_RANGE(task->tWin0Left, task->tWin0Right));
            SetGpuReg(REG_OFFSET_WIN0V, WIN_RANGE(task->tWin0Top, task->tWin0Bottom));
            SetGpuReg(REG_OFFSET_WININ, WININ_WIN0_BG_ALL | WININ_WIN0_OBJ | WININ_WIN0_CLR);
            SetGpuReg(REG_OFFSET_WINOUT, 0);
            break;
        case 2:
            task->tWin0Top += task->tYSpeed;
            task->tWin0Bottom -= task->tYSpeed;
            if (task->tWin0Top >= 80 || task->tWin0Bottom <= 81)
            {
                task->tWin0Top = 80;
                task->tWin0Bottom = 81;
                SetGpuReg(REG_OFFSET_BLDCNT, BLDCNT_TGT1_BG0 | BLDCNT_TGT1_BG1 | BLDCNT_TGT1_BG2 | BLDCNT_TGT1_BG3 | BLDCNT_TGT1_OBJ | BLDCNT_TGT1_BD | BLDCNT_EFFECT_LIGHTEN);
                SetGpuReg(REG_OFFSET_BLDY, 16);
            }
            SetGpuReg(REG_OFFSET_WIN0V, WIN_RANGE(task->tWin0Top, task->tWin0Bottom));
            if (task->tWin0Top != 80)
                return;
            break;
        case 3:
            task->tWin0Left += task->tXSpeed;
            task->tWin0Right -= task->tXSpeed;
            if (task->tWin0Left >= 120 || task->tWin0Right <= 120)
            {
                task->tWin0Left = 120;
                task->tWin0Right = 120;
                BlendPalettes(0xFFFFFFFF, 0x10, RGB_BLACK);
                gPlttBufferFaded[0] = 0;
            }
            SetGpuReg(REG_OFFSET_WIN0H, WIN_RANGE(task->tWin0Left, task->tWin0Right));
            if (task->tWin0Left != 120)
                return;
            break;
        default:
            ClearGpuRegBits(REG_OFFSET_DISPCNT, DISPCNT_WIN0_ON);
            SetGpuReg(REG_OFFSET_BLDY, 0);
            SetGpuReg(REG_OFFSET_BLDCNT, 0);
            DestroyTask(taskId);
            return;
    }
    ++task->tState;
}

// pc_screen_effect
static void BeginPCScreenEffect_TurnOff(u16 a0, u16 a1, u16 a2)
{
    BeginPCScreenEffect(Task_PCScreenEffect_TurnOff, a0, a1, a2);
}

static void Task_QuestMenuTurnOff1(u8 taskId)
{
    if (sListMenuState.initialized == 1)
    {
        BeginNormalPaletteFade(0xFFFFFFFF, 0, 0, 16, RGB_BLACK);
    }
    else
    {
        BeginPCScreenEffect_TurnOff(0, 0, 0);
        PlaySE(SE_PC_OFF);
    }

    gTasks[taskId].func = Task_QuestMenuTurnOff2;
}

// pc_screen_effect
static bool8 IsPCScreenEffectRunning_TurnOff(void)
{
    return FuncIsActiveTask(Task_PCScreenEffect_TurnOff);
}

static void Task_QuestMenuTurnOff2(u8 taskId)
{
    s16 * data = gTasks[taskId].data;

    if (!gPaletteFade.active && !IsPCScreenEffectRunning_TurnOff())
    {
        DestroyListMenuTask(data[0], &sListMenuState.scroll, &sListMenuState.row);
        if (sStateDataPtr->savedCallback != NULL)
            SetMainCallback2(sStateDataPtr->savedCallback);
        else
            SetMainCallback2(sListMenuState.savedCallback);

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
    sStateDataPtr->nItems = SIDE_QUEST_COUNT;
    sStateDataPtr->maxShowed = sStateDataPtr->nItems + 1 <= 4 ? sStateDataPtr->nItems + 1 : 4;
    //DebugQuestMenu();
}

static void QuestMenu_SetScrollPosition(void)
{
    u8 i;

    if (sListMenuState.row > 3)
    {
        for (i = 0; i <= sListMenuState.row - 3; sListMenuState.row--, sListMenuState.scroll++, i++)
        {
            if (sListMenuState.scroll + sStateDataPtr->maxShowed == sStateDataPtr->nItems + 1)
                break;
        }
    }
}

static void QuestMenu_SetMessageWindowPalette(int a0)
{
    SetBgTilemapPalette(1, 0, 14, 30, 6, a0 + 1);
    //SetBgTilemapPalette(1, 0, 14, 30, 6, 15);
    ScheduleBgCopyTilemapToVram(1);
}

static void QuestMenu_SetInitializedFlag(u8 a0)
{
    sListMenuState.initialized = a0;
}

static bool8 IsPCScreenEffectRunning_TurnOn(void)
{
    return FuncIsActiveTask(Task_PCScreenEffect_TurnOn);
}

static s8 QuestMenu_SetMode(bool8 subquest)
{
    u8 mode = sStateDataPtr->filterMode;

    if (subquest){
        mode += SORT_SUBQUEST;
    }
    else {
        if (mode == SORT_DONE){
            mode = SORT_DEFAULT;
        } else if (mode > (SORT_SUBQUEST - 1)){
            mode -= SORT_SUBQUEST;
        } else {
            mode++;
        }
    }
    sStateDataPtr->filterMode = mode;
}

static void QuestMenu_SaveScrollAndRow(s16 * data){
    ListMenuGetScrollAndRow(data[0],&sListMenuState.storedScrollOffset,&sListMenuState.storedRowPosition);
}

static void QuestMenu_ResetSavedRowScrollToTop(s16 * data){
    //When this function gets run, place cursor back in the first position, used for resetting the list when filtering.
    sListMenuState.row = 0;
    sListMenuState.scroll = 0;
    data[0] = ListMenuInit(&gMultiuseListMenuTemplate, sListMenuState.scroll, sListMenuState.row);
}

static void QuestMenu_RestoreSavedScrollAndRow(s16  * data){
    data[0] = ListMenuInit(&gMultiuseListMenuTemplate, sListMenuState.storedScrollOffset, sListMenuState.storedRowPosition);
}

static void Task_QuestMenuMain(u8 taskId)
{
    s16 * data = gTasks[taskId].data;
    u16 scroll;
    u16 row;
    s32 input;
    bool8 subquest;
    u8 mode = sStateDataPtr->filterMode;
    u8 selectedQuestId;

    if (!gPaletteFade.active && !IsPCScreenEffectRunning_TurnOn())
    {
        input = ListMenu_ProcessInput(data[0]);

        ListMenuGetScrollAndRow(data[0], &sListMenuState.scroll, &sListMenuState.row);

        switch (input)
        {
            case LIST_NOTHING_CHOSEN:
                if (JOY_NEW(R_BUTTON)){
                    if (!QuestMenu_CheckSubquestMode()){
                        PlaySE(SE_SELECT);
                        QuestMenu_RemoveScrollIndicatorArrowPair();
                        subquest = FALSE;
                        QuestMenu_SetMode(subquest);
                        Task_QuestMenuCleanUp(taskId);
                        QuestMenu_ResetSavedRowScrollToTop(data);
                    }
                }
                if (JOY_NEW(SELECT_BUTTON)){
                    if(mode < SORT_SUBQUEST){
                        //PSF TODO make sure this is the correct sound effect for sorting
                        PlaySE(SE_SELECT);
                        QuestMenu_RemoveScrollIndicatorArrowPair();
                        selectedQuestId = sListMenuItems[sListMenuState.row + sListMenuState.scroll].id;
                        QuestMenu_ManageFavoriteQuests(selectedQuestId);
                        Task_QuestMenuCleanUp(taskId);
                        QuestMenu_ResetSavedRowScrollToTop(data);
                    }
                }
                break;

                //PSF TODO figure out if we added LIST_SORT or not

            case LIST_CANCEL:
                if (mode > SORT_DONE){
                    QuestMenu_RemoveScrollIndicatorArrowPair();
                    subquest = FALSE;
                    QuestMenu_SetMode(subquest);
                    Task_QuestMenuCleanUp(taskId);
                    QuestMenu_RestoreSavedScrollAndRow(data);
                } else {
                    PlaySE(SE_SELECT);
                    QuestMenu_SetInitializedFlag(0);
                    gTasks[taskId].func = Task_QuestMenuTurnOff1;
                }
                break;

            default:
                if (!QuestMenu_CheckSubquestMode()){
                    if(QuestMenu_CheckHasChildren(input)){
                        PlaySE(SE_SELECT);
                        QuestMenu_RemoveScrollIndicatorArrowPair();
                        sStateDataPtr->parentQuest = input;
                        subquest = TRUE;
                        QuestMenu_SetMode(subquest);
                        QuestMenu_SaveScrollAndRow(data);
                        Task_QuestMenuCleanUp(taskId);
                        QuestMenu_ResetSavedRowScrollToTop(data);
                    }
                }
                break;
        }
    }
}

static void QuestMenu_ReturnFromSubmenu(u8 taskId)
{
    QuestMenu_SetMessageWindowPalette(0);
    QuestMenu_PlaceTopMenuScrollIndicatorArrows();
    gTasks[taskId].func = Task_QuestMenuMain;
}

// p item_menu_icon
static void sub_8098660(u8 flag)
{
    u8 i;
    u8 * ptr = &gUnknown_2039878[1];

    for (i = 0; i < 9; i++)
    {
        gSprites[ptr[i]].invisible = flag;
    }
}

// pokefirered item_menu_icon
static void sub_80986A8(s16 x, u16 y)
{
    u8 i;
    u8 * ptr = &gUnknown_2039878[1];

    for (i = 0; i < 9; i++)
    {
        gSprites[ptr[i]].x2 = x;
        gSprites[ptr[i]].y = y + 7;
    }
}

static void Task_QuestMenuRefreshAfterAcknowledgement(u8 taskId)
{
    if (JOY_NEW(A_BUTTON) || JOY_NEW(B_BUTTON))
    {
        PlaySE(SE_SELECT);
        Task_QuestMenuCleanUp(taskId);
    }
}

static void Task_QuestMenuCleanUp(u8 taskId)
{
    s16 * data = gTasks[taskId].data;

    ChangeSubQuestFlags(SIDE_QUEST_1,FLAG_SET_COMPLETED,2);
    ChangeSubQuestFlags(SIDE_QUEST_1,FLAG_SET_COMPLETED,3);
    ChangeSubQuestFlags(SIDE_QUEST_2,FLAG_SET_COMPLETED,9);

    DestroyListMenuTask(data[0], &sListMenuState.scroll, &sListMenuState.row);
    QuestMenu_PlaceTopMenuScrollIndicatorArrows();
    ClearStdWindowAndFrameToTransparent(2, FALSE);

    QuestMenu_PrintHeader();
    QuestMenu_AllocateResourcesForListMenu();
    QuestMenu_BuildFilteredMenuTemplate();

    gTasks[taskId].func = Task_QuestMenuMain;
}

static void Task_QuestMenuCancel(u8 taskId)
{
    s16 * data = gTasks[taskId].data;

    ClearStdWindowAndFrameToTransparent(4, FALSE);
    ClearWindowTilemap(4);
    PutWindowTilemap(0);
    PutWindowTilemap(1);
    QuestMenu_PrintOrRemoveCursor(data[0], 1);
    ScheduleBgCopyTilemapToVram(0);
    QuestMenu_ReturnFromSubmenu(taskId);
}

// pokefirered text_window.c
void TextWindow_SetStdFrame0_WithPal(u8 windowId, u16 destOffset, u8 palIdx)
{
    //LoadBgTiles(GetWindowAttribute(windowId, WINDOW_BG), sFR_StdFrame0, 0x120, destOffset);
    //LoadPalette(GetTextWindowPalette(3), palIdx, 32);
}
void TextWindow_LoadResourcesStdFrame0(u8 windowId, u16 destOffset, u8 palIdx)
{
    //LoadBgTiles(GetWindowAttribute(windowId, WINDOW_BG), sFR_MessageBoxTiles, 0x280, destOffset);
    //LoadPalette(GetTextWindowPalette(0), palIdx, 32);
}

static void QuestMenu_InitWindows(void)
{
    u8 i;

    InitWindows(sQuestMenuHeaderWindowTemplates);
    DeactivateAllTextPrinters();
    LoadUserWindowBorderGfx(0, 0x3C0, 0xE0);

    TextWindow_SetStdFrame0_WithPal(0, 0x3A3, 0xC0); 
    TextWindow_LoadResourcesStdFrame0(0, 0x3AC, 0xB0);
    //LoadMessageBoxGfx(0, 0x3A3, 0xC0);
    //LoadMessageBoxGfx(0, 0x3AC, 0xB0);

    LoadPalette(GetTextWindowPalette(2), 0xD0, 0x20);
    //LoadPalette(sMainWindowPal, 0xF0, 0x20);
    for (i = 0; i < 3; i++)
    {
        FillWindowPixelBuffer(i, 0x00);
        PutWindowTilemap(i);
    }

    ScheduleBgCopyTilemapToVram(0);
}

static void QuestMenu_AddTextPrinterParameterized(u8 windowId, u8 fontId, const u8 * str, u8 x, u8 y, u8 letterSpacing, u8 lineSpacing, u8 speed, u8 colorIdx)
{
    AddTextPrinterParameterized4(windowId, fontId, x, y, letterSpacing, lineSpacing, sQuestMenuWindowFontColors[colorIdx], speed, str);
}

static void QuestMenu_SetBorderStyleOnWindow(u8 windowId)
{
    DrawStdFrameWithCustomTileAndPalette(windowId, FALSE, 0x3C0, 14);
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

//PSF TODO add scrcmd for alerting subquests
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
            //return gSaveBlock2Ptr->subQuests[index][childIndex] & childMask;
            return gSaveBlock2Ptr->subQuests[quest][childIndex] & childMask;
        case FLAG_SET_COMPLETED:
            //gSaveBlock2Ptr->subQuests[index][childIndex] |= childMask;
            gSaveBlock2Ptr->subQuests[quest][childIndex] |= childMask;
            return 1;
    }

    return -1;
}

s8 QuestMenu_ManageFavoriteQuests(u8 selectedQuestId)
{
    if (GetSetQuestFlag(selectedQuestId,FLAG_GET_FAVORITE))
        GetSetQuestFlag(selectedQuestId, FLAG_REMOVE_FAVORITE);
    else
        GetSetQuestFlag(selectedQuestId,FLAG_SET_FAVORITE);
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
            return gSaveBlock2Ptr->inactiveQuests[index] & mask;
        case FLAG_SET_INACTIVE:
            gSaveBlock2Ptr->inactiveQuests[index] |= mask;
            return 1;
        case FLAG_REMOVE_INACTIVE:
            gSaveBlock2Ptr->inactiveQuests[index] &= ~mask;
            return 1;
            /*
             * UNBOUND QUEST MENU ADDITION
             * cases added for get/set active
             * cases added for get/set reward
             */
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

static bool8 IsActiveQuest(u8 questId){
    /*
     * UNBOUND QUEST MENU ADDITION
     */
    u8 index;
    u8 bit;
    u8 mask;

    index = questId / 8; //8 bits per byte
    bit = questId % 8;
    mask = 1 << bit;

    if (GetSetQuestFlag(questId,FLAG_GET_ACTIVE) == mask){
        return TRUE;
    }
    return FALSE;
}

/*
   static void DebugQuestMenu(void)
   {
   GetSetQuestFlag(SIDE_QUEST_1, FLAG_SET_UNLOCKED);
   GetSetQuestFlag(SIDE_QUEST_2, FLAG_SET_UNLOCKED);
   GetSetQuestFlag(SIDE_QUEST_3, FLAG_SET_UNLOCKED);
   GetSetQuestFlag(SIDE_QUEST_5, FLAG_SET_UNLOCKED);
   GetSetQuestFlag(SIDE_QUEST_5, FLAG_SET_COMPLETED);    
   SetActiveQuest(SIDE_QUEST_2);
   }
   */

void SetQuestMenuActive(void)
{
    FlagSet(FLAG_QUEST_MENU_ACTIVE);
}

void CopyQuestName(u8 *dst, u8 questId)
{
    StringCopy(dst, sSideQuests[questId].name);
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



