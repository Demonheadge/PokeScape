#include "global.h"
#include "main.h"
#include "bg.h"
#include "malloc.h"
#include "gpu_regs.h"
#include "sprite.h"
#include "string_util.h"
#include "text.h"
#include "window.h"
#include "data.h"
#include "decompress.h"
#include "event_object_movement.h"
#include "field_player_avatar.h"
#include "field_weather.h"
#include "graphics.h"
#include "list_menu.h"
#include "menu.h"
#include "menu_helpers.h"
#include "outfit_menu.h"
#include "overworld.h"
#include "palette.h"
#include "palette_util.h"
#include "scanline_effect.h"
#include "sound.h"
#include "task.h"
#include "text_window.h"
#include "trainer_pokemon_sprites.h"
#include "grid_menu.h"
#include "constants/rgb.h"
#include "constants/songs.h"
#include "constants/trainers.h"

#define CURSOR_START_X (104 + 16)
#define CURSOR_START_Y (24 + 16)

enum BGs {
    BG_0 = 0,
    BG_1,
    BG_2,
    BG_MAX = 2,
    BG_COUNT,
};

enum States {
    STATE_BEGIN = 0,
    STATE_RESET,
    STATE_LOADBG,
    STATE_LOADGFX,
    STATE_LOADWIN,
    STATE_LOADSTR,
    STATE_LOADGRID,
    STATE_LOADSPRITE,
    STATE_WAITFADE,
    STATE_TRANSITION,
    STATE_FADE,
    STATE_COUNT,
};

enum Windows {
    WIN_NAME = 0,
    WIN_DESC,
    WIN_MSGBOX,
    WIN_OUTFIT_MAX = 2,
    WIN_COUNT,
};

enum Sprites {
    GFX_OW = 0,
    GFX_TS,
    GFX_INDICATOR,
    GFX_TS_SHADOW,
    GFX_CURSOR,
    GFX_COUNT,
};

enum SpriteTags {
    TAG_SCROLL_ARROWS = 0x9000,
    GFXTAG_SHADOW = 0x9001,
    GFXTAG_INDICATOR = 0x9002,
    PALTAG_SHADOW_INDICATOR = 0x9900,
    PALTAG_CURSOR = 0x9920,
};

enum ColorId {
    COLORID_NORMAL = 0,
    COLORID_MSGBOX,
};

static const u8 sFontColors[][3] = { // bgColor, textColor, shadowColor
    [COLORID_NORMAL] = {TEXT_COLOR_TRANSPARENT, TEXT_COLOR_DARK_GRAY,  TEXT_COLOR_LIGHT_GRAY},
    [COLORID_MSGBOX] = {TEXT_COLOR_WHITE,       TEXT_COLOR_DARK_GRAY,  TEXT_COLOR_LIGHT_GRAY},
};

typedef struct {
    MainCallback retCB;
    u8 idx;
    u8 gfxState;
    u8 tilemapBuffers[2][BG_SCREEN_SIZE];
    u8 spriteIds[GFX_COUNT];
    struct GridMenu *grid;
    u8 *list;
    u8 listCount;
    u8 shadowSpriteIds[9];
} OutfitMenuResources;

static void CB2_SetupOutfitMenu(void);
static void CB2_OutfitMenu(void);
static void VBlankCB_OutfitMenu(void);
static void SetupOutfitMenu_BGs(void);
static bool32 SetupOutfitMenu_Graphics(void);
static void SetupOutfitMenu_Windows(void);
static void SetupOutfitMenu_PrintStr(void);
static void SetupOutfitMenu_Sprites(void);
static void SetupOutfitMenu_Grids(void);
static void Task_WaitFadeInOutfitMenu(u8 taskId);
static void Task_OutfitMenuHandleInput(u8 taskId);
static void Task_CloseOutfitMenu(u8 taskId);
static u32 BuildOutfitLists(void);
static inline void UpdateOutfitInfo(void);
static void UpdateCursorPosition(void);

static const u8 sText_OutfitLocked[] = _("???");
static const u8 sText_OutfitLockedMsg[] =
_(
    "You don't have this OUTFIT yet.\n"
    "Unlock it to be able to use it."
);

static const u8 sText_OutfitError[] =
_(
    "You can't change your outfit {STR_VAR_1}"
);

static const u8 sText_OutfitError_Cycling[] =
_(
    "while\ncycling! You might get tripped over!"
);

static const u8 sText_OutfitError_Surfing[] =
_(
    "while\nsurfing! You might get wet!"
);

static const u8 sText_OutfitError_Diving[] =
_(
    "while\ndiving! Have common sense!" //! :masuda:
);

static const u8 sText_OutfitError_Default[] = _(
    "now!"
);

static const u16 sTiles[] = INCBIN_U16("graphics/outfit_menu/main.4bpp");
static const u16 sPalette[] = INCBIN_U16("graphics/outfit_menu/main.gbapal");
static const u32 sTilemap[] = INCBIN_U32("graphics/outfit_menu/main.bin.lz");
static const u16 sScrollingBG_Tiles[] = INCBIN_U16("graphics/outfit_menu/scroll.4bpp");
static const u16 sScrollingBG_Palette[] = INCBIN_U16("graphics/outfit_menu/scroll.gbapal");
static const u32 sScrollingBG_Tilemap[] = INCBIN_U32("graphics/outfit_menu/scroll.bin.lz");

static const u16 sLockSprite_Gfx[] = INCBIN_U16("graphics/outfit_menu/lock.4bpp");
static const u16 sLockIndicatorSprite_Pal[] = INCBIN_U16("graphics/outfit_menu/lock.gbapal");
static const u16 sIndicatorSprite_Gfx[] = INCBIN_U16("graphics/outfit_menu/indicator.4bpp");
static const u16 sIndicatorSprite_Pal[] = INCBIN_U16("graphics/outfit_menu/indicator.gbapal");
static const u16 sCursorSprite_Gfx[] = INCBIN_U16("graphics/outfit_menu/cursor.4bpp");
static const u32 sCursorSprite_Pal[] = INCBIN_U32("graphics/outfit_menu/cursor.gbapal.lz");

static EWRAM_DATA OutfitMenuResources *sOutfitMenu = NULL;

static const struct BgTemplate sBGTemplates[] =
{
    [BG_0] =
    { //! UI
        .baseTile = 0,
        .bg = 0,
        .charBaseIndex = 1,
        .mapBaseIndex = 29,
        .paletteMode = 0,
        .priority = 1,
        .screenSize = 0,
    },
    [BG_1] =
    { //! BG
        .baseTile = 0,
        .bg = 1,
        .charBaseIndex = 0,
        .mapBaseIndex = 30,
        .paletteMode = 0,
        .priority = 2,
        .screenSize = 0,
    },
    [BG_2] =
    { //! SCROLLING BG
        .baseTile = 0,
        .bg = 2,
        .charBaseIndex = 0,
        .mapBaseIndex = 31,
        .paletteMode = 0,
        .priority = 3,
        .screenSize = 0,
    },
};

static const struct WindowTemplate sWindowTemplates[] =
{
    [WIN_NAME] =
    {
        .bg = 0,
        .tilemapLeft = 0,
        .tilemapTop = 11,
        .width = 12,
        .height = 2,
        .paletteNum = 15,
        .baseBlock = 1,
    },
    [WIN_DESC] =
    {
        .bg = 0,
        .tilemapLeft = 0,
        .tilemapTop = 13,
        .width = 12,
        .height = 6,
        .paletteNum = 15,
        .baseBlock = 25,
    },
    [WIN_MSGBOX] =
    {
        .bg = 0,
        .tilemapLeft = 2,
        .tilemapTop = 15,
        .width = 27,
        .height = 4,
        .paletteNum = 15,
        .baseBlock = 0x90,
    },
    DUMMY_WIN_TEMPLATE,
};

static const struct SpriteSheet sLockSpriteSheet = {
    .data = sLockSprite_Gfx,
    .size = 0x200,
    .tag = GFXTAG_SHADOW,
};

static const struct SpritePalette sLockIndicatorSpritePalette = {
    .data = sLockIndicatorSprite_Pal,
    .tag = PALTAG_SHADOW_INDICATOR,
};

static const struct SpriteSheet sIndicatorSpriteSheet = {
    .data = sIndicatorSprite_Gfx,
    .size = 0x100,
    .tag = GFXTAG_INDICATOR,
};

static const struct OamData sLockSpriteOamData = {
    .affineMode = ST_OAM_AFFINE_OFF,
    .objMode = ST_OAM_OBJ_BLEND,
    .mosaic = FALSE,
    .bpp = ST_OAM_4BPP,
    .priority = 2,
    .shape = SPRITE_SHAPE(32x32),
    .size = SPRITE_SIZE(32x32),
};

static const struct OamData sIndicatorSpriteOamData = {
    .affineMode = ST_OAM_AFFINE_OFF,
    .objMode = ST_OAM_OBJ_NORMAL,
    .mosaic = FALSE,
    .bpp = ST_OAM_4BPP,
    .shape = SPRITE_SHAPE(16x16),
    .size = SPRITE_SIZE(16x16),
};

static const struct SpriteTemplate sLockSpriteTemplate = {
    .tileTag = GFXTAG_SHADOW,
    .paletteTag = PALTAG_SHADOW_INDICATOR,
    .callback = SpriteCallbackDummy,
    .anims = gDummySpriteAnimTable,
    .affineAnims = gDummySpriteAffineAnimTable,
    .images = NULL,
    .oam = &sLockSpriteOamData,
};

static const struct SpriteTemplate sIndicatorSpriteTemplate = {
    .tileTag = GFXTAG_INDICATOR,
    .paletteTag = PALTAG_SHADOW_INDICATOR,
    .callback = SpriteCallbackDummy,
    .anims = gDummySpriteAnimTable,
    .affineAnims = gDummySpriteAffineAnimTable,
    .images = NULL,
    .oam = &sIndicatorSpriteOamData,
};

static const struct CompressedSpritePalette sCursor_SpritePalette = {
    .data = sCursorSprite_Pal,
    .tag = PALTAG_CURSOR,
};

static const union AnimCmd sCursorAnim[] =
{
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_JUMP(0)
};

static const union AnimCmd *const sCursorAnims[] = { sCursorAnim };

static const struct SpriteFrameImage sCursorPicTable[] =
{
    overworld_frame(sCursorSprite_Gfx, 8, 8, 0),
    overworld_frame(sCursorSprite_Gfx, 8, 8, 1),
};

static const struct OamData sCursor_SpriteOamData = {
    .affineMode = ST_OAM_AFFINE_OFF,
    .objMode = ST_OAM_OBJ_NORMAL,
    .mosaic = FALSE,
    .bpp = ST_OAM_4BPP,
    .shape = SPRITE_SHAPE(64x64),
    .size = SPRITE_SIZE(64x64),
    .priority = 1,
};

static const struct SpriteTemplate sCursor_SpriteTemplate = {
    .tileTag = TAG_NONE,
    .paletteTag = PALTAG_CURSOR,
    .callback = SpriteCallbackDummy,
    .anims = sCursorAnims,
    .affineAnims = gDummySpriteAffineAnimTable,
    .images = sCursorPicTable,
    .oam = &sCursor_SpriteOamData,
};

/*
_________________
|_______________|
|       | # # # |
|       | # # # |
|       | # # # |
_________________
*/
static const u8 sGridPosX[] = { (104 + 16), (152 + 16), (200 + 16) };
static const u8 sGridPosY[] = { (24 + 16),   (72 + 16), (120 + 16) };

void Task_OpenOutfitMenu(u8 taskId)
{
    if (!gPaletteFade.active)
    {
        PlayRainStoppingSoundEffect();
        CleanupOverworldWindowsAndTilemaps();
        OpenOutfitMenu(CB2_ReturnToField);
        DestroyTask(taskId);
    }
}

void OpenOutfitMenu(MainCallback retCB)
{
    sOutfitMenu = AllocZeroed(sizeof(*sOutfitMenu));
    if (sOutfitMenu == NULL)
    {
        //! Alloc failed, exit
        SetMainCallback2(retCB);
    }
    // measures for existing saves
    if (gSaveBlock2Ptr->currOutfitId == OUTFIT_NONE)
    {
        UnlockOutfit(DEFAULT_OUTFIT);
        gSaveBlock2Ptr->currOutfitId = DEFAULT_OUTFIT;
    }
    sOutfitMenu->retCB = retCB;
    SetMainCallback2(CB2_SetupOutfitMenu);
}

static void CB2_SetupOutfitMenu(void)
{
    switch(gMain.state)
    {
    case STATE_BEGIN:
        CpuFill16(0, (void *) VRAM, VRAM_SIZE);
        SetVBlankHBlankCallbacksToNull();
        ClearScheduledBgCopiesToVram();
    case STATE_RESET:
        ScanlineEffect_Stop();
        FreeAllSpritePalettes();
        ResetPaletteFade();
        ResetSpriteData();
        ResetTasks();
        gMain.state++;
        break;
    case STATE_LOADBG:
        SetupOutfitMenu_BGs();
        sOutfitMenu->gfxState = 0;
        gMain.state++;
        break;
    case STATE_LOADGFX:
        if (SetupOutfitMenu_Graphics())
            gMain.state++;
        break;
    case STATE_LOADWIN:
        SetupOutfitMenu_Windows();
        gMain.state++;
        break;
    case STATE_LOADSTR:
        SetupOutfitMenu_PrintStr();
        gMain.state++;
        break;
    case STATE_LOADGRID:
        sOutfitMenu->listCount = BuildOutfitLists();
        SetupOutfitMenu_Grids();
        sOutfitMenu->idx = sOutfitMenu->list[GridMenu_SelectedIndex(sOutfitMenu->grid)];
        gMain.state++;
        break;
    case STATE_LOADSPRITE:
        SetupOutfitMenu_Sprites();
        gMain.state++;
        break;
    case STATE_WAITFADE:
        CreateTask(Task_WaitFadeInOutfitMenu, 0);
        gMain.state++;
        break;
    case STATE_TRANSITION:
        BlendPalettes(PALETTES_ALL, 16, 0);
        gMain.state++;
        break;
    case STATE_FADE:
        BeginNormalPaletteFade(PALETTES_ALL, 0, 16, 0, RGB_BLACK);
        gMain.state++;
        break;
    default:
        SetVBlankCallback(VBlankCB_OutfitMenu);
        SetMainCallback2(CB2_OutfitMenu);
        break;
    }
}

static void CB2_OutfitMenu(void)
{
    RunTasks();
    AnimateSprites();
    BuildOamBuffer();
    DoScheduledBgTilemapCopiesToVram();
    UpdatePaletteFade();
}

static void VBlankCB_OutfitMenu(void)
{
    LoadOam();
    ProcessSpriteCopyRequests();
    TransferPlttBuffer();
    ChangeBgX(BG_2, 96, BG_COORD_SUB);
    ChangeBgY(BG_2, 96, BG_COORD_SUB);
}

static void SetupOutfitMenu_BGs(void)
{
    SetGpuReg(REG_OFFSET_DISPCNT, 0);
    ResetBgsAndClearDma3BusyFlags(0);
    ResetAllBgsCoordinates();
    InitBgsFromTemplates(0, sBGTemplates, ARRAY_COUNT(sBGTemplates));
    SetBgTilemapBuffer(BG_1, sOutfitMenu->tilemapBuffers[0]);
    SetBgTilemapBuffer(BG_2, sOutfitMenu->tilemapBuffers[1]);
    ScheduleBgCopyTilemapToVram(BG_1);
    ScheduleBgCopyTilemapToVram(BG_2);
    SetGpuReg(REG_OFFSET_DISPCNT, DISPCNT_OBJ_ON | DISPCNT_OBJ_1D_MAP);
    ShowBg(BG_0);
    ShowBg(BG_1);
    ShowBg(BG_2);
    SetGpuReg(REG_OFFSET_BLDCNT, BLDCNT_TGT2_ALL);
    SetGpuReg(REG_OFFSET_BLDALPHA, BLDALPHA_BLEND(7, 11));
    SetGpuReg(REG_OFFSET_BLDY, 0);
}

static bool32 SetupOutfitMenu_Graphics(void)
{
    switch(sOutfitMenu->gfxState)
    {
    case 0:
        ResetTempTileDataBuffers();
        LoadBgTiles(BG_1, &sTiles, 2560, 0x0);
        LoadBgTiles(BG_1, &sScrollingBG_Tiles, 320, 0x51);
        LoadMessageBoxGfx(BG_0, 0x100, BG_PLTT_ID(13));
        LoadUserWindowBorderGfx(BG_0, 0x10D, BG_PLTT_ID(14));
        sOutfitMenu->gfxState++;
        break;
    case 1:
        if (FreeTempTileDataBuffersIfPossible() != TRUE)
        {
            LZDecompressWram(sTilemap, sOutfitMenu->tilemapBuffers[0]);
            LZDecompressWram(sScrollingBG_Tilemap, sOutfitMenu->tilemapBuffers[1]);
            sOutfitMenu->gfxState++;
        }
        break;
    case 2:
        LoadPalette(&sPalette, BG_PLTT_ID(0), PLTT_SIZE_4BPP);
        LoadPalette(GetTextWindowPalette(2), BG_PLTT_ID(15), PLTT_SIZE_4BPP);
        sOutfitMenu->gfxState++;
        break;
    default:
        return TRUE;
    }
    return FALSE;
}

static inline void FillWindow(u8 winId, u8 fillVal)
{
    FillWindowPixelBuffer(winId, fillVal);
    PutWindowTilemap(winId);
}

static inline void PrintTexts(u8 winId, u8 font, u8 x, u8 y, u8 letterSpacing, u8 lineSpacing, u8 color, const u8 *str)
{
    AddTextPrinterParameterized4(winId, font, x, y, letterSpacing, lineSpacing, sFontColors[color], TEXT_SKIP_DRAW, str);
    CopyWindowToVram(winId, COPYWIN_GFX);
}

static void SetupOutfitMenu_Windows(void)
{
    u32 i;
    InitWindows(sWindowTemplates);
    DeactivateAllTextPrinters();
    for (i = 0; i < WIN_OUTFIT_MAX; i++)
        FillWindow(i, PIXEL_FILL(0));

    ScheduleBgCopyTilemapToVram(BG_0);
}

static void SetupOutfitMenu_PrintStr(void)
{
    PrintTexts(WIN_NAME, FONT_NORMAL, 4, 0, 0, 0, COLORID_NORMAL, gOutfits[gSaveBlock2Ptr->currOutfitId].name);
    PrintTexts(WIN_DESC, FONT_NORMAL, 4, 0, 0, 0, COLORID_NORMAL, gOutfits[gSaveBlock2Ptr->currOutfitId].desc);
}

static const u16 sTSShadowPal[] = INCBIN_U16("graphics/outfit_menu/shadow.gbapal");
static inline void SetupOutfitMenu_Sprites_DrawTrainerSprite(bool32 update, bool32 unlocked)
{
    u16 id = GetPlayerTrainerPicIdByOutfitGenderType(sOutfitMenu->idx, gSaveBlock2Ptr->playerGender, 0);
    if (update)
    {
        FreeAndDestroyTrainerPicSprite(sOutfitMenu->spriteIds[GFX_TS]);
        FreeAndDestroyTrainerPicSprite(sOutfitMenu->spriteIds[GFX_TS_SHADOW]);
    }

    sOutfitMenu->spriteIds[GFX_TS] = CreateTrainerPicSprite(id, TRUE, 48, 48, 9, TAG_NONE);
    sOutfitMenu->spriteIds[GFX_TS_SHADOW] = CreateTrainerPicSprite(id, TRUE, 50, 48, 10, TAG_NONE);
    LoadPalette(&sTSShadowPal, OBJ_PLTT_ID(10), PLTT_SIZE_4BPP);
    gSprites[sOutfitMenu->spriteIds[GFX_TS_SHADOW]].oam.objMode = ST_OAM_OBJ_BLEND;
    gSprites[sOutfitMenu->spriteIds[GFX_TS_SHADOW]].oam.priority = 2;
    if (!unlocked)
    {
        // bc we're directly tint to idx 1-15, skipping idx 0
        // there's no point of tinting idx 0
        TintPalette_GrayScale(&gPlttBufferUnfaded[OBJ_PLTT_ID(9)+1], PLTT_SIZE_4BPP-1);
        CpuCopy16(&gPlttBufferUnfaded[OBJ_PLTT_ID(9)+1], &gPlttBufferFaded[OBJ_PLTT_ID(9)+1], PLTT_SIZE_4BPP-1);
    }
}

static inline void SetupOutfitMenu_Sprites_DrawIndicatorSprite(void)
{
    LoadSpriteSheet(&sIndicatorSpriteSheet);
    // the palette is sLockIndicatorSpritePalette
    sOutfitMenu->spriteIds[GFX_INDICATOR] = CreateSprite(&sIndicatorSpriteTemplate, 16, 80, 0);
    gSprites[sOutfitMenu->spriteIds[GFX_INDICATOR]].invisible = IsPlayerWearingOutfit(sOutfitMenu->idx) ? FALSE : TRUE;
}

static inline void SetupOutfitMenu_Sprites_DrawCursorSprite(void)
{
    LoadCompressedSpritePalette(&sCursor_SpritePalette);
    sOutfitMenu->spriteIds[GFX_CURSOR] = CreateSprite(&sCursor_SpriteTemplate, CURSOR_START_X, CURSOR_START_Y, 0);
    StartSpriteAnim(&gSprites[sOutfitMenu->spriteIds[GFX_CURSOR]], 0);
    UpdateCursorPosition();
}

static void SetupOutfitMenu_Sprites(void)
{
    SetupOutfitMenu_Sprites_DrawTrainerSprite(FALSE, GetOutfitStatus(sOutfitMenu->idx));
    SetupOutfitMenu_Sprites_DrawIndicatorSprite();
    SetupOutfitMenu_Sprites_DrawCursorSprite();
}

static u32 CountAndFilterTotalOutfit(void)
{
    u32 i = 0, j = OUTFIT_BEGIN;
    while (j < OUTFIT_COUNT)
    {
        if ((gOutfits[j].isHidden && !GetOutfitStatus(j)))
        {
            j++;
            continue; // skip
        }

        DebugPrintf("i: %d, j: %d, list: %S", i, j, gOutfits[j].name);
        i++;
        j++;
    }
    return i;
}

static inline void ForAllCB_DrawOverworldShadowSprites(u32 idx, u32 col, u32 row)
{
    u32 x, y;
    if (idx >= sOutfitMenu->listCount)
        return;

    x = ((col % 3) < ARRAY_COUNT(sGridPosX)) ? sGridPosX[col] : sGridPosX[0]+8;
    y = ((row % 3) < ARRAY_COUNT(sGridPosY)) ? sGridPosY[row] : sGridPosY[0]+16;
    sOutfitMenu->shadowSpriteIds[idx] = CreateSprite(&sLockSpriteTemplate, x, y, 2);
}

static inline void ForAllCB_HideOverworldShadowSpritesIfPossible(u32 idx, u32 col, u32 row)
{
    switch (idx)
    {
    case 6:
    case 7:
    case 8:
        // when scrolling, there's a chance where there's no overworld icon
        // at the 7/8/9th index
        if (sOutfitMenu->grid->iconSpriteIds[idx] == SPRITE_NONE)
        {
            gSprites[sOutfitMenu->shadowSpriteIds[idx]].invisible = TRUE;
        }
        else
        {
            gSprites[sOutfitMenu->shadowSpriteIds[idx]].invisible = FALSE;
        }
        break;
    default:
        break;
    }
}

static void SpriteCB_Overworld(struct Sprite *s)
{
    u32 idx = s->data[0];
    u32 i = sOutfitMenu->list[sOutfitMenu->grid->topLeftItemIndex + idx];
    // play anim only if it's currecntly picked AND that it's unlocked
    if (idx == sOutfitMenu->grid->selectedItem && GetOutfitStatus(i))
    {
        StartSpriteAnimIfDifferent(s, ANIM_STD_GO_SOUTH);
    }
    else
    {
        StartSpriteAnimIfDifferent(s, ANIM_STD_FACE_SOUTH);
    }
}

static void ForEachCB_PopulateOutfitOverworlds(u32 idx, u32 col, u32 row)
{
    u32 i = sOutfitMenu->list[sOutfitMenu->grid->topLeftItemIndex + idx];
    u32 gfx, x, y;
    if (i >= OUTFIT_COUNT || idx >= sOutfitMenu->listCount)
        return;

    gfx = GetPlayerAvatarGraphicsIdByOutfitStateIdAndGender(i, PLAYER_AVATAR_STATE_NORMAL, gSaveBlock2Ptr->playerGender);
    x = ((col % 3) < ARRAY_COUNT(sGridPosX)) ? sGridPosX[col] : sGridPosX[0]+8;
    y = ((row % 3) < ARRAY_COUNT(sGridPosY)) ? sGridPosY[row] : sGridPosY[0]+16;

    sOutfitMenu->grid->iconSpriteIds[idx] = CreateObjectGraphicsSprite(gfx, SpriteCB_Overworld, x, y, 1);
    gSprites[sOutfitMenu->grid->iconSpriteIds[idx]].data[0] = idx;
    if (!GetOutfitStatus(i))
    {
        // bc we're directly tint to idx 1-15, skipping idx 0
        // there's no point of tinting idx 0
        u32 j = OBJ_PLTT_ID(gSprites[sOutfitMenu->grid->iconSpriteIds[idx]].oam.paletteNum)+1;
        TintPalette_GrayScale(&gPlttBufferUnfaded[j], PLTT_SIZE_4BPP-1);
        CpuCopy16(&gPlttBufferUnfaded[j], &gPlttBufferFaded[j], PLTT_SIZE_4BPP-1);
    }
}

