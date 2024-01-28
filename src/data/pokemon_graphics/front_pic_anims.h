#define PLACEHOLDER_ANIM_SINGLE_FRAME(name)     \
static const union AnimCmd sAnim_##name##_1[] = \
{                                               \
    ANIMCMD_FRAME(0, 1),                        \
    ANIMCMD_END,                                \
}

#define PLACEHOLDER_ANIM_TWO_FRAMES(name)       \
static const union AnimCmd sAnim_##name##_1[] = \
{                                               \
    ANIMCMD_FRAME(0, 30),                       \
    ANIMCMD_FRAME(1, 30),                       \
    ANIMCMD_FRAME(0, 1),                        \
    ANIMCMD_END,                                \
}

static const union AnimCmd sAnim_None_1[] =
{
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

#if P_FAMILY_BULBASAUR
static const union AnimCmd sAnim_Bulbasaur_1[] =
{
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Ivysaur_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 36),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Venusaur_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

#if P_MEGA_EVOLUTIONS
PLACEHOLDER_ANIM_SINGLE_FRAME(VenusaurMega);
#endif //P_MEGA_EVOLUTIONS

#if P_GIGANTAMAX_FORMS
PLACEHOLDER_ANIM_SINGLE_FRAME(VenusaurGigantamax);
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_BULBASAUR

#if P_FAMILY_CHARMANDER
static const union AnimCmd sAnim_Charmander_1[] =
{
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 46),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Charmeleon_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Charizard_1[] =
{
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

#if P_MEGA_EVOLUTIONS
PLACEHOLDER_ANIM_SINGLE_FRAME(CharizardMegaX);
#endif //P_MEGA_EVOLUTIONS

#if P_MEGA_EVOLUTIONS
PLACEHOLDER_ANIM_SINGLE_FRAME(CharizardMegaY);
#endif //P_MEGA_EVOLUTIONS

#if P_GIGANTAMAX_FORMS
PLACEHOLDER_ANIM_SINGLE_FRAME(CharizardGigantamax);
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_CHARMANDER

#if P_FAMILY_SQUIRTLE
static const union AnimCmd sAnim_Squirtle_1[] =
{
    ANIMCMD_FRAME(1, 11),
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_FRAME(1, 11),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Wartortle_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Blastoise_1[] =
{
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};

#if P_MEGA_EVOLUTIONS
PLACEHOLDER_ANIM_SINGLE_FRAME(BlastoiseMega);
#endif //P_MEGA_EVOLUTIONS

#if P_GIGANTAMAX_FORMS
PLACEHOLDER_ANIM_SINGLE_FRAME(BlastoiseGigantamax);
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_SQUIRTLE

#if P_FAMILY_CATERPIE
static const union AnimCmd sAnim_Caterpie_1[] =
{
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Metapod_1[] =
{
    ANIMCMD_FRAME(1, 45),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Butterfree_1[] =
{
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 25),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

#if P_GIGANTAMAX_FORMS
PLACEHOLDER_ANIM_SINGLE_FRAME(ButterfreeGigantamax);
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_CATERPIE

#if P_FAMILY_WEEDLE
static const union AnimCmd sAnim_Weedle_1[] =
{
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Kakuna_1[] =
{
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Beedrill_1[] =
{
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 35),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

#if P_MEGA_EVOLUTIONS
PLACEHOLDER_ANIM_SINGLE_FRAME(BeedrillMega);
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_WEEDLE

#if P_FAMILY_PIDGEY
static const union AnimCmd sAnim_Pidgey_1[] =
{
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Pidgeotto_1[] =
{
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 35),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Pidgeot_1[] =
{
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

#if P_MEGA_EVOLUTIONS
PLACEHOLDER_ANIM_SINGLE_FRAME(PidgeotMega);
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_PIDGEY

#if P_FAMILY_RATTATA
static const union AnimCmd sAnim_Rattata_1[] =
{
    ANIMCMD_FRAME(1, 11),
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_FRAME(1, 11),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Raticate_1[] =
{
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

#if P_ALOLAN_FORMS
PLACEHOLDER_ANIM_SINGLE_FRAME(RattataAlolan);
PLACEHOLDER_ANIM_SINGLE_FRAME(RaticateAlolan);
#endif //P_ALOLAN_FORMS
#endif //P_FAMILY_RATTATA

#if P_FAMILY_SPEAROW
static const union AnimCmd sAnim_Spearow_1[] =
{
    ANIMCMD_FRAME(1, 11),
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_FRAME(1, 11),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Fearow_1[] =
{
    ANIMCMD_FRAME(1, 7),
    ANIMCMD_FRAME(0, 7),
    ANIMCMD_FRAME(1, 7),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 7),
    ANIMCMD_FRAME(0, 7),
    ANIMCMD_FRAME(1, 7),
    ANIMCMD_FRAME(0, 7),
    ANIMCMD_END,
};
#endif //P_FAMILY_SPEAROW

#if P_FAMILY_EKANS
static const union AnimCmd sAnim_Ekans_1[] =
{
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Arbok_1[] =
{
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 35),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_EKANS

#if P_FAMILY_PIKACHU
#if P_GEN_2_CROSS_EVOS
static const union AnimCmd sAnim_Pichu_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

PLACEHOLDER_ANIM_SINGLE_FRAME(PichuSpikyEared);
#endif //P_GEN_2_CROSS_EVOS

static const union AnimCmd sAnim_Pikachu_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 60),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

#if P_COSPLAY_PIKACHU_FORMS
PLACEHOLDER_ANIM_SINGLE_FRAME(PikachuCosplay);
PLACEHOLDER_ANIM_SINGLE_FRAME(PikachuRockStar);
PLACEHOLDER_ANIM_SINGLE_FRAME(PikachuBelle);
PLACEHOLDER_ANIM_SINGLE_FRAME(PikachuPopStar);
PLACEHOLDER_ANIM_SINGLE_FRAME(PikachuPhD);
PLACEHOLDER_ANIM_SINGLE_FRAME(PikachuLibre);
#endif //P_COSPLAY_PIKACHU_FORMS
#if P_CAP_PIKACHU_FORMS
PLACEHOLDER_ANIM_SINGLE_FRAME(PikachuOriginalCap);
PLACEHOLDER_ANIM_SINGLE_FRAME(PikachuHoennCap);
PLACEHOLDER_ANIM_SINGLE_FRAME(PikachuSinnohCap);
PLACEHOLDER_ANIM_SINGLE_FRAME(PikachuUnovaCap);
PLACEHOLDER_ANIM_SINGLE_FRAME(PikachuKalosCap);
PLACEHOLDER_ANIM_SINGLE_FRAME(PikachuAlolaCap);
PLACEHOLDER_ANIM_SINGLE_FRAME(PikachuPartnerCap);
PLACEHOLDER_ANIM_SINGLE_FRAME(PikachuWorldCap);
#endif //P_CAP_PIKACHU_FORMS

#if P_GIGANTAMAX_FORMS
PLACEHOLDER_ANIM_SINGLE_FRAME(PikachuGigantamax);
#endif //P_GIGANTAMAX_FORMS

static const union AnimCmd sAnim_Raichu_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

#if P_ALOLAN_FORMS
PLACEHOLDER_ANIM_SINGLE_FRAME(RaichuAlolan);
#endif //P_ALOLAN_FORMS
#endif //P_FAMILY_PIKACHU

#if P_FAMILY_SANDSHREW
static const union AnimCmd sAnim_Sandshrew_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Sandslash_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

#if P_ALOLAN_FORMS
PLACEHOLDER_ANIM_SINGLE_FRAME(SandshrewAlolan);
PLACEHOLDER_ANIM_SINGLE_FRAME(SandslashAlolan);
#endif //P_ALOLAN_FORMS
#endif //P_FAMILY_SANDSHREW

#if P_FAMILY_NIDORAN
static const union AnimCmd sAnim_NidoranF_1[] =
{
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 50),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Nidorina_1[] =
{
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Nidoqueen_1[] =
{
    ANIMCMD_FRAME(1, 45),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_NidoranM_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Nidorino_1[] =
{
    ANIMCMD_FRAME(0, 7),
    ANIMCMD_FRAME(1, 23),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Nidoking_1[] =
{
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_NIDORAN

#if P_FAMILY_CLEFAIRY
#if P_GEN_2_CROSS_EVOS
static const union AnimCmd sAnim_Cleffa_1[] =
{
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_GEN_2_CROSS_EVOS

static const union AnimCmd sAnim_Clefairy_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Clefable_1[] =
{
    ANIMCMD_FRAME(0, 16),
    ANIMCMD_FRAME(1, 48),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};
#endif //P_FAMILY_CLEFAIRY

#if P_FAMILY_VULPIX
static const union AnimCmd sAnim_Vulpix_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Ninetales_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

#if P_ALOLAN_FORMS
PLACEHOLDER_ANIM_SINGLE_FRAME(VulpixAlolan);
PLACEHOLDER_ANIM_SINGLE_FRAME(NinetalesAlolan);
#endif //P_ALOLAN_FORMS
#endif //P_FAMILY_VULPIX

#if P_FAMILY_JIGGLYPUFF
#if P_GEN_2_CROSS_EVOS
static const union AnimCmd sAnim_Igglybuff_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_GEN_2_CROSS_EVOS

static const union AnimCmd sAnim_Jigglypuff_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Wigglytuff_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_FAMILY_JIGGLYPUFF

#if P_FAMILY_ZUBAT
static const union AnimCmd sAnim_Zubat_1[] =
{
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_FRAME(1, 3),
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_FRAME(1, 3),
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_FRAME(1, 3),
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_FRAME(1, 3),
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_FRAME(1, 3),
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_FRAME(1, 3),
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Golbat_1[] =
{
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

#if P_GEN_2_CROSS_EVOS
static const union AnimCmd sAnim_Crobat_1[] =
{
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_END,
};
#endif //P_GEN_2_CROSS_EVOS
#endif //P_FAMILY_ZUBAT

#if P_FAMILY_ODDISH
static const union AnimCmd sAnim_Oddish_1[] =
{
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_FRAME(1, 11),
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_FRAME(1, 11),
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_FRAME(1, 11),
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Gloom_1[] =
{
    ANIMCMD_FRAME(0, 21),
    ANIMCMD_FRAME(1, 45),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Vileplume_1[] =
{
    ANIMCMD_FRAME(1, 38),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

#if P_GEN_2_CROSS_EVOS
static const union AnimCmd sAnim_Bellossom_1[] =
{
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};
#endif //P_GEN_2_CROSS_EVOS
#endif //P_FAMILY_ODDISH

#if P_FAMILY_PARAS
static const union AnimCmd sAnim_Paras_1[] =
{
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Parasect_1[] =
{
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 35),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_FAMILY_PARAS

#if P_FAMILY_VENONAT
static const union AnimCmd sAnim_Venonat_1[] =
{
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 35),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Venomoth_1[] =
{
    ANIMCMD_FRAME(1, 4),
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_FRAME(1, 4),
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_FRAME(1, 4),
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_FRAME(1, 4),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 4),
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_FRAME(1, 4),
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_FRAME(1, 4),
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_FRAME(1, 4),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 4),
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_FRAME(1, 4),
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_FRAME(1, 4),
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_END,
};
#endif //P_FAMILY_VENONAT

#if P_FAMILY_DIGLETT
static const union AnimCmd sAnim_Diglett_1[] =
{
    ANIMCMD_FRAME(0, 25),
    ANIMCMD_FRAME(1, 35),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Dugtrio_1[] =
{
    ANIMCMD_FRAME(1, 35),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

#if P_ALOLAN_FORMS
PLACEHOLDER_ANIM_SINGLE_FRAME(DiglettAlolan);
PLACEHOLDER_ANIM_SINGLE_FRAME(DugtrioAlolan);
#endif //P_ALOLAN_FORMS
#endif //P_FAMILY_DIGLETT

#if P_FAMILY_MEOWTH
static const union AnimCmd sAnim_Meowth_1[] =
{
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 17),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Persian_1[] =
{
    ANIMCMD_FRAME(1, 50),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};

#if P_ALOLAN_FORMS
PLACEHOLDER_ANIM_SINGLE_FRAME(MeowthAlolan);
PLACEHOLDER_ANIM_SINGLE_FRAME(PersianAlolan);
#endif //P_ALOLAN_FORMS

#if P_GALARIAN_FORMS
PLACEHOLDER_ANIM_SINGLE_FRAME(MeowthGalarian);
PLACEHOLDER_ANIM_SINGLE_FRAME(Perrserker);
#endif //P_GALARIAN_FORMS

#if P_GIGANTAMAX_FORMS
PLACEHOLDER_ANIM_SINGLE_FRAME(MeowthGigantamax);
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_MEOWTH

#if P_FAMILY_PSYDUCK
static const union AnimCmd sAnim_Psyduck_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Golduck_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_FAMILY_PSYDUCK

#if P_FAMILY_MANKEY
static const union AnimCmd sAnim_Mankey_1[] =
{
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 28),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Primeape_1[] =
{
    ANIMCMD_FRAME(0, 14),
    ANIMCMD_FRAME(1, 14),
    ANIMCMD_FRAME(0, 14),
    ANIMCMD_FRAME(1, 14),
    ANIMCMD_FRAME(0, 14),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

#if P_GEN_9_CROSS_EVOS
PLACEHOLDER_ANIM_SINGLE_FRAME(Annihilape);
#endif //P_GEN_9_CROSS_EVOS
#endif //P_FAMILY_MANKEY

#if P_FAMILY_GROWLITHE
static const union AnimCmd sAnim_Growlithe_1[] =
{
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Arcanine_1[] =
{
    ANIMCMD_FRAME(1, 38),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

#if P_HISUIAN_FORMS
PLACEHOLDER_ANIM_SINGLE_FRAME(GrowlitheHisuian);
PLACEHOLDER_ANIM_SINGLE_FRAME(ArcanineHisuian);
#endif //P_HISUIAN_FORMS
#endif //P_FAMILY_GROWLITHE

#if P_FAMILY_POLIWAG
static const union AnimCmd sAnim_Poliwag_1[] =
{
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Poliwhirl_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Poliwrath_1[] =
{
    ANIMCMD_FRAME(1, 45),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

#if P_GEN_2_CROSS_EVOS
static const union AnimCmd sAnim_Politoed_1[] =
{
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 35),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};
#endif //P_GEN_2_CROSS_EVOS
#endif //P_FAMILY_POLIWAG

#if P_FAMILY_ABRA
static const union AnimCmd sAnim_Abra_1[] =
{
    ANIMCMD_FRAME(0, 7),
    ANIMCMD_FRAME(1, 21),
    ANIMCMD_FRAME(0, 13),
    ANIMCMD_FRAME(1, 21),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Kadabra_1[] =
{
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 45),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Alakazam_1[] =
{
    ANIMCMD_FRAME(0, 9),
    ANIMCMD_FRAME(1, 54),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

#if P_MEGA_EVOLUTIONS
PLACEHOLDER_ANIM_SINGLE_FRAME(AlakazamMega);
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_ABRA

#if P_FAMILY_MACHOP
static const union AnimCmd sAnim_Machop_1[] =
{
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Machoke_1[] =
{
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 44),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Machamp_1[] =
{
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_FRAME(1, 11),
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_FRAME(1, 11),
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_FRAME(1, 11),
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_END,
};

#if P_GIGANTAMAX_FORMS
PLACEHOLDER_ANIM_SINGLE_FRAME(MachampGigantamax);
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_MACHOP

#if P_FAMILY_BELLSPROUT
static const union AnimCmd sAnim_Bellsprout_1[] =
{
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Weepinbell_1[] =
{
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Victreebel_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_BELLSPROUT

#if P_FAMILY_TENTACOOL
static const union AnimCmd sAnim_Tentacool_1[] =
{
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 7),
    ANIMCMD_FRAME(1, 11),
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Tentacruel_1[] =
{
    ANIMCMD_FRAME(0, 19),
    ANIMCMD_FRAME(1, 35),
    ANIMCMD_FRAME(0, 19),
    ANIMCMD_FRAME(1, 19),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_END,
};
#endif //P_FAMILY_TENTACOOL

#if P_FAMILY_GEODUDE
static const union AnimCmd sAnim_Geodude_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 36),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Graveler_1[] =
{
    ANIMCMD_FRAME(0, 16),
    ANIMCMD_FRAME(1, 16),
    ANIMCMD_FRAME(0, 16),
    ANIMCMD_FRAME(1, 16),
    ANIMCMD_FRAME(0, 16),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Golem_1[] =
{
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 31),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_END,
};

#if P_ALOLAN_FORMS
PLACEHOLDER_ANIM_SINGLE_FRAME(GeodudeAlolan);
PLACEHOLDER_ANIM_SINGLE_FRAME(GravelerAlolan);
PLACEHOLDER_ANIM_SINGLE_FRAME(GolemAlolan);
#endif //P_ALOLAN_FORMS
#endif //P_FAMILY_GEODUDE

#if P_FAMILY_PONYTA
static const union AnimCmd sAnim_Ponyta_1[] =
{
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Rapidash_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

#if P_GALARIAN_FORMS
PLACEHOLDER_ANIM_SINGLE_FRAME(PonytaGalarian);
PLACEHOLDER_ANIM_SINGLE_FRAME(RapidashGalarian);
#endif //P_GALARIAN_FORMS
#endif //P_FAMILY_PONYTA

#if P_FAMILY_SLOWPOKE
static const union AnimCmd sAnim_Slowpoke_1[] =
{
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 50),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Slowbro_1[] =
{
    ANIMCMD_FRAME(1, 45),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

#if P_GEN_2_CROSS_EVOS
static const union AnimCmd sAnim_Slowking_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_GEN_2_CROSS_EVOS

#if P_MEGA_EVOLUTIONS
PLACEHOLDER_ANIM_SINGLE_FRAME(SlowbroMega);
#endif //P_MEGA_EVOLUTIONS

#if P_GALARIAN_FORMS
PLACEHOLDER_ANIM_SINGLE_FRAME(SlowpokeGalarian);
PLACEHOLDER_ANIM_SINGLE_FRAME(SlowbroGalarian);
#if P_GEN_2_CROSS_EVOS
PLACEHOLDER_ANIM_SINGLE_FRAME(SlowkingGalarian);
#endif //P_GEN_2_CROSS_EVOS
#endif //P_GALARIAN_FORMS
#endif //P_FAMILY_SLOWPOKE

#if P_FAMILY_MAGNEMITE
static const union AnimCmd sAnim_Magnemite_1[] =
{
    ANIMCMD_FRAME(0, 28),
    ANIMCMD_FRAME(1, 28),
    ANIMCMD_FRAME(0, 28),
    ANIMCMD_FRAME(1, 28),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Magneton_1[] =
{
    ANIMCMD_FRAME(0, 14),
    ANIMCMD_FRAME(1, 14),
    ANIMCMD_FRAME(0, 14),
    ANIMCMD_FRAME(1, 14),
    ANIMCMD_FRAME(0, 14),
    ANIMCMD_FRAME(1, 14),
    ANIMCMD_FRAME(0, 14),
    ANIMCMD_END,
};

#if P_GEN_4_CROSS_EVOS
static const union AnimCmd sAnim_Magnezone_1[] =
{
    ANIMCMD_FRAME(0, 16),
    ANIMCMD_FRAME(1, 16),
    ANIMCMD_FRAME(0, 16),
    ANIMCMD_FRAME(1, 16),
    ANIMCMD_FRAME(0, 16),
    ANIMCMD_END,
};
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_MAGNEMITE

#if P_FAMILY_FARFETCHD
static const union AnimCmd sAnim_Farfetchd_1[] =
{
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

#if P_GALARIAN_FORMS
PLACEHOLDER_ANIM_SINGLE_FRAME(FarfetchdGalarian);
PLACEHOLDER_ANIM_SINGLE_FRAME(Sirfetchd);
#endif //P_GALARIAN_FORMS
#endif //P_FAMILY_FARFETCHD

#if P_FAMILY_DODUO
static const union AnimCmd sAnim_Doduo_1[] =
{
    ANIMCMD_FRAME(0, 18),
    ANIMCMD_FRAME(1, 18),
    ANIMCMD_FRAME(0, 18),
    ANIMCMD_FRAME(1, 18),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Dodrio_1[] =
{
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_END,
};
#endif //P_FAMILY_DODUO

#if P_FAMILY_SEEL
static const union AnimCmd sAnim_Seel_1[] =
{
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Dewgong_1[] =
{
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_END,
};
#endif //P_FAMILY_SEEL

#if P_FAMILY_GRIMER
static const union AnimCmd sAnim_Grimer_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Muk_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

#if P_ALOLAN_FORMS
PLACEHOLDER_ANIM_SINGLE_FRAME(GrimerAlolan);
PLACEHOLDER_ANIM_SINGLE_FRAME(MukAlolan);
#endif //P_ALOLAN_FORMS
#endif //P_FAMILY_GRIMER

#if P_FAMILY_SHELLDER
static const union AnimCmd sAnim_Shellder_1[] =
{
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 45),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Cloyster_1[] =
{
    ANIMCMD_FRAME(1, 32),
    ANIMCMD_FRAME(0, 14),
    ANIMCMD_FRAME(1, 18),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};
#endif //P_FAMILY_SHELLDER

#if P_FAMILY_GASTLY
static const union AnimCmd sAnim_Gastly_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 18),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Haunter_1[] =
{
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 35),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Gengar_1[] =
{
    ANIMCMD_FRAME(1, 50),
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

#if P_MEGA_EVOLUTIONS
PLACEHOLDER_ANIM_SINGLE_FRAME(GengarMega);
#endif //P_MEGA_EVOLUTIONS

#if P_GIGANTAMAX_FORMS
PLACEHOLDER_ANIM_SINGLE_FRAME(GengarGigantamax);
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_GASTLY

#if P_FAMILY_ONIX
static const union AnimCmd sAnim_Onix_1[] =
{
    ANIMCMD_FRAME(1, 50),
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_END,
};

#if P_GEN_2_CROSS_EVOS
static const union AnimCmd sAnim_Steelix_1[] =
{
    ANIMCMD_FRAME(0, 7),
    ANIMCMD_FRAME(1, 21),
    ANIMCMD_FRAME(0, 13),
    ANIMCMD_FRAME(1, 21),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

#if P_MEGA_EVOLUTIONS
PLACEHOLDER_ANIM_SINGLE_FRAME(SteelixMega);
#endif //P_MEGA_EVOLUTIONS
#endif //P_GEN_2_CROSS_EVOS
#endif //P_FAMILY_ONIX

#if P_FAMILY_DROWZEE
static const union AnimCmd sAnim_Drowzee_1[] =
{
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 45),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Hypno_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_FAMILY_DROWZEE

#if P_FAMILY_KRABBY
static const union AnimCmd sAnim_Krabby_1[] =
{
    ANIMCMD_FRAME(1, 16),
    ANIMCMD_FRAME(0, 16),
    ANIMCMD_FRAME(1, 16),
    ANIMCMD_FRAME(0, 16),
    ANIMCMD_FRAME(1, 16),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Kingler_1[] =
{
    ANIMCMD_FRAME(1, 50),
    ANIMCMD_FRAME(0, 14),
    ANIMCMD_END,
};

#if P_GIGANTAMAX_FORMS
PLACEHOLDER_ANIM_SINGLE_FRAME(KinglerGigantamax);
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_KRABBY

#if P_FAMILY_VOLTORB
static const union AnimCmd sAnim_Voltorb_1[] =
{
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Electrode_1[] =
{
    ANIMCMD_FRAME(0, 14),
    ANIMCMD_FRAME(1, 34),
    ANIMCMD_FRAME(1, 34),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

#if P_HISUIAN_FORMS
PLACEHOLDER_ANIM_SINGLE_FRAME(VoltorbHisuian);
PLACEHOLDER_ANIM_SINGLE_FRAME(ElectrodeHisuian);
#endif //P_HISUIAN_FORMS
#endif //P_FAMILY_VOLTORB

#if P_FAMILY_EXEGGCUTE
static const union AnimCmd sAnim_Exeggcute_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Exeggutor_1[] =
{
    ANIMCMD_FRAME(1, 35),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

#if P_ALOLAN_FORMS
PLACEHOLDER_ANIM_TWO_FRAMES(ExeggutorAlolan);
#endif //P_ALOLAN_FORMS
#endif //P_FAMILY_EXEGGCUTE

#if P_FAMILY_CUBONE
static const union AnimCmd sAnim_Cubone_1[] =
{
    ANIMCMD_FRAME(1, 6),
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_LOOP(1),
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 32),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Marowak_1[] =
{
    ANIMCMD_FRAME(1, 14),
    ANIMCMD_FRAME(0, 14),
    ANIMCMD_FRAME(1, 14),
    ANIMCMD_FRAME(0, 14),
    ANIMCMD_FRAME(1, 14),
    ANIMCMD_FRAME(0, 14),
    ANIMCMD_END,
};

#if P_ALOLAN_FORMS
PLACEHOLDER_ANIM_SINGLE_FRAME(MarowakAlolan);
#endif //P_ALOLAN_FORMS
#endif //P_FAMILY_CUBONE

#if P_FAMILY_HITMONS
#if P_GEN_2_CROSS_EVOS
static const union AnimCmd sAnim_Tyrogue_1[] =
{
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};
#endif //P_GEN_2_CROSS_EVOS

static const union AnimCmd sAnim_Hitmonlee_1[] =
{
    ANIMCMD_FRAME(0, 16),
    ANIMCMD_FRAME(1, 18),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Hitmonchan_1[] =
{
    ANIMCMD_FRAME(0, 17),
    ANIMCMD_FRAME(1, 4),
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_FRAME(1, 4),
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_FRAME(1, 4),
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_FRAME(1, 4),
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_FRAME(1, 4),
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_END,
};

#if P_GEN_2_CROSS_EVOS
static const union AnimCmd sAnim_Hitmontop_1[] =
{
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 26),
    ANIMCMD_FRAME(0, 14),
    ANIMCMD_FRAME(1, 32),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};
#endif //P_GEN_2_CROSS_EVOS
#endif //P_FAMILY_HITMONS

#if P_FAMILY_LICKITUNG
static const union AnimCmd sAnim_Lickitung_1[] =
{
    ANIMCMD_FRAME(1, 16),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

#if P_GEN_4_CROSS_EVOS
static const union AnimCmd sAnim_Lickilicky_1[] =
{
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 50),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_LICKITUNG

#if P_FAMILY_KOFFING
static const union AnimCmd sAnim_Koffing_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Weezing_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

#if P_GALARIAN_FORMS
PLACEHOLDER_ANIM_SINGLE_FRAME(WeezingGalarian);
#endif //P_GALARIAN_FORMS
#endif //P_FAMILY_KOFFING

#if P_FAMILY_RHYHORN
static const union AnimCmd sAnim_Rhyhorn_1[] =
{
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Rhydon_1[] =
{
    ANIMCMD_FRAME(1, 16),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

#if P_GEN_4_CROSS_EVOS
static const union AnimCmd sAnim_Rhyperior_1[] =
{
    ANIMCMD_FRAME(0, 50),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};
#endif //P_GEN_2_CROSS_EVOS
#endif //P_FAMILY_RHYHORN

#if P_FAMILY_CHANSEY
#if P_GEN_4_CROSS_EVOS
static const union AnimCmd sAnim_Happiny_1[] =
{
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};
#endif //P_GEN_4_CROSS_EVOS

static const union AnimCmd sAnim_Chansey_1[] =
{
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};

#if P_GEN_2_CROSS_EVOS
static const union AnimCmd sAnim_Blissey_1[] =
{
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_END,
};
#endif //P_GEN_2_CROSS_EVOS
#endif //P_FAMILY_CHANSEY

#if P_FAMILY_TANGELA
static const union AnimCmd sAnim_Tangela_1[] =
{
    ANIMCMD_FRAME(0, 40),
    ANIMCMD_FRAME(1, 24),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

#if P_GEN_4_CROSS_EVOS
static const union AnimCmd sAnim_Tangrowth_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 50),
    ANIMCMD_END,
};
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_TANGELA

#if P_FAMILY_KANGASKHAN
static const union AnimCmd sAnim_Kangaskhan_1[] =
{
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

#if P_MEGA_EVOLUTIONS
PLACEHOLDER_ANIM_SINGLE_FRAME(KangaskhanMega);
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_KANGASKHAN

#if P_FAMILY_HORSEA
static const union AnimCmd sAnim_Horsea_1[] =
{
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Seadra_1[] =
{
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

#if P_GEN_2_CROSS_EVOS
static const union AnimCmd sAnim_Kingdra_1[] =
{
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_GEN_2_CROSS_EVOS
#endif //P_FAMILY_HORSEA

#if P_FAMILY_GOLDEEN
static const union AnimCmd sAnim_Goldeen_1[] =
{
    ANIMCMD_FRAME(0, 16),
    ANIMCMD_FRAME(1, 16),
    ANIMCMD_FRAME(0, 16),
    ANIMCMD_FRAME(1, 16),
    ANIMCMD_FRAME(0, 16),
    ANIMCMD_FRAME(1, 16),
    ANIMCMD_FRAME(0, 16),
    ANIMCMD_FRAME(1, 16),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Seaking_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_GOLDEEN

#if P_FAMILY_STARYU
static const union AnimCmd sAnim_Staryu_1[] =
{
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Starmie_1[] =
{
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_STARYU

#if P_FAMILY_MR_MIME
#if P_GEN_4_CROSS_EVOS
static const union AnimCmd sAnim_MimeJr_1[] =
{
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_GEN_4_CROSS_EVOS

static const union AnimCmd sAnim_MrMime_1[] =
{
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

#if P_GALARIAN_FORMS
PLACEHOLDER_ANIM_SINGLE_FRAME(MrMimeGalarian);
PLACEHOLDER_ANIM_SINGLE_FRAME(MrRime);
#endif //P_GALARIAN_FORMS
#endif //P_FAMILY_MR_MIME

#if P_FAMILY_SCYTHER
static const union AnimCmd sAnim_Scyther_1[] =
{
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

#if P_GEN_2_CROSS_EVOS
static const union AnimCmd sAnim_Scizor_1[] =
{
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};

#if P_MEGA_EVOLUTIONS
PLACEHOLDER_ANIM_SINGLE_FRAME(ScizorMega);
#endif //P_MEGA_EVOLUTIONS
#endif //P_GEN_2_CROSS_EVOS

#if P_GEN_8_CROSS_EVOS
PLACEHOLDER_ANIM_SINGLE_FRAME(Kleavor);
#endif //P_GEN_8_CROSS_EVOS
#endif //P_FAMILY_SCYTHER

#if P_FAMILY_JYNX
#if P_GEN_2_CROSS_EVOS
static const union AnimCmd sAnim_Smoochum_1[] =
{
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};
#endif //P_GEN_2_CROSS_EVOS

static const union AnimCmd sAnim_Jynx_1[] =
{
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 50),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_JYNX

#if P_FAMILY_ELECTABUZZ
#if P_GEN_2_CROSS_EVOS
static const union AnimCmd sAnim_Elekid_1[] =
{
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};
#endif //P_GEN_2_CROSS_EVOS

static const union AnimCmd sAnim_Electabuzz_1[] =
{
    ANIMCMD_FRAME(0, 22),
    ANIMCMD_FRAME(1, 22),
    ANIMCMD_FRAME(0, 22),
    ANIMCMD_FRAME(1, 22),
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_END,
};

#if P_GEN_4_CROSS_EVOS
static const union AnimCmd sAnim_Electivire_1[] =
{
    ANIMCMD_FRAME(1, 50),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_ELECTABUZZ

#if P_FAMILY_MAGMAR
#if P_GEN_2_CROSS_EVOS
static const union AnimCmd sAnim_Magby_1[] =
{
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_GEN_2_CROSS_EVOS

static const union AnimCmd sAnim_Magmar_1[] =
{
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

#if P_GEN_4_CROSS_EVOS
static const union AnimCmd sAnim_Magmortar_1[] =
{
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_MAGMAR

#if P_FAMILY_PINSIR
static const union AnimCmd sAnim_Pinsir_1[] =
{
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

#if P_MEGA_EVOLUTIONS
PLACEHOLDER_ANIM_SINGLE_FRAME(PinsirMega);
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_PINSIR

#if P_FAMILY_TAUROS
static const union AnimCmd sAnim_Tauros_1[] =
{
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};

#if P_PALDEAN_FORMS
PLACEHOLDER_ANIM_SINGLE_FRAME(TaurosPaldean);
#endif //P_PALDEAN_FORMS
#endif //P_FAMILY_TAUROS

#if P_FAMILY_MAGIKARP
static const union AnimCmd sAnim_Magikarp_1[] =
{
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Gyarados_1[] =
{
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 32),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

#if P_MEGA_EVOLUTIONS
PLACEHOLDER_ANIM_SINGLE_FRAME(GyaradosMega);
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_MAGIKARP

#if P_FAMILY_LAPRAS
static const union AnimCmd sAnim_Lapras_1[] =
{
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

#if P_GIGANTAMAX_FORMS
PLACEHOLDER_ANIM_SINGLE_FRAME(LaprasGigantamax);
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_LAPRAS

#if P_FAMILY_DITTO
static const union AnimCmd sAnim_Ditto_1[] =
{
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};
#endif //P_FAMILY_DITTO

#if P_FAMILY_EEVEE
static const union AnimCmd sAnim_Eevee_1[] =
{
    ANIMCMD_FRAME(1, 33),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

#if P_GIGANTAMAX_FORMS
PLACEHOLDER_ANIM_SINGLE_FRAME(EeveeGigantamax);
#endif //P_GIGANTAMAX_FORMS

static const union AnimCmd sAnim_Vaporeon_1[] =
{
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Jolteon_1[] =
{
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Flareon_1[] =
{
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_END,
};

#if P_GEN_2_CROSS_EVOS
static const union AnimCmd sAnim_Espeon_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Umbreon_1[] =
{
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};
#endif //P_GEN_2_CROSS_EVOS

#if P_GEN_4_CROSS_EVOS
static const union AnimCmd sAnim_Leafeon_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Glaceon_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 36),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_GEN_4_CROSS_EVOS

#if P_GEN_6_CROSS_EVOS
static const union AnimCmd sAnim_Sylveon_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};
#endif //P_GEN_6_CROSS_EVOS
#endif //P_FAMILY_EEVEE

#if P_FAMILY_PORYGON
static const union AnimCmd sAnim_Porygon_1[] =
{
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

#if P_GEN_2_CROSS_EVOS
static const union AnimCmd sAnim_Porygon2_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

#if P_GEN_4_CROSS_EVOS
static const union AnimCmd sAnim_Porygon_Z_1[] =
{
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 40),
    ANIMCMD_END,
};
#endif //P_GEN_4_CROSS_EVOS
#endif //P_GEN_2_CROSS_EVOS
#endif //P_FAMILY_PORYGON

#if P_FAMILY_OMANYTE
static const union AnimCmd sAnim_Omanyte_1[] =
{
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Omastar_1[] =
{
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_OMANYTE

#if P_FAMILY_KABUTO
static const union AnimCmd sAnim_Kabuto_1[] =
{
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Kabutops_1[] =
{
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_KABUTO

#if P_FAMILY_AERODACTYL
static const union AnimCmd sAnim_Aerodactyl_1[] =
{
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 25),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 25),
    ANIMCMD_END,
};

#if P_MEGA_EVOLUTIONS
PLACEHOLDER_ANIM_SINGLE_FRAME(AerodactylMega);
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_AERODACTYL

#if P_FAMILY_SNORLAX
#if P_GEN_4_CROSS_EVOS
static const union AnimCmd sAnim_Munchlax_1[] =
{
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};
#endif //P_GEN_4_CROSS_EVOS

static const union AnimCmd sAnim_Snorlax_1[] =
{
    ANIMCMD_FRAME(1, 50),
    ANIMCMD_FRAME(1, 50),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

#if P_GIGANTAMAX_FORMS
PLACEHOLDER_ANIM_SINGLE_FRAME(SnorlaxGigantamax);
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_SNORLAX

#if P_FAMILY_ARTICUNO
static const union AnimCmd sAnim_Articuno_1[] =
{
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

#if P_GALARIAN_FORMS
PLACEHOLDER_ANIM_SINGLE_FRAME(ArticunoGalarian);
#endif //P_GALARIAN_FORMS
#endif //P_FAMILY_ARTICUNO

#if P_FAMILY_ZAPDOS
static const union AnimCmd sAnim_Zapdos_1[] =
{
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

#if P_GALARIAN_FORMS
PLACEHOLDER_ANIM_SINGLE_FRAME(ZapdosGalarian);
#endif //P_GALARIAN_FORMS
#endif //P_FAMILY_ZAPDOS

#if P_FAMILY_MOLTRES
static const union AnimCmd sAnim_Moltres_1[] =
{
    ANIMCMD_FRAME(1, 3),
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_FRAME(1, 3),
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_FRAME(1, 3),
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_FRAME(1, 3),
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_FRAME(1, 3),
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_FRAME(1, 3),
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_FRAME(1, 3),
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_FRAME(1, 3),
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_FRAME(1, 3),
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_FRAME(1, 3),
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_FRAME(1, 3),
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_FRAME(1, 3),
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_FRAME(1, 3),
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_FRAME(1, 3),
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_FRAME(1, 3),
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_FRAME(1, 3),
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_END,
};

#if P_GALARIAN_FORMS
PLACEHOLDER_ANIM_SINGLE_FRAME(MoltresGalarian);
#endif //P_GALARIAN_FORMS
#endif //P_FAMILY_MOLTRES

#if P_FAMILY_DRATINI
static const union AnimCmd sAnim_Dratini_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Dragonair_1[] =
{
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Dragonite_1[] =
{
    ANIMCMD_FRAME(1, 50),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_DRATINI

#if P_FAMILY_MEWTWO
static const union AnimCmd sAnim_Mewtwo_1[] =
{
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};

#if P_MEGA_EVOLUTIONS
PLACEHOLDER_ANIM_SINGLE_FRAME(MewtwoMegaX);
#endif //P_MEGA_EVOLUTIONS

#if P_MEGA_EVOLUTIONS
PLACEHOLDER_ANIM_SINGLE_FRAME(MewtwoMegaY);
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_MEWTWO

#if P_FAMILY_MEW
static const union AnimCmd sAnim_Mew_1[] =
{
    ANIMCMD_FRAME(1, 50),
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_MEW

#if P_FAMILY_CHIKORITA
static const union AnimCmd sAnim_Chikorita_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Bayleef_1[] =
{
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Meganium_1[] =
{
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};
#endif //P_FAMILY_CHIKORITA

#if P_FAMILY_CYNDAQUIL
static const union AnimCmd sAnim_Cyndaquil_1[] =
{
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Quilava_1[] =
{
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Typhlosion_1[] =
{
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

#if P_HISUIAN_FORMS
PLACEHOLDER_ANIM_SINGLE_FRAME(TyphlosionHisuian);
#endif //P_HISUIAN_FORMS
#endif //P_FAMILY_CYNDAQUIL

#if P_FAMILY_TOTODILE
static const union AnimCmd sAnim_Totodile_1[] =
{
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Croconaw_1[] =
{
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Feraligatr_1[] =
{
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 40),
    ANIMCMD_END,
};
#endif //P_FAMILY_TOTODILE

#if P_FAMILY_SENTRET
static const union AnimCmd sAnim_Sentret_1[] =
{
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Furret_1[] =
{
    ANIMCMD_FRAME(1, 35),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};
#endif //P_FAMILY_SENTRET

#if P_FAMILY_HOOTHOOT
static const union AnimCmd sAnim_Hoothoot_1[] =
{
    ANIMCMD_FRAME(1, 7),
    ANIMCMD_FRAME(0, 7),
    ANIMCMD_FRAME(1, 7),
    ANIMCMD_FRAME(0, 7),
    ANIMCMD_FRAME(1, 7),
    ANIMCMD_FRAME(0, 7),
    ANIMCMD_FRAME(1, 7),
    ANIMCMD_FRAME(0, 7),
    ANIMCMD_FRAME(1, 7),
    ANIMCMD_FRAME(0, 7),
    ANIMCMD_FRAME(1, 7),
    ANIMCMD_FRAME(0, 7),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Noctowl_1[] =
{
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};
#endif //P_FAMILY_HOOTHOOT

#if P_FAMILY_LEDYBA
static const union AnimCmd sAnim_Ledyba_1[] =
{
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Ledian_1[] =
{
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 25),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 25),
    ANIMCMD_END,
};
#endif //P_FAMILY_LEDYBA

#if P_FAMILY_SPINARAK
static const union AnimCmd sAnim_Spinarak_1[] =
{
    ANIMCMD_FRAME(1, 6),
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_FRAME(1, 6),
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_FRAME(1, 6),
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_FRAME(1, 6),
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Ariados_1[] =
{
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_SPINARAK

#if P_FAMILY_CHINCHOU
static const union AnimCmd sAnim_Chinchou_1[] =
{
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Lanturn_1[] =
{
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_CHINCHOU

#if P_FAMILY_TOGEPI
static const union AnimCmd sAnim_Togepi_1[] =
{
    ANIMCMD_FRAME(1, 50),
    ANIMCMD_FRAME(1, 50),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Togetic_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

#if P_GEN_4_CROSS_EVOS
static const union AnimCmd sAnim_Togekiss_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_TOGEPI

#if P_FAMILY_NATU
static const union AnimCmd sAnim_Natu_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Xatu_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 45),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_FAMILY_NATU

#if P_FAMILY_MAREEP
static const union AnimCmd sAnim_Mareep_1[] =
{
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Flaaffy_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Ampharos_1[] =
{
    ANIMCMD_FRAME(1, 50),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

#if P_MEGA_EVOLUTIONS
PLACEHOLDER_ANIM_SINGLE_FRAME(AmpharosMega);
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_MAREEP

#if P_FAMILY_MARILL
#if P_GEN_3_CROSS_EVOS
static const union AnimCmd sAnim_Azurill_1[] =
{
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_END,
};
#endif //P_GEN_3_CROSS_EVOS

static const union AnimCmd sAnim_Marill_1[] =
{
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Azumarill_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_FAMILY_MARILL

#if P_FAMILY_SUDOWOODO
#if P_GEN_4_CROSS_EVOS
static const union AnimCmd sAnim_Bonsly_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_GEN_4_CROSS_EVOS

static const union AnimCmd sAnim_Sudowoodo_1[] =
{
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_FAMILY_SUDOWOODO

#if P_FAMILY_HOPPIP
static const union AnimCmd sAnim_Hoppip_1[] =
{
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 25),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 25),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Skiploom_1[] =
{
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Jumpluff_1[] =
{
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 25),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 25),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_FAMILY_HOPPIP

#if P_FAMILY_AIPOM
static const union AnimCmd sAnim_Aipom_1[] =
{
    ANIMCMD_FRAME(1, 35),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

#if P_GEN_4_CROSS_EVOS
static const union AnimCmd sAnim_Ambipom_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_END,
};
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_AIPOM

#if P_FAMILY_SUNKERN
static const union AnimCmd sAnim_Sunkern_1[] =
{
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Sunflora_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_FAMILY_SUNKERN

#if P_FAMILY_YANMA
static const union AnimCmd sAnim_Yanma_1[] =
{
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_END,
};

#if P_GEN_4_CROSS_EVOS
static const union AnimCmd sAnim_Yanmega_1[] =
{
    ANIMCMD_FRAME(1, 3),
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_FRAME(1, 3),
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_FRAME(1, 3),
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_FRAME(1, 3),
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_FRAME(1, 3),
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_FRAME(1, 3),
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_FRAME(1, 3),
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_FRAME(1, 3),
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_FRAME(1, 3),
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_FRAME(1, 3),
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_FRAME(1, 3),
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_FRAME(1, 3),
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_FRAME(1, 3),
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_END,
};
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_YANMA

#if P_FAMILY_WOOPER
static const union AnimCmd sAnim_Wooper_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Quagsire_1[] =
{
    ANIMCMD_FRAME(1, 32),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};

#if P_PALDEAN_FORMS
PLACEHOLDER_ANIM_SINGLE_FRAME(WooperPaldean);
PLACEHOLDER_ANIM_SINGLE_FRAME(Clodsire);
#endif //P_PALDEAN_FORMS
#endif //P_FAMILY_WOOPER

#if P_FAMILY_MURKROW
static const union AnimCmd sAnim_Murkrow_1[] =
{
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};

#if P_GEN_4_CROSS_EVOS
static const union AnimCmd sAnim_Honchkrow_1[] =
{
    ANIMCMD_FRAME(0, 21),
    ANIMCMD_FRAME(1, 45),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_MURKROW

#if P_FAMILY_MISDREAVUS
static const union AnimCmd sAnim_Misdreavus_1[] =
{
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

#if P_GEN_4_CROSS_EVOS
static const union AnimCmd sAnim_Mismagius_1[] =
{
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_MISDREAVUS

#if P_FAMILY_UNOWN
static const union AnimCmd sAnim_Unown_1[] =
{
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};
#endif //P_FAMILY_UNOWN

#if P_FAMILY_WOBBUFFET
#if P_GEN_3_CROSS_EVOS
static const union AnimCmd sAnim_Wynaut_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_GEN_3_CROSS_EVOS

static const union AnimCmd sAnim_Wobbuffet_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_FAMILY_WOBBUFFET

#if P_FAMILY_GIRAFARIG
static const union AnimCmd sAnim_Girafarig_1[] =
{
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_END,
};

#if P_GEN_9_CROSS_EVOS
PLACEHOLDER_ANIM_SINGLE_FRAME(Farigiraf);
#endif //P_GEN_9_CROSS_EVOS
#endif //P_FAMILY_GIRAFARIG

#if P_FAMILY_PINECO
static const union AnimCmd sAnim_Pineco_1[] =
{
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Forretress_1[] =
{
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_PINECO

#if P_FAMILY_DUNSPARCE
static const union AnimCmd sAnim_Dunsparce_1[] =
{
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

#if P_GEN_9_CROSS_EVOS
PLACEHOLDER_ANIM_SINGLE_FRAME(Dudunsparce);
#endif //P_GEN_9_CROSS_EVOS
#endif //P_FAMILY_DUNSPARCE

#if P_FAMILY_GLIGAR
static const union AnimCmd sAnim_Gligar_1[] =
{
    ANIMCMD_FRAME(1, 17),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

#if P_GEN_4_CROSS_EVOS
static const union AnimCmd sAnim_Gliscor_1[] =
{
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 40),
    ANIMCMD_END,
};
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_GLIGAR

#if P_FAMILY_SNUBBULL
static const union AnimCmd sAnim_Snubbull_1[] =
{
    ANIMCMD_FRAME(1, 32),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Granbull_1[] =
{
    ANIMCMD_FRAME(1, 35),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};
#endif //P_FAMILY_SNUBBULL

#if P_FAMILY_QWILFISH
static const union AnimCmd sAnim_Qwilfish_1[] =
{
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 50),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_END,
};

#if P_HISUIAN_FORMS
PLACEHOLDER_ANIM_SINGLE_FRAME(QwilfishHisuian);
PLACEHOLDER_ANIM_SINGLE_FRAME(Overqwil);
#endif //P_HISUIAN_FORMS
#endif //P_FAMILY_QWILFISH

#if P_FAMILY_SHUCKLE
static const union AnimCmd sAnim_Shuckle_1[] =
{
    ANIMCMD_FRAME(1, 50),
    ANIMCMD_FRAME(1, 50),
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_END,
};
#endif //P_FAMILY_SHUCKLE

#if P_FAMILY_HERACROSS
static const union AnimCmd sAnim_Heracross_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

#if P_MEGA_EVOLUTIONS
PLACEHOLDER_ANIM_SINGLE_FRAME(HeracrossMega);
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_HERACROSS

#if P_FAMILY_SNEASEL
static const union AnimCmd sAnim_Sneasel_1[] =
{
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_END,
};

#if P_GEN_4_CROSS_EVOS
static const union AnimCmd sAnim_Weavile_1[] =
{
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_GEN_4_CROSS_EVOS

#if P_HISUIAN_FORMS
PLACEHOLDER_ANIM_SINGLE_FRAME(SneaselHisuian);
PLACEHOLDER_ANIM_SINGLE_FRAME(Sneasler);
#endif //P_HISUIAN_FORMS
#endif //P_FAMILY_SNEASEL

#if P_FAMILY_TEDDIURSA
static const union AnimCmd sAnim_Teddiursa_1[] =
{
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Ursaring_1[] =
{
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};

#if P_GEN_8_CROSS_EVOS
PLACEHOLDER_ANIM_SINGLE_FRAME(Ursaluna);
PLACEHOLDER_ANIM_SINGLE_FRAME(UrsalunaBloodmoon);
#endif //P_GEN_8_CROSS_EVOS
#endif //P_FAMILY_TEDDIURSA

#if P_FAMILY_SLUGMA
static const union AnimCmd sAnim_Slugma_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Magcargo_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_SLUGMA

#if P_FAMILY_SWINUB
static const union AnimCmd sAnim_Swinub_1[] =
{
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Piloswine_1[] =
{
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

#if P_GEN_4_CROSS_EVOS
static const union AnimCmd sAnim_Mamoswine_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_END,
};
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_SWINUB

#if P_FAMILY_CORSOLA
static const union AnimCmd sAnim_Corsola_1[] =
{
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

#if P_GALARIAN_FORMS
PLACEHOLDER_ANIM_SINGLE_FRAME(CorsolaGalarian);
PLACEHOLDER_ANIM_SINGLE_FRAME(Cursola);
#endif //P_GALARIAN_FORMS
#endif //P_FAMILY_CORSOLA

#if P_FAMILY_REMORAID
static const union AnimCmd sAnim_Remoraid_1[] =
{
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Octillery_1[] =
{
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_REMORAID

#if P_FAMILY_DELIBIRD
static const union AnimCmd sAnim_Delibird_1[] =
{
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_FAMILY_DELIBIRD

#if P_FAMILY_MANTINE
#if P_GEN_4_CROSS_EVOS
static const union AnimCmd sAnim_Mantyke_1[] =
{
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 45),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};
#endif //P_GEN_4_CROSS_EVOS

static const union AnimCmd sAnim_Mantine_1[] =
{
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 40),
    ANIMCMD_END,
};
#endif //P_FAMILY_MANTINE

#if P_FAMILY_SKARMORY
static const union AnimCmd sAnim_Skarmory_1[] =
{
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};
#endif //P_FAMILY_SKARMORY

#if P_FAMILY_HOUNDOUR
static const union AnimCmd sAnim_Houndour_1[] =
{
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Houndoom_1[] =
{
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_END,
};

#if P_MEGA_EVOLUTIONS
PLACEHOLDER_ANIM_SINGLE_FRAME(HoundoomMega);
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_HOUNDOUR

#if P_FAMILY_PHANPY
static const union AnimCmd sAnim_Phanpy_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Donphan_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_PHANPY

#if P_FAMILY_STANTLER
static const union AnimCmd sAnim_Stantler_1[] =
{
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

#if P_GEN_8_CROSS_EVOS
PLACEHOLDER_ANIM_SINGLE_FRAME(Wyrdeer);
#endif //P_GEN_8_CROSS_EVOS
#endif //P_FAMILY_STANTLER

#if P_FAMILY_SMEARGLE
static const union AnimCmd sAnim_Smeargle_1[] =
{
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_SMEARGLE

#if P_FAMILY_MILTANK
static const union AnimCmd sAnim_Miltank_1[] =
{
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_END,
};
#endif //P_FAMILY_MILTANK

#if P_FAMILY_RAIKOU
static const union AnimCmd sAnim_Raikou_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 36),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_RAIKOU

#if P_FAMILY_ENTEI
static const union AnimCmd sAnim_Entei_1[] =
{
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};
#endif //P_FAMILY_ENTEI

#if P_FAMILY_SUICUNE
static const union AnimCmd sAnim_Suicune_1[] =
{
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};
#endif //P_FAMILY_SUICUNE

#if P_FAMILY_LARVITAR
static const union AnimCmd sAnim_Larvitar_1[] =
{
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Pupitar_1[] =
{
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Tyranitar_1[] =
{
    ANIMCMD_FRAME(1, 50),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

#if P_MEGA_EVOLUTIONS
PLACEHOLDER_ANIM_SINGLE_FRAME(TyranitarMega);
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_LARVITAR

#if P_FAMILY_LUGIA
static const union AnimCmd sAnim_Lugia_1[] =
{
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_LUGIA

#if P_FAMILY_HO_OH
static const union AnimCmd sAnim_HoOh_1[] =
{
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};
#endif //P_FAMILY_HO_OH

#if P_FAMILY_CELEBI
static const union AnimCmd sAnim_Celebi_1[] =
{
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_END,
};
#endif //P_FAMILY_CELEBI

#if P_FAMILY_TREECKO
static const union AnimCmd sAnim_Treecko_1[] =
{
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Grovyle_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 18),
    ANIMCMD_FRAME(0, 7),
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Sceptile_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 26),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

#if P_MEGA_EVOLUTIONS
PLACEHOLDER_ANIM_SINGLE_FRAME(SceptileMega);
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_TREECKO

#if P_FAMILY_TORCHIC
static const union AnimCmd sAnim_Torchic_1[] =
{
    ANIMCMD_FRAME(0, 7),
    ANIMCMD_FRAME(1, 4),
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_FRAME(1, 4),
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_FRAME(1, 4),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Combusken_1[] =
{
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Blaziken_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 7),
    ANIMCMD_FRAME(1, 7),
    ANIMCMD_FRAME(0, 7),
    ANIMCMD_END,
};

#if P_MEGA_EVOLUTIONS
PLACEHOLDER_ANIM_SINGLE_FRAME(BlazikenMega);
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_TORCHIC

#if P_FAMILY_MUDKIP
static const union AnimCmd sAnim_Mudkip_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 13),
    ANIMCMD_FRAME(0, 7),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Marshtomp_1[] =
{
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Swampert_1[] =
{
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 44),
    ANIMCMD_FRAME(0, 18),
    ANIMCMD_FRAME(1, 18),
    ANIMCMD_FRAME(0, 7),
    ANIMCMD_END,
};

#if P_MEGA_EVOLUTIONS
PLACEHOLDER_ANIM_SINGLE_FRAME(SwampertMega);
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_MUDKIP

#if P_FAMILY_POOCHYENA
static const union AnimCmd sAnim_Poochyena_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 44),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Mightyena_1[] =
{
    ANIMCMD_FRAME(0, 27),
    ANIMCMD_FRAME(1, 6),
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_FRAME(1, 6),
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_END,
};
#endif //P_FAMILY_POOCHYENA

#if P_FAMILY_ZIGZAGOON
static const union AnimCmd sAnim_Zigzagoon_1[] =
{
    ANIMCMD_FRAME(0, 27),
    ANIMCMD_FRAME(1, 6),
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_FRAME(1, 6),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Linoone_1[] =
{
    ANIMCMD_FRAME(0, 14),
    ANIMCMD_FRAME(1, 14),
    ANIMCMD_FRAME(0, 14),
    ANIMCMD_FRAME(1, 14),
    ANIMCMD_FRAME(0, 14),
    ANIMCMD_END,
};

#if P_GALARIAN_FORMS
PLACEHOLDER_ANIM_SINGLE_FRAME(ZigzagoonGalarian);
PLACEHOLDER_ANIM_SINGLE_FRAME(LinooneGalarian);
PLACEHOLDER_ANIM_SINGLE_FRAME(Obstagoon);
#endif //P_GALARIAN_FORMS
#endif //P_FAMILY_ZIGZAGOON

#if P_FAMILY_WURMPLE
static const union AnimCmd sAnim_Wurmple_1[] =
{
    ANIMCMD_FRAME(0, 22),
    ANIMCMD_FRAME(1, 35),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Silcoon_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Beautifly_1[] =
{
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Cascoon_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Dustox_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 1),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 1),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_FRAME(1, 3),
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_FRAME(1, 4),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};
#endif //P_FAMILY_WURMPLE

#if P_FAMILY_LOTAD
static const union AnimCmd sAnim_Lotad_1[] =
{
    ANIMCMD_FRAME(0, 22),
    ANIMCMD_FRAME(1, 55),
    ANIMCMD_FRAME(0, 22),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Lombre_1[] =
{
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 7),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Ludicolo_1[] =
{
    ANIMCMD_FRAME(0, 22),
    ANIMCMD_FRAME(1, 22),
    ANIMCMD_FRAME(0, 22),
    ANIMCMD_FRAME(1, 22),
    ANIMCMD_FRAME(0, 22),
    ANIMCMD_FRAME(1, 22),
    ANIMCMD_FRAME(0, 22),
    ANIMCMD_END,
};
#endif //P_FAMILY_LOTAD

#if P_FAMILY_SEEDOT
static const union AnimCmd sAnim_Seedot_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Nuzleaf_1[] =
{
    ANIMCMD_FRAME(0, 7),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 7),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 7),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 7),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 7),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Shiftry_1[] =
{
    ANIMCMD_FRAME(0, 7),
    ANIMCMD_FRAME(1, 35),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_SEEDOT

#if P_FAMILY_TAILLOW
static const union AnimCmd sAnim_Taillow_1[] =
{
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Swellow_1[] =
{
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 18),
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_END,
};
#endif //P_FAMILY_TAILLOW

#if P_FAMILY_WINGULL
static const union AnimCmd sAnim_Wingull_1[] =
{
    ANIMCMD_FRAME(0, 17),
    ANIMCMD_FRAME(1, 23),
    ANIMCMD_FRAME(0, 13),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Pelipper_1[] =
{
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};
#endif //P_FAMILY_WINGULL

#if P_FAMILY_RALTS
static const union AnimCmd sAnim_Ralts_1[] =
{
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Kirlia_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 39),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Gardevoir_1[] =
{
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};

#if P_MEGA_EVOLUTIONS
PLACEHOLDER_ANIM_SINGLE_FRAME(GardevoirMega);
#endif //P_MEGA_EVOLUTIONS

#if P_GEN_4_CROSS_EVOS
static const union AnimCmd sAnim_Gallade_1[] =
{
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};

#if P_MEGA_EVOLUTIONS
PLACEHOLDER_ANIM_SINGLE_FRAME(GalladeMega);
#endif //P_MEGA_EVOLUTIONS
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_RALTS

#if P_FAMILY_SURSKIT
static const union AnimCmd sAnim_Surskit_1[] =
{
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_FRAME(1, 18),
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_FRAME(1, 18),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Masquerain_1[] =
{
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_END,
};
#endif //P_FAMILY_SURSKIT

#if P_FAMILY_SHROOMISH
static const union AnimCmd sAnim_Shroomish_1[] =
{
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_FRAME(1, 6),
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_FRAME(1, 6),
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_FRAME(1, 6),
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_FRAME(1, 6),
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_FRAME(1, 6),
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Breloom_1[] =
{
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 7),
    ANIMCMD_END,
};
#endif //P_FAMILY_SHROOMISH

#if P_FAMILY_SLAKOTH
static const union AnimCmd sAnim_Slakoth_1[] =
{
    ANIMCMD_FRAME(0, 13),
    ANIMCMD_FRAME(1, 22),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 22),
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Vigoroth_1[] =
{
    ANIMCMD_FRAME(0, 13),
    ANIMCMD_FRAME(1, 7),
    ANIMCMD_FRAME(0, 13),
    ANIMCMD_FRAME(1, 7),
    ANIMCMD_FRAME(0, 13),
    ANIMCMD_FRAME(1, 7),
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Slaking_1[] =
{
    ANIMCMD_FRAME(0, 22),
    ANIMCMD_FRAME(1, 22),
    ANIMCMD_FRAME(0, 22),
    ANIMCMD_FRAME(1, 22),
    ANIMCMD_FRAME(0, 22),
    ANIMCMD_FRAME(1, 22),
    ANIMCMD_FRAME(0, 22),
    ANIMCMD_END,
};
#endif //P_FAMILY_SLAKOTH

#if P_FAMILY_NINCADA
static const union AnimCmd sAnim_Nincada_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 22),
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_FRAME(1, 33),
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Ninjask_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 1),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 1),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 1),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 1),
    ANIMCMD_FRAME(0, 33),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 1),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 1),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 1),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 1),
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Shedinja_1[] =
{
    ANIMCMD_FRAME(0, 33),
    ANIMCMD_FRAME(1, 33),
    ANIMCMD_FRAME(0, 33),
    ANIMCMD_FRAME(1, 33),
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_END,
};
#endif //P_FAMILY_NINCADA

#if P_FAMILY_WHISMUR
static const union AnimCmd sAnim_Whismur_1[] =
{
    ANIMCMD_FRAME(0, 9),
    ANIMCMD_FRAME(1, 9),
    ANIMCMD_FRAME(0, 9),
    ANIMCMD_FRAME(1, 9),
    ANIMCMD_FRAME(0, 33),
    ANIMCMD_FRAME(0, 9),
    ANIMCMD_FRAME(1, 9),
    ANIMCMD_FRAME(0, 9),
    ANIMCMD_FRAME(1, 9),
    ANIMCMD_FRAME(0, 9),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Loudred_1[] =
{
    ANIMCMD_FRAME(0, 9),
    ANIMCMD_FRAME(1, 9),
    ANIMCMD_FRAME(0, 9),
    ANIMCMD_FRAME(1, 9),
    ANIMCMD_FRAME(0, 33),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Exploud_1[] =
{
    ANIMCMD_FRAME(0, 9),
    ANIMCMD_FRAME(1, 44),
    ANIMCMD_FRAME(0, 9),
    ANIMCMD_END,
};
#endif //P_FAMILY_WHISMUR

#if P_FAMILY_MAKUHITA
static const union AnimCmd sAnim_Makuhita_1[] =
{
    ANIMCMD_FRAME(0, 7),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 7),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 7),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 7),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 22),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Hariyama_1[] =
{
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(1, 16),
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_END,
};
#endif //P_FAMILY_MAKUHITA

#if P_FAMILY_NOSEPASS
static const union AnimCmd sAnim_Nosepass_1[] =
{
    ANIMCMD_FRAME(0, 27),
    ANIMCMD_FRAME(1, 27),
    ANIMCMD_FRAME(0, 27),
    ANIMCMD_FRAME(1, 27),
    ANIMCMD_FRAME(0, 27),
    ANIMCMD_FRAME(1, 27),
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_END,
};

#if P_GEN_4_CROSS_EVOS
static const union AnimCmd sAnim_Probopass_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_NOSEPASS

#if P_FAMILY_SKITTY
static const union AnimCmd sAnim_Skitty_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 35),
    ANIMCMD_FRAME(0, 9),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Delcatty_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 46),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_SKITTY

#if P_FAMILY_SABLEYE
static const union AnimCmd sAnim_Sableye_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

#if P_MEGA_EVOLUTIONS
PLACEHOLDER_ANIM_SINGLE_FRAME(SableyeMega);
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_SABLEYE

#if P_FAMILY_MAWILE
static const union AnimCmd sAnim_Mawile_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

#if P_MEGA_EVOLUTIONS
PLACEHOLDER_ANIM_SINGLE_FRAME(MawileMega);
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_MAWILE

#if P_FAMILY_ARON
static const union AnimCmd sAnim_Aron_1[] =
{
    ANIMCMD_FRAME(0, 33),
    ANIMCMD_FRAME(1, 44),
    ANIMCMD_FRAME(0, 33),
    ANIMCMD_FRAME(1, 33),
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Lairon_1[] =
{
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 29),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 29),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Aggron_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 44),
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_END,
};

#if P_MEGA_EVOLUTIONS
PLACEHOLDER_ANIM_SINGLE_FRAME(AggronMega);
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_ARON

#if P_FAMILY_MEDITITE
static const union AnimCmd sAnim_Meditite_1[] =
{
    ANIMCMD_FRAME(0, 22),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 22),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Medicham_1[] =
{
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_FRAME(1, 11),
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_FRAME(1, 11),
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_FRAME(1, 11),
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_END,
};

#if P_MEGA_EVOLUTIONS
PLACEHOLDER_ANIM_SINGLE_FRAME(MedichamMega);
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_MEDITITE

#if P_FAMILY_ELECTRIKE
static const union AnimCmd sAnim_Electrike_1[] =
{
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 17),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Manectric_1[] =
{
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 33),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_END,
};

#if P_MEGA_EVOLUTIONS
PLACEHOLDER_ANIM_SINGLE_FRAME(ManectricMega);
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_ELECTRIKE

#if P_FAMILY_PLUSLE
static const union AnimCmd sAnim_Plusle_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_PLUSLE

#if P_FAMILY_MINUN
static const union AnimCmd sAnim_Minun_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_MINUN

#if P_FAMILY_VOLBEAT_ILLUMISE
static const union AnimCmd sAnim_Volbeat_1[] =
{
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_FRAME(1, 11),
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_FRAME(1, 11),
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_FRAME(1, 11),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Illumise_1[] =
{
    ANIMCMD_FRAME(0, 22),
    ANIMCMD_FRAME(1, 22),
    ANIMCMD_FRAME(0, 22),
    ANIMCMD_FRAME(1, 22),
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_END,
};
#endif //P_FAMILY_VOLBEAT_ILLUMISE

#if P_FAMILY_ROSELIA
#if P_GEN_4_CROSS_EVOS
static const union AnimCmd sAnim_Budew_1[] =
{
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};
#endif //P_GEN_4_CROSS_EVOS

static const union AnimCmd sAnim_Roselia_1[] =
{
    ANIMCMD_FRAME(0, 18),
    ANIMCMD_FRAME(1, 44),
    ANIMCMD_FRAME(0, 22),
    ANIMCMD_END,
};

#if P_GEN_4_CROSS_EVOS
static const union AnimCmd sAnim_Roserade_1[] =
{
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_ROSELIA

#if P_FAMILY_GULPIN
static const union AnimCmd sAnim_Gulpin_1[] =
{
    ANIMCMD_FRAME(0, 14),
    ANIMCMD_FRAME(1, 14),
    ANIMCMD_FRAME(0, 14),
    ANIMCMD_FRAME(1, 14),
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Swalot_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_END,
};
#endif //P_FAMILY_GULPIN

#if P_FAMILY_CARVANHA
static const union AnimCmd sAnim_Carvanha_1[] =
{
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_FRAME(1, 6),
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_FRAME(1, 6),
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_FRAME(1, 6),
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_FRAME(1, 6),
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Sharpedo_1[] =
{
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_FRAME(1, 6),
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_FRAME(1, 6),
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_FRAME(1, 6),
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_FRAME(1, 6),
    ANIMCMD_FRAME(0, 22),
    ANIMCMD_END,
};

#if P_MEGA_EVOLUTIONS
PLACEHOLDER_ANIM_SINGLE_FRAME(SharpedoMega);
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_CARVANHA

#if P_FAMILY_WAILMER
static const union AnimCmd sAnim_Wailmer_1[] =
{
    ANIMCMD_FRAME(0, 22),
    ANIMCMD_FRAME(1, 22),
    ANIMCMD_FRAME(0, 22),
    ANIMCMD_FRAME(1, 22),
    ANIMCMD_FRAME(0, 22),
    ANIMCMD_FRAME(1, 22),
    ANIMCMD_FRAME(0, 22),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Wailord_1[] =
{
    ANIMCMD_FRAME(0, 26),
    ANIMCMD_FRAME(1, 48),
    ANIMCMD_FRAME(0, 33),
    ANIMCMD_END,
};
#endif //P_FAMILY_WAILMER

#if P_FAMILY_NUMEL
static const union AnimCmd sAnim_Numel_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 40),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Camerupt_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

#if P_MEGA_EVOLUTIONS
PLACEHOLDER_ANIM_SINGLE_FRAME(CameruptMega);
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_NUMEL

#if P_FAMILY_TORKOAL
static const union AnimCmd sAnim_Torkoal_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_FAMILY_TORKOAL

#if P_FAMILY_SPOINK
static const union AnimCmd sAnim_Spoink_1[] =
{
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Grumpig_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_FAMILY_SPOINK

#if P_FAMILY_SPINDA
static const union AnimCmd sAnim_Spinda_1[] =
{
    ANIMCMD_FRAME(0, 17),
    ANIMCMD_FRAME(1, 23),
    ANIMCMD_FRAME(0, 17),
    ANIMCMD_FRAME(1, 23),
    ANIMCMD_FRAME(0, 13),
    ANIMCMD_END,
};
#endif //P_FAMILY_SPINDA

#if P_FAMILY_TRAPINCH
static const union AnimCmd sAnim_Trapinch_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Vibrava_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 50),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Flygon_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 50),
    ANIMCMD_END,
};
#endif //P_FAMILY_TRAPINCH

#if P_FAMILY_CACNEA
static const union AnimCmd sAnim_Cacnea_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Cacturne_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_FAMILY_CACNEA

#if P_FAMILY_SWABLU
static const union AnimCmd sAnim_Swablu_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Altaria_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

#if P_MEGA_EVOLUTIONS
PLACEHOLDER_ANIM_SINGLE_FRAME(AltariaMega);
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_SWABLU

#if P_FAMILY_ZANGOOSE
static const union AnimCmd sAnim_Zangoose_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 50),
    ANIMCMD_END,
};
#endif //P_FAMILY_ZANGOOSE

#if P_FAMILY_SEVIPER
static const union AnimCmd sAnim_Seviper_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 50),
    ANIMCMD_END,
};
#endif //P_FAMILY_SEVIPER

#if P_FAMILY_LUNATONE
static const union AnimCmd sAnim_Lunatone_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_FAMILY_LUNATONE

#if P_FAMILY_SOLROCK
static const union AnimCmd sAnim_Solrock_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_FAMILY_SOLROCK

#if P_FAMILY_BARBOACH
static const union AnimCmd sAnim_Barboach_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 50),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Whiscash_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_FAMILY_BARBOACH

#if P_FAMILY_CORPHISH
static const union AnimCmd sAnim_Corphish_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 50),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Crawdaunt_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_FAMILY_CORPHISH

#if P_FAMILY_BALTOY
static const union AnimCmd sAnim_Baltoy_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 50),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Claydol_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_FAMILY_BALTOY

#if P_FAMILY_LILEEP
static const union AnimCmd sAnim_Lileep_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Cradily_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_FAMILY_LILEEP

#if P_FAMILY_ANORITH
static const union AnimCmd sAnim_Anorith_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Armaldo_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_FAMILY_ANORITH

#if P_FAMILY_FEEBAS
static const union AnimCmd sAnim_Feebas_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Milotic_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_FAMILY_FEEBAS

#if P_FAMILY_CASTFORM
static const union AnimCmd sAnim_CastformNormal_1[] =
{
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 24),
    ANIMCMD_FRAME(0, 24),
    ANIMCMD_FRAME(1, 24),
    ANIMCMD_FRAME(0, 24),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_CastformSunny_1[] =
{
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_CastformRainy_1[] =
{
    ANIMCMD_FRAME(0, 22),
    ANIMCMD_FRAME(1, 22),
    ANIMCMD_FRAME(0, 22),
    ANIMCMD_FRAME(1, 22),
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_CastformSnowy_1[] =
{
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 29),
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_END,
};
#endif //P_FAMILY_CASTFORM

#if P_FAMILY_KECLEON
static const union AnimCmd sAnim_Kecleon_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 18),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_FAMILY_KECLEON

#if P_FAMILY_SHUPPET
static const union AnimCmd sAnim_Shuppet_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Banette_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

#if P_MEGA_EVOLUTIONS
PLACEHOLDER_ANIM_SINGLE_FRAME(BanetteMega);
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_SHUPPET

#if P_FAMILY_DUSKULL
static const union AnimCmd sAnim_Duskull_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Dusclops_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

#if P_GEN_4_CROSS_EVOS
static const union AnimCmd sAnim_Dusknoir_1[] =
{
    ANIMCMD_FRAME(1, 9),
    ANIMCMD_FRAME(0, 9),
    ANIMCMD_FRAME(1, 9),
    ANIMCMD_FRAME(0, 9),
    ANIMCMD_FRAME(1, 9),
    ANIMCMD_FRAME(0, 9),
    ANIMCMD_FRAME(1, 9),
    ANIMCMD_FRAME(0, 9),
    ANIMCMD_FRAME(1, 9),
    ANIMCMD_FRAME(0, 9),
    ANIMCMD_END,
};
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_DUSKULL

#if P_FAMILY_TROPIUS
static const union AnimCmd sAnim_Tropius_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_FAMILY_TROPIUS

#if P_FAMILY_CHIMECHO
#if P_GEN_4_CROSS_EVOS
static const union AnimCmd sAnim_Chingling_1[] =
{
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_GEN_4_CROSS_EVOS

static const union AnimCmd sAnim_Chimecho_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_FAMILY_CHIMECHO

#if P_FAMILY_ABSOL
static const union AnimCmd sAnim_Absol_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

#if P_MEGA_EVOLUTIONS
PLACEHOLDER_ANIM_SINGLE_FRAME(AbsolMega);
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_ABSOL

#if P_FAMILY_SNORUNT
static const union AnimCmd sAnim_Snorunt_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Glalie_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

#if P_MEGA_EVOLUTIONS
PLACEHOLDER_ANIM_SINGLE_FRAME(GlalieMega);
#endif //P_MEGA_EVOLUTIONS

#if P_GEN_4_CROSS_EVOS
static const union AnimCmd sAnim_Froslass_1[] =
{
    ANIMCMD_FRAME(1, 50),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_SNORUNT

#if P_FAMILY_SPHEAL
static const union AnimCmd sAnim_Spheal_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 43),
    ANIMCMD_FRAME(1, 60),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Sealeo_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Walrein_1[] =
{
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_FRAME(1, 6),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_FAMILY_SPHEAL

#if P_FAMILY_CLAMPERL
static const union AnimCmd sAnim_Clamperl_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Huntail_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Gorebyss_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_FAMILY_CLAMPERL

#if P_FAMILY_RELICANTH
static const union AnimCmd sAnim_Relicanth_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_FAMILY_RELICANTH

#if P_FAMILY_LUVDISC
static const union AnimCmd sAnim_Luvdisc_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_FAMILY_LUVDISC

#if P_FAMILY_BAGON
static const union AnimCmd sAnim_Bagon_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Shelgon_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Salamence_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

#if P_MEGA_EVOLUTIONS
PLACEHOLDER_ANIM_SINGLE_FRAME(SalamenceMega);
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_BAGON

#if P_FAMILY_BELDUM
static const union AnimCmd sAnim_Beldum_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Metang_1[] =
{
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Metagross_1[] =
{
    ANIMCMD_FRAME(0, 16),
    ANIMCMD_FRAME(1, 16),
    ANIMCMD_FRAME(0, 16),
    ANIMCMD_FRAME(1, 16),
    ANIMCMD_FRAME(0, 16),
    ANIMCMD_END,
};

#if P_MEGA_EVOLUTIONS
PLACEHOLDER_ANIM_SINGLE_FRAME(MetagrossMega);
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_BELDUM

#if P_FAMILY_REGIROCK
static const union AnimCmd sAnim_Regirock_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_REGIROCK

#if P_FAMILY_REGICE
static const union AnimCmd sAnim_Regice_1[] =
{
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 18),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_REGICE

#if P_FAMILY_REGISTEEL
static const union AnimCmd sAnim_Registeel_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_REGISTEEL

#if P_FAMILY_LATIAS
static const union AnimCmd sAnim_Latias_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

#if P_MEGA_EVOLUTIONS
PLACEHOLDER_ANIM_SINGLE_FRAME(LatiasMega);
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_LATIAS

#if P_FAMILY_LATIOS
static const union AnimCmd sAnim_Latios_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

#if P_MEGA_EVOLUTIONS
PLACEHOLDER_ANIM_SINGLE_FRAME(LatiosMega);
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_LATIOS

#if P_FAMILY_KYOGRE
static const union AnimCmd sAnim_Kyogre_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

#if P_PRIMAL_REVERSIONS
PLACEHOLDER_ANIM_SINGLE_FRAME(KyogrePrimal);
#endif //P_PRIMAL_REVERSIONS
#endif //P_FAMILY_KYOGRE

#if P_FAMILY_GROUDON
static const union AnimCmd sAnim_Groudon_1[] =
{
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

#if P_PRIMAL_REVERSIONS
PLACEHOLDER_ANIM_SINGLE_FRAME(GroudonPrimal);
#endif //P_PRIMAL_REVERSIONS
#endif //P_FAMILY_GROUDON

#if P_FAMILY_RAYQUAZA
static const union AnimCmd sAnim_Rayquaza_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 22),
    ANIMCMD_FRAME(1, 6),
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_END,
};

#if P_MEGA_EVOLUTIONS
PLACEHOLDER_ANIM_SINGLE_FRAME(RayquazaMega);
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_RAYQUAZA

#if P_FAMILY_JIRACHI
static const union AnimCmd sAnim_Jirachi_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_JIRACHI

#if P_FAMILY_DEOXYS
static const union AnimCmd sAnim_DeoxysNormal_1[] =
{
    ANIMCMD_FRAME(0, 16),
    ANIMCMD_FRAME(1, 16),
    ANIMCMD_FRAME(0, 26),
    ANIMCMD_FRAME(1, 16),
    ANIMCMD_FRAME(0, 16),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_DeoxysAttack_1[] =
{
    ANIMCMD_FRAME(0, 16),
    ANIMCMD_FRAME(1, 16),
    ANIMCMD_FRAME(0, 26),
    ANIMCMD_FRAME(1, 16),
    ANIMCMD_FRAME(0, 16),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_DeoxysDefense_1[] =
{
    ANIMCMD_FRAME(0, 16),
    ANIMCMD_FRAME(1, 16),
    ANIMCMD_FRAME(0, 26),
    ANIMCMD_FRAME(1, 16),
    ANIMCMD_FRAME(0, 16),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_DeoxysSpeed_1[] =
{
    ANIMCMD_FRAME(0, 16),
    ANIMCMD_FRAME(1, 16),
    ANIMCMD_FRAME(0, 26),
    ANIMCMD_FRAME(1, 16),
    ANIMCMD_FRAME(0, 16),
    ANIMCMD_END,
};
#endif //P_FAMILY_DEOXYS

#if P_FAMILY_TURTWIG
static const union AnimCmd sAnim_Turtwig_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Grotle_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 36),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Torterra_1[] =
{
    ANIMCMD_FRAME(1, 45),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_TURTWIG

#if P_FAMILY_CHIMCHAR
static const union AnimCmd sAnim_Chimchar_1[] =
{
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Monferno_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Infernape_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 36),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_CHIMCHAR

#if P_FAMILY_PIPLUP
static const union AnimCmd sAnim_Piplup_1[] =
{
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Prinplup_1[] =
{
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 50),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Empoleon_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 36),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_PIPLUP

#if P_FAMILY_STARLY
static const union AnimCmd sAnim_Starly_1[] =
{
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 35),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Staravia_1[] =
{
    ANIMCMD_FRAME(1, 32),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Staraptor_1[] =
{
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};
#endif //P_FAMILY_STARLY

#if P_FAMILY_BIDOOF
static const union AnimCmd sAnim_Bidoof_1[] =
{
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Bibarel_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_BIDOOF

#if P_FAMILY_KRICKETOT
static const union AnimCmd sAnim_Kricketot_1[] =
{
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Kricketune_1[] =
{
    ANIMCMD_FRAME(0, 27),
    ANIMCMD_FRAME(1, 27),
    ANIMCMD_FRAME(0, 27),
    ANIMCMD_FRAME(1, 27),
    ANIMCMD_FRAME(0, 27),
    ANIMCMD_FRAME(1, 27),
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_END,
};
#endif //P_FAMILY_KRICKETOT

#if P_FAMILY_SHINX
static const union AnimCmd sAnim_Shinx_1[] =
{
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Luxio_1[] =
{
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Luxray_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_FAMILY_SHINX

#if P_FAMILY_CRANIDOS
static const union AnimCmd sAnim_Cranidos_1[] =
{
    ANIMCMD_FRAME(1, 32),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Rampardos_1[] =
{
    ANIMCMD_FRAME(0, 50),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};
#endif //P_FAMILY_CRANIDOS

#if P_FAMILY_SHIELDON
static const union AnimCmd sAnim_Shieldon_1[] =
{
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Bastiodon_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_END,
};
#endif //P_FAMILY_SHIELDON

#if P_FAMILY_BURMY
static const union AnimCmd sAnim_Burmy_1[] =
{
    ANIMCMD_FRAME(1, 32),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Wormadam_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Mothim_1[] =
{
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_FRAME(1, 4),
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_FRAME(1, 6),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 25),
    ANIMCMD_FRAME(1, 6),
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_FRAME(1, 4),
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};
#endif //P_FAMILY_BURMY

#if P_FAMILY_COMBEE
static const union AnimCmd sAnim_Combee_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Vespiquen_1[] =
{
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_END,
};
#endif //P_FAMILY_COMBEE

#if P_FAMILY_PACHIRISU
static const union AnimCmd sAnim_Pachirisu_1[] =
{
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 50),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};
#endif //P_FAMILY_PACHIRISU

#if P_FAMILY_BUIZEL
static const union AnimCmd sAnim_Buizel_1[] =
{
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 45),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Floatzel_1[] =
{
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 28),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};
#endif //P_FAMILY_BUIZEL

#if P_FAMILY_CHERUBI
static const union AnimCmd sAnim_Cherubi_1[] =
{
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 50),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_CherrimOvercast_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_CherrimSunshine_1[] =
{
    ANIMCMD_FRAME(1, 6),
    ANIMCMD_FRAME(0, 28),
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 28),
    ANIMCMD_FRAME(1, 7),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_END,
};
#endif //P_FAMILY_CHERUBI

#if P_FAMILY_SHELLOS
static const union AnimCmd sAnim_Shellos_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 36),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Gastrodon_1[] =
{
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_FAMILY_SHELLOS

#if P_FAMILY_DRIFLOON
static const union AnimCmd sAnim_Drifloon_1[] =
{
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 25),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 25),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Drifblim_1[] =
{
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 25),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 25),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_FAMILY_DRIFLOON

#if P_FAMILY_BUNEARY
static const union AnimCmd sAnim_Buneary_1[] =
{
    ANIMCMD_FRAME(1, 35),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Lopunny_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

#if P_MEGA_EVOLUTIONS
PLACEHOLDER_ANIM_SINGLE_FRAME(LopunnyMega);
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_BUNEARY

#if P_FAMILY_GLAMEOW
static const union AnimCmd sAnim_Glameow_1[] =
{
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 45),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Purugly_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 50),
    ANIMCMD_END,
};
#endif //P_FAMILY_GLAMEOW

#if P_FAMILY_STUNKY
static const union AnimCmd sAnim_Stunky_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Skuntank_1[] =
{
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};
#endif //P_FAMILY_STUNKY

#if P_FAMILY_BRONZOR
static const union AnimCmd sAnim_Bronzor_1[] =
{
    ANIMCMD_FRAME(1, 9),
    ANIMCMD_FRAME(0, 9),
    ANIMCMD_FRAME(1, 9),
    ANIMCMD_FRAME(0, 9),
    ANIMCMD_FRAME(1, 9),
    ANIMCMD_FRAME(0, 9),
    ANIMCMD_FRAME(1, 9),
    ANIMCMD_FRAME(0, 9),
    ANIMCMD_FRAME(1, 9),
    ANIMCMD_FRAME(0, 9),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Bronzong_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_BRONZOR

#if P_FAMILY_CHATOT
static const union AnimCmd sAnim_Chatot_1[] =
{
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};
#endif //P_FAMILY_CHATOT

#if P_FAMILY_SPIRITOMB
static const union AnimCmd sAnim_Spiritomb_1[] =
{
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_SPIRITOMB

#if P_FAMILY_GIBLE
static const union AnimCmd sAnim_Gible_1[] =
{
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Gabite_1[] =
{
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Garchomp_1[] =
{
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 35),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

#if P_MEGA_EVOLUTIONS
PLACEHOLDER_ANIM_SINGLE_FRAME(GarchompMega);
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_GIBLE

#if P_FAMILY_RIOLU
static const union AnimCmd sAnim_Riolu_1[] =
{
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_FRAME(1, 50),
    ANIMCMD_FRAME(1, 28),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Lucario_1[] =
{
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};

#if P_MEGA_EVOLUTIONS
PLACEHOLDER_ANIM_SINGLE_FRAME(LucarioMega);
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_RIOLU

#if P_FAMILY_HIPPOPOTAS
static const union AnimCmd sAnim_Hippopotas_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 36),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Hippowdon_1[] =
{
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};
#endif //P_FAMILY_HIPPOPOTAS

#if P_FAMILY_SKORUPI
static const union AnimCmd sAnim_Skorupi_1[] =
{
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Drapion_1[] =
{
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};
#endif //P_FAMILY_SKORUPI

#if P_FAMILY_CROAGUNK
static const union AnimCmd sAnim_Croagunk_1[] =
{
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_FRAME(1, 50),
    ANIMCMD_FRAME(1, 28),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Toxicroak_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_CROAGUNK

#if P_FAMILY_CARNIVINE
static const union AnimCmd sAnim_Carnivine_1[] =
{
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};
#endif //P_FAMILY_CARNIVINE

#if P_FAMILY_FINNEON
static const union AnimCmd sAnim_Finneon_1[] =
{
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Lumineon_1[] =
{
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_END,
};
#endif //P_FAMILY_FINNEON

#if P_FAMILY_SNOVER
static const union AnimCmd sAnim_Snover_1[] =
{
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Abomasnow_1[] =
{
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 44),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};

#if P_MEGA_EVOLUTIONS
PLACEHOLDER_ANIM_SINGLE_FRAME(AbomasnowMega);
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_SNOVER

#if P_FAMILY_ROTOM
static const union AnimCmd sAnim_Rotom_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_RotomHeat_1[] =
{
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_RotomWash_1[] =
{
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_RotomFrost_1[] =
{
    ANIMCMD_FRAME(1, 50),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_RotomFan_1[] =
{
    ANIMCMD_FRAME(1, 3),
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_FRAME(1, 3),
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_FRAME(1, 3),
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_FRAME(1, 3),
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_FRAME(1, 3),
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_FRAME(1, 3),
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_FRAME(1, 3),
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_FRAME(1, 3),
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_FRAME(1, 3),
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_FRAME(1, 3),
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_FRAME(1, 3),
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_FRAME(1, 3),
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_FRAME(1, 3),
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_RotomMow_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_FAMILY_ROTOM

#if P_FAMILY_UXIE
static const union AnimCmd sAnim_Uxie_1[] =
{
    ANIMCMD_FRAME(1, 50),
    ANIMCMD_FRAME(1, 50),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_UXIE

#if P_FAMILY_MESPRIT
static const union AnimCmd sAnim_Mesprit_1[] =
{
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_FAMILY_MESPRIT

#if P_FAMILY_AZELF
static const union AnimCmd sAnim_Azelf_1[] =
{
    ANIMCMD_FRAME(1, 50),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_AZELF

#if P_FAMILY_DIALGA
static const union AnimCmd sAnim_Dialga_1[] =
{
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

PLACEHOLDER_ANIM_SINGLE_FRAME(DialgaOrigin);
#endif //P_FAMILY_DIALGA

#if P_FAMILY_PALKIA
static const union AnimCmd sAnim_Palkia_1[] =
{
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

PLACEHOLDER_ANIM_SINGLE_FRAME(PalkiaOrigin);
#endif //P_FAMILY_PALKIA

#if P_FAMILY_HEATRAN
static const union AnimCmd sAnim_Heatran_1[] =
{
    ANIMCMD_FRAME(1, 50),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_HEATRAN

#if P_FAMILY_REGIGIGAS
static const union AnimCmd sAnim_Regigigas_1[] =
{
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};
#endif //P_FAMILY_REGIGIGAS

#if P_FAMILY_GIRATINA
static const union AnimCmd sAnim_GiratinaAltered_1[] =
{
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 45),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_GiratinaOrigin_1[] =
{
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_GIRATINA

#if P_FAMILY_CRESSELIA
static const union AnimCmd sAnim_Cresselia_1[] =
{
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_FAMILY_CRESSELIA

#if P_FAMILY_MANAPHY
static const union AnimCmd sAnim_Phione_1[] =
{
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Manaphy_1[] =
{
    ANIMCMD_FRAME(1, 50),
    ANIMCMD_FRAME(1, 50),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_MANAPHY

#if P_FAMILY_DARKRAI
static const union AnimCmd sAnim_Darkrai_1[] =
{
    ANIMCMD_FRAME(1, 50),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_DARKRAI

#if P_FAMILY_SHAYMIN
static const union AnimCmd sAnim_ShayminLand_1[] =
{
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_ShayminSky_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 36),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_SHAYMIN

#if P_FAMILY_ARCEUS
static const union AnimCmd sAnim_Arceus_1[] =
{
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 45),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_FAMILY_ARCEUS

#if P_FAMILY_VICTINI
static const union AnimCmd sAnim_Victini_1[] =
{
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 46),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_VICTINI

#if P_FAMILY_SNIVY
static const union AnimCmd sAnim_Snivy_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 36),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Servine_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 50),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Serperior_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_SNIVY

#if P_FAMILY_TEPIG
static const union AnimCmd sAnim_Tepig_1[] =
{
    ANIMCMD_FRAME(0, 27),
    ANIMCMD_FRAME(1, 6),
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_FRAME(1, 6),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Pignite_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 36),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Emboar_1[] =
{
    ANIMCMD_FRAME(1, 4),
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_FRAME(1, 4),
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_FRAME(1, 4),
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_FRAME(1, 4),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 4),
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_FRAME(1, 4),
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_FRAME(1, 4),
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_FRAME(1, 4),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 4),
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_FRAME(1, 4),
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_FRAME(1, 4),
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_END,
};
#endif //P_FAMILY_TEPIG

#if P_FAMILY_OSHAWOTT
static const union AnimCmd sAnim_Oshawott_1[] =
{
    ANIMCMD_FRAME(0, 13),
    ANIMCMD_FRAME(1, 7),
    ANIMCMD_FRAME(0, 13),
    ANIMCMD_FRAME(1, 7),
    ANIMCMD_FRAME(0, 13),
    ANIMCMD_FRAME(1, 7),
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Dewott_1[] =
{
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 35),
    ANIMCMD_FRAME(0, 28),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Samurott_1[] =
{
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

#if P_HISUIAN_FORMS
PLACEHOLDER_ANIM_SINGLE_FRAME(SamurottHisuian);
#endif //P_HISUIAN_FORMS
#endif //P_FAMILY_OSHAWOTT

#if P_FAMILY_PATRAT
static const union AnimCmd sAnim_Patrat_1[] =
{
    ANIMCMD_FRAME(1, 32),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Watchog_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0 , 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 50),
    ANIMCMD_END,
};
#endif //P_FAMILY_PATRAT

#if P_FAMILY_LILLIPUP
static const union AnimCmd sAnim_Lillipup_1[] =
{
    ANIMCMD_FRAME(0, 13),
    ANIMCMD_FRAME(1, 7),
    ANIMCMD_FRAME(0, 13),
    ANIMCMD_FRAME(1, 7),
    ANIMCMD_FRAME(0, 13),
    ANIMCMD_FRAME(1, 7),
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Herdier_1[] =
{
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Stoutland_1[] =
{
    ANIMCMD_FRAME(0, 27),
    ANIMCMD_FRAME(1, 6),
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_FRAME(1, 6),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};
#endif //P_FAMILY_LILLIPUP

#if P_FAMILY_PURRLOIN
static const union AnimCmd sAnim_Purrloin_1[] =
{
    ANIMCMD_FRAME(0, 9),
    ANIMCMD_FRAME(1, 54),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Liepard_1[] =
{
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 45),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_FAMILY_PURRLOIN

#if P_FAMILY_PANSAGE
static const union AnimCmd sAnim_Pansage_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 13),
    ANIMCMD_FRAME(0, 7),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Simisage_1[] =
{
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 45),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_FAMILY_PANSAGE

#if P_FAMILY_PANSEAR
static const union AnimCmd sAnim_Pansear_1[] =
{
    ANIMCMD_FRAME(1, 32),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Simisear_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_PANSEAR

#if P_FAMILY_PANPOUR
static const union AnimCmd sAnim_Panpour_1[] =
{
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 45),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Simipour_1[] =
{
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_FAMILY_PANPOUR

#if P_FAMILY_MUNNA
static const union AnimCmd sAnim_Munna_1[] =
{
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Musharna_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_FAMILY_MUNNA

#if P_FAMILY_PIDOVE
static const union AnimCmd sAnim_Pidove_1[] =
{
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 46),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Tranquill_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 36),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Unfezant_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};
#endif //P_FAMILY_PIDOVE

#if P_FAMILY_BLITZLE
static const union AnimCmd sAnim_Blitzle_1[] =
{
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Zebstrika_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_END,
};
#endif //P_FAMILY_BLITZLE

#if P_FAMILY_ROGGENROLA
static const union AnimCmd sAnim_Roggenrola_1[] =
{
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Boldore_1[] =
{
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Gigalith_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_ROGGENROLA

#if P_FAMILY_WOOBAT
static const union AnimCmd sAnim_Woobat_1[] =
{
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Swoobat_1[] =
{
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_FAMILY_WOOBAT

#if P_FAMILY_DRILBUR
static const union AnimCmd sAnim_Drilbur_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Excadrill_1[] =
{
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_DRILBUR

#if P_FAMILY_AUDINO
static const union AnimCmd sAnim_Audino_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 36),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

#if P_MEGA_EVOLUTIONS
PLACEHOLDER_ANIM_SINGLE_FRAME(AudinoMega);
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_AUDINO

#if P_FAMILY_TIMBURR
static const union AnimCmd sAnim_Timburr_1[] =
{
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Gurdurr_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 50),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Conkeldurr_1[] =
{
    ANIMCMD_FRAME(1, 45),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_TIMBURR

#if P_FAMILY_TYMPOLE
static const union AnimCmd sAnim_Tympole_1[] =
{
    ANIMCMD_FRAME(1, 35),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Palpitoad_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 13),
    ANIMCMD_FRAME(0, 7),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Seismitoad_1[] =
{
    ANIMCMD_FRAME(0, 13),
    ANIMCMD_FRAME(1, 7),
    ANIMCMD_FRAME(0, 13),
    ANIMCMD_FRAME(1, 7),
    ANIMCMD_FRAME(0, 13),
    ANIMCMD_FRAME(1, 7),
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_END,
};
#endif //P_FAMILY_TYMPOLE

#if P_FAMILY_THROH
static const union AnimCmd sAnim_Throh_1[] =
{
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};
#endif //P_FAMILY_THROH

#if P_FAMILY_SAWK
static const union AnimCmd sAnim_Sawk_1[] =
{
    ANIMCMD_FRAME(1, 45),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_SAWK

#if P_FAMILY_SEWADDLE
static const union AnimCmd sAnim_Sewaddle_1[] =
{
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Swadloon_1[] =
{
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Leavanny_1[] =
{
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 45),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_FAMILY_SEWADDLE

#if P_FAMILY_VENIPEDE
static const union AnimCmd sAnim_Venipede_1[] =
{
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Whirlipede_1[] =
{
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Scolipede_1[] =
{
    ANIMCMD_FRAME(1, 45),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};
#endif //P_FAMILY_VENIPEDE

#if P_FAMILY_COTTONEE
static const union AnimCmd sAnim_Cottonee_1[] =
{
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 50),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Whimsicott_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};
#endif //P_FAMILY_COTTONEE

#if P_FAMILY_PETILIL
static const union AnimCmd sAnim_Petilil_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Lilligant_1[] =
{
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

#if P_HISUIAN_FORMS
PLACEHOLDER_ANIM_SINGLE_FRAME(LilligantHisuian);
#endif //P_HISUIAN_FORMS
#endif //P_FAMILY_PETILIL

#if P_FAMILY_BASCULIN
static const union AnimCmd sAnim_Basculin_1[] =
{
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

#if P_HISUIAN_FORMS
PLACEHOLDER_ANIM_SINGLE_FRAME(Basculegion);
#endif //P_HISUIAN_FORMS
#endif //P_FAMILY_BASCULIN

#if P_FAMILY_SANDILE
static const union AnimCmd sAnim_Sandile_1[] =
{
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Krokorok_1[] =
{
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Krookodile_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_SANDILE

#if P_FAMILY_DARUMAKA
static const union AnimCmd sAnim_Darumaka_1[] =
{
    ANIMCMD_FRAME(1, 50),
    ANIMCMD_FRAME(1, 50),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_DarmanitanStandardMode_1[] =
{
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_DarmanitanZenMode_1[] =
{
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};

#if P_GALARIAN_FORMS
PLACEHOLDER_ANIM_SINGLE_FRAME(DarumakaGalarian);
PLACEHOLDER_ANIM_SINGLE_FRAME(DarmanitanGalarianStandardMode);
PLACEHOLDER_ANIM_SINGLE_FRAME(DarmanitanGalarianZenMode);
#endif //P_GALARIAN_FORMS
#endif //P_FAMILY_DARUMAKA

#if P_FAMILY_MARACTUS
static const union AnimCmd sAnim_Maractus_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_MARACTUS

#if P_FAMILY_DWEBBLE
static const union AnimCmd sAnim_Dwebble_1[] =
{
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 50),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Crustle_1[] =
{
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_FAMILY_DWEBBLE

#if P_FAMILY_SCRAGGY
static const union AnimCmd sAnim_Scraggy_1[] =
{
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 35),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Scrafty_1[] =
{
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_SCRAGGY

#if P_FAMILY_SIGILYPH
static const union AnimCmd sAnim_Sigilyph_1[] =
{
    ANIMCMD_FRAME(1, 7),
    ANIMCMD_FRAME(0, 7),
    ANIMCMD_FRAME(1, 7),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 7),
    ANIMCMD_FRAME(0, 7),
    ANIMCMD_FRAME(1, 7),
    ANIMCMD_FRAME(0, 7),
    ANIMCMD_END,
};
#endif //P_FAMILY_SIGILYPH

#if P_FAMILY_YAMASK
static const union AnimCmd sAnim_Yamask_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Cofagrigus_1[] =
{
    ANIMCMD_FRAME(1, 50),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

#if P_GALARIAN_FORMS
PLACEHOLDER_ANIM_SINGLE_FRAME(YamaskGalarian);
PLACEHOLDER_ANIM_SINGLE_FRAME(Runerigus);
#endif //P_GALARIAN_FORMS
#endif //P_FAMILY_YAMASK

#if P_FAMILY_TIRTOUGA
static const union AnimCmd sAnim_Tirtouga_1[] =
{
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Carracosta_1[] =
{
    ANIMCMD_FRAME(1, 35),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_TIRTOUGA

#if P_FAMILY_ARCHEN
static const union AnimCmd sAnim_Archen_1[] =
{
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 46),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Archeops_1[] =
{
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_FAMILY_ARCHEN

#if P_FAMILY_TRUBBISH
static const union AnimCmd sAnim_Trubbish_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Garbodor_1[] =
{
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 35),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

#if P_GIGANTAMAX_FORMS
PLACEHOLDER_ANIM_SINGLE_FRAME(GarbodorGigantamax);
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_TRUBBISH

#if P_FAMILY_ZORUA
static const union AnimCmd sAnim_Zorua_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Zoroark_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 18),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

#if P_HISUIAN_FORMS
PLACEHOLDER_ANIM_SINGLE_FRAME(ZoruaHisuian);
PLACEHOLDER_ANIM_SINGLE_FRAME(ZoroarkHisuian);
#endif //P_HISUIAN_FORMS
#endif //P_FAMILY_ZORUA

#if P_FAMILY_MINCCINO
static const union AnimCmd sAnim_Minccino_1[] =
{
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Cinccino_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_FAMILY_MINCCINO

#if P_FAMILY_GOTHITA
static const union AnimCmd sAnim_Gothita_1[] =
{
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Gothorita_1[] =
{
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Gothitelle_1[] =
{
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_GOTHITA

#if P_FAMILY_SOLOSIS
static const union AnimCmd sAnim_Solosis_1[] =
{
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 45),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Duosion_1[] =
{
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Reuniclus_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_SOLOSIS

#if P_FAMILY_DUCKLETT
static const union AnimCmd sAnim_Ducklett_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 50),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Swanna_1[] =
{
    ANIMCMD_FRAME(1, 32),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};
#endif //P_FAMILY_DUCKLETT

#if P_FAMILY_VANILLITE
static const union AnimCmd sAnim_Vanillite_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Vanillish_1[] =
{
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 45),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Vanilluxe_1[] =
{
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 45),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_FAMILY_VANILLITE

#if P_FAMILY_DEERLING
static const union AnimCmd sAnim_Deerling_1[] =
{
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Sawsbuck_1[] =
{
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_DEERLING

#if P_FAMILY_EMOLGA
static const union AnimCmd sAnim_Emolga_1[] =
{
    ANIMCMD_FRAME(0, 21),
    ANIMCMD_FRAME(1, 45),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_EMOLGA

#if P_FAMILY_KARRABLAST
static const union AnimCmd sAnim_Karrablast_1[] =
{
    ANIMCMD_FRAME(1, 32),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Escavalier_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_END,
};
#endif //P_FAMILY_KARRABLAST

#if P_FAMILY_FOONGUS
static const union AnimCmd sAnim_Foongus_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Amoonguss_1[] =
{
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_END,
};
#endif //P_FAMILY_FOONGUS

#if P_FAMILY_FRILLISH
static const union AnimCmd sAnim_Frillish_1[] =
{
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Jellicent_1[] =
{
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_END,
};
#endif //P_FAMILY_FRILLISH

#if P_FAMILY_ALOMOMOLA
static const union AnimCmd sAnim_Alomomola_1[] =
{
    ANIMCMD_FRAME(1, 50),
    ANIMCMD_FRAME(1, 50),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_ALOMOMOLA

#if P_FAMILY_JOLTIK
static const union AnimCmd sAnim_Joltik_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Galvantula_1[] =
{
    ANIMCMD_FRAME(1, 6),
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_FRAME(1, 6),
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_FRAME(1, 6),
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_FRAME(1, 6),
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_END,
};
#endif //P_FAMILY_JOLTIK

#if P_FAMILY_FERROSEED
static const union AnimCmd sAnim_Ferroseed_1[] =
{
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 35),
    ANIMCMD_FRAME(0, 28),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Ferrothorn_1[] =
{
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_FERROSEED

#if P_FAMILY_KLINK
static const union AnimCmd sAnim_Klink_1[] =
{
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Klang_1[] =
{
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Klinklang_1[] =
{
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};
#endif //P_FAMILY_KLINK

#if P_FAMILY_TYNAMO
static const union AnimCmd sAnim_Tynamo_1[] =
{
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 25),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Eelektrik_1[] =
{
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Eelektross_1[] =
{
    ANIMCMD_FRAME(1, 27),
    ANIMCMD_FRAME(0, 27),
    ANIMCMD_FRAME(1, 24),
    ANIMCMD_FRAME(0, 25),
    ANIMCMD_FRAME(1, 27),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};
#endif //P_FAMILY_TYNAMO

#if P_FAMILY_ELGYEM
static const union AnimCmd sAnim_Elgyem_1[] =
{
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Beheeyem_1[] =
{
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};
#endif //P_FAMILY_ELGYEM

#if P_FAMILY_LITWICK
static const union AnimCmd sAnim_Litwick_1[] =
{
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Lampent_1[] =
{
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 25),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 25),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Chandelure_1[] =
{
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};
#endif //P_FAMILY_LITWICK

#if P_FAMILY_AXEW
static const union AnimCmd sAnim_Axew_1[] =
{
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Fraxure_1[] =
{
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Haxorus_1[] =
{
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_AXEW

#if P_FAMILY_CUBCHOO
static const union AnimCmd sAnim_Cubchoo_1[] =
{
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Beartic_1[] =
{
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_CUBCHOO

#if P_FAMILY_CRYOGONAL
static const union AnimCmd sAnim_Cryogonal_1[] =
{
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 48),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_CRYOGONAL

#if P_FAMILY_SHELMET
static const union AnimCmd sAnim_Shelmet_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Accelgor_1[] =
{
    ANIMCMD_FRAME(1, 35),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};
#endif //P_FAMILY_SHELMET

#if P_FAMILY_STUNFISK
static const union AnimCmd sAnim_Stunfisk_1[] =
{
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};

#if P_GALARIAN_FORMS
PLACEHOLDER_ANIM_SINGLE_FRAME(StunfiskGalarian);
#endif //P_GALARIAN_FORMS
#endif //P_FAMILY_STUNFISK

#if P_FAMILY_MIENFOO
static const union AnimCmd sAnim_Mienfoo_1[] =
{
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Mienshao_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 50),
    ANIMCMD_END,
};
#endif //P_FAMILY_MIENFOO

#if P_FAMILY_DRUDDIGON
static const union AnimCmd sAnim_Druddigon_1[] =
{
    ANIMCMD_FRAME(0, 22),
    ANIMCMD_FRAME(1, 22),
    ANIMCMD_FRAME(0, 22),
    ANIMCMD_FRAME(1, 22),
    ANIMCMD_FRAME(0, 22),
    ANIMCMD_FRAME(1, 22),
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_END,
};
#endif //P_FAMILY_DRUDDIGON

#if P_FAMILY_GOLETT
static const union AnimCmd sAnim_Golett_1[] =
{
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 44),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Golurk_1[] =
{
    ANIMCMD_FRAME(1, 45),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_GOLETT

#if P_FAMILY_PAWNIARD
static const union AnimCmd sAnim_Pawniard_1[] =
{
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Bisharp_1[] =
{
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

#if P_GEN_9_CROSS_EVOS
PLACEHOLDER_ANIM_SINGLE_FRAME(Kingambit);
#endif //P_GEN_9_CROSS_EVOS
#endif //P_FAMILY_PAWNIARD

#if P_FAMILY_BOUFFALANT
static const union AnimCmd sAnim_Bouffalant_1[] =
{
    ANIMCMD_FRAME(0, 28),
    ANIMCMD_FRAME(1, 32),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_FAMILY_BOUFFALANT

#if P_FAMILY_RUFFLET
static const union AnimCmd sAnim_Rufflet_1[] =
{
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 35),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Braviary_1[] =
{
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

#if P_HISUIAN_FORMS
PLACEHOLDER_ANIM_SINGLE_FRAME(BraviaryHisuian);
#endif //P_HISUIAN_FORMS
#endif //P_FAMILY_RUFFLET

#if P_FAMILY_VULLABY
static const union AnimCmd sAnim_Vullaby_1[] =
{
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Mandibuzz_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 36),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_VULLABY

#if P_FAMILY_HEATMOR
static const union AnimCmd sAnim_Heatmor_1[] =
{
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};
#endif //P_FAMILY_HEATMOR

#if P_FAMILY_DURANT
static const union AnimCmd sAnim_Durant_1[] =
{
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_END,
};
#endif //P_FAMILY_DURANT

#if P_FAMILY_DEINO
static const union AnimCmd sAnim_Deino_1[] =
{
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Zweilous_1[] =
{
    ANIMCMD_FRAME(1, 32),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Hydreigon_1[] =
{
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_FAMILY_DEINO

#if P_FAMILY_LARVESTA
static const union AnimCmd sAnim_Larvesta_1[] =
{
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Volcarona_1[] =
{
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 25),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 25),
    ANIMCMD_END,
};
#endif //P_FAMILY_LARVESTA

#if P_FAMILY_COBALION
static const union AnimCmd sAnim_Cobalion_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 36),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_COBALION

#if P_FAMILY_TERRAKION
static const union AnimCmd sAnim_Terrakion_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_FAMILY_TERRAKION

#if P_FAMILY_VIRIZION
static const union AnimCmd sAnim_Virizion_1[] =
{
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};
#endif //P_FAMILY_VIRIZION

#if P_FAMILY_TORNADUS
static const union AnimCmd sAnim_TornadusIncarnate_1[] =
{
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_TornadusTherian_1[] =
{
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 35),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};
#endif //P_FAMILY_TORNADUS

#if P_FAMILY_THUNDURUS
static const union AnimCmd sAnim_ThundurusIncarnate_1[] =
{
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_ThundurusTherian_1[] =
{
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};
#endif //P_FAMILY_THUNDURUS

#if P_FAMILY_RESHIRAM
static const union AnimCmd sAnim_Reshiram_1[] =
{
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};
#endif //P_FAMILY_RESHIRAM

#if P_FAMILY_ZEKROM
static const union AnimCmd sAnim_Zekrom_1[] =
{
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};
#endif //P_FAMILY_ZEKROM

#if P_FAMILY_LANDORUS
static const union AnimCmd sAnim_LandorusIncarnate_1[] =
{
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_LandorusTherian_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_FAMILY_LANDORUS

#if P_FAMILY_KYUREM
static const union AnimCmd sAnim_Kyurem_1[] =
{
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

#if P_FUSION_FORMS
static const union AnimCmd sAnim_KyuremWhite_1[] =
{
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};
#endif //P_FUSION_FORMS

#if P_FUSION_FORMS
static const union AnimCmd sAnim_KyuremBlack_1[] =
{
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};
#endif //P_FUSION_FORMS
#endif //P_FAMILY_KYUREM

#if P_FAMILY_KELDEO
static const union AnimCmd sAnim_KeldeoOrdinary_1[] =
{
    ANIMCMD_FRAME(1, 32),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_KeldeoResolute_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 36),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_KELDEO

#if P_FAMILY_MELOETTA
static const union AnimCmd sAnim_MeloettaAria_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 45),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_MeloettaPirouette_1[] =
{
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_FAMILY_MELOETTA

#if P_FAMILY_GENESECT
static const union AnimCmd sAnim_Genesect_1[] =
{
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};
#endif //P_FAMILY_GENESECT

#if P_FAMILY_CHESPIN
static const union AnimCmd sAnim_Chespin_1[] =
{
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 24),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 24),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Quilladin_1[] =
{
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Chesnaught_1[] =
{
    ANIMCMD_FRAME(1, 50),
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_CHESPIN

#if P_FAMILY_FENNEKIN
static const union AnimCmd sAnim_Fennekin_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Braixen_1[] =
{
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 45),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Delphox_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_FAMILY_FENNEKIN

#if P_FAMILY_FROAKIE
static const union AnimCmd sAnim_Froakie_1[] =
{
    ANIMCMD_FRAME(0, 13),
    ANIMCMD_FRAME(1, 7),
    ANIMCMD_FRAME(0, 13),
    ANIMCMD_FRAME(1, 7),
    ANIMCMD_FRAME(0, 13),
    ANIMCMD_FRAME(1, 7),
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Frogadier_1[] =
{
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Greninja_1[] =
{
    ANIMCMD_FRAME(1, 32),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_GreninjaAsh_1[] =
{
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 35),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_FROAKIE

#if P_FAMILY_BUNNELBY
static const union AnimCmd sAnim_Bunnelby_1[] =
{
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Diggersby_1[] =
{
    ANIMCMD_FRAME(1, 35),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_BUNNELBY

#if P_FAMILY_FLETCHLING
static const union AnimCmd sAnim_Fletchling_1[] =
{
    ANIMCMD_FRAME(1, 7),
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_FRAME(1, 7),
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};
static const union AnimCmd sAnim_Fletchinder_1[] =
{
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Talonflame_1[] =
{
    ANIMCMD_FRAME(1, 55),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};
#endif //P_FAMILY_FLETCHLING

#if P_FAMILY_SCATTERBUG
static const union AnimCmd sAnim_Scatterbug_1[] =
{
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 35),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Spewpa_1[] =
{
    ANIMCMD_FRAME(0, 18),
    ANIMCMD_FRAME(1, 18),
    ANIMCMD_FRAME(0, 18),
    ANIMCMD_FRAME(1, 18),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Vivillon_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 50),
    ANIMCMD_END,
};
#endif //P_FAMILY_SCATTERBUG

#if P_FAMILY_LITLEO
static const union AnimCmd sAnim_Litleo_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Pyroar_1[] =
{
    ANIMCMD_FRAME(1, 45),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};
#endif //P_FAMILY_LITLEO

#if P_FAMILY_FLABEBE
static const union AnimCmd sAnim_Flabebe_1[] =
{
    ANIMCMD_FRAME(1, 27),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 23),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Floette_1[] =
{
    ANIMCMD_FRAME(0, 25),
    ANIMCMD_FRAME(1, 50),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Florges_1[] =
{
    ANIMCMD_FRAME(1, 45),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};
#endif //P_FAMILY_FLABEBE

#if P_FAMILY_SKIDDO
static const union AnimCmd sAnim_Skiddo_1[] =
{
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Gogoat_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 36),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_SKIDDO

#if P_FAMILY_PANCHAM
static const union AnimCmd sAnim_Pancham_1[] =
{
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Pangoro_1[] =
{
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_PANCHAM

#if P_FAMILY_FURFROU
static const union AnimCmd sAnim_Furfrou_1[] =
{
    ANIMCMD_FRAME(0, 27),
    ANIMCMD_FRAME(1, 6),
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_FRAME(1, 6),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};
#endif //P_FAMILY_FURFROU

#if P_FAMILY_ESPURR
static const union AnimCmd sAnim_Espurr_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 50),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Meowstic_1[] =
{
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 45),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_FAMILY_ESPURR

#if P_FAMILY_HONEDGE
static const union AnimCmd sAnim_Honedge_1[] =
{
    ANIMCMD_FRAME(1, 50),
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Doublade_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_AegislashShield_1[] =
{
    ANIMCMD_FRAME(0, 18),
    ANIMCMD_FRAME(1, 18),
    ANIMCMD_FRAME(0, 18),
    ANIMCMD_FRAME(1, 18),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_AegislashBlade_1[] =
{
    ANIMCMD_FRAME(0, 18),
    ANIMCMD_FRAME(1, 18),
    ANIMCMD_FRAME(0, 18),
    ANIMCMD_FRAME(1, 18),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_HONEDGE

#if P_FAMILY_SPRITZEE
static const union AnimCmd sAnim_Spritzee_1[] =
{
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 25),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 25),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Aromatisse_1[] =
{
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_END,
};
#endif //P_FAMILY_SPRITZEE

#if P_FAMILY_SWIRLIX
static const union AnimCmd sAnim_Swirlix_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Slurpuff_1[] =
{
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 35),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};
#endif //P_FAMILY_SWIRLIX

#if P_FAMILY_INKAY
static const union AnimCmd sAnim_Inkay_1[] =
{
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 25),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 25),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Malamar_1[] =
{
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};
#endif //P_FAMILY_INKAY

#if P_FAMILY_BINACLE
static const union AnimCmd sAnim_Binacle_1[] =
{
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Barbaracle_1[] =
{
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_FAMILY_BINACLE

#if P_FAMILY_SKRELP
static const union AnimCmd sAnim_Skrelp_1[] =
{
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Dragalge_1[] =
{
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};
#endif //P_FAMILY_SKRELP

#if P_FAMILY_CLAUNCHER
static const union AnimCmd sAnim_Clauncher_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Clawitzer_1[] =
{
    ANIMCMD_FRAME(1, 6),
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_FRAME(1, 6),
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_FRAME(1, 6),
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_FRAME(1, 6),
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_END,
};
#endif //P_FAMILY_CLAUNCHER

#if P_FAMILY_HELIOPTILE
static const union AnimCmd sAnim_Helioptile_1[] =
{
    ANIMCMD_FRAME(1, 50),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Heliolisk_1[] =
{
    ANIMCMD_FRAME(1, 50),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_END,
};
#endif //P_FAMILY_HELIOPTILE

#if P_FAMILY_TYRUNT
static const union AnimCmd sAnim_Tyrunt_1[] =
{
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Tyrantrum_1[] =
{
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};
#endif //P_FAMILY_TYRUNT

#if P_FAMILY_AMAURA
static const union AnimCmd sAnim_Amaura_1[] =
{
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 11),
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Aurorus_1[] =
{
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};
#endif //P_FAMILY_AMAURA

#if P_FAMILY_HAWLUCHA
static const union AnimCmd sAnim_Hawlucha_1[] =
{
    ANIMCMD_FRAME(0, 28),
    ANIMCMD_FRAME(1, 32),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_FAMILY_HAWLUCHA

#if P_FAMILY_DEDENNE
static const union AnimCmd sAnim_Dedenne_1[] =
{
    ANIMCMD_FRAME(1, 50),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_DEDENNE

#if P_FAMILY_CARBINK
static const union AnimCmd sAnim_Carbink_1[] =
{
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 25),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_CARBINK

#if P_FAMILY_GOOMY
static const union AnimCmd sAnim_Goomy_1[] =
{
    ANIMCMD_FRAME(0, 28),
    ANIMCMD_FRAME(1, 32),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Sliggoo_1[] =
{
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Goodra_1[] =
{
    ANIMCMD_FRAME(0, 18),
    ANIMCMD_FRAME(1, 18),
    ANIMCMD_FRAME(0, 18),
    ANIMCMD_FRAME(1, 18),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

#if P_HISUIAN_FORMS
PLACEHOLDER_ANIM_SINGLE_FRAME(SliggooHisuian);
PLACEHOLDER_ANIM_SINGLE_FRAME(GoodraHisuian);
#endif //P_HISUIAN_FORMS
#endif //P_FAMILY_GOOMY

#if P_FAMILY_KLEFKI
static const union AnimCmd sAnim_Klefki_1[] =
{
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 25),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_KLEFKI

#if P_FAMILY_PHANTUMP
static const union AnimCmd sAnim_Phantump_1[] =
{
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Trevenant_1[] =
{
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_FAMILY_PHANTUMP

#if P_FAMILY_PUMPKABOO
static const union AnimCmd sAnim_Pumpkaboo_1[] =
{
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Gourgeist_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};
#endif //P_FAMILY_PUMPKABOO

#if P_FAMILY_BERGMITE
static const union AnimCmd sAnim_Bergmite_1[] =
{
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Avalugg_1[] =
{
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

#if P_HISUIAN_FORMS
PLACEHOLDER_ANIM_SINGLE_FRAME(AvaluggHisuian);
#endif //P_HISUIAN_FORMS
#endif //P_FAMILY_BERGMITE

#if P_FAMILY_NOIBAT
static const union AnimCmd sAnim_Noibat_1[] =
{
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Noivern_1[] =
{
    ANIMCMD_FRAME(1, 32),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};
#endif //P_FAMILY_NOIBAT

#if P_FAMILY_XERNEAS
static const union AnimCmd sAnim_Xerneas_1[] =
{
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 45),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_FAMILY_XERNEAS

#if P_FAMILY_YVELTAL
static const union AnimCmd sAnim_Yveltal_1[] =
{
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};
#endif //P_FAMILY_YVELTAL

#if P_FAMILY_ZYGARDE
static const union AnimCmd sAnim_Zygarde50_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Zygarde10_1[] =
{
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_ZygardeComplete_1[] =
{
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 45),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_FAMILY_ZYGARDE

#if P_FAMILY_DIANCIE
static const union AnimCmd sAnim_Diancie_1[] =
{
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

#if P_MEGA_EVOLUTIONS
PLACEHOLDER_ANIM_SINGLE_FRAME(DiancieMega);
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_DIANCIE

#if P_FAMILY_HOOPA
static const union AnimCmd sAnim_HoopaConfined_1[] =
{
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 25),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_HoopaUnbound_1[] =
{
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_HOOPA

#if P_FAMILY_VOLCANION
static const union AnimCmd sAnim_Volcanion_1[] =
{
    ANIMCMD_FRAME(1, 45),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_VOLCANION

#if P_FAMILY_ROWLET
static const union AnimCmd sAnim_Rowlet_1[] =
{
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Dartrix_1[] =
{
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Decidueye_1[] =
{
    ANIMCMD_FRAME(1, 50),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

#if P_HISUIAN_FORMS
PLACEHOLDER_ANIM_SINGLE_FRAME(DecidueyeHisuian);
#endif //P_HISUIAN_FORMS
#endif //P_FAMILY_ROWLET

#if P_FAMILY_LITTEN
PLACEHOLDER_ANIM_SINGLE_FRAME(Litten);
PLACEHOLDER_ANIM_SINGLE_FRAME(Torracat);
PLACEHOLDER_ANIM_SINGLE_FRAME(Incineroar);
#endif //P_FAMILY_LITTEN

#if P_FAMILY_POPPLIO
PLACEHOLDER_ANIM_SINGLE_FRAME(Popplio);
PLACEHOLDER_ANIM_SINGLE_FRAME(Brionne);
PLACEHOLDER_ANIM_SINGLE_FRAME(Primarina);
#endif //P_FAMILY_POPPLIO

#if P_FAMILY_PIKIPEK
static const union AnimCmd sAnim_Pikipek_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Trumbeak_1[] =
{
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Toucannon_1[] =
{
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};
#endif //P_FAMILY_PIKIPEK

#if P_FAMILY_YUNGOOS
PLACEHOLDER_ANIM_SINGLE_FRAME(Yungoos);
PLACEHOLDER_ANIM_SINGLE_FRAME(Gumshoos);
#endif //P_FAMILY_YUNGOOS

#if P_FAMILY_GRUBBIN
static const union AnimCmd sAnim_Grubbin_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Charjabug_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Vikavolt_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};
#endif //P_FAMILY_GRUBBIN

#if P_FAMILY_CRABRAWLER
PLACEHOLDER_ANIM_SINGLE_FRAME(Crabrawler);
PLACEHOLDER_ANIM_SINGLE_FRAME(Crabominable);
#endif //P_FAMILY_CRABRAWLER

#if P_FAMILY_ORICORIO
PLACEHOLDER_ANIM_SINGLE_FRAME(Oricorio);
#endif //P_FAMILY_ORICORIO

#if P_FAMILY_CUTIEFLY
static const union AnimCmd sAnim_Cutiefly_1[] =
{
    ANIMCMD_FRAME(1, 1),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 1),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 1),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 1),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 1),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 1),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 1),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 1),
    ANIMCMD_FRAME(0, 35),
    ANIMCMD_FRAME(1, 1),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 1),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 1),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 1),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 1),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 1),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 1),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 1),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Ribombee_1[] =
{
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_END,
};
#endif //P_FAMILY_CUTIEFLY

#if P_FAMILY_ROCKRUFF
static const union AnimCmd sAnim_Rockruff_1[] =
{
    ANIMCMD_FRAME(1, 9),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_LycanrocMidday_1[] =
{
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_LycanrocMidnight_1[] =
{
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_LycanrocDusk_1[] =
{
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};
#endif //P_FAMILY_ROCKRUFF

#if P_FAMILY_WISHIWASHI
PLACEHOLDER_ANIM_SINGLE_FRAME(WishiwashiSolo);
PLACEHOLDER_ANIM_SINGLE_FRAME(WishiwashiSchool);
#endif //P_FAMILY_WISHIWASHI

#if P_FAMILY_MAREANIE
PLACEHOLDER_ANIM_SINGLE_FRAME(Mareanie);
PLACEHOLDER_ANIM_SINGLE_FRAME(Toxapex);
#endif //P_FAMILY_MAREANIE

#if P_FAMILY_MUDBRAY
PLACEHOLDER_ANIM_SINGLE_FRAME(Mudbray);
PLACEHOLDER_ANIM_SINGLE_FRAME(Mudsdale);
#endif //P_FAMILY_MUDBRAY

#if P_FAMILY_DEWPIDER
static const union AnimCmd sAnim_Dewpider_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 9),
    ANIMCMD_FRAME(0, 9),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 9),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Araquanid_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 45),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};
#endif //P_FAMILY_DEWPIDER

#if P_FAMILY_FOMANTIS
PLACEHOLDER_ANIM_SINGLE_FRAME(Fomantis);
PLACEHOLDER_ANIM_SINGLE_FRAME(Lurantis);
#endif //P_FAMILY_FOMANTIS

#if P_FAMILY_MORELULL
PLACEHOLDER_ANIM_SINGLE_FRAME(Morelull);
PLACEHOLDER_ANIM_SINGLE_FRAME(Shiinotic);
#endif //P_FAMILY_MORELULL

#if P_FAMILY_SALANDIT
static const union AnimCmd sAnim_Salandit_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 50),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Salazzle_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};
#endif //P_FAMILY_SALANDIT

#if P_FAMILY_STUFFUL
static const union AnimCmd sAnim_Stufful_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 44),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Bewear_1[] =
{
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 60),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_STUFFUL

#if P_FAMILY_BOUNSWEET
PLACEHOLDER_ANIM_SINGLE_FRAME(Bounsweet);
PLACEHOLDER_ANIM_SINGLE_FRAME(Steenee);
PLACEHOLDER_ANIM_SINGLE_FRAME(Tsareena);
#endif //P_FAMILY_BOUNSWEET

#if P_FAMILY_COMFEY
PLACEHOLDER_ANIM_SINGLE_FRAME(Comfey);
#endif //P_FAMILY_COMFEY

#if P_FAMILY_ORANGURU
static const union AnimCmd sAnim_Oranguru_1[] =
{
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};
#endif //P_FAMILY_ORANGURU

#if P_FAMILY_PASSIMIAN
static const union AnimCmd sAnim_Passimian_1[] =
{
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};
#endif //P_FAMILY_PASSIMIAN

#if P_FAMILY_WIMPOD
static const union AnimCmd sAnim_Wimpod_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Golisopod_1[] =
{
    ANIMCMD_FRAME(0, 25),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};
#endif //P_FAMILY_WIMPOD

#if P_FAMILY_SANDYGAST
PLACEHOLDER_ANIM_SINGLE_FRAME(Sandygast);
PLACEHOLDER_ANIM_SINGLE_FRAME(Palossand);
#endif //P_FAMILY_SANDYGAST

#if P_FAMILY_PYUKUMUKU
static const union AnimCmd sAnim_Pyukumuku_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};
#endif //P_FAMILY_PYUKUMUKU

#if P_FAMILY_TYPE_NULL
PLACEHOLDER_ANIM_SINGLE_FRAME(TypeNull);
PLACEHOLDER_ANIM_SINGLE_FRAME(Silvally);
#endif //P_FAMILY_TYPE_NULL

#if P_FAMILY_MINIOR
PLACEHOLDER_ANIM_SINGLE_FRAME(MiniorMeteor);
PLACEHOLDER_ANIM_SINGLE_FRAME(MiniorCore);
#endif //P_FAMILY_MINIOR

#if P_FAMILY_KOMALA
PLACEHOLDER_ANIM_SINGLE_FRAME(Komala);
#endif //P_FAMILY_KOMALA

#if P_FAMILY_TURTONATOR
static const union AnimCmd sAnim_Turtonator_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 44),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_TURTONATOR

#if P_FAMILY_TOGEDEMARU
static const union AnimCmd sAnim_Togedemaru_1[] =
{
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};
#endif //P_FAMILY_TOGEDEMARU

#if P_FAMILY_MIMIKYU
PLACEHOLDER_ANIM_SINGLE_FRAME(MimikyuDisguised);
PLACEHOLDER_ANIM_SINGLE_FRAME(MimikyuBusted);
#endif //P_FAMILY_MIMIKYU

#if P_FAMILY_BRUXISH
PLACEHOLDER_ANIM_SINGLE_FRAME(Bruxish);
#endif //P_FAMILY_BRUXISH

#if P_FAMILY_DRAMPA
static const union AnimCmd sAnim_Drampa_1[] =
{
    ANIMCMD_FRAME(1, 50),
    ANIMCMD_FRAME(0, 50),
    ANIMCMD_END,
};
#endif //P_FAMILY_DRAMPA

#if P_FAMILY_DHELMISE
PLACEHOLDER_ANIM_SINGLE_FRAME(Dhelmise);
#endif //P_FAMILY_DHELMISE

#if P_FAMILY_JANGMO_O
static const union AnimCmd sAnim_Jangmo_O_1[] =
{
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Hakamo_O_1[] =
{
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Kommo_O_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};
#endif //P_FAMILY_JANGMO_O

#if P_FAMILY_TAPU_KOKO
static const union AnimCmd sAnim_TapuKoko_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};
#endif //P_FAMILY_TAPU_KOKO

#if P_FAMILY_TAPU_LELE
static const union AnimCmd sAnim_TapuLele_1[] =
{
    ANIMCMD_FRAME(1, 50),
    ANIMCMD_FRAME(1, 50),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};
#endif //P_FAMILY_TAPU_LELE

#if P_FAMILY_TAPU_BULU
static const union AnimCmd sAnim_TapuBulu_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};
#endif //P_FAMILY_TAPU_BULU

#if P_FAMILY_TAPU_FINI
static const union AnimCmd sAnim_TapuFini_1[] =
{
    ANIMCMD_FRAME(1, 60),
    ANIMCMD_FRAME(1, 60),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};
#endif //P_FAMILY_TAPU_FINI

#if P_FAMILY_COSMOG
PLACEHOLDER_ANIM_SINGLE_FRAME(Cosmog);
PLACEHOLDER_ANIM_SINGLE_FRAME(Cosmoem);
PLACEHOLDER_ANIM_SINGLE_FRAME(Solgaleo);
PLACEHOLDER_ANIM_SINGLE_FRAME(Lunala);
#endif //P_FAMILY_COSMOG

#if P_FAMILY_NIHILEGO
PLACEHOLDER_ANIM_SINGLE_FRAME(Nihilego);
#endif //P_FAMILY_NIHILEGO

#if P_FAMILY_BUZZWOLE
PLACEHOLDER_ANIM_SINGLE_FRAME(Buzzwole);
#endif //P_FAMILY_BUZZWOLE

#if P_FAMILY_PHEROMOSA
PLACEHOLDER_ANIM_SINGLE_FRAME(Pheromosa);
#endif //P_FAMILY_PHEROMOSA

#if P_FAMILY_XURKITREE
PLACEHOLDER_ANIM_SINGLE_FRAME(Xurkitree);
#endif //P_FAMILY_XURKITREE

#if P_FAMILY_CELESTEELA
PLACEHOLDER_ANIM_SINGLE_FRAME(Celesteela);
#endif //P_FAMILY_CELESTEELA

#if P_FAMILY_KARTANA
PLACEHOLDER_ANIM_SINGLE_FRAME(Kartana);
#endif //P_FAMILY_KARTANA

#if P_FAMILY_GUZZLORD
PLACEHOLDER_ANIM_SINGLE_FRAME(Guzzlord);
#endif //P_FAMILY_GUZZLORD

#if P_FAMILY_NECROZMA
PLACEHOLDER_ANIM_SINGLE_FRAME(Necrozma);
#endif //P_FAMILY_NECROZMA

#if P_FAMILY_MAGEARNA
PLACEHOLDER_ANIM_SINGLE_FRAME(Magearna);
#endif //P_FAMILY_MAGEARNA

#if P_FAMILY_MARSHADOW
static const union AnimCmd sAnim_Marshadow_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 54),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_MARSHADOW

#if P_FAMILY_POIPOLE
PLACEHOLDER_ANIM_SINGLE_FRAME(Poipole);
PLACEHOLDER_ANIM_SINGLE_FRAME(Naganadel);
#endif //P_FAMILY_POIPOLE

#if P_FAMILY_STAKATAKA
PLACEHOLDER_ANIM_SINGLE_FRAME(Stakataka);
#endif //P_FAMILY_STAKATAKA

#if P_FAMILY_BLACEPHALON
PLACEHOLDER_ANIM_SINGLE_FRAME(Blacephalon);
#endif //P_FAMILY_BLACEPHALON

#if P_FAMILY_ZERAORA
PLACEHOLDER_ANIM_SINGLE_FRAME(Zeraora);
#endif //P_FAMILY_ZERAORA

#if P_FAMILY_MELTAN
PLACEHOLDER_ANIM_SINGLE_FRAME(Meltan);
PLACEHOLDER_ANIM_SINGLE_FRAME(Melmetal);

#if P_GIGANTAMAX_FORMS
PLACEHOLDER_ANIM_SINGLE_FRAME(MelmetalGigantamax);
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_MELTAN

#if P_FAMILY_GROOKEY
PLACEHOLDER_ANIM_SINGLE_FRAME(Grookey);
PLACEHOLDER_ANIM_SINGLE_FRAME(Thwackey);
PLACEHOLDER_ANIM_SINGLE_FRAME(Rillaboom);

#if P_GIGANTAMAX_FORMS
PLACEHOLDER_ANIM_SINGLE_FRAME(RillaboomGigantamax);
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_GROOKEY

#if P_FAMILY_SCORBUNNY
PLACEHOLDER_ANIM_SINGLE_FRAME(Scorbunny);
PLACEHOLDER_ANIM_SINGLE_FRAME(Raboot);
PLACEHOLDER_ANIM_SINGLE_FRAME(Cinderace);

#if P_GIGANTAMAX_FORMS
PLACEHOLDER_ANIM_SINGLE_FRAME(CinderaceGigantamax);
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_SCORBUNNY

#if P_FAMILY_SOBBLE
PLACEHOLDER_ANIM_SINGLE_FRAME(Sobble);
PLACEHOLDER_ANIM_SINGLE_FRAME(Drizzile);
PLACEHOLDER_ANIM_SINGLE_FRAME(Inteleon);

#if P_GIGANTAMAX_FORMS
PLACEHOLDER_ANIM_SINGLE_FRAME(InteleonGigantamax);
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_SOBBLE

#if P_FAMILY_SKWOVET
PLACEHOLDER_ANIM_SINGLE_FRAME(Skwovet);
PLACEHOLDER_ANIM_SINGLE_FRAME(Greedent);
#endif //P_FAMILY_SKWOVET

#if P_FAMILY_ROOKIDEE
static const union AnimCmd sAnim_Rookidee_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Corvisquire_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Corviknight_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 50),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

#if P_GIGANTAMAX_FORMS
PLACEHOLDER_ANIM_SINGLE_FRAME(CorviknightGigantamax);
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_ROOKIDEE

#if P_FAMILY_BLIPBUG
PLACEHOLDER_ANIM_SINGLE_FRAME(Blipbug);
PLACEHOLDER_ANIM_SINGLE_FRAME(Dottler);
PLACEHOLDER_ANIM_SINGLE_FRAME(Orbeetle);

#if P_GIGANTAMAX_FORMS
PLACEHOLDER_ANIM_SINGLE_FRAME(OrbeetleGigantamax);
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_BLIPBUG

#if P_FAMILY_NICKIT
PLACEHOLDER_ANIM_SINGLE_FRAME(Nickit);
PLACEHOLDER_ANIM_SINGLE_FRAME(Thievul);
#endif //P_FAMILY_NICKIT

#if P_FAMILY_GOSSIFLEUR
PLACEHOLDER_ANIM_SINGLE_FRAME(Gossifleur);
PLACEHOLDER_ANIM_SINGLE_FRAME(Eldegoss);
#endif //P_FAMILY_GOSSIFLEUR

#if P_FAMILY_WOOLOO
PLACEHOLDER_ANIM_SINGLE_FRAME(Wooloo);
PLACEHOLDER_ANIM_SINGLE_FRAME(Dubwool);
#endif //P_FAMILY_WOOLOO

#if P_FAMILY_CHEWTLE
static const union AnimCmd sAnim_Chewtle_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Drednaw_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

#if P_GIGANTAMAX_FORMS
PLACEHOLDER_ANIM_SINGLE_FRAME(DrednawGigantamax);
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_CHEWTLE

#if P_FAMILY_YAMPER
PLACEHOLDER_ANIM_SINGLE_FRAME(Yamper);
PLACEHOLDER_ANIM_SINGLE_FRAME(Boltund);
#endif //P_FAMILY_YAMPER

#if P_FAMILY_ROLYCOLY
PLACEHOLDER_ANIM_TWO_FRAMES(Rolycoly);
PLACEHOLDER_ANIM_TWO_FRAMES(Carkol);
PLACEHOLDER_ANIM_TWO_FRAMES(Coalossal);

#if P_GIGANTAMAX_FORMS
PLACEHOLDER_ANIM_SINGLE_FRAME(CoalossalGigantamax);
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_ROLYCOLY

#if P_FAMILY_APPLIN
PLACEHOLDER_ANIM_TWO_FRAMES(Applin);
PLACEHOLDER_ANIM_TWO_FRAMES(Flapple);

#if P_GIGANTAMAX_FORMS
PLACEHOLDER_ANIM_SINGLE_FRAME(FlappleGigantamax);
#endif //P_GIGANTAMAX_FORMS

PLACEHOLDER_ANIM_TWO_FRAMES(Appletun);

#if P_GIGANTAMAX_FORMS
PLACEHOLDER_ANIM_SINGLE_FRAME(AppletunGigantamax);
#endif //P_GIGANTAMAX_FORMS

#if P_GEN_9_CROSS_EVOS
PLACEHOLDER_ANIM_SINGLE_FRAME(Dipplin);
#endif //P_GEN_9_CROSS_EVOS
#endif //P_FAMILY_APPLIN

#if P_FAMILY_SILICOBRA
PLACEHOLDER_ANIM_SINGLE_FRAME(Silicobra);
PLACEHOLDER_ANIM_SINGLE_FRAME(Sandaconda);

#if P_GIGANTAMAX_FORMS
PLACEHOLDER_ANIM_SINGLE_FRAME(SandacondaGigantamax);
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_SILICOBRA

#if P_FAMILY_CRAMORANT
PLACEHOLDER_ANIM_SINGLE_FRAME(Cramorant);
#endif //P_FAMILY_CRAMORANT

#if P_FAMILY_ARROKUDA
PLACEHOLDER_ANIM_SINGLE_FRAME(Arrokuda);
PLACEHOLDER_ANIM_SINGLE_FRAME(Barraskewda);
#endif //P_FAMILY_ARROKUDA

#if P_FAMILY_TOXEL
PLACEHOLDER_ANIM_SINGLE_FRAME(Toxel);
PLACEHOLDER_ANIM_SINGLE_FRAME(Toxtricity);

#if P_GIGANTAMAX_FORMS
PLACEHOLDER_ANIM_SINGLE_FRAME(ToxtricityGigantamax);
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_TOXEL

#if P_FAMILY_SIZZLIPEDE
static const union AnimCmd sAnim_Sizzlipede_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Centiskorch_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 35),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

#if P_GIGANTAMAX_FORMS
PLACEHOLDER_ANIM_SINGLE_FRAME(CentiskorchGigantamax);
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_SIZZLIPEDE

#if P_FAMILY_CLOBBOPUS
PLACEHOLDER_ANIM_SINGLE_FRAME(Clobbopus);
PLACEHOLDER_ANIM_SINGLE_FRAME(Grapploct);
#endif //P_FAMILY_CLOBBOPUS

#if P_FAMILY_SINISTEA
PLACEHOLDER_ANIM_SINGLE_FRAME(Sinistea);
PLACEHOLDER_ANIM_SINGLE_FRAME(Polteageist);
#endif //P_FAMILY_SINISTEA

#if P_FAMILY_HATENNA
PLACEHOLDER_ANIM_SINGLE_FRAME(Hatenna);
PLACEHOLDER_ANIM_SINGLE_FRAME(Hattrem);
PLACEHOLDER_ANIM_SINGLE_FRAME(Hatterene);

#if P_GIGANTAMAX_FORMS
PLACEHOLDER_ANIM_SINGLE_FRAME(HattereneGigantamax);
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_HATENNA

#if P_FAMILY_IMPIDIMP
PLACEHOLDER_ANIM_SINGLE_FRAME(Impidimp);
PLACEHOLDER_ANIM_SINGLE_FRAME(Morgrem);
PLACEHOLDER_ANIM_SINGLE_FRAME(Grimmsnarl);

#if P_GIGANTAMAX_FORMS
PLACEHOLDER_ANIM_SINGLE_FRAME(GrimmsnarlGigantamax);
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_IMPIDIMP

#if P_FAMILY_MILCERY
PLACEHOLDER_ANIM_SINGLE_FRAME(Milcery);
PLACEHOLDER_ANIM_SINGLE_FRAME(Alcremie);

#if P_GIGANTAMAX_FORMS
PLACEHOLDER_ANIM_SINGLE_FRAME(AlcremieGigantamax);
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_MILCERY

#if P_FAMILY_FALINKS
PLACEHOLDER_ANIM_SINGLE_FRAME(Falinks);
#endif //P_FAMILY_FALINKS

#if P_FAMILY_PINCURCHIN
PLACEHOLDER_ANIM_TWO_FRAMES(Pincurchin);
#endif //P_FAMILY_PINCURCHIN

#if P_FAMILY_SNOM
PLACEHOLDER_ANIM_SINGLE_FRAME(Snom);
PLACEHOLDER_ANIM_SINGLE_FRAME(Frosmoth);
#endif //P_FAMILY_SNOM

#if P_FAMILY_STONJOURNER
PLACEHOLDER_ANIM_SINGLE_FRAME(Stonjourner);
#endif //P_FAMILY_STONJOURNER

#if P_FAMILY_EISCUE
PLACEHOLDER_ANIM_SINGLE_FRAME(Eiscue);
#endif //P_FAMILY_EISCUE

#if P_FAMILY_INDEEDEE
PLACEHOLDER_ANIM_SINGLE_FRAME(Indeedee);
#endif //P_FAMILY_INDEEDEE

#if P_FAMILY_MORPEKO
PLACEHOLDER_ANIM_SINGLE_FRAME(Morpeko);
#endif //P_FAMILY_MORPEKO

#if P_FAMILY_CUFANT
PLACEHOLDER_ANIM_SINGLE_FRAME(Cufant);
PLACEHOLDER_ANIM_SINGLE_FRAME(Copperajah);

#if P_GIGANTAMAX_FORMS
PLACEHOLDER_ANIM_SINGLE_FRAME(CopperajahGigantamax);
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_CUFANT

#if P_FAMILY_DRACOZOLT
PLACEHOLDER_ANIM_SINGLE_FRAME(Dracozolt);
#endif //P_FAMILY_DRACOZOLT

#if P_FAMILY_ARCTOZOLT
PLACEHOLDER_ANIM_SINGLE_FRAME(Arctozolt);
#endif //P_FAMILY_ARCTOZOLT

#if P_FAMILY_DRACOVISH
PLACEHOLDER_ANIM_SINGLE_FRAME(Dracovish);
#endif //P_FAMILY_DRACOVISH

#if P_FAMILY_ARCTOVISH
PLACEHOLDER_ANIM_SINGLE_FRAME(Arctovish);
#endif //P_FAMILY_ARCTOVISH

#if P_FAMILY_DURALUDON
PLACEHOLDER_ANIM_SINGLE_FRAME(Duraludon);

#if P_GIGANTAMAX_FORMS
PLACEHOLDER_ANIM_SINGLE_FRAME(DuraludonGigantamax);
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_DURALUDON

#if P_FAMILY_DREEPY
PLACEHOLDER_ANIM_SINGLE_FRAME(Dreepy);
PLACEHOLDER_ANIM_SINGLE_FRAME(Drakloak);
PLACEHOLDER_ANIM_SINGLE_FRAME(Dragapult);
#endif //P_FAMILY_DREEPY

#if P_FAMILY_ZACIAN
PLACEHOLDER_ANIM_SINGLE_FRAME(Zacian);
#endif //P_FAMILY_ZACIAN

#if P_FAMILY_ZAMAZENTA
PLACEHOLDER_ANIM_SINGLE_FRAME(Zamazenta);
#endif //P_FAMILY_ZAMAZENTA

#if P_FAMILY_ETERNATUS
PLACEHOLDER_ANIM_SINGLE_FRAME(Eternatus);
#endif //P_FAMILY_ETERNATUS

#if P_FAMILY_KUBFU
PLACEHOLDER_ANIM_SINGLE_FRAME(Kubfu);
PLACEHOLDER_ANIM_SINGLE_FRAME(Urshifu);

#if P_GIGANTAMAX_FORMS
PLACEHOLDER_ANIM_SINGLE_FRAME(UrshifuSingleStrikeStyleGigantamax);
#endif //P_GIGANTAMAX_FORMS

#if P_GIGANTAMAX_FORMS
PLACEHOLDER_ANIM_SINGLE_FRAME(UrshifuRapidStrikeStyleGigantamax);
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_KUBFU

#if P_FAMILY_ZARUDE
PLACEHOLDER_ANIM_SINGLE_FRAME(Zarude);
#endif //P_FAMILY_ZARUDE

#if P_FAMILY_REGIELEKI
PLACEHOLDER_ANIM_SINGLE_FRAME(Regieleki);
#endif //P_FAMILY_REGIELEKI

#if P_FAMILY_REGIDRAGO
PLACEHOLDER_ANIM_SINGLE_FRAME(Regidrago);
#endif //P_FAMILY_REGIDRAGO

#if P_FAMILY_GLASTRIER
PLACEHOLDER_ANIM_SINGLE_FRAME(Glastrier);
#endif //P_FAMILY_GLASTRIER

#if P_FAMILY_SPECTRIER
PLACEHOLDER_ANIM_SINGLE_FRAME(Spectrier);
#endif //P_FAMILY_SPECTRIER

#if P_FAMILY_CALYREX
PLACEHOLDER_ANIM_SINGLE_FRAME(Calyrex);
#endif //P_FAMILY_CALYREX

#if P_FAMILY_ENAMORUS
PLACEHOLDER_ANIM_SINGLE_FRAME(EnamorusIncarnate);
PLACEHOLDER_ANIM_SINGLE_FRAME(EnamorusTherian);
#endif //P_FAMILY_ENAMORUS

#if P_FAMILY_SPRIGATITO
PLACEHOLDER_ANIM_SINGLE_FRAME(Sprigatito);
PLACEHOLDER_ANIM_SINGLE_FRAME(Floragato);
PLACEHOLDER_ANIM_SINGLE_FRAME(Meowscarada);
#endif //P_FAMILY_SPRIGATITO

#if P_FAMILY_FUECOCO
PLACEHOLDER_ANIM_SINGLE_FRAME(Fuecoco);
PLACEHOLDER_ANIM_SINGLE_FRAME(Crocalor);
PLACEHOLDER_ANIM_SINGLE_FRAME(Skeledirge);
#endif //P_FAMILY_FUECOCO

#if P_FAMILY_QUAXLY
PLACEHOLDER_ANIM_SINGLE_FRAME(Quaxly);
PLACEHOLDER_ANIM_SINGLE_FRAME(Quaxwell);
PLACEHOLDER_ANIM_SINGLE_FRAME(Quaquaval);
#endif //P_FAMILY_QUAXLY

#if P_FAMILY_LECHONK
PLACEHOLDER_ANIM_SINGLE_FRAME(Lechonk);
PLACEHOLDER_ANIM_SINGLE_FRAME(Oinkologne);
#endif //P_FAMILY_LECHONK

#if P_FAMILY_TAROUNTULA
PLACEHOLDER_ANIM_SINGLE_FRAME(Tarountula);
PLACEHOLDER_ANIM_SINGLE_FRAME(Spidops);
#endif //P_FAMILY_TAROUNTULA

#if P_FAMILY_NYMBLE
PLACEHOLDER_ANIM_SINGLE_FRAME(Nymble);
PLACEHOLDER_ANIM_SINGLE_FRAME(Lokix);
#endif //P_FAMILY_NYMBLE

#if P_FAMILY_PAWMI
PLACEHOLDER_ANIM_SINGLE_FRAME(Pawmi);
PLACEHOLDER_ANIM_SINGLE_FRAME(Pawmo);
PLACEHOLDER_ANIM_SINGLE_FRAME(Pawmot);
#endif //P_FAMILY_PAWMI

#if P_FAMILY_TANDEMAUS
PLACEHOLDER_ANIM_SINGLE_FRAME(Tandemaus);
PLACEHOLDER_ANIM_SINGLE_FRAME(Maushold);
#endif //P_FAMILY_TANDEMAUS

#if P_FAMILY_FIDOUGH
PLACEHOLDER_ANIM_SINGLE_FRAME(Fidough);
PLACEHOLDER_ANIM_SINGLE_FRAME(Dachsbun);
#endif //P_FAMILY_FIDOUGH

#if P_FAMILY_SMOLIV
PLACEHOLDER_ANIM_SINGLE_FRAME(Smoliv);
PLACEHOLDER_ANIM_SINGLE_FRAME(Dolliv);
PLACEHOLDER_ANIM_SINGLE_FRAME(Arboliva);
#endif //P_FAMILY_SMOLIV

#if P_FAMILY_SQUAWKABILLY
PLACEHOLDER_ANIM_SINGLE_FRAME(Squawkabilly);
#endif //P_FAMILY_SQUAWKABILLY

#if P_FAMILY_NACLI
PLACEHOLDER_ANIM_SINGLE_FRAME(Nacli);
PLACEHOLDER_ANIM_SINGLE_FRAME(Naclstack);
PLACEHOLDER_ANIM_SINGLE_FRAME(Garganacl);
#endif //P_FAMILY_NACLI

#if P_FAMILY_CHARCADET
PLACEHOLDER_ANIM_SINGLE_FRAME(Charcadet);
PLACEHOLDER_ANIM_SINGLE_FRAME(Armarouge);
PLACEHOLDER_ANIM_SINGLE_FRAME(Ceruledge);
#endif //P_FAMILY_CHARCADET

#if P_FAMILY_TADBULB
PLACEHOLDER_ANIM_SINGLE_FRAME(Tadbulb);
PLACEHOLDER_ANIM_SINGLE_FRAME(Bellibolt);
#endif //P_FAMILY_TADBULB

#if P_FAMILY_WATTREL
PLACEHOLDER_ANIM_SINGLE_FRAME(Wattrel);
PLACEHOLDER_ANIM_SINGLE_FRAME(Kilowattrel);
#endif //P_FAMILY_WATTREL

#if P_FAMILY_MASCHIFF
PLACEHOLDER_ANIM_SINGLE_FRAME(Maschiff);
PLACEHOLDER_ANIM_SINGLE_FRAME(Mabosstiff);
#endif //P_FAMILY_MASCHIFF

#if P_FAMILY_SHROODLE
PLACEHOLDER_ANIM_SINGLE_FRAME(Shroodle);
PLACEHOLDER_ANIM_SINGLE_FRAME(Grafaiai);
#endif //P_FAMILY_SHROODLE

#if P_FAMILY_BRAMBLIN
PLACEHOLDER_ANIM_SINGLE_FRAME(Bramblin);
PLACEHOLDER_ANIM_SINGLE_FRAME(Brambleghast);
#endif //P_FAMILY_BRAMBLIN

#if P_FAMILY_TOEDSCOOL
PLACEHOLDER_ANIM_SINGLE_FRAME(Toedscool);
PLACEHOLDER_ANIM_SINGLE_FRAME(Toedscruel);
#endif //P_FAMILY_TOEDSCOOL

#if P_FAMILY_KLAWF
PLACEHOLDER_ANIM_SINGLE_FRAME(Klawf);
#endif //P_FAMILY_KLAWF

#if P_FAMILY_CAPSAKID
PLACEHOLDER_ANIM_SINGLE_FRAME(Capsakid);
PLACEHOLDER_ANIM_SINGLE_FRAME(Scovillain);
#endif //P_FAMILY_CAPSAKID

#if P_FAMILY_RELLOR
PLACEHOLDER_ANIM_SINGLE_FRAME(Rellor);
PLACEHOLDER_ANIM_SINGLE_FRAME(Rabsca);
#endif //P_FAMILY_RELLOR

#if P_FAMILY_FLITTLE
PLACEHOLDER_ANIM_SINGLE_FRAME(Flittle);
PLACEHOLDER_ANIM_SINGLE_FRAME(Espathra);
#endif //P_FAMILY_FLITTLE

#if P_FAMILY_TINKATINK
PLACEHOLDER_ANIM_SINGLE_FRAME(Tinkatink);
PLACEHOLDER_ANIM_SINGLE_FRAME(Tinkatuff);
PLACEHOLDER_ANIM_SINGLE_FRAME(Tinkaton);
#endif //P_FAMILY_TINKATINK

#if P_FAMILY_WIGLETT
PLACEHOLDER_ANIM_SINGLE_FRAME(Wiglett);
PLACEHOLDER_ANIM_SINGLE_FRAME(Wugtrio);
#endif //P_FAMILY_WIGLETT

#if P_FAMILY_BOMBIRDIER
PLACEHOLDER_ANIM_SINGLE_FRAME(Bombirdier);
#endif //P_FAMILY_BOMBIRDIER

#if P_FAMILY_FINIZEN
PLACEHOLDER_ANIM_SINGLE_FRAME(Finizen);
PLACEHOLDER_ANIM_SINGLE_FRAME(Palafin);
#endif //P_FAMILY_FINIZEN

#if P_FAMILY_VAROOM
PLACEHOLDER_ANIM_SINGLE_FRAME(Varoom);
PLACEHOLDER_ANIM_SINGLE_FRAME(Revavroom);
#endif //P_FAMILY_VAROOM

#if P_FAMILY_CYCLIZAR
PLACEHOLDER_ANIM_SINGLE_FRAME(Cyclizar);
#endif //P_FAMILY_CYCLIZAR

#if P_FAMILY_ORTHWORM
PLACEHOLDER_ANIM_SINGLE_FRAME(Orthworm);
#endif //P_FAMILY_ORTHWORM

#if P_FAMILY_GLIMMET
PLACEHOLDER_ANIM_SINGLE_FRAME(Glimmet);
PLACEHOLDER_ANIM_SINGLE_FRAME(Glimmora);
#endif //P_FAMILY_GLIMMET

#if P_FAMILY_GREAVARD
PLACEHOLDER_ANIM_SINGLE_FRAME(Greavard);
PLACEHOLDER_ANIM_SINGLE_FRAME(Houndstone);
#endif //P_FAMILY_GREAVARD

#if P_FAMILY_FLAMIGO
PLACEHOLDER_ANIM_SINGLE_FRAME(Flamigo);
#endif //P_FAMILY_FLAMIGO

#if P_FAMILY_CETODDLE
PLACEHOLDER_ANIM_SINGLE_FRAME(Cetoddle);
PLACEHOLDER_ANIM_SINGLE_FRAME(Cetitan);
#endif //P_FAMILY_CETODDLE

#if P_FAMILY_VELUZA
PLACEHOLDER_ANIM_SINGLE_FRAME(Veluza);
#endif //P_FAMILY_VELUZA

#if P_FAMILY_DONDOZO
PLACEHOLDER_ANIM_SINGLE_FRAME(Dondozo);
#endif //P_FAMILY_DONDOZO

#if P_FAMILY_TATSUGIRI
PLACEHOLDER_ANIM_SINGLE_FRAME(Tatsugiri);
#endif //P_FAMILY_TATSUGIRI

#if P_FAMILY_GREAT_TUSK
PLACEHOLDER_ANIM_TWO_FRAMES(GreatTusk);
#endif //P_FAMILY_GREAT_TUSK

#if P_FAMILY_SCREAM_TAIL
PLACEHOLDER_ANIM_SINGLE_FRAME(ScreamTail);
#endif //P_FAMILY_SCREAM_TAIL

#if P_FAMILY_BRUTE_BONNET
PLACEHOLDER_ANIM_SINGLE_FRAME(BruteBonnet);
#endif //P_FAMILY_BRUTE_BONNET

#if P_FAMILY_FLUTTER_MANE
PLACEHOLDER_ANIM_SINGLE_FRAME(FlutterMane);
#endif //P_FAMILY_FLUTTER_MANE

#if P_FAMILY_SLITHER_WING
PLACEHOLDER_ANIM_SINGLE_FRAME(SlitherWing);
#endif //P_FAMILY_SLITHER_WING

#if P_FAMILY_SANDY_SHOCKS
PLACEHOLDER_ANIM_SINGLE_FRAME(SandyShocks);
#endif //P_FAMILY_SANDY_SHOCKS

#if P_FAMILY_IRON_TREADS
PLACEHOLDER_ANIM_SINGLE_FRAME(IronTreads);
#endif //P_FAMILY_IRON_TREADS

#if P_FAMILY_IRON_BUNDLE
PLACEHOLDER_ANIM_SINGLE_FRAME(IronBundle);
#endif //P_FAMILY_IRON_BUNDLE

#if P_FAMILY_IRON_HANDS
PLACEHOLDER_ANIM_SINGLE_FRAME(IronHands);
#endif //P_FAMILY_IRON_HANDS

#if P_FAMILY_IRON_JUGULIS
PLACEHOLDER_ANIM_SINGLE_FRAME(IronJugulis);
#endif //P_FAMILY_IRON_JUGULIS

#if P_FAMILY_IRON_MOTH
PLACEHOLDER_ANIM_SINGLE_FRAME(IronMoth);
#endif //P_FAMILY_IRON_MOTH

#if P_FAMILY_IRON_THORNS
PLACEHOLDER_ANIM_SINGLE_FRAME(IronThorns);
#endif //P_FAMILY_IRON_THORNS

#if P_FAMILY_FRIGIBAX
PLACEHOLDER_ANIM_TWO_FRAMES(Frigibax);
PLACEHOLDER_ANIM_SINGLE_FRAME(Arctibax);
PLACEHOLDER_ANIM_SINGLE_FRAME(Baxcalibur);
#endif //P_FAMILY_FRIGIBAX

#if P_FAMILY_GIMMIGHOUL
PLACEHOLDER_ANIM_SINGLE_FRAME(Gimmighoul);
PLACEHOLDER_ANIM_SINGLE_FRAME(Gholdengo);
#endif //P_FAMILY_GIMMIGHOUL

#if P_FAMILY_WO_CHIEN
PLACEHOLDER_ANIM_SINGLE_FRAME(WoChien);
#endif //P_FAMILY_WO_CHIEN

#if P_FAMILY_CHIEN_PAO
PLACEHOLDER_ANIM_SINGLE_FRAME(ChienPao);
#endif //P_FAMILY_CHIEN_PAO

#if P_FAMILY_TING_LU
PLACEHOLDER_ANIM_SINGLE_FRAME(TingLu);
#endif //P_FAMILY_TING_LU

#if P_FAMILY_CHI_YU
PLACEHOLDER_ANIM_SINGLE_FRAME(ChiYu);
#endif //P_FAMILY_CHI_YU

#if P_FAMILY_ROARING_MOON
PLACEHOLDER_ANIM_SINGLE_FRAME(RoaringMoon);
#endif //P_FAMILY_ROARING_MOON

#if P_FAMILY_IRON_VALIANT
PLACEHOLDER_ANIM_SINGLE_FRAME(IronValiant);
#endif //P_FAMILY_IRON_VALIANT

#if P_FAMILY_KORAIDON
PLACEHOLDER_ANIM_SINGLE_FRAME(Koraidon);
#endif //P_FAMILY_KORAIDON

#if P_FAMILY_MIRAIDON
PLACEHOLDER_ANIM_SINGLE_FRAME(Miraidon);
#endif //P_FAMILY_MIRAIDON

#if P_FAMILY_WALKING_WAKE
PLACEHOLDER_ANIM_SINGLE_FRAME(WalkingWake);
#endif //P_FAMILY_WALKING_WAKE

#if P_FAMILY_IRON_LEAVES
PLACEHOLDER_ANIM_SINGLE_FRAME(IronLeaves);
#endif //P_FAMILY_IRON_LEAVES

#if P_FAMILY_POLTCHAGEIST
PLACEHOLDER_ANIM_SINGLE_FRAME(Poltchageist);
PLACEHOLDER_ANIM_SINGLE_FRAME(Sinistcha);
#endif //P_FAMILY_POLTCHAGEIST

#if P_FAMILY_OKIDOGI
PLACEHOLDER_ANIM_SINGLE_FRAME(Okidogi);
#endif //P_FAMILY_OKIDOGI

#if P_FAMILY_MUNKIDORI
PLACEHOLDER_ANIM_SINGLE_FRAME(Munkidori);
#endif //P_FAMILY_MUNKIDORI

#if P_FAMILY_FEZANDIPITI
PLACEHOLDER_ANIM_SINGLE_FRAME(Fezandipiti);
#endif //P_FAMILY_FEZANDIPITI

#if P_FAMILY_OGERPON
PLACEHOLDER_ANIM_SINGLE_FRAME(Ogerpon);
#endif //P_FAMILY_OGERPON

static const union AnimCmd sAnim_Egg_1[] =
{
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_FRAME(1, 6),
    ANIMCMD_FRAME(2, 6),
    ANIMCMD_FRAME(3, 6),
    ANIMCMD_END,
};

#define SINGLE_ANIMATION(name)                      \
static const union AnimCmd *const sAnims_##name[] = \
{                                                   \
    sAnim_GeneralFrame0,                            \
    sAnim_##name##_1,                               \
}


SINGLE_ANIMATION(None);
#if P_FAMILY_BULBASAUR
SINGLE_ANIMATION(Bulbasaur);
SINGLE_ANIMATION(Ivysaur);
SINGLE_ANIMATION(Venusaur);
#if P_MEGA_EVOLUTIONS
SINGLE_ANIMATION(VenusaurMega);
#endif //P_MEGA_EVOLUTIONS
#if P_GIGANTAMAX_FORMS
SINGLE_ANIMATION(VenusaurGigantamax);
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_BULBASAUR
#if P_FAMILY_CHARMANDER
SINGLE_ANIMATION(Charmander);
SINGLE_ANIMATION(Charmeleon);
SINGLE_ANIMATION(Charizard);
#if P_MEGA_EVOLUTIONS
SINGLE_ANIMATION(CharizardMegaX);
SINGLE_ANIMATION(CharizardMegaY);
#endif //P_MEGA_EVOLUTIONS
#if P_GIGANTAMAX_FORMS
SINGLE_ANIMATION(CharizardGigantamax);
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_CHARMANDER
#if P_FAMILY_SQUIRTLE
SINGLE_ANIMATION(Squirtle);
SINGLE_ANIMATION(Wartortle);
SINGLE_ANIMATION(Blastoise);
#if P_MEGA_EVOLUTIONS
SINGLE_ANIMATION(BlastoiseMega);
#endif //P_MEGA_EVOLUTIONS
#if P_GIGANTAMAX_FORMS
SINGLE_ANIMATION(BlastoiseGigantamax);
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_SQUIRTLE
#if P_FAMILY_CATERPIE
SINGLE_ANIMATION(Caterpie);
SINGLE_ANIMATION(Metapod);
SINGLE_ANIMATION(Butterfree);
#if P_GIGANTAMAX_FORMS
SINGLE_ANIMATION(ButterfreeGigantamax);
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_CATERPIE
#if P_FAMILY_WEEDLE
SINGLE_ANIMATION(Weedle);
SINGLE_ANIMATION(Kakuna);
SINGLE_ANIMATION(Beedrill);
#if P_MEGA_EVOLUTIONS
SINGLE_ANIMATION(BeedrillMega);
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_WEEDLE
#if P_FAMILY_PIDGEY
SINGLE_ANIMATION(Pidgey);
SINGLE_ANIMATION(Pidgeotto);
SINGLE_ANIMATION(Pidgeot);
#if P_MEGA_EVOLUTIONS
SINGLE_ANIMATION(PidgeotMega);
#endif
#endif //P_FAMILY_PIDGEY
#if P_FAMILY_RATTATA
SINGLE_ANIMATION(Rattata);
SINGLE_ANIMATION(Raticate);
#if P_ALOLAN_FORMS
SINGLE_ANIMATION(RattataAlolan);
SINGLE_ANIMATION(RaticateAlolan);
#endif //P_ALOLAN_FORMS
#endif //P_FAMILY_RATTATA
#if P_FAMILY_SPEAROW
SINGLE_ANIMATION(Spearow);
SINGLE_ANIMATION(Fearow);
#endif //P_FAMILY_SPEAROW
#if P_FAMILY_EKANS
SINGLE_ANIMATION(Ekans);
SINGLE_ANIMATION(Arbok);
#endif //P_FAMILY_EKANS
#if P_FAMILY_PIKACHU
#if P_GEN_2_CROSS_EVOS
SINGLE_ANIMATION(Pichu);
SINGLE_ANIMATION(PichuSpikyEared);
#endif //P_GEN_2_CROSS_EVOS
SINGLE_ANIMATION(Pikachu);
#if P_COSPLAY_PIKACHU_FORMS
SINGLE_ANIMATION(PikachuCosplay);
SINGLE_ANIMATION(PikachuRockStar);
SINGLE_ANIMATION(PikachuBelle);
SINGLE_ANIMATION(PikachuPopStar);
SINGLE_ANIMATION(PikachuPhD);
SINGLE_ANIMATION(PikachuLibre);
#endif //P_COSPLAY_PIKACHU_FORMS
#if P_CAP_PIKACHU_FORMS
SINGLE_ANIMATION(PikachuOriginalCap);
SINGLE_ANIMATION(PikachuHoennCap);
SINGLE_ANIMATION(PikachuSinnohCap);
SINGLE_ANIMATION(PikachuUnovaCap);
SINGLE_ANIMATION(PikachuKalosCap);
SINGLE_ANIMATION(PikachuAlolaCap);
SINGLE_ANIMATION(PikachuPartnerCap);
SINGLE_ANIMATION(PikachuWorldCap);
#endif //P_CAP_PIKACHU_FORMS
#if P_GIGANTAMAX_FORMS
SINGLE_ANIMATION(PikachuGigantamax);
#endif //P_GIGANTAMAX_FORMS
SINGLE_ANIMATION(Raichu);
#if P_ALOLAN_FORMS
SINGLE_ANIMATION(RaichuAlolan);
#endif //P_ALOLAN_FORMS
#endif //P_FAMILY_PIKACHU
#if P_FAMILY_SANDSHREW
SINGLE_ANIMATION(Sandshrew);
SINGLE_ANIMATION(Sandslash);
#if P_ALOLAN_FORMS
SINGLE_ANIMATION(SandshrewAlolan);
SINGLE_ANIMATION(SandslashAlolan);
#endif //P_ALOLAN_FORMS
#endif //P_FAMILY_SANDSHREW
#if P_FAMILY_NIDORAN
SINGLE_ANIMATION(NidoranF);
SINGLE_ANIMATION(Nidorina);
SINGLE_ANIMATION(Nidoqueen);
SINGLE_ANIMATION(NidoranM);
SINGLE_ANIMATION(Nidorino);
SINGLE_ANIMATION(Nidoking);
#endif //P_FAMILY_NIDORAN
#if P_FAMILY_CLEFAIRY
#if P_GEN_2_CROSS_EVOS
SINGLE_ANIMATION(Cleffa);
#endif //P_GEN_2_CROSS_EVOS
SINGLE_ANIMATION(Clefairy);
SINGLE_ANIMATION(Clefable);
#endif //P_FAMILY_CLEFAIRY
#if P_FAMILY_VULPIX
SINGLE_ANIMATION(Vulpix);
SINGLE_ANIMATION(Ninetales);
#if P_ALOLAN_FORMS
SINGLE_ANIMATION(VulpixAlolan);
SINGLE_ANIMATION(NinetalesAlolan);
#endif //P_ALOLAN_FORMS
#endif //P_FAMILY_VULPIX
#if P_FAMILY_JIGGLYPUFF
#if P_GEN_2_CROSS_EVOS
SINGLE_ANIMATION(Igglybuff);
#endif //P_GEN_2_CROSS_EVOS
SINGLE_ANIMATION(Jigglypuff);
SINGLE_ANIMATION(Wigglytuff);
#endif //P_FAMILY_JIGGLYPUFF
#if P_FAMILY_ZUBAT
SINGLE_ANIMATION(Zubat);
SINGLE_ANIMATION(Golbat);
#if P_GEN_2_CROSS_EVOS
SINGLE_ANIMATION(Crobat);
#endif //P_GEN_2_CROSS_EVOS
#endif //P_FAMILY_ZUBAT
#if P_FAMILY_ODDISH
SINGLE_ANIMATION(Oddish);
SINGLE_ANIMATION(Gloom);
SINGLE_ANIMATION(Vileplume);
#if P_GEN_2_CROSS_EVOS
SINGLE_ANIMATION(Bellossom);
#endif //P_GEN_2_CROSS_EVOS
#endif //P_FAMILY_ODDISH
#if P_FAMILY_PARAS
SINGLE_ANIMATION(Paras);
SINGLE_ANIMATION(Parasect);
#endif //P_FAMILY_PARAS
#if P_FAMILY_VENONAT
SINGLE_ANIMATION(Venonat);
SINGLE_ANIMATION(Venomoth);
#endif //P_FAMILY_VENONAT
#if P_FAMILY_DIGLETT
SINGLE_ANIMATION(Diglett);
SINGLE_ANIMATION(Dugtrio);
#if P_ALOLAN_FORMS
SINGLE_ANIMATION(DiglettAlolan);
SINGLE_ANIMATION(DugtrioAlolan);
#endif //P_ALOLAN_FORMS
#endif //P_FAMILY_DIGLETT
#if P_FAMILY_MEOWTH
SINGLE_ANIMATION(Meowth);
SINGLE_ANIMATION(Persian);
#if P_ALOLAN_FORMS
SINGLE_ANIMATION(MeowthAlolan);
SINGLE_ANIMATION(PersianAlolan);
#endif //P_ALOLAN_FORMS
#if P_GALARIAN_FORMS
SINGLE_ANIMATION(MeowthGalarian);
SINGLE_ANIMATION(Perrserker);
#endif //P_GALARIAN_FORMS
#if P_GIGANTAMAX_FORMS
SINGLE_ANIMATION(MeowthGigantamax);
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_MEOWTH
#if P_FAMILY_PSYDUCK
SINGLE_ANIMATION(Psyduck);
SINGLE_ANIMATION(Golduck);
#endif //P_FAMILY_PSYDUCK
#if P_FAMILY_MANKEY
SINGLE_ANIMATION(Mankey);
SINGLE_ANIMATION(Primeape);
#if P_GEN_9_CROSS_EVOS
SINGLE_ANIMATION(Annihilape);
#endif //P_GEN_9_CROSS_EVOS
#endif //P_FAMILY_MANKEY
#if P_FAMILY_GROWLITHE
SINGLE_ANIMATION(Growlithe);
SINGLE_ANIMATION(Arcanine);
#if P_HISUIAN_FORMS
SINGLE_ANIMATION(GrowlitheHisuian);
SINGLE_ANIMATION(ArcanineHisuian);
#endif //P_HISUIAN_FORMS
#endif //P_FAMILY_GROWLITHE
#if P_FAMILY_POLIWAG
SINGLE_ANIMATION(Poliwag);
SINGLE_ANIMATION(Poliwhirl);
SINGLE_ANIMATION(Poliwrath);
#if P_GEN_2_CROSS_EVOS
SINGLE_ANIMATION(Politoed);
#endif //P_GEN_2_CROSS_EVOS
#endif //P_FAMILY_POLIWAG
#if P_FAMILY_ABRA
SINGLE_ANIMATION(Abra);
SINGLE_ANIMATION(Kadabra);
SINGLE_ANIMATION(Alakazam);
#if P_MEGA_EVOLUTIONS
SINGLE_ANIMATION(AlakazamMega);
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_ABRA
#if P_FAMILY_MACHOP
SINGLE_ANIMATION(Machop);
SINGLE_ANIMATION(Machoke);
SINGLE_ANIMATION(Machamp);
#if P_GIGANTAMAX_FORMS
SINGLE_ANIMATION(MachampGigantamax);
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_MACHOP
#if P_FAMILY_BELLSPROUT
SINGLE_ANIMATION(Bellsprout);
SINGLE_ANIMATION(Weepinbell);
SINGLE_ANIMATION(Victreebel);
#endif //P_FAMILY_BELLSPROUT
#if P_FAMILY_TENTACOOL
SINGLE_ANIMATION(Tentacool);
SINGLE_ANIMATION(Tentacruel);
#endif //P_FAMILY_TENTACOOL
#if P_FAMILY_GEODUDE
SINGLE_ANIMATION(Geodude);
SINGLE_ANIMATION(Graveler);
SINGLE_ANIMATION(Golem);
#if P_ALOLAN_FORMS
SINGLE_ANIMATION(GeodudeAlolan);
SINGLE_ANIMATION(GravelerAlolan);
SINGLE_ANIMATION(GolemAlolan);
#endif //P_ALOLAN_FORMS
#endif //P_FAMILY_GEODUDE
#if P_FAMILY_PONYTA
SINGLE_ANIMATION(Ponyta);
SINGLE_ANIMATION(Rapidash);
#if P_GALARIAN_FORMS
SINGLE_ANIMATION(PonytaGalarian);
SINGLE_ANIMATION(RapidashGalarian);
#endif //P_GALARIAN_FORMS
#endif //P_FAMILY_PONYTA
#if P_FAMILY_SLOWPOKE
SINGLE_ANIMATION(Slowpoke);
SINGLE_ANIMATION(Slowbro);
#if P_GEN_2_CROSS_EVOS
SINGLE_ANIMATION(Slowking);
#endif //P_GEN_2_CROSS_EVOS
#if P_MEGA_EVOLUTIONS
SINGLE_ANIMATION(SlowbroMega);
#endif //P_MEGA_EVOLUTIONS
#if P_GALARIAN_FORMS
SINGLE_ANIMATION(SlowpokeGalarian);
SINGLE_ANIMATION(SlowbroGalarian);
#if P_GEN_2_CROSS_EVOS
SINGLE_ANIMATION(SlowkingGalarian);
#endif //P_GEN_2_CROSS_EVOS
#endif //P_GALARIAN_FORMS
#endif //P_FAMILY_SLOWPOKE
#if P_FAMILY_MAGNEMITE
SINGLE_ANIMATION(Magnemite);
SINGLE_ANIMATION(Magneton);
#if P_GEN_4_CROSS_EVOS
SINGLE_ANIMATION(Magnezone);
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_MAGNEMITE
#if P_FAMILY_FARFETCHD
SINGLE_ANIMATION(Farfetchd);
#if P_GALARIAN_FORMS
SINGLE_ANIMATION(FarfetchdGalarian);
SINGLE_ANIMATION(Sirfetchd);
#endif //P_GALARIAN_FORMS
#endif //P_FAMILY_FARFETCHD
#if P_FAMILY_DODUO
SINGLE_ANIMATION(Doduo);
SINGLE_ANIMATION(Dodrio);
#endif //P_FAMILY_DODUO
#if P_FAMILY_SEEL
SINGLE_ANIMATION(Seel);
SINGLE_ANIMATION(Dewgong);
#endif //P_FAMILY_SEEL
#if P_FAMILY_GRIMER
SINGLE_ANIMATION(Grimer);
SINGLE_ANIMATION(Muk);
#if P_ALOLAN_FORMS
SINGLE_ANIMATION(GrimerAlolan);
SINGLE_ANIMATION(MukAlolan);
#endif //P_ALOLAN_FORMS
#endif //P_FAMILY_GRIMER
#if P_FAMILY_SHELLDER
SINGLE_ANIMATION(Shellder);
SINGLE_ANIMATION(Cloyster);
#endif //P_FAMILY_SHELLDER
#if P_FAMILY_GASTLY
SINGLE_ANIMATION(Gastly);
SINGLE_ANIMATION(Haunter);
SINGLE_ANIMATION(Gengar);
#if P_MEGA_EVOLUTIONS
SINGLE_ANIMATION(GengarMega);
#endif //P_MEGA_EVOLUTIONS
#if P_GIGANTAMAX_FORMS
SINGLE_ANIMATION(GengarGigantamax);
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_GASTLY
#if P_FAMILY_ONIX
SINGLE_ANIMATION(Onix);
#if P_GEN_2_CROSS_EVOS
SINGLE_ANIMATION(Steelix);
#if P_MEGA_EVOLUTIONS
SINGLE_ANIMATION(SteelixMega);
#endif //P_MEGA_EVOLUTIONS
#endif //P_GEN_2_CROSS_EVOS
#endif //P_FAMILY_ONIX
#if P_FAMILY_DROWZEE
SINGLE_ANIMATION(Drowzee);
SINGLE_ANIMATION(Hypno);
#endif //P_FAMILY_DROWZEE
#if P_FAMILY_KRABBY
SINGLE_ANIMATION(Krabby);
SINGLE_ANIMATION(Kingler);
#if P_GIGANTAMAX_FORMS
SINGLE_ANIMATION(KinglerGigantamax);
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_KRABBY
#if P_FAMILY_VOLTORB
SINGLE_ANIMATION(Voltorb);
SINGLE_ANIMATION(Electrode);
#if P_HISUIAN_FORMS
SINGLE_ANIMATION(VoltorbHisuian);
SINGLE_ANIMATION(ElectrodeHisuian);
#endif //P_HISUIAN_FORMS
#endif //P_FAMILY_VOLTORB
#if P_FAMILY_EXEGGCUTE
SINGLE_ANIMATION(Exeggcute);
SINGLE_ANIMATION(Exeggutor);
#if P_ALOLAN_FORMS
SINGLE_ANIMATION(ExeggutorAlolan);
#endif //P_ALOLAN_FORMS
#endif //P_FAMILY_EXEGGCUTE
#if P_FAMILY_CUBONE
SINGLE_ANIMATION(Cubone);
SINGLE_ANIMATION(Marowak);
#if P_ALOLAN_FORMS
SINGLE_ANIMATION(MarowakAlolan);
#endif //P_ALOLAN_FORMS
#endif //P_FAMILY_CUBONE
#if P_FAMILY_HITMONS
#if P_GEN_2_CROSS_EVOS
SINGLE_ANIMATION(Tyrogue);
#endif //P_GEN_2_CROSS_EVOS
SINGLE_ANIMATION(Hitmonlee);
SINGLE_ANIMATION(Hitmonchan);
#if P_GEN_2_CROSS_EVOS
SINGLE_ANIMATION(Hitmontop);
#endif //P_GEN_2_CROSS_EVOS
#endif //P_FAMILY_HITMONS
#if P_FAMILY_LICKITUNG
SINGLE_ANIMATION(Lickitung);
#if P_GEN_4_CROSS_EVOS
SINGLE_ANIMATION(Lickilicky);
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_LICKITUNG
#if P_FAMILY_KOFFING
SINGLE_ANIMATION(Koffing);
SINGLE_ANIMATION(Weezing);
#if P_GALARIAN_FORMS
SINGLE_ANIMATION(WeezingGalarian);
#endif //P_GALARIAN_FORMS
#endif //P_FAMILY_KOFFING
#if P_FAMILY_RHYHORN
SINGLE_ANIMATION(Rhyhorn);
SINGLE_ANIMATION(Rhydon);
#if P_GEN_4_CROSS_EVOS
SINGLE_ANIMATION(Rhyperior);
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_RHYHORN
#if P_FAMILY_CHANSEY
#if P_GEN_4_CROSS_EVOS
SINGLE_ANIMATION(Happiny);
#endif //P_GEN_4_CROSS_EVOS
SINGLE_ANIMATION(Chansey);
#if P_GEN_2_CROSS_EVOS
SINGLE_ANIMATION(Blissey);
#endif //P_GEN_2_CROSS_EVOS
#endif //P_FAMILY_CHANSEY
#if P_FAMILY_TANGELA
SINGLE_ANIMATION(Tangela);
#if P_GEN_4_CROSS_EVOS
SINGLE_ANIMATION(Tangrowth);
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_TANGELA
#if P_FAMILY_KANGASKHAN
SINGLE_ANIMATION(Kangaskhan);
#if P_MEGA_EVOLUTIONS
SINGLE_ANIMATION(KangaskhanMega);
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_KANGASKHAN
#if P_FAMILY_HORSEA
SINGLE_ANIMATION(Horsea);
SINGLE_ANIMATION(Seadra);
#if P_GEN_2_CROSS_EVOS
SINGLE_ANIMATION(Kingdra);
#endif //P_GEN_2_CROSS_EVOS
#endif //P_FAMILY_HORSEA
#if P_FAMILY_GOLDEEN
SINGLE_ANIMATION(Goldeen);
SINGLE_ANIMATION(Seaking);
#endif //P_FAMILY_GOLDEEN
#if P_FAMILY_STARYU
SINGLE_ANIMATION(Staryu);
SINGLE_ANIMATION(Starmie);
#endif //P_FAMILY_STARYU
#if P_FAMILY_MR_MIME
#if P_GEN_4_CROSS_EVOS
SINGLE_ANIMATION(MimeJr);
#endif //P_GEN_4_CROSS_EVOS
SINGLE_ANIMATION(MrMime);
#if P_GALARIAN_FORMS
SINGLE_ANIMATION(MrMimeGalarian);
SINGLE_ANIMATION(MrRime);
#endif //P_GALARIAN_FORMS
#endif //P_FAMILY_MR_MIME
#if P_FAMILY_SCYTHER
SINGLE_ANIMATION(Scyther);
#if P_GEN_2_CROSS_EVOS
SINGLE_ANIMATION(Scizor);
#if P_MEGA_EVOLUTIONS
SINGLE_ANIMATION(ScizorMega);
#endif //P_MEGA_EVOLUTIONS
#endif //P_GEN_2_CROSS_EVOS
#if P_GEN_8_CROSS_EVOS
SINGLE_ANIMATION(Kleavor);
#endif //P_GEN_8_CROSS_EVOS
#endif //P_FAMILY_SCYTHER
#if P_FAMILY_JYNX
#if P_GEN_2_CROSS_EVOS
SINGLE_ANIMATION(Smoochum);
#endif //P_GEN_2_CROSS_EVOS
SINGLE_ANIMATION(Jynx);
#endif //P_FAMILY_JYNX
#if P_FAMILY_ELECTABUZZ
#if P_GEN_2_CROSS_EVOS
SINGLE_ANIMATION(Elekid);
#endif //P_GEN_2_CROSS_EVOS
SINGLE_ANIMATION(Electabuzz);
#if P_GEN_4_CROSS_EVOS
SINGLE_ANIMATION(Electivire);
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_ELECTABUZZ
#if P_FAMILY_MAGMAR
#if P_GEN_2_CROSS_EVOS
SINGLE_ANIMATION(Magby);
#endif //P_GEN_2_CROSS_EVOS
SINGLE_ANIMATION(Magmar);
#if P_GEN_4_CROSS_EVOS
SINGLE_ANIMATION(Magmortar);
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_MAGMAR
#if P_FAMILY_PINSIR
SINGLE_ANIMATION(Pinsir);
#if P_MEGA_EVOLUTIONS
SINGLE_ANIMATION(PinsirMega);
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_PINSIR
#if P_FAMILY_TAUROS
SINGLE_ANIMATION(Tauros);
#if P_PALDEAN_FORMS
SINGLE_ANIMATION(TaurosPaldean);
#endif //P_PALDEAN_FORMS
#endif //P_FAMILY_TAUROS
#if P_FAMILY_MAGIKARP
SINGLE_ANIMATION(Magikarp);
SINGLE_ANIMATION(Gyarados);
#if P_MEGA_EVOLUTIONS
SINGLE_ANIMATION(GyaradosMega);
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_MAGIKARP
#if P_FAMILY_LAPRAS
SINGLE_ANIMATION(Lapras);
#if P_GIGANTAMAX_FORMS
SINGLE_ANIMATION(LaprasGigantamax);
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_LAPRAS
#if P_FAMILY_DITTO
SINGLE_ANIMATION(Ditto);
#endif //P_FAMILY_DITTO
#if P_FAMILY_EEVEE
SINGLE_ANIMATION(Eevee);
#if P_GIGANTAMAX_FORMS
SINGLE_ANIMATION(EeveeGigantamax);
#endif //P_GIGANTAMAX_FORMS
SINGLE_ANIMATION(Vaporeon);
SINGLE_ANIMATION(Jolteon);
SINGLE_ANIMATION(Flareon);
#if P_GEN_2_CROSS_EVOS
SINGLE_ANIMATION(Espeon);
SINGLE_ANIMATION(Umbreon);
#endif //P_GEN_2_CROSS_EVOS
#if P_GEN_4_CROSS_EVOS
SINGLE_ANIMATION(Leafeon);
SINGLE_ANIMATION(Glaceon);
#endif //P_GEN_4_CROSS_EVOS
#if P_GEN_6_CROSS_EVOS
SINGLE_ANIMATION(Sylveon);
#endif //P_GEN_6_CROSS_EVOS
#endif //P_FAMILY_EEVEE
#if P_FAMILY_PORYGON
SINGLE_ANIMATION(Porygon);
#if P_GEN_2_CROSS_EVOS
SINGLE_ANIMATION(Porygon2);
#if P_GEN_4_CROSS_EVOS
SINGLE_ANIMATION(Porygon_Z);
#endif //P_GEN_4_CROSS_EVOS
#endif //P_GEN_2_CROSS_EVOS
#endif //P_FAMILY_PORYGON
#if P_FAMILY_OMANYTE
SINGLE_ANIMATION(Omanyte);
SINGLE_ANIMATION(Omastar);
#endif //P_FAMILY_OMANYTE
#if P_FAMILY_KABUTO
SINGLE_ANIMATION(Kabuto);
SINGLE_ANIMATION(Kabutops);
#endif //P_FAMILY_KABUTO
#if P_FAMILY_AERODACTYL
SINGLE_ANIMATION(Aerodactyl);
#if P_MEGA_EVOLUTIONS
SINGLE_ANIMATION(AerodactylMega);
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_AERODACTYL
#if P_FAMILY_SNORLAX
#if P_GEN_4_CROSS_EVOS
SINGLE_ANIMATION(Munchlax);
#endif //P_GEN_4_CROSS_EVOS
SINGLE_ANIMATION(Snorlax);
#if P_GIGANTAMAX_FORMS
SINGLE_ANIMATION(SnorlaxGigantamax);
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_SNORLAX
#if P_FAMILY_ARTICUNO
SINGLE_ANIMATION(Articuno);
#if P_GALARIAN_FORMS
SINGLE_ANIMATION(ArticunoGalarian);
#endif //P_GALARIAN_FORMS
#endif //P_FAMILY_ARTICUNO
#if P_FAMILY_ZAPDOS
SINGLE_ANIMATION(Zapdos);
#if P_GALARIAN_FORMS
SINGLE_ANIMATION(ZapdosGalarian);
#endif //P_GALARIAN_FORMS
#endif //P_FAMILY_ZAPDOS
#if P_FAMILY_MOLTRES
SINGLE_ANIMATION(Moltres);
#if P_GALARIAN_FORMS
SINGLE_ANIMATION(MoltresGalarian);
#endif //P_GALARIAN_FORMS
#endif //P_FAMILY_MOLTRES
#if P_FAMILY_DRATINI
SINGLE_ANIMATION(Dratini);
SINGLE_ANIMATION(Dragonair);
SINGLE_ANIMATION(Dragonite);
#endif //P_FAMILY_DRATINI
#if P_FAMILY_MEWTWO
SINGLE_ANIMATION(Mewtwo);
#if P_MEGA_EVOLUTIONS
SINGLE_ANIMATION(MewtwoMegaX);
SINGLE_ANIMATION(MewtwoMegaY);
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_MEWTWO
#if P_FAMILY_MEW
SINGLE_ANIMATION(Mew);
#endif //P_FAMILY_MEW
#if P_FAMILY_CHIKORITA
SINGLE_ANIMATION(Chikorita);
SINGLE_ANIMATION(Bayleef);
SINGLE_ANIMATION(Meganium);
#endif //P_FAMILY_CHIKORITA
#if P_FAMILY_CYNDAQUIL
SINGLE_ANIMATION(Cyndaquil);
SINGLE_ANIMATION(Quilava);
SINGLE_ANIMATION(Typhlosion);
#if P_HISUIAN_FORMS
SINGLE_ANIMATION(TyphlosionHisuian);
#endif //P_HISUIAN_FORMS
#endif //P_FAMILY_CYNDAQUIL
#if P_FAMILY_TOTODILE
SINGLE_ANIMATION(Totodile);
SINGLE_ANIMATION(Croconaw);
SINGLE_ANIMATION(Feraligatr);
#endif //P_FAMILY_TOTODILE
#if P_FAMILY_SENTRET
SINGLE_ANIMATION(Sentret);
SINGLE_ANIMATION(Furret);
#endif //P_FAMILY_SENTRET
#if P_FAMILY_HOOTHOOT
SINGLE_ANIMATION(Hoothoot);
SINGLE_ANIMATION(Noctowl);
#endif //P_FAMILY_HOOTHOOT
#if P_FAMILY_LEDYBA
SINGLE_ANIMATION(Ledyba);
SINGLE_ANIMATION(Ledian);
#endif //P_FAMILY_LEDYBA
#if P_FAMILY_SPINARAK
SINGLE_ANIMATION(Spinarak);
SINGLE_ANIMATION(Ariados);
#endif //P_FAMILY_SPINARAK
#if P_FAMILY_CHINCHOU
SINGLE_ANIMATION(Chinchou);
SINGLE_ANIMATION(Lanturn);
#endif //P_FAMILY_CHINCHOU
#if P_FAMILY_TOGEPI
SINGLE_ANIMATION(Togepi);
SINGLE_ANIMATION(Togetic);
#if P_GEN_4_CROSS_EVOS
SINGLE_ANIMATION(Togekiss);
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_TOGEPI
#if P_FAMILY_NATU
SINGLE_ANIMATION(Natu);
SINGLE_ANIMATION(Xatu);
#endif //P_FAMILY_NATU
#if P_FAMILY_MAREEP
SINGLE_ANIMATION(Mareep);
SINGLE_ANIMATION(Flaaffy);
SINGLE_ANIMATION(Ampharos);
#if P_MEGA_EVOLUTIONS
SINGLE_ANIMATION(AmpharosMega);
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_MAREEP
#if P_FAMILY_MARILL
#if P_GEN_3_CROSS_EVOS
SINGLE_ANIMATION(Azurill);
#endif //P_GEN_3_CROSS_EVOS
SINGLE_ANIMATION(Marill);
SINGLE_ANIMATION(Azumarill);
#endif //P_FAMILY_MARILL
#if P_FAMILY_SUDOWOODO
#if P_GEN_4_CROSS_EVOS
SINGLE_ANIMATION(Bonsly);
#endif //P_GEN_4_CROSS_EVOS
SINGLE_ANIMATION(Sudowoodo);
#endif //P_FAMILY_SUDOWOODO
#if P_FAMILY_HOPPIP
SINGLE_ANIMATION(Hoppip);
SINGLE_ANIMATION(Skiploom);
SINGLE_ANIMATION(Jumpluff);
#endif //P_FAMILY_HOPPIP
#if P_FAMILY_AIPOM
SINGLE_ANIMATION(Aipom);
#if P_GEN_4_CROSS_EVOS
SINGLE_ANIMATION(Ambipom);
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_AIPOM
#if P_FAMILY_SUNKERN
SINGLE_ANIMATION(Sunkern);
SINGLE_ANIMATION(Sunflora);
#endif //P_FAMILY_SUNKERN
#if P_FAMILY_YANMA
SINGLE_ANIMATION(Yanma);
#if P_GEN_4_CROSS_EVOS
SINGLE_ANIMATION(Yanmega);
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_YANMA
#if P_FAMILY_WOOPER
SINGLE_ANIMATION(Wooper);
SINGLE_ANIMATION(Quagsire);
#if P_PALDEAN_FORMS
SINGLE_ANIMATION(WooperPaldean);
SINGLE_ANIMATION(Clodsire);
#endif //P_PALDEAN_FORMS
#endif //P_FAMILY_WOOPER
#if P_FAMILY_MURKROW
SINGLE_ANIMATION(Murkrow);
#if P_GEN_4_CROSS_EVOS
SINGLE_ANIMATION(Honchkrow);
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_MURKROW
#if P_FAMILY_MISDREAVUS
SINGLE_ANIMATION(Misdreavus);
#if P_GEN_4_CROSS_EVOS
SINGLE_ANIMATION(Mismagius);
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_MISDREAVUS
#if P_FAMILY_UNOWN
SINGLE_ANIMATION(Unown);
#endif //P_FAMILY_UNOWN
#if P_FAMILY_WOBBUFFET
#if P_GEN_3_CROSS_EVOS
SINGLE_ANIMATION(Wynaut);
#endif //P_GEN_3_CROSS_EVOS
SINGLE_ANIMATION(Wobbuffet);
#endif //P_FAMILY_WOBBUFFET
#if P_FAMILY_GIRAFARIG
SINGLE_ANIMATION(Girafarig);
#if P_GEN_9_CROSS_EVOS
SINGLE_ANIMATION(Farigiraf);
#endif //P_GEN_9_CROSS_EVOS
#endif //P_FAMILY_GIRAFARIG
#if P_FAMILY_PINECO
SINGLE_ANIMATION(Pineco);
SINGLE_ANIMATION(Forretress);
#endif //P_FAMILY_PINECO
#if P_FAMILY_DUNSPARCE
SINGLE_ANIMATION(Dunsparce);
#if P_GEN_9_CROSS_EVOS
SINGLE_ANIMATION(Dudunsparce);
#endif //P_GEN_9_CROSS_EVOS
#endif //P_FAMILY_DUNSPARCE
#if P_FAMILY_GLIGAR
SINGLE_ANIMATION(Gligar);
#if P_GEN_4_CROSS_EVOS
SINGLE_ANIMATION(Gliscor);
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_GLIGAR
#if P_FAMILY_SNUBBULL
SINGLE_ANIMATION(Snubbull);
SINGLE_ANIMATION(Granbull);
#endif //P_FAMILY_SNUBBULL
#if P_FAMILY_QWILFISH
SINGLE_ANIMATION(Qwilfish);
#if P_HISUIAN_FORMS
SINGLE_ANIMATION(QwilfishHisuian);
SINGLE_ANIMATION(Overqwil);
#endif //P_HISUIAN_FORMS
#endif //P_FAMILY_QWILFISH
#if P_FAMILY_SHUCKLE
SINGLE_ANIMATION(Shuckle);
#endif //P_FAMILY_SHUCKLE
#if P_FAMILY_HERACROSS
SINGLE_ANIMATION(Heracross);
#if P_MEGA_EVOLUTIONS
SINGLE_ANIMATION(HeracrossMega);
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_HERACROSS
#if P_FAMILY_SNEASEL
SINGLE_ANIMATION(Sneasel);
#if P_GEN_4_CROSS_EVOS
SINGLE_ANIMATION(Weavile);
#endif //P_GEN_4_CROSS_EVOS
#if P_HISUIAN_FORMS
SINGLE_ANIMATION(SneaselHisuian);
SINGLE_ANIMATION(Sneasler);
#endif //P_HISUIAN_FORMS
#endif //P_FAMILY_SNEASEL
#if P_FAMILY_TEDDIURSA
SINGLE_ANIMATION(Teddiursa);
SINGLE_ANIMATION(Ursaring);
#if P_GEN_8_CROSS_EVOS
SINGLE_ANIMATION(Ursaluna);
SINGLE_ANIMATION(UrsalunaBloodmoon);
#endif //P_GEN_8_CROSS_EVOS
#endif //P_FAMILY_TEDDIURSA
#if P_FAMILY_SLUGMA
SINGLE_ANIMATION(Slugma);
SINGLE_ANIMATION(Magcargo);
#endif //P_FAMILY_SLUGMA
#if P_FAMILY_SWINUB
SINGLE_ANIMATION(Swinub);
SINGLE_ANIMATION(Piloswine);
#if P_GEN_4_CROSS_EVOS
SINGLE_ANIMATION(Mamoswine);
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_SWINUB
#if P_FAMILY_CORSOLA
SINGLE_ANIMATION(Corsola);
#if P_GALARIAN_FORMS
SINGLE_ANIMATION(CorsolaGalarian);
SINGLE_ANIMATION(Cursola);
#endif //P_GALARIAN_FORMS
#endif //P_FAMILY_CORSOLA
#if P_FAMILY_REMORAID
SINGLE_ANIMATION(Remoraid);
SINGLE_ANIMATION(Octillery);
#endif //P_FAMILY_REMORAID
#if P_FAMILY_DELIBIRD
SINGLE_ANIMATION(Delibird);
#endif //P_FAMILY_DELIBIRD
#if P_FAMILY_MANTINE
#if P_GEN_4_CROSS_EVOS
SINGLE_ANIMATION(Mantyke);
#endif //P_GEN_4_CROSS_EVOS
SINGLE_ANIMATION(Mantine);
#endif //P_FAMILY_MANTINE
#if P_FAMILY_SKARMORY
SINGLE_ANIMATION(Skarmory);
#endif //P_FAMILY_SKARMORY
#if P_FAMILY_HOUNDOUR
SINGLE_ANIMATION(Houndour);
SINGLE_ANIMATION(Houndoom);
#if P_MEGA_EVOLUTIONS
SINGLE_ANIMATION(HoundoomMega);
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_HOUNDOUR
#if P_FAMILY_PHANPY
SINGLE_ANIMATION(Phanpy);
SINGLE_ANIMATION(Donphan);
#endif //P_FAMILY_PHANPY
#if P_FAMILY_STANTLER
SINGLE_ANIMATION(Stantler);
#if P_GEN_8_CROSS_EVOS
SINGLE_ANIMATION(Wyrdeer);
#endif //P_GEN_8_CROSS_EVOS
#endif //P_FAMILY_STANTLER
#if P_FAMILY_SMEARGLE
SINGLE_ANIMATION(Smeargle);
#endif //P_FAMILY_SMEARGLE
#if P_FAMILY_MILTANK
SINGLE_ANIMATION(Miltank);
#endif //P_FAMILY_MILTANK
#if P_FAMILY_RAIKOU
SINGLE_ANIMATION(Raikou);
#endif //P_FAMILY_RAIKOU
#if P_FAMILY_ENTEI
SINGLE_ANIMATION(Entei);
#endif //P_FAMILY_ENTEI
#if P_FAMILY_SUICUNE
SINGLE_ANIMATION(Suicune);
#endif //P_FAMILY_SUICUNE
#if P_FAMILY_LARVITAR
SINGLE_ANIMATION(Larvitar);
SINGLE_ANIMATION(Pupitar);
SINGLE_ANIMATION(Tyranitar);
#if P_MEGA_EVOLUTIONS
SINGLE_ANIMATION(TyranitarMega);
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_LARVITAR
#if P_FAMILY_LUGIA
SINGLE_ANIMATION(Lugia);
#endif //P_FAMILY_LUGIA
#if P_FAMILY_HO_OH
SINGLE_ANIMATION(HoOh);
#endif //P_FAMILY_HO_OH
#if P_FAMILY_CELEBI
SINGLE_ANIMATION(Celebi);
#endif //P_FAMILY_CELEBI
#if P_FAMILY_TREECKO
SINGLE_ANIMATION(Treecko);
SINGLE_ANIMATION(Grovyle);
SINGLE_ANIMATION(Sceptile);
#if P_MEGA_EVOLUTIONS
SINGLE_ANIMATION(SceptileMega);
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_TREECKO
#if P_FAMILY_TORCHIC
SINGLE_ANIMATION(Torchic);
SINGLE_ANIMATION(Combusken);
SINGLE_ANIMATION(Blaziken);
#if P_MEGA_EVOLUTIONS
SINGLE_ANIMATION(BlazikenMega);
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_TORCHIC
#if P_FAMILY_MUDKIP
SINGLE_ANIMATION(Mudkip);
SINGLE_ANIMATION(Marshtomp);
SINGLE_ANIMATION(Swampert);
#if P_MEGA_EVOLUTIONS
SINGLE_ANIMATION(SwampertMega);
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_MUDKIP
#if P_FAMILY_POOCHYENA
SINGLE_ANIMATION(Poochyena);
SINGLE_ANIMATION(Mightyena);
#endif //P_FAMILY_POOCHYENA
#if P_FAMILY_ZIGZAGOON
SINGLE_ANIMATION(Zigzagoon);
SINGLE_ANIMATION(Linoone);
#if P_GALARIAN_FORMS
SINGLE_ANIMATION(ZigzagoonGalarian);
SINGLE_ANIMATION(LinooneGalarian);
SINGLE_ANIMATION(Obstagoon);
#endif //P_GALARIAN_FORMS
#endif //P_FAMILY_ZIGZAGOON
#if P_FAMILY_WURMPLE
SINGLE_ANIMATION(Wurmple);
SINGLE_ANIMATION(Silcoon);
SINGLE_ANIMATION(Beautifly);
SINGLE_ANIMATION(Cascoon);
SINGLE_ANIMATION(Dustox);
#endif //P_FAMILY_WURMPLE
#if P_FAMILY_LOTAD
SINGLE_ANIMATION(Lotad);
SINGLE_ANIMATION(Lombre);
SINGLE_ANIMATION(Ludicolo);
#endif //P_FAMILY_LOTAD
#if P_FAMILY_SEEDOT
SINGLE_ANIMATION(Seedot);
SINGLE_ANIMATION(Nuzleaf);
SINGLE_ANIMATION(Shiftry);
#endif //P_FAMILY_SEEDOT
#if P_FAMILY_TAILLOW
SINGLE_ANIMATION(Taillow);
SINGLE_ANIMATION(Swellow);
#endif //P_FAMILY_TAILLOW
#if P_FAMILY_WINGULL
SINGLE_ANIMATION(Wingull);
SINGLE_ANIMATION(Pelipper);
#endif //P_FAMILY_WINGULL
#if P_FAMILY_RALTS
SINGLE_ANIMATION(Ralts);
SINGLE_ANIMATION(Kirlia);
SINGLE_ANIMATION(Gardevoir);
#if P_MEGA_EVOLUTIONS
SINGLE_ANIMATION(GardevoirMega);
#endif //P_MEGA_EVOLUTIONS
#if P_GEN_4_CROSS_EVOS
SINGLE_ANIMATION(Gallade);
#if P_MEGA_EVOLUTIONS
SINGLE_ANIMATION(GalladeMega);
#endif //P_MEGA_EVOLUTIONS
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_RALTS
#if P_FAMILY_SURSKIT
SINGLE_ANIMATION(Surskit);
SINGLE_ANIMATION(Masquerain);
#endif //P_FAMILY_SURSKIT
#if P_FAMILY_SHROOMISH
SINGLE_ANIMATION(Shroomish);
SINGLE_ANIMATION(Breloom);
#endif //P_FAMILY_SHROOMISH
#if P_FAMILY_SLAKOTH
SINGLE_ANIMATION(Slakoth);
SINGLE_ANIMATION(Vigoroth);
SINGLE_ANIMATION(Slaking);
#endif //P_FAMILY_SLAKOTH
#if P_FAMILY_NINCADA
SINGLE_ANIMATION(Nincada);
SINGLE_ANIMATION(Ninjask);
SINGLE_ANIMATION(Shedinja);
#endif //P_FAMILY_NINCADA
#if P_FAMILY_WHISMUR
SINGLE_ANIMATION(Whismur);
SINGLE_ANIMATION(Loudred);
SINGLE_ANIMATION(Exploud);
#endif //P_FAMILY_WHISMUR
#if P_FAMILY_MAKUHITA
SINGLE_ANIMATION(Makuhita);
SINGLE_ANIMATION(Hariyama);
#endif //P_FAMILY_MAKUHITA
#if P_FAMILY_NOSEPASS
SINGLE_ANIMATION(Nosepass);
#if P_GEN_4_CROSS_EVOS
SINGLE_ANIMATION(Probopass);
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_NOSEPASS
#if P_FAMILY_SKITTY
SINGLE_ANIMATION(Skitty);
SINGLE_ANIMATION(Delcatty);
#endif //P_FAMILY_SKITTY
#if P_FAMILY_SABLEYE
SINGLE_ANIMATION(Sableye);
#if P_MEGA_EVOLUTIONS
SINGLE_ANIMATION(SableyeMega);
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_SABLEYE
#if P_FAMILY_MAWILE
SINGLE_ANIMATION(Mawile);
#if P_MEGA_EVOLUTIONS
SINGLE_ANIMATION(MawileMega);
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_MAWILE
#if P_FAMILY_ARON
SINGLE_ANIMATION(Aron);
SINGLE_ANIMATION(Lairon);
SINGLE_ANIMATION(Aggron);
#if P_MEGA_EVOLUTIONS
SINGLE_ANIMATION(AggronMega);
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_ARON
#if P_FAMILY_MEDITITE
SINGLE_ANIMATION(Meditite);
SINGLE_ANIMATION(Medicham);
#if P_MEGA_EVOLUTIONS
SINGLE_ANIMATION(MedichamMega);
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_MEDITITE
#if P_FAMILY_ELECTRIKE
SINGLE_ANIMATION(Electrike);
SINGLE_ANIMATION(Manectric);
#if P_MEGA_EVOLUTIONS
SINGLE_ANIMATION(ManectricMega);
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_ELECTRIKE
#if P_FAMILY_PLUSLE
SINGLE_ANIMATION(Plusle);
#endif //P_FAMILY_PLUSLE
#if P_FAMILY_MINUN
SINGLE_ANIMATION(Minun);
#endif //P_FAMILY_MINUN
#if P_FAMILY_VOLBEAT_ILLUMISE
SINGLE_ANIMATION(Volbeat);
SINGLE_ANIMATION(Illumise);
#endif //P_FAMILY_VOLBEAT_ILLUMISE
#if P_FAMILY_ROSELIA
#if P_GEN_4_CROSS_EVOS
SINGLE_ANIMATION(Budew);
#endif //P_GEN_4_CROSS_EVOS
SINGLE_ANIMATION(Roselia);
#if P_GEN_4_CROSS_EVOS
SINGLE_ANIMATION(Roserade);
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_ROSELIA
#if P_FAMILY_GULPIN
SINGLE_ANIMATION(Gulpin);
SINGLE_ANIMATION(Swalot);
#endif //P_FAMILY_GULPIN
#if P_FAMILY_CARVANHA
SINGLE_ANIMATION(Carvanha);
SINGLE_ANIMATION(Sharpedo);
#if P_MEGA_EVOLUTIONS
SINGLE_ANIMATION(SharpedoMega);
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_CARVANHA
#if P_FAMILY_WAILMER
SINGLE_ANIMATION(Wailmer);
SINGLE_ANIMATION(Wailord);
#endif //P_FAMILY_WAILMER
#if P_FAMILY_NUMEL
SINGLE_ANIMATION(Numel);
SINGLE_ANIMATION(Camerupt);
#if P_MEGA_EVOLUTIONS
SINGLE_ANIMATION(CameruptMega);
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_NUMEL
#if P_FAMILY_TORKOAL
SINGLE_ANIMATION(Torkoal);
#endif //P_FAMILY_TORKOAL
#if P_FAMILY_SPOINK
SINGLE_ANIMATION(Spoink);
SINGLE_ANIMATION(Grumpig);
#endif //P_FAMILY_SPOINK
#if P_FAMILY_SPINDA
SINGLE_ANIMATION(Spinda);
#endif //P_FAMILY_SPINDA
#if P_FAMILY_TRAPINCH
SINGLE_ANIMATION(Trapinch);
SINGLE_ANIMATION(Vibrava);
SINGLE_ANIMATION(Flygon);
#endif //P_FAMILY_TRAPINCH
#if P_FAMILY_CACNEA
SINGLE_ANIMATION(Cacnea);
SINGLE_ANIMATION(Cacturne);
#endif //P_FAMILY_CACNEA
#if P_FAMILY_SWABLU
SINGLE_ANIMATION(Swablu);
SINGLE_ANIMATION(Altaria);
#if P_MEGA_EVOLUTIONS
SINGLE_ANIMATION(AltariaMega);
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_SWABLU
#if P_FAMILY_ZANGOOSE
SINGLE_ANIMATION(Zangoose);
#endif //P_FAMILY_ZANGOOSE
#if P_FAMILY_SEVIPER
SINGLE_ANIMATION(Seviper);
#endif //P_FAMILY_SEVIPER
#if P_FAMILY_LUNATONE
SINGLE_ANIMATION(Lunatone);
#endif //P_FAMILY_LUNATONE
#if P_FAMILY_SOLROCK
SINGLE_ANIMATION(Solrock);
#endif //P_FAMILY_SOLROCK
#if P_FAMILY_BARBOACH
SINGLE_ANIMATION(Barboach);
SINGLE_ANIMATION(Whiscash);
#endif //P_FAMILY_BARBOACH
#if P_FAMILY_CORPHISH
SINGLE_ANIMATION(Corphish);
SINGLE_ANIMATION(Crawdaunt);
#endif //P_FAMILY_CORPHISH
#if P_FAMILY_BALTOY
SINGLE_ANIMATION(Baltoy);
SINGLE_ANIMATION(Claydol);
#endif //P_FAMILY_BALTOY
#if P_FAMILY_LILEEP
SINGLE_ANIMATION(Lileep);
SINGLE_ANIMATION(Cradily);
#endif //P_FAMILY_LILEEP
#if P_FAMILY_ANORITH
SINGLE_ANIMATION(Anorith);
SINGLE_ANIMATION(Armaldo);
#endif //P_FAMILY_ANORITH
#if P_FAMILY_FEEBAS
SINGLE_ANIMATION(Feebas);
SINGLE_ANIMATION(Milotic);
#endif //P_FAMILY_FEEBAS
#if P_FAMILY_CASTFORM
SINGLE_ANIMATION(CastformNormal);
SINGLE_ANIMATION(CastformSunny);
SINGLE_ANIMATION(CastformRainy);
SINGLE_ANIMATION(CastformSnowy);
#endif //P_FAMILY_CASTFORM
#if P_FAMILY_KECLEON
SINGLE_ANIMATION(Kecleon);
#endif //P_FAMILY_KECLEON
#if P_FAMILY_SHUPPET
SINGLE_ANIMATION(Shuppet);
SINGLE_ANIMATION(Banette);
#if P_MEGA_EVOLUTIONS
SINGLE_ANIMATION(BanetteMega);
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_SHUPPET
#if P_FAMILY_DUSKULL
SINGLE_ANIMATION(Duskull);
SINGLE_ANIMATION(Dusclops);
#if P_GEN_4_CROSS_EVOS
SINGLE_ANIMATION(Dusknoir);
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_DUSKULL
#if P_FAMILY_TROPIUS
SINGLE_ANIMATION(Tropius);
#endif //P_FAMILY_TROPIUS
#if P_FAMILY_CHIMECHO
#if P_GEN_4_CROSS_EVOS
SINGLE_ANIMATION(Chingling);
#endif //P_GEN_4_CROSS_EVOS
SINGLE_ANIMATION(Chimecho);
#endif //P_FAMILY_CHIMECHO
#if P_FAMILY_ABSOL
SINGLE_ANIMATION(Absol);
#if P_MEGA_EVOLUTIONS
SINGLE_ANIMATION(AbsolMega);
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_ABSOL
#if P_FAMILY_SNORUNT
SINGLE_ANIMATION(Snorunt);
SINGLE_ANIMATION(Glalie);
#if P_MEGA_EVOLUTIONS
SINGLE_ANIMATION(GlalieMega);
#endif //P_MEGA_EVOLUTIONS
#if P_GEN_4_CROSS_EVOS
SINGLE_ANIMATION(Froslass);
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_SNORUNT
#if P_FAMILY_SPHEAL
SINGLE_ANIMATION(Spheal);
SINGLE_ANIMATION(Sealeo);
SINGLE_ANIMATION(Walrein);
#endif //P_FAMILY_SPHEAL
#if P_FAMILY_CLAMPERL
SINGLE_ANIMATION(Clamperl);
SINGLE_ANIMATION(Huntail);
SINGLE_ANIMATION(Gorebyss);
#endif //P_FAMILY_CLAMPERL
#if P_FAMILY_RELICANTH
SINGLE_ANIMATION(Relicanth);
#endif //P_FAMILY_RELICANTH
#if P_FAMILY_LUVDISC
SINGLE_ANIMATION(Luvdisc);
#endif //P_FAMILY_LUVDISC
#if P_FAMILY_BAGON
SINGLE_ANIMATION(Bagon);
SINGLE_ANIMATION(Shelgon);
SINGLE_ANIMATION(Salamence);
#if P_MEGA_EVOLUTIONS
SINGLE_ANIMATION(SalamenceMega);
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_BAGON
#if P_FAMILY_BELDUM
SINGLE_ANIMATION(Beldum);
SINGLE_ANIMATION(Metang);
SINGLE_ANIMATION(Metagross);
#if P_MEGA_EVOLUTIONS
SINGLE_ANIMATION(MetagrossMega);
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_BELDUM
#if P_FAMILY_REGIROCK
SINGLE_ANIMATION(Regirock);
#endif //P_FAMILY_REGIROCK
#if P_FAMILY_REGICE
SINGLE_ANIMATION(Regice);
#endif //P_FAMILY_REGICE
#if P_FAMILY_REGISTEEL
SINGLE_ANIMATION(Registeel);
#endif //P_FAMILY_REGISTEEL
#if P_FAMILY_LATIAS
SINGLE_ANIMATION(Latias);
#if P_MEGA_EVOLUTIONS
SINGLE_ANIMATION(LatiasMega);
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_LATIAS
#if P_FAMILY_LATIOS
SINGLE_ANIMATION(Latios);
#if P_MEGA_EVOLUTIONS
SINGLE_ANIMATION(LatiosMega);
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_LATIOS
#if P_FAMILY_KYOGRE
SINGLE_ANIMATION(Kyogre);
#if P_PRIMAL_REVERSIONS
SINGLE_ANIMATION(KyogrePrimal);
#endif //P_PRIMAL_REVERSIONS
#endif //P_FAMILY_KYOGRE
#if P_FAMILY_GROUDON
SINGLE_ANIMATION(Groudon);
#if P_PRIMAL_REVERSIONS
SINGLE_ANIMATION(GroudonPrimal);
#endif //P_PRIMAL_REVERSIONS
#endif //P_FAMILY_GROUDON
#if P_FAMILY_RAYQUAZA
SINGLE_ANIMATION(Rayquaza);
#if P_MEGA_EVOLUTIONS
SINGLE_ANIMATION(RayquazaMega);
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_RAYQUAZA
#if P_FAMILY_JIRACHI
SINGLE_ANIMATION(Jirachi);
#endif //P_FAMILY_JIRACHI
#if P_FAMILY_DEOXYS
SINGLE_ANIMATION(DeoxysNormal);
SINGLE_ANIMATION(DeoxysAttack);
SINGLE_ANIMATION(DeoxysDefense);
SINGLE_ANIMATION(DeoxysSpeed);
#endif //P_FAMILY_DEOXYS
#if P_FAMILY_TURTWIG
SINGLE_ANIMATION(Turtwig);
SINGLE_ANIMATION(Grotle);
SINGLE_ANIMATION(Torterra);
#endif //P_FAMILY_TURTWIG
#if P_FAMILY_CHIMCHAR
SINGLE_ANIMATION(Chimchar);
SINGLE_ANIMATION(Monferno);
SINGLE_ANIMATION(Infernape);
#endif //P_FAMILY_CHIMCHAR
#if P_FAMILY_PIPLUP
SINGLE_ANIMATION(Piplup);
SINGLE_ANIMATION(Prinplup);
SINGLE_ANIMATION(Empoleon);
#endif //P_FAMILY_PIPLUP
#if P_FAMILY_STARLY
SINGLE_ANIMATION(Starly);
SINGLE_ANIMATION(Staravia);
SINGLE_ANIMATION(Staraptor);
#endif //P_FAMILY_STARLY
#if P_FAMILY_BIDOOF
SINGLE_ANIMATION(Bidoof);
SINGLE_ANIMATION(Bibarel);
#endif //P_FAMILY_BIDOOF
#if P_FAMILY_KRICKETOT
SINGLE_ANIMATION(Kricketot);
SINGLE_ANIMATION(Kricketune);
#endif //P_FAMILY_KRICKETOT
#if P_FAMILY_SHINX
SINGLE_ANIMATION(Shinx);
SINGLE_ANIMATION(Luxio);
SINGLE_ANIMATION(Luxray);
#endif //P_FAMILY_SHINX
#if P_FAMILY_CRANIDOS
SINGLE_ANIMATION(Cranidos);
SINGLE_ANIMATION(Rampardos);
#endif //P_FAMILY_CRANIDOS
#if P_FAMILY_SHIELDON
SINGLE_ANIMATION(Shieldon);
SINGLE_ANIMATION(Bastiodon);
#endif //P_FAMILY_SHIELDON
#if P_FAMILY_BURMY
SINGLE_ANIMATION(Burmy);
SINGLE_ANIMATION(Wormadam);
SINGLE_ANIMATION(Mothim);
#endif //P_FAMILY_BURMY
#if P_FAMILY_COMBEE
SINGLE_ANIMATION(Combee);
SINGLE_ANIMATION(Vespiquen);
#endif //P_FAMILY_COMBEE
#if P_FAMILY_PACHIRISU
SINGLE_ANIMATION(Pachirisu);
#endif //P_FAMILY_PACHIRISU
#if P_FAMILY_BUIZEL
SINGLE_ANIMATION(Buizel);
SINGLE_ANIMATION(Floatzel);
#endif //P_FAMILY_BUIZEL
#if P_FAMILY_CHERUBI
SINGLE_ANIMATION(Cherubi);
SINGLE_ANIMATION(CherrimOvercast);
SINGLE_ANIMATION(CherrimSunshine);
#endif //P_FAMILY_CHERUBI
#if P_FAMILY_SHELLOS
SINGLE_ANIMATION(Shellos);
SINGLE_ANIMATION(Gastrodon);
#endif //P_FAMILY_SHELLOS
#if P_FAMILY_DRIFLOON
SINGLE_ANIMATION(Drifloon);
SINGLE_ANIMATION(Drifblim);
#endif //P_FAMILY_DRIFLOON
#if P_FAMILY_BUNEARY
SINGLE_ANIMATION(Buneary);
SINGLE_ANIMATION(Lopunny);
#if P_MEGA_EVOLUTIONS
SINGLE_ANIMATION(LopunnyMega);
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_BUNEARY
#if P_FAMILY_GLAMEOW
SINGLE_ANIMATION(Glameow);
SINGLE_ANIMATION(Purugly);
#endif //P_FAMILY_GLAMEOW
#if P_FAMILY_STUNKY
SINGLE_ANIMATION(Stunky);
SINGLE_ANIMATION(Skuntank);
#endif //P_FAMILY_STUNKY
#if P_FAMILY_BRONZOR
SINGLE_ANIMATION(Bronzor);
SINGLE_ANIMATION(Bronzong);
#endif //P_FAMILY_BRONZOR
#if P_FAMILY_CHATOT
SINGLE_ANIMATION(Chatot);
#endif //P_FAMILY_CHATOT
#if P_FAMILY_SPIRITOMB
SINGLE_ANIMATION(Spiritomb);
#endif //P_FAMILY_SPIRITOMB
#if P_FAMILY_GIBLE
SINGLE_ANIMATION(Gible);
SINGLE_ANIMATION(Gabite);
SINGLE_ANIMATION(Garchomp);
#if P_MEGA_EVOLUTIONS
SINGLE_ANIMATION(GarchompMega);
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_GIBLE
#if P_FAMILY_RIOLU
SINGLE_ANIMATION(Riolu);
SINGLE_ANIMATION(Lucario);
#if P_MEGA_EVOLUTIONS
SINGLE_ANIMATION(LucarioMega);
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_RIOLU
#if P_FAMILY_HIPPOPOTAS
SINGLE_ANIMATION(Hippopotas);
SINGLE_ANIMATION(Hippowdon);
#endif //P_FAMILY_HIPPOPOTAS
#if P_FAMILY_SKORUPI
SINGLE_ANIMATION(Skorupi);
SINGLE_ANIMATION(Drapion);
#endif //P_FAMILY_SKORUPI
#if P_FAMILY_CROAGUNK
SINGLE_ANIMATION(Croagunk);
SINGLE_ANIMATION(Toxicroak);
#endif //P_FAMILY_CROAGUNK
#if P_FAMILY_CARNIVINE
SINGLE_ANIMATION(Carnivine);
#endif //P_FAMILY_CARNIVINE
#if P_FAMILY_FINNEON
SINGLE_ANIMATION(Finneon);
SINGLE_ANIMATION(Lumineon);
#endif //P_FAMILY_FINNEON
#if P_FAMILY_SNOVER
SINGLE_ANIMATION(Snover);
SINGLE_ANIMATION(Abomasnow);
#if P_MEGA_EVOLUTIONS
SINGLE_ANIMATION(AbomasnowMega);
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_SNOVER
#if P_FAMILY_ROTOM
SINGLE_ANIMATION(Rotom);
SINGLE_ANIMATION(RotomHeat);
SINGLE_ANIMATION(RotomWash);
SINGLE_ANIMATION(RotomFrost);
SINGLE_ANIMATION(RotomFan);
SINGLE_ANIMATION(RotomMow);
#endif //P_FAMILY_ROTOM
#if P_FAMILY_UXIE
SINGLE_ANIMATION(Uxie);
#endif //P_FAMILY_UXIE
#if P_FAMILY_MESPRIT
SINGLE_ANIMATION(Mesprit);
#endif //P_FAMILY_MESPRIT
#if P_FAMILY_AZELF
SINGLE_ANIMATION(Azelf);
#endif //P_FAMILY_AZELF
#if P_FAMILY_DIALGA
SINGLE_ANIMATION(Dialga);
SINGLE_ANIMATION(DialgaOrigin);
#endif //P_FAMILY_DIALGA
#if P_FAMILY_PALKIA
SINGLE_ANIMATION(Palkia);
SINGLE_ANIMATION(PalkiaOrigin);
#endif //P_FAMILY_PALKIA
#if P_FAMILY_HEATRAN
SINGLE_ANIMATION(Heatran);
#endif //P_FAMILY_HEATRAN
#if P_FAMILY_REGIGIGAS
SINGLE_ANIMATION(Regigigas);
#endif //P_FAMILY_REGIGIGAS
#if P_FAMILY_GIRATINA
SINGLE_ANIMATION(GiratinaAltered);
SINGLE_ANIMATION(GiratinaOrigin);
#endif //P_FAMILY_GIRATINA
#if P_FAMILY_CRESSELIA
SINGLE_ANIMATION(Cresselia);
#endif //P_FAMILY_CRESSELIA
#if P_FAMILY_MANAPHY
SINGLE_ANIMATION(Phione);
SINGLE_ANIMATION(Manaphy);
#endif //P_FAMILY_MANAPHY
#if P_FAMILY_DARKRAI
SINGLE_ANIMATION(Darkrai);
#endif //P_FAMILY_DARKRAI
#if P_FAMILY_SHAYMIN
SINGLE_ANIMATION(ShayminLand);
SINGLE_ANIMATION(ShayminSky);
#endif //P_FAMILY_SHAYMIN
#if P_FAMILY_ARCEUS
SINGLE_ANIMATION(Arceus);
#endif //P_FAMILY_ARCEUS
#if P_FAMILY_VICTINI
SINGLE_ANIMATION(Victini);
#endif //P_FAMILY_VICTINI
#if P_FAMILY_SNIVY
SINGLE_ANIMATION(Snivy);
SINGLE_ANIMATION(Servine);
SINGLE_ANIMATION(Serperior);
#endif //P_FAMILY_SNIVY
#if P_FAMILY_TEPIG
SINGLE_ANIMATION(Tepig);
SINGLE_ANIMATION(Pignite);
SINGLE_ANIMATION(Emboar);
#endif //P_FAMILY_TEPIG
#if P_FAMILY_OSHAWOTT
SINGLE_ANIMATION(Oshawott);
SINGLE_ANIMATION(Dewott);
SINGLE_ANIMATION(Samurott);
#if P_HISUIAN_FORMS
SINGLE_ANIMATION(SamurottHisuian);
#endif //P_HISUIAN_FORMS
#endif //P_FAMILY_OSHAWOTT
#if P_FAMILY_PATRAT
SINGLE_ANIMATION(Patrat);
SINGLE_ANIMATION(Watchog);
#endif //P_FAMILY_PATRAT
#if P_FAMILY_LILLIPUP
SINGLE_ANIMATION(Lillipup);
SINGLE_ANIMATION(Herdier);
SINGLE_ANIMATION(Stoutland);
#endif //P_FAMILY_LILLIPUP
#if P_FAMILY_PURRLOIN
SINGLE_ANIMATION(Purrloin);
SINGLE_ANIMATION(Liepard);
#endif //P_FAMILY_PURRLOIN
#if P_FAMILY_PANSAGE
SINGLE_ANIMATION(Pansage);
SINGLE_ANIMATION(Simisage);
#endif //P_FAMILY_PANSAGE
#if P_FAMILY_PANSEAR
SINGLE_ANIMATION(Pansear);
SINGLE_ANIMATION(Simisear);
#endif //P_FAMILY_PANSEAR
#if P_FAMILY_PANPOUR
SINGLE_ANIMATION(Panpour);
SINGLE_ANIMATION(Simipour);
#endif //P_FAMILY_PANPOUR
#if P_FAMILY_MUNNA
SINGLE_ANIMATION(Munna);
SINGLE_ANIMATION(Musharna);
#endif //P_FAMILY_MUNNA
#if P_FAMILY_PIDOVE
SINGLE_ANIMATION(Pidove);
SINGLE_ANIMATION(Tranquill);
SINGLE_ANIMATION(Unfezant);
#endif //P_FAMILY_PIDOVE
#if P_FAMILY_BLITZLE
SINGLE_ANIMATION(Blitzle);
SINGLE_ANIMATION(Zebstrika);
#endif //P_FAMILY_BLITZLE
#if P_FAMILY_ROGGENROLA
SINGLE_ANIMATION(Roggenrola);
SINGLE_ANIMATION(Boldore);
SINGLE_ANIMATION(Gigalith);
#endif //P_FAMILY_ROGGENROLA
#if P_FAMILY_WOOBAT
SINGLE_ANIMATION(Woobat);
SINGLE_ANIMATION(Swoobat);
#endif //P_FAMILY_WOOBAT
#if P_FAMILY_DRILBUR
SINGLE_ANIMATION(Drilbur);
SINGLE_ANIMATION(Excadrill);
#endif //P_FAMILY_DRILBUR
#if P_FAMILY_AUDINO
SINGLE_ANIMATION(Audino);
#if P_MEGA_EVOLUTIONS
SINGLE_ANIMATION(AudinoMega);
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_AUDINO
#if P_FAMILY_TIMBURR
SINGLE_ANIMATION(Timburr);
SINGLE_ANIMATION(Gurdurr);
SINGLE_ANIMATION(Conkeldurr);
#endif //P_FAMILY_TIMBURR
#if P_FAMILY_TYMPOLE
SINGLE_ANIMATION(Tympole);
SINGLE_ANIMATION(Palpitoad);
SINGLE_ANIMATION(Seismitoad);
#endif //P_FAMILY_TYMPOLE
#if P_FAMILY_THROH
SINGLE_ANIMATION(Throh);
#endif //P_FAMILY_THROH
#if P_FAMILY_SAWK
SINGLE_ANIMATION(Sawk);
#endif //P_FAMILY_SAWK
#if P_FAMILY_SEWADDLE
SINGLE_ANIMATION(Sewaddle);
SINGLE_ANIMATION(Swadloon);
SINGLE_ANIMATION(Leavanny);
#endif //P_FAMILY_SEWADDLE
#if P_FAMILY_VENIPEDE
SINGLE_ANIMATION(Venipede);
SINGLE_ANIMATION(Whirlipede);
SINGLE_ANIMATION(Scolipede);
#endif //P_FAMILY_VENIPEDE
#if P_FAMILY_COTTONEE
SINGLE_ANIMATION(Cottonee);
SINGLE_ANIMATION(Whimsicott);
#endif //P_FAMILY_COTTONEE
#if P_FAMILY_PETILIL
SINGLE_ANIMATION(Petilil);
SINGLE_ANIMATION(Lilligant);
#if P_HISUIAN_FORMS
SINGLE_ANIMATION(LilligantHisuian);
#endif //P_HISUIAN_FORMS
#endif //P_FAMILY_PETILIL
#if P_FAMILY_BASCULIN
SINGLE_ANIMATION(Basculin);
#if P_HISUIAN_FORMS
SINGLE_ANIMATION(Basculegion);
#endif //P_HISUIAN_FORMS
#endif //P_FAMILY_BASCULIN
#if P_FAMILY_SANDILE
SINGLE_ANIMATION(Sandile);
SINGLE_ANIMATION(Krokorok);
SINGLE_ANIMATION(Krookodile);
#endif //P_FAMILY_SANDILE
#if P_FAMILY_DARUMAKA
SINGLE_ANIMATION(Darumaka);
SINGLE_ANIMATION(DarmanitanStandardMode);
SINGLE_ANIMATION(DarmanitanZenMode);
#if P_GALARIAN_FORMS
SINGLE_ANIMATION(DarumakaGalarian);
SINGLE_ANIMATION(DarmanitanGalarianStandardMode);
SINGLE_ANIMATION(DarmanitanGalarianZenMode);
#endif //P_GALARIAN_FORMS
#endif //P_FAMILY_DARUMAKA
#if P_FAMILY_MARACTUS
SINGLE_ANIMATION(Maractus);
#endif //P_FAMILY_MARACTUS
#if P_FAMILY_DWEBBLE
SINGLE_ANIMATION(Dwebble);
SINGLE_ANIMATION(Crustle);
#endif //P_FAMILY_DWEBBLE
#if P_FAMILY_SCRAGGY
SINGLE_ANIMATION(Scraggy);
SINGLE_ANIMATION(Scrafty);
#endif //P_FAMILY_SCRAGGY
#if P_FAMILY_SIGILYPH
SINGLE_ANIMATION(Sigilyph);
#endif //P_FAMILY_SIGILYPH
#if P_FAMILY_YAMASK
SINGLE_ANIMATION(Yamask);
SINGLE_ANIMATION(Cofagrigus);
#if P_GALARIAN_FORMS
SINGLE_ANIMATION(YamaskGalarian);
SINGLE_ANIMATION(Runerigus);
#endif //P_GALARIAN_FORMS
#endif //P_FAMILY_YAMASK
#if P_FAMILY_TIRTOUGA
SINGLE_ANIMATION(Tirtouga);
SINGLE_ANIMATION(Carracosta);
#endif //P_FAMILY_TIRTOUGA
#if P_FAMILY_ARCHEN
SINGLE_ANIMATION(Archen);
SINGLE_ANIMATION(Archeops);
#endif //P_FAMILY_ARCHEN
#if P_FAMILY_TRUBBISH
SINGLE_ANIMATION(Trubbish);
SINGLE_ANIMATION(Garbodor);
#if P_GIGANTAMAX_FORMS
SINGLE_ANIMATION(GarbodorGigantamax);
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_TRUBBISH
#if P_FAMILY_ZORUA
SINGLE_ANIMATION(Zorua);
SINGLE_ANIMATION(Zoroark);
#if P_HISUIAN_FORMS
SINGLE_ANIMATION(ZoruaHisuian);
SINGLE_ANIMATION(ZoroarkHisuian);
#endif //P_HISUIAN_FORMS
#endif //P_FAMILY_ZORUA
#if P_FAMILY_MINCCINO
SINGLE_ANIMATION(Minccino);
SINGLE_ANIMATION(Cinccino);
#endif //P_FAMILY_MINCCINO
#if P_FAMILY_GOTHITA
SINGLE_ANIMATION(Gothita);
SINGLE_ANIMATION(Gothorita);
SINGLE_ANIMATION(Gothitelle);
#endif //P_FAMILY_GOTHITA
#if P_FAMILY_SOLOSIS
SINGLE_ANIMATION(Solosis);
SINGLE_ANIMATION(Duosion);
SINGLE_ANIMATION(Reuniclus);
#endif //P_FAMILY_SOLOSIS
#if P_FAMILY_DUCKLETT
SINGLE_ANIMATION(Ducklett);
SINGLE_ANIMATION(Swanna);
#endif //P_FAMILY_DUCKLETT
#if P_FAMILY_VANILLITE
SINGLE_ANIMATION(Vanillite);
SINGLE_ANIMATION(Vanillish);
SINGLE_ANIMATION(Vanilluxe);
#endif //P_FAMILY_VANILLITE
#if P_FAMILY_DEERLING
SINGLE_ANIMATION(Deerling);
SINGLE_ANIMATION(Sawsbuck);
#endif //P_FAMILY_DEERLING
#if P_FAMILY_EMOLGA
SINGLE_ANIMATION(Emolga);
#endif //P_FAMILY_EMOLGA
#if P_FAMILY_KARRABLAST
SINGLE_ANIMATION(Karrablast);
SINGLE_ANIMATION(Escavalier);
#endif //P_FAMILY_KARRABLAST
#if P_FAMILY_FOONGUS
SINGLE_ANIMATION(Foongus);
SINGLE_ANIMATION(Amoonguss);
#endif //P_FAMILY_FOONGUS
#if P_FAMILY_FRILLISH
SINGLE_ANIMATION(Frillish);
SINGLE_ANIMATION(Jellicent);
#endif //P_FAMILY_FRILLISH
#if P_FAMILY_ALOMOMOLA
SINGLE_ANIMATION(Alomomola);
#endif //P_FAMILY_ALOMOMOLA
#if P_FAMILY_JOLTIK
SINGLE_ANIMATION(Joltik);
SINGLE_ANIMATION(Galvantula);
#endif //P_FAMILY_JOLTIK
#if P_FAMILY_FERROSEED
SINGLE_ANIMATION(Ferroseed);
SINGLE_ANIMATION(Ferrothorn);
#endif //P_FAMILY_FERROSEED
#if P_FAMILY_KLINK
SINGLE_ANIMATION(Klink);
SINGLE_ANIMATION(Klang);
SINGLE_ANIMATION(Klinklang);
#endif //P_FAMILY_KLINK
#if P_FAMILY_TYNAMO
SINGLE_ANIMATION(Tynamo);
SINGLE_ANIMATION(Eelektrik);
SINGLE_ANIMATION(Eelektross);
#endif //P_FAMILY_TYNAMO
#if P_FAMILY_ELGYEM
SINGLE_ANIMATION(Elgyem);
SINGLE_ANIMATION(Beheeyem);
#endif //P_FAMILY_ELGYEM
#if P_FAMILY_LITWICK
SINGLE_ANIMATION(Litwick);
SINGLE_ANIMATION(Lampent);
SINGLE_ANIMATION(Chandelure);
#endif //P_FAMILY_LITWICK
#if P_FAMILY_AXEW
SINGLE_ANIMATION(Axew);
SINGLE_ANIMATION(Fraxure);
SINGLE_ANIMATION(Haxorus);
#endif //P_FAMILY_AXEW
#if P_FAMILY_CUBCHOO
SINGLE_ANIMATION(Cubchoo);
SINGLE_ANIMATION(Beartic);
#endif //P_FAMILY_CUBCHOO
#if P_FAMILY_CRYOGONAL
SINGLE_ANIMATION(Cryogonal);
#endif //P_FAMILY_CRYOGONAL
#if P_FAMILY_SHELMET
SINGLE_ANIMATION(Shelmet);
SINGLE_ANIMATION(Accelgor);
#endif //P_FAMILY_SHELMET
#if P_FAMILY_STUNFISK
SINGLE_ANIMATION(Stunfisk);
#if P_GALARIAN_FORMS
SINGLE_ANIMATION(StunfiskGalarian);
#endif //P_GALARIAN_FORMS
#endif //P_FAMILY_STUNFISK
#if P_FAMILY_MIENFOO
SINGLE_ANIMATION(Mienfoo);
SINGLE_ANIMATION(Mienshao);
#endif //P_FAMILY_MIENFOO
#if P_FAMILY_DRUDDIGON
SINGLE_ANIMATION(Druddigon);
#endif //P_FAMILY_DRUDDIGON
#if P_FAMILY_GOLETT
SINGLE_ANIMATION(Golett);
SINGLE_ANIMATION(Golurk);
#endif //P_FAMILY_GOLETT
#if P_FAMILY_PAWNIARD
SINGLE_ANIMATION(Pawniard);
SINGLE_ANIMATION(Bisharp);
#if P_GEN_9_CROSS_EVOS
SINGLE_ANIMATION(Kingambit);
#endif //P_GEN_9_CROSS_EVOS
#endif //P_FAMILY_PAWNIARD
#if P_FAMILY_BOUFFALANT
SINGLE_ANIMATION(Bouffalant);
#endif //P_FAMILY_BOUFFALANT
#if P_FAMILY_RUFFLET
SINGLE_ANIMATION(Rufflet);
SINGLE_ANIMATION(Braviary);
#if P_HISUIAN_FORMS
SINGLE_ANIMATION(BraviaryHisuian);
#endif //P_HISUIAN_FORMS
#endif //P_FAMILY_RUFFLET
#if P_FAMILY_VULLABY
SINGLE_ANIMATION(Vullaby);
SINGLE_ANIMATION(Mandibuzz);
#endif //P_FAMILY_VULLABY
#if P_FAMILY_HEATMOR
SINGLE_ANIMATION(Heatmor);
#endif //P_FAMILY_HEATMOR
#if P_FAMILY_DURANT
SINGLE_ANIMATION(Durant);
#endif //P_FAMILY_DURANT
#if P_FAMILY_DEINO
SINGLE_ANIMATION(Deino);
SINGLE_ANIMATION(Zweilous);
SINGLE_ANIMATION(Hydreigon);
#endif //P_FAMILY_DEINO
#if P_FAMILY_LARVESTA
SINGLE_ANIMATION(Larvesta);
SINGLE_ANIMATION(Volcarona);
#endif //P_FAMILY_LARVESTA
#if P_FAMILY_COBALION
SINGLE_ANIMATION(Cobalion);
#endif //P_FAMILY_COBALION
#if P_FAMILY_TERRAKION
SINGLE_ANIMATION(Terrakion);
#endif //P_FAMILY_TERRAKION
#if P_FAMILY_VIRIZION
SINGLE_ANIMATION(Virizion);
#endif //P_FAMILY_VIRIZION
#if P_FAMILY_TORNADUS
SINGLE_ANIMATION(TornadusIncarnate);
SINGLE_ANIMATION(TornadusTherian);
#endif //P_FAMILY_TORNADUS
#if P_FAMILY_THUNDURUS
SINGLE_ANIMATION(ThundurusIncarnate);
SINGLE_ANIMATION(ThundurusTherian);
#endif //P_FAMILY_THUNDURUS
#if P_FAMILY_RESHIRAM
SINGLE_ANIMATION(Reshiram);
#endif //P_FAMILY_RESHIRAM
#if P_FAMILY_ZEKROM
SINGLE_ANIMATION(Zekrom);
#endif //P_FAMILY_ZEKROM
#if P_FAMILY_LANDORUS
SINGLE_ANIMATION(LandorusIncarnate);
SINGLE_ANIMATION(LandorusTherian);
#endif //P_FAMILY_LANDORUS
#if P_FAMILY_KYUREM
SINGLE_ANIMATION(Kyurem);
#if P_FUSION_FORMS
SINGLE_ANIMATION(KyuremWhite);
SINGLE_ANIMATION(KyuremBlack);
#endif //P_FUSION_FORMS
#endif //P_FAMILY_KYUREM
#if P_FAMILY_KELDEO
SINGLE_ANIMATION(KeldeoOrdinary);
SINGLE_ANIMATION(KeldeoResolute);
#endif //P_FAMILY_KELDEO
#if P_FAMILY_MELOETTA
SINGLE_ANIMATION(MeloettaAria);
SINGLE_ANIMATION(MeloettaPirouette);
#endif //P_FAMILY_MELOETTA
#if P_FAMILY_GENESECT
SINGLE_ANIMATION(Genesect);
#endif //P_FAMILY_GENESECT
#if P_FAMILY_CHESPIN
SINGLE_ANIMATION(Chespin);
SINGLE_ANIMATION(Quilladin);
SINGLE_ANIMATION(Chesnaught);
#endif //P_FAMILY_CHESPIN
#if P_FAMILY_FENNEKIN
SINGLE_ANIMATION(Fennekin);
SINGLE_ANIMATION(Braixen);
SINGLE_ANIMATION(Delphox);
#endif //P_FAMILY_FENNEKIN
#if P_FAMILY_FROAKIE
SINGLE_ANIMATION(Froakie);
SINGLE_ANIMATION(Frogadier);
SINGLE_ANIMATION(Greninja);
SINGLE_ANIMATION(GreninjaAsh);
#endif //P_FAMILY_FROAKIE
#if P_FAMILY_BUNNELBY
SINGLE_ANIMATION(Bunnelby);
SINGLE_ANIMATION(Diggersby);
#endif //P_FAMILY_BUNNELBY
#if P_FAMILY_FLETCHLING
SINGLE_ANIMATION(Fletchling);
SINGLE_ANIMATION(Fletchinder);
SINGLE_ANIMATION(Talonflame);
#endif //P_FAMILY_FLETCHLING
#if P_FAMILY_SCATTERBUG
SINGLE_ANIMATION(Scatterbug);
SINGLE_ANIMATION(Spewpa);
SINGLE_ANIMATION(Vivillon);
#endif //P_FAMILY_SCATTERBUG
#if P_FAMILY_LITLEO
SINGLE_ANIMATION(Litleo);
SINGLE_ANIMATION(Pyroar);
#endif //P_FAMILY_LITLEO
#if P_FAMILY_FLABEBE
SINGLE_ANIMATION(Flabebe);
SINGLE_ANIMATION(Floette);
SINGLE_ANIMATION(Florges);
#endif //P_FAMILY_FLABEBE
#if P_FAMILY_SKIDDO
SINGLE_ANIMATION(Skiddo);
SINGLE_ANIMATION(Gogoat);
#endif //P_FAMILY_SKIDDO
#if P_FAMILY_PANCHAM
SINGLE_ANIMATION(Pancham);
SINGLE_ANIMATION(Pangoro);
#endif //P_FAMILY_PANCHAM
#if P_FAMILY_FURFROU
SINGLE_ANIMATION(Furfrou);
#endif //P_FAMILY_FURFROU
#if P_FAMILY_ESPURR
SINGLE_ANIMATION(Espurr);
SINGLE_ANIMATION(Meowstic);
#endif //P_FAMILY_ESPURR
#if P_FAMILY_HONEDGE
SINGLE_ANIMATION(Honedge);
SINGLE_ANIMATION(Doublade);
SINGLE_ANIMATION(AegislashShield);
SINGLE_ANIMATION(AegislashBlade);
#endif //P_FAMILY_HONEDGE
#if P_FAMILY_SPRITZEE
SINGLE_ANIMATION(Spritzee);
SINGLE_ANIMATION(Aromatisse);
#endif //P_FAMILY_SPRITZEE
#if P_FAMILY_SWIRLIX
SINGLE_ANIMATION(Swirlix);
SINGLE_ANIMATION(Slurpuff);
#endif //P_FAMILY_SWIRLIX
#if P_FAMILY_INKAY
SINGLE_ANIMATION(Inkay);
SINGLE_ANIMATION(Malamar);
#endif //P_FAMILY_INKAY
#if P_FAMILY_BINACLE
SINGLE_ANIMATION(Binacle);
SINGLE_ANIMATION(Barbaracle);
#endif //P_FAMILY_BINACLE
#if P_FAMILY_SKRELP
SINGLE_ANIMATION(Skrelp);
SINGLE_ANIMATION(Dragalge);
#endif //P_FAMILY_SKRELP
#if P_FAMILY_CLAUNCHER
SINGLE_ANIMATION(Clauncher);
SINGLE_ANIMATION(Clawitzer);
#endif //P_FAMILY_CLAUNCHER
#if P_FAMILY_HELIOPTILE
SINGLE_ANIMATION(Helioptile);
SINGLE_ANIMATION(Heliolisk);
#endif //P_FAMILY_HELIOPTILE
#if P_FAMILY_TYRUNT
SINGLE_ANIMATION(Tyrunt);
SINGLE_ANIMATION(Tyrantrum);
#endif //P_FAMILY_TYRUNT
#if P_FAMILY_AMAURA
SINGLE_ANIMATION(Amaura);
SINGLE_ANIMATION(Aurorus);
#endif //P_FAMILY_AMAURA
#if P_FAMILY_HAWLUCHA
SINGLE_ANIMATION(Hawlucha);
#endif //P_FAMILY_HAWLUCHA
#if P_FAMILY_DEDENNE
SINGLE_ANIMATION(Dedenne);
#endif //P_FAMILY_DEDENNE
#if P_FAMILY_CARBINK
SINGLE_ANIMATION(Carbink);
#endif //P_FAMILY_CARBINK
#if P_FAMILY_GOOMY
SINGLE_ANIMATION(Goomy);
SINGLE_ANIMATION(Sliggoo);
SINGLE_ANIMATION(Goodra);
#if P_HISUIAN_FORMS
SINGLE_ANIMATION(SliggooHisuian);
SINGLE_ANIMATION(GoodraHisuian);
#endif //P_HISUIAN_FORMS
#endif //P_FAMILY_GOOMY
#if P_FAMILY_KLEFKI
SINGLE_ANIMATION(Klefki);
#endif //P_FAMILY_KLEFKI
#if P_FAMILY_PHANTUMP
SINGLE_ANIMATION(Phantump);
SINGLE_ANIMATION(Trevenant);
#endif //P_FAMILY_PHANTUMP
#if P_FAMILY_PUMPKABOO
SINGLE_ANIMATION(Pumpkaboo);
SINGLE_ANIMATION(Gourgeist);
#endif //P_FAMILY_PUMPKABOO
#if P_FAMILY_BERGMITE
SINGLE_ANIMATION(Bergmite);
SINGLE_ANIMATION(Avalugg);
#if P_HISUIAN_FORMS
SINGLE_ANIMATION(AvaluggHisuian);
#endif //P_HISUIAN_FORMS
#endif //P_FAMILY_BERGMITE
#if P_FAMILY_NOIBAT
SINGLE_ANIMATION(Noibat);
SINGLE_ANIMATION(Noivern);
#endif //P_FAMILY_NOIBAT
#if P_FAMILY_XERNEAS
SINGLE_ANIMATION(Xerneas);
#endif //P_FAMILY_XERNEAS
#if P_FAMILY_YVELTAL
SINGLE_ANIMATION(Yveltal);
#endif //P_FAMILY_YVELTAL
#if P_FAMILY_ZYGARDE
SINGLE_ANIMATION(Zygarde50);
SINGLE_ANIMATION(Zygarde10);
SINGLE_ANIMATION(ZygardeComplete);
#endif //P_FAMILY_ZYGARDE
#if P_FAMILY_DIANCIE
SINGLE_ANIMATION(Diancie);
#if P_MEGA_EVOLUTIONS
SINGLE_ANIMATION(DiancieMega);
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_DIANCIE
#if P_FAMILY_HOOPA
SINGLE_ANIMATION(HoopaConfined);
SINGLE_ANIMATION(HoopaUnbound);
#endif //P_FAMILY_HOOPA
#if P_FAMILY_VOLCANION
SINGLE_ANIMATION(Volcanion);
#endif //P_FAMILY_VOLCANION
#if P_FAMILY_ROWLET
SINGLE_ANIMATION(Rowlet);
SINGLE_ANIMATION(Dartrix);
SINGLE_ANIMATION(Decidueye);
#if P_HISUIAN_FORMS
SINGLE_ANIMATION(DecidueyeHisuian);
#endif //P_HISUIAN_FORMS
#endif //P_FAMILY_ROWLET
#if P_FAMILY_LITTEN
SINGLE_ANIMATION(Litten);
SINGLE_ANIMATION(Torracat);
SINGLE_ANIMATION(Incineroar);
#endif //P_FAMILY_LITTEN
#if P_FAMILY_POPPLIO
SINGLE_ANIMATION(Popplio);
SINGLE_ANIMATION(Brionne);
SINGLE_ANIMATION(Primarina);
#endif //P_FAMILY_POPPLIO
#if P_FAMILY_PIKIPEK
SINGLE_ANIMATION(Pikipek);
SINGLE_ANIMATION(Trumbeak);
SINGLE_ANIMATION(Toucannon);
#endif //P_FAMILY_PIKIPEK
#if P_FAMILY_YUNGOOS
SINGLE_ANIMATION(Yungoos);
SINGLE_ANIMATION(Gumshoos);
#endif //P_FAMILY_YUNGOOS
#if P_FAMILY_GRUBBIN
SINGLE_ANIMATION(Grubbin);
SINGLE_ANIMATION(Charjabug);
SINGLE_ANIMATION(Vikavolt);
#endif //P_FAMILY_GRUBBIN
#if P_FAMILY_CRABRAWLER
SINGLE_ANIMATION(Crabrawler);
SINGLE_ANIMATION(Crabominable);
#endif //P_FAMILY_CRABRAWLER
#if P_FAMILY_ORICORIO
SINGLE_ANIMATION(Oricorio);
#endif //P_FAMILY_ORICORIO
#if P_FAMILY_CUTIEFLY
SINGLE_ANIMATION(Cutiefly);
SINGLE_ANIMATION(Ribombee);
#endif //P_FAMILY_CUTIEFLY
#if P_FAMILY_ROCKRUFF
SINGLE_ANIMATION(Rockruff);
SINGLE_ANIMATION(LycanrocMidday);
SINGLE_ANIMATION(LycanrocMidnight);
SINGLE_ANIMATION(LycanrocDusk);
#endif //P_FAMILY_ROCKRUFF
#if P_FAMILY_WISHIWASHI
SINGLE_ANIMATION(WishiwashiSolo);
SINGLE_ANIMATION(WishiwashiSchool);
#endif //P_FAMILY_WISHIWASHI
#if P_FAMILY_MAREANIE
SINGLE_ANIMATION(Mareanie);
SINGLE_ANIMATION(Toxapex);
#endif //P_FAMILY_MAREANIE
#if P_FAMILY_MUDBRAY
SINGLE_ANIMATION(Mudbray);
SINGLE_ANIMATION(Mudsdale);
#endif //P_FAMILY_MUDBRAY
#if P_FAMILY_DEWPIDER
SINGLE_ANIMATION(Dewpider);
SINGLE_ANIMATION(Araquanid);
#endif //P_FAMILY_DEWPIDER
#if P_FAMILY_FOMANTIS
SINGLE_ANIMATION(Fomantis);
SINGLE_ANIMATION(Lurantis);
#endif //P_FAMILY_FOMANTIS
#if P_FAMILY_MORELULL
SINGLE_ANIMATION(Morelull);
SINGLE_ANIMATION(Shiinotic);
#endif //P_FAMILY_MORELULL
#if P_FAMILY_SALANDIT
SINGLE_ANIMATION(Salandit);
SINGLE_ANIMATION(Salazzle);
#endif //P_FAMILY_SALANDIT
#if P_FAMILY_STUFFUL
SINGLE_ANIMATION(Stufful);
SINGLE_ANIMATION(Bewear);
#endif //P_FAMILY_STUFFUL
#if P_FAMILY_BOUNSWEET
SINGLE_ANIMATION(Bounsweet);
SINGLE_ANIMATION(Steenee);
SINGLE_ANIMATION(Tsareena);
#endif //P_FAMILY_BOUNSWEET
#if P_FAMILY_COMFEY
SINGLE_ANIMATION(Comfey);
#endif //P_FAMILY_COMFEY
#if P_FAMILY_ORANGURU
SINGLE_ANIMATION(Oranguru);
#endif //P_FAMILY_ORANGURU
#if P_FAMILY_PASSIMIAN
SINGLE_ANIMATION(Passimian);
#endif //P_FAMILY_PASSIMIAN
#if P_FAMILY_WIMPOD
SINGLE_ANIMATION(Wimpod);
SINGLE_ANIMATION(Golisopod);
#endif //P_FAMILY_WIMPOD
#if P_FAMILY_SANDYGAST
SINGLE_ANIMATION(Sandygast);
SINGLE_ANIMATION(Palossand);
#endif //P_FAMILY_SANDYGAST
#if P_FAMILY_PYUKUMUKU
SINGLE_ANIMATION(Pyukumuku);
#endif //P_FAMILY_PYUKUMUKU
#if P_FAMILY_TYPE_NULL
SINGLE_ANIMATION(TypeNull);
SINGLE_ANIMATION(Silvally);
#endif //P_FAMILY_TYPE_NULL
#if P_FAMILY_MINIOR
SINGLE_ANIMATION(MiniorMeteor);
SINGLE_ANIMATION(MiniorCore);
#endif //P_FAMILY_MINIOR
#if P_FAMILY_KOMALA
SINGLE_ANIMATION(Komala);
#endif //P_FAMILY_KOMALA
#if P_FAMILY_TURTONATOR
SINGLE_ANIMATION(Turtonator);
#endif //P_FAMILY_TURTONATOR
#if P_FAMILY_TOGEDEMARU
SINGLE_ANIMATION(Togedemaru);
#endif //P_FAMILY_TOGEDEMARU
#if P_FAMILY_MIMIKYU
SINGLE_ANIMATION(MimikyuDisguised);
SINGLE_ANIMATION(MimikyuBusted);
#endif //P_FAMILY_MIMIKYU
#if P_FAMILY_BRUXISH
SINGLE_ANIMATION(Bruxish);
#endif //P_FAMILY_BRUXISH
#if P_FAMILY_DRAMPA
SINGLE_ANIMATION(Drampa);
#endif //P_FAMILY_DRAMPA
#if P_FAMILY_DHELMISE
SINGLE_ANIMATION(Dhelmise);
#endif //P_FAMILY_DHELMISE
#if P_FAMILY_JANGMO_O
SINGLE_ANIMATION(Jangmo_O);
SINGLE_ANIMATION(Hakamo_O);
SINGLE_ANIMATION(Kommo_O);
#endif //P_FAMILY_JANGMO_O
#if P_FAMILY_TAPU_KOKO
SINGLE_ANIMATION(TapuKoko);
#endif //P_FAMILY_TAPU_KOKO
#if P_FAMILY_TAPU_LELE
SINGLE_ANIMATION(TapuLele);
#endif //P_FAMILY_TAPU_LELE
#if P_FAMILY_TAPU_BULU
SINGLE_ANIMATION(TapuBulu);
#endif //P_FAMILY_TAPU_BULU
#if P_FAMILY_TAPU_FINI
SINGLE_ANIMATION(TapuFini);
#endif //P_FAMILY_TAPU_FINI
#if P_FAMILY_COSMOG
SINGLE_ANIMATION(Cosmog);
SINGLE_ANIMATION(Cosmoem);
SINGLE_ANIMATION(Solgaleo);
SINGLE_ANIMATION(Lunala);
#endif //P_FAMILY_COSMOG
#if P_FAMILY_NIHILEGO
SINGLE_ANIMATION(Nihilego);
#endif //P_FAMILY_NIHILEGO
#if P_FAMILY_BUZZWOLE
SINGLE_ANIMATION(Buzzwole);
#endif //P_FAMILY_BUZZWOLE
#if P_FAMILY_PHEROMOSA
SINGLE_ANIMATION(Pheromosa);
#endif //P_FAMILY_PHEROMOSA
#if P_FAMILY_XURKITREE
SINGLE_ANIMATION(Xurkitree);
#endif //P_FAMILY_XURKITREE
#if P_FAMILY_CELESTEELA
SINGLE_ANIMATION(Celesteela);
#endif //P_FAMILY_CELESTEELA
#if P_FAMILY_KARTANA
SINGLE_ANIMATION(Kartana);
#endif //P_FAMILY_KARTANA
#if P_FAMILY_GUZZLORD
SINGLE_ANIMATION(Guzzlord);
#endif //P_FAMILY_GUZZLORD
#if P_FAMILY_NECROZMA
SINGLE_ANIMATION(Necrozma);
#endif //P_FAMILY_NECROZMA
#if P_FAMILY_MAGEARNA
SINGLE_ANIMATION(Magearna);
#endif //P_FAMILY_MAGEARNA
#if P_FAMILY_MARSHADOW
SINGLE_ANIMATION(Marshadow);
#endif //P_FAMILY_MARSHADOW
#if P_FAMILY_POIPOLE
SINGLE_ANIMATION(Poipole);
SINGLE_ANIMATION(Naganadel);
#endif //P_FAMILY_POIPOLE
#if P_FAMILY_STAKATAKA
SINGLE_ANIMATION(Stakataka);
#endif //P_FAMILY_STAKATAKA
#if P_FAMILY_BLACEPHALON
SINGLE_ANIMATION(Blacephalon);
#endif //P_FAMILY_BLACEPHALON
#if P_FAMILY_ZERAORA
SINGLE_ANIMATION(Zeraora);
#endif //P_FAMILY_ZERAORA
#if P_FAMILY_MELTAN
SINGLE_ANIMATION(Meltan);
SINGLE_ANIMATION(Melmetal);
#if P_GIGANTAMAX_FORMS
SINGLE_ANIMATION(MelmetalGigantamax);
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_MELTAN
#if P_FAMILY_GROOKEY
SINGLE_ANIMATION(Grookey);
SINGLE_ANIMATION(Thwackey);
SINGLE_ANIMATION(Rillaboom);
#if P_GIGANTAMAX_FORMS
SINGLE_ANIMATION(RillaboomGigantamax);
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_GROOKEY
#if P_FAMILY_SCORBUNNY
SINGLE_ANIMATION(Scorbunny);
SINGLE_ANIMATION(Raboot);
SINGLE_ANIMATION(Cinderace);
#if P_GIGANTAMAX_FORMS
SINGLE_ANIMATION(CinderaceGigantamax);
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_SCORBUNNY
#if P_FAMILY_SOBBLE
SINGLE_ANIMATION(Sobble);
SINGLE_ANIMATION(Drizzile);
SINGLE_ANIMATION(Inteleon);
#if P_GIGANTAMAX_FORMS
SINGLE_ANIMATION(InteleonGigantamax);
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_SOBBLE
#if P_FAMILY_SKWOVET
SINGLE_ANIMATION(Skwovet);
SINGLE_ANIMATION(Greedent);
#endif //P_FAMILY_SKWOVET
#if P_FAMILY_ROOKIDEE
SINGLE_ANIMATION(Rookidee);
SINGLE_ANIMATION(Corvisquire);
SINGLE_ANIMATION(Corviknight);
#if P_GIGANTAMAX_FORMS
SINGLE_ANIMATION(CorviknightGigantamax);
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_ROOKIDEE
#if P_FAMILY_BLIPBUG
SINGLE_ANIMATION(Blipbug);
SINGLE_ANIMATION(Dottler);
SINGLE_ANIMATION(Orbeetle);
#if P_GIGANTAMAX_FORMS
SINGLE_ANIMATION(OrbeetleGigantamax);
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_BLIPBUG
#if P_FAMILY_NICKIT
SINGLE_ANIMATION(Nickit);
SINGLE_ANIMATION(Thievul);
#endif //P_FAMILY_NICKIT
#if P_FAMILY_GOSSIFLEUR
SINGLE_ANIMATION(Gossifleur);
SINGLE_ANIMATION(Eldegoss);
#endif //P_FAMILY_GOSSIFLEUR
#if P_FAMILY_WOOLOO
SINGLE_ANIMATION(Wooloo);
SINGLE_ANIMATION(Dubwool);
#endif //P_FAMILY_WOOLOO
#if P_FAMILY_CHEWTLE
SINGLE_ANIMATION(Chewtle);
SINGLE_ANIMATION(Drednaw);
#if P_GIGANTAMAX_FORMS
SINGLE_ANIMATION(DrednawGigantamax);
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_CHEWTLE
#if P_FAMILY_YAMPER
SINGLE_ANIMATION(Yamper);
SINGLE_ANIMATION(Boltund);
#endif //P_FAMILY_YAMPER
#if P_FAMILY_ROLYCOLY
SINGLE_ANIMATION(Rolycoly);
SINGLE_ANIMATION(Carkol);
SINGLE_ANIMATION(Coalossal);
#if P_GIGANTAMAX_FORMS
SINGLE_ANIMATION(CoalossalGigantamax);
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_ROLYCOLY
#if P_FAMILY_APPLIN
SINGLE_ANIMATION(Applin);
SINGLE_ANIMATION(Flapple);
#if P_GIGANTAMAX_FORMS
SINGLE_ANIMATION(FlappleGigantamax);
#endif //P_GIGANTAMAX_FORMS
SINGLE_ANIMATION(Appletun);
#if P_GIGANTAMAX_FORMS
SINGLE_ANIMATION(AppletunGigantamax);
#endif //P_GIGANTAMAX_FORMS
#if P_GEN_9_CROSS_EVOS
SINGLE_ANIMATION(Dipplin);
#endif //P_GEN_9_CROSS_EVOS
#endif //P_FAMILY_APPLIN
#if P_FAMILY_SILICOBRA
SINGLE_ANIMATION(Silicobra);
SINGLE_ANIMATION(Sandaconda);
#if P_GIGANTAMAX_FORMS
SINGLE_ANIMATION(SandacondaGigantamax);
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_SILICOBRA
#if P_FAMILY_CRAMORANT
SINGLE_ANIMATION(Cramorant);
#endif //P_FAMILY_CRAMORANT
#if P_FAMILY_ARROKUDA
SINGLE_ANIMATION(Arrokuda);
SINGLE_ANIMATION(Barraskewda);
#endif //P_FAMILY_ARROKUDA
#if P_FAMILY_TOXEL
SINGLE_ANIMATION(Toxel);
SINGLE_ANIMATION(Toxtricity);
#if P_GIGANTAMAX_FORMS
SINGLE_ANIMATION(ToxtricityGigantamax);
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_TOXEL
#if P_FAMILY_SIZZLIPEDE
SINGLE_ANIMATION(Sizzlipede);
SINGLE_ANIMATION(Centiskorch);
#if P_GIGANTAMAX_FORMS
SINGLE_ANIMATION(CentiskorchGigantamax);
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_SIZZLIPEDE
#if P_FAMILY_CLOBBOPUS
SINGLE_ANIMATION(Clobbopus);
SINGLE_ANIMATION(Grapploct);
#endif //P_FAMILY_CLOBBOPUS
#if P_FAMILY_SINISTEA
SINGLE_ANIMATION(Sinistea);
SINGLE_ANIMATION(Polteageist);
#endif //P_FAMILY_SINISTEA
#if P_FAMILY_HATENNA
SINGLE_ANIMATION(Hatenna);
SINGLE_ANIMATION(Hattrem);
SINGLE_ANIMATION(Hatterene);
#if P_GIGANTAMAX_FORMS
SINGLE_ANIMATION(HattereneGigantamax);
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_HATENNA
#if P_FAMILY_IMPIDIMP
SINGLE_ANIMATION(Impidimp);
SINGLE_ANIMATION(Morgrem);
SINGLE_ANIMATION(Grimmsnarl);
#if P_GIGANTAMAX_FORMS
SINGLE_ANIMATION(GrimmsnarlGigantamax);
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_IMPIDIMP
#if P_FAMILY_MILCERY
SINGLE_ANIMATION(Milcery);
SINGLE_ANIMATION(Alcremie);
#if P_GIGANTAMAX_FORMS
SINGLE_ANIMATION(AlcremieGigantamax);
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_MILCERY
#if P_FAMILY_FALINKS
SINGLE_ANIMATION(Falinks);
#endif //P_FAMILY_FALINKS
#if P_FAMILY_PINCURCHIN
SINGLE_ANIMATION(Pincurchin);
#endif //P_FAMILY_PINCURCHIN
#if P_FAMILY_SNOM
SINGLE_ANIMATION(Snom);
SINGLE_ANIMATION(Frosmoth);
#endif //P_FAMILY_SNOM
#if P_FAMILY_STONJOURNER
SINGLE_ANIMATION(Stonjourner);
#endif //P_FAMILY_STONJOURNER
#if P_FAMILY_EISCUE
SINGLE_ANIMATION(Eiscue);
#endif //P_FAMILY_EISCUE
#if P_FAMILY_INDEEDEE
SINGLE_ANIMATION(Indeedee);
#endif //P_FAMILY_INDEEDEE
#if P_FAMILY_MORPEKO
SINGLE_ANIMATION(Morpeko);
#endif //P_FAMILY_MORPEKO
#if P_FAMILY_CUFANT
SINGLE_ANIMATION(Cufant);
SINGLE_ANIMATION(Copperajah);
#if P_GIGANTAMAX_FORMS
SINGLE_ANIMATION(CopperajahGigantamax);
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_CUFANT
#if P_FAMILY_DRACOZOLT
SINGLE_ANIMATION(Dracozolt);
#endif //P_FAMILY_DRACOZOLT
#if P_FAMILY_ARCTOZOLT
SINGLE_ANIMATION(Arctozolt);
#endif //P_FAMILY_ARCTOZOLT
#if P_FAMILY_DRACOVISH
SINGLE_ANIMATION(Dracovish);
#endif //P_FAMILY_DRACOVISH
#if P_FAMILY_ARCTOVISH
SINGLE_ANIMATION(Arctovish);
#endif //P_FAMILY_ARCTOVISH
#if P_FAMILY_DURALUDON
SINGLE_ANIMATION(Duraludon);
#if P_GIGANTAMAX_FORMS
SINGLE_ANIMATION(DuraludonGigantamax);
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_DURALUDON
#if P_FAMILY_DREEPY
SINGLE_ANIMATION(Dreepy);
SINGLE_ANIMATION(Drakloak);
SINGLE_ANIMATION(Dragapult);
#endif //P_FAMILY_DREEPY
#if P_FAMILY_ZACIAN
SINGLE_ANIMATION(Zacian);
#endif //P_FAMILY_ZACIAN
#if P_FAMILY_ZAMAZENTA
SINGLE_ANIMATION(Zamazenta);
#endif //P_FAMILY_ZAMAZENTA
#if P_FAMILY_ETERNATUS
SINGLE_ANIMATION(Eternatus);
#endif //P_FAMILY_ETERNATUS
#if P_FAMILY_KUBFU
SINGLE_ANIMATION(Kubfu);
SINGLE_ANIMATION(Urshifu);
#if P_GIGANTAMAX_FORMS
SINGLE_ANIMATION(UrshifuSingleStrikeStyleGigantamax);
SINGLE_ANIMATION(UrshifuRapidStrikeStyleGigantamax);
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_KUBFU
#if P_FAMILY_ZARUDE
SINGLE_ANIMATION(Zarude);
#endif //P_FAMILY_ZARUDE
#if P_FAMILY_REGIELEKI
SINGLE_ANIMATION(Regieleki);
#endif //P_FAMILY_REGIELEKI
#if P_FAMILY_REGIDRAGO
SINGLE_ANIMATION(Regidrago);
#endif //P_FAMILY_REGIDRAGO
#if P_FAMILY_GLASTRIER
SINGLE_ANIMATION(Glastrier);
#endif //P_FAMILY_GLASTRIER
#if P_FAMILY_SPECTRIER
SINGLE_ANIMATION(Spectrier);
#endif //P_FAMILY_SPECTRIER
#if P_FAMILY_CALYREX
SINGLE_ANIMATION(Calyrex);
#endif //P_FAMILY_CALYREX
#if P_FAMILY_ENAMORUS
SINGLE_ANIMATION(EnamorusIncarnate);
SINGLE_ANIMATION(EnamorusTherian);
#endif //P_FAMILY_ENAMORUS
#if P_FAMILY_SPRIGATITO
SINGLE_ANIMATION(Sprigatito);
SINGLE_ANIMATION(Floragato);
SINGLE_ANIMATION(Meowscarada);
#endif //P_FAMILY_SPRIGATITO
#if P_FAMILY_FUECOCO
SINGLE_ANIMATION(Fuecoco);
SINGLE_ANIMATION(Crocalor);
SINGLE_ANIMATION(Skeledirge);
#endif //P_FAMILY_FUECOCO
#if P_FAMILY_QUAXLY
SINGLE_ANIMATION(Quaxly);
SINGLE_ANIMATION(Quaxwell);
SINGLE_ANIMATION(Quaquaval);
#endif //P_FAMILY_QUAXLY
#if P_FAMILY_LECHONK
SINGLE_ANIMATION(Lechonk);
SINGLE_ANIMATION(Oinkologne);
#endif //P_FAMILY_LECHONK
#if P_FAMILY_TAROUNTULA
SINGLE_ANIMATION(Tarountula);
SINGLE_ANIMATION(Spidops);
#endif //P_FAMILY_TAROUNTULA
#if P_FAMILY_NYMBLE
SINGLE_ANIMATION(Nymble);
SINGLE_ANIMATION(Lokix);
#endif //P_FAMILY_NYMBLE
#if P_FAMILY_PAWMI
SINGLE_ANIMATION(Pawmi);
SINGLE_ANIMATION(Pawmo);
SINGLE_ANIMATION(Pawmot);
#endif //P_FAMILY_PAWMI
#if P_FAMILY_TANDEMAUS
SINGLE_ANIMATION(Tandemaus);
SINGLE_ANIMATION(Maushold);
#endif //P_FAMILY_TANDEMAUS
#if P_FAMILY_FIDOUGH
SINGLE_ANIMATION(Fidough);
SINGLE_ANIMATION(Dachsbun);
#endif //P_FAMILY_FIDOUGH
#if P_FAMILY_SMOLIV
SINGLE_ANIMATION(Smoliv);
SINGLE_ANIMATION(Dolliv);
SINGLE_ANIMATION(Arboliva);
#endif //P_FAMILY_SMOLIV
#if P_FAMILY_SQUAWKABILLY
SINGLE_ANIMATION(Squawkabilly);
#endif //P_FAMILY_SQUAWKABILLY
#if P_FAMILY_NACLI
SINGLE_ANIMATION(Nacli);
SINGLE_ANIMATION(Naclstack);
SINGLE_ANIMATION(Garganacl);
#endif //P_FAMILY_NACLI
#if P_FAMILY_CHARCADET
SINGLE_ANIMATION(Charcadet);
SINGLE_ANIMATION(Armarouge);
SINGLE_ANIMATION(Ceruledge);
#endif //P_FAMILY_CHARCADET
#if P_FAMILY_TADBULB
SINGLE_ANIMATION(Tadbulb);
SINGLE_ANIMATION(Bellibolt);
#endif //P_FAMILY_TADBULB
#if P_FAMILY_WATTREL
SINGLE_ANIMATION(Wattrel);
SINGLE_ANIMATION(Kilowattrel);
#endif //P_FAMILY_WATTREL
#if P_FAMILY_MASCHIFF
SINGLE_ANIMATION(Maschiff);
SINGLE_ANIMATION(Mabosstiff);
#endif //P_FAMILY_MASCHIFF
#if P_FAMILY_SHROODLE
SINGLE_ANIMATION(Shroodle);
SINGLE_ANIMATION(Grafaiai);
#endif //P_FAMILY_SHROODLE
#if P_FAMILY_BRAMBLIN
SINGLE_ANIMATION(Bramblin);
SINGLE_ANIMATION(Brambleghast);
#endif //P_FAMILY_BRAMBLIN
#if P_FAMILY_TOEDSCOOL
SINGLE_ANIMATION(Toedscool);
SINGLE_ANIMATION(Toedscruel);
#endif //P_FAMILY_TOEDSCOOL
#if P_FAMILY_KLAWF
SINGLE_ANIMATION(Klawf);
#endif //P_FAMILY_KLAWF
#if P_FAMILY_CAPSAKID
SINGLE_ANIMATION(Capsakid);
SINGLE_ANIMATION(Scovillain);
#endif //P_FAMILY_CAPSAKID
#if P_FAMILY_RELLOR
SINGLE_ANIMATION(Rellor);
SINGLE_ANIMATION(Rabsca);
#endif //P_FAMILY_RELLOR
#if P_FAMILY_FLITTLE
SINGLE_ANIMATION(Flittle);
SINGLE_ANIMATION(Espathra);
#endif //P_FAMILY_FLITTLE
#if P_FAMILY_TINKATINK
SINGLE_ANIMATION(Tinkatink);
SINGLE_ANIMATION(Tinkatuff);
SINGLE_ANIMATION(Tinkaton);
#endif //P_FAMILY_TINKATINK
#if P_FAMILY_WIGLETT
SINGLE_ANIMATION(Wiglett);
SINGLE_ANIMATION(Wugtrio);
#endif //P_FAMILY_WIGLETT
#if P_FAMILY_BOMBIRDIER
SINGLE_ANIMATION(Bombirdier);
#endif //P_FAMILY_BOMBIRDIER
#if P_FAMILY_FINIZEN
SINGLE_ANIMATION(Finizen);
SINGLE_ANIMATION(Palafin);
#endif //P_FAMILY_FINIZEN
#if P_FAMILY_VAROOM
SINGLE_ANIMATION(Varoom);
SINGLE_ANIMATION(Revavroom);
#endif //P_FAMILY_VAROOM
#if P_FAMILY_CYCLIZAR
SINGLE_ANIMATION(Cyclizar);
#endif //P_FAMILY_CYCLIZAR
#if P_FAMILY_ORTHWORM
SINGLE_ANIMATION(Orthworm);
#endif //P_FAMILY_ORTHWORM
#if P_FAMILY_GLIMMET
SINGLE_ANIMATION(Glimmet);
SINGLE_ANIMATION(Glimmora);
#endif //P_FAMILY_GLIMMET
#if P_FAMILY_GREAVARD
SINGLE_ANIMATION(Greavard);
SINGLE_ANIMATION(Houndstone);
#endif //P_FAMILY_GREAVARD
#if P_FAMILY_FLAMIGO
SINGLE_ANIMATION(Flamigo);
#endif //P_FAMILY_FLAMIGO
#if P_FAMILY_CETODDLE
SINGLE_ANIMATION(Cetoddle);
SINGLE_ANIMATION(Cetitan);
#endif //P_FAMILY_CETODDLE
#if P_FAMILY_VELUZA
SINGLE_ANIMATION(Veluza);
#endif //P_FAMILY_VELUZA
#if P_FAMILY_DONDOZO
SINGLE_ANIMATION(Dondozo);
#endif //P_FAMILY_DONDOZO
#if P_FAMILY_TATSUGIRI
SINGLE_ANIMATION(Tatsugiri);
#endif //P_FAMILY_TATSUGIRI
#if P_FAMILY_GREAT_TUSK
SINGLE_ANIMATION(GreatTusk);
#endif //P_FAMILY_GREAT_TUSK
#if P_FAMILY_SCREAM_TAIL
SINGLE_ANIMATION(ScreamTail);
#endif //P_FAMILY_SCREAM_TAIL
#if P_FAMILY_BRUTE_BONNET
SINGLE_ANIMATION(BruteBonnet);
#endif //P_FAMILY_BRUTE_BONNET
#if P_FAMILY_FLUTTER_MANE
SINGLE_ANIMATION(FlutterMane);
#endif //P_FAMILY_FLUTTER_MANE
#if P_FAMILY_SLITHER_WING
SINGLE_ANIMATION(SlitherWing);
#endif //P_FAMILY_SLITHER_WING
#if P_FAMILY_SANDY_SHOCKS
SINGLE_ANIMATION(SandyShocks);
#endif //P_FAMILY_SANDY_SHOCKS
#if P_FAMILY_IRON_TREADS
SINGLE_ANIMATION(IronTreads);
#endif //P_FAMILY_IRON_TREADS
#if P_FAMILY_IRON_BUNDLE
SINGLE_ANIMATION(IronBundle);
#endif //P_FAMILY_IRON_BUNDLE
#if P_FAMILY_IRON_HANDS
SINGLE_ANIMATION(IronHands);
#endif //P_FAMILY_IRON_HANDS
#if P_FAMILY_IRON_JUGULIS
SINGLE_ANIMATION(IronJugulis);
#endif //P_FAMILY_IRON_JUGULIS
#if P_FAMILY_IRON_MOTH
SINGLE_ANIMATION(IronMoth);
#endif //P_FAMILY_IRON_MOTH
#if P_FAMILY_IRON_THORNS
SINGLE_ANIMATION(IronThorns);
#endif //P_FAMILY_IRON_THORNS
#if P_FAMILY_FRIGIBAX
SINGLE_ANIMATION(Frigibax);
SINGLE_ANIMATION(Arctibax);
SINGLE_ANIMATION(Baxcalibur);
#endif //P_FAMILY_FRIGIBAX
#if P_FAMILY_GIMMIGHOUL
SINGLE_ANIMATION(Gimmighoul);
SINGLE_ANIMATION(Gholdengo);
#endif //P_FAMILY_GIMMIGHOUL
#if P_FAMILY_WO_CHIEN
SINGLE_ANIMATION(WoChien);
#endif //P_FAMILY_WO_CHIEN
#if P_FAMILY_CHIEN_PAO
SINGLE_ANIMATION(ChienPao);
#endif //P_FAMILY_CHIEN_PAO
#if P_FAMILY_TING_LU
SINGLE_ANIMATION(TingLu);
#endif //P_FAMILY_TING_LU
#if P_FAMILY_CHI_YU
SINGLE_ANIMATION(ChiYu);
#endif //P_FAMILY_CHI_YU
#if P_FAMILY_ROARING_MOON
SINGLE_ANIMATION(RoaringMoon);
#endif //P_FAMILY_ROARING_MOON
#if P_FAMILY_IRON_VALIANT
SINGLE_ANIMATION(IronValiant);
#endif //P_FAMILY_IRON_VALIANT
#if P_FAMILY_KORAIDON
SINGLE_ANIMATION(Koraidon);
#endif //P_FAMILY_KORAIDON
#if P_FAMILY_MIRAIDON
SINGLE_ANIMATION(Miraidon);
#endif //P_FAMILY_MIRAIDON
#if P_FAMILY_WALKING_WAKE
SINGLE_ANIMATION(WalkingWake);
#endif //P_FAMILY_WALKING_WAKE
#if P_FAMILY_IRON_LEAVES
SINGLE_ANIMATION(IronLeaves);
#endif //P_FAMILY_IRON_LEAVES
#if P_FAMILY_POLTCHAGEIST
SINGLE_ANIMATION(Poltchageist);
SINGLE_ANIMATION(Sinistcha);
#endif //P_FAMILY_POLTCHAGEIST
#if P_FAMILY_OKIDOGI
SINGLE_ANIMATION(Okidogi);
#endif //P_FAMILY_OKIDOGI
#if P_FAMILY_MUNKIDORI
SINGLE_ANIMATION(Munkidori);
#endif //P_FAMILY_MUNKIDORI
#if P_FAMILY_FEZANDIPITI
SINGLE_ANIMATION(Fezandipiti);
#endif //P_FAMILY_FEZANDIPITI
#if P_FAMILY_OGERPON
SINGLE_ANIMATION(Ogerpon);
#endif //P_FAMILY_OGERPON
SINGLE_ANIMATION(Egg);

//POKESCAPE START
static const union AnimCmd sAnim_Guthling_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Guthbird_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Guthraptor_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Zamling_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Zambird_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Zamohawk_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Saraling_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Sarabird_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Saraowl_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Chick_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Chicken_Normal_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Dreadfowl_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Chicken_Varrock_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Chicken_Diving_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Chicken_Karamja_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Chicken_Death_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Chicken_Bandosian_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Chicken_War_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Rooster_Normal_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Ernest_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Rooster_Karamja_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Oomlie_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Rooster_Bandosian_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Chicken_Famine_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Rooster_Varrock_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Chicken_Pestilence_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Chicken_Lizard_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Chicken_Undead_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Chicken_Mystery_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_EvilChicken_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Swordchick_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Newtroost_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Calf_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Cow_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Super_Cow_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Cow_Dairy_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Cow_Undead_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Cow_Chocolate_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Cow_Strawberry_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Cow_Vanilla_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Cow_Harlequin_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Skeletalox_Female_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Bull_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Bull_Elder_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Skeletalox_Male_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Trojan_Cow_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Cow_Plague_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Minotaur_Normal_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Minotaur_Rune_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Unicow_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Rat_Normal_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Giant_Rat_Normal_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Brine_Rat_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Giant_Rat_Blessed_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Rat_Hell_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Giant_Rat_Hell_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Shell_Rat_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Rat_Crypt_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Giant_Rat_Crypt_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Warped_Rat_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Zombie_Rat_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Giant_Rat_Dungeon_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Rat_King_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Giant_Rat_King_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Albino_Rat_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Angry_Rat_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Experiment_2_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Lamb_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Sheep_White_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Sheep_Plague_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Sheep_Black_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Ram_Fluffy_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Ram_Shaggy_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Ram_Golden_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Sheep_Pirate_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Goat_Billy_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Goat_Desert_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Goat_Mountain_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Gorak_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Sardine_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Herring_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Trout_Normal_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Swordfish_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Trout_Leaping_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Sturgeon_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Trout_Tropical_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Sailfish_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Thallasus_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Bass_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Salmon_Normal_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Shark_Normal_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Fury_Shark_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Salmon_Leaping_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Shark_Greatwhite_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Shark_Tiger_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Mackerel_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Catfish_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Shark_Baron_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Tarpon_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Seerfish_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Desertsole_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Sillago_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Wobbegong_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Karambwanj_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Karambwan_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Whitefish_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Beltfish_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Manta_Ray_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Cod_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Rainbow_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Shark_Golden_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Pike_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Monkfish_Normal_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Anglerfish_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Giant_Carp_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Monkfish_Fresh_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Monkfish_Golden_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Goblinfish_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Pet_Fish_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Gilbert_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Cavefish_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Rocktail_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Eel_Slimy_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Eel_Cave_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Eel_Sacred_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Eel_Lava_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Eel_Infernal_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Eel_Mottled_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Eel_Short_Finned_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Eel_Salve_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Eel_Dusk_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Cave_Moray_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Vile_Fish_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Piglet_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Pig_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Pigzilla_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Puppy_Pup_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Puppy_Mutt_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Terrier_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Sheepdog_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Dalmatian_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Greyhound_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Bulldog_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Labrador_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Corgi_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Terror_Dog_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Stray_Dog_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Muncher_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Hellpuppy_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Hellhound_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Cerberus_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Kitten_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Cat_Normal_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Cat_Overgrown_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Cat_Lazy_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Cat_Wily_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Cat_Purple_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Cat_Hell_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Cat_Post_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Cat_Sunken_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Bob_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Evil_Bob_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Pet_Rock_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Rock_Polished_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Pillar_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Rock_Soup_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Slagilith_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Rock_Strange_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Rock_Golden_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Party_Rock_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Strykewyrm_Freezy_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Strykewyrm_Leafy_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Strykewyrm_Sandy_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Strykewyrm_Wildy_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Scorpling_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Scorpion_Normal_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Scorpion_Pit_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Scorpion_Poison_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Scorpion_King_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Scorpion_Grave_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Scorpion_Corrupted_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Scorpion_Reanimated_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Scorpion_Gauntlet_Crystalline_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Scorpion_Gauntlet_Corrupted_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Scorpion_Khazard_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Scorpion_Spirit_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Scorpia_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Dreadnip_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Peepling_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Sneakrpeep_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Runtstable_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Basilisk_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Baby_Mole_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Giant_Mole_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Squirrel_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Ravenling_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Raven_Normal_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Raven_Nevermore_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Raven_Spooky_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Raven_Crystal_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Crow_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Magpie_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Chinchompa_Grey_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Chinchompa_Red_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Chinchompa_Gold_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Vultling_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Vulture_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Pengling_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Penguin_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Penguin_Clockwork_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_The_Thing_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Ping_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Pong_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Penguin_Mcgraw_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Penguin_Spy_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Penguin_Agent_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Penguin_Disguise_Cactus_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Penguin_Disguise_Rock_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Penguin_Disguise_Bush_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Penguin_Disguise_Box_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Exexparrot_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Broav_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Tooths_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Rune_Guardian_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Gnomey_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Sparkles_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Bat_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Giant_Bat_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Warped_Bat_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Albino_Bat_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Bat_Box_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Fruit_Bat_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Vampyrebat_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Deathwing_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Shaikah_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Growler_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Phoenling_Rebirth_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Phoenling_Reborn_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Phoenix_Rebirth_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Phoenix_Reborn_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Plant_Strange_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Plant_Stranger_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Evilturnip_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Creature_Cute_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Creature_Evil_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Baby_Yak_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Yak_Normal_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Yak_Pack_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Yak_Sacred_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Yak_Cluescroll_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Yak_Undead_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Yak_Snack_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Minitrice_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Cockatrice_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Guthatrice_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Zamatrice_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Saratrice_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Corxatrice_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Vulatrice_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Pengatrice_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Chocatrice_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Sproutling_Summer_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Sproutling_Spring_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Sproutling_Winter_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Sproutling_Autumn_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Rue_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Monty_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Zygomite_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Abyssaling_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Abyssal_Minion_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Abyssal_Demon_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Abyssal_Sire_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Abyssal_Leech_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Abyssal_Parasite_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Abyssal_Lurker_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Abyssal_Walker_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Abyssal_Titan_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Tz_Kih_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Tz_Kek_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Tok_Xil_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Tz_Kih_Spirit_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Ket_Dill_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Ket_Zek_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Yt_Hurkot_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Yt_Mejkot_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Tzrek_Jad_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Tztok_Jad_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Jaltok_Jad_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Jal_Mejrah_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Jal_Ak_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Jal_Xil_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Jal_Nib_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Jal_Imkot_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Jal_Zek_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Tzkal_Zuk_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Duckling_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Swan_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Duck_Normal_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Mega_Duck_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Duck_Cart_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Platypode_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Platypus_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Fledgling_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Dagannoth_Normal_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Dagannoth_Guardian_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Dagannoth_King_Range_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Dagannoth_King_Magic_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Dagannoth_King_Melee_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Dagannoth_King_Range_Mega_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Dagannoth_King_Magic_Mega_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Dagannoth_King_Melee_Mega_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Chaos_Ele_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Chaos_Ele_Mega_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Bandling_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Bandbird_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Bandeagle_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Zaroling_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Zarobird_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Zaraven_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Sereling_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Serebird_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Serepea_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Frogspawn_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Frog_Normal_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Giant_Frog_Normal_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Giant_Frog_Royal_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Frog_Bloated_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Frog_Balloon_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Toad_Barker_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Frogeel_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Spiderling_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Spider_Giant_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Spider_Deadlyred_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Spider_Jungle_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Spider_Blessed_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Spider_Huge_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Spider_Night_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Spider_Ice_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Spider_Spirit_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Eek_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Minstrlweb_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Sarachnis_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Venenatis_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Spidine_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Crayfish_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Shrimp_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Lobster_Normal_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Lobster_Golden_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Lobster_Giant_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Lobster_Heim_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Lobster_Obsidian_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Crab_Red_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Giant_Crab_Red_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Crab_Moss_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Giant_Crab_Moss_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Crab_Rumpumped_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Giant_Crab_Rumpumped_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Crab_Dark_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Giant_Crab_Dark_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Crab_Grey_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Giant_Crab_Grey_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Knife_Crab_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Heim_Crab_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Websnipper_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Blue_Crab_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Crablet_First_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Crablet_Second_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Crablet_Third_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Crablet_Forth_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Crablet_Fifth_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Crawler_Cave_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Crawler_Chasm_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Crawler_Monstrous_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Winston_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Tortoise_Normal_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Tortoise_Warped_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Tortoise_War_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Valluta_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Sea_Turtle_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Sea_Turtle_Treasure_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Herbert_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Xinachto_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Cave_Slime_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Jelly_Normal_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Jelly_Warped_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Jelly_Spirit_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Abbyspectr_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Salamander_Green_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Salamander_Orange_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Salamander_Red_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Salamander_Black_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Salamander_Augmented_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Gecko_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Chameleon_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Bloodveld_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Bloodveld_Insatiable_Physical_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Bloodveld_Insatiable_Special_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Bloodveld_Mutated_Physical_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Bloodveld_Mutated_Special_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Reaver_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Armaling_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Armabird_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Armafalcon_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Ungodling_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Ungodbird_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Ungodgeon_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Tumekling_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Tumekbird_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Tumekibis_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Kerrit_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Snuffle_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Popoca_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Choloa_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Durzag_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Yakamaru_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Chompy_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Jubbly_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Jubster_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Terrorbird_Normal_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Terrorbird_Warped_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Terrorbird_Spirit_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Wolf_Juvenile_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Wolf_Normal_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Wolf_Fenris_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Wolf_White_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Rover_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Wolf_Dire_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Wolf_Jungle_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Wolf_Skoll_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Wolf_Desert_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Wolf_Hati_Hati_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Wolf_Spirit_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Fox_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Inari_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Helwyr_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Bird_Nest_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Birds_Nest_God_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Pigeon_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Pheasant_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Rocling_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Roc_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Foal_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Unicorn_White_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Unicorn_Stallion_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Unicorn_Black_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Unicorn_Angry_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Unicorn_Reanimated_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Starlight_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Pawya_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Grenwall_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Bear_Cub_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Bear_Normal_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Bear_Reanimated_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Bear_Gauntlet_Crystalline_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Callisto_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Polar_Bear_Normal_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Polar_Bear_Pbj_Agent_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Polar_Bear_Arctic_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Polar_Bear_Nanuq_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Bear_Grizzly_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Kendall_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Bear_Gauntlet_Corrupted_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Bear_Angry_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Graahk_Normal_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Graahk_Spirit_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Dust_Devil_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Smokedevil_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Smokedevil_Nuclear_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Chokedevil_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Smokedevil_Thermonuclear_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Hatchling_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Dragonling_Green_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Dragon_Green_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Dragon_Brutal_Green_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Dragonling_Blue_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Dragon_Blue_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Dragon_Brutal_Blue_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Dragonling_Red_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Dragon_Red_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Dragon_Brutal_Red_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Dragonling_Black_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Dragon_Black_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Dragon_Brutal_Black_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Dragon_Threeheaded_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Elvarg_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Dragon_King_Black_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Dragon_Queen_Black_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Hand_Creeping_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Hand_Crawling_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Hand_Skeletal_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Hand_Crushing_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Hand_Zombie_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Turoth_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Turoth_Mightiest_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Big_Turoth_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Sockroth_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Lilrask_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Kurask_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Kurask_King_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Kurask_Overlord_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Kebbit_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Kebbit_Polar_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Kebbit_Sabre_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Kebbit_Spotted_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Kebbit_Dark_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Kebbit_Dashing_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Kebbit_Wild_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Kebbit_Prickly_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Kebbit_Razor_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Kebbit_Big_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Kebbit_Desertdevil_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Kebbit_Feldip_Weasel_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Kebbit_Barbed_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Kebbit_Diseased_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Kebbit_Chocolate_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Monkey_Normal_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Monkey_Ninja_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Gorilla_Normal_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Monkey_Zombie_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Gorilla_Ancient_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Monkey_Harmless_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Monkey_Ghost_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Gorilla_Ayuni_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Gorilla_Leeuni_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Gorilla_Eruni_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Monkey_Karamja_Baby_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Monkey_Karamja_Adult_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Larupia_Normal_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Larupia_Spirit_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Kyatt_Normal_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Kyatt_Spirit_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Crabling_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Rock_Crab_Normal_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Rock_Crab_Giant_Normal_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Rock_Crab_Ammonite_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Rock_Crab_Giant_Ammonite_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Rock_Crab_Sand_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Rock_Crab_Giant_Sand_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Rock_Crab_Swamp_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Rock_Crab_Giant_Swamp_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Crab_Granite_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Lobster_Granite_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Lobster_Rock_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Rabbit_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Wolperting_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Bunyip_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Talonbeast_Talon_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Talonbeast_Nail_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Ferret_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Toy_Mouse_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Toy_Doll_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Toy_Soldier_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Cat_Clockwork_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Magicarpet_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Anichair_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Exoraxe_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Spookaxe_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Dobbin_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Marionette_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Dragonkite_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Animour_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Dead_Tree_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Jadinko_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Killerwatt_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Mackers_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Turkey_Female_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Turkey_Male_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Turkey_Protestor_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Toucan_Tenacious_Male_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Toucan_Tenacious_Female_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Toucan_Tuai_Leit_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Jellyfish_Blubber_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Jellyfish_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Pure_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Rune_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Essence_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Seagull_Normal_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Pelican_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Albatross_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Seagull_Hattenkrapper_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Seagull_Koppenploppen_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Seagull_Steven_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Ibis_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Desertwyrm_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Wyrm_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Snake_Normal_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Cobra_Normal_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Cobra_Spirit_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Juna_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Snake_Sea_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Big_Snake_Sea_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Thingumwut_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Experiment_3_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Cabbage_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Ughtanki_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Camel_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Camel_Warrior_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Balanceele_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Kalphite_Larva_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Kalphite_Worker_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Kalphite_Soldier_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Kalphite_Spirit_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Kalphite_Guardian_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Kalphite_Queen_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Kalphite_Queen_Mega_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Kalphite_Paragon_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Kalphite_Corrupted_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Kalphite_Marauder_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Kalphite_King_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Kalphite_Dung_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Kalphite_Reanimated_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Abyssal_Demon_Reanimated_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Bat_Gauntlet_Corrupted_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Bat_Gauntlet_Crystalline_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Bloodveld_Reanimated_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Dark_Beast_Gauntlet_Corrupted_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Dark_Beast_Gauntlet_Crystalline_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Dark_Beast_Pup_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Dark_Beast_Normal_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Dark_Beast_Sotetseg_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Experiment_4_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Experiment_5_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Ganodermic_Beast_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Grifolapine_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Grifolaroo_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Sporaxe_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Headless_Beast_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Behemoth_Normal_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Behemoth_Adolscent_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Siege_Beast_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Bulwark_Beast_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Behemoth_Gluttonous_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Behemoth_Runebound_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Stomp_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Hope_Devourer_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Karamthulu_Overlord_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Light_Creature_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Minotaur_Reanimated_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Monkey_Reanimated_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Rat_Gauntlet_Corrupted_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Rat_Gauntlet_Crystalline_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Rat_Fungal_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Sparky_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Spider_Corpse_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Spider_Fever_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Spider_Lava_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Spider_Shadow_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Stalker_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Soulseeker_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Stalker_Sentinel_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Night_Gazer_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Plane_Freezer_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_World_Gorger_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Flesh_Monger_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Shadow_Forger_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Veil_Ripper_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Unicorn_Gauntlet_Corrupted_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Unicorn_Gauntlet_Crystalline_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Wolf_Cave_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Wolf_Dragon_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Shadow_Hound_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Border_Collie_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Bloodhound_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Guard_Dog_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Lycurgus_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Yak_Moorrissey_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Yak_Robin_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Yak_Yaktrick_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Cabbage_Sister_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Cabbage_Crispy_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Strykewyrm_Mini_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Crocodile_Normal_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Crocodile_Mutadile_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Crocodile_Ankh_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Crocodile_Ukunduka_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Bloodveld_Insatiable_Mutated_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Bloodveld_Acidic_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Bloodveld_Vampiric_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Bloodveld_Rs3_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Beaver_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Giant_Beaver_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Racoon_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Ralph_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Rocky_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Honey_Badger_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Squirrel_Giant_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Squirrel_Australian_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Jade_Vine_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Klik_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Jackalope_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Imp_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Demon_Lesser_Rs3_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Demon_Greater_Rs3_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Demon_Kalgerion_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Demon_Thundereous_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Demon_Ripper_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Demon_Lesser_Osrs_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Demon_Greater_Osrs_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Demon_Tstanon_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Demon_Tormented_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Delrith_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Demon_Lesser_Tongue_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Demon_Greater_Tongue_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Demon_Zakln_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Demon_Pummeler_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Demon_Chocolate_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Demon_Lesser_Black_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Demon_Greater_Black_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Demon_Balfrug_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Demon_Jungle_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Demon_Riftsplitter_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Snow_Imp_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Demon_Ice_Osrs_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Demon_Ice_Rs3_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Demon_Bloodchiller_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Demon_Reanimated_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Kril_Tsutsaroth_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Pyrefiend_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Pyrelord_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Waterfiend_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Waterlord_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Icefiend_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Icelord_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Impling_Baby_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Impling_Magpie_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Impling_Dragon_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Impling_Kingly_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_Impling_Lucky_Form_1[] =
{
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_END,
};

// Todo: use the Macro for these.
static const union AnimCmd *const sAnims_Guthling[] ={
	sAnim_GeneralFrame0,
	sAnim_Guthling_1,
};

static const union AnimCmd *const sAnims_Guthbird[] ={
	sAnim_GeneralFrame0,
	sAnim_Guthbird_1,
};

static const union AnimCmd *const sAnims_Guthraptor[] ={
	sAnim_GeneralFrame0,
	sAnim_Guthraptor_1,
};

static const union AnimCmd *const sAnims_Zamling[] ={
	sAnim_GeneralFrame0,
	sAnim_Zamling_1,
};

static const union AnimCmd *const sAnims_Zambird[] ={
	sAnim_GeneralFrame0,
	sAnim_Zambird_1,
};

static const union AnimCmd *const sAnims_Zamohawk[] ={
	sAnim_GeneralFrame0,
	sAnim_Zamohawk_1,
};

static const union AnimCmd *const sAnims_Saraling[] ={
	sAnim_GeneralFrame0,
	sAnim_Saraling_1,
};

static const union AnimCmd *const sAnims_Sarabird[] ={
	sAnim_GeneralFrame0,
	sAnim_Sarabird_1,
};

static const union AnimCmd *const sAnims_Saraowl[] ={
	sAnim_GeneralFrame0,
	sAnim_Saraowl_1,
};

static const union AnimCmd *const sAnims_Chick[] ={
	sAnim_GeneralFrame0,
	sAnim_Chick_1,
};

static const union AnimCmd *const sAnims_Chicken_Normal_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Chicken_Normal_Form_1,
};

static const union AnimCmd *const sAnims_Dreadfowl[] ={
	sAnim_GeneralFrame0,
	sAnim_Dreadfowl_1,
};

static const union AnimCmd *const sAnims_Chicken_Varrock_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Chicken_Varrock_Form_1,
};

static const union AnimCmd *const sAnims_Chicken_Diving_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Chicken_Diving_Form_1,
};

static const union AnimCmd *const sAnims_Chicken_Karamja_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Chicken_Karamja_Form_1,
};

static const union AnimCmd *const sAnims_Chicken_Death_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Chicken_Death_Form_1,
};

static const union AnimCmd *const sAnims_Chicken_Bandosian_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Chicken_Bandosian_Form_1,
};

static const union AnimCmd *const sAnims_Chicken_War_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Chicken_War_Form_1,
};

static const union AnimCmd *const sAnims_Rooster_Normal_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Rooster_Normal_Form_1,
};

static const union AnimCmd *const sAnims_Ernest[] ={
	sAnim_GeneralFrame0,
	sAnim_Ernest_1,
};

static const union AnimCmd *const sAnims_Rooster_Karamja_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Rooster_Karamja_Form_1,
};

static const union AnimCmd *const sAnims_Oomlie[] ={
	sAnim_GeneralFrame0,
	sAnim_Oomlie_1,
};

static const union AnimCmd *const sAnims_Rooster_Bandosian_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Rooster_Bandosian_Form_1,
};

static const union AnimCmd *const sAnims_Chicken_Famine_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Chicken_Famine_Form_1,
};

static const union AnimCmd *const sAnims_Rooster_Varrock_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Rooster_Varrock_Form_1,
};

static const union AnimCmd *const sAnims_Chicken_Pestilence_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Chicken_Pestilence_Form_1,
};

static const union AnimCmd *const sAnims_Chicken_Lizard_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Chicken_Lizard_Form_1,
};

static const union AnimCmd *const sAnims_Chicken_Undead_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Chicken_Undead_Form_1,
};

static const union AnimCmd *const sAnims_Chicken_Mystery_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Chicken_Mystery_Form_1,
};

static const union AnimCmd *const sAnims_EvilChicken[] ={
	sAnim_GeneralFrame0,
	sAnim_EvilChicken_1,
};

static const union AnimCmd *const sAnims_Swordchick[] ={
	sAnim_GeneralFrame0,
	sAnim_Swordchick_1,
};

static const union AnimCmd *const sAnims_Newtroost[] ={
	sAnim_GeneralFrame0,
	sAnim_Newtroost_1,
};

static const union AnimCmd *const sAnims_Calf[] ={
	sAnim_GeneralFrame0,
	sAnim_Calf_1,
};

static const union AnimCmd *const sAnims_Cow[] ={
	sAnim_GeneralFrame0,
	sAnim_Cow_1,
};

static const union AnimCmd *const sAnims_Super_Cow[] ={
	sAnim_GeneralFrame0,
	sAnim_Super_Cow_1,
};

static const union AnimCmd *const sAnims_Cow_Dairy_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Cow_Dairy_Form_1,
};

static const union AnimCmd *const sAnims_Cow_Undead_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Cow_Undead_Form_1,
};

static const union AnimCmd *const sAnims_Cow_Chocolate_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Cow_Chocolate_Form_1,
};

static const union AnimCmd *const sAnims_Cow_Strawberry_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Cow_Strawberry_Form_1,
};

static const union AnimCmd *const sAnims_Cow_Vanilla_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Cow_Vanilla_Form_1,
};

static const union AnimCmd *const sAnims_Cow_Harlequin_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Cow_Harlequin_Form_1,
};

static const union AnimCmd *const sAnims_SkeletalOx_Female_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Skeletalox_Female_Form_1,
};

static const union AnimCmd *const sAnims_Bull[] ={
	sAnim_GeneralFrame0,
	sAnim_Bull_1,
};

static const union AnimCmd *const sAnims_Bull_Elder_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Bull_Elder_Form_1,
};

static const union AnimCmd *const sAnims_SkeletalOx_Male_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Skeletalox_Male_Form_1,
};

static const union AnimCmd *const sAnims_Trojan_Cow[] ={
	sAnim_GeneralFrame0,
	sAnim_Trojan_Cow_1,
};

static const union AnimCmd *const sAnims_Cow_Plague_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Cow_Plague_Form_1,
};

static const union AnimCmd *const sAnims_Minotaur_Normal_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Minotaur_Normal_Form_1,
};

static const union AnimCmd *const sAnims_Minotaur_Rune_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Minotaur_Rune_Form_1,
};

static const union AnimCmd *const sAnims_Unicow[] ={
	sAnim_GeneralFrame0,
	sAnim_Unicow_1,
};

static const union AnimCmd *const sAnims_Rat_Normal_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Rat_Normal_Form_1,
};

static const union AnimCmd *const sAnims_Giant_Rat_Normal_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Giant_Rat_Normal_Form_1,
};

static const union AnimCmd *const sAnims_Brine_Rat[] ={
	sAnim_GeneralFrame0,
	sAnim_Brine_Rat_1,
};

static const union AnimCmd *const sAnims_Giant_Rat_Blessed_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Giant_Rat_Blessed_Form_1,
};

static const union AnimCmd *const sAnims_Rat_Hell_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Rat_Hell_Form_1,
};

static const union AnimCmd *const sAnims_Giant_Rat_Hell_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Giant_Rat_Hell_Form_1,
};

static const union AnimCmd *const sAnims_Shell_Rat[] ={
	sAnim_GeneralFrame0,
	sAnim_Shell_Rat_1,
};

static const union AnimCmd *const sAnims_Rat_Crypt_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Rat_Crypt_Form_1,
};

static const union AnimCmd *const sAnims_Giant_Rat_Crypt_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Giant_Rat_Crypt_Form_1,
};

static const union AnimCmd *const sAnims_Warped_Rat[] ={
	sAnim_GeneralFrame0,
	sAnim_Warped_Rat_1,
};

static const union AnimCmd *const sAnims_Zombie_Rat[] ={
	sAnim_GeneralFrame0,
	sAnim_Zombie_Rat_1,
};

static const union AnimCmd *const sAnims_Giant_Rat_Dungeon_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Giant_Rat_Dungeon_Form_1,
};

static const union AnimCmd *const sAnims_Rat_King_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Rat_King_Form_1,
};

static const union AnimCmd *const sAnims_Giant_Rat_King_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Giant_Rat_King_Form_1,
};

static const union AnimCmd *const sAnims_Albino_Rat[] ={
	sAnim_GeneralFrame0,
	sAnim_Albino_Rat_1,
};

static const union AnimCmd *const sAnims_Angry_Rat[] ={
	sAnim_GeneralFrame0,
	sAnim_Angry_Rat_1,
};

static const union AnimCmd *const sAnims_Experiment_2_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Experiment_2_Form_1,
};

static const union AnimCmd *const sAnims_Lamb[] ={
	sAnim_GeneralFrame0,
	sAnim_Lamb_1,
};

static const union AnimCmd *const sAnims_Sheep_White_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Sheep_White_Form_1,
};

static const union AnimCmd *const sAnims_Sheep_Plague_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Sheep_Plague_Form_1,
};

static const union AnimCmd *const sAnims_Sheep_Black_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Sheep_Black_Form_1,
};

static const union AnimCmd *const sAnims_Ram_Fluffy_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Ram_Fluffy_Form_1,
};

static const union AnimCmd *const sAnims_Ram_Shaggy_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Ram_Shaggy_Form_1,
};

static const union AnimCmd *const sAnims_Ram_Golden_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Ram_Golden_Form_1,
};

static const union AnimCmd *const sAnims_Sheep_Pirate_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Sheep_Pirate_Form_1,
};

static const union AnimCmd *const sAnims_Goat_Billy_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Goat_Billy_Form_1,
};

static const union AnimCmd *const sAnims_Goat_Desert_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Goat_Desert_Form_1,
};

static const union AnimCmd *const sAnims_Goat_Mountain_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Goat_Mountain_Form_1,
};

static const union AnimCmd *const sAnims_Gorak[] ={
	sAnim_GeneralFrame0,
	sAnim_Gorak_1,
};

static const union AnimCmd *const sAnims_Sardine[] ={
	sAnim_GeneralFrame0,
	sAnim_Sardine_1,
};

static const union AnimCmd *const sAnims_Herring[] ={
	sAnim_GeneralFrame0,
	sAnim_Herring_1,
};

static const union AnimCmd *const sAnims_Trout_Normal_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Trout_Normal_Form_1,
};

static const union AnimCmd *const sAnims_Swordfish[] ={
	sAnim_GeneralFrame0,
	sAnim_Swordfish_1,
};

static const union AnimCmd *const sAnims_Trout_Leaping_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Trout_Leaping_Form_1,
};

static const union AnimCmd *const sAnims_Sturgeon[] ={
	sAnim_GeneralFrame0,
	sAnim_Sturgeon_1,
};

static const union AnimCmd *const sAnims_Trout_Tropical_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Trout_Tropical_Form_1,
};

static const union AnimCmd *const sAnims_Sailfish[] ={
	sAnim_GeneralFrame0,
	sAnim_Sailfish_1,
};

static const union AnimCmd *const sAnims_Thallasus[] ={
	sAnim_GeneralFrame0,
	sAnim_Thallasus_1,
};

static const union AnimCmd *const sAnims_Bass[] ={
	sAnim_GeneralFrame0,
	sAnim_Bass_1,
};

static const union AnimCmd *const sAnims_Salmon_Normal_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Salmon_Normal_Form_1,
};

static const union AnimCmd *const sAnims_Shark_Normal_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Shark_Normal_Form_1,
};

static const union AnimCmd *const sAnims_Fury_Shark[] ={
	sAnim_GeneralFrame0,
	sAnim_Fury_Shark_1,
};

static const union AnimCmd *const sAnims_Salmon_Leaping_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Salmon_Leaping_Form_1,
};

static const union AnimCmd *const sAnims_Shark_GreatWhite_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Shark_Greatwhite_Form_1,
};

static const union AnimCmd *const sAnims_Shark_Tiger_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Shark_Tiger_Form_1,
};

static const union AnimCmd *const sAnims_Mackerel[] ={
	sAnim_GeneralFrame0,
	sAnim_Mackerel_1,
};

static const union AnimCmd *const sAnims_Catfish[] ={
	sAnim_GeneralFrame0,
	sAnim_Catfish_1,
};

static const union AnimCmd *const sAnims_Shark_Baron_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Shark_Baron_Form_1,
};

static const union AnimCmd *const sAnims_Tarpon[] ={
	sAnim_GeneralFrame0,
	sAnim_Tarpon_1,
};

static const union AnimCmd *const sAnims_Seerfish[] ={
	sAnim_GeneralFrame0,
	sAnim_Seerfish_1,
};

static const union AnimCmd *const sAnims_DesertSole[] ={
	sAnim_GeneralFrame0,
	sAnim_Desertsole_1,
};

static const union AnimCmd *const sAnims_Sillago[] ={
	sAnim_GeneralFrame0,
	sAnim_Sillago_1,
};

static const union AnimCmd *const sAnims_Wobbegong[] ={
	sAnim_GeneralFrame0,
	sAnim_Wobbegong_1,
};

static const union AnimCmd *const sAnims_Karambwanj[] ={
	sAnim_GeneralFrame0,
	sAnim_Karambwanj_1,
};

static const union AnimCmd *const sAnims_Karambwan[] ={
	sAnim_GeneralFrame0,
	sAnim_Karambwan_1,
};

static const union AnimCmd *const sAnims_Whitefish[] ={
	sAnim_GeneralFrame0,
	sAnim_Whitefish_1,
};

static const union AnimCmd *const sAnims_Beltfish[] ={
	sAnim_GeneralFrame0,
	sAnim_Beltfish_1,
};

static const union AnimCmd *const sAnims_Manta_Ray[] ={
	sAnim_GeneralFrame0,
	sAnim_Manta_Ray_1,
};

static const union AnimCmd *const sAnims_Cod[] ={
	sAnim_GeneralFrame0,
	sAnim_Cod_1,
};

static const union AnimCmd *const sAnims_Rainbow[] ={
	sAnim_GeneralFrame0,
	sAnim_Rainbow_1,
};

static const union AnimCmd *const sAnims_Shark_Golden_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Shark_Golden_Form_1,
};

static const union AnimCmd *const sAnims_Pike[] ={
	sAnim_GeneralFrame0,
	sAnim_Pike_1,
};

static const union AnimCmd *const sAnims_Monkfish_Normal_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Monkfish_Normal_Form_1,
};

static const union AnimCmd *const sAnims_AnglerFish[] ={
	sAnim_GeneralFrame0,
	sAnim_Anglerfish_1,
};

static const union AnimCmd *const sAnims_Giant_Carp[] ={
	sAnim_GeneralFrame0,
	sAnim_Giant_Carp_1,
};

static const union AnimCmd *const sAnims_Monkfish_Fresh_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Monkfish_Fresh_Form_1,
};

static const union AnimCmd *const sAnims_Monkfish_Golden_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Monkfish_Golden_Form_1,
};

static const union AnimCmd *const sAnims_GoblinFish[] ={
	sAnim_GeneralFrame0,
	sAnim_Goblinfish_1,
};

static const union AnimCmd *const sAnims_Pet_Fish[] ={
	sAnim_GeneralFrame0,
	sAnim_Pet_Fish_1,
};

static const union AnimCmd *const sAnims_Gilbert[] ={
	sAnim_GeneralFrame0,
	sAnim_Gilbert_1,
};

static const union AnimCmd *const sAnims_Cavefish[] ={
	sAnim_GeneralFrame0,
	sAnim_Cavefish_1,
};

static const union AnimCmd *const sAnims_Rocktail[] ={
	sAnim_GeneralFrame0,
	sAnim_Rocktail_1,
};

static const union AnimCmd *const sAnims_Eel_Slimy_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Eel_Slimy_Form_1,
};

static const union AnimCmd *const sAnims_Eel_Cave_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Eel_Cave_Form_1,
};

static const union AnimCmd *const sAnims_Eel_Sacred_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Eel_Sacred_Form_1,
};

static const union AnimCmd *const sAnims_Eel_Lava_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Eel_Lava_Form_1,
};

static const union AnimCmd *const sAnims_Eel_Infernal_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Eel_Infernal_Form_1,
};

static const union AnimCmd *const sAnims_Eel_Mottled_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Eel_Mottled_Form_1,
};

static const union AnimCmd *const sAnims_Eel_Short_Finned_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Eel_Short_Finned_Form_1,
};

static const union AnimCmd *const sAnims_Eel_Salve_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Eel_Salve_Form_1,
};

static const union AnimCmd *const sAnims_Eel_Dusk_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Eel_Dusk_Form_1,
};

static const union AnimCmd *const sAnims_Cave_Moray[] ={
	sAnim_GeneralFrame0,
	sAnim_Cave_Moray_1,
};

static const union AnimCmd *const sAnims_Vile_Fish[] ={
	sAnim_GeneralFrame0,
	sAnim_Vile_Fish_1,
};

static const union AnimCmd *const sAnims_Piglet[] ={
	sAnim_GeneralFrame0,
	sAnim_Piglet_1,
};

static const union AnimCmd *const sAnims_Pig[] ={
	sAnim_GeneralFrame0,
	sAnim_Pig_1,
};

static const union AnimCmd *const sAnims_Pigzilla[] ={
	sAnim_GeneralFrame0,
	sAnim_Pigzilla_1,
};

static const union AnimCmd *const sAnims_Puppy_Pup_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Puppy_Pup_Form_1,
};

static const union AnimCmd *const sAnims_Puppy_Mutt_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Puppy_Mutt_Form_1,
};

static const union AnimCmd *const sAnims_Terrier[] ={
	sAnim_GeneralFrame0,
	sAnim_Terrier_1,
};

static const union AnimCmd *const sAnims_Sheepdog[] ={
	sAnim_GeneralFrame0,
	sAnim_Sheepdog_1,
};

static const union AnimCmd *const sAnims_Dalmatian[] ={
	sAnim_GeneralFrame0,
	sAnim_Dalmatian_1,
};

static const union AnimCmd *const sAnims_Greyhound[] ={
	sAnim_GeneralFrame0,
	sAnim_Greyhound_1,
};

static const union AnimCmd *const sAnims_Bulldog[] ={
	sAnim_GeneralFrame0,
	sAnim_Bulldog_1,
};

static const union AnimCmd *const sAnims_Labrador[] ={
	sAnim_GeneralFrame0,
	sAnim_Labrador_1,
};

static const union AnimCmd *const sAnims_Corgi[] ={
	sAnim_GeneralFrame0,
	sAnim_Corgi_1,
};

static const union AnimCmd *const sAnims_Terror_Dog[] ={
	sAnim_GeneralFrame0,
	sAnim_Terror_Dog_1,
};

static const union AnimCmd *const sAnims_Stray_Dog[] ={
	sAnim_GeneralFrame0,
	sAnim_Stray_Dog_1,
};

static const union AnimCmd *const sAnims_Muncher[] ={
	sAnim_GeneralFrame0,
	sAnim_Muncher_1,
};

static const union AnimCmd *const sAnims_Hellpuppy[] ={
	sAnim_GeneralFrame0,
	sAnim_Hellpuppy_1,
};

static const union AnimCmd *const sAnims_Hellhound[] ={
	sAnim_GeneralFrame0,
	sAnim_Hellhound_1,
};

static const union AnimCmd *const sAnims_Cerberus[] ={
	sAnim_GeneralFrame0,
	sAnim_Cerberus_1,
};

static const union AnimCmd *const sAnims_Kitten[] ={
	sAnim_GeneralFrame0,
	sAnim_Kitten_1,
};

static const union AnimCmd *const sAnims_Cat_Normal_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Cat_Normal_Form_1,
};

static const union AnimCmd *const sAnims_Cat_Overgrown_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Cat_Overgrown_Form_1,
};

static const union AnimCmd *const sAnims_Cat_Lazy_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Cat_Lazy_Form_1,
};

static const union AnimCmd *const sAnims_Cat_Wily_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Cat_Wily_Form_1,
};

static const union AnimCmd *const sAnims_Cat_Purple_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Cat_Purple_Form_1,
};

static const union AnimCmd *const sAnims_Cat_Hell_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Cat_Hell_Form_1,
};

static const union AnimCmd *const sAnims_Cat_Post_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Cat_Post_Form_1,
};

static const union AnimCmd *const sAnims_Cat_Sunken_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Cat_Sunken_Form_1,
};

static const union AnimCmd *const sAnims_Bob[] ={
	sAnim_GeneralFrame0,
	sAnim_Bob_1,
};

static const union AnimCmd *const sAnims_Evil_Bob[] ={
	sAnim_GeneralFrame0,
	sAnim_Evil_Bob_1,
};

static const union AnimCmd *const sAnims_Pet_Rock[] ={
	sAnim_GeneralFrame0,
	sAnim_Pet_Rock_1,
};

static const union AnimCmd *const sAnims_Rock_Polished_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Rock_Polished_Form_1,
};

static const union AnimCmd *const sAnims_Pillar[] ={
	sAnim_GeneralFrame0,
	sAnim_Pillar_1,
};

static const union AnimCmd *const sAnims_Rock_Soup[] ={
	sAnim_GeneralFrame0,
	sAnim_Rock_Soup_1,
};

static const union AnimCmd *const sAnims_Slagilith[] ={
	sAnim_GeneralFrame0,
	sAnim_Slagilith_1,
};

static const union AnimCmd *const sAnims_Rock_Strange_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Rock_Strange_Form_1,
};

static const union AnimCmd *const sAnims_Rock_Golden_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Rock_Golden_Form_1,
};

static const union AnimCmd *const sAnims_Party_Rock[] ={
	sAnim_GeneralFrame0,
	sAnim_Party_Rock_1,
};

static const union AnimCmd *const sAnims_Strykewyrm_Freezy_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Strykewyrm_Freezy_Form_1,
};

static const union AnimCmd *const sAnims_Strykewyrm_Leafy_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Strykewyrm_Leafy_Form_1,
};

static const union AnimCmd *const sAnims_Strykewyrm_Sandy_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Strykewyrm_Sandy_Form_1,
};

static const union AnimCmd *const sAnims_Strykewyrm_Wildy_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Strykewyrm_Wildy_Form_1,
};

static const union AnimCmd *const sAnims_Scorpling[] ={
	sAnim_GeneralFrame0,
	sAnim_Scorpling_1,
};

static const union AnimCmd *const sAnims_Scorpion_Normal_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Scorpion_Normal_Form_1,
};

static const union AnimCmd *const sAnims_Scorpion_Pit_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Scorpion_Pit_Form_1,
};

static const union AnimCmd *const sAnims_Scorpion_Poison_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Scorpion_Poison_Form_1,
};

static const union AnimCmd *const sAnims_Scorpion_King_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Scorpion_King_Form_1,
};

static const union AnimCmd *const sAnims_Scorpion_Grave_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Scorpion_Grave_Form_1,
};

static const union AnimCmd *const sAnims_Scorpion_Corrupted_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Scorpion_Corrupted_Form_1,
};

static const union AnimCmd *const sAnims_Scorpion_Reanimated_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Scorpion_Reanimated_Form_1,
};

static const union AnimCmd *const sAnims_Scorpion_Gauntlet_Crystalline_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Scorpion_Gauntlet_Crystalline_Form_1,
};

static const union AnimCmd *const sAnims_Scorpion_Gauntlet_Corrupted_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Scorpion_Gauntlet_Corrupted_Form_1,
};

static const union AnimCmd *const sAnims_Scorpion_Khazard_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Scorpion_Khazard_Form_1,
};

static const union AnimCmd *const sAnims_Scorpion_Spirit_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Scorpion_Spirit_Form_1,
};

static const union AnimCmd *const sAnims_Scorpia[] ={
	sAnim_GeneralFrame0,
	sAnim_Scorpia_1,
};

static const union AnimCmd *const sAnims_Dreadnip[] ={
	sAnim_GeneralFrame0,
	sAnim_Dreadnip_1,
};

static const union AnimCmd *const sAnims_Peepling[] ={
	sAnim_GeneralFrame0,
	sAnim_Peepling_1,
};

static const union AnimCmd *const sAnims_Sneakrpeep[] ={
	sAnim_GeneralFrame0,
	sAnim_Sneakrpeep_1,
};

static const union AnimCmd *const sAnims_Runtstable[] ={
	sAnim_GeneralFrame0,
	sAnim_Runtstable_1,
};

static const union AnimCmd *const sAnims_Basilisk[] ={
	sAnim_GeneralFrame0,
	sAnim_Basilisk_1,
};

static const union AnimCmd *const sAnims_Baby_Mole[] ={
	sAnim_GeneralFrame0,
	sAnim_Baby_Mole_1,
};

static const union AnimCmd *const sAnims_Giant_Mole[] ={
	sAnim_GeneralFrame0,
	sAnim_Giant_Mole_1,
};

static const union AnimCmd *const sAnims_Squirrel[] ={
	sAnim_GeneralFrame0,
	sAnim_Squirrel_1,
};

static const union AnimCmd *const sAnims_Ravenling[] ={
	sAnim_GeneralFrame0,
	sAnim_Ravenling_1,
};

static const union AnimCmd *const sAnims_Raven_Normal_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Raven_Normal_Form_1,
};

static const union AnimCmd *const sAnims_Raven_Nevermore_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Raven_Nevermore_Form_1,
};

static const union AnimCmd *const sAnims_Raven_Spooky_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Raven_Spooky_Form_1,
};

static const union AnimCmd *const sAnims_Raven_Crystal_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Raven_Crystal_Form_1,
};

static const union AnimCmd *const sAnims_Crow[] ={
	sAnim_GeneralFrame0,
	sAnim_Crow_1,
};

static const union AnimCmd *const sAnims_Magpie[] ={
	sAnim_GeneralFrame0,
	sAnim_Magpie_1,
};

static const union AnimCmd *const sAnims_Chinchompa_Grey_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Chinchompa_Grey_Form_1,
};

static const union AnimCmd *const sAnims_Chinchompa_Red_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Chinchompa_Red_Form_1,
};

static const union AnimCmd *const sAnims_Chinchompa_Gold_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Chinchompa_Gold_Form_1,
};

static const union AnimCmd *const sAnims_Vultling[] ={
	sAnim_GeneralFrame0,
	sAnim_Vultling_1,
};

static const union AnimCmd *const sAnims_Vulture[] ={
	sAnim_GeneralFrame0,
	sAnim_Vulture_1,
};

static const union AnimCmd *const sAnims_Pengling[] ={
	sAnim_GeneralFrame0,
	sAnim_Pengling_1,
};

static const union AnimCmd *const sAnims_Penguin[] ={
	sAnim_GeneralFrame0,
	sAnim_Penguin_1,
};

static const union AnimCmd *const sAnims_Penguin_Clockwork_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Penguin_Clockwork_Form_1,
};

static const union AnimCmd *const sAnims_The_Thing[] ={
	sAnim_GeneralFrame0,
	sAnim_The_Thing_1,
};

static const union AnimCmd *const sAnims_Ping[] ={
	sAnim_GeneralFrame0,
	sAnim_Ping_1,
};

static const union AnimCmd *const sAnims_Pong[] ={
	sAnim_GeneralFrame0,
	sAnim_Pong_1,
};

static const union AnimCmd *const sAnims_Penguin_Mcgraw_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Penguin_Mcgraw_Form_1,
};

static const union AnimCmd *const sAnims_Penguin_Spy_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Penguin_Spy_Form_1,
};

static const union AnimCmd *const sAnims_Penguin_Agent_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Penguin_Agent_Form_1,
};

static const union AnimCmd *const sAnims_Penguin_Disguise_Cactus_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Penguin_Disguise_Cactus_Form_1,
};

static const union AnimCmd *const sAnims_Penguin_Disguise_Rock_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Penguin_Disguise_Rock_Form_1,
};

static const union AnimCmd *const sAnims_Penguin_Disguise_Bush_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Penguin_Disguise_Bush_Form_1,
};

static const union AnimCmd *const sAnims_Penguin_Disguise_Box_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Penguin_Disguise_Box_Form_1,
};

static const union AnimCmd *const sAnims_Exexparrot[] ={
	sAnim_GeneralFrame0,
	sAnim_Exexparrot_1,
};

static const union AnimCmd *const sAnims_Broav[] ={
	sAnim_GeneralFrame0,
	sAnim_Broav_1,
};

static const union AnimCmd *const sAnims_Tooths[] ={
	sAnim_GeneralFrame0,
	sAnim_Tooths_1,
};

static const union AnimCmd *const sAnims_Rune_Guardian[] ={
	sAnim_GeneralFrame0,
	sAnim_Rune_Guardian_1,
};

static const union AnimCmd *const sAnims_Gnomey[] ={
	sAnim_GeneralFrame0,
	sAnim_Gnomey_1,
};

static const union AnimCmd *const sAnims_Sparkles[] ={
	sAnim_GeneralFrame0,
	sAnim_Sparkles_1,
};

static const union AnimCmd *const sAnims_Bat[] ={
	sAnim_GeneralFrame0,
	sAnim_Bat_1,
};

static const union AnimCmd *const sAnims_Giant_Bat[] ={
	sAnim_GeneralFrame0,
	sAnim_Giant_Bat_1,
};

static const union AnimCmd *const sAnims_Warped_Bat[] ={
	sAnim_GeneralFrame0,
	sAnim_Warped_Bat_1,
};

static const union AnimCmd *const sAnims_Albino_Bat[] ={
	sAnim_GeneralFrame0,
	sAnim_Albino_Bat_1,
};

static const union AnimCmd *const sAnims_Bat_Box_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Bat_Box_Form_1,
};

static const union AnimCmd *const sAnims_Fruit_Bat[] ={
	sAnim_GeneralFrame0,
	sAnim_Fruit_Bat_1,
};

static const union AnimCmd *const sAnims_Vampyrebat[] ={
	sAnim_GeneralFrame0,
	sAnim_Vampyrebat_1,
};

static const union AnimCmd *const sAnims_Deathwing[] ={
	sAnim_GeneralFrame0,
	sAnim_Deathwing_1,
};

static const union AnimCmd *const sAnims_Shaikah[] ={
	sAnim_GeneralFrame0,
	sAnim_Shaikah_1,
};

static const union AnimCmd *const sAnims_Growler[] ={
	sAnim_GeneralFrame0,
	sAnim_Growler_1,
};

static const union AnimCmd *const sAnims_Phoenling_Rebirth_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Phoenling_Rebirth_Form_1,
};

static const union AnimCmd *const sAnims_Phoenling_Reborn_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Phoenling_Reborn_Form_1,
};

static const union AnimCmd *const sAnims_Phoenix_Rebirth_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Phoenix_Rebirth_Form_1,
};

static const union AnimCmd *const sAnims_Phoenix_Reborn_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Phoenix_Reborn_Form_1,
};

static const union AnimCmd *const sAnims_Plant_Strange_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Plant_Strange_Form_1,
};

static const union AnimCmd *const sAnims_Plant_Stranger_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Plant_Stranger_Form_1,
};

static const union AnimCmd *const sAnims_Evilturnip[] ={
	sAnim_GeneralFrame0,
	sAnim_Evilturnip_1,
};

static const union AnimCmd *const sAnims_Creature_Cute_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Creature_Cute_Form_1,
};

static const union AnimCmd *const sAnims_Creature_Evil_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Creature_Evil_Form_1,
};

static const union AnimCmd *const sAnims_Baby_Yak[] ={
	sAnim_GeneralFrame0,
	sAnim_Baby_Yak_1,
};

static const union AnimCmd *const sAnims_Yak_Normal_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Yak_Normal_Form_1,
};

static const union AnimCmd *const sAnims_Yak_Pack_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Yak_Pack_Form_1,
};

static const union AnimCmd *const sAnims_Yak_Sacred_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Yak_Sacred_Form_1,
};

static const union AnimCmd *const sAnims_Yak_Cluescroll_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Yak_Cluescroll_Form_1,
};

static const union AnimCmd *const sAnims_Yak_Undead_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Yak_Undead_Form_1,
};

static const union AnimCmd *const sAnims_Yak_Snack_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Yak_Snack_Form_1,
};

static const union AnimCmd *const sAnims_Minitrice[] ={
	sAnim_GeneralFrame0,
	sAnim_Minitrice_1,
};

static const union AnimCmd *const sAnims_Cockatrice[] ={
	sAnim_GeneralFrame0,
	sAnim_Cockatrice_1,
};

static const union AnimCmd *const sAnims_Guthatrice[] ={
	sAnim_GeneralFrame0,
	sAnim_Guthatrice_1,
};

static const union AnimCmd *const sAnims_Zamatrice[] ={
	sAnim_GeneralFrame0,
	sAnim_Zamatrice_1,
};

static const union AnimCmd *const sAnims_Saratrice[] ={
	sAnim_GeneralFrame0,
	sAnim_Saratrice_1,
};

static const union AnimCmd *const sAnims_Corxatrice[] ={
	sAnim_GeneralFrame0,
	sAnim_Corxatrice_1,
};

static const union AnimCmd *const sAnims_Vulatrice[] ={
	sAnim_GeneralFrame0,
	sAnim_Vulatrice_1,
};

static const union AnimCmd *const sAnims_Pengatrice[] ={
	sAnim_GeneralFrame0,
	sAnim_Pengatrice_1,
};

static const union AnimCmd *const sAnims_Chocatrice[] ={
	sAnim_GeneralFrame0,
	sAnim_Chocatrice_1,
};

static const union AnimCmd *const sAnims_Sproutling_Summer_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Sproutling_Summer_Form_1,
};

static const union AnimCmd *const sAnims_Sproutling_Spring_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Sproutling_Spring_Form_1,
};

static const union AnimCmd *const sAnims_Sproutling_Winter_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Sproutling_Winter_Form_1,
};

static const union AnimCmd *const sAnims_Sproutling_Autumn_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Sproutling_Autumn_Form_1,
};

static const union AnimCmd *const sAnims_Rue[] ={
	sAnim_GeneralFrame0,
	sAnim_Rue_1,
};

static const union AnimCmd *const sAnims_Monty[] ={
	sAnim_GeneralFrame0,
	sAnim_Monty_1,
};

static const union AnimCmd *const sAnims_Zygomite[] ={
	sAnim_GeneralFrame0,
	sAnim_Zygomite_1,
};

static const union AnimCmd *const sAnims_Abyssaling[] ={
	sAnim_GeneralFrame0,
	sAnim_Abyssaling_1,
};

static const union AnimCmd *const sAnims_Abyssal_Minion_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Abyssal_Minion_Form_1,
};

static const union AnimCmd *const sAnims_Abyssal_Demon_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Abyssal_Demon_Form_1,
};

static const union AnimCmd *const sAnims_Abyssal_Sire_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Abyssal_Sire_Form_1,
};

static const union AnimCmd *const sAnims_Abyssal_Leech_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Abyssal_Leech_Form_1,
};

static const union AnimCmd *const sAnims_Abyssal_Parasite_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Abyssal_Parasite_Form_1,
};

static const union AnimCmd *const sAnims_Abyssal_Lurker_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Abyssal_Lurker_Form_1,
};

static const union AnimCmd *const sAnims_Abyssal_Walker_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Abyssal_Walker_Form_1,
};

static const union AnimCmd *const sAnims_Abyssal_Titan_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Abyssal_Titan_Form_1,
};

static const union AnimCmd *const sAnims_Tz_Kih[] ={
	sAnim_GeneralFrame0,
	sAnim_Tz_Kih_1,
};

static const union AnimCmd *const sAnims_Tz_Kek[] ={
	sAnim_GeneralFrame0,
	sAnim_Tz_Kek_1,
};

static const union AnimCmd *const sAnims_Tok_Xil[] ={
	sAnim_GeneralFrame0,
	sAnim_Tok_Xil_1,
};

static const union AnimCmd *const sAnims_Tz_Kih_Spirit_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Tz_Kih_Spirit_Form_1,
};

static const union AnimCmd *const sAnims_Ket_Dill[] ={
	sAnim_GeneralFrame0,
	sAnim_Ket_Dill_1,
};

static const union AnimCmd *const sAnims_Ket_Zek[] ={
	sAnim_GeneralFrame0,
	sAnim_Ket_Zek_1,
};

static const union AnimCmd *const sAnims_Yt_Hurkot[] ={
	sAnim_GeneralFrame0,
	sAnim_Yt_Hurkot_1,
};

static const union AnimCmd *const sAnims_Yt_Mejkot[] ={
	sAnim_GeneralFrame0,
	sAnim_Yt_Mejkot_1,
};

static const union AnimCmd *const sAnims_Tzrek_Jad[] ={
	sAnim_GeneralFrame0,
	sAnim_Tzrek_Jad_1,
};

static const union AnimCmd *const sAnims_Tztok_Jad[] ={
	sAnim_GeneralFrame0,
	sAnim_Tztok_Jad_1,
};

static const union AnimCmd *const sAnims_Jaltok_Jad[] ={
	sAnim_GeneralFrame0,
	sAnim_Jaltok_Jad_1,
};

static const union AnimCmd *const sAnims_Jal_Mejrah[] ={
	sAnim_GeneralFrame0,
	sAnim_Jal_Mejrah_1,
};

static const union AnimCmd *const sAnims_Jal_Ak[] ={
	sAnim_GeneralFrame0,
	sAnim_Jal_Ak_1,
};

static const union AnimCmd *const sAnims_Jal_Xil[] ={
	sAnim_GeneralFrame0,
	sAnim_Jal_Xil_1,
};

static const union AnimCmd *const sAnims_Jal_Nib[] ={
	sAnim_GeneralFrame0,
	sAnim_Jal_Nib_1,
};

static const union AnimCmd *const sAnims_Jal_Imkot[] ={
	sAnim_GeneralFrame0,
	sAnim_Jal_Imkot_1,
};

static const union AnimCmd *const sAnims_Jal_Zek[] ={
	sAnim_GeneralFrame0,
	sAnim_Jal_Zek_1,
};

static const union AnimCmd *const sAnims_Tzkal_Zuk[] ={
	sAnim_GeneralFrame0,
	sAnim_Tzkal_Zuk_1,
};

static const union AnimCmd *const sAnims_Duckling[] ={
	sAnim_GeneralFrame0,
	sAnim_Duckling_1,
};

static const union AnimCmd *const sAnims_Swan[] ={
	sAnim_GeneralFrame0,
	sAnim_Swan_1,
};

static const union AnimCmd *const sAnims_Duck_Normal_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Duck_Normal_Form_1,
};

static const union AnimCmd *const sAnims_Mega_Duck[] ={
	sAnim_GeneralFrame0,
	sAnim_Mega_Duck_1,
};

static const union AnimCmd *const sAnims_Duck_Cart_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Duck_Cart_Form_1,
};

static const union AnimCmd *const sAnims_Platypode[] ={
	sAnim_GeneralFrame0,
	sAnim_Platypode_1,
};

static const union AnimCmd *const sAnims_Platypus[] ={
	sAnim_GeneralFrame0,
	sAnim_Platypus_1,
};

static const union AnimCmd *const sAnims_Fledgling[] ={
	sAnim_GeneralFrame0,
	sAnim_Fledgling_1,
};

static const union AnimCmd *const sAnims_Dagannoth_Normal_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Dagannoth_Normal_Form_1,
};

static const union AnimCmd *const sAnims_Dagannoth_Guardian_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Dagannoth_Guardian_Form_1,
};

static const union AnimCmd *const sAnims_Dagannoth_King_Range_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Dagannoth_King_Range_Form_1,
};

static const union AnimCmd *const sAnims_Dagannoth_King_Magic_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Dagannoth_King_Magic_Form_1,
};

static const union AnimCmd *const sAnims_Dagannoth_King_Melee_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Dagannoth_King_Melee_Form_1,
};

static const union AnimCmd *const sAnims_Dagannoth_King_Range_Mega_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Dagannoth_King_Range_Mega_Form_1,
};

static const union AnimCmd *const sAnims_Dagannoth_King_Magic_Mega_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Dagannoth_King_Magic_Mega_Form_1,
};

static const union AnimCmd *const sAnims_Dagannoth_King_Melee_Mega_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Dagannoth_King_Melee_Mega_Form_1,
};

static const union AnimCmd *const sAnims_Chaos_Ele[] ={
	sAnim_GeneralFrame0,
	sAnim_Chaos_Ele_1,
};

static const union AnimCmd *const sAnims_Chaos_Ele_Mega_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Chaos_Ele_Mega_Form_1,
};

static const union AnimCmd *const sAnims_Bandling[] ={
	sAnim_GeneralFrame0,
	sAnim_Bandling_1,
};

static const union AnimCmd *const sAnims_Bandbird[] ={
	sAnim_GeneralFrame0,
	sAnim_Bandbird_1,
};

static const union AnimCmd *const sAnims_Bandeagle[] ={
	sAnim_GeneralFrame0,
	sAnim_Bandeagle_1,
};

static const union AnimCmd *const sAnims_Zaroling[] ={
	sAnim_GeneralFrame0,
	sAnim_Zaroling_1,
};

static const union AnimCmd *const sAnims_Zarobird[] ={
	sAnim_GeneralFrame0,
	sAnim_Zarobird_1,
};

static const union AnimCmd *const sAnims_Zaraven[] ={
	sAnim_GeneralFrame0,
	sAnim_Zaraven_1,
};

static const union AnimCmd *const sAnims_Sereling[] ={
	sAnim_GeneralFrame0,
	sAnim_Sereling_1,
};

static const union AnimCmd *const sAnims_Serebird[] ={
	sAnim_GeneralFrame0,
	sAnim_Serebird_1,
};

static const union AnimCmd *const sAnims_Serepea[] ={
	sAnim_GeneralFrame0,
	sAnim_Serepea_1,
};

static const union AnimCmd *const sAnims_Frogspawn[] ={
	sAnim_GeneralFrame0,
	sAnim_Frogspawn_1,
};

static const union AnimCmd *const sAnims_Frog_Normal_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Frog_Normal_Form_1,
};

static const union AnimCmd *const sAnims_Giant_Frog_Normal_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Giant_Frog_Normal_Form_1,
};

static const union AnimCmd *const sAnims_Giant_Frog_Royal_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Giant_Frog_Royal_Form_1,
};

static const union AnimCmd *const sAnims_Frog_Bloated_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Frog_Bloated_Form_1,
};

static const union AnimCmd *const sAnims_Frog_Balloon_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Frog_Balloon_Form_1,
};

static const union AnimCmd *const sAnims_Toad_Barker_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Toad_Barker_Form_1,
};

static const union AnimCmd *const sAnims_Frogeel[] ={
	sAnim_GeneralFrame0,
	sAnim_Frogeel_1,
};

static const union AnimCmd *const sAnims_Spiderling[] ={
	sAnim_GeneralFrame0,
	sAnim_Spiderling_1,
};

static const union AnimCmd *const sAnims_Spider_Giant_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Spider_Giant_Form_1,
};

static const union AnimCmd *const sAnims_Spider_Deadlyred_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Spider_Deadlyred_Form_1,
};

static const union AnimCmd *const sAnims_Spider_Jungle_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Spider_Jungle_Form_1,
};

static const union AnimCmd *const sAnims_Spider_Blessed_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Spider_Blessed_Form_1,
};

static const union AnimCmd *const sAnims_Spider_Huge_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Spider_Huge_Form_1,
};

static const union AnimCmd *const sAnims_Spider_Night_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Spider_Night_Form_1,
};

static const union AnimCmd *const sAnims_Spider_Ice_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Spider_Ice_Form_1,
};

static const union AnimCmd *const sAnims_Spider_Spirit_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Spider_Spirit_Form_1,
};

static const union AnimCmd *const sAnims_Eek[] ={
	sAnim_GeneralFrame0,
	sAnim_Eek_1,
};

static const union AnimCmd *const sAnims_Minstrlweb[] ={
	sAnim_GeneralFrame0,
	sAnim_Minstrlweb_1,
};

static const union AnimCmd *const sAnims_Sarachnis[] ={
	sAnim_GeneralFrame0,
	sAnim_Sarachnis_1,
};

static const union AnimCmd *const sAnims_Venenatis[] ={
	sAnim_GeneralFrame0,
	sAnim_Venenatis_1,
};

static const union AnimCmd *const sAnims_Spidine[] ={
	sAnim_GeneralFrame0,
	sAnim_Spidine_1,
};

static const union AnimCmd *const sAnims_Crayfish[] ={
	sAnim_GeneralFrame0,
	sAnim_Crayfish_1,
};

static const union AnimCmd *const sAnims_Shrimp[] ={
	sAnim_GeneralFrame0,
	sAnim_Shrimp_1,
};

static const union AnimCmd *const sAnims_Lobster_Normal_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Lobster_Normal_Form_1,
};

static const union AnimCmd *const sAnims_Lobster_Golden_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Lobster_Golden_Form_1,
};

static const union AnimCmd *const sAnims_Lobster_Giant_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Lobster_Giant_Form_1,
};

static const union AnimCmd *const sAnims_Lobster_Heim_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Lobster_Heim_Form_1,
};

static const union AnimCmd *const sAnims_Lobster_Obsidian_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Lobster_Obsidian_Form_1,
};

static const union AnimCmd *const sAnims_Crab_Red_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Crab_Red_Form_1,
};

static const union AnimCmd *const sAnims_Giant_Crab_Red_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Giant_Crab_Red_Form_1,
};

static const union AnimCmd *const sAnims_Crab_Moss_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Crab_Moss_Form_1,
};

static const union AnimCmd *const sAnims_Giant_Crab_Moss_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Giant_Crab_Moss_Form_1,
};

static const union AnimCmd *const sAnims_Crab_Rumpumped_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Crab_Rumpumped_Form_1,
};

static const union AnimCmd *const sAnims_Giant_Crab_Rumpumped_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Giant_Crab_Rumpumped_Form_1,
};

static const union AnimCmd *const sAnims_Crab_Dark_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Crab_Dark_Form_1,
};

static const union AnimCmd *const sAnims_Giant_Crab_Dark_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Giant_Crab_Dark_Form_1,
};

static const union AnimCmd *const sAnims_Crab_Grey_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Crab_Grey_Form_1,
};

static const union AnimCmd *const sAnims_Giant_Crab_Grey_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Giant_Crab_Grey_Form_1,
};

static const union AnimCmd *const sAnims_Knife_Crab[] ={
	sAnim_GeneralFrame0,
	sAnim_Knife_Crab_1,
};

static const union AnimCmd *const sAnims_Heim_Crab[] ={
	sAnim_GeneralFrame0,
	sAnim_Heim_Crab_1,
};

static const union AnimCmd *const sAnims_Websnipper[] ={
	sAnim_GeneralFrame0,
	sAnim_Websnipper_1,
};

static const union AnimCmd *const sAnims_Blue_Crab[] ={
	sAnim_GeneralFrame0,
	sAnim_Blue_Crab_1,
};

static const union AnimCmd *const sAnims_Crablet_First_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Crablet_First_Form_1,
};

static const union AnimCmd *const sAnims_Crablet_Second_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Crablet_Second_Form_1,
};

static const union AnimCmd *const sAnims_Crablet_Third_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Crablet_Third_Form_1,
};

static const union AnimCmd *const sAnims_Crablet_Forth_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Crablet_Forth_Form_1,
};

static const union AnimCmd *const sAnims_Crablet_Fifth_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Crablet_Fifth_Form_1,
};

static const union AnimCmd *const sAnims_Crawler_Cave_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Crawler_Cave_Form_1,
};

static const union AnimCmd *const sAnims_Crawler_Chasm_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Crawler_Chasm_Form_1,
};

static const union AnimCmd *const sAnims_Crawler_Monstrous_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Crawler_Monstrous_Form_1,
};

static const union AnimCmd *const sAnims_Winston[] ={
	sAnim_GeneralFrame0,
	sAnim_Winston_1,
};

static const union AnimCmd *const sAnims_Tortoise_Normal_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Tortoise_Normal_Form_1,
};

static const union AnimCmd *const sAnims_Tortoise_Warped_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Tortoise_Warped_Form_1,
};

static const union AnimCmd *const sAnims_Tortoise_War_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Tortoise_War_Form_1,
};

static const union AnimCmd *const sAnims_Valluta[] ={
	sAnim_GeneralFrame0,
	sAnim_Valluta_1,
};

static const union AnimCmd *const sAnims_Sea_Turtle[] ={
	sAnim_GeneralFrame0,
	sAnim_Sea_Turtle_1,
};

static const union AnimCmd *const sAnims_Sea_Turtle_Treasure_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Sea_Turtle_Treasure_Form_1,
};

static const union AnimCmd *const sAnims_Herbert[] ={
	sAnim_GeneralFrame0,
	sAnim_Herbert_1,
};

static const union AnimCmd *const sAnims_Xinachto[] ={
	sAnim_GeneralFrame0,
	sAnim_Xinachto_1,
};

static const union AnimCmd *const sAnims_Cave_Slime[] ={
	sAnim_GeneralFrame0,
	sAnim_Cave_Slime_1,
};

static const union AnimCmd *const sAnims_Jelly_Normal_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Jelly_Normal_Form_1,
};

static const union AnimCmd *const sAnims_Jelly_Warped_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Jelly_Warped_Form_1,
};

static const union AnimCmd *const sAnims_Jelly_Spirit_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Jelly_Spirit_Form_1,
};

static const union AnimCmd *const sAnims_Abbyspectr[] ={
	sAnim_GeneralFrame0,
	sAnim_Abbyspectr_1,
};

static const union AnimCmd *const sAnims_Salamander_Green_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Salamander_Green_Form_1,
};

static const union AnimCmd *const sAnims_Salamander_Orange_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Salamander_Orange_Form_1,
};

static const union AnimCmd *const sAnims_Salamander_Red_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Salamander_Red_Form_1,
};

static const union AnimCmd *const sAnims_Salamander_Black_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Salamander_Black_Form_1,
};

static const union AnimCmd *const sAnims_Salamander_Augmented_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Salamander_Augmented_Form_1,
};

static const union AnimCmd *const sAnims_Gecko[] ={
	sAnim_GeneralFrame0,
	sAnim_Gecko_1,
};

static const union AnimCmd *const sAnims_Chameleon[] ={
	sAnim_GeneralFrame0,
	sAnim_Chameleon_1,
};

static const union AnimCmd *const sAnims_Bloodveld[] ={
	sAnim_GeneralFrame0,
	sAnim_Bloodveld_1,
};

static const union AnimCmd *const sAnims_Bloodveld_Insatiable_Physical_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Bloodveld_Insatiable_Physical_Form_1,
};

static const union AnimCmd *const sAnims_Bloodveld_Insatiable_Special_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Bloodveld_Insatiable_Special_Form_1,
};

static const union AnimCmd *const sAnims_Bloodveld_Mutated_Physical_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Bloodveld_Mutated_Physical_Form_1,
};

static const union AnimCmd *const sAnims_Bloodveld_Mutated_Special_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Bloodveld_Mutated_Special_Form_1,
};

static const union AnimCmd *const sAnims_Reaver[] ={
	sAnim_GeneralFrame0,
	sAnim_Reaver_1,
};

static const union AnimCmd *const sAnims_Armaling[] ={
	sAnim_GeneralFrame0,
	sAnim_Armaling_1,
};

static const union AnimCmd *const sAnims_Armabird[] ={
	sAnim_GeneralFrame0,
	sAnim_Armabird_1,
};

static const union AnimCmd *const sAnims_Armafalcon[] ={
	sAnim_GeneralFrame0,
	sAnim_Armafalcon_1,
};

static const union AnimCmd *const sAnims_Ungodling[] ={
	sAnim_GeneralFrame0,
	sAnim_Ungodling_1,
};

static const union AnimCmd *const sAnims_Ungodbird[] ={
	sAnim_GeneralFrame0,
	sAnim_Ungodbird_1,
};

static const union AnimCmd *const sAnims_Ungodgeon[] ={
	sAnim_GeneralFrame0,
	sAnim_Ungodgeon_1,
};

static const union AnimCmd *const sAnims_Tumekling[] ={
	sAnim_GeneralFrame0,
	sAnim_Tumekling_1,
};

static const union AnimCmd *const sAnims_Tumekbird[] ={
	sAnim_GeneralFrame0,
	sAnim_Tumekbird_1,
};

static const union AnimCmd *const sAnims_Tumekibis[] ={
	sAnim_GeneralFrame0,
	sAnim_Tumekibis_1,
};

static const union AnimCmd *const sAnims_Kerrit[] ={
	sAnim_GeneralFrame0,
	sAnim_Kerrit_1,
};

static const union AnimCmd *const sAnims_Snuffle[] ={
	sAnim_GeneralFrame0,
	sAnim_Snuffle_1,
};

static const union AnimCmd *const sAnims_Popoca[] ={
	sAnim_GeneralFrame0,
	sAnim_Popoca_1,
};

static const union AnimCmd *const sAnims_Choloa[] ={
	sAnim_GeneralFrame0,
	sAnim_Choloa_1,
};

static const union AnimCmd *const sAnims_Durzag[] ={
	sAnim_GeneralFrame0,
	sAnim_Durzag_1,
};

static const union AnimCmd *const sAnims_Yakamaru[] ={
	sAnim_GeneralFrame0,
	sAnim_Yakamaru_1,
};

static const union AnimCmd *const sAnims_Chompy[] ={
	sAnim_GeneralFrame0,
	sAnim_Chompy_1,
};

static const union AnimCmd *const sAnims_Jubbly[] ={
	sAnim_GeneralFrame0,
	sAnim_Jubbly_1,
};

static const union AnimCmd *const sAnims_Jubster[] ={
	sAnim_GeneralFrame0,
	sAnim_Jubster_1,
};

static const union AnimCmd *const sAnims_Terrorbird_Normal_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Terrorbird_Normal_Form_1,
};

static const union AnimCmd *const sAnims_Terrorbird_Warped_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Terrorbird_Warped_Form_1,
};

static const union AnimCmd *const sAnims_Terrorbird_Spirit_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Terrorbird_Spirit_Form_1,
};

static const union AnimCmd *const sAnims_Wolf_Juvenile_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Wolf_Juvenile_Form_1,
};

static const union AnimCmd *const sAnims_Wolf_Normal_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Wolf_Normal_Form_1,
};

static const union AnimCmd *const sAnims_Wolf_Fenris_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Wolf_Fenris_Form_1,
};

static const union AnimCmd *const sAnims_Wolf_White_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Wolf_White_Form_1,
};

static const union AnimCmd *const sAnims_Rover[] ={
	sAnim_GeneralFrame0,
	sAnim_Rover_1,
};

static const union AnimCmd *const sAnims_Wolf_Dire_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Wolf_Dire_Form_1,
};

static const union AnimCmd *const sAnims_Wolf_Jungle_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Wolf_Jungle_Form_1,
};

static const union AnimCmd *const sAnims_Wolf_Skoll_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Wolf_Skoll_Form_1,
};

static const union AnimCmd *const sAnims_Wolf_Desert_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Wolf_Desert_Form_1,
};

static const union AnimCmd *const sAnims_Wolf_Hati_Hati[] ={
	sAnim_GeneralFrame0,
	sAnim_Wolf_Hati_Hati_1,
};

static const union AnimCmd *const sAnims_Wolf_Spirit_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Wolf_Spirit_Form_1,
};

static const union AnimCmd *const sAnims_Fox[] ={
	sAnim_GeneralFrame0,
	sAnim_Fox_1,
};

static const union AnimCmd *const sAnims_Inari[] ={
	sAnim_GeneralFrame0,
	sAnim_Inari_1,
};

static const union AnimCmd *const sAnims_Helwyr[] ={
	sAnim_GeneralFrame0,
	sAnim_Helwyr_1,
};

static const union AnimCmd *const sAnims_Bird_Nest[] ={
	sAnim_GeneralFrame0,
	sAnim_Bird_Nest_1,
};

static const union AnimCmd *const sAnims_Birds_Nest_God_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Birds_Nest_God_Form_1,
};

static const union AnimCmd *const sAnims_Pigeon[] ={
	sAnim_GeneralFrame0,
	sAnim_Pigeon_1,
};

static const union AnimCmd *const sAnims_Pheasant[] ={
	sAnim_GeneralFrame0,
	sAnim_Pheasant_1,
};

static const union AnimCmd *const sAnims_Rocling[] ={
	sAnim_GeneralFrame0,
	sAnim_Rocling_1,
};

static const union AnimCmd *const sAnims_Roc[] ={
	sAnim_GeneralFrame0,
	sAnim_Roc_1,
};

static const union AnimCmd *const sAnims_Foal[] ={
	sAnim_GeneralFrame0,
	sAnim_Foal_1,
};

static const union AnimCmd *const sAnims_Unicorn_White_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Unicorn_White_Form_1,
};

static const union AnimCmd *const sAnims_Unicorn_Stallion_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Unicorn_Stallion_Form_1,
};

static const union AnimCmd *const sAnims_Unicorn_Black_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Unicorn_Black_Form_1,
};

static const union AnimCmd *const sAnims_Unicorn_Angry_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Unicorn_Angry_Form_1,
};

static const union AnimCmd *const sAnims_Unicorn_Reanimated_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Unicorn_Reanimated_Form_1,
};

static const union AnimCmd *const sAnims_Starlight[] ={
	sAnim_GeneralFrame0,
	sAnim_Starlight_1,
};

static const union AnimCmd *const sAnims_Pawya[] ={
	sAnim_GeneralFrame0,
	sAnim_Pawya_1,
};

static const union AnimCmd *const sAnims_Grenwall[] ={
	sAnim_GeneralFrame0,
	sAnim_Grenwall_1,
};

static const union AnimCmd *const sAnims_Bear_Cub[] ={
	sAnim_GeneralFrame0,
	sAnim_Bear_Cub_1,
};

static const union AnimCmd *const sAnims_Bear_Normal_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Bear_Normal_Form_1,
};

static const union AnimCmd *const sAnims_Bear_Reanimated_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Bear_Reanimated_Form_1,
};

static const union AnimCmd *const sAnims_Bear_Gauntlet_Crystalline_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Bear_Gauntlet_Crystalline_Form_1,
};

static const union AnimCmd *const sAnims_Callisto[] ={
	sAnim_GeneralFrame0,
	sAnim_Callisto_1,
};

static const union AnimCmd *const sAnims_Polar_Bear_Normal_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Polar_Bear_Normal_Form_1,
};

static const union AnimCmd *const sAnims_Polar_Bear_Pbj_Agent_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Polar_Bear_Pbj_Agent_Form_1,
};

static const union AnimCmd *const sAnims_Polar_Bear_Arctic_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Polar_Bear_Arctic_Form_1,
};

static const union AnimCmd *const sAnims_Polar_Bear_Nanuq_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Polar_Bear_Nanuq_Form_1,
};

static const union AnimCmd *const sAnims_Bear_Grizzly_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Bear_Grizzly_Form_1,
};

static const union AnimCmd *const sAnims_Kendall[] ={
	sAnim_GeneralFrame0,
	sAnim_Kendall_1,
};

static const union AnimCmd *const sAnims_Bear_Gauntlet_Corrupted_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Bear_Gauntlet_Corrupted_Form_1,
};

static const union AnimCmd *const sAnims_Bear_Angry_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Bear_Angry_Form_1,
};

static const union AnimCmd *const sAnims_Graahk_Normal_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Graahk_Normal_Form_1,
};

static const union AnimCmd *const sAnims_Graahk_Spirit_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Graahk_Spirit_Form_1,
};

static const union AnimCmd *const sAnims_Dust_Devil[] ={
	sAnim_GeneralFrame0,
	sAnim_Dust_Devil_1,
};

static const union AnimCmd *const sAnims_Smokedevil[] ={
	sAnim_GeneralFrame0,
	sAnim_Smokedevil_1,
};

static const union AnimCmd *const sAnims_Smokedevil_Nuclear_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Smokedevil_Nuclear_Form_1,
};

static const union AnimCmd *const sAnims_Chokedevil[] ={
	sAnim_GeneralFrame0,
	sAnim_Chokedevil_1,
};

static const union AnimCmd *const sAnims_Smokedevil_Thermonuclear_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Smokedevil_Thermonuclear_Form_1,
};

static const union AnimCmd *const sAnims_Hatchling[] ={
	sAnim_GeneralFrame0,
	sAnim_Hatchling_1,
};

static const union AnimCmd *const sAnims_Dragonling_Green_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Dragonling_Green_Form_1,
};

static const union AnimCmd *const sAnims_Dragon_Green_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Dragon_Green_Form_1,
};

static const union AnimCmd *const sAnims_Dragon_Brutal_Green_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Dragon_Brutal_Green_Form_1,
};

static const union AnimCmd *const sAnims_Dragonling_Blue_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Dragonling_Blue_Form_1,
};

static const union AnimCmd *const sAnims_Dragon_Blue_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Dragon_Blue_Form_1,
};

static const union AnimCmd *const sAnims_Dragon_Brutal_Blue_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Dragon_Brutal_Blue_Form_1,
};

static const union AnimCmd *const sAnims_Dragonling_Red_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Dragonling_Red_Form_1,
};

static const union AnimCmd *const sAnims_Dragon_Red_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Dragon_Red_Form_1,
};

static const union AnimCmd *const sAnims_Dragon_Brutal_Red_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Dragon_Brutal_Red_Form_1,
};

static const union AnimCmd *const sAnims_Dragonling_Black_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Dragonling_Black_Form_1,
};

static const union AnimCmd *const sAnims_Dragon_Black_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Dragon_Black_Form_1,
};

static const union AnimCmd *const sAnims_Dragon_Brutal_Black_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Dragon_Brutal_Black_Form_1,
};

static const union AnimCmd *const sAnims_Dragon_Threeheaded_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Dragon_Threeheaded_Form_1,
};

static const union AnimCmd *const sAnims_Elvarg[] ={
	sAnim_GeneralFrame0,
	sAnim_Elvarg_1,
};

static const union AnimCmd *const sAnims_Dragon_King_Black_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Dragon_King_Black_Form_1,
};

static const union AnimCmd *const sAnims_Dragon_Queen_Black_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Dragon_Queen_Black_Form_1,
};

static const union AnimCmd *const sAnims_Hand_Creeping_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Hand_Creeping_Form_1,
};

static const union AnimCmd *const sAnims_Hand_Crawling_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Hand_Crawling_Form_1,
};

static const union AnimCmd *const sAnims_Hand_Skeletal_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Hand_Skeletal_Form_1,
};

static const union AnimCmd *const sAnims_Hand_Crushing_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Hand_Crushing_Form_1,
};

static const union AnimCmd *const sAnims_Hand_Zombie_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Hand_Zombie_Form_1,
};

static const union AnimCmd *const sAnims_Turoth[] ={
	sAnim_GeneralFrame0,
	sAnim_Turoth_1,
};

static const union AnimCmd *const sAnims_Turoth_Mightiest_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Turoth_Mightiest_Form_1,
};

static const union AnimCmd *const sAnims_Big_Turoth[] ={
	sAnim_GeneralFrame0,
	sAnim_Big_Turoth_1,
};

static const union AnimCmd *const sAnims_Sockroth[] ={
	sAnim_GeneralFrame0,
	sAnim_Sockroth_1,
};

static const union AnimCmd *const sAnims_Lilrask[] ={
	sAnim_GeneralFrame0,
	sAnim_Lilrask_1,
};

static const union AnimCmd *const sAnims_Kurask[] ={
	sAnim_GeneralFrame0,
	sAnim_Kurask_1,
};

static const union AnimCmd *const sAnims_Kurask_King_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Kurask_King_Form_1,
};

static const union AnimCmd *const sAnims_Kurask_Overlord_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Kurask_Overlord_Form_1,
};

static const union AnimCmd *const sAnims_Kebbit[] ={
	sAnim_GeneralFrame0,
	sAnim_Kebbit_1,
};

static const union AnimCmd *const sAnims_Kebbit_Polar_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Kebbit_Polar_Form_1,
};

static const union AnimCmd *const sAnims_Kebbit_Sabre_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Kebbit_Sabre_Form_1,
};

static const union AnimCmd *const sAnims_Kebbit_Spotted_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Kebbit_Spotted_Form_1,
};

static const union AnimCmd *const sAnims_Kebbit_Dark_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Kebbit_Dark_Form_1,
};

static const union AnimCmd *const sAnims_Kebbit_Dashing_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Kebbit_Dashing_Form_1,
};

static const union AnimCmd *const sAnims_Kebbit_Wild_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Kebbit_Wild_Form_1,
};

static const union AnimCmd *const sAnims_Kebbit_Prickly_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Kebbit_Prickly_Form_1,
};

static const union AnimCmd *const sAnims_Kebbit_Razor_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Kebbit_Razor_Form_1,
};

static const union AnimCmd *const sAnims_Kebbit_Big_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Kebbit_Big_Form_1,
};

static const union AnimCmd *const sAnims_Kebbit_Desertdevil_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Kebbit_Desertdevil_Form_1,
};

static const union AnimCmd *const sAnims_Kebbit_Feldip_Weasel_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Kebbit_Feldip_Weasel_Form_1,
};

static const union AnimCmd *const sAnims_Kebbit_Barbed_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Kebbit_Barbed_Form_1,
};

static const union AnimCmd *const sAnims_Kebbit_Diseased_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Kebbit_Diseased_Form_1,
};

static const union AnimCmd *const sAnims_Kebbit_Chocolate_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Kebbit_Chocolate_Form_1,
};

static const union AnimCmd *const sAnims_Monkey_Normal_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Monkey_Normal_Form_1,
};

static const union AnimCmd *const sAnims_Monkey_Ninja_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Monkey_Ninja_Form_1,
};

static const union AnimCmd *const sAnims_Gorilla_Normal_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Gorilla_Normal_Form_1,
};

static const union AnimCmd *const sAnims_Monkey_Zombie_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Monkey_Zombie_Form_1,
};

static const union AnimCmd *const sAnims_Gorilla_Ancient_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Gorilla_Ancient_Form_1,
};

static const union AnimCmd *const sAnims_Monkey_Harmless_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Monkey_Harmless_Form_1,
};

static const union AnimCmd *const sAnims_Monkey_Ghost_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Monkey_Ghost_Form_1,
};

static const union AnimCmd *const sAnims_Gorilla_Ayuni_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Gorilla_Ayuni_Form_1,
};

static const union AnimCmd *const sAnims_Gorilla_Leeuni_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Gorilla_Leeuni_Form_1,
};

static const union AnimCmd *const sAnims_Gorilla_Eruni_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Gorilla_Eruni_Form_1,
};

static const union AnimCmd *const sAnims_Monkey_Karamja_Baby_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Monkey_Karamja_Baby_Form_1,
};

static const union AnimCmd *const sAnims_Monkey_Karamja_Adult_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Monkey_Karamja_Adult_Form_1,
};

static const union AnimCmd *const sAnims_Larupia_Normal_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Larupia_Normal_Form_1,
};

static const union AnimCmd *const sAnims_Larupia_Spirit_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Larupia_Spirit_Form_1,
};

static const union AnimCmd *const sAnims_Kyatt_Normal_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Kyatt_Normal_Form_1,
};

static const union AnimCmd *const sAnims_Kyatt_Spirit_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Kyatt_Spirit_Form_1,
};

static const union AnimCmd *const sAnims_Crabling[] ={
	sAnim_GeneralFrame0,
	sAnim_Crabling_1,
};

static const union AnimCmd *const sAnims_Rock_Crab_Normal_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Rock_Crab_Normal_Form_1,
};

static const union AnimCmd *const sAnims_Rock_Crab_Giant_Normal_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Rock_Crab_Giant_Normal_Form_1,
};

static const union AnimCmd *const sAnims_Rock_Crab_Ammonite_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Rock_Crab_Ammonite_Form_1,
};

static const union AnimCmd *const sAnims_Rock_Crab_Giant_Ammonite_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Rock_Crab_Giant_Ammonite_Form_1,
};

static const union AnimCmd *const sAnims_Rock_Crab_Sand_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Rock_Crab_Sand_Form_1,
};

static const union AnimCmd *const sAnims_Rock_Crab_Giant_Sand_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Rock_Crab_Giant_Sand_Form_1,
};

static const union AnimCmd *const sAnims_Rock_Crab_Swamp_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Rock_Crab_Swamp_Form_1,
};

static const union AnimCmd *const sAnims_Rock_Crab_Giant_Swamp_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Rock_Crab_Giant_Swamp_Form_1,
};

static const union AnimCmd *const sAnims_Crab_Granite_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Crab_Granite_Form_1,
};

static const union AnimCmd *const sAnims_Lobster_Granite_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Lobster_Granite_Form_1,
};

static const union AnimCmd *const sAnims_Lobster_Rock_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Lobster_Rock_Form_1,
};

static const union AnimCmd *const sAnims_Rabbit[] ={
	sAnim_GeneralFrame0,
	sAnim_Rabbit_1,
};

static const union AnimCmd *const sAnims_Wolperting[] ={
	sAnim_GeneralFrame0,
	sAnim_Wolperting_1,
};

static const union AnimCmd *const sAnims_Bunyip[] ={
	sAnim_GeneralFrame0,
	sAnim_Bunyip_1,
};

static const union AnimCmd *const sAnims_Talonbeast_Talon_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Talonbeast_Talon_Form_1,
};

static const union AnimCmd *const sAnims_Talonbeast_Nail_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Talonbeast_Nail_Form_1,
};

static const union AnimCmd *const sAnims_Ferret[] ={
	sAnim_GeneralFrame0,
	sAnim_Ferret_1,
};

static const union AnimCmd *const sAnims_Toy_Mouse[] ={
	sAnim_GeneralFrame0,
	sAnim_Toy_Mouse_1,
};

static const union AnimCmd *const sAnims_Toy_Doll[] ={
	sAnim_GeneralFrame0,
	sAnim_Toy_Doll_1,
};

static const union AnimCmd *const sAnims_Toy_Soldier[] ={
	sAnim_GeneralFrame0,
	sAnim_Toy_Soldier_1,
};

static const union AnimCmd *const sAnims_Cat_Clockwork_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Cat_Clockwork_Form_1,
};

static const union AnimCmd *const sAnims_Magicarpet[] ={
	sAnim_GeneralFrame0,
	sAnim_Magicarpet_1,
};

static const union AnimCmd *const sAnims_Anichair[] ={
	sAnim_GeneralFrame0,
	sAnim_Anichair_1,
};

static const union AnimCmd *const sAnims_Exoraxe[] ={
	sAnim_GeneralFrame0,
	sAnim_Exoraxe_1,
};

static const union AnimCmd *const sAnims_Spookaxe[] ={
	sAnim_GeneralFrame0,
	sAnim_Spookaxe_1,
};

static const union AnimCmd *const sAnims_Dobbin[] ={
	sAnim_GeneralFrame0,
	sAnim_Dobbin_1,
};

static const union AnimCmd *const sAnims_Marionette[] ={
	sAnim_GeneralFrame0,
	sAnim_Marionette_1,
};

static const union AnimCmd *const sAnims_Dragonkite[] ={
	sAnim_GeneralFrame0,
	sAnim_Dragonkite_1,
};

static const union AnimCmd *const sAnims_Animour[] ={
	sAnim_GeneralFrame0,
	sAnim_Animour_1,
};

static const union AnimCmd *const sAnims_Dead_Tree[] ={
	sAnim_GeneralFrame0,
	sAnim_Dead_Tree_1,
};

static const union AnimCmd *const sAnims_Jadinko[] ={
	sAnim_GeneralFrame0,
	sAnim_Jadinko_1,
};

static const union AnimCmd *const sAnims_Killerwatt[] ={
	sAnim_GeneralFrame0,
	sAnim_Killerwatt_1,
};

static const union AnimCmd *const sAnims_Mackers[] ={
	sAnim_GeneralFrame0,
	sAnim_Mackers_1,
};

static const union AnimCmd *const sAnims_Turkey_Female_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Turkey_Female_Form_1,
};

static const union AnimCmd *const sAnims_Turkey_Male_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Turkey_Male_Form_1,
};

static const union AnimCmd *const sAnims_Turkey_Protestor_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Turkey_Protestor_Form_1,
};

static const union AnimCmd *const sAnims_Toucan_Tenacious_Male_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Toucan_Tenacious_Male_Form_1,
};

static const union AnimCmd *const sAnims_Toucan_Tenacious_Female_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Toucan_Tenacious_Female_Form_1,
};

static const union AnimCmd *const sAnims_Toucan_Tuai_Leit_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Toucan_Tuai_Leit_Form_1,
};

static const union AnimCmd *const sAnims_Jellyfish_Blubber_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Jellyfish_Blubber_Form_1,
};

static const union AnimCmd *const sAnims_Jellyfish[] ={
	sAnim_GeneralFrame0,
	sAnim_Jellyfish_1,
};

static const union AnimCmd *const sAnims_Pure[] ={
	sAnim_GeneralFrame0,
	sAnim_Pure_1,
};

static const union AnimCmd *const sAnims_Rune[] ={
	sAnim_GeneralFrame0,
	sAnim_Rune_1,
};

static const union AnimCmd *const sAnims_Essence[] ={
	sAnim_GeneralFrame0,
	sAnim_Essence_1,
};

static const union AnimCmd *const sAnims_Seagull_Normal_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Seagull_Normal_Form_1,
};

static const union AnimCmd *const sAnims_Pelican[] ={
	sAnim_GeneralFrame0,
	sAnim_Pelican_1,
};

static const union AnimCmd *const sAnims_Albatross[] ={
	sAnim_GeneralFrame0,
	sAnim_Albatross_1,
};

static const union AnimCmd *const sAnims_Seagull_Hattenkrapper_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Seagull_Hattenkrapper_Form_1,
};

static const union AnimCmd *const sAnims_Seagull_Koppenploppen_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Seagull_Koppenploppen_Form_1,
};

static const union AnimCmd *const sAnims_Seagull_Steven_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Seagull_Steven_Form_1,
};

static const union AnimCmd *const sAnims_Ibis[] ={
	sAnim_GeneralFrame0,
	sAnim_Ibis_1,
};

static const union AnimCmd *const sAnims_Desertwyrm[] ={
	sAnim_GeneralFrame0,
	sAnim_Desertwyrm_1,
};

static const union AnimCmd *const sAnims_Wyrm[] ={
	sAnim_GeneralFrame0,
	sAnim_Wyrm_1,
};

static const union AnimCmd *const sAnims_Snake_Normal_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Snake_Normal_Form_1,
};

static const union AnimCmd *const sAnims_Cobra_Normal_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Cobra_Normal_Form_1,
};

static const union AnimCmd *const sAnims_Cobra_Spirit_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Cobra_Spirit_Form_1,
};

static const union AnimCmd *const sAnims_Juna[] ={
	sAnim_GeneralFrame0,
	sAnim_Juna_1,
};

static const union AnimCmd *const sAnims_Snake_Sea_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Snake_Sea_Form_1,
};

static const union AnimCmd *const sAnims_Big_Snake_Sea_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Big_Snake_Sea_Form_1,
};

static const union AnimCmd *const sAnims_Thingumwut[] ={
	sAnim_GeneralFrame0,
	sAnim_Thingumwut_1,
};

static const union AnimCmd *const sAnims_Experiment_3_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Experiment_3_Form_1,
};

static const union AnimCmd *const sAnims_Cabbage[] ={
	sAnim_GeneralFrame0,
	sAnim_Cabbage_1,
};

static const union AnimCmd *const sAnims_Ughtanki[] ={
	sAnim_GeneralFrame0,
	sAnim_Ughtanki_1,
};

static const union AnimCmd *const sAnims_Camel[] ={
	sAnim_GeneralFrame0,
	sAnim_Camel_1,
};

static const union AnimCmd *const sAnims_Camel_Warrior_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Camel_Warrior_Form_1,
};

static const union AnimCmd *const sAnims_Balanceele[] ={
	sAnim_GeneralFrame0,
	sAnim_Balanceele_1,
};

static const union AnimCmd *const sAnims_Kalphite_Larva_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Kalphite_Larva_Form_1,
};

static const union AnimCmd *const sAnims_Kalphite_Worker_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Kalphite_Worker_Form_1,
};

static const union AnimCmd *const sAnims_Kalphite_Soldier_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Kalphite_Soldier_Form_1,
};

static const union AnimCmd *const sAnims_Kalphite_Spirit_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Kalphite_Spirit_Form_1,
};

static const union AnimCmd *const sAnims_Kalphite_Guardian_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Kalphite_Guardian_Form_1,
};

static const union AnimCmd *const sAnims_Kalphite_Queen_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Kalphite_Queen_Form_1,
};

static const union AnimCmd *const sAnims_Kalphite_Queen_Mega_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Kalphite_Queen_Mega_Form_1,
};

static const union AnimCmd *const sAnims_Kalphite_Paragon_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Kalphite_Paragon_Form_1,
};

static const union AnimCmd *const sAnims_Kalphite_Corrupted_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Kalphite_Corrupted_Form_1,
};

static const union AnimCmd *const sAnims_Kalphite_Marauder_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Kalphite_Marauder_Form_1,
};

static const union AnimCmd *const sAnims_Kalphite_King_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Kalphite_King_Form_1,
};

static const union AnimCmd *const sAnims_Kalphite_Dung_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Kalphite_Dung_Form_1,
};

static const union AnimCmd *const sAnims_Kalphite_Reanimated_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Kalphite_Reanimated_Form_1,
};

static const union AnimCmd *const sAnims_Abyssal_Demon_Reanimated_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Abyssal_Demon_Reanimated_Form_1,
};

static const union AnimCmd *const sAnims_Bat_Gauntlet_Corrupted_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Bat_Gauntlet_Corrupted_Form_1,
};

static const union AnimCmd *const sAnims_Bat_Gauntlet_Crystalline_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Bat_Gauntlet_Crystalline_Form_1,
};

static const union AnimCmd *const sAnims_Bloodveld_Reanimated_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Bloodveld_Reanimated_Form_1,
};

static const union AnimCmd *const sAnims_Dark_Beast_Gauntlet_Corrupted_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Dark_Beast_Gauntlet_Corrupted_Form_1,
};

static const union AnimCmd *const sAnims_Dark_Beast_Gauntlet_Crystalline_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Dark_Beast_Gauntlet_Crystalline_Form_1,
};

static const union AnimCmd *const sAnims_Dark_Beast_Pup_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Dark_Beast_Pup_Form_1,
};

static const union AnimCmd *const sAnims_Dark_Beast_Normal_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Dark_Beast_Normal_Form_1,
};

static const union AnimCmd *const sAnims_Dark_Beast_Sotetseg_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Dark_Beast_Sotetseg_Form_1,
};

static const union AnimCmd *const sAnims_Experiment_4_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Experiment_4_Form_1,
};

static const union AnimCmd *const sAnims_Experiment_5_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Experiment_5_Form_1,
};

static const union AnimCmd *const sAnims_Ganodermic_Beast[] ={
	sAnim_GeneralFrame0,
	sAnim_Ganodermic_Beast_1,
};

static const union AnimCmd *const sAnims_Grifolapine[] ={
	sAnim_GeneralFrame0,
	sAnim_Grifolapine_1,
};

static const union AnimCmd *const sAnims_Grifolaroo[] ={
	sAnim_GeneralFrame0,
	sAnim_Grifolaroo_1,
};

static const union AnimCmd *const sAnims_Sporaxe[] ={
	sAnim_GeneralFrame0,
	sAnim_Sporaxe_1,
};

static const union AnimCmd *const sAnims_Headless_Beast[] ={
	sAnim_GeneralFrame0,
	sAnim_Headless_Beast_1,
};

static const union AnimCmd *const sAnims_Behemoth_Normal_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Behemoth_Normal_Form_1,
};

static const union AnimCmd *const sAnims_Behemoth_Adolscent_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Behemoth_Adolscent_Form_1,
};

static const union AnimCmd *const sAnims_Siege_Beast[] ={
	sAnim_GeneralFrame0,
	sAnim_Siege_Beast_1,
};

static const union AnimCmd *const sAnims_Bulwark_Beast[] ={
	sAnim_GeneralFrame0,
	sAnim_Bulwark_Beast_1,
};

static const union AnimCmd *const sAnims_Behemoth_Gluttonous_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Behemoth_Gluttonous_Form_1,
};

static const union AnimCmd *const sAnims_Behemoth_Runebound_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Behemoth_Runebound_Form_1,
};

static const union AnimCmd *const sAnims_Stomp[] ={
	sAnim_GeneralFrame0,
	sAnim_Stomp_1,
};

static const union AnimCmd *const sAnims_Hope_Devourer[] ={
	sAnim_GeneralFrame0,
	sAnim_Hope_Devourer_1,
};

static const union AnimCmd *const sAnims_Karamthulu_Overlord[] ={
	sAnim_GeneralFrame0,
	sAnim_Karamthulu_Overlord_1,
};

static const union AnimCmd *const sAnims_Light_Creature[] ={
	sAnim_GeneralFrame0,
	sAnim_Light_Creature_1,
};

static const union AnimCmd *const sAnims_Minotaur_Reanimated_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Minotaur_Reanimated_Form_1,
};

static const union AnimCmd *const sAnims_Monkey_Reanimated_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Monkey_Reanimated_Form_1,
};

static const union AnimCmd *const sAnims_Rat_Gauntlet_Corrupted_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Rat_Gauntlet_Corrupted_Form_1,
};

static const union AnimCmd *const sAnims_Rat_Gauntlet_Crystalline_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Rat_Gauntlet_Crystalline_Form_1,
};

static const union AnimCmd *const sAnims_Rat_Fungal_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Rat_Fungal_Form_1,
};

static const union AnimCmd *const sAnims_Sparky[] ={
	sAnim_GeneralFrame0,
	sAnim_Sparky_1,
};

static const union AnimCmd *const sAnims_Spider_Corpse_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Spider_Corpse_Form_1,
};

static const union AnimCmd *const sAnims_Spider_Fever_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Spider_Fever_Form_1,
};

static const union AnimCmd *const sAnims_Spider_Lava_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Spider_Lava_Form_1,
};

static const union AnimCmd *const sAnims_Spider_Shadow_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Spider_Shadow_Form_1,
};

static const union AnimCmd *const sAnims_Stalker[] ={
	sAnim_GeneralFrame0,
	sAnim_Stalker_1,
};

static const union AnimCmd *const sAnims_Soulseeker[] ={
	sAnim_GeneralFrame0,
	sAnim_Soulseeker_1,
};

static const union AnimCmd *const sAnims_Stalker_Sentinel_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Stalker_Sentinel_Form_1,
};

static const union AnimCmd *const sAnims_Night_Gazer[] ={
	sAnim_GeneralFrame0,
	sAnim_Night_Gazer_1,
};

static const union AnimCmd *const sAnims_Plane_Freezer[] ={
	sAnim_GeneralFrame0,
	sAnim_Plane_Freezer_1,
};

static const union AnimCmd *const sAnims_World_Gorger[] ={
	sAnim_GeneralFrame0,
	sAnim_World_Gorger_1,
};

static const union AnimCmd *const sAnims_Flesh_Monger[] ={
	sAnim_GeneralFrame0,
	sAnim_Flesh_Monger_1,
};

static const union AnimCmd *const sAnims_Shadow_Forger[] ={
	sAnim_GeneralFrame0,
	sAnim_Shadow_Forger_1,
};

static const union AnimCmd *const sAnims_Veil_Ripper[] ={
	sAnim_GeneralFrame0,
	sAnim_Veil_Ripper_1,
};

static const union AnimCmd *const sAnims_Unicorn_Gauntlet_Corrupted_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Unicorn_Gauntlet_Corrupted_Form_1,
};

static const union AnimCmd *const sAnims_Unicorn_Gauntlet_Crystalline_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Unicorn_Gauntlet_Crystalline_Form_1,
};

static const union AnimCmd *const sAnims_Wolf_Cave_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Wolf_Cave_Form_1,
};

static const union AnimCmd *const sAnims_Wolf_Dragon_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Wolf_Dragon_Form_1,
};

static const union AnimCmd *const sAnims_Shadow_Hound[] ={
	sAnim_GeneralFrame0,
	sAnim_Shadow_Hound_1,
};

static const union AnimCmd *const sAnims_Border_Collie[] ={
	sAnim_GeneralFrame0,
	sAnim_Border_Collie_1,
};

static const union AnimCmd *const sAnims_Bloodhound[] ={
	sAnim_GeneralFrame0,
	sAnim_Bloodhound_1,
};

static const union AnimCmd *const sAnims_Guard_Dog[] ={
	sAnim_GeneralFrame0,
	sAnim_Guard_Dog_1,
};

static const union AnimCmd *const sAnims_Lycurgus[] ={
	sAnim_GeneralFrame0,
	sAnim_Lycurgus_1,
};

static const union AnimCmd *const sAnims_Yak_Moorrissey_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Yak_Moorrissey_Form_1,
};

static const union AnimCmd *const sAnims_Yak_Robin_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Yak_Robin_Form_1,
};

static const union AnimCmd *const sAnims_Yak_Yaktrick_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Yak_Yaktrick_Form_1,
};

static const union AnimCmd *const sAnims_Cabbage_Sister_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Cabbage_Sister_Form_1,
};

static const union AnimCmd *const sAnims_Cabbage_Crispy_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Cabbage_Crispy_Form_1,
};

static const union AnimCmd *const sAnims_Strykewyrm_Mini_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Strykewyrm_Mini_Form_1,
};

static const union AnimCmd *const sAnims_Crocodile_Normal_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Crocodile_Normal_Form_1,
};

static const union AnimCmd *const sAnims_Crocodile_Mutadile_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Crocodile_Mutadile_Form_1,
};

static const union AnimCmd *const sAnims_Crocodile_Ankh_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Crocodile_Ankh_Form_1,
};

static const union AnimCmd *const sAnims_Crocodile_Ukunduka_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Crocodile_Ukunduka_Form_1,
};

static const union AnimCmd *const sAnims_Bloodveld_Insatiable_Mutated_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Bloodveld_Insatiable_Mutated_Form_1,
};

static const union AnimCmd *const sAnims_Bloodveld_Acidic_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Bloodveld_Acidic_Form_1,
};

static const union AnimCmd *const sAnims_Bloodveld_Vampiric_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Bloodveld_Vampiric_Form_1,
};

static const union AnimCmd *const sAnims_Bloodveld_Rs3_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Bloodveld_Rs3_Form_1,
};

static const union AnimCmd *const sAnims_Beaver[] ={
	sAnim_GeneralFrame0,
	sAnim_Beaver_1,
};

static const union AnimCmd *const sAnims_Giant_Beaver[] ={
	sAnim_GeneralFrame0,
	sAnim_Giant_Beaver_1,
};

static const union AnimCmd *const sAnims_Racoon[] ={
	sAnim_GeneralFrame0,
	sAnim_Racoon_1,
};

static const union AnimCmd *const sAnims_Ralph[] ={
	sAnim_GeneralFrame0,
	sAnim_Ralph_1,
};

static const union AnimCmd *const sAnims_Rocky[] ={
	sAnim_GeneralFrame0,
	sAnim_Rocky_1,
};

static const union AnimCmd *const sAnims_Honey_Badger[] ={
	sAnim_GeneralFrame0,
	sAnim_Honey_Badger_1,
};

static const union AnimCmd *const sAnims_Squirrel_Giant_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Squirrel_Giant_Form_1,
};

static const union AnimCmd *const sAnims_Squirrel_Australian_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Squirrel_Australian_Form_1,
};

static const union AnimCmd *const sAnims_Jade_Vine[] ={
	sAnim_GeneralFrame0,
	sAnim_Jade_Vine_1,
};

static const union AnimCmd *const sAnims_Klik[] ={
	sAnim_GeneralFrame0,
	sAnim_Klik_1,
};

static const union AnimCmd *const sAnims_Jackalope[] ={
	sAnim_GeneralFrame0,
	sAnim_Jackalope_1,
};

static const union AnimCmd *const sAnims_Imp[] ={
	sAnim_GeneralFrame0,
	sAnim_Imp_1,
};

static const union AnimCmd *const sAnims_Demon_Lesser_Rs3_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Demon_Lesser_Rs3_Form_1,
};

static const union AnimCmd *const sAnims_Demon_Greater_Rs3_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Demon_Greater_Rs3_Form_1,
};

static const union AnimCmd *const sAnims_Demon_Kalgerion_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Demon_Kalgerion_Form_1,
};

static const union AnimCmd *const sAnims_Demon_Thundereous_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Demon_Thundereous_Form_1,
};

static const union AnimCmd *const sAnims_Demon_Ripper_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Demon_Ripper_Form_1,
};

static const union AnimCmd *const sAnims_Demon_Lesser_Osrs_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Demon_Lesser_Osrs_Form_1,
};

static const union AnimCmd *const sAnims_Demon_Greater_Osrs_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Demon_Greater_Osrs_Form_1,
};

static const union AnimCmd *const sAnims_Demon_Tstanon_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Demon_Tstanon_Form_1,
};

static const union AnimCmd *const sAnims_Demon_Tormented_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Demon_Tormented_Form_1,
};

static const union AnimCmd *const sAnims_Delrith[] ={
	sAnim_GeneralFrame0,
	sAnim_Delrith_1,
};

static const union AnimCmd *const sAnims_Demon_Lesser_Tongue_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Demon_Lesser_Tongue_Form_1,
};

static const union AnimCmd *const sAnims_Demon_Greater_Tongue_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Demon_Greater_Tongue_Form_1,
};

static const union AnimCmd *const sAnims_Demon_Zakln_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Demon_Zakln_Form_1,
};

static const union AnimCmd *const sAnims_Demon_Pummeler_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Demon_Pummeler_Form_1,
};

static const union AnimCmd *const sAnims_Demon_Chocolate_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Demon_Chocolate_Form_1,
};

static const union AnimCmd *const sAnims_Demon_Lesser_Black_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Demon_Lesser_Black_Form_1,
};

static const union AnimCmd *const sAnims_Demon_Greater_Black_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Demon_Greater_Black_Form_1,
};

static const union AnimCmd *const sAnims_Demon_Balfrug_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Demon_Balfrug_Form_1,
};

static const union AnimCmd *const sAnims_Demon_Jungle_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Demon_Jungle_Form_1,
};

static const union AnimCmd *const sAnims_Demon_Riftsplitter_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Demon_Riftsplitter_Form_1,
};

static const union AnimCmd *const sAnims_Snow_Imp[] ={
	sAnim_GeneralFrame0,
	sAnim_Snow_Imp_1,
};

static const union AnimCmd *const sAnims_Demon_Ice_Osrs_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Demon_Ice_Osrs_Form_1,
};

static const union AnimCmd *const sAnims_Demon_Ice_Rs3_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Demon_Ice_Rs3_Form_1,
};

static const union AnimCmd *const sAnims_Demon_Bloodchiller_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Demon_Bloodchiller_Form_1,
};

static const union AnimCmd *const sAnims_Demon_Reanimated_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Demon_Reanimated_Form_1,
};

static const union AnimCmd *const sAnims_Kril_Tsutsaroth[] ={
	sAnim_GeneralFrame0,
	sAnim_Kril_Tsutsaroth_1,
};

static const union AnimCmd *const sAnims_Pyrefiend[] ={
	sAnim_GeneralFrame0,
	sAnim_Pyrefiend_1,
};

static const union AnimCmd *const sAnims_Pyrelord[] ={
	sAnim_GeneralFrame0,
	sAnim_Pyrelord_1,
};

static const union AnimCmd *const sAnims_Waterfiend[] ={
	sAnim_GeneralFrame0,
	sAnim_Waterfiend_1,
};

static const union AnimCmd *const sAnims_Waterlord[] ={
	sAnim_GeneralFrame0,
	sAnim_Waterlord_1,
};

static const union AnimCmd *const sAnims_Icefiend[] ={
	sAnim_GeneralFrame0,
	sAnim_Icefiend_1,
};

static const union AnimCmd *const sAnims_Icelord[] ={
	sAnim_GeneralFrame0,
	sAnim_Icelord_1,
};

static const union AnimCmd *const sAnims_Impling_Baby_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Impling_Baby_Form_1,
};

static const union AnimCmd *const sAnims_Impling_Magpie_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Impling_Magpie_Form_1,
};

static const union AnimCmd *const sAnims_Impling_Dragon_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Impling_Dragon_Form_1,
};

static const union AnimCmd *const sAnims_Impling_Kingly_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Impling_Kingly_Form_1,
};

static const union AnimCmd *const sAnims_Impling_Lucky_Form[] ={
	sAnim_GeneralFrame0,
	sAnim_Impling_Lucky_Form_1,
};

//POKESCAPE END