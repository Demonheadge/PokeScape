const struct MonCoords gTrainerBackPicCoords[] =
{
    [TRAINER_BACK_PIC_BRENDAN] = {.size = 8, .y_offset = 4},
    [TRAINER_BACK_PIC_MAY] = {.size = 8, .y_offset = 4},
    [TRAINER_BACK_PIC_RED] = {.size = 8, .y_offset = 5},
    [TRAINER_BACK_PIC_LEAF] = {.size = 8, .y_offset = 5},
    [TRAINER_BACK_PIC_RUBY_SAPPHIRE_BRENDAN] = {.size = 8, .y_offset = 4},
    [TRAINER_BACK_PIC_RUBY_SAPPHIRE_MAY] = {.size = 8, .y_offset = 4},
    [TRAINER_BACK_PIC_WALLY] = {.size = 8, .y_offset = 4},
    [TRAINER_BACK_PIC_STEVEN] = {.size = 8, .y_offset = 4},
    [TRAINER_BACK_PIC_ZANIK] = {.size = 8, .y_offset = 4},
    [TRAINER_BACK_PIC_ARIANE] = {.size = 8, .y_offset = 4},
    [TRAINER_BACK_PIC_OWEN] = {.size = 8, .y_offset = 4},
};

// this table goes functionally unused, since none of these pics are compressed
// and the place they would get extracted to gets overwritten later anyway
// the casts are so they'll play nice with the strict struct definition
const struct CompressedSpriteSheet gTrainerBackPicTable[] =
{
    [TRAINER_BACK_PIC_BRENDAN] = {
        .data = (const u32 *)gTrainerBackPic_protaganist_m,
        .size = TRAINER_PIC_SIZE * ARRAY_COUNT(gTrainerBackPicTable_Brendan),
        .tag = TRAINER_BACK_PIC_BRENDAN,
    },
    [TRAINER_BACK_PIC_MAY] = {
        .data = (const u32 *)gTrainerBackPic_protaganist_f,
        .size = TRAINER_PIC_SIZE * ARRAY_COUNT(gTrainerBackPicTable_May),
        .tag = TRAINER_BACK_PIC_MAY,
    },
    [TRAINER_BACK_PIC_RED] = {
        .data = (const u32 *)gTrainerBackPic_Red,
        .size = TRAINER_PIC_SIZE * ARRAY_COUNT(gTrainerBackPicTable_Red),
        .tag = TRAINER_BACK_PIC_RED,
    },
    [TRAINER_BACK_PIC_LEAF] = {
        .data = (const u32 *)gTrainerBackPic_Leaf,
        .size = TRAINER_PIC_SIZE * ARRAY_COUNT(gTrainerBackPicTable_Leaf),
        .tag = TRAINER_BACK_PIC_LEAF,
    },
    [TRAINER_BACK_PIC_RUBY_SAPPHIRE_BRENDAN] = {
        .data = (const u32 *)gTrainerBackPic_RubySapphireBrendan,
        .size = TRAINER_PIC_SIZE * ARRAY_COUNT(gTrainerBackPicTable_RubySapphireBrendan),
        .tag = TRAINER_BACK_PIC_RUBY_SAPPHIRE_BRENDAN,
    },
    [TRAINER_BACK_PIC_RUBY_SAPPHIRE_MAY] = {
        .data = (const u32 *)gTrainerBackPic_RubySapphireMay,
        .size = TRAINER_PIC_SIZE * ARRAY_COUNT(gTrainerBackPicTable_RubySapphireMay),
        .tag = TRAINER_BACK_PIC_RUBY_SAPPHIRE_MAY,
    },
    [TRAINER_BACK_PIC_WALLY] = {
        .data = (const u32 *)gTrainerBackPic_Wally,
        .size = TRAINER_PIC_SIZE * ARRAY_COUNT(gTrainerBackPicTable_Wally),
        .tag = TRAINER_BACK_PIC_WALLY,
    },
    [TRAINER_BACK_PIC_STEVEN] = {
        .data = (const u32 *)gTrainerBackPic_Steven,
        .size = TRAINER_PIC_SIZE * ARRAY_COUNT(gTrainerBackPicTable_Steven),
        .tag = TRAINER_BACK_PIC_STEVEN,
    },
    [TRAINER_BACK_PIC_ZANIK] = {
        .data = (const u32 *)gTrainerBackPic_Zanik,
        .size = TRAINER_PIC_SIZE * ARRAY_COUNT(gTrainerBackPicTable_Zanik),
        .tag = TRAINER_BACK_PIC_ZANIK,
    },
    [TRAINER_BACK_PIC_ARIANE] = {
        .data = (const u32 *)gTrainerBackPic_Ariane,
        .size = TRAINER_PIC_SIZE * ARRAY_COUNT(gTrainerBackPicTable_Ariane),
        .tag = TRAINER_BACK_PIC_ARIANE,
    },
    [TRAINER_BACK_PIC_OWEN] = {
        .data = (const u32 *)gTrainerBackPic_Owen,
        .size = TRAINER_PIC_SIZE * ARRAY_COUNT(gTrainerBackPicTable_Owen),
        .tag = TRAINER_BACK_PIC_OWEN,
    },
};

#define TRAINER_BACK_PAL(trainerPic, pal) [TRAINER_BACK_PIC_##trainerPic] = {pal, TRAINER_BACK_PIC_##trainerPic}

const struct CompressedSpritePalette gTrainerBackPicPaletteTable[] =
{
    TRAINER_BACK_PAL(BRENDAN, gTrainerPalette_protaganist_m_back),
    TRAINER_BACK_PAL(MAY, gTrainerPalette_protaganist_f_back),
    TRAINER_BACK_PAL(RED, gTrainerBackPicPalette_Red),
    TRAINER_BACK_PAL(LEAF, gTrainerBackPicPalette_Leaf),
    TRAINER_BACK_PAL(RUBY_SAPPHIRE_BRENDAN, gTrainerPalette_RubySapphireBrendan),
    TRAINER_BACK_PAL(RUBY_SAPPHIRE_MAY, gTrainerPalette_RubySapphireMay),
    TRAINER_BACK_PAL(WALLY, gTrainerPalette_Wally),
    TRAINER_BACK_PAL(STEVEN, gTrainerPalette_Steven),
    TRAINER_BACK_PAL(ZANIK, gTrainerPalette_zanik_back),
    TRAINER_BACK_PAL(ARIANE, gTrainerPalette_Ariane_back),
    TRAINER_BACK_PAL(OWEN, gTrainerPalette_Owen_back),
};