static void ForAllCB_FreeOutfitOverworlds(u32 idx, u32 col, u32 row)
{
    if (sOutfitMenu->grid->iconSpriteIds[idx] == SPRITE_NONE)
        return;

    if (gSprites[sOutfitMenu->grid->iconSpriteIds[idx]].inUse)
    {
        DestroySprite(&gSprites[sOutfitMenu->grid->iconSpriteIds[idx]]);
    }

    sOutfitMenu->grid->iconSpriteIds[idx] = SPRITE_NONE;
}

static void InputCB_UpDownScroll(void)
{
    sOutfitMenu->idx = sOutfitMenu->list[GridMenu_SelectedIndex(sOutfitMenu->grid)];
    GridMenu_ForAll(sOutfitMenu->grid, ForAllCB_FreeOutfitOverworlds);
    GridMenu_ForEach(sOutfitMenu->grid, ForEachCB_PopulateOutfitOverworlds);
    GridMenu_ForAll(sOutfitMenu->grid, ForAllCB_HideOverworldShadowSpritesIfPossible);
    UpdateOutfitInfo();
    if (!IsSEPlaying())
        PlaySE(SE_RG_BAG_CURSOR);
}

static void InputCB_Move(void)
{
    sOutfitMenu->idx = sOutfitMenu->list[GridMenu_SelectedIndex(sOutfitMenu->grid)];
    UpdateOutfitInfo();
    if (!IsSEPlaying())
        PlaySE(SE_RG_BAG_CURSOR);
}

static void InputCB_Fail(void)
{
    sOutfitMenu->idx = sOutfitMenu->list[GridMenu_SelectedIndex(sOutfitMenu->grid)];
    if (!IsSEPlaying())
        PlaySE(SE_BOO);
}

// the return value here is the count
static u32 BuildOutfitLists(void)
{
    u32 i = 0, j = 1;
    sOutfitMenu->list = AllocZeroed(CountAndFilterTotalOutfit() * sizeof(u8));
    while (j < OUTFIT_COUNT)
    {
        if ((gOutfits[j].isHidden && !GetOutfitStatus(j)))
        {
            j++;
            continue; // skip
        }

        sOutfitMenu->list[i] = j;
        DebugPrintf("i: %d, j: %d, list: %S", i, j, gOutfits[sOutfitMenu->list[i]].name);
        i++;
        j++;
    }

    return i;
}

static void SetupOutfitMenu_Grids(void)
{
    sOutfitMenu->grid = GridMenu_Init(3, 3, CountAndFilterTotalOutfit());

    LoadSpriteSheet(&sLockSpriteSheet);
    LoadSpritePalette(&sLockIndicatorSpritePalette);
    GridMenu_ForEach(sOutfitMenu->grid, ForEachCB_PopulateOutfitOverworlds);
    GridMenu_ForAll(sOutfitMenu->grid, ForAllCB_DrawOverworldShadowSprites);
    GridMenu_SetInputCallback(sOutfitMenu->grid, InputCB_Move, DIRECTION_UP, TYPE_MOVE);
    GridMenu_SetInputCallback(sOutfitMenu->grid, InputCB_Move, DIRECTION_DOWN, TYPE_MOVE);
    GridMenu_SetInputCallback(sOutfitMenu->grid, InputCB_Move, DIRECTION_LEFT, TYPE_MOVE);
    GridMenu_SetInputCallback(sOutfitMenu->grid, InputCB_Move, DIRECTION_RIGHT, TYPE_MOVE);
    GridMenu_SetInputCallback(sOutfitMenu->grid, InputCB_Fail, DIRECTION_UP, TYPE_FAIL);
    GridMenu_SetInputCallback(sOutfitMenu->grid, InputCB_Fail, DIRECTION_DOWN, TYPE_FAIL);
    GridMenu_SetInputCallback(sOutfitMenu->grid, InputCB_Fail, DIRECTION_LEFT, TYPE_FAIL);
    GridMenu_SetInputCallback(sOutfitMenu->grid, InputCB_Fail, DIRECTION_RIGHT, TYPE_FAIL);
    GridMenu_SetInputCallback(sOutfitMenu->grid, InputCB_UpDownScroll, DIRECTION_UP, TYPE_SCROLL);
    GridMenu_SetInputCallback(sOutfitMenu->grid, InputCB_UpDownScroll, DIRECTION_DOWN, TYPE_SCROLL);
    sOutfitMenu->grid->selectedItem = gSaveBlock2Ptr->currOutfitId - 1;
}

//! Similar to above, but without redrawing the frame
//! and also clean up the frame.
static inline void UpdateOutfitInfo(void)
{
    FillWindow(WIN_NAME, PIXEL_FILL(0));
    FillWindow(WIN_DESC, PIXEL_FILL(0));

    if (GetOutfitStatus(sOutfitMenu->idx) == FALSE)
    {
        PrintTexts(WIN_NAME, FONT_NORMAL, 4, 0, 0, 0, COLORID_NORMAL, sText_OutfitLocked);
        PrintTexts(WIN_DESC, FONT_NORMAL, 4, 0, 0, 0, COLORID_NORMAL, sText_OutfitLocked);
    }
    else
    {
        PrintTexts(WIN_NAME, FONT_NORMAL, 4, 0, 0, 0, COLORID_NORMAL, gOutfits[sOutfitMenu->idx].name);
        PrintTexts(WIN_DESC, FONT_NORMAL, 4, 0, 0, 0, COLORID_NORMAL, gOutfits[sOutfitMenu->idx].desc);
    }
    gSprites[sOutfitMenu->spriteIds[GFX_INDICATOR]].invisible = IsPlayerWearingOutfit(sOutfitMenu->idx) ? FALSE : TRUE;

    SetupOutfitMenu_Sprites_DrawTrainerSprite(TRUE, GetOutfitStatus(sOutfitMenu->idx));
}

static void Task_WaitFadeInOutfitMenu(u8 taskId)
{
    if (!gPaletteFade.active)
    {
        PlaySE(SE_RG_HELP_OPEN);
        gTasks[taskId].func = Task_OutfitMenuHandleInput;
    }
}

static void Task_WaitMessage(u8 taskId)
{
    if (--gTasks[taskId].data[0] == 0)
    {
        ClearDialogWindowAndFrame(WIN_MSGBOX, TRUE);
        UpdateOutfitInfo();
        gTasks[taskId].func = Task_OutfitMenuHandleInput;
    }
}

static inline void PrintDialogueBoxWithDescWin(const u8 *str, bool32 expandPlaceholders, u8 taskId)
{
    const u8 *txt = expandPlaceholders ? gStringVar4 : str;
    DrawDialogFrameWithCustomTileAndPalette(WIN_MSGBOX, TRUE, 0x100, 13);

    if (expandPlaceholders)
        StringExpandPlaceholders(gStringVar4, str);

    PrintTexts(WIN_MSGBOX, FONT_NORMAL, 0, 0, 0, 0, COLORID_MSGBOX, txt);
    gTasks[taskId].data[0] = 70;
    gTasks[taskId].func = Task_WaitMessage;
}

static void Task_PrintCantChangeOutfit(u8 taskId)
{
    if (gPlayerAvatar.flags & PLAYER_AVATAR_FLAG_BIKE)
        StringCopy(gStringVar1, sText_OutfitError_Cycling);
    else if (gPlayerAvatar.flags & PLAYER_AVATAR_FLAG_SURFING)
        StringCopy(gStringVar1, sText_OutfitError_Surfing);
    else if (gPlayerAvatar.flags & PLAYER_AVATAR_FLAG_UNDERWATER)
        StringCopy(gStringVar1, sText_OutfitError_Diving);
    else
        StringCopy(gStringVar1, sText_OutfitError_Default);

    PrintDialogueBoxWithDescWin(sText_OutfitError, TRUE, taskId);
}

static void Task_PrintOutfitLocked(u8 taskId)
{
    PrintDialogueBoxWithDescWin(sText_OutfitLockedMsg, FALSE, taskId);
}

static inline void CloseOutfitMenu(u8 taskId)
{
    PlaySE(SE_RG_HELP_CLOSE);
    BeginNormalPaletteFade(PALETTES_ALL, 0, 0, 16, RGB_BLACK);
    gTasks[taskId].func = Task_CloseOutfitMenu;
}

static void UpdateCursorPosition(void)
{
    u32 row = sOutfitMenu->grid->selectedItem / sOutfitMenu->grid->maxCols;
    u32 col = sOutfitMenu->grid->selectedItem % sOutfitMenu->grid->maxCols;
    u32 x = CURSOR_START_X + (col * (8 * 6));
    u32 y = CURSOR_START_Y + (row * (8 * 6));
    gSprites[sOutfitMenu->spriteIds[GFX_CURSOR]].x = x;
    gSprites[sOutfitMenu->spriteIds[GFX_CURSOR]].y = y;
}

#define PICK_BUTTONS  (DPAD_RIGHT | DPAD_LEFT)
#define CLOSE_BUTTONS (B_BUTTON | START_BUTTON)

static void Task_OutfitMenuHandleInput(u8 taskId)
{
    GridMenu_HandleInput(sOutfitMenu->grid);
    if (JOY_NEW(CLOSE_BUTTONS))
        CloseOutfitMenu(taskId);

    if (JOY_NEW(DPAD_ANY))
        UpdateOutfitInfo();

    if (JOY_NEW(A_BUTTON))
    {
        if (gPlayerAvatar.flags & PLAYER_AVATAR_FLAG_ON_FOOT)
        {
            if (GetOutfitStatus(sOutfitMenu->idx))
            {
                PlaySE(SE_SUCCESS);
                gSprites[sOutfitMenu->spriteIds[GFX_INDICATOR]].invisible = FALSE;
                gSaveBlock2Ptr->currOutfitId = sOutfitMenu->idx;
            }
            else
            {
                PlaySE(SE_BOO);
                gTasks[taskId].func = Task_PrintOutfitLocked;
            }
        }
        else
        {
            PlaySE(SE_BOO);
            if (GetOutfitStatus(sOutfitMenu->idx))
                gTasks[taskId].func = Task_PrintCantChangeOutfit;
            else
                gTasks[taskId].func = Task_PrintOutfitLocked; //! might be confusing?
        }
    }

    UpdateCursorPosition();
}

static void FreeOutfitMenuResources(void)
{
    u32 i;
    DestroySprite(&gSprites[sOutfitMenu->spriteIds[GFX_OW]]);
    FreeAndDestroyTrainerPicSprite(sOutfitMenu->spriteIds[GFX_TS]);
    FreeAndDestroyTrainerPicSprite(sOutfitMenu->spriteIds[GFX_TS_SHADOW]);
    DestroySprite(&gSprites[sOutfitMenu->spriteIds[GFX_INDICATOR]]);
    for (i = 0; i < sOutfitMenu->grid->maxSize; i++)
    {
        DestroySprite(&gSprites[sOutfitMenu->shadowSpriteIds[i]]);
    }
    GridMenu_Destroy(sOutfitMenu->grid);
    TRY_FREE_AND_SET_NULL(sOutfitMenu->list);
    TRY_FREE_AND_SET_NULL(sOutfitMenu);
    ResetSpriteData();
    FreeAllSpritePalettes();
    FreeAllWindowBuffers();
}

static void Task_CloseOutfitMenu(u8 taskId)
{
    if (!gPaletteFade.active)
    {
        SetMainCallback2(sOutfitMenu->retCB);
        FreeOutfitMenuResources();
        DestroyTask(taskId);
    }
}

//! misc funcs

void BufferOutfitStrings(u8 *dest, u8 outfitId, u8 dataType)
{
    const u8 *src = NULL;

    if (outfitId == OUTFIT_NONE || outfitId >= OUTFIT_COUNT)
    {
        outfitId = DEFAULT_OUTFIT;
    }

    switch(dataType)
    {
    default:
    case OUTFIT_BUFFER_NAME:
        src = gOutfits[outfitId].name;
        break;
    case OUTFIT_BUFFER_DESC:
        src = gOutfits[outfitId].desc;
        break;
    }
    StringCopy(dest, src);
}

u32 GetPlayerTrainerPicIdByOutfitGenderType(u32 outfitId, u32 gender, bool32 type)
{
    if (outfitId > OUTFIT_NONE && outfitId < OUTFIT_COUNT)
        return gOutfits[outfitId].trainerPics[gender][type];
    else
        return gOutfits[0].trainerPics[gender][type];
}

const void *GetPlayerHeadGfxOrPal(u8 which, bool32 isFP)
{
    if (which == PAL)
    {
        u32 tag = GetObjectEventGraphicsInfo(
            GetPlayerAvatarGraphicsIdByStateId(PLAYER_AVATAR_STATE_NORMAL))->paletteTag;

        return GetObjectEventPaletteFromTag(tag)->data;
    }
    else
    {
        if (gSaveBlock2Ptr->currOutfitId == OUTFIT_NONE || gSaveBlock2Ptr->currOutfitId >= OUTFIT_COUNT)
        {
            gSaveBlock2Ptr->currOutfitId = DEFAULT_OUTFIT;
        }

        if (isFP)
        {
            return gSaveBlock2Ptr->playerGender ?
                        gOutfits[gSaveBlock2Ptr->currOutfitId].iconsFP + 0x80 :
                        gOutfits[gSaveBlock2Ptr->currOutfitId].iconsFP;
        }
        else
            return gOutfits[gSaveBlock2Ptr->currOutfitId].iconsRM[gSaveBlock2Ptr->playerGender];
    }
}

u16 *GetOutfitPointer(u16 id)
{
    if (id > OUTFIT_COUNT)
        return NULL;
    else
        return &gSaveBlock2Ptr->outfits[id / 8];
}

u16 UnlockOutfit(u16 id)
{
    u16 *ptr = GetOutfitPointer(id);
    if (ptr)
        *ptr |= 1 << (id & 7);
    return 0;
}

u16 ToggleOutfit(u16 id)
{
    u16 *ptr = GetOutfitPointer(id);
    if (ptr)
        *ptr ^= 1 << (id & 7);
    return 0;
}

u16 LockOutfit(u16 id)
{
    u16 *ptr = GetOutfitPointer(id);
    if (ptr)
        *ptr &= ~(1 << (id & 7));
    return 0;
}

bool8 GetOutfitStatus(u16 id)
{
    u16 *ptr = GetOutfitPointer(id);

    // return false if GetOutfitPointer returns NULL
    if (!ptr)
        return FALSE;

    // return false if flag is not set
    if (!(((*ptr) >> (id & 7)) & 1))
        return FALSE;

    // rest
    return TRUE;
}

bool8 IsPlayerWearingOutfit(u16 id)
{
    if (gSaveBlock2Ptr->currOutfitId == id)
        return TRUE;

    return FALSE;
}

u32 GetOutfitPrice(u16 id)
{
    return gOutfits[id].prices[gSaveBlock2Ptr->playerGender];
}
