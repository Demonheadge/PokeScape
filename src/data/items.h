#include "constants/moves.h"

#if I_USE_EVO_HELD_ITEMS_FROM_BAG == TRUE
    #define EVO_HELD_ITEM_TYPE ITEM_USE_PARTY_MENU
    #define EVO_HELD_ITEM_FIELD_FUNC ItemUseOutOfBattle_EvolutionStone
#else
    #define EVO_HELD_ITEM_TYPE ITEM_USE_BAG_MENU
    #define EVO_HELD_ITEM_FIELD_FUNC ItemUseOutOfBattle_CannotUse
#endif

#if I_GEM_BOOST_POWER >= GEN_6
    #define GEM_BOOST_PARAM 30
#else
    #define GEM_BOOST_PARAM 50
#endif

#if I_TYPE_BOOST_POWER >= GEN_4 // For non Pokémon-specific type-boosting held items.
    #define TYPE_BOOST_PARAM 20
#else
    #define TYPE_BOOST_PARAM 10
#endif

const struct Item gItems[] =
{
    [ITEM_NONE] =
    {
        .name = _("????????"),
        .price = 0,
        .description = sDummyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

// Poké Balls / Pouches

    [ITEM_POUCH] =
    {
        .name = _("POUCH"),
        .price = 100,
        .description = sNormalPouchDesc,
        .pocket = POCKET_POKE_BALLS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .battleUsage = EFFECT_ITEM_THROW_BALL,
        .secondaryId = ITEM_POUCH - FIRST_BALL,
    },

    [ITEM_POUCH_BRONZE] =
    {
        .name = _("BRONZE POUCH"),
        .price = 100,
        .tokkulcost = 10000,
        .description = sPouch_Bronze_Desc,
        .pocket = POCKET_POKE_BALLS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .battleUsage = EFFECT_ITEM_THROW_BALL,
        .secondaryId = ITEM_POUCH_BRONZE - FIRST_BALL,
    },

    [ITEM_POUCH_IRON] =
    {
        .name = _("IRON POUCH"),
        .price = 150,
        .description = sPouch_Iron_Desc,
        .pocket = POCKET_POKE_BALLS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .battleUsage = EFFECT_ITEM_THROW_BALL,
        .secondaryId = ITEM_POUCH_IRON - FIRST_BALL,
    },

    [ITEM_POUCH_STEEL] =
    {
        .name = _("STEEL POUCH"),
        .price = 250,
        .description = sPouch_Steel_Desc,
        .pocket = POCKET_POKE_BALLS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .battleUsage = EFFECT_ITEM_THROW_BALL,
        .secondaryId = ITEM_POUCH_STEEL - FIRST_BALL,
    },

    [ITEM_POUCH_MITHRIL] =
    {
        .name = _("MITHRIL POUCH"),
        .price = 500,
        .description = sPouch_Mithril_Desc,
        .pocket = POCKET_POKE_BALLS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .battleUsage = EFFECT_ITEM_THROW_BALL,
        .secondaryId = ITEM_POUCH_MITHRIL - FIRST_BALL,
    },

    [ITEM_POUCH_ADAMANT] =
    {
        .name = _("ADAMANT POUCH"),
        .price = 800,
        .description = sPouch_Adamant_Desc,
        .pocket = POCKET_POKE_BALLS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .battleUsage = EFFECT_ITEM_THROW_BALL,
        .secondaryId = ITEM_POUCH_ADAMANT - FIRST_BALL,
    },

    [ITEM_POUCH_RUNE] =
    {
        .name = _("RUNE POUCH"),
        .price = 600,
        .description = sPouch_Rune_Desc,
        .pocket = POCKET_POKE_BALLS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .battleUsage = EFFECT_ITEM_THROW_BALL,
        .secondaryId = ITEM_POUCH_RUNE - FIRST_BALL,
    },

    [ITEM_POUCH_DRAGON] =
    {
        .name = _("DRAGON POUCH"),
        .price = 10000,
        .description = sPouch_Dragon_Desc,
        .pocket = POCKET_POKE_BALLS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .battleUsage = EFFECT_ITEM_THROW_BALL,
        .secondaryId = ITEM_POUCH_DRAGON - FIRST_BALL,
    },

    [ITEM_POUCH_CRYSTAL] =
    {
        .name = _("CRYSTAL POUCH"),
        .price = 10000,
        .description = sPouch_Crystal_Desc,
        .pocket = POCKET_POKE_BALLS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .battleUsage = EFFECT_ITEM_THROW_BALL,
        .secondaryId = ITEM_POUCH_CRYSTAL - FIRST_BALL,
    },

    [ITEM_POUCH_BLACK] =
    {
        .name = _("BLACK POUCH"),
        .price = 1000,
        .description = sPouch_Black_Desc,
        .pocket = POCKET_POKE_BALLS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .battleUsage = EFFECT_ITEM_THROW_BALL,
        .secondaryId = ITEM_POUCH_BLACK - FIRST_BALL,
    },

    [ITEM_POUCH_WHITE] =
    {
        .name = _("WHITE POUCH"),
        .price = 1000,
        .description = sPouch_White_Desc,
        .pocket = POCKET_POKE_BALLS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .battleUsage = EFFECT_ITEM_THROW_BALL,
        .secondaryId = ITEM_POUCH_WHITE - FIRST_BALL,
    },

    [ITEM_POUCH_ELEMENTAL] =
    {
        .name = _("ELEMENTAL P."),
        .price = 1000,
        .description = sPouch_Elemental_Desc,
        .pocket = POCKET_POKE_BALLS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .battleUsage = EFFECT_ITEM_THROW_BALL,
        .secondaryId = ITEM_POUCH_ELEMENTAL - FIRST_BALL,
    },

    [ITEM_POUCH_CATALYTIC] =
    {
        .name = _("CATALYTIC P."),
        .price = 1000,
        .description = sPouch_Catalytic_Desc,
        .pocket = POCKET_POKE_BALLS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .battleUsage = EFFECT_ITEM_THROW_BALL,
        .secondaryId = ITEM_POUCH_CATALYTIC - FIRST_BALL,
    },

    [ITEM_POUCH_BANE] =
    {
        .name = _("BANE POUCH"),
        .price = 1000,
        .description = sPouch_Bane_Desc,
        .pocket = POCKET_POKE_BALLS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .battleUsage = EFFECT_ITEM_THROW_BALL,
        .secondaryId = ITEM_POUCH_BANE - FIRST_BALL,
    },

    [ITEM_POUCH_AUGMENTED] =
    {
        .name = _("GIZMO POUCH"),
        .price = 200,
        .description = sPouch_Augmented_Desc,
        .pocket = POCKET_POKE_BALLS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .battleUsage = EFFECT_ITEM_THROW_BALL,
        .secondaryId = ITEM_POUCH_AUGMENTED - FIRST_BALL,
    },

    [ITEM_POUCH_ANCIENT] =
    {
        .name = _("ANCIENT POUCH"),
        .price = 1000,
        .description = sPouch_Ancient_Desc,
        .pocket = POCKET_POKE_BALLS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .battleUsage = EFFECT_ITEM_THROW_BALL,
        .secondaryId = ITEM_POUCH_ANCIENT - FIRST_BALL,
    },

    [ITEM_POUCH_BARROWS] =
    {
        .name = _("BLIGHT POUCH"),
        .price = 1000,
        .description = sPouch_Barrows_Desc,
        .pocket = POCKET_POKE_BALLS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .battleUsage = EFFECT_ITEM_THROW_BALL,
        .secondaryId = ITEM_POUCH_BARROWS - FIRST_BALL,
    },

    [ITEM_POUCH_GRANITE] =
    {
        .name = _("GRANITE POUCH"),
        .price = 1000,
        .description = sPouch_Granite_Desc,
        .pocket = POCKET_POKE_BALLS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .battleUsage = EFFECT_ITEM_THROW_BALL,
        .secondaryId = ITEM_POUCH_GRANITE - FIRST_BALL,
    },

    [ITEM_POUCH_SPLITBARK] =
    {
        .name = _("BARK POUCH"),
        .price = 1000,
        .description = sPouch_Splitbark_Desc,
        .pocket = POCKET_POKE_BALLS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .battleUsage = EFFECT_ITEM_THROW_BALL,
        .secondaryId = ITEM_POUCH_SPLITBARK - FIRST_BALL,
    },

    [ITEM_POUCH_MYSTIC] =
    {
        .name = _("MYSTIC POUCH"),
        .price = 200,
        .description = sPouch_Mystic_Desc,
        .pocket = POCKET_POKE_BALLS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .battleUsage = EFFECT_ITEM_THROW_BALL,
        .secondaryId = ITEM_POUCH_MYSTIC - FIRST_BALL,
    },

// Medicine

    [ITEM_POTION] =
    {
        .name = _("Potion"),
        .price = 200,
        .holdEffectParam = 20,
        .description = sPotionDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_HEALTH_RECOVERY,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = EFFECT_ITEM_RESTORE_HP,
        .flingPower = 30,
    },

    [ITEM_SUPER_POTION] =
    {
        .name = _("Super Potion"),
        .price = 700,
        .holdEffectParam = 60,
        .description = sSuperPotionDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_HEALTH_RECOVERY,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = EFFECT_ITEM_RESTORE_HP,
        .flingPower = 30,
    },

    [ITEM_HYPER_POTION] =
    {
        .name = _("Hyper Potion"),
        .price = 1500,
        .holdEffectParam = 120,
        .description = sHyperPotionDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_HEALTH_RECOVERY,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = EFFECT_ITEM_RESTORE_HP,
        .flingPower = 30,
    },

    [ITEM_MAX_POTION] =
    {
        .name = _("Max Potion"),
        .price = 2500,
        .holdEffectParam = 255,
        .description = sMaxPotionDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_HEALTH_RECOVERY,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = EFFECT_ITEM_RESTORE_HP,
        .flingPower = 30,
    },

    [ITEM_FULL_RESTORE] =
    {
        .name = _("Full Restore"),
        .price = 3000,
        .holdEffectParam = 255,
        .description = sFullRestoreDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_HEALTH_RECOVERY,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = EFFECT_ITEM_HEAL_AND_CURE_STATUS,
        .flingPower = 30,
    },

    [ITEM_REVIVE] =
    {
        .name = _("Revive"),
        .price = 2000,
        .description = sReviveDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_HEALTH_RECOVERY,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = EFFECT_ITEM_REVIVE,
        .flingPower = 30,
    },

    [ITEM_MAX_REVIVE] =
    {
        .name = _("Max Revive"),
        .price = 4000,
        .description = sMaxReviveDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_HEALTH_RECOVERY,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = EFFECT_ITEM_REVIVE,
        .flingPower = 30,
    },

    [ITEM_FRESH_WATER] =
    {
        .name = _("Fresh Water"),
        .price = 200,
        .holdEffectParam = 30,
        .description = sFreshWaterDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_HEALTH_RECOVERY,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = EFFECT_ITEM_RESTORE_HP,
        .flingPower = 30,
    },

    [ITEM_SODA_POP] =
    {
        .name = _("Soda Pop"),
        .price = 300,
        .holdEffectParam = 50,
        .description = sSodaPopDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_HEALTH_RECOVERY,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = EFFECT_ITEM_RESTORE_HP,
        .flingPower = 30,
    },

    [ITEM_LEMONADE] =
    {
        .name = _("Lemonade"),
        .price = 400,
        .holdEffectParam = 70,
        .description = sLemonadeDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_HEALTH_RECOVERY,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = EFFECT_ITEM_RESTORE_HP,
        .flingPower = 30,
    },

    [ITEM_MOOMOO_MILK] =
    {
        .name = _("Moomoo Milk"),
        .price = 600,
        .holdEffectParam = 100,
        .description = sMoomooMilkDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_HEALTH_RECOVERY,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = EFFECT_ITEM_RESTORE_HP,
        .flingPower = 30,
    },

    [ITEM_ENERGY_POWDER] =
    {
        .name = _("Energy Powder"),
        .price = 500,
        .description = sEnergyPowderDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_HEALTH_RECOVERY,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = EFFECT_ITEM_RESTORE_HP,
        .flingPower = 30,
    },

    [ITEM_ENERGY_ROOT] =
    {
        .name = _("Energy Root"),
        .price = 1200,
        .description = sEnergyRootDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_HEALTH_RECOVERY,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = EFFECT_ITEM_RESTORE_HP,
        .flingPower = 30,
    },

    [ITEM_HEAL_POWDER] =
    {
        .name = _("Heal Powder"),
        .price = 300,
        .description = sHealPowderDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_HEALTH_RECOVERY,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = EFFECT_ITEM_CURE_STATUS,
        .flingPower = 30,
    },

    [ITEM_REVIVAL_HERB] =
    {
        .name = _("Revival Herb"),
        .price = 2800,
        .description = sRevivalHerbDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_HEALTH_RECOVERY,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = EFFECT_ITEM_REVIVE,
        .flingPower = 30,
    },

    [ITEM_ANTIDOTE] =
    {
        .name = _("Antidote"),
        .price = 200,
        .description = sAntidoteDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_STATUS_RECOVERY,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = EFFECT_ITEM_CURE_STATUS,
        .flingPower = 30,
    },

    [ITEM_PARALYZE_HEAL] =
    {
        .name = _("Paralyze Heal"),
        .price = 300,
        .description = sParalyzeHealDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_STATUS_RECOVERY,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = EFFECT_ITEM_CURE_STATUS,
        .flingPower = 30,
    },

    [ITEM_BURN_HEAL] =
    {
        .name = _("Burn Heal"),
        .price = 300,
        .description = sBurnHealDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_STATUS_RECOVERY,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = EFFECT_ITEM_CURE_STATUS,
        .flingPower = 30,
    },

    [ITEM_ICE_HEAL] =
    {
        .name = _("Ice Heal"),
        .price = 100,
        .description = sIceHealDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_STATUS_RECOVERY,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = EFFECT_ITEM_CURE_STATUS,
        .flingPower = 30,
    },

    [ITEM_AWAKENING] =
    {
        .name = _("Awakening"),
        .price = 100,
        .description = sAwakeningDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_STATUS_RECOVERY,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = EFFECT_ITEM_CURE_STATUS,
        .flingPower = 30,
    },

    [ITEM_FULL_HEAL] =
    {
        .name = _("Full Heal"),
        .price = 400,
        .description = sFullHealDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_STATUS_RECOVERY,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = EFFECT_ITEM_CURE_STATUS,
        .flingPower = 30,
    },

    [ITEM_ETHER] =
    {
        .name = _("Ether"),
        .price = 1200,
        .holdEffectParam = 10,
        .description = sEtherDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU_MOVES,
        .sort = ITEM_TYPE_PP_RECOVERY,
        .fieldUseFunc = ItemUseOutOfBattle_PPRecovery,
        .battleUsage = EFFECT_ITEM_RESTORE_PP,
        .flingPower = 30,
    },

    [ITEM_MAX_ETHER] =
    {
        .name = _("Max Ether"),
        .price = 2000,
        .holdEffectParam = 255,
        .description = sMaxEtherDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU_MOVES,
        .sort = ITEM_TYPE_PP_RECOVERY,
        .fieldUseFunc = ItemUseOutOfBattle_PPRecovery,
        .battleUsage = EFFECT_ITEM_RESTORE_PP,
        .flingPower = 30,
    },

    [ITEM_ELIXIR] =
    {
        .name = _("Elixir"),
        .price = 3000,
        .holdEffectParam = 10,
        .description = sElixirDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_PP_RECOVERY,
        .fieldUseFunc = ItemUseOutOfBattle_PPRecovery,
        .battleUsage = EFFECT_ITEM_RESTORE_PP,
        .flingPower = 30,
    },

    [ITEM_MAX_ELIXIR] =
    {
        .name = _("Max Elixir"),
        .price = 4500,
        .holdEffectParam = 255,
        .description = sMaxElixirDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_PP_RECOVERY,
        .fieldUseFunc = ItemUseOutOfBattle_PPRecovery,
        .battleUsage = EFFECT_ITEM_RESTORE_PP,
        .flingPower = 30,
    },

    [ITEM_BERRY_JUICE] =
    {
        .name = _("Berry Juice"),
        .price = 200,
        .holdEffect = HOLD_EFFECT_RESTORE_HP,
        .holdEffectParam = 20,
        .description = sBerryJuiceDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_HEALTH_RECOVERY,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = EFFECT_ITEM_RESTORE_HP,
        .flingPower = 30,
    },

    [ITEM_SACRED_ASH] =
    {
        .name = _("Sacred Ash"),
        .price = 50000,
        .description = sSacredAshDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_HEALTH_RECOVERY,
        .fieldUseFunc = ItemUseOutOfBattle_SacredAsh,
        .flingPower = 30,
    },

    [ITEM_SWEET_HEART] =
    {
        .name = _("Sweet Heart"),
        .price = 3000,
        .holdEffectParam = 20,
        .description = sSweetHeartDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_HEALTH_RECOVERY,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = EFFECT_ITEM_RESTORE_HP,
        .flingPower = 30,
    },

    [ITEM_MAX_HONEY] =
    {
        .name = _("Max Honey"),
        .price = 8000,
        .description = sMaxHoneyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_HEALTH_RECOVERY,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = EFFECT_ITEM_REVIVE,
        .flingPower = 30,
    },

// Regional Specialties

    [ITEM_PEWTER_CRUNCHIES] =
    {
        .name = _("PewtrCrnches"),
        .price = 250,
        .description = sPewterCrunchiesDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_STATUS_RECOVERY,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = EFFECT_ITEM_CURE_STATUS,
        .flingPower = 30,
    },

    [ITEM_RAGE_CANDY_BAR] =
    {
        .name = _("RageCandyBar"),
        .price = 350,
        .description = sRageCandyBarDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_STATUS_RECOVERY,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = EFFECT_ITEM_CURE_STATUS,
        .flingPower = 30,
    },

    [ITEM_LAVA_COOKIE] =
    {
        .name = _("Lava Cookie"),
        .price = 350,
        .description = sLavaCookieDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_STATUS_RECOVERY,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = EFFECT_ITEM_CURE_STATUS,
        .flingPower = 30,
    },

    [ITEM_OLD_GATEAU] =
    {
        .name = _("Old Gateau"),
        .price = 350,
        .description = sOldGateauDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_STATUS_RECOVERY,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = EFFECT_ITEM_CURE_STATUS,
        .flingPower = 30,
    },

    [ITEM_CASTELIACONE] =
    {
        .name = _("Casteliacone"),
        .price = 350,
        .description = sCasteliaconeDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_STATUS_RECOVERY,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = EFFECT_ITEM_CURE_STATUS,
        .flingPower = 30,
    },

    [ITEM_LUMIOSE_GALETTE] =
    {
        .name = _("LumioseGlete"),
        .price = 350,
        .description = sLumioseGaletteDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_STATUS_RECOVERY,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = EFFECT_ITEM_CURE_STATUS,
        .flingPower = 30,
    },

    [ITEM_SHALOUR_SABLE] =
    {
        .name = _("ShalourSable"),
        .price = 350,
        .description = sShalourSableDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_STATUS_RECOVERY,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = EFFECT_ITEM_CURE_STATUS,
        .flingPower = 30,
    },

    [ITEM_BIG_MALASADA] =
    {
        .name = _("Big Malasada"),
        .price = 350,
        .description = sBigMalasadaDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_STATUS_RECOVERY,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = EFFECT_ITEM_CURE_STATUS,
        .flingPower = 30,
    },

// Vitamins

    [ITEM_HP_UP] =
    {
        .name = _("HP Up"),
        .price = 10000,
        .description = sHPUpDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_STAT_BOOST,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .flingPower = 30,
    },

    [ITEM_PROTEIN] =
    {
        .name = _("Protein"),
        .price = 10000,
        .description = sProteinDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_STAT_BOOST,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .flingPower = 30,
    },

    [ITEM_IRON] =
    {
        .name = _("Iron"),
        .price = 10000,
        .description = sIronDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_STAT_BOOST,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .flingPower = 30,
    },

    [ITEM_CALCIUM] =
    {
        .name = _("Calcium"),
        .price = 10000,
        .description = sCalciumDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_STAT_BOOST,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .flingPower = 30,
    },

    [ITEM_ZINC] =
    {
        .name = _("Zinc"),
        .price = 10000,
        .description = sZincDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_STAT_BOOST,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .flingPower = 30,
    },

    [ITEM_CARBOS] =
    {
        .name = _("Carbos"),
        .price = 10000,
        .description = sCarbosDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_STAT_BOOST,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .flingPower = 30,
    },

    [ITEM_PP_UP] =
    {
        .name = _("PP Up"),
        .price = 10000,
        .description = sPPUpDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_STAT_BOOST,
        .fieldUseFunc = ItemUseOutOfBattle_PPUp,
        .flingPower = 30,
    },

    [ITEM_PP_MAX] =
    {
        .name = _("PP Max"),
        .price = 10000,
        .description = sPPMaxDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_STAT_BOOST,
        .fieldUseFunc = ItemUseOutOfBattle_PPUp,
        .flingPower = 30,
    },

// EV Feathers

    [ITEM_HEALTH_FEATHER] =
    {
        .name = _("HealthFeather"),
        .price = 300,
        .description = sHealthFeatherDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_STAT_BOOST,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .flingPower = 20,
    },

    [ITEM_MUSCLE_FEATHER] =
    {
        .name = _("MuscleFeather"),
        .price = 300,
        .description = sMuscleFeatherDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_STAT_BOOST,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .flingPower = 20,
    },

    [ITEM_RESIST_FEATHER] =
    {
        .name = _("ResistFeather"),
        .price = 300,
        .description = sResistFeatherDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_STAT_BOOST,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .flingPower = 20,
    },

    [ITEM_GENIUS_FEATHER] =
    {
        .name = _("GeniusFeather"),
        .price = 300,
        .description = sGeniusFeatherDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_STAT_BOOST,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .flingPower = 20,
    },

    [ITEM_CLEVER_FEATHER] =
    {
        .name = _("CleverFeather"),
        .price = 300,
        .description = sCleverFeatherDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_STAT_BOOST,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .flingPower = 20,
    },

    [ITEM_SWIFT_FEATHER] =
    {
        .name = _("SwiftFeather"),
        .price = 300,
        .description = sSwiftFeatherDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_STAT_BOOST,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .flingPower = 20,
    },

// Ability Modifiers

    [ITEM_ABILITY_CAPSULE] =
    {
        .name = _("AbilityCapsle"),
        .price = 10000,
        .holdEffectParam = 0,
        .description = sAbilityCapsuleDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_FIELD_USE,
        .fieldUseFunc = ItemUseOutOfBattle_AbilityCapsule,
    },

    [ITEM_ABILITY_PATCH] =
    {
        .name = _("AbilityPatch"),
        .price = 0,
        .holdEffectParam = 0,
        .description = sAbilityPatchDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_FIELD_USE,
        .fieldUseFunc = ItemUseOutOfBattle_AbilityPatch,
    },

// Mints

    [ITEM_LONELY_MINT] =
    {
        .name = _("Lonely Mint"),
        .price = 20,
        .description = sLonelyMintDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_FIELD_USE,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse, // Todo
        .flingPower = 10,
    },

    [ITEM_ADAMANT_MINT] =
    {
        .name = _("Adamant Mint"),
        .price = 20,
        .description = sAdamantMintDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_FIELD_USE,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse, // Todo
        .flingPower = 10,
    },

    [ITEM_NAUGHTY_MINT] =
    {
        .name = _("Naughty Mint"),
        .price = 20,
        .description = sNaughtyMintDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_FIELD_USE,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse, // Todo
        .flingPower = 10,
    },

    [ITEM_BRAVE_MINT] =
    {
        .name = _("Brave Mint"),
        .price = 20,
        .description = sBraveMintDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_FIELD_USE,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse, // Todo
        .flingPower = 10,
    },

    [ITEM_BOLD_MINT] =
    {
        .name = _("Bold Mint"),
        .price = 20,
        .description = sBoldMintDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_FIELD_USE,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse, // Todo
        .flingPower = 10,
    },

    [ITEM_IMPISH_MINT] =
    {
        .name = _("Impish Mint"),
        .price = 20,
        .description = sImpishMintDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_FIELD_USE,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse, // Todo
        .flingPower = 10,
    },

    [ITEM_LAX_MINT] =
    {
        .name = _("Lax Mint"),
        .price = 20,
        .description = sLaxMintDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_FIELD_USE,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse, // Todo
        .flingPower = 10,
    },

    [ITEM_RELAXED_MINT] =
    {
        .name = _("Relaxed Mint"),
        .price = 20,
        .description = sRelaxedMintDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_FIELD_USE,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse, // Todo
        .flingPower = 10,
    },

    [ITEM_MODEST_MINT] =
    {
        .name = _("Modest Mint"),
        .price = 20,
        .description = sModestMintDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_FIELD_USE,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse, // Todo
        .flingPower = 10,
    },

    [ITEM_MILD_MINT] =
    {
        .name = _("Mild Mint"),
        .price = 20,
        .description = sMildMintDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_FIELD_USE,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse, // Todo
        .flingPower = 10,
    },

    [ITEM_RASH_MINT] =
    {
        .name = _("Rash Mint"),
        .price = 20,
        .description = sRashMintDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_FIELD_USE,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse, // Todo
        .flingPower = 10,
    },

    [ITEM_QUIET_MINT] =
    {
        .name = _("Quiet Mint"),
        .price = 20,
        .description = sQuietMintDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_FIELD_USE,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse, // Todo
        .flingPower = 10,
    },

    [ITEM_CALM_MINT] =
    {
        .name = _("Calm Mint"),
        .price = 20,
        .description = sCalmMintDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_FIELD_USE,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse, // Todo
        .flingPower = 10,
    },

    [ITEM_GENTLE_MINT] =
    {
        .name = _("Gentle Mint"),
        .price = 20,
        .description = sGentleMintDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_FIELD_USE,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse, // Todo
        .flingPower = 10,
    },

    [ITEM_CAREFUL_MINT] =
    {
        .name = _("Careful Mint"),
        .price = 20,
        .description = sCarefulMintDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_FIELD_USE,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse, // Todo
        .flingPower = 10,
    },

    [ITEM_SASSY_MINT] =
    {
        .name = _("Sassy Mint"),
        .price = 20,
        .description = sSassyMintDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_FIELD_USE,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse, // Todo
        .flingPower = 10,
    },

    [ITEM_TIMID_MINT] =
    {
        .name = _("Timid Mint"),
        .price = 20,
        .description = sTimidMintDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_FIELD_USE,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse, // Todo
        .flingPower = 10,
    },

    [ITEM_HASTY_MINT] =
    {
        .name = _("Hasty Mint"),
        .price = 20,
        .description = sHastyMintDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_FIELD_USE,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse, // Todo
        .flingPower = 10,
    },

    [ITEM_JOLLY_MINT] =
    {
        .name = _("Jolly Mint"),
        .price = 20,
        .description = sJollyMintDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_FIELD_USE,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse, // Todo
        .flingPower = 10,
    },

    [ITEM_NAIVE_MINT] =
    {
        .name = _("Naive Mint"),
        .price = 20,
        .description = sNaiveMintDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_FIELD_USE,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse, // Todo
        .flingPower = 10,
    },

    [ITEM_SERIOUS_MINT] =
    {
        .name = _("Serious Mint"),
        .price = 20,
        .description = sSeriousMintDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_FIELD_USE,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse, // Todo
        .flingPower = 10,
    },

// Candy

    [ITEM_RARE_CANDY] =
    {
        .name = _("Rare Candy"),
        .price = 10000,
        .description = sRareCandyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_FIELD_USE,
        .fieldUseFunc = ItemUseOutOfBattle_RareCandy,
        .flingPower = 30,
    },

    [ITEM_EXP_CANDY_XS] =
    {
        .name = _("WHITE SWEETS"),
        .price = 20,
        .holdEffectParam = EXP_100,
        .description = sExpCandyXSDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_FIELD_USE,
        .fieldUseFunc = ItemUseOutOfBattle_RareCandy,
        .flingPower = 30,
    },

    [ITEM_EXP_CANDY_S] =
    {
        .name = _("Yellow Sweets"),
        .price = 240,
        .holdEffectParam = EXP_800,
        .description = sExpCandySDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_FIELD_USE,
        .fieldUseFunc = ItemUseOutOfBattle_RareCandy,
        .flingPower = 30,
    },

    [ITEM_EXP_CANDY_M] =
    {
        .name = _("Orange Sweets"),
        .price = 1000,
        .holdEffectParam = EXP_3000,
        .description = sExpCandyMDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_FIELD_USE,
        .fieldUseFunc = ItemUseOutOfBattle_RareCandy,
        .flingPower = 30,
    },

    [ITEM_EXP_CANDY_L] =
    {
        .name = _("Red Sweets"),
        .price = 3000,
        .holdEffectParam = EXP_10000,
        .description = sExpCandyLDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_FIELD_USE,
        .fieldUseFunc = ItemUseOutOfBattle_RareCandy,
        .flingPower = 30,
    },

    [ITEM_EXP_CANDY_XL] =
    {
        .name = _("Purple Sweets"),
        .price = 10000,
        .holdEffectParam = EXP_30000,
        .description = sExpCandyXLDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_FIELD_USE,
        .fieldUseFunc = ItemUseOutOfBattle_RareCandy,
        .flingPower = 30,
    },

    [ITEM_DYNAMAX_CANDY] =
    {
        .name = _("DynamaxCandy"),
        .price = 0,
        .description = sDynamaxCandyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_FIELD_USE,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse, // Todo
        .flingPower = 30,
    },

// Medicinal Flutes

    [ITEM_BLUE_FLUTE] =
    {
        .name = _("Blue Flute"),
        .price = 20,
        .description = sBlueFluteDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_FLUTE,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = EFFECT_ITEM_CURE_STATUS,
        .flingPower = 30,
    },

    [ITEM_YELLOW_FLUTE] =
    {
        .name = _("Yellow Flute"),
        .price = 20,
        .description = sYellowFluteDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_FLUTE,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = EFFECT_ITEM_CURE_STATUS,
        .flingPower = 30,
    },

    [ITEM_RED_FLUTE] =
    {
        .name = _("Red Flute"),
        .price = 20,
        .description = sRedFluteDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_FLUTE,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = EFFECT_ITEM_CURE_STATUS,
        .flingPower = 30,
    },

// Encounter-modifying Flutes

    [ITEM_BLACK_FLUTE] =
    {
        .name = _("Black Flute"),
        .price = 20,
        .holdEffectParam = 50,
        .description = sBlackFluteDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_FLUTE,
        .fieldUseFunc = ItemUseOutOfBattle_BlackWhiteFlute,
        .flingPower = 30,
    },

    [ITEM_WHITE_FLUTE] =
    {
        .name = _("White Flute"),
        .price = 20,
        .holdEffectParam = 150,
        .description = sWhiteFluteDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_FLUTE,
        .fieldUseFunc = ItemUseOutOfBattle_BlackWhiteFlute,
        .flingPower = 30,
    },

// Encounter Modifiers

    [ITEM_REPEL] =
    {
        .name = _("Repel"),
        .price = 400,
        .holdEffectParam = 100,
        .description = sRepelDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_FIELD_USE,
        .fieldUseFunc = ItemUseOutOfBattle_Repel,
        .flingPower = 30,
    },

    [ITEM_SUPER_REPEL] =
    {
        .name = _("Super Repel"),
        .price = 700,
        .holdEffectParam = 200,
        .description = sSuperRepelDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_FIELD_USE,
        .fieldUseFunc = ItemUseOutOfBattle_Repel,
        .flingPower = 30,
    },

    [ITEM_MAX_REPEL] =
    {
        .name = _("Max Repel"),
        .price = 900,
        .holdEffectParam = 250,
        .description = sMaxRepelDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_FIELD_USE,
        .fieldUseFunc = ItemUseOutOfBattle_Repel,
        .flingPower = 30,
    },

    [ITEM_LURE] =
    {
        .name = _("Lure"),
        .price = 400,
        .holdEffectParam = 100,
        .description = sLureDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_FIELD_USE,
        .fieldUseFunc = ItemUseOutOfBattle_Lure,
        .secondaryId = 0,
        .flingPower = 30,
    },

    [ITEM_SUPER_LURE] =
    {
        .name = _("Super Lure"),
        .price = 700,
        .holdEffectParam = 200,
        .description = sSuperLureDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_FIELD_USE,
        .fieldUseFunc = ItemUseOutOfBattle_Lure,
        .secondaryId = 0,
        .flingPower = 30,
    },

    [ITEM_MAX_LURE] =
    {
        .name = _("Max Lure"),
        .price = 900,
        .holdEffectParam = 250,
        .description = sMaxLureDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_FIELD_USE,
        .fieldUseFunc = ItemUseOutOfBattle_Lure,
        .secondaryId = 0,
        .flingPower = 30,
    },

    [ITEM_ESCAPE_ROPE] =
    {
        .name = _("Escape Rope"),
        .description = sEscapeRopeDesc,
        #if I_KEY_ESCAPE_ROPE >= GEN_8
            .price = 0,
            .importance = 1,
            .pocket = POCKET_KEY_ITEMS,
        #else
            .price = 1000,
            .pocket = POCKET_ITEMS,
        #endif
        .type = ITEM_USE_FIELD,
        .sort = ITEM_TYPE_FIELD_USE,
        .fieldUseFunc = ItemUseOutOfBattle_EscapeRope,
        .flingPower = 30,
    },

// X Items

#define X_ITEM_STAGES (B_X_ITEMS_BUFF >= GEN_7) ? 2 : 1

    [ITEM_X_ATTACK] =
    {
        .name = _("X Attack"),
        .price = 1000,
        .holdEffectParam = X_ITEM_STAGES,
        .description = sXAttackDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_BATTLE_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = EFFECT_ITEM_INCREASE_STAT,
        .flingPower = 30,
    },

    [ITEM_X_DEFENSE] =
    {
        .name = _("X Defense"),
        .price = 2000,
        .holdEffectParam = X_ITEM_STAGES,
        .description = sXDefenseDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_BATTLE_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = EFFECT_ITEM_INCREASE_STAT,
        .flingPower = 30,
    },

    [ITEM_X_SP_ATK] =
    {
        .name = _("X Sp. Atk"),
        .price = 1000,
        .holdEffectParam = X_ITEM_STAGES,
        .description = sXSpAtkDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_BATTLE_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = EFFECT_ITEM_INCREASE_STAT,
        .flingPower = 30,
    },

    [ITEM_X_SP_DEF] =
    {
        .name = _("X Sp. Def"),
        .price = 2000,
        .holdEffectParam = X_ITEM_STAGES,
        .description = sXSpDefDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_BATTLE_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = EFFECT_ITEM_INCREASE_STAT,
        .flingPower = 30,
    },

    [ITEM_X_SPEED] =
    {
        .name = _("X Speed"),
        .price = 1000,
        .holdEffectParam = X_ITEM_STAGES,
        .description = sXSpeedDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_BATTLE_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = EFFECT_ITEM_INCREASE_STAT,
        .flingPower = 30,
    },

    [ITEM_X_ACCURACY] =
    {
        .name = _("X Accuracy"),
        .price = 1000,
        .holdEffectParam = X_ITEM_STAGES,
        .description = sXAccuracyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_BATTLE_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = EFFECT_ITEM_INCREASE_STAT,
        .flingPower = 30,
    },

    [ITEM_DIRE_HIT] =
    {
        .name = _("Dire Hit"),
        .price = 1000,
        .description = sDireHitDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_BATTLE_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = EFFECT_ITEM_SET_FOCUS_ENERGY,
        .flingPower = 30,
    },

    [ITEM_GUARD_SPEC] =
    {
        .name = _("Guard Spec."),
        .price = 1500,
        .description = sGuardSpecDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_BATTLE_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = EFFECT_ITEM_SET_MIST,
        .flingPower = 30,
    },

    [ITEM_POKE_DOLL] =
    {
        .name = _("Poké Doll"),
        .price = 100,
        .description = sPokeDollDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_BATTLE_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = EFFECT_ITEM_ESCAPE,
        .flingPower = 30,
    },

    [ITEM_FLUFFY_TAIL] =
    {
        .name = _("Fluffy Tail"),
        .price = 100,
        .description = sFluffyTailDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_BATTLE_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = EFFECT_ITEM_ESCAPE,
        .flingPower = 30,
    },

    [ITEM_POKE_TOY] =
    {
        .name = _("Poké Toy"),
        .price = 100,
        .description = sPokeToyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_BATTLE_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = EFFECT_ITEM_ESCAPE,
        .flingPower = 30,
    },

    [ITEM_MAX_MUSHROOMS] =
    {
        .name = _("MaxMushrooms"),
        .price = 8000,
        .description = sMaxMushroomsDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_BATTLE_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = EFFECT_ITEM_INCREASE_ALL_STATS,
        .flingPower = 30,
    },

#undef X_ITEM_STAGES

// Treasures

    [ITEM_BOTTLE_CAP] =
    {
        .name = _("Bottle Cap"),
        .price = 5000,
        .description = sBottleCapDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_RELIC,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
    },

    [ITEM_GOLD_BOTTLE_CAP] =
    {
        .name = _("GoldBottlCap"),
        .price = 10000,
        .description = sGoldBottleCapDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_RELIC,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
    },

    [ITEM_NUGGET] =
    {
        .name = _("Nugget"),
        .price = 10000,
        .description = sNuggetDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_SELLABLE,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
    },

    [ITEM_BIG_NUGGET] =
    {
        .name = _("Big Nugget"),
        .price = 40000,
        .description = sBigNuggetDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_SELLABLE,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 130,
    },

    [ITEM_TINY_MUSHROOM] =
    {
        .name = _("Tiny Mushroom"),
        .price = 500,
        .description = sTinyMushroomDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_SELLABLE,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
    },

    [ITEM_BIG_MUSHROOM] =
    {
        .name = _("Big Mushroom"),
        .price = 5000,
        .description = sBigMushroomDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_SELLABLE,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
    },

    [ITEM_BALM_MUSHROOM] =
    {
        .name = _("Balm Mushroom"),
        .price = 15000,
        .description = sBalmMushroomDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_SELLABLE,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
    },

    [ITEM_PEARL] =
    {
        .name = _("Pearl"),
        .price = 2000,
        .description = sPearlDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_SELLABLE,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
    },

    [ITEM_BIG_PEARL] =
    {
        .name = _("Big Pearl"),
        .price = 8000,
        .description = sBigPearlDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_SELLABLE,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
    },

    [ITEM_PEARL_STRING] =
    {
        .name = _("Pearl String"),
        .price = 20000,
        .description = sPearlStringDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_SELLABLE,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
    },

    [ITEM_STARDUST] =
    {
        .name = _("Stardust"),
        .price = 3000,
        .description = sStardustDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_SELLABLE,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
    },

    [ITEM_STAR_PIECE] =
    {
        .name = _("Star Piece"),
        .price = 12000,
        .description = sStarPieceDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_SELLABLE,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
    },

    [ITEM_COMET_SHARD] =
    {
        .name = _("Comet Shard"),
        .price = 25000,
        .description = sCometShardDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_SELLABLE,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
    },

    [ITEM_SHOAL_SALT] =
    {
        .name = _("Shoal Salt"),
        .price = 20,
        .description = sShoalSaltDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_SELLABLE,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
    },

    [ITEM_SHOAL_SHELL] =
    {
        .name = _("Shoal Shell"),
        .price = 20,
        .description = sShoalShellDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_SELLABLE,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
    },

    [ITEM_RED_SHARD] =
    {
        .name = _("Red Shard"),
        .price = 1000,
        .description = sRedShardDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_SELLABLE,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
    },

    [ITEM_BLUE_SHARD] =
    {
        .name = _("Blue Shard"),
        .price = 1000,
        .description = sBlueShardDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_SELLABLE,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
    },

    [ITEM_YELLOW_SHARD] =
    {
        .name = _("Yellow Shard"),
        .price = 1000,
        .description = sYellowShardDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_SELLABLE,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
    },

    [ITEM_GREEN_SHARD] =
    {
        .name = _("Green Shard"),
        .price = 1000,
        .description = sGreenShardDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_SELLABLE,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
    },

    [ITEM_HEART_SCALE] =
    {
        .name = _("Heart Scale"),
        .price = 100,
        .description = sHeartScaleDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_SELLABLE,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
    },

    [ITEM_HONEY] =
    {
        .name = _("Honey"),
        .price = 300,
        .description = sHoneyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_FIELD,
        .sort = ITEM_TYPE_SELLABLE,
        .fieldUseFunc = ItemUseOutOfBattle_Honey,
        .flingPower = 30,
    },

    [ITEM_RARE_BONE] =
    {
        .name = _("Rare Bone"),
        .price = 5000,
        .description = sRareBoneDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_SELLABLE,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 100,
    },

    [ITEM_ODD_KEYSTONE] =
    {
        .name = _("Odd Keystone"),
        .price = 2100,
        .description = sOddKeystoneDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_SELLABLE,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
    },

    [ITEM_PRETTY_FEATHER] =
    {
        .name = _("PrettyFeather"),
        .price = 1000,
        .description = sPrettyFeatherDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_SELLABLE,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 20,
    },

    [ITEM_RELIC_COPPER] =
    {
        .name = _("Relic Copper"),
        .price = 0,
        .description = sRelicCopperDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_RELIC,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
    },

    [ITEM_RELIC_SILVER] =
    {
        .name = _("Relic Silver"),
        .price = 0,
        .description = sRelicSilverDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_RELIC,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
    },

    [ITEM_RELIC_GOLD] =
    {
        .name = _("Relic Gold"),
        .price = 0,
        .description = sRelicGoldDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_RELIC,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
    },

    [ITEM_RELIC_VASE] =
    {
        .name = _("Relic Vase"),
        .price = 0,
        .description = sRelicVaseDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_RELIC,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
    },

    [ITEM_RELIC_BAND] =
    {
        .name = _("Relic Band"),
        .price = 0,
        .description = sRelicBandDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_RELIC,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
    },

    [ITEM_RELIC_STATUE] =
    {
        .name = _("Relic Statue"),
        .price = 0,
        .description = sRelicStatueDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_RELIC,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
    },

    [ITEM_RELIC_CROWN] =
    {
        .name = _("Relic Crown"),
        .price = 0,
        .description = sRelicCrownDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_RELIC,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
    },

    [ITEM_STRANGE_SOUVENIR] =
    {
        .name = _("StrngeSouvnr"),
        .price = 3000,
        .description = sStrangeSouvenirDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_RELIC,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
    },

// Fossils

    [ITEM_HELIX_FOSSIL] =
    {
        .name = _("Helix Fossil"),
        .description = sHelixFossilDesc,
        #if I_KEY_FOSSILS >= GEN_4
            .price = 7000,
            .pocket = POCKET_ITEMS,
        #else
            .price = 0,
            .importance = 1,
            .pocket = POCKET_KEY_ITEMS,
        #endif
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_RELIC,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 100,
    },

    [ITEM_DOME_FOSSIL] =
    {
        .name = _("Dome Fossil"),
        .description = sDomeFossilDesc,
        #if I_KEY_FOSSILS >= GEN_4
            .price = 7000,
            .pocket = POCKET_ITEMS,
        #else
            .price = 0,
            .importance = 1,
            .pocket = POCKET_KEY_ITEMS,
        #endif
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_RELIC,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 100,
    },

    [ITEM_OLD_AMBER] =
    {
        .name = _("Old Amber"),
        .description = sOldAmberDesc,
        #if I_KEY_FOSSILS >= GEN_4
            .price = 10000,
            .pocket = POCKET_ITEMS,
        #else
            .price = 0,
            .importance = 1,
            .pocket = POCKET_KEY_ITEMS,
        #endif
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_RELIC,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 100,
    },

    [ITEM_ROOT_FOSSIL] =
    {
        .name = _("Root Fossil"),
        .description = sRootFossilDesc,
        #if I_KEY_FOSSILS >= GEN_4
            .price = 7000,
            .pocket = POCKET_ITEMS,
        #else
            .price = 0,
            .importance = 1,
            .pocket = POCKET_KEY_ITEMS,
        #endif
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_RELIC,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 100,
    },

    [ITEM_CLAW_FOSSIL] =
    {
        .name = _("Claw Fossil"),
        .description = sClawFossilDesc,
        #if I_KEY_FOSSILS >= GEN_4
            .price = 7000,
            .pocket = POCKET_ITEMS,
        #else
            .price = 0,
            .importance = 1,
            .pocket = POCKET_KEY_ITEMS,
        #endif
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_RELIC,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 100,
    },

    [ITEM_ARMOR_FOSSIL] =
    {
        .name = _("Armor Fossil"),
        .price = 7000,
        .description = sArmorFossilDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_RELIC,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 100,
    },

    [ITEM_SKULL_FOSSIL] =
    {
        .name = _("Skull Fossil"),
        .price = 7000,
        .description = sSkullFossilDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_RELIC,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 100,
    },

    [ITEM_COVER_FOSSIL] =
    {
        .name = _("Cover Fossil"),
        .price = 7000,
        .description = sCoverFossilDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_RELIC,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 100,
    },

    [ITEM_PLUME_FOSSIL] =
    {
        .name = _("Plume Fossil"),
        .price = 7000,
        .description = sPlumeFossilDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_RELIC,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 100,
    },

    [ITEM_JAW_FOSSIL] =
    {
        .name = _("Jaw Fossil"),
        .price = 7000,
        .description = sJawFossilDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_RELIC,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 100,
    },

    [ITEM_SAIL_FOSSIL] =
    {
        .name = _("Sail Fossil"),
        .price = 7000,
        .description = sSailFossilDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_RELIC,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 100,
    },

    [ITEM_FOSSILIZED_BIRD] =
    {
        .name = _("FosslzedBird"),
        .price = 5000,
        .description = sFossilizedBirdDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_RELIC,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 100,
    },

    [ITEM_FOSSILIZED_FISH] =
    {
        .name = _("FosslzedFish"),
        .price = 5000,
        .description = sFossilizedFishDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_RELIC,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 100,
    },

    [ITEM_FOSSILIZED_DRAKE] =
    {
        .name = _("FosslzedDrke"),
        .price = 5000,
        .description = sFossilizedDrakeDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_RELIC,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 100,
    },

    [ITEM_FOSSILIZED_DINO] =
    {
        .name = _("FosslzedDino"),
        .price = 5000,
        .description = sFossilizedDinoDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_RELIC,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 100,
    },

// Mulch

    [ITEM_GROWTH_MULCH] =
    {
        .name = _("Growth Mulch"),
        .price = 200,
        .description = sGrowthMulchDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_SELLABLE,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse, // Todo
        .flingPower = 30,
    },

    [ITEM_DAMP_MULCH] =
    {
        .name = _("Damp Mulch"),
        .price = 200,
        .description = sDampMulchDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_SELLABLE,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse, // Todo
        .flingPower = 30,
    },

    [ITEM_STABLE_MULCH] =
    {
        .name = _("Stable Mulch"),
        .price = 200,
        .description = sStableMulchDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_SELLABLE,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse, // Todo
        .flingPower = 30,
    },

    [ITEM_GOOEY_MULCH] =
    {
        .name = _("Gooey Mulch"),
        .price = 200,
        .description = sGooeyMulchDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_SELLABLE,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse, // Todo
        .flingPower = 30,
    },

    [ITEM_RICH_MULCH] =
    {
        .name = _("Rich Mulch"),
        .price = 200,
        .description = sRichMulchDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_SELLABLE,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse, // Todo
        .flingPower = 30,
    },

    [ITEM_SURPRISE_MULCH] =
    {
        .name = _("SurprseMulch"),
        .price = 200,
        .description = sSurpriseMulchDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_SELLABLE,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse, // Todo
        .flingPower = 30,
    },

    [ITEM_BOOST_MULCH] =
    {
        .name = _("Boost Mulch"),
        .price = 200,
        .description = sBoostMulchDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_SELLABLE,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse, // Todo
        .flingPower = 30,
    },

    [ITEM_AMAZE_MULCH] =
    {
        .name = _("Amaze Mulch"),
        .price = 200,
        .description = sAmazeMulchDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_SELLABLE,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse, // Todo
        .flingPower = 30,
    },

// Apricorns

    [ITEM_RED_APRICORN] =
    {
        .name = _("Red Apricorn"),
        .price = 200,
        .description = sRedApricornDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_SELLABLE,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_BLUE_APRICORN] =
    {
        .name = _("Blue Apricorn"),
        .price = 200,
        .description = sBlueApricornDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_SELLABLE,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_YELLOW_APRICORN] =
    {
        .name = _("YellwApricorn"),
        .price = 200,
        .description = sYellowApricornDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_SELLABLE,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_GREEN_APRICORN] =
    {
        .name = _("GreenApricorn"),
        .price = 200,
        .description = sGreenApricornDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_SELLABLE,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_PINK_APRICORN] =
    {
        .name = _("Pink Apricorn"),
        .price = 200,
        .description = sPinkApricornDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_SELLABLE,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_WHITE_APRICORN] =
    {
        .name = _("WhiteApricorn"),
        .price = 200,
        .description = sWhiteApricornDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_SELLABLE,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_BLACK_APRICORN] =
    {
        .name = _("BlackApricorn"),
        .price = 200,
        .description = sBlackApricornDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_SELLABLE,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_WISHING_PIECE] =
    {
        .name = _("WishingPiece"),
        .price = 20,
        .description = sWishingPieceDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_SELLABLE,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse, // Todo
        .flingPower = 50,
    },

    [ITEM_GALARICA_TWIG] =
    {
        .name = _("GalaricaTwig"),
        .price = 40,
        .description = sGalaricaTwigDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_SELLABLE,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
    },

    [ITEM_ARMORITE_ORE] =
    {
        .name = _("Armorite Ore"),
        .price = 40,
        .description = sArmoriteOreDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_SELLABLE,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
    },

    [ITEM_DYNITE_ORE] =
    {
        .name = _("Dynite Ore"),
        .price = 20,
        .description = sDyniteOreDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_SELLABLE,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
    },

// Mail

    [ITEM_ORANGE_MAIL] =
    {
        .name = _("Orange Mail"),
        .price = 50,
        .description = sOrangeMailDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_MAIL,
        .sort = ITEM_TYPE_MAIL,
        .fieldUseFunc = ItemUseOutOfBattle_Mail,
        .secondaryId = ITEM_TO_MAIL(ITEM_ORANGE_MAIL),
    },

    [ITEM_HARBOR_MAIL] =
    {
        .name = _("Harbor Mail"),
        .price = 50,
        .description = sHarborMailDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_MAIL,
        .sort = ITEM_TYPE_MAIL,
        .fieldUseFunc = ItemUseOutOfBattle_Mail,
        .secondaryId = ITEM_TO_MAIL(ITEM_HARBOR_MAIL),
    },

    [ITEM_GLITTER_MAIL] =
    {
        .name = _("Glitter Mail"),
        .price = 50,
        .description = sGlitterMailDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_MAIL,
        .sort = ITEM_TYPE_MAIL,
        .fieldUseFunc = ItemUseOutOfBattle_Mail,
        .secondaryId = ITEM_TO_MAIL(ITEM_GLITTER_MAIL),
    },

    [ITEM_MECH_MAIL] =
    {
        .name = _("Mech Mail"),
        .price = 50,
        .description = sMechMailDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_MAIL,
        .sort = ITEM_TYPE_MAIL,
        .fieldUseFunc = ItemUseOutOfBattle_Mail,
        .secondaryId = ITEM_TO_MAIL(ITEM_MECH_MAIL),
    },

    [ITEM_WOOD_MAIL] =
    {
        .name = _("Wood Mail"),
        .price = 50,
        .description = sWoodMailDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_MAIL,
        .sort = ITEM_TYPE_MAIL,
        .fieldUseFunc = ItemUseOutOfBattle_Mail,
        .secondaryId = ITEM_TO_MAIL(ITEM_WOOD_MAIL),
    },

    [ITEM_WAVE_MAIL] =
    {
        .name = _("Wave Mail"),
        .price = 50,
        .description = sWaveMailDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_MAIL,
        .sort = ITEM_TYPE_MAIL,
        .fieldUseFunc = ItemUseOutOfBattle_Mail,
        .secondaryId = ITEM_TO_MAIL(ITEM_WAVE_MAIL),
    },

    [ITEM_BEAD_MAIL] =
    {
        .name = _("Bead Mail"),
        .price = 50,
        .description = sBeadMailDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_MAIL,
        .sort = ITEM_TYPE_MAIL,
        .fieldUseFunc = ItemUseOutOfBattle_Mail,
        .secondaryId = ITEM_TO_MAIL(ITEM_BEAD_MAIL),
    },

    [ITEM_SHADOW_MAIL] =
    {
        .name = _("Shadow Mail"),
        .price = 50,
        .description = sShadowMailDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_MAIL,
        .sort = ITEM_TYPE_MAIL,
        .fieldUseFunc = ItemUseOutOfBattle_Mail,
        .secondaryId = ITEM_TO_MAIL(ITEM_SHADOW_MAIL),
    },

    [ITEM_TROPIC_MAIL] =
    {
        .name = _("Tropic Mail"),
        .price = 50,
        .description = sTropicMailDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_MAIL,
        .sort = ITEM_TYPE_MAIL,
        .fieldUseFunc = ItemUseOutOfBattle_Mail,
        .secondaryId = ITEM_TO_MAIL(ITEM_TROPIC_MAIL),
    },

    [ITEM_DREAM_MAIL] =
    {
        .name = _("Dream Mail"),
        .price = 50,
        .description = sDreamMailDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_MAIL,
        .sort = ITEM_TYPE_MAIL,
        .fieldUseFunc = ItemUseOutOfBattle_Mail,
        .secondaryId = ITEM_TO_MAIL(ITEM_DREAM_MAIL),
    },

    [ITEM_FAB_MAIL] =
    {
        .name = _("Fab Mail"),
        .price = 50,
        .description = sFabMailDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_MAIL,
        .sort = ITEM_TYPE_MAIL,
        .fieldUseFunc = ItemUseOutOfBattle_Mail,
        .secondaryId = ITEM_TO_MAIL(ITEM_FAB_MAIL),
    },

    [ITEM_RETRO_MAIL] =
    {
        .name = _("Retro Mail"),
        .price = 50,
        .description = sRetroMailDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_MAIL,
        .sort = ITEM_TYPE_MAIL,
        .fieldUseFunc = ItemUseOutOfBattle_Mail,
        .secondaryId = ITEM_TO_MAIL(ITEM_RETRO_MAIL),
    },

// Evolution Items

    [ITEM_FIRE_STONE] =
    {
        .name = _("Fire Stone"),
        .price = 3000,
        .description = sFireStoneDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_EVOLUTION_STONE,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
        .flingPower = 30,
    },

    [ITEM_WATER_STONE] =
    {
        .name = _("Water Stone"),
        .price = 3000,
        .description = sWaterStoneDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_EVOLUTION_STONE,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
        .flingPower = 30,
    },

    [ITEM_THUNDER_STONE] =
    {
        .name = _("Thunder Stone"),
        .price = 3000,
        .description = sThunderStoneDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_EVOLUTION_STONE,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
        .flingPower = 30,
    },

    [ITEM_LEAF_STONE] =
    {
        .name = _("Leaf Stone"),
        .price = 3000,
        .description = sLeafStoneDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_EVOLUTION_STONE,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
        .flingPower = 30,
    },

    [ITEM_ICE_STONE] =
    {
        .name = _("Ice Stone"),
        .price = 3000,
        .description = sIceStoneDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_EVOLUTION_STONE,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
        .flingPower = 30,
    },

    [ITEM_SUN_STONE] =
    {
        .name = _("Sun Stone"),
        .price = 3000,
        .description = sSunStoneDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_EVOLUTION_STONE,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
        .flingPower = 30,
    },

    [ITEM_MOON_STONE] =
    {
        .name = _("Moon Stone"),
        .price = 3000,
        .description = sMoonStoneDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_EVOLUTION_STONE,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
        .flingPower = 30,
    },

    [ITEM_SHINY_STONE] =
    {
        .name = _("Shiny Stone"),
        .price = 3000,
        .description = sShinyStoneDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_EVOLUTION_STONE,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
        .flingPower = 30,
    },

    [ITEM_DUSK_STONE] =
    {
        .name = _("Dusk Stone"),
        .price = 3000,
        .description = sDuskStoneDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_EVOLUTION_STONE,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
        .flingPower = 80,
    },

    [ITEM_DAWN_STONE] =
    {
        .name = _("Dawn Stone"),
        .price = 3000,
        .description = sDawnStoneDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_EVOLUTION_STONE,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
        .flingPower = 80,
    },

    [ITEM_SWEET_APPLE] =
    {
        .name = _("Sweet Apple"),
        .price = 2200,
        .description = sSweetAppleDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_EVOLUTION_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
        .flingPower = 30,
    },

    [ITEM_TART_APPLE] =
    {
        .name = _("Tart Apple"),
        .price = 2200,
        .description = sTartAppleDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_EVOLUTION_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
        .flingPower = 30,
    },

    [ITEM_CRACKED_POT] =
    {
        .name = _("Cracked Pot"),
        .price = 1600,
        .description = sCrackedPotDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_EVOLUTION_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
        .flingPower = 80,
    },

    [ITEM_CHIPPED_POT] =
    {
        .name = _("Chipped Pot"),
        .price = 38000,
        .description = sChippedPotDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_EVOLUTION_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
        .flingPower = 80,
    },

    [ITEM_GALARICA_CUFF] =
    {
        .name = _("GalaricaCuff"),
        .price = 6000,
        .description = sGalaricaCuffDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_EVOLUTION_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
        .flingPower = 30,
    },

    [ITEM_GALARICA_WREATH] =
    {
        .name = _("GalrcaWreath"),
        .price = 6000,
        .description = sGalaricaWreathDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_EVOLUTION_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
        .flingPower = 30,
    },

    [ITEM_DRAGON_SCALE] =
    {
        .name = _("Dragon Scale"),
        .price = 2000,
        .holdEffect = HOLD_EFFECT_DRAGON_SCALE,
        .holdEffectParam = 10,
        .description = sDragonScaleDesc,
        .pocket = POCKET_ITEMS,
        .type = EVO_HELD_ITEM_TYPE,
        .sort = ITEM_TYPE_EVOLUTION_ITEM,
        .fieldUseFunc = EVO_HELD_ITEM_FIELD_FUNC,
        .flingPower = 30,
    },

    [ITEM_UPGRADE] =
    {
        .name = _("Upgrade"),
        .price = 2000,
        .holdEffect = HOLD_EFFECT_UPGRADE,
        .description = sUpgradeDesc,
        .pocket = POCKET_ITEMS,
        .type = EVO_HELD_ITEM_TYPE,
        .sort = ITEM_TYPE_EVOLUTION_ITEM,
        .fieldUseFunc = EVO_HELD_ITEM_FIELD_FUNC,
        .flingPower = 30,
    },

    [ITEM_PROTECTOR] =
    {
        .name = _("Protector"),
        .price = 2000,
        .description = sProtectorDesc,
        .pocket = POCKET_ITEMS,
        .type = EVO_HELD_ITEM_TYPE,
        .sort = ITEM_TYPE_EVOLUTION_ITEM,
        .fieldUseFunc = EVO_HELD_ITEM_FIELD_FUNC,
        .flingPower = 80,
    },

    [ITEM_ELECTIRIZER] =
    {
        .name = _("Electirizer"),
        .price = 2000,
        .description = sElectirizerDesc,
        .pocket = POCKET_ITEMS,
        .type = EVO_HELD_ITEM_TYPE,
        .sort = ITEM_TYPE_EVOLUTION_ITEM,
        .fieldUseFunc = EVO_HELD_ITEM_FIELD_FUNC,
        .flingPower = 80,
    },

    [ITEM_MAGMARIZER] =
    {
        .name = _("Magmarizer"),
        .price = 2000,
        .description = sMagmarizerDesc,
        .pocket = POCKET_ITEMS,
        .type = EVO_HELD_ITEM_TYPE,
        .sort = ITEM_TYPE_EVOLUTION_ITEM,
        .fieldUseFunc = EVO_HELD_ITEM_FIELD_FUNC,
        .flingPower = 80,
    },

    [ITEM_DUBIOUS_DISC] =
    {
        .name = _("Dubious Disc"),
        .price = 2000,
        .description = sDubiousDiscDesc,
        .pocket = POCKET_ITEMS,
        .type = EVO_HELD_ITEM_TYPE,
        .sort = ITEM_TYPE_EVOLUTION_ITEM,
        .fieldUseFunc = EVO_HELD_ITEM_FIELD_FUNC,
        .flingPower = 50,
    },

    [ITEM_REAPER_CLOTH] =
    {
        .name = _("Reaper Cloth"),
        .price = 2000,
        .description = sReaperClothDesc,
        .pocket = POCKET_ITEMS,
        .type = EVO_HELD_ITEM_TYPE,
        .sort = ITEM_TYPE_EVOLUTION_ITEM,
        .fieldUseFunc = EVO_HELD_ITEM_FIELD_FUNC,
        .flingPower = 10,
    },

    [ITEM_PRISM_SCALE] =
    {
        .name = _("Prism Scale"),
        .price = 2000,
        .description = sPrismScaleDesc,
        .pocket = POCKET_ITEMS,
        .type = EVO_HELD_ITEM_TYPE,
        .sort = ITEM_TYPE_EVOLUTION_ITEM,
        .fieldUseFunc = EVO_HELD_ITEM_FIELD_FUNC,
        .flingPower = 30,
    },

    [ITEM_WHIPPED_DREAM] =
    {
        .name = _("Whipped Dream"),
        .price = 2000,
        .description = sWhippedDreamDesc,
        .pocket = POCKET_ITEMS,
        .type = EVO_HELD_ITEM_TYPE,
        .sort = ITEM_TYPE_EVOLUTION_ITEM,
        .fieldUseFunc = EVO_HELD_ITEM_FIELD_FUNC,
        .flingPower = 80,
    },

    [ITEM_SACHET] =
    {
        .name = _("Sachet"),
        .price = 2000,
        .description = sSachetDesc,
        .pocket = POCKET_ITEMS,
        .type = EVO_HELD_ITEM_TYPE,
        .sort = ITEM_TYPE_EVOLUTION_ITEM,
        .fieldUseFunc = EVO_HELD_ITEM_FIELD_FUNC,
        .flingPower = 80,
    },

    [ITEM_OVAL_STONE] =
    {
        .name = _("Oval Stone"),
        .price = 2000,
        .description = sOvalStoneDesc,
        .pocket = POCKET_ITEMS,
        .type = EVO_HELD_ITEM_TYPE,
        .sort = ITEM_TYPE_EVOLUTION_ITEM,
        .fieldUseFunc = EVO_HELD_ITEM_FIELD_FUNC,
        .flingPower = 80,
    },

    [ITEM_STRAWBERRY_SWEET] =
    {
        .name = _("StrwbrySweet"),
        .price = 500,
        .description = sStrawberrySweetDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_EVOLUTION_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_LOVE_SWEET] =
    {
        .name = _("Love Sweet"),
        .price = 500,
        .description = sLoveSweetDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_EVOLUTION_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_BERRY_SWEET] =
    {
        .name = _("Berry Sweet"),
        .price = 500,
        .description = sBerrySweetDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_EVOLUTION_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_CLOVER_SWEET] =
    {
        .name = _("Clover Sweet"),
        .price = 500,
        .description = sCloverSweetDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_EVOLUTION_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_FLOWER_SWEET] =
    {
        .name = _("Flower Sweet"),
        .price = 500,
        .description = sFlowerSweetDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_EVOLUTION_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_STAR_SWEET] =
    {
        .name = _("Star Sweet"),
        .price = 500,
        .description = sStarSweetDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_EVOLUTION_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_RIBBON_SWEET] =
    {
        .name = _("Ribbon Sweet"),
        .price = 500,
        .description = sRibbonSweetDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_EVOLUTION_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_EVERSTONE] =
    {
        .name = _("Everstone"),
        .price = 3000,
        .holdEffect = HOLD_EFFECT_PREVENT_EVOLVE,
        .description = sEverstoneDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_EVOLUTION_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
    },

// Nectars

    [ITEM_RED_NECTAR] =
    {
        .name = _("Red Nectar"),
        .price = 300,
        .holdEffectParam = 0,
        .description = sRedNectarDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_FIELD_USE,
        .fieldUseFunc = ItemUseOutOfBattle_FormChange_ConsumedOnUse,
        .flingPower = 10,
    },

    [ITEM_YELLOW_NECTAR] =
    {
        .name = _("Yellow Nectar"),
        .price = 300,
        .holdEffectParam = 0,
        .description = sYellowNectarDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_FIELD_USE,
        .fieldUseFunc = ItemUseOutOfBattle_FormChange_ConsumedOnUse,
        .flingPower = 10,
    },

    [ITEM_PINK_NECTAR] =
    {
        .name = _("Pink Nectar"),
        .price = 300,
        .holdEffectParam = 0,
        .description = sPinkNectarDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_FIELD_USE,
        .fieldUseFunc = ItemUseOutOfBattle_FormChange_ConsumedOnUse,
        .flingPower = 10,
    },

    [ITEM_PURPLE_NECTAR] =
    {
        .name = _("Purple Nectar"),
        .price = 300,
        .holdEffectParam = 0,
        .description = sPurpleNectarDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_FIELD_USE,
        .fieldUseFunc = ItemUseOutOfBattle_FormChange_ConsumedOnUse,
        .flingPower = 10,
    },

// Plates

    [ITEM_FLAME_PLATE] =
    {
        .name = _("Flame Plate"),
        .price = 1000,
        .holdEffect = HOLD_EFFECT_PLATE,
        .holdEffectParam = 20,
        .description = sFlamePlateDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_FIRE,
        .flingPower = 90,
    },

    [ITEM_SPLASH_PLATE] =
    {
        .name = _("Splash Plate"),
        .price = 1000,
        .holdEffect = HOLD_EFFECT_PLATE,
        .holdEffectParam = 20,
        .description = sSplashPlateDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_WATER,
        .flingPower = 90,
    },

    [ITEM_ZAP_PLATE] =
    {
        .name = _("Zap Plate"),
        .price = 1000,
        .holdEffect = HOLD_EFFECT_PLATE,
        .holdEffectParam = 20,
        .description = sZapPlateDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_ELECTRIC,
        .flingPower = 90,
    },

    [ITEM_MEADOW_PLATE] =
    {
        .name = _("Meadow Plate"),
        .price = 1000,
        .holdEffect = HOLD_EFFECT_PLATE,
        .holdEffectParam = 20,
        .description = sMeadowPlateDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_GRASS,
        .flingPower = 90,
    },

    [ITEM_ICICLE_PLATE] =
    {
        .name = _("Icicle Plate"),
        .price = 1000,
        .holdEffect = HOLD_EFFECT_PLATE,
        .holdEffectParam = 20,
        .description = sIciclePlateDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_ICE,
        .flingPower = 90,
    },

    [ITEM_FIST_PLATE] =
    {
        .name = _("Fist Plate"),
        .price = 1000,
        .holdEffect = HOLD_EFFECT_PLATE,
        .holdEffectParam = 20,
        .description = sFistPlateDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_FIGHTING,
        .flingPower = 90,
    },

    [ITEM_TOXIC_PLATE] =
    {
        .name = _("Toxic Plate"),
        .price = 1000,
        .holdEffect = HOLD_EFFECT_PLATE,
        .holdEffectParam = 20,
        .description = sToxicPlateDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_POISON,
        .flingPower = 90,
    },

    [ITEM_EARTH_PLATE] =
    {
        .name = _("Earth Plate"),
        .price = 1000,
        .holdEffect = HOLD_EFFECT_PLATE,
        .holdEffectParam = 20,
        .description = sEarthPlateDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_GROUND,
        .flingPower = 90,
    },

    [ITEM_SKY_PLATE] =
    {
        .name = _("Sky Plate"),
        .price = 1000,
        .holdEffect = HOLD_EFFECT_PLATE,
        .holdEffectParam = 20,
        .description = sSkyPlateDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_FLYING,
        .flingPower = 90,
    },

    [ITEM_MIND_PLATE] =
    {
        .name = _("Mind Plate"),
        .price = 1000,
        .holdEffect = HOLD_EFFECT_PLATE,
        .holdEffectParam = 20,
        .description = sMindPlateDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_PSYCHIC,
        .flingPower = 90,
    },

    [ITEM_INSECT_PLATE] =
    {
        .name = _("Insect Plate"),
        .price = 1000,
        .holdEffect = HOLD_EFFECT_PLATE,
        .holdEffectParam = 20,
        .description = sInsectPlateDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_BUG,
        .flingPower = 90,
    },

    [ITEM_STONE_PLATE] =
    {
        .name = _("Stone Plate"),
        .price = 1000,
        .holdEffect = HOLD_EFFECT_PLATE,
        .holdEffectParam = 20,
        .description = sStonePlateDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_ROCK,
        .flingPower = 90,
    },

    [ITEM_SPOOKY_PLATE] =
    {
        .name = _("Spooky Plate"),
        .price = 1000,
        .holdEffect = HOLD_EFFECT_PLATE,
        .holdEffectParam = 20,
        .description = sSpookyPlateDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_GHOST,
        .flingPower = 90,
    },

    [ITEM_DRACO_PLATE] =
    {
        .name = _("Draco Plate"),
        .price = 1000,
        .holdEffect = HOLD_EFFECT_PLATE,
        .holdEffectParam = 20,
        .description = sDracoPlateDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_DRAGON,
        .flingPower = 90,
    },

    [ITEM_DREAD_PLATE] =
    {
        .name = _("Dread Plate"),
        .price = 1000,
        .holdEffect = HOLD_EFFECT_PLATE,
        .holdEffectParam = 20,
        .description = sDreadPlateDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_DARK,
        .flingPower = 90,
    },

    [ITEM_IRON_PLATE] =
    {
        .name = _("Iron Plate"),
        .price = 1000,
        .holdEffect = HOLD_EFFECT_PLATE,
        .holdEffectParam = 20,
        .description = sIronPlateDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_STEEL,
        .flingPower = 90,
    },

    [ITEM_PIXIE_PLATE] =
    {
        .name = _("Pixie Plate"),
        .price = 1000,
        .holdEffect = HOLD_EFFECT_PLATE,
        .holdEffectParam = 20,
        .description = sPixiePlateDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_FAIRY,
        .flingPower = 90,
    },

// Drives

    [ITEM_DOUSE_DRIVE] =
    {
        .name = _("Douse Drive"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_DRIVE,
        .description = sDouseDriveDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_WATER,
        .flingPower = 70,
    },

    [ITEM_SHOCK_DRIVE] =
    {
        .name = _("Shock Drive"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_DRIVE,
        .description = sShockDriveDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_ELECTRIC,
        .flingPower = 70,
    },

    [ITEM_BURN_DRIVE] =
    {
        .name = _("Burn Drive"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_DRIVE,
        .description = sBurnDriveDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_FIRE,
        .flingPower = 70,
    },

    [ITEM_CHILL_DRIVE] =
    {
        .name = _("Chill Drive"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_DRIVE,
        .description = sChillDriveDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_ICE,
        .flingPower = 70,
    },

// Memories

    [ITEM_FIRE_MEMORY] =
    {
        .name = _("Fire Memory"),
        .price = 1000,
        .holdEffect = HOLD_EFFECT_MEMORY,
        .holdEffectParam = 0,
        .description = sFireMemoryDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_FIRE,
        .flingPower = 50,
    },

    [ITEM_WATER_MEMORY] =
    {
        .name = _("Water Memory"),
        .price = 1000,
        .holdEffect = HOLD_EFFECT_MEMORY,
        .holdEffectParam = 0,
        .description = sWaterMemoryDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_WATER,
        .flingPower = 50,
    },

    [ITEM_ELECTRIC_MEMORY] =
    {
        .name = _("ElectrcMemory"),
        .price = 1000,
        .holdEffect = HOLD_EFFECT_MEMORY,
        .holdEffectParam = 0,
        .description = sElectricMemoryDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_ELECTRIC,
        .flingPower = 50,
    },

    [ITEM_GRASS_MEMORY] =
    {
        .name = _("Grass Memory"),
        .price = 1000,
        .holdEffect = HOLD_EFFECT_MEMORY,
        .holdEffectParam = 0,
        .description = sGrassMemoryDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_GRASS,
        .flingPower = 50,
    },

    [ITEM_ICE_MEMORY] =
    {
        .name = _("Ice Memory"),
        .price = 1000,
        .holdEffect = HOLD_EFFECT_MEMORY,
        .holdEffectParam = 0,
        .description = sIceMemoryDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_ICE,
        .flingPower = 50,
    },

    [ITEM_FIGHTING_MEMORY] =
    {
        .name = _("FightngMemory"),
        .price = 1000,
        .holdEffect = HOLD_EFFECT_MEMORY,
        .holdEffectParam = 0,
        .description = sFightingMemoryDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_FIGHTING,
        .flingPower = 50,
    },

    [ITEM_POISON_MEMORY] =
    {
        .name = _("Poison Memory"),
        .price = 1000,
        .holdEffect = HOLD_EFFECT_MEMORY,
        .holdEffectParam = 0,
        .description = sPoisonMemoryDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_POISON,
        .flingPower = 50,
    },

    [ITEM_GROUND_MEMORY] =
    {
        .name = _("Ground Memory"),
        .price = 1000,
        .holdEffect = HOLD_EFFECT_MEMORY,
        .holdEffectParam = 0,
        .description = sGroundMemoryDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_GROUND,
        .flingPower = 50,
    },

    [ITEM_FLYING_MEMORY] =
    {
        .name = _("Flying Memory"),
        .price = 1000,
        .holdEffect = HOLD_EFFECT_MEMORY,
        .holdEffectParam = 0,
        .description = sFlyingMemoryDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_FLYING,
        .flingPower = 50,
    },

    [ITEM_PSYCHIC_MEMORY] =
    {
        .name = _("PsychicMemory"),
        .price = 1000,
        .holdEffect = HOLD_EFFECT_MEMORY,
        .holdEffectParam = 0,
        .description = sPsychicMemoryDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_PSYCHIC,
        .flingPower = 50,
    },

    [ITEM_BUG_MEMORY] =
    {
        .name = _("Bug Memory"),
        .price = 1000,
        .holdEffect = HOLD_EFFECT_MEMORY,
        .holdEffectParam = 0,
        .description = sBugMemoryDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_BUG,
        .flingPower = 50,
    },

    [ITEM_ROCK_MEMORY] =
    {
        .name = _("Rock Memory"),
        .price = 1000,
        .holdEffect = HOLD_EFFECT_MEMORY,
        .holdEffectParam = 0,
        .description = sRockMemoryDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_ROCK,
        .flingPower = 50,
    },

    [ITEM_GHOST_MEMORY] =
    {
        .name = _("Ghost Memory"),
        .price = 1000,
        .holdEffect = HOLD_EFFECT_MEMORY,
        .holdEffectParam = 0,
        .description = sGhostMemoryDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_GHOST,
        .flingPower = 50,
    },

    [ITEM_DRAGON_MEMORY] =
    {
        .name = _("Dragon Memory"),
        .price = 1000,
        .holdEffect = HOLD_EFFECT_MEMORY,
        .holdEffectParam = 0,
        .description = sDragonMemoryDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_DRAGON,
        .flingPower = 50,
    },

    [ITEM_DARK_MEMORY] =
    {
        .name = _("Dark Memory"),
        .price = 1000,
        .holdEffect = HOLD_EFFECT_MEMORY,
        .holdEffectParam = 0,
        .description = sDarkMemoryDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_DARK,
        .flingPower = 50,
    },

    [ITEM_STEEL_MEMORY] =
    {
        .name = _("Steel Memory"),
        .price = 1000,
        .holdEffect = HOLD_EFFECT_MEMORY,
        .holdEffectParam = 0,
        .description = sSteelMemoryDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_STEEL,
        .flingPower = 50,
    },

    [ITEM_FAIRY_MEMORY] =
    {
        .name = _("Fairy Memory"),
        .price = 1000,
        .holdEffect = HOLD_EFFECT_MEMORY,
        .holdEffectParam = 0,
        .description = sFairyMemoryDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_FAIRY,
        .flingPower = 50,
    },

    [ITEM_RUSTED_SWORD] =
    {
        .name = _("RustedSword"),
        .price = 0,
        .description = sRustedSwordDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_RELIC,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_RUSTED_SHIELD] =
    {
        .name = _("RustedShield"),
        .price = 0,
        .description = sRustedShieldDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_RELIC,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

// Colored Orbs

    [ITEM_RED_ORB] =
    {
        .name = _("Red Orb"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_PRIMAL_ORB,
        .description = sRedOrbDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_BLUE_ORB] =
    {
        .name = _("Blue Orb"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_PRIMAL_ORB,
        .description = sBlueOrbDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

// Mega Stones

    [ITEM_VENUSAURITE] =
    {
        .name = _("Venusaurite"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = sVenusauriteDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_MEGA_Z,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
    },

    [ITEM_CHARIZARDITE_X] =
    {
        .name = _("CharizarditeX"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = sCharizarditeDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_MEGA_Z,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
    },

    [ITEM_CHARIZARDITE_Y] =
    {
        .name = _("CharizarditeY"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = sCharizarditeDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_MEGA_Z,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
    },

    [ITEM_BLASTOISINITE] =
    {
        .name = _("Blastoisinite"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = sBlastoisiniteDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_MEGA_Z,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
    },

    [ITEM_BEEDRILLITE] =
    {
        .name = _("Beedrillite"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = sBeedrilliteDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_MEGA_Z,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
    },

    [ITEM_PIDGEOTITE] =
    {
        .name = _("Pidgeotite"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = sPidgeotiteDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_MEGA_Z,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
    },

    [ITEM_ALAKAZITE] =
    {
        .name = _("Alakazite"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = sAlakaziteDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_MEGA_Z,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
    },

    [ITEM_SLOWBRONITE] =
    {
        .name = _("Slowbronite"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = sSlowbroniteDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_MEGA_Z,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
    },

    [ITEM_GENGARITE] =
    {
        .name = _("Gengarite"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = sGengariteDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_MEGA_Z,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
    },

    [ITEM_KANGASKHANITE] =
    {
        .name = _("Kangaskhanite"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = sKangaskhaniteDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_MEGA_Z,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
    },

    [ITEM_PINSIRITE] =
    {
        .name = _("Pinsirite"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = sPinsiriteDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_MEGA_Z,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
    },

    [ITEM_GYARADOSITE] =
    {
        .name = _("Gyaradosite"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = sGyaradositeDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_MEGA_Z,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
    },

    [ITEM_AERODACTYLITE] =
    {
        .name = _("Aerodactylite"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = sAerodactyliteDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_MEGA_Z,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
    },

    [ITEM_MEWTWONITE_X] =
    {
        .name = _("Mewtwonite X"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = sMewtwoniteDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_MEGA_Z,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
    },

    [ITEM_MEWTWONITE_Y] =
    {
        .name = _("Mewtwonite Y"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = sMewtwoniteDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_MEGA_Z,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
    },

    [ITEM_AMPHAROSITE] =
    {
        .name = _("Ampharosite"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = sAmpharositeDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_MEGA_Z,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
    },

    [ITEM_STEELIXITE] =
    {
        .name = _("Steelixite"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = sSteelixiteDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_MEGA_Z,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
    },

    [ITEM_SCIZORITE] =
    {
        .name = _("Scizorite"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = sScizoriteDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_MEGA_Z,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
    },

    [ITEM_HERACRONITE] =
    {
        .name = _("Heracronite"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = sHeracroniteDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_MEGA_Z,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
    },

    [ITEM_HOUNDOOMINITE] =
    {
        .name = _("Houndoominite"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = sHoundoominiteDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_MEGA_Z,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
    },

    [ITEM_TYRANITARITE] =
    {
        .name = _("Tyranitarite"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = sTyranitariteDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_MEGA_Z,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
    },

    [ITEM_SCEPTILITE] =
    {
        .name = _("Sceptilite"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = sSceptiliteDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_MEGA_Z,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
    },

    [ITEM_BLAZIKENITE] =
    {
        .name = _("Blazikenite"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = sBlazikeniteDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_MEGA_Z,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
    },

    [ITEM_SWAMPERTITE] =
    {
        .name = _("Swampertite"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = sSwampertiteDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_MEGA_Z,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
    },

    [ITEM_GARDEVOIRITE] =
    {
        .name = _("Gardevoirite"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = sGardevoiriteDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_MEGA_Z,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
    },

    [ITEM_SABLENITE] =
    {
        .name = _("Sablenite"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = sSableniteDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_MEGA_Z,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
    },

    [ITEM_MAWILITE] =
    {
        .name = _("Mawilite"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = sMawiliteDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_MEGA_Z,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
    },

    [ITEM_AGGRONITE] =
    {
        .name = _("Aggronite"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = sAggroniteDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_MEGA_Z,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
    },

    [ITEM_MEDICHAMITE] =
    {
        .name = _("Medichamite"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = sMedichamiteDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_MEGA_Z,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
    },

    [ITEM_MANECTITE] =
    {
        .name = _("Manectite"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = sManectiteDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_MEGA_Z,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
    },

    [ITEM_SHARPEDONITE] =
    {
        .name = _("Sharpedonite"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = sSharpedoniteDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_MEGA_Z,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
    },

    [ITEM_CAMERUPTITE] =
    {
        .name = _("Cameruptite"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = sCameruptiteDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_MEGA_Z,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
    },

    [ITEM_ALTARIANITE] =
    {
        .name = _("Altarianite"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = sAltarianiteDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_MEGA_Z,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
    },

    [ITEM_BANETTITE] =
    {
        .name = _("Banettite"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = sBanettiteDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_MEGA_Z,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
    },

    [ITEM_ABSOLITE] =
    {
        .name = _("Absolite"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = sAbsoliteDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_MEGA_Z,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
    },

    [ITEM_GLALITITE] =
    {
        .name = _("Glalitite"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = sGlalititeDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_MEGA_Z,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
    },

    [ITEM_SALAMENCITE] =
    {
        .name = _("Salamencite"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = sSalamenciteDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_MEGA_Z,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
    },

    [ITEM_METAGROSSITE] =
    {
        .name = _("Metagrossite"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = sMetagrossiteDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_MEGA_Z,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
    },

    [ITEM_LATIASITE] =
    {
        .name = _("Latiasite"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = sLatiasiteDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_MEGA_Z,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
    },

    [ITEM_LATIOSITE] =
    {
        .name = _("Latiosite"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = sLatiositeDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_MEGA_Z,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
    },

    [ITEM_LOPUNNITE] =
    {
        .name = _("Lopunnite"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = sLopunniteDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_MEGA_Z,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
    },

    [ITEM_GARCHOMPITE] =
    {
        .name = _("Garchompite"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = sGarchompiteDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_MEGA_Z,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
    },

    [ITEM_LUCARIONITE] =
    {
        .name = _("Lucarionite"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = sLucarioniteDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_MEGA_Z,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
    },

    [ITEM_ABOMASITE] =
    {
        .name = _("Abomasite"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = sAbomasiteDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_MEGA_Z,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
    },

    [ITEM_GALLADITE] =
    {
        .name = _("Galladite"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = sGalladiteDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_MEGA_Z,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
    },

    [ITEM_AUDINITE] =
    {
        .name = _("Audinite"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = sAudiniteDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_MEGA_Z,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
    },

    [ITEM_DIANCITE] =
    {
        .name = _("Diancite"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = sDianciteDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_MEGA_Z,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
    },

// Gems

    [ITEM_NORMAL_GEM] =
    {
        .name = _("Normal Gem"),
        .price = 4000,
        .holdEffect = HOLD_EFFECT_GEMS,
        .holdEffectParam = GEM_BOOST_PARAM,
        .description = sNormalGemDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_NORMAL,
    },

    [ITEM_FIRE_GEM] =
    {
        .name = _("Fire Gem"),
        .price = 4000,
        .holdEffect = HOLD_EFFECT_GEMS,
        .holdEffectParam = GEM_BOOST_PARAM,
        .description = sFireGemDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_FIRE,
    },

    [ITEM_WATER_GEM] =
    {
        .name = _("Water Gem"),
        .price = 4000,
        .holdEffect = HOLD_EFFECT_GEMS,
        .holdEffectParam = GEM_BOOST_PARAM,
        .description = sWaterGemDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_WATER,
    },

    [ITEM_ELECTRIC_GEM] =
    {
        .name = _("Electric Gem"),
        .price = 4000,
        .holdEffect = HOLD_EFFECT_GEMS,
        .holdEffectParam = GEM_BOOST_PARAM,
        .description = sElectricGemDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_ELECTRIC,
    },

    [ITEM_GRASS_GEM] =
    {
        .name = _("Grass Gem"),
        .price = 4000,
        .holdEffect = HOLD_EFFECT_GEMS,
        .holdEffectParam = GEM_BOOST_PARAM,
        .description = sGrassGemDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_GRASS,
    },

    [ITEM_ICE_GEM] =
    {
        .name = _("Ice Gem"),
        .price = 4000,
        .holdEffect = HOLD_EFFECT_GEMS,
        .holdEffectParam = GEM_BOOST_PARAM,
        .description = sIceGemDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_ICE,
    },

    [ITEM_FIGHTING_GEM] =
    {
        .name = _("Fighting Gem"),
        .price = 4000,
        .holdEffect = HOLD_EFFECT_GEMS,
        .holdEffectParam = GEM_BOOST_PARAM,
        .description = sFightingGemDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_FIGHTING,
    },

    [ITEM_POISON_GEM] =
    {
        .name = _("Poison Gem"),
        .price = 4000,
        .holdEffect = HOLD_EFFECT_GEMS,
        .holdEffectParam = GEM_BOOST_PARAM,
        .description = sPoisonGemDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_POISON,
    },

    [ITEM_GROUND_GEM] =
    {
        .name = _("Ground Gem"),
        .price = 4000,
        .holdEffect = HOLD_EFFECT_GEMS,
        .holdEffectParam = GEM_BOOST_PARAM,
        .description = sGroundGemDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_GROUND,
    },

    [ITEM_FLYING_GEM] =
    {
        .name = _("Flying Gem"),
        .price = 4000,
        .holdEffect = HOLD_EFFECT_GEMS,
        .holdEffectParam = GEM_BOOST_PARAM,
        .description = sFlyingGemDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_FLYING,
    },

    [ITEM_PSYCHIC_GEM] =
    {
        .name = _("Psychic Gem"),
        .price = 4000,
        .holdEffect = HOLD_EFFECT_GEMS,
        .holdEffectParam = GEM_BOOST_PARAM,
        .description = sPsychicGemDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_PSYCHIC,
    },

    [ITEM_BUG_GEM] =
    {
        .name = _("Bug Gem"),
        .price = 4000,
        .holdEffect = HOLD_EFFECT_GEMS,
        .holdEffectParam = GEM_BOOST_PARAM,
        .description = sBugGemDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_BUG,
    },

    [ITEM_ROCK_GEM] =
    {
        .name = _("Rock Gem"),
        .price = 4000,
        .holdEffect = HOLD_EFFECT_GEMS,
        .holdEffectParam = GEM_BOOST_PARAM,
        .description = sRockGemDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_ROCK,
    },

    [ITEM_GHOST_GEM] =
    {
        .name = _("Ghost Gem"),
        .price = 4000,
        .holdEffect = HOLD_EFFECT_GEMS,
        .holdEffectParam = GEM_BOOST_PARAM,
        .description = sGhostGemDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_GHOST,
    },

    [ITEM_DRAGON_GEM] =
    {
        .name = _("Dragon Gem"),
        .price = 4000,
        .holdEffect = HOLD_EFFECT_GEMS,
        .holdEffectParam = GEM_BOOST_PARAM,
        .description = sDragonGemDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_DRAGON,
    },

    [ITEM_DARK_GEM] =
    {
        .name = _("Dark Gem"),
        .price = 4000,
        .holdEffect = HOLD_EFFECT_GEMS,
        .holdEffectParam = GEM_BOOST_PARAM,
        .description = sDarkGemDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_DARK,
    },

    [ITEM_STEEL_GEM] =
    {
        .name = _("Steel Gem"),
        .price = 4000,
        .holdEffect = HOLD_EFFECT_GEMS,
        .holdEffectParam = GEM_BOOST_PARAM,
        .description = sSteelGemDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_STEEL,
    },

    [ITEM_FAIRY_GEM] =
    {
        .name = _("Fairy Gem"),
        .price = 4000,
        .holdEffect = HOLD_EFFECT_GEMS,
        .holdEffectParam = GEM_BOOST_PARAM,
        .description = sFairyGemDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_FAIRY,
    },

// Z-Crystals

    [ITEM_NORMALIUM_Z] =
    {
        .name = _("Normalium Z"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
        .description = sNormaliumZDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_MEGA_Z,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_NORMAL
    },

    [ITEM_FIRIUM_Z] =
    {
        .name = _("Firium Z"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
        .description = sFiriumZDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_MEGA_Z,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_FIRE
    },

    [ITEM_WATERIUM_Z] =
    {
        .name = _("Waterium Z"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
        .description = sWateriumZDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_MEGA_Z,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_WATER
    },

    [ITEM_ELECTRIUM_Z] =
    {
        .name = _("Electrium Z"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
        .description = sElectriumZDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_MEGA_Z,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_ELECTRIC
    },

    [ITEM_GRASSIUM_Z] =
    {
        .name = _("Grassium Z"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
        .description = sGrassiumZDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_MEGA_Z,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_GRASS
    },

    [ITEM_ICIUM_Z] =
    {
        .name = _("Icium Z"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
        .description = sIciumZDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_MEGA_Z,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_ICE
    },

    [ITEM_FIGHTINIUM_Z] =
    {
        .name = _("Fightinium Z"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
        .description = sFightiniumZDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_MEGA_Z,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_FIGHTING
    },

    [ITEM_POISONIUM_Z] =
    {
        .name = _("Poisonium Z"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
        .description = sPoisoniumZDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_MEGA_Z,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_POISON
    },

    [ITEM_GROUNDIUM_Z] =
    {
        .name = _("Groundium Z"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
        .description = sGroundiumZDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_MEGA_Z,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_GROUND
    },

    [ITEM_FLYINIUM_Z] =
    {
        .name = _("Flyinium Z"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
        .description = sFlyiniumZDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_MEGA_Z,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_FLYING
    },

    [ITEM_PSYCHIUM_Z] =
    {
        .name = _("Psychium Z"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
        .description = sPsychiumZDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_MEGA_Z,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_PSYCHIC
    },

    [ITEM_BUGINIUM_Z] =
    {
        .name = _("Buginium Z"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
        .description = sBuginiumZDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_MEGA_Z,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_BUG
    },

    [ITEM_ROCKIUM_Z] =
    {
        .name = _("Rockium Z"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
        .description = sRockiumZDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_MEGA_Z,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_ROCK
    },

    [ITEM_GHOSTIUM_Z] =
    {
        .name = _("Ghostium Z"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
        .description = sGhostiumZDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_MEGA_Z,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_GHOST
    },

    [ITEM_DRAGONIUM_Z] =
    {
        .name = _("Dragonium Z"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
        .description = sDragoniumZDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_MEGA_Z,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_DRAGON
    },

    [ITEM_DARKINIUM_Z] =
    {
        .name = _("Darkinium Z"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
        .description = sDarkiniumZDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_MEGA_Z,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_DARK
    },

    [ITEM_STEELIUM_Z] =
    {
        .name = _("Steelium Z"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
        .description = sSteeliumZDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_MEGA_Z,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_STEEL
    },

    [ITEM_FAIRIUM_Z] =
    {
        .name = _("Fairium Z"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
        .description = sFairiumZDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_MEGA_Z,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_FAIRY
    },

    [ITEM_PIKANIUM_Z] =
    {
        .name = _("Pikanium Z"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
        .description = sPikaniumZDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_MEGA_Z,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 255  // signature z move
    },

    [ITEM_EEVIUM_Z] =
    {
        .name = _("Eevium Z"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
        .description = sEeviumZDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_MEGA_Z,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 255  // signature z move
    },

    [ITEM_SNORLIUM_Z] =
    {
        .name = _("Snorlium Z"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
        .description = sSnorliumZDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_MEGA_Z,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 255  // signature z move
    },

    [ITEM_MEWNIUM_Z] =
    {
        .name = _("Mewnium Z"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
        .description = sMewniumZDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_MEGA_Z,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 255  // signature z move
    },

    [ITEM_DECIDIUM_Z] =
    {
        .name = _("Decidium Z"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
        .description = sDecidiumZDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_MEGA_Z,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 255  // signature z move
    },

    [ITEM_INCINIUM_Z] =
    {
        .name = _("Incinium Z"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
        .description = sInciniumZDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_MEGA_Z,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 255  // signature z move
    },

    [ITEM_PRIMARIUM_Z] =
    {
        .name = _("Primarium Z"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
        .description = sPrimariumZDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_MEGA_Z,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 255  // signature z move
    },

    [ITEM_LYCANIUM_Z] =
    {
        .name = _("Lycanium Z"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
        .description = sLycaniumZDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_MEGA_Z,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 255  // signature z move
    },

    [ITEM_MIMIKIUM_Z] =
    {
        .name = _("Mimikium Z"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
        .description = sMimikiumZDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_MEGA_Z,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 255  // signature z move
    },

    [ITEM_KOMMONIUM_Z] =
    {
        .name = _("Kommonium Z"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
        .description = sKommoniumZDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_MEGA_Z,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 255  // signature z move
    },

    [ITEM_TAPUNIUM_Z] =
    {
        .name = _("Tapunium Z"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
        .description = sTapuniumZDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_MEGA_Z,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 255  //signature z move
    },

    [ITEM_SOLGANIUM_Z] =
    {
        .name = _("Solganium Z"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
        .description = sSolganiumZDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_MEGA_Z,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 255  // signature z move
    },

    [ITEM_LUNALIUM_Z] =
    {
        .name = _("Lunalium Z"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
        .description = sLunaliumZDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_MEGA_Z,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 255  // signature z move
    },

    [ITEM_MARSHADIUM_Z] =
    {
        .name = _("Marshadium Z"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
        .description = sMarshadiumZDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_MEGA_Z,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 255  // signature z move
    },

    [ITEM_ALORAICHIUM_Z] =
    {
        .name = _("Aloraichium Z"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
        .description = sAloraichiumZDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_MEGA_Z,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 255  // signature z move
    },

    [ITEM_PIKASHUNIUM_Z] =
    {
        .name = _("Pikashunium Z"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
        .description = sPikashuniumZDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_MEGA_Z,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 255  // signature z move
    },

    [ITEM_ULTRANECROZIUM_Z] =
    {
        .name = _("U-Necrozium Z"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
        .description = sUltranecroziumZDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_MEGA_Z,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 255  //signature z move
    },

// Species-specific Held Items

    [ITEM_LIGHT_BALL] =
    {
        .name = _("Light Ball"),
        .price = 1000,
        .holdEffect = HOLD_EFFECT_LIGHT_BALL,
        .description = sLightBallDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
    },

    [ITEM_LEEK] =
    {
        .name = _("Leek"),
        .price = 1000,
        .holdEffect = HOLD_EFFECT_LEEK,
        .description = sLeekDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 60,
    },

    [ITEM_THICK_CLUB] =
    {
        .name = _("Thick Club"),
        .price = 1000,
        .holdEffect = HOLD_EFFECT_THICK_CLUB,
        .description = sThickClubDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 90,
    },

    [ITEM_LUCKY_PUNCH] =
    {
        .name = _("Lucky Punch"),
        .price = 1000,
        .holdEffect = HOLD_EFFECT_LUCKY_PUNCH,
        .description = sLuckyPunchDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 40,
    },

    [ITEM_METAL_POWDER] =
    {
        .name = _("Metal Powder"),
        .price = 1000,
        .holdEffect = HOLD_EFFECT_METAL_POWDER,
        .description = sMetalPowderDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_QUICK_POWDER] =
    {
        .name = _("Quick Powder"),
        .price = 1000,
        .holdEffect = HOLD_EFFECT_QUICK_POWDER,
        .description = sQuickPowderDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_DEEP_SEA_SCALE] =
    {
        .name = _("DeepSeaScale"),
        .price = 2000,
        .holdEffect = HOLD_EFFECT_DEEP_SEA_SCALE,
        .description = sDeepSeaScaleDesc,
        .pocket = POCKET_ITEMS,
        .type = EVO_HELD_ITEM_TYPE,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = EVO_HELD_ITEM_FIELD_FUNC,
        .flingPower = 30,
    },

    [ITEM_DEEP_SEA_TOOTH] =
    {
        .name = _("DeepSeaTooth"),
        .price = 2000,
        .holdEffect = HOLD_EFFECT_DEEP_SEA_TOOTH,
        .description = sDeepSeaToothDesc,
        .pocket = POCKET_ITEMS,
        .type = EVO_HELD_ITEM_TYPE,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = EVO_HELD_ITEM_FIELD_FUNC,
        .flingPower = 90,
    },

    [ITEM_SOUL_DEW] =
    {
        .name = _("Soul Dew"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_SOUL_DEW,
        .holdEffectParam = B_SOUL_DEW_BOOST >= GEN_7 ? 20 : 50,
        .description = sSoulDewDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
    },

    [ITEM_ADAMANT_ORB] =
    {
        .name = _("Adamant Orb"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_ADAMANT_ORB,
        .holdEffectParam = 20,
        .description = sAdamantOrbDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 60,
    },

    [ITEM_LUSTROUS_ORB] =
    {
        .name = _("Lustrous Orb"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_LUSTROUS_ORB,
        .holdEffectParam = 20,
        .description = sLustrousOrbDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 60,
    },

    [ITEM_GRISEOUS_ORB] =
    {
        .name = _("Griseous Orb"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_GRISEOUS_ORB,
        .holdEffectParam = 20,
        .description = sGriseousOrbDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 60,
    },

// Incenses

    [ITEM_SEA_INCENSE] =
    {
        .name = _("Sea Incense"),
        .price = 2000,
        .holdEffect = HOLD_EFFECT_WATER_POWER,
        .holdEffectParam = 20,
        .description = sSeaIncenseDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_LAX_INCENSE] =
    {
        .name = _("Lax Incense"),
        .price = 5000,
        .holdEffect = HOLD_EFFECT_EVASION_UP,
        .holdEffectParam = 10,
        .description = sLaxIncenseDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_ODD_INCENSE] =
    {
        .name = _("Odd Incense"),
        .price = 2000,
        .holdEffect = HOLD_EFFECT_PSYCHIC_POWER,
        .holdEffectParam = 20,
        .description = sOddIncenseDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_ROCK_INCENSE] =
    {
        .name = _("Rock Incense"),
        .price = 2000,
        .holdEffect = HOLD_EFFECT_ROCK_POWER,
        .holdEffectParam = 20,
        .description = sRockIncenseDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_FULL_INCENSE] =
    {
        .name = _("Full Incense"),
        .price = 5000,
        .holdEffect = HOLD_EFFECT_LAGGING_TAIL,
        .holdEffectParam = 5,
        .description = sFullIncenseDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_WAVE_INCENSE] =
    {
        .name = _("Wave Incense"),
        .price = 2000,
        .holdEffect = HOLD_EFFECT_WATER_POWER,
        .holdEffectParam = 20,
        .description = sWaveIncenseDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_ROSE_INCENSE] =
    {
        .name = _("Rose Incense"),
        .price = 2000,
        .holdEffect = HOLD_EFFECT_GRASS_POWER,
        .holdEffectParam = 20,
        .description = sRoseIncenseDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_LUCK_INCENSE] =
    {
        .name = _("Luck Incense"),
        .price = 11000,
        .holdEffect = HOLD_EFFECT_DOUBLE_PRIZE,
        .description = sLuckIncenseDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_PURE_INCENSE] =
    {
        .name = _("Pure Incense"),
        .price = 6000,
        .holdEffect = HOLD_EFFECT_REPEL,
        .description = sPureIncenseDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

// Contest Scarves

    [ITEM_RED_SCARF] =
    {
        .name = _("Red Scarf"),
        .price = 100,
        .description = sRedScarfDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_BLUE_SCARF] =
    {
        .name = _("Blue Scarf"),
        .price = 100,
        .description = sBlueScarfDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_PINK_SCARF] =
    {
        .name = _("Pink Scarf"),
        .price = 100,
        .description = sPinkScarfDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_GREEN_SCARF] =
    {
        .name = _("Green Scarf"),
        .price = 100,
        .description = sGreenScarfDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_YELLOW_SCARF] =
    {
        .name = _("Yellow Scarf"),
        .price = 100,
        .description = sYellowScarfDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

// EV Gain Modifiers

    [ITEM_MACHO_BRACE] =
    {
        .name = _("Macho Brace"),
        .price = 3000,
        .holdEffect = HOLD_EFFECT_MACHO_BRACE,
        .description = sMachoBraceDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_POWER_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 60,
    },

    [ITEM_POWER_WEIGHT] =
    {
        .name = _("Power Weight"),
        .price = 3000,
        .holdEffect = HOLD_EFFECT_POWER_ITEM,
        .holdEffectParam = 8,
        .description = sPowerWeightDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_POWER_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = STAT_HP,
        .flingPower = 70,
    },

    [ITEM_POWER_BRACER] =
    {
        .name = _("Power Bracer"),
        .price = 3000,
        .holdEffect = HOLD_EFFECT_POWER_ITEM,
        .holdEffectParam = 8,
        .description = sPowerBracerDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_POWER_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = STAT_ATK,
        .flingPower = 70,
    },

    [ITEM_POWER_BELT] =
    {
        .name = _("Power Belt"),
        .price = 3000,
        .holdEffect = HOLD_EFFECT_POWER_ITEM,
        .holdEffectParam = 8,
        .description = sPowerBeltDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_POWER_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = STAT_DEF,
        .flingPower = 70,
    },

    [ITEM_POWER_LENS] =
    {
        .name = _("Power Lens"),
        .price = 3000,
        .holdEffect = HOLD_EFFECT_POWER_ITEM,
        .holdEffectParam = 8,
        .description = sPowerLensDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_POWER_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = STAT_SPATK,
        .flingPower = 70,
    },

    [ITEM_POWER_BAND] =
    {
        .name = _("Power Band"),
        .price = 3000,
        .holdEffect = HOLD_EFFECT_POWER_ITEM,
        .holdEffectParam = 8,
        .description = sPowerBandDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_POWER_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = STAT_SPDEF,
        .flingPower = 70,
    },

    [ITEM_POWER_ANKLET] =
    {
        .name = _("Power Anklet"),
        .price = 3000,
        .holdEffect = HOLD_EFFECT_POWER_ITEM,
        .holdEffectParam = 8,
        .description = sPowerAnkletDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_POWER_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = STAT_SPEED,
        .flingPower = 70,
    },

// Type-boosting Held Items

    [ITEM_SILK_SCARF] =
    {
        .name = _("Silk Scarf"),
        .price = 1000,
        .holdEffect = HOLD_EFFECT_NORMAL_POWER,
        .holdEffectParam = TYPE_BOOST_PARAM,
        .description = sSilkScarfDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_CHARCOAL] =
    {
        .name = _("Charcoal"),
        .price = 1000,
        .holdEffect = HOLD_EFFECT_FIRE_POWER,
        .holdEffectParam = TYPE_BOOST_PARAM,
        .description = sCharcoalDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
    },

    [ITEM_MYSTIC_WATER] =
    {
        .name = _("Mystic Water"),
        .price = 1000,
        .holdEffect = HOLD_EFFECT_WATER_POWER,
        .holdEffectParam = TYPE_BOOST_PARAM,
        .description = sMysticWaterDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
    },

    [ITEM_MAGNET] =
    {
        .name = _("Magnet"),
        .price = 1000,
        .holdEffect = HOLD_EFFECT_ELECTRIC_POWER,
        .holdEffectParam = TYPE_BOOST_PARAM,
        .description = sMagnetDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
    },

    [ITEM_MIRACLE_SEED] =
    {
        .name = _("Miracle Seed"),
        .price = 1000,
        .holdEffect = HOLD_EFFECT_GRASS_POWER,
        .holdEffectParam = TYPE_BOOST_PARAM,
        .description = sMiracleSeedDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
    },

    [ITEM_NEVER_MELT_ICE] =
    {
        .name = _("Never-MeltIce"),
        .price = 1000,
        .holdEffect = HOLD_EFFECT_ICE_POWER,
        .holdEffectParam = TYPE_BOOST_PARAM,
        .description = sNeverMeltIceDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
    },

    [ITEM_BLACK_BELT] =
    {
        .name = _("Black Belt"),
        .price = 1000,
        .holdEffect = HOLD_EFFECT_FIGHTING_POWER,
        .holdEffectParam = TYPE_BOOST_PARAM,
        .description = sBlackBeltDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
    },

    [ITEM_POISON_BARB] =
    {
        .name = _("Poison Barb"),
        .price = 1000,
        .holdEffect = HOLD_EFFECT_POISON_POWER,
        .holdEffectParam = TYPE_BOOST_PARAM,
        .description = sPoisonBarbDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 70,
    },

    [ITEM_SOFT_SAND] =
    {
        .name = _("Soft Sand"),
        .price = 1000,
        .holdEffect = HOLD_EFFECT_GROUND_POWER,
        .holdEffectParam = TYPE_BOOST_PARAM,
        .description = sSoftSandDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_SHARP_BEAK] =
    {
        .name = _("Sharp Beak"),
        .price = 1000,
        .holdEffect = HOLD_EFFECT_FLYING_POWER,
        .holdEffectParam = TYPE_BOOST_PARAM,
        .description = sSharpBeakDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 50,
    },

    [ITEM_TWISTED_SPOON] =
    {
        .name = _("Twisted Spoon"),
        .price = 1000,
        .holdEffect = HOLD_EFFECT_PSYCHIC_POWER,
        .holdEffectParam = TYPE_BOOST_PARAM,
        .description = sTwistedSpoonDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
    },

    [ITEM_SILVER_POWDER] =
    {
        .name = _("Silver Powder"),
        .price = 1000,
        .holdEffect = HOLD_EFFECT_BUG_POWER,
        .holdEffectParam = TYPE_BOOST_PARAM,
        .description = sSilverPowderDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_HARD_STONE] =
    {
        .name = _("Hard Stone"),
        .price = 1000,
        .holdEffect = HOLD_EFFECT_ROCK_POWER,
        .holdEffectParam = TYPE_BOOST_PARAM,
        .description = sHardStoneDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 100,
    },

    [ITEM_SPELL_TAG] =
    {
        .name = _("Spell Tag"),
        .price = 1000,
        .holdEffect = HOLD_EFFECT_GHOST_POWER,
        .holdEffectParam = TYPE_BOOST_PARAM,
        .description = sSpellTagDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
    },

    [ITEM_DRAGON_FANG] =
    {
        .name = _("Dragon Fang"),
        .price = 1000,
        .holdEffect = HOLD_EFFECT_DRAGON_POWER,
        .holdEffectParam = TYPE_BOOST_PARAM,
        .description = sDragonFangDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 70,
    },

    [ITEM_BLACK_GLASSES] =
    {
        .name = _("Black Glasses"),
        .price = 1000,
        .holdEffect = HOLD_EFFECT_DARK_POWER,
        .holdEffectParam = TYPE_BOOST_PARAM,
        .description = sBlackGlassesDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
    },

    [ITEM_METAL_COAT] =
    {
        .name = _("Metal Coat"),
        .price = 2000,
        .holdEffect = HOLD_EFFECT_STEEL_POWER,
        .holdEffectParam = TYPE_BOOST_PARAM,
        .description = sMetalCoatDesc,
        .pocket = POCKET_ITEMS,
        .type = EVO_HELD_ITEM_TYPE,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = EVO_HELD_ITEM_FIELD_FUNC,
        .flingPower = 30,
    },

// Choice Items

    [ITEM_CHOICE_BAND] =
    {
        .name = _("Choice Band"),
        .price = 4000,
        .holdEffect = HOLD_EFFECT_CHOICE_BAND,
        .description = sChoiceBandDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_CHOICE_SPECS] =
    {
        .name = _("Choice Specs"),
        .price = 4000,
        .holdEffect = HOLD_EFFECT_CHOICE_SPECS,
        .description = sChoiceSpecsDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_CHOICE_SCARF] =
    {
        .name = _("Choice Scarf"),
        .price = 4000,
        .holdEffect = HOLD_EFFECT_CHOICE_SCARF,
        .description = sChoiceScarfDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

// Status Orbs

    [ITEM_FLAME_ORB] =
    {
        .name = _("Flame Orb"),
        .price = 4000,
        .holdEffect = HOLD_EFFECT_FLAME_ORB,
        .description = sFlameOrbDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
    },

    [ITEM_TOXIC_ORB] =
    {
        .name = _("Toxic Orb"),
        .price = 4000,
        .holdEffect = HOLD_EFFECT_TOXIC_ORB,
        .description = sToxicOrbDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
    },

// Weather Rocks

    [ITEM_DAMP_ROCK] =
    {
        .name = _("Damp Rock"),
        .price = 4000,
        .holdEffect = HOLD_EFFECT_DAMP_ROCK,
        .description = sDampRockDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 60,
    },

    [ITEM_HEAT_ROCK] =
    {
        .name = _("Heat Rock"),
        .price = 4000,
        .holdEffect = HOLD_EFFECT_HEAT_ROCK,
        .description = sHeatRockDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 60,
    },

    [ITEM_SMOOTH_ROCK] =
    {
        .name = _("Smooth Rock"),
        .price = 4000,
        .holdEffect = HOLD_EFFECT_SMOOTH_ROCK,
        .description = sSmoothRockDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_ICY_ROCK] =
    {
        .name = _("Icy Rock"),
        .price = 4000,
        .holdEffect = HOLD_EFFECT_ICY_ROCK,
        .description = sIcyRockDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 40,
    },

// Terrain Seeds

    [ITEM_ELECTRIC_SEED] =
    {
        .name = _("Electric Seed"),
        .price = 4000,
        .holdEffect = HOLD_EFFECT_SEEDS,
        .holdEffectParam = HOLD_EFFECT_PARAM_ELECTRIC_TERRAIN,
        .description = sElectricSeedDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_PSYCHIC_SEED] =
    {
        .name = _("Psychic Seed"),
        .price = 4000,
        .holdEffect = HOLD_EFFECT_SEEDS,
        .holdEffectParam = HOLD_EFFECT_PARAM_PSYCHIC_TERRAIN,
        .description = sPsychicSeedDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_MISTY_SEED] =
    {
        .name = _("Misty Seed"),
        .price = 4000,
        .holdEffect = HOLD_EFFECT_SEEDS,
        .holdEffectParam = HOLD_EFFECT_PARAM_MISTY_TERRAIN,
        .description = sMistySeedDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_GRASSY_SEED] =
    {
        .name = _("Grassy Seed"),
        .price = 4000,
        .holdEffect = HOLD_EFFECT_SEEDS,
        .holdEffectParam = HOLD_EFFECT_PARAM_GRASSY_TERRAIN,
        .description = sGrassySeedDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

// Type-activated Stat Modifiers

    [ITEM_ABSORB_BULB] =
    {
        .name = _("Absorb Bulb"),
        .price = 4000,
        .holdEffect = HOLD_EFFECT_ABSORB_BULB,
        .holdEffectParam = 0,
        .description = sAbsorbBulbDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
    },

    [ITEM_CELL_BATTERY] =
    {
        .name = _("Cell Battery"),
        .price = 4000,
        .holdEffect = HOLD_EFFECT_CELL_BATTERY,
        .holdEffectParam = 0,
        .description = sCellBatteryDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
    },

    [ITEM_LUMINOUS_MOSS] =
    {
        .name = _("Luminous Moss"),
        .price = 4000,
        .holdEffect = HOLD_EFFECT_LUMINOUS_MOSS,
        .holdEffectParam = 0,
        .description = sLuminousMossDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
    },

    [ITEM_SNOWBALL] =
    {
        .name = _("Snowball"),
        .price = 4000,
        .holdEffect = HOLD_EFFECT_SNOWBALL,
        .holdEffectParam = 0,
        .description = sSnowballDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
    },

// Misc. Held Items

    [ITEM_BRIGHT_POWDER] =
    {
        .name = _("Bright Powder"),
        .price = 4000,
        .holdEffect = HOLD_EFFECT_EVASION_UP,
        .holdEffectParam = 10,
        .description = sBrightPowderDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_WHITE_HERB] =
    {
        .name = _("White Herb"),
        .price = 4000,
        .holdEffect = HOLD_EFFECT_RESTORE_STATS,
        .description = sWhiteHerbDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_EXP_SHARE] =
    {
        .name = _("Exp. Share"),
        .price = 3000,
        .holdEffect = HOLD_EFFECT_EXP_SHARE,
        .description = sExpShareDesc,
        .pocket = I_EXP_SHARE_ITEM >= GEN_6 ? POCKET_KEY_ITEMS : POCKET_ITEMS,
        .type = ITEM_USE_FIELD,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_ExpShare,
        .flingPower = 30,
    },

    [ITEM_QUICK_CLAW] =
    {
        .name = _("Quick Claw"),
        .price = 4000,
        .holdEffect = HOLD_EFFECT_QUICK_CLAW,
        .holdEffectParam = 20,
        .description = sQuickClawDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
    },

    [ITEM_SOOTHE_BELL] =
    {
        .name = _("Soothe Bell"),
        .price = 4000,
        .holdEffect = HOLD_EFFECT_FRIENDSHIP_UP,
        .description = sSootheBellDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_MENTAL_HERB] =
    {
        .name = _("Mental Herb"),
        .price = 4000,
        .holdEffect = HOLD_EFFECT_MENTAL_HERB,
        .description = sMentalHerbDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_KINGS_ROCK] =
    {
        .name = _("King's Rock"),
        .price = 5000,
        .holdEffect = HOLD_EFFECT_FLINCH,
        .holdEffectParam = 10,
        .description = sKingsRockDesc,
        .pocket = POCKET_ITEMS,
        .type = EVO_HELD_ITEM_TYPE,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = EVO_HELD_ITEM_FIELD_FUNC,
        .flingPower = 30,
    },

    [ITEM_AMULET_COIN] =
    {
        .name = _("Amulet Coin"),
        .price = 10000,
        .holdEffect = HOLD_EFFECT_DOUBLE_PRIZE,
        .description = sAmuletCoinDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
    },

    [ITEM_CLEANSE_TAG] =
    {
        .name = _("Cleanse Tag"),
        .price = 5000,
        .holdEffect = HOLD_EFFECT_REPEL,
        .description = sCleanseTagDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
    },

    [ITEM_SMOKE_BALL] =
    {
        .name = _("Smoke Ball"),
        .price = 4000,
        .holdEffect = HOLD_EFFECT_CAN_ALWAYS_RUN,
        .description = sSmokeBallDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
    },

    [ITEM_FOCUS_BAND] =
    {
        .name = _("Focus Band"),
        .price = 4000,
        .holdEffect = HOLD_EFFECT_FOCUS_BAND,
        .holdEffectParam = 10,
        .description = sFocusBandDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_LUCKY_EGG] =
    {
        .name = _("Lucky Egg"),
        .price = 10000,
        .holdEffect = HOLD_EFFECT_LUCKY_EGG,
        .description = sLuckyEggDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
    },

    [ITEM_SCOPE_LENS] =
    {
        .name = _("Scope Lens"),
        .price = 4000,
        .holdEffect = HOLD_EFFECT_SCOPE_LENS,
        .description = sScopeLensDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
    },

    [ITEM_LEFTOVERS] =
    {
        .name = _("Leftovers"),
        .price = 4000,
        .holdEffect = HOLD_EFFECT_LEFTOVERS,
        .holdEffectParam = 10,
        .description = sLeftoversDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_SHELL_BELL] =
    {
        .name = _("Shell Bell"),
        .price = 4000,
        .holdEffect = HOLD_EFFECT_SHELL_BELL,
        .holdEffectParam = 8,
        .description = sShellBellDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
    },

    [ITEM_WIDE_LENS] =
    {
        .name = _("Wide Lens"),
        .price = 4000,
        .holdEffect = HOLD_EFFECT_WIDE_LENS,
        .holdEffectParam = 10,
        .description = sWideLensDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_MUSCLE_BAND] =
    {
        .name = _("Muscle Band"),
        .price = 4000,
        .holdEffect = HOLD_EFFECT_MUSCLE_BAND,
        .holdEffectParam = 10,
        .description = sMuscleBandDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_WISE_GLASSES] =
    {
        .name = _("Wise Glasses"),
        .price = 4000,
        .holdEffect = HOLD_EFFECT_WISE_GLASSES,
        .holdEffectParam = 10,
        .description = sWiseGlassesDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_EXPERT_BELT] =
    {
        .name = _("Expert Belt"),
        .price = 4000,
        .holdEffect = HOLD_EFFECT_EXPERT_BELT,
        .holdEffectParam = 20,
        .description = sExpertBeltDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_LIGHT_CLAY] =
    {
        .name = _("Light Clay"),
        .price = 4000,
        .holdEffect = HOLD_EFFECT_LIGHT_CLAY,
        .description = sLightClayDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
    },

    [ITEM_LIFE_ORB] =
    {
        .name = _("Life Orb"),
        .price = 4000,
        .holdEffect = HOLD_EFFECT_LIFE_ORB,
        .description = sLifeOrbDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
    },

    [ITEM_POWER_HERB] =
    {
        .name = _("Power Herb"),
        .price = 4000,
        .holdEffect = HOLD_EFFECT_POWER_HERB,
        .description = sPowerHerbDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_FOCUS_SASH] =
    {
        .name = _("Focus Sash"),
        .price = 4000,
        .holdEffect = HOLD_EFFECT_FOCUS_SASH,
        .description = sFocusSashDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_ZOOM_LENS] =
    {
        .name = _("Zoom Lens"),
        .price = 4000,
        .holdEffect = HOLD_EFFECT_ZOOM_LENS,
        .holdEffectParam = 20,
        .description = sZoomLensDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_METRONOME] =
    {
        .name = _("Metronome"),
        .price = 4000,
        .holdEffect = HOLD_EFFECT_METRONOME,
        .holdEffectParam = 20,
        .description = sMetronomeDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
    },

    [ITEM_IRON_BALL] =
    {
        .name = _("Iron Ball"),
        .price = 4000,
        .holdEffect = HOLD_EFFECT_IRON_BALL,
        .description = sIronBallDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 130,
    },

    [ITEM_LAGGING_TAIL] =
    {
        .name = _("Lagging Tail"),
        .price = 4000,
        .holdEffect = HOLD_EFFECT_LAGGING_TAIL,
        .description = sLaggingTailDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_DESTINY_KNOT] =
    {
        .name = _("Destiny Knot"),
        .price = 4000,
        .holdEffect = HOLD_EFFECT_DESTINY_KNOT,
        .description = sDestinyKnotDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_BLACK_SLUDGE] =
    {
        .name = _("Black Sludge"),
        .price = 4000,
        .holdEffect = HOLD_EFFECT_BLACK_SLUDGE,
        .description = sBlackSludgeDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
    },

    [ITEM_GRIP_CLAW] =
    {
        .name = _("Grip Claw"),
        .price = 4000,
        .holdEffect = HOLD_EFFECT_GRIP_CLAW,
        .description = sGripClawDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 90,
    },

    [ITEM_STICKY_BARB] =
    {
        .name = _("Sticky Barb"),
        .price = 4000,
        .holdEffect = HOLD_EFFECT_STICKY_BARB,
        .description = sStickyBarbDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
    },

    [ITEM_SHED_SHELL] =
    {
        .name = _("Shed Shell"),
        .price = 4000,
        .holdEffect = HOLD_EFFECT_SHED_SHELL,
        .description = sShedShellDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_BIG_ROOT] =
    {
        .name = _("Big Root"),
        .price = 4000,
        .holdEffect = HOLD_EFFECT_BIG_ROOT,
        .holdEffectParam = 30,
        .description = sBigRootDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_RAZOR_CLAW] =
    {
        .name = _("Razor Claw"),
        .price = 5000,
        .holdEffect = HOLD_EFFECT_SCOPE_LENS,
        .description = sRazorClawDesc,
        .pocket = POCKET_ITEMS,
        .type = EVO_HELD_ITEM_TYPE,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = EVO_HELD_ITEM_FIELD_FUNC,
        .flingPower = 80,
    },

    [ITEM_RAZOR_FANG] =
    {
        .name = _("Razor Fang"),
        .price = 5000,
        .holdEffect = HOLD_EFFECT_FLINCH,
        .holdEffectParam = 10,
        .description = sRazorFangDesc,
        .pocket = POCKET_ITEMS,
        .type = EVO_HELD_ITEM_TYPE,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = EVO_HELD_ITEM_FIELD_FUNC,
        .flingPower = 30,
    },

    [ITEM_EVIOLITE] =
    {
        .name = _("Eviolite"),
        .price = 4000,
        .holdEffect = HOLD_EFFECT_EVIOLITE,
        .holdEffectParam = 50,
        .description = sEvioliteDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 40,
    },

    [ITEM_FLOAT_STONE] =
    {
        .name = _("Float Stone"),
        .price = 4000,
        .holdEffect = HOLD_EFFECT_FLOAT_STONE,
        .description = sFloatStoneDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
    },

    [ITEM_ROCKY_HELMET] =
    {
        .name = _("Rocky Helmet"),
        .price = 4000,
        .holdEffect = HOLD_EFFECT_ROCKY_HELMET,
        .holdEffectParam = 0,
        .description = sRockyHelmetDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 60,
    },

    [ITEM_AIR_BALLOON] =
    {
        .name = _("Air Balloon"),
        .price = 4000,
        .holdEffect = HOLD_EFFECT_AIR_BALLOON,
        .holdEffectParam = 0,
        .description = sAirBalloonDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_RED_CARD] =
    {
        .name = _("Red Card"),
        .price = 4000,
        .holdEffect = HOLD_EFFECT_RED_CARD,
        .holdEffectParam = 0,
        .description = sRedCardDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_RING_TARGET] =
    {
        .name = _("Ring Target"),
        .price = 4000,
        .holdEffect = HOLD_EFFECT_RING_TARGET,
        .holdEffectParam = 0,
        .description = sRingTargetDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_BINDING_BAND] =
    {
        .name = _("Binding Band"),
        .price = 4000,
        .holdEffect = HOLD_EFFECT_BINDING_BAND,
        .description = sBindingBandDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
    },

    [ITEM_EJECT_BUTTON] =
    {
        .name = _("Eject Button"),
        .price = 4000,
        .holdEffect = HOLD_EFFECT_EJECT_BUTTON,
        .holdEffectParam = 0,
        .description = sEjectButtonDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
    },

    [ITEM_WEAKNESS_POLICY] =
    {
        .name = _("WeaknssPolicy"),
        .price = 1000,
        .holdEffect = HOLD_EFFECT_WEAKNESS_POLICY,
        .holdEffectParam = 0,
        .description = sWeaknessPolicyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
    },

    [ITEM_ASSAULT_VEST] =
    {
        .name = _("Assault Vest"),
        .price = 1000,
        .holdEffect = HOLD_EFFECT_ASSAULT_VEST,
        .holdEffectParam = 50,
        .description = sAssaultVestDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
    },

    [ITEM_SAFETY_GOGGLES] =
    {
        .name = _("SafetyGoggles"),
        .price = 4000,
        .holdEffect = HOLD_EFFECT_SAFETY_GOGGLES,
        .description = sSafetyGogglesDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
    },

    [ITEM_ADRENALINE_ORB] =
    {
        .name = _("AdrenalineOrb"),
        .price = 300,
        .holdEffect = HOLD_EFFECT_ADRENALINE_ORB,
        .description = sAdrenalineOrbDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
    },

    [ITEM_TERRAIN_EXTENDER] =
    {
        .name = _("TerainExtendr"),
        .price = 4000,
        .holdEffect = HOLD_EFFECT_TERRAIN_EXTENDER,
        .description = sTerrainExtenderDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 60,
    },

    [ITEM_PROTECTIVE_PADS] =
    {
        .name = _("ProtectvePads"),
        .price = 4000,
        .holdEffect = HOLD_EFFECT_PROTECTIVE_PADS,
        .description = sProtectivePadsDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
    },

    [ITEM_THROAT_SPRAY] =
    {
        .name = _("Throat Spray"),
        .price = 4000,
        .holdEffect = HOLD_EFFECT_THROAT_SPRAY,
        .description = sThroatSprayDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
    },

    [ITEM_EJECT_PACK] =
    {
        .name = _("Eject Pack"),
        .price = 4000,
        .holdEffect = HOLD_EFFECT_EJECT_PACK,
        .description = sEjectPackDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 50,
    },

    [ITEM_HEAVY_DUTY_BOOTS] =
    {
        .name = _("Heavy-DtyBts"),
        .price = 4000,
        .holdEffect = HOLD_EFFECT_HEAVY_DUTY_BOOTS,
        .description = sHeavyDutyBootsDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
    },

    [ITEM_BLUNDER_POLICY] =
    {
        .name = _("BlundrPolicy"),
        .price = 4000,
        .holdEffect = HOLD_EFFECT_BLUNDER_POLICY,
        .description = sBlunderPolicyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
    },

    [ITEM_ROOM_SERVICE] =
    {
        .name = _("Room Service"),
        .price = 4000,
        .holdEffect = HOLD_EFFECT_ROOM_SERVICE,
        .description = sRoomServiceDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 100,
    },

    [ITEM_UTILITY_UMBRELLA] =
    {
        .name = _("UtltyUmbrlla"),
        .price = 4000,
        .holdEffect = HOLD_EFFECT_UTILITY_UMBRELLA,
        .description = sUtilityUmbrellaDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 60,
    },

// Berries

    [ITEM_CHERI_BERRY] =
    {
        .name = _("Cheri Berry"),
        .price = 20,
        .holdEffect = HOLD_EFFECT_CURE_PAR,
        .description = sCheriBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = EFFECT_ITEM_CURE_STATUS,
        .flingPower = 10,
    },

    [ITEM_CHESTO_BERRY] =
    {
        .name = _("Chesto Berry"),
        .price = 20,
        .holdEffect = HOLD_EFFECT_CURE_SLP,
        .description = sChestoBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = EFFECT_ITEM_CURE_STATUS,
        .flingPower = 10,
    },

    [ITEM_PECHA_BERRY] =
    {
        .name = _("Pecha Berry"),
        .price = 20,
        .holdEffect = HOLD_EFFECT_CURE_PSN,
        .description = sPechaBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = EFFECT_ITEM_CURE_STATUS,
        .flingPower = 10,
    },

    [ITEM_RAWST_BERRY] =
    {
        .name = _("Rawst Berry"),
        .price = 20,
        .holdEffect = HOLD_EFFECT_CURE_BRN,
        .description = sRawstBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = EFFECT_ITEM_CURE_STATUS,
        .flingPower = 10,
    },

    [ITEM_ASPEAR_BERRY] =
    {
        .name = _("Aspear Berry"),
        .price = 20,
        .holdEffect = HOLD_EFFECT_CURE_FRZ,
        .description = sAspearBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = EFFECT_ITEM_CURE_STATUS,
        .flingPower = 10,
    },

    [ITEM_LEPPA_BERRY] =
    {
        .name = _("Leppa Berry"),
        .price = 20,
        .holdEffect = HOLD_EFFECT_RESTORE_PP,
        .holdEffectParam = 10,
        .description = sLeppaBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_PARTY_MENU_MOVES,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_PPRecovery,
        .battleUsage = EFFECT_ITEM_RESTORE_PP,
        .flingPower = 10,
    },

    [ITEM_ORAN_BERRY] =
    {
        .name = _("Oran Berry"),
        .price = 20,
        .holdEffect = HOLD_EFFECT_RESTORE_HP,
        .holdEffectParam = 10,
        .description = sOranBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = EFFECT_ITEM_RESTORE_HP,
        .flingPower = 10,
    },

    [ITEM_PERSIM_BERRY] =
    {
        .name = _("Persim Berry"),
        .price = 20,
        .holdEffect = HOLD_EFFECT_CURE_CONFUSION,
        .description = sPersimBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = EFFECT_ITEM_CURE_STATUS,
        .flingPower = 10,
    },

    [ITEM_LUM_BERRY] =
    {
        .name = _("Lum Berry"),
        .price = 20,
        .holdEffect = HOLD_EFFECT_CURE_STATUS,
        .description = sLumBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = EFFECT_ITEM_CURE_STATUS,
        .flingPower = 10,
    },

    [ITEM_SITRUS_BERRY] =
    {
        .name = _("Sitrus Berry"),
        .price = 20,
        #if I_SITRUS_BERRY_HEAL >= GEN_4
            .holdEffect = HOLD_EFFECT_RESTORE_PCT_HP,
            .holdEffectParam = 25,
        #else
            .holdEffect = HOLD_EFFECT_RESTORE_HP,
            .holdEffectParam = 30,
        #endif
        .description = sSitrusBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = EFFECT_ITEM_RESTORE_HP,
        .flingPower = 10,
    },

    [ITEM_FIGY_BERRY] =
    {
        .name = _("Figy Berry"),
        .price = 20,
        .holdEffect = HOLD_EFFECT_CONFUSE_SPICY,
        .holdEffectParam = CONFUSE_BERRY_HEAL_FRACTION,
        .description = sFigyBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_WIKI_BERRY] =
    {
        .name = _("Wiki Berry"),
        .price = 20,
        .holdEffect = HOLD_EFFECT_CONFUSE_DRY,
        .holdEffectParam = CONFUSE_BERRY_HEAL_FRACTION,
        .description = sWikiBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_MAGO_BERRY] =
    {
        .name = _("Mago Berry"),
        .price = 20,
        .holdEffect = HOLD_EFFECT_CONFUSE_SWEET,
        .holdEffectParam = CONFUSE_BERRY_HEAL_FRACTION,
        .description = sMagoBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_AGUAV_BERRY] =
    {
        .name = _("Aguav Berry"),
        .price = 20,
        .holdEffect = HOLD_EFFECT_CONFUSE_BITTER,
        .holdEffectParam = CONFUSE_BERRY_HEAL_FRACTION,
        .description = sAguavBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_IAPAPA_BERRY] =
    {
        .name = _("Iapapa Berry"),
        .price = 20,
        .holdEffect = HOLD_EFFECT_CONFUSE_SOUR,
        .holdEffectParam = CONFUSE_BERRY_HEAL_FRACTION,
        .description = sIapapaBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_RAZZ_BERRY] =
    {
        .name = _("Razz Berry"),
        .price = 20,
        .description = sRazzBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_BLUK_BERRY] =
    {
        .name = _("Bluk Berry"),
        .price = 20,
        .description = sBlukBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_NANAB_BERRY] =
    {
        .name = _("Nanab Berry"),
        .price = 20,
        .description = sNanabBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_WEPEAR_BERRY] =
    {
        .name = _("Wepear Berry"),
        .price = 20,
        .description = sWepearBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_PINAP_BERRY] =
    {
        .name = _("Pinap Berry"),
        .price = 20,
        .description = sPinapBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_POMEG_BERRY] =
    {
        .name = _("Pomeg Berry"),
        .price = 20,
        .description = sPomegBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_ReduceEV,
        .flingPower = 10,
    },

    [ITEM_KELPSY_BERRY] =
    {
        .name = _("Kelpsy Berry"),
        .price = 20,
        .description = sKelpsyBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_ReduceEV,
        .flingPower = 10,
    },

    [ITEM_QUALOT_BERRY] =
    {
        .name = _("Qualot Berry"),
        .price = 20,
        .description = sQualotBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_ReduceEV,
        .flingPower = 10,
    },

    [ITEM_HONDEW_BERRY] =
    {
        .name = _("Hondew Berry"),
        .price = 20,
        .description = sHondewBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_ReduceEV,
        .flingPower = 10,
    },

    [ITEM_GREPA_BERRY] =
    {
        .name = _("Grepa Berry"),
        .price = 20,
        .description = sGrepaBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_ReduceEV,
        .flingPower = 10,
    },

    [ITEM_TAMATO_BERRY] =
    {
        .name = _("Tamato Berry"),
        .price = 20,
        .description = sTamatoBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_ReduceEV,
        .flingPower = 10,
    },

    [ITEM_CORNN_BERRY] =
    {
        .name = _("Cornn Berry"),
        .price = 20,
        .description = sCornnBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_MAGOST_BERRY] =
    {
        .name = _("Magost Berry"),
        .price = 20,
        .description = sMagostBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_RABUTA_BERRY] =
    {
        .name = _("Rabuta Berry"),
        .price = 20,
        .description = sRabutaBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_NOMEL_BERRY] =
    {
        .name = _("Nomel Berry"),
        .price = 20,
        .description = sNomelBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_SPELON_BERRY] =
    {
        .name = _("Spelon Berry"),
        .price = 20,
        .description = sSpelonBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_PAMTRE_BERRY] =
    {
        .name = _("Pamtre Berry"),
        .price = 20,
        .description = sPamtreBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_WATMEL_BERRY] =
    {
        .name = _("Watmel Berry"),
        .price = 20,
        .description = sWatmelBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_DURIN_BERRY] =
    {
        .name = _("Durin Berry"),
        .price = 20,
        .description = sDurinBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_BELUE_BERRY] =
    {
        .name = _("Belue Berry"),
        .price = 20,
        .description = sBelueBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_CHILAN_BERRY] =
    {
        .name = _("Chilan Berry"),
        .price = 20,
        .holdEffect = HOLD_EFFECT_RESIST_BERRY,
        .holdEffectParam = TYPE_NORMAL,
        .description = sChilanBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_OCCA_BERRY] =
    {
        .name = _("Occa Berry"),
        .price = 20,
        .holdEffect = HOLD_EFFECT_RESIST_BERRY,
        .holdEffectParam = TYPE_FIRE,
        .description = sOccaBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_PASSHO_BERRY] =
    {
        .name = _("Passho Berry"),
        .price = 20,
        .holdEffect = HOLD_EFFECT_RESIST_BERRY,
        .holdEffectParam = TYPE_WATER,
        .description = sPasshoBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_WACAN_BERRY] =
    {
        .name = _("Wacan Berry"),
        .price = 20,
        .holdEffect = HOLD_EFFECT_RESIST_BERRY,
        .holdEffectParam = TYPE_ELECTRIC,
        .description = sWacanBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_RINDO_BERRY] =
    {
        .name = _("Rindo Berry"),
        .price = 20,
        .holdEffect = HOLD_EFFECT_RESIST_BERRY,
        .holdEffectParam = TYPE_GRASS,
        .description = sRindoBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_YACHE_BERRY] =
    {
        .name = _("Yache Berry"),
        .price = 20,
        .holdEffect = HOLD_EFFECT_RESIST_BERRY,
        .holdEffectParam = TYPE_ICE,
        .description = sYacheBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_CHOPLE_BERRY] =
    {
        .name = _("Chople Berry"),
        .price = 20,
        .holdEffect = HOLD_EFFECT_RESIST_BERRY,
        .holdEffectParam = TYPE_FIGHTING,
        .description = sChopleBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_KEBIA_BERRY] =
    {
        .name = _("Kebia Berry"),
        .price = 20,
        .holdEffect = HOLD_EFFECT_RESIST_BERRY,
        .holdEffectParam = TYPE_POISON,
        .description = sKebiaBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_SHUCA_BERRY] =
    {
        .name = _("Shuca Berry"),
        .price = 20,
        .holdEffect = HOLD_EFFECT_RESIST_BERRY,
        .holdEffectParam = TYPE_GROUND,
        .description = sShucaBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_COBA_BERRY] =
    {
        .name = _("Coba Berry"),
        .price = 20,
        .holdEffect = HOLD_EFFECT_RESIST_BERRY,
        .holdEffectParam = TYPE_FLYING,
        .description = sCobaBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_PAYAPA_BERRY] =
    {
        .name = _("Payapa Berry"),
        .price = 20,
        .holdEffect = HOLD_EFFECT_RESIST_BERRY,
        .holdEffectParam = TYPE_PSYCHIC,
        .description = sPayapaBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_TANGA_BERRY] =
    {
        .name = _("Tanga Berry"),
        .price = 20,
        .holdEffect = HOLD_EFFECT_RESIST_BERRY,
        .holdEffectParam = TYPE_BUG,
        .description = sTangaBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_CHARTI_BERRY] =
    {
        .name = _("Charti Berry"),
        .price = 20,
        .holdEffect = HOLD_EFFECT_RESIST_BERRY,
        .holdEffectParam = TYPE_ROCK,
        .description = sChartiBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_KASIB_BERRY] =
    {
        .name = _("Kasib Berry"),
        .price = 20,
        .holdEffect = HOLD_EFFECT_RESIST_BERRY,
        .holdEffectParam = TYPE_GHOST,
        .description = sKasibBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_HABAN_BERRY] =
    {
        .name = _("Haban Berry"),
        .price = 20,
        .holdEffect = HOLD_EFFECT_RESIST_BERRY,
        .holdEffectParam = TYPE_DRAGON,
        .description = sHabanBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_COLBUR_BERRY] =
    {
        .name = _("Colbur Berry"),
        .price = 20,
        .holdEffect = HOLD_EFFECT_RESIST_BERRY,
        .holdEffectParam = TYPE_DARK,
        .description = sColburBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_BABIRI_BERRY] =
    {
        .name = _("Babiri Berry"),
        .price = 20,
        .holdEffect = HOLD_EFFECT_RESIST_BERRY,
        .holdEffectParam = TYPE_STEEL,
        .description = sBabiriBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_ROSELI_BERRY] =
    {
        .name = _("Roseli Berry"),
        .price = 20,
        .holdEffect = HOLD_EFFECT_RESIST_BERRY,
        .holdEffectParam = TYPE_FAIRY,
        .description = sRoseliBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_LIECHI_BERRY] =
    {
        .name = _("Liechi Berry"),
        .price = 20,
        .holdEffect = HOLD_EFFECT_ATTACK_UP,
        .holdEffectParam = 4,
        .description = sLiechiBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_GANLON_BERRY] =
    {
        .name = _("Ganlon Berry"),
        .price = 20,
        .holdEffect = HOLD_EFFECT_DEFENSE_UP,
        .holdEffectParam = 4,
        .description = sGanlonBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_SALAC_BERRY] =
    {
        .name = _("Salac Berry"),
        .price = 20,
        .holdEffect = HOLD_EFFECT_SPEED_UP,
        .holdEffectParam = 4,
        .description = sSalacBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_PETAYA_BERRY] =
    {
        .name = _("Petaya Berry"),
        .price = 20,
        .holdEffect = HOLD_EFFECT_SP_ATTACK_UP,
        .holdEffectParam = 4,
        .description = sPetayaBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_APICOT_BERRY] =
    {
        .name = _("Apicot Berry"),
        .price = 20,
        .holdEffect = HOLD_EFFECT_SP_DEFENSE_UP,
        .holdEffectParam = 4,
        .description = sApicotBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_LANSAT_BERRY] =
    {
        .name = _("Lansat Berry"),
        .price = 20,
        .holdEffect = HOLD_EFFECT_CRITICAL_UP,
        .holdEffectParam = 4,
        .description = sLansatBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_STARF_BERRY] =
    {
        .name = _("Starf Berry"),
        .price = 20,
        .holdEffect = HOLD_EFFECT_RANDOM_STAT_UP,
        .holdEffectParam = 4,
        .description = sStarfBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_ENIGMA_BERRY] =
    {
        .name = _("Enigma Berry"),
        .price = 20,
        .holdEffect = HOLD_EFFECT_ENIGMA_BERRY,
        .description = sEnigmaBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_MICLE_BERRY] =
    {
        .name = _("Micle Berry"),
        .price = 20,
        .holdEffect = HOLD_EFFECT_MICLE_BERRY,
        .holdEffectParam = 4,
        .description = sMicleBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_CUSTAP_BERRY] =
    {
        .name = _("Custap Berry"),
        .price = 20,
        .holdEffect = HOLD_EFFECT_CUSTAP_BERRY,
        .holdEffectParam = 4,
        .description = sCustapBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_JABOCA_BERRY] =
    {
        .name = _("Jaboca Berry"),
        .price = 20,
        .holdEffect = HOLD_EFFECT_JABOCA_BERRY,
        .description = sJabocaBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_ROWAP_BERRY] =
    {
        .name = _("Rowap Berry"),
        .price = 20,
        .holdEffect = HOLD_EFFECT_ROWAP_BERRY,
        .description = sRowapBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_KEE_BERRY] =
    {
        .name = _("Kee Berry"),
        .price = 20,
        .holdEffect = HOLD_EFFECT_KEE_BERRY,
        .description = sKeeBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_MARANGA_BERRY] =
    {
        .name = _("Maranga Berry"),
        .price = 20,
        .holdEffect = HOLD_EFFECT_MARANGA_BERRY,
        .description = sMarangaBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_ENIGMA_BERRY_E_READER] =
    {
        .name = _("Enigma Berry"),
        .price = 20,
        .description = sEnigmaBerryEReaderDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU, // Type handled by ItemUseOutOfBattle_EnigmaBerry
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_EnigmaBerry,
        .battleUsage = EFFECT_ITEM_ENIGMA_BERRY_EREADER,
        .flingPower = 10,
    },

// TMs/HMs. They don't have a set flingPower, as that's handled by GetFlingPowerFromItemId.

    [ITEM_TM_SUNNY_DAY] =
    {
        .name = _("SCROLL 01"),
        .price = 3000,
        .description = sScroll_01_Desc,
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_SUNNY_DAY,
    },

    [ITEM_TM_RAIN_DANCE] =
    {
        .name = _("SCROLL 02"),
        .price = 3000,
        .description = sScroll_02_Desc,
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_RAIN_DANCE,
    },

    [ITEM_TM_HAIL] =
    {
        .name = _("SCROLL 03"),
        .price = 3000,
        .description = sScroll_03_Desc,
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_HAIL,
    },

    [ITEM_TM_SANDSTORM] =
    {
        .name = _("SCROLL 04"),
        .price = 3000,
        .description = sScroll_04_Desc,
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_SANDSTORM,
    },

    [ITEM_TM_TAILWIND] =
    {
        .name = _("SCROLL 05"),
        .price = 3000,
        .description = sScroll_05_Desc,
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_TAILWIND,
    },

    [ITEM_TM_FLAME_CHARGE] =
    {
        .name = _("SCROLL 06"),
        .price = 3000,
        .description = sScroll_06_Desc,
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_FLAME_CHARGE,
    },

    [ITEM_TM_RAZOR_SHELL] =
    {
        .name = _("SCROLL 07"),
        .price = 3000,
        .description = sScroll_07_Desc,
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_RAZOR_SHELL,
    },

    [ITEM_TM_SOLAR_BLADE] =
    {
        .name = _("SCROLL 08"),
        .price = 3000,
        .description = sScroll_08_Desc,
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_SOLAR_BLADE,
    },

    [ITEM_TM_GRASSY_TERRAIN] =
    {
        .name = _("SCROLL 09"),
        .price = 3000,
        .description = sScroll_09_Desc,
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_GRASSY_TERRAIN,
    },

    [ITEM_TM_ELECTRIC_TERRAIN] =
    {
        .name = _("SCROLL 10"),
        .price = 3000,
        .description = sScroll_10_Desc,
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_ELECTRIC_TERRAIN,
    },

    [ITEM_TM_PSYCHIC_TERRAIN] =
    {
        .name = _("SCROLL 11"),
        .price = 3000,
        .description = sScroll_11_Desc,
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_PSYCHIC_TERRAIN,
    },

    [ITEM_TM_MISTY_TERRAIN] =
    {
        .name = _("SCROLL 12"),
        .price = 3000,
        .description = sScroll_12_Desc,
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_MISTY_TERRAIN,
    },

    [ITEM_TM_BRINE] =
    {
        .name = _("SCROLL 13"),
        .price = 3000,
        .description = sScroll_13_Desc,
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_BRINE,
    },

    [ITEM_TM_ENERGY_BALL] =
    {
        .name = _("SCROLL 14"),
        .price = 3000,
        .description = sScroll_14_Desc,
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_ENERGY_BALL,
    },

    [ITEM_TM_LAVA_PLUME] =
    {
        .name = _("SCROLL 15"),
        .price = 3000,
        .description = sScroll_15_Desc,
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_LAVA_PLUME,
    },

    [ITEM_TM_HURRICANE] =
    {
        .name = _("SCROLL 16"),
        .price = 3000,
        .description = sScroll_16_Desc,
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_HURRICANE,
    },

    [ITEM_TM_AERIAL_ACE] =
    {
        .name = _("SCROLL 17"),
        .price = 3000,
        .description = sScroll_17_Desc,
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_AERIAL_ACE,
    },

    [ITEM_TM_STEEL_WING] =
    {
        .name = _("SCROLL 18"),
        .price = 3000,
        .description = sScroll_18_Desc,
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_STEEL_WING,
    },

    [ITEM_TM_VOLT_TACKLE] =
    {
        .name = _("SCROLL 19"),
        .price = 3000,
        .description = sScroll_19_Desc,
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_VOLT_TACKLE,
    },

    [ITEM_TM_DRAINING_KISS] =
    {
        .name = _("SCROLL 20"),
        .price = 3000,
        .description = sScroll_20_Desc,
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_DRAINING_KISS,
    },

    [ITEM_TM_TOXIC] =
    {
        .name = _("SCROLL 21"),
        .price = 3000,
        .description = sScroll_21_Desc,
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_TOXIC,
    },

    [ITEM_TM_SHADOW_BONE] =
    {
        .name = _("SCROLL 22"),
        .price = 3000,
        .description = sScroll_22_Desc,
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_SHADOW_BONE,
    },

    [ITEM_TM_BANEFUL_BUNKER] =
    {
        .name = _("SCROLL 23"),
        .price = 3000,
        .description = sScroll_23_Desc,
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_BANEFUL_BUNKER,
    },

    [ITEM_TM_U_TURN] =
    {
        .name = _("SCROLL 24"),
        .price = 3000,
        .description = sScroll_24_Desc,
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_U_TURN,
    },

    [ITEM_TM_GUILLOTINE] =
    {
        .name = _("SCROLL 25"),
        .price = 3000,
        .description = sScroll_25_Desc,
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_GUILLOTINE,
    },

    [ITEM_TM_KINGS_SHIELD] =
    {
        .name = _("SCROLL 26"),
        .price = 3000,
        .description = sScroll_26_Desc,
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_KINGS_SHIELD,
    },

    [ITEM_TM_SACRED_SWORD] =
    {
        .name = _("SCROLL 27"),
        .price = 3000,
        .description = sScroll_27_Desc,
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_SACRED_SWORD,
    },

    [ITEM_TM_SWORDS_DANCE] =
    {
        .name = _("SCROLL 28"),
        .price = 3000,
        .description = sScroll_28_Desc,
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_SWORDS_DANCE,
    },

    [ITEM_TM_SECRET_SWORD] =
    {
        .name = _("SCROLL 29"),
        .price = 3000,
        .description = sScroll_29_Desc,
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_SECRET_SWORD,
    },

    [ITEM_TM_RETURN] =
    {
        .name = _("SCROLL 30"),
        .price = 3000,
        .description = sScroll_30_Desc,
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_RETURN,
    },

    [ITEM_TM_FRUSTRATION] =
    {
        .name = _("SCROLL 31"),
        .price = 3000,
        .description = sScroll_31_Desc,
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_FRUSTRATION,
    },

    [ITEM_TM_FALSE_SWIPE] =
    {
        .name = _("SCROLL 32"),
        .price = 3000,
        .description = sScroll_32_Desc,
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_FALSE_SWIPE,
    },

    [ITEM_TM_DRAGON_BREATH] =
    {
        .name = _("SCROLL 33"),
        .price = 3000,
        .description = sScroll_33_Desc,
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_DRAGON_BREATH,
    },

    [ITEM_TM_DRAGON_HAMMER] =
    {
        .name = _("SCROLL 34"),
        .price = 3000,
        .description = sScroll_34_Desc,
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_DRAGON_HAMMER,
    },

    [ITEM_TM_LEECH_LIFE] =
    {
        .name = _("SCROLL 35"),
        .price = 3000,
        .description = sScroll_35_Desc,
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_LEECH_LIFE,
    },

    [ITEM_TM_SLACK_OFF] =
    {
        .name = _("SCROLL 36"),
        .price = 3000,
        .description = sScroll_36_Desc,
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_SLACK_OFF,
    },

    [ITEM_TM_THOUSAND_ARROWS] =
    {
        .name = _("SCROLL 37"),
        .price = 3000,
        .description = sScroll_37_Desc,
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_THOUSAND_ARROWS,
    },

    [ITEM_TM_ROCK_TOMB] =
    {
        .name = _("SCROLL 38"),
        .price = 3000,
        .description = sScroll_38_Desc,
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_ROCK_TOMB,
    },

    [ITEM_TM_REVELATION_DANCE] =
    {
        .name = _("SCROLL 39"),
        .price = 3000,
        .description = sScroll_39_Desc,
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_REVELATION_DANCE,
    },

    [ITEM_TM_VOLT_SWITCH] =
    {
        .name = _("SCROLL 40"),
        .price = 3000,
        .description = sScroll_40_Desc,
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_VOLT_SWITCH,
    },

    [ITEM_TM_FLASH_CANNON] =
    {
        .name = _("SCROLL 41"),
        .price = 3000,
        .description = sScroll_41_Desc,
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_FLASH_CANNON,
    },

    [ITEM_TM_POLLEN_PUFF] =
    {
        .name = _("SCROLL 42"),
        .price = 3000,
        .description = sScroll_42_Desc,
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_POLLEN_PUFF,
    },

    [ITEM_TM_PSYCHO_CUT] =
    {
        .name = _("SCROLL 43"),
        .price = 3000,
        .description = sScroll_43_Desc,
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_PSYCHO_CUT,
    },

    [ITEM_TM_PLAY_ROUGH] =
    {
        .name = _("SCROLL 44"),
        .price = 3000,
        .description = sScroll_44_Desc,
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_PLAY_ROUGH,
    },

    [ITEM_TM_SPECTRAL_THIEF] =
    {
        .name = _("SCROLL 45"),
        .price = 3000,
        .description = sScroll_45_Desc,
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_SPECTRAL_THIEF,
    },

    [ITEM_TM_DRAGON_TAIL] =
    {
        .name = _("SCROLL 46"),
        .price = 3000,
        .description = sScroll_46_Desc,
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_DRAGON_TAIL,
    },

    [ITEM_TM_LUNAR_DANCE] =
    {
        .name = _("SCROLL 47"),
        .price = 3000,
        .description = sScroll_47_Desc,
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_LUNAR_DANCE,
    },

    [ITEM_TM_POWER_GEM] =
    {
        .name = _("SCROLL 48"),
        .price = 3000,
        .description = sScroll_48_Desc,
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_POWER_GEM,
    },

    [ITEM_TM_SNARL] =
    {
        .name = _("SCROLL 49"),
        .price = 3000,
        .description = sScroll_49_Desc,
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_SNARL,
    },

    [ITEM_TM_POISON_JAB] =
    {
        .name = _("SCROLL 50"),
        .price = 3000,
        .description = sScroll_50_Desc,
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_POISON_JAB,
    },

    [ITEM_TM_ICICLE_CRASH] =
    {
        .name = _("SCROLL 51"),
        .price = 3000,
        .description = sScroll_51_Desc,
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_ICICLE_CRASH,
    },

    [ITEM_TM_POWDER] =
    {
        .name = _("SCROLL 52"),
        .price = 3000,
        .description = sScroll_52_Desc,
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_POWDER,
    },

    [ITEM_TM_ICE_BEAM] =
    {
        .name = _("SCROLL 53"),
        .price = 3000,
        .description = sScroll_53_Desc,
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_ICE_BEAM,
    },

    [ITEM_TM_MUD_BOMB] =
    {
        .name = _("SCROLL 54"),
        .price = 3000,
        .description = sScroll_54_Desc,
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_MUD_BOMB,
    },

    [ITEM_TM_HEX] =
    {
        .name = _("SCROLL 55"),
        .price = 3000,
        .description = sScroll_55_Desc,
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_HEX,
    },

    [ITEM_TM_SWITCHEROO] =
    {
        .name = _("SCROLL 56"),
        .price = 3000,
        .description = sScroll_56_Desc,
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_SWITCHEROO,
    },

    [ITEM_TM_PSYSHOCK] =
    {
        .name = _("SCROLL 57"),
        .price = 3000,
        .description = sScroll_57_Desc,
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_PSYSHOCK,
    },

    [ITEM_TM_SLUDGE_WAVE] =
    {
        .name = _("SCROLL 58"),
        .price = 3000,
        .description = sScroll_58_Desc,
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_SLUDGE_WAVE,
    },

    [ITEM_TM_SPIKES] =
    {
        .name = _("SCROLL 59"),
        .price = 3000,
        .description = sScroll_59_Desc,
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_SPIKES,
    },

    [ITEM_TM_BULK_UP] =
    {
        .name = _("SCROLL 60"),
        .price = 3000,
        .description = sScroll_60_Desc,
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_BULK_UP,
    },

    [ITEM_TM_PAY_DAY] =
    {
        .name = _("SCROLL 61"),
        .price = 3000,
        .description = sScroll_61_Desc,
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_PAY_DAY,
    },

    [ITEM_TM_DEFOG] =
    {
        .name = _("SCROLL 62"),
        .price = 3000,
        .description = sScroll_62_Desc,
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_DEFOG,
    },

    [ITEM_TM_TRICK_OR_TREAT] =
    {
        .name = _("SCROLL 63"),
        .price = 3000,
        .description = sScroll_63_Desc,
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_TRICK_OR_TREAT,
    },

    [ITEM_TM_REVENGE] =
    {
        .name = _("SCROLL 64"),
        .price = 3000,
        .description = sScroll_64_Desc,
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_REVENGE,
    },

    [ITEM_TM_ICE_HAMMER] =
    {
        .name = _("SCROLL 65"),
        .price = 3000,
        .description = sScroll_65_Desc,
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_ICE_HAMMER,
    },

    [ITEM_TM_BRUTAL_SWING] =
    {
        .name = _("SCROLL 66"),
        .price = 3000,
        .description = sScroll_66_Desc,
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_BRUTAL_SWING,
    },

    [ITEM_TM67] =
    {
        .name = _("TM67"),
        .price = 3000,
        .description = sTM67Desc,
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_NONE, // Todo
    },

    [ITEM_TM68] =
    {
        .name = _("TM68"),
        .price = 3000,
        .description = sTM68Desc,
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_NONE, // Todo
    },

    [ITEM_TM69] =
    {
        .name = _("TM69"),
        .price = 3000,
        .description = sTM69Desc,
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_NONE, // Todo
    },

    [ITEM_TM70] =
    {
        .name = _("TM70"),
        .price = 3000,
        .description = sTM70Desc,
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_NONE, // Todo
    },

    [ITEM_TM71] =
    {
        .name = _("TM71"),
        .price = 3000,
        .description = sTM71Desc,
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_NONE, // Todo
    },

    [ITEM_TM72] =
    {
        .name = _("TM72"),
        .price = 3000,
        .description = sTM72Desc,
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_NONE, // Todo
    },

    [ITEM_TM73] =
    {
        .name = _("TM73"),
        .price = 3000,
        .description = sTM73Desc,
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_NONE, // Todo
    },

    [ITEM_TM74] =
    {
        .name = _("TM74"),
        .price = 3000,
        .description = sTM74Desc,
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_NONE, // Todo
    },

    [ITEM_TM75] =
    {
        .name = _("TM75"),
        .price = 3000,
        .description = sTM75Desc,
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_NONE, // Todo
    },

    [ITEM_TM76] =
    {
        .name = _("TM76"),
        .price = 3000,
        .description = sTM76Desc,
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_NONE, // Todo
    },

    [ITEM_TM77] =
    {
        .name = _("TM77"),
        .price = 3000,
        .description = sTM77Desc,
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_NONE, // Todo
    },

    [ITEM_TM78] =
    {
        .name = _("TM78"),
        .price = 3000,
        .description = sTM78Desc,
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_NONE, // Todo
    },

    [ITEM_TM79] =
    {
        .name = _("TM79"),
        .price = 3000,
        .description = sTM79Desc,
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_NONE, // Todo
    },

    [ITEM_TM80] =
    {
        .name = _("TM80"),
        .price = 3000,
        .description = sTM80Desc,
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_NONE, // Todo
    },

    [ITEM_TM81] =
    {
        .name = _("TM81"),
        .price = 3000,
        .description = sTM81Desc,
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_NONE, // Todo
    },

    [ITEM_TM82] =
    {
        .name = _("TM82"),
        .price = 3000,
        .description = sTM82Desc,
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_NONE, // Todo
    },

    [ITEM_TM83] =
    {
        .name = _("TM83"),
        .price = 3000,
        .description = sTM83Desc,
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_NONE, // Todo
    },

    [ITEM_TM84] =
    {
        .name = _("TM84"),
        .price = 3000,
        .description = sTM84Desc,
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_NONE, // Todo
    },

    [ITEM_TM85] =
    {
        .name = _("TM85"),
        .price = 3000,
        .description = sTM85Desc,
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_NONE, // Todo
    },

    [ITEM_TM86] =
    {
        .name = _("TM86"),
        .price = 3000,
        .description = sTM86Desc,
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_NONE, // Todo
    },

    [ITEM_TM87] =
    {
        .name = _("TM87"),
        .price = 3000,
        .description = sTM87Desc,
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_NONE, // Todo
    },

    [ITEM_TM88] =
    {
        .name = _("TM88"),
        .price = 3000,
        .description = sTM88Desc,
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_NONE, // Todo
    },

    [ITEM_TM89] =
    {
        .name = _("TM89"),
        .price = 3000,
        .description = sTM89Desc,
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_NONE, // Todo
    },

    [ITEM_TM90] =
    {
        .name = _("TM90"),
        .price = 3000,
        .description = sTM90Desc,
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_NONE, // Todo
    },

    [ITEM_TM91] =
    {
        .name = _("TM91"),
        .price = 3000,
        .description = sTM91Desc,
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_NONE, // Todo
    },

    [ITEM_TM92] =
    {
        .name = _("TM92"),
        .price = 3000,
        .description = sTM92Desc,
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_NONE, // Todo
    },

    [ITEM_TM93] =
    {
        .name = _("TM93"),
        .price = 3000,
        .description = sTM93Desc,
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_NONE, // Todo
    },

    [ITEM_TM94] =
    {
        .name = _("TM94"),
        .price = 3000,
        .description = sTM94Desc,
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_NONE, // Todo
    },

    [ITEM_TM95] =
    {
        .name = _("TM95"),
        .price = 3000,
        .description = sTM95Desc,
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_NONE, // Todo
    },

    [ITEM_TM96] =
    {
        .name = _("TM96"),
        .price = 3000,
        .description = sTM96Desc,
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_NONE, // Todo
    },

    [ITEM_TM97] =
    {
        .name = _("TM97"),
        .price = 3000,
        .description = sTM97Desc,
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_NONE, // Todo
    },

    [ITEM_TM98] =
    {
        .name = _("TM98"),
        .price = 3000,
        .description = sTM98Desc,
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_NONE, // Todo
    },

    [ITEM_TM99] =
    {
        .name = _("TM99"),
        .price = 3000,
        .description = sTM99Desc,
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_NONE, // Todo
    },

    [ITEM_TM100] =
    {
        .name = _("TM100"),
        .price = 3000,
        .description = sTM100Desc,
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_NONE, // Todo
    },

    [ITEM_HM_CUT] =
    {
        .name = _("HM01"),
        .price = 0,
        .description = sHM01Desc,
        .importance = 1,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_CUT,
    },

    [ITEM_HM_FLY] =
    {
        .name = _("HM02"),
        .price = 0,
        .description = sHM02Desc,
        .importance = 1,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_FLY,
    },

    [ITEM_HM_SURF] =
    {
        .name = _("HM03"),
        .price = 0,
        .description = sHM03Desc,
        .importance = 1,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_SURF,
    },

    [ITEM_HM_STRENGTH] =
    {
        .name = _("HM04"),
        .price = 0,
        .description = sHM04Desc,
        .importance = 1,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_STRENGTH,
    },

    [ITEM_HM_FLASH] =
    {
        .name = _("HM05"),
        .price = 0,
        .description = sHM05Desc,
        .importance = 1,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_FLASH,
    },

    [ITEM_HM_ROCK_SMASH] =
    {
        .name = _("HM06"),
        .price = 0,
        .description = sHM06Desc,
        .importance = 1,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_ROCK_SMASH,
    },

    [ITEM_HM_WATERFALL] =
    {
        .name = _("HM07"),
        .price = 0,
        .description = sHM07Desc,
        .importance = 1,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_WATERFALL,
    },

    [ITEM_HM_DIVE] =
    {
        .name = _("HM08"),
        .price = 0,
        .description = sHM08Desc,
        .importance = 1,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_DIVE,
    },


// Charms

    [ITEM_OVAL_CHARM] =
    {
        .name = _("Oval Charm"),
        .price = 0,
        .importance = 1,
        .description = sOvalCharmDesc,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_KEY_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_SHINY_CHARM] =
    {
        .name = _("Shiny Charm"),
        .price = 0,
        .importance = 1,
        .description = sShinyCharmDesc,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_KEY_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_CATCHING_CHARM] =
    {
        .name = _("CatchngCharm"),
        .price = 0,
        .importance = 1,
        .description = sCatchingCharmDesc,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_KEY_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_EXP_CHARM] =
    {
        .name = _("Exp. Charm"),
        .price = 0,
        .importance = 1,
        .description = sExpCharmDesc,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_KEY_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

// Form-changing Key Items

    [ITEM_ROTOM_CATALOG] =
    {
        .name = _("RotomCatalog"),
        .price = 0,
        .importance = 1,
        .description = sRotomCatalogDesc,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_KEY_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_RotomCatalog,
    },

    [ITEM_GRACIDEA] =
    {
        .name = _("Gracidea"),
        .price = 0,
        .importance = 1,
        .description = sGracideaDesc,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_KEY_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_FormChange,
    },

    [ITEM_REVEAL_GLASS] =
    {
        .name = _("Reveal Glass"),
        .price = 0,
        .importance = 1,
        .description = sRevealGlassDesc,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_KEY_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_FormChange,
    },

    [ITEM_DNA_SPLICERS] =
    {
        .name = _("DNA Splicers"),
        .price = 0,
        .importance = 1,
        .description = sDNASplicersDesc,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_KEY_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_Fusion,
    },

    [ITEM_ZYGARDE_CUBE] =
    {
        .name = _("Zygarde Cube"),
        .price = 0,
        .importance = 1,
        .description = sZygardeCubeDesc,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_KEY_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_ZygardeCube,
    },

    [ITEM_PRISON_BOTTLE] =
    {
        .name = _("Prison Bottle"),
        .price = 0,
        .importance = 1,
        .description = sPrisonBottleDesc,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_KEY_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_FormChange,
    },

    [ITEM_N_SOLARIZER] =
    {
        .name = _("N-Solarizer"),
        .price = 0,
        .importance = 1,
        .description = sNSolarizerDesc,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_KEY_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_Fusion,
    },

    [ITEM_N_LUNARIZER] =
    {
        .name = _("N-Lunarizer"),
        .price = 0,
        .importance = 1,
        .description = sNLunarizerDesc,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_KEY_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_Fusion,
    },

    [ITEM_REINS_OF_UNITY] =
    {
        .name = _("ReinsOfUnity"),
        .price = 0,
        .importance = 1,
        .description = sReinsOfUnityDesc,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_KEY_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_Fusion,
    },

// Battle Mechanic Key Items

    [ITEM_MEGA_RING] =
    {
        .name = _("Mega Ring"),
        .price = 0,
        .importance = 1,
        .description = sMegaRingDesc,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_KEY_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_Z_POWER_RING] =
    {
        .name = _("Z-Power Ring"),
        .price = 0,
        .importance = 1,
        .description = sZPowerRingDesc,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_KEY_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_DYNAMAX_BAND] =
    {
        .name = _("Dynamax Band"),
        .price = 0,
        .description = sDynamaxBandDesc,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_KEY_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

// Misc. Key Items

    [ITEM_BICYCLE] =
    {
        .name = _("Bicycle"),
        .price = 0,
        .description = sBicycleDesc,
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_FIELD,
        .sort = ITEM_TYPE_KEY_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_MACH_BIKE] =
    {
        .name = _("Mach Bike"),
        .price = 0,
        .description = sMachBikeDesc,
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_FIELD,
        .sort = ITEM_TYPE_KEY_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_Bike,
        .secondaryId = MACH_BIKE,
    },

    [ITEM_ACRO_BIKE] =
    {
        .name = _("Acro Bike"),
        .price = 0,
        .description = sAcroBikeDesc,
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_FIELD,
        .sort = ITEM_TYPE_KEY_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_Bike,
        .secondaryId = ACRO_BIKE,
    },

    [ITEM_OLD_ROD] =
    {
        .name = _("Old Rod"),
        .price = 0,
        .description = sOldRodDesc,
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_FIELD,
        .sort = ITEM_TYPE_KEY_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_Rod,
        .secondaryId = OLD_ROD,
    },

    [ITEM_GOOD_ROD] =
    {
        .name = _("Good Rod"),
        .price = 0,
        .description = sGoodRodDesc,
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_FIELD,
        .sort = ITEM_TYPE_KEY_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_Rod,
        .secondaryId = GOOD_ROD,
    },

    [ITEM_SUPER_ROD] =
    {
        .name = _("Super Rod"),
        .price = 0,
        .description = sSuperRodDesc,
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_FIELD,
        .sort = ITEM_TYPE_KEY_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_Rod,
        .secondaryId = SUPER_ROD,
    },

    [ITEM_DOWSING_MACHINE] =
    {
        .name = _("ITEM FINDER"),
        .price = 0,
        .description = sClueScrollToolsDesc,
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_FIELD,
        .sort = ITEM_TYPE_KEY_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_Itemfinder,
    },

    [ITEM_TOWN_MAP] =
    {
        .name = _("Town Map"),
        .price = 0,
        .description = sTownMapDesc,
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_KEY_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_VS_SEEKER] =
    {
        .name = _("Vs. Seeker"),
        .price = 0,
        .description = sVsSeekerDesc,
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_FIELD,
        .sort = ITEM_TYPE_KEY_ITEM,
#if I_VS_SEEKER_CHARGING != 0
        .fieldUseFunc = FieldUseFunc_VsSeeker,
#else
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
#endif
    },

    [ITEM_TM_CASE] =
    {
        .name = _("TM Case"),
        .price = 0,
        .description = sTMCaseDesc,
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_KEY_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_BERRY_POUCH] =
    {
        .name = _("Berry Pouch"),
        .price = 0,
        .description = sBerryPouchDesc,
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_KEY_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_POKEMON_BOX_LINK] =
    {
        .name = _("{PKMN} Box Link"),
        .price = 0,
        .description = sPokemonBoxLinkDesc,
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_KEY_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse, // Todo
    },

    [ITEM_COIN_CASE] =
    {
        .name = _("Coin Case"),
        .price = 0,
        .description = sCoinCaseDesc,
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_KEY_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CoinCase,
    },

    [ITEM_POWDER_JAR] =
    {
        .name = _("Powder Jar"),
        .price = 0,
        .description = sPowderJarDesc,
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_KEY_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_PowderJar,
    },

    [ITEM_WAILMER_PAIL] =
    {
        .name = _("Wailmer Pail"),
        .price = 0,
        .description = sWailmerPailDesc,
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_FIELD,
        .sort = ITEM_TYPE_KEY_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_WailmerPail,
    },

    [ITEM_POKE_RADAR] =
    {
        .name = _("Poké Radar"),
        .price = 0,
        .description = sPokeRadarDesc,
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_KEY_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse, // Todo
    },

    [ITEM_POKEBLOCK_CASE] =
    {
        .name = _("{POKEBLOCK} Case"),
        .price = 0,
        .description = sPokeblockCaseDesc,
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_PBLOCK_CASE,
        .sort = ITEM_TYPE_KEY_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_PokeblockCase,
    },

    [ITEM_SOOT_SACK] =
    {
        .name = _("Soot Sack"),
        .price = 0,
        .description = sSootSackDesc,
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_KEY_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_POKE_FLUTE] =
    {
        .name = _("Poké Flute"),
        .price = 0,
        .description = sPokeFluteDesc,
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_KEY_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_FAME_CHECKER] =
    {
        .name = _("Fame Checker"),
        .price = 0,
        .description = sFameCheckerDesc,
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_KEY_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_TEACHY_TV] =
    {
        .name = _("Teachy TV"),
        .price = 0,
        .description = sTeachyTVDesc,
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_FIELD,
        .sort = ITEM_TYPE_KEY_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

// Story Key Items

    [ITEM_SS_TICKET] =
    {
        .name = _("S.S. Ticket"),
        .price = 0,
        .description = sSSTicketDesc,
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_KEY_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_EON_TICKET] =
    {
        .name = _("Eon Ticket"),
        .price = 0,
        .description = sEonTicketDesc,
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_KEY_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 1,
    },

    [ITEM_MYSTIC_TICKET] =
    {
        .name = _("Mystic Ticket"),
        .price = 0,
        .description = sMysticTicketDesc,
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_KEY_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_AURORA_TICKET] =
    {
        .name = _("Aurora Ticket"),
        .price = 0,
        .description = sAuroraTicketDesc,
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_KEY_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_OLD_SEA_MAP] =
    {
        .name = _("Old Sea Map"),
        .price = 0,
        .description = sOldSeaMapDesc,
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_KEY_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_LETTER] =
    {
        .name = _("Letter"),
        .price = 0,
        .description = sLetterDesc,
        .importance = 2,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_KEY_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_DEVON_PARTS] =
    {
        .name = _("Devon Parts"),
        .price = 0,
        .description = sDevonPartsDesc,
        .importance = 2,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_KEY_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_GO_GOGGLES] =
    {
        .name = _("Go-Goggles"),
        .price = 0,
        .description = sGoGogglesDesc,
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_KEY_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_DEVON_SCOPE] =
    {
        .name = _("Devon Scope"),
        .price = 0,
        .description = sDevonScopeDesc,
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_KEY_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_BASEMENT_KEY] =
    {
        .name = _("Basement Key"),
        .price = 0,
        .description = sBasementKeyDesc,
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_KEY_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_SCANNER] =
    {
        .name = _("Scanner"),
        .price = 0,
        .description = sScannerDesc,
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_KEY_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_STORAGE_KEY] =
    {
        .name = _("Storage Key"),
        .price = 0,
        .description = sStorageKeyDesc,
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_KEY_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_KEY_TO_ROOM_1] =
    {
        .name = _("Key to Room 1"),
        .price = 0,
        .description = sKeyToRoom1Desc,
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_KEY_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_KEY_TO_ROOM_2] =
    {
        .name = _("Key to Room 2"),
        .price = 0,
        .description = sKeyToRoom2Desc,
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_KEY_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_KEY_TO_ROOM_4] =
    {
        .name = _("Key to Room 4"),
        .price = 0,
        .description = sKeyToRoom4Desc,
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_KEY_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_KEY_TO_ROOM_6] =
    {
        .name = _("Key to Room 6"),
        .price = 0,
        .description = sKeyToRoom6Desc,
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_KEY_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_METEORITE] =
    {
        .name = _("Meteorite"),
        .price = 0,
        .description = sMeteoriteDesc,
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_KEY_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_MAGMA_EMBLEM] =
    {
        .name = _("Magma Emblem"),
        .price = 0,
        .description = sMagmaEmblemDesc,
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_KEY_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_CONTEST_PASS] =
    {
        .name = _("Contest Pass"),
        .price = 0,
        .description = sContestPassDesc,
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_KEY_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_PARCEL] =
    {
        .name = _("Parcel"),
        .price = 0,
        .description = sParcelDesc,
        .importance = 2,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_KEY_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_SECRET_KEY] =
    {
        .name = _("Secret Key"),
        .price = 0,
        .description = sSecretKeyDesc,
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_KEY_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_BIKE_VOUCHER] =
    {
        .name = _("Bike Voucher"),
        .price = 0,
        .description = sBikeVoucherDesc,
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_KEY_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_GOLD_TEETH] =
    {
        .name = _("Gold Teeth"),
        .price = 0,
        .description = sGoldTeethDesc,
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_KEY_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_CARD_KEY] =
    {
        .name = _("Card Key"),
        .price = 0,
        .description = sCardKeyDesc,
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_KEY_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_LIFT_KEY] =
    {
        .name = _("Lift Key"),
        .price = 0,
        .description = sLiftKeyDesc,
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_KEY_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_SILPH_SCOPE] =
    {
        .name = _("Silph Scope"),
        .price = 0,
        .description = sSilphScopeDesc,
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_KEY_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_TRI_PASS] =
    {
        .name = _("Tri-Pass"),
        .price = 0,
        .description = sTriPassDesc,
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_KEY_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_RAINBOW_PASS] =
    {
        .name = _("Rainbow Pass"),
        .price = 0,
        .description = sRainbowPassDesc,
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_KEY_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_TEA] =
    {
        .name = _("Tea"),
        .price = 0,
        .description = sTeaDesc,
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_KEY_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_RUBY] =
    {
        .name = _("Ruby"),
        .price = 0,
        .description = sRubyDesc,
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_KEY_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_SAPPHIRE] =
    {
        .name = _("Sapphire"),
        .price = 0,
        .description = sSapphireDesc,
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_KEY_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_ABILITY_SHIELD] =
    {
        .name = _("AbilityShield"),
        .price = 20000,
        .holdEffect = HOLD_EFFECT_ABILITY_SHIELD,
        .description = sAbilityShieldDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
    },

    [ITEM_CLEAR_AMULET] =
    {
        .name = _("Clear Amulet"),
        .price = 30000,
        .holdEffect = HOLD_EFFECT_CLEAR_AMULET,
        .description = sClearAmuletDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
    },

    [ITEM_PUNCHING_GLOVE] =
    {
        .name = _("PunchingGlove"),
        .price = 15000,
        .holdEffect = HOLD_EFFECT_PUNCHING_GLOVE,
        .description = sPunchingGloveDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
    },

    [ITEM_COVERT_CLOAK] =
    {
        .name = _("Covert Cloak"),
        .price = 20000,
        .holdEffect = HOLD_EFFECT_COVERT_CLOAK,
        .description = sCovertCloakDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
    },

    [ITEM_LOADED_DICE] =
    {
        .name = _("Loaded Dice"),
        .price = 20000,
        .holdEffect = HOLD_EFFECT_LOADED_DICE,
        .description = sLoadedDiceDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
    },

    [ITEM_AUSPICIOUS_ARMOR] =
    {
        .name = _("AuspciousArmr"),
        .price = 3000,
        .description = sAuspiciousArmorDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
        .flingPower = 30,
    },

    [ITEM_BOOSTER_ENERGY] =
    {
        .name = _("BoosterEnergy"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_BOOSTER_ENERGY,
        .description = sBoosterEnergyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
    },

    [ITEM_BIG_BAMBOO_SHOOT] =
    {
        .name = _("BigBmbooShoot"),
        .price = 3000,
        .description = sBigBambooShootDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_EVOLUTION_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
    },

    [ITEM_GIMMIGHOUL_COIN] =
    {
        .name = _("GimighoulCoin"),
        .price = 400,
        .description = sGimmighoulCoinDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_EVOLUTION_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_LEADERS_CREST] =
    {
        .name = _("Leader'sCrest"),
        .price = 3000,
        .description = sLeadersCrestDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_EVOLUTION_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_MALICIOUS_ARMOR] =
    {
        .name = _("MaliciousArmr"),
        .price = 3000,
        .description = sMaliciousArmorDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_EVOLUTION_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
        .flingPower = 30,
    },

    [ITEM_MIRROR_HERB] =
    {
        .name = _("Mirror Herb"),
        .price = 30000,
        .holdEffect = HOLD_EFFECT_MIRROR_HERB,
        .description = sMirrorHerbDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
    },

    [ITEM_SCROLL_OF_DARKNESS] =
    {
        .name = _("ScrllOfDrknss"),
        .price = 0,
        .description = sScrollOfDarknessDesc,
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_KEY_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
    },

    [ITEM_SCROLL_OF_WATERS] =
    {
        .name = _("ScrollOfWatrs"),
        .price = 0,
        .description = sScrollOfWatersDesc,
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_KEY_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
    },

    [ITEM_TERA_ORB] =
    {
        .name = _("Tera Orb"),
        .price = 0,
        .description = sTeraOrbDesc,
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_KEY_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_TINY_BAMBOO_SHOOT] =
    {
        .name = _("TinyBmbooShot"),
        .price = 750,
        .description = sTinyBambooShootDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_SELLABLE,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
    },

    [ITEM_BUG_TERA_SHARD] =
    {
        .name = _("Bug TeraShard"),
        .price = 0,
        .description = sTeraShardDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_FIELD_USE,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_DARK_TERA_SHARD] =
    {
        .name = _("DarkTeraShard"),
        .price = 0,
        .description = sTeraShardDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_FIELD_USE,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_DRAGON_TERA_SHARD] =
    {
        .name = _("DragnTeraShrd"),
        .price = 0,
        .description = sTeraShardDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_FIELD_USE,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_ELECTRIC_TERA_SHARD] =
    {
        .name = _("EltrcTeraShrd"),
        .price = 0,
        .description = sTeraShardDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_FIELD_USE,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_FAIRY_TERA_SHARD] =
    {
        .name = _("FairyTeraShrd"),
        .price = 0,
        .description = sTeraShardDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_FIELD_USE,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_FIGHTING_TERA_SHARD] =
    {
        .name = _("FghtngTerShrd"),
        .price = 0,
        .description = sTeraShardDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_FIELD_USE,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_FIRE_TERA_SHARD] =
    {
        .name = _("FireTeraShard"),
        .price = 0,
        .description = sTeraShardDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_FIELD_USE,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_FLYING_TERA_SHARD] =
    {
        .name = _("FlyngTeraShrd"),
        .price = 0,
        .description = sTeraShardDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_FIELD_USE,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_GHOST_TERA_SHARD] =
    {
        .name = _("GhostTeraShrd"),
        .price = 0,
        .description = sTeraShardDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_FIELD_USE,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_GRASS_TERA_SHARD] =
    {
        .name = _("GrassTeraShrd"),
        .price = 0,
        .description = sTeraShardDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_FIELD_USE,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_GROUND_TERA_SHARD] =
    {
        .name = _("GrondTeraShrd"),
        .price = 0,
        .description = sTeraShardDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_FIELD_USE,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_ICE_TERA_SHARD] =
    {
        .name = _("Ice TeraShard"),
        .price = 0,
        .description = sTeraShardDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_FIELD_USE,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_NORMAL_TERA_SHARD] =
    {
        .name = _("NormlTeraShrd"),
        .price = 0,
        .description = sTeraShardDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_FIELD_USE,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_POISON_TERA_SHARD] =
    {
        .name = _("PoisnTeraShrd"),
        .price = 0,
        .description = sTeraShardDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_FIELD_USE,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_PSYCHIC_TERA_SHARD] =
    {
        .name = _("PschcTeraShrd"),
        .price = 0,
        .description = sTeraShardDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_FIELD_USE,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_ROCK_TERA_SHARD] =
    {
        .name = _("RockTeraShard"),
        .price = 0,
        .description = sTeraShardDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_FIELD_USE,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_STEEL_TERA_SHARD] =
    {
        .name = _("SteelTeraShrd"),
        .price = 0,
        .description = sTeraShardDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_FIELD_USE,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_WATER_TERA_SHARD] =
    {
        .name = _("WaterTeraShrd"),
        .price = 0,
        .description = sTeraShardDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_FIELD_USE,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_ADAMANT_CRYSTAL] =
    {
        .name = _("AdamantCrystl"),
        .price = 0,
        .description = sAdamantCrystalDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 60,
    },

    [ITEM_GRISEOUS_CORE] =
    {
        .name = _("Griseous Core"),
        .price = 0,
        .description = sGriseousCoreDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 60,
    },

    [ITEM_LUSTROUS_GLOBE] =
    {
        .name = _("LustrousGlobe"),
        .price = 0,
        .description = sLustrousGlobeDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 60,
    },

    [ITEM_BLACK_AUGURITE] =
    {
        .name = _("BlackAugurite"),
        .price = 8000,
        .description = sBlackAuguriteDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_EVOLUTION_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
        .flingPower = 30,
    },

    [ITEM_LINKING_CORD] =
    {
        .name = _("Linking Cord"),
        .price = 8000,
        .description = sLinkingCordDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_EVOLUTION_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
        .flingPower = 30,
    },

    [ITEM_PEAT_BLOCK] =
    {
        .name = _("Peat Block"),
        .price = 10000,
        .description = sPeatBlockDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_EVOLUTION_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
        .flingPower = 30,
    },

    [ITEM_BERSERK_GENE] =
    {
        .name = _("Berserk Gene"),
        .price = 20,
        .holdEffect = HOLD_EFFECT_BERSERK_GENE,
        .description = sBerserkGene,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_FAIRY_FEATHER] =
    {
        .name = _("Fairy Feather"),
        .price = 1000,
        .holdEffect = HOLD_EFFECT_FAIRY_POWER,
        .holdEffectParam = TYPE_BOOST_PARAM,
        .description = sFairyFeatherDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_SYRUPY_APPLE] =
    {
        .name = _("Syrupy Apple"),
        .price = 2200,
        .description = sSyrupyAppleDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_EVOLUTION_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
        .flingPower = 30,
    },

    [ITEM_UNREMARKABLE_TEACUP] =
    {
        .name = _("UnrmkblTeacup"),
        .price = 1600,
        .description = sUnremarkableTeacupDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_EVOLUTION_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
        .flingPower = 80,
    },

    [ITEM_MASTERPIECE_TEACUP] =
    {
        .name = _("MstrpceTeacup"),
        .price = 38000,
        .description = sMasterpieceTeacupDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_EVOLUTION_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
        .flingPower = 80,
    },

    [ITEM_CORNERSTONE_MASK] =
    {
        .name = _("CornrstneMask"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_MASK,
        .description = sCornerstoneMaskDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_ROCK,
    },

    [ITEM_WELLSPRING_MASK] =
    {
        .name = _("WellsprngMask"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_MASK,
        .description = sWellspringMaskDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_WATER,
    },

    [ITEM_HEARTHFLAME_MASK] =
    {
        .name = _("HrthflameMask"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_MASK,
        .description = sHearthflameMaskDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_FIRE,
    },

    [ITEM_HEALTH_MOCHI] =
    {
        .name = _("Health Mochi"),
        .price = 500,
        .description = sHealthMochiDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_STAT_BOOST,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .flingPower = 30,
    },

    [ITEM_MUSCLE_MOCHI] =
    {
        .name = _("Muscle Mochi"),
        .price = 500,
        .description = sMuscleMochiDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_STAT_BOOST,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .flingPower = 30,
    },

    [ITEM_RESIST_MOCHI] =
    {
        .name = _("Resist Mochi"),
        .price = 500,
        .description = sResistMochiDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_STAT_BOOST,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .flingPower = 30,
    },

    [ITEM_GENIUS_MOCHI] =
    {
        .name = _("Genius Mochi"),
        .price = 500,
        .description = sGeniusMochiDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_STAT_BOOST,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .flingPower = 30,
    },

    [ITEM_CLEVER_MOCHI] =
    {
        .name = _("Clever Mochi"),
        .price = 500,
        .description = sCleverMochiDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_STAT_BOOST,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .flingPower = 30,
    },

    [ITEM_SWIFT_MOCHI] =
    {
        .name = _("Swift Mochi"),
        .price = 500,
        .description = sSwiftMochiDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_STAT_BOOST,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .flingPower = 30,
    },

    [ITEM_FRESH_START_MOCHI] =
    {
        .name = _("FrshStrtMochi"),
        .price = 300,
        .description = sFreshStartMochiDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_STAT_BOOST,
        .fieldUseFunc = ItemUseOutOfBattle_ResetEVs,
        .flingPower = 30,
    },

    [ITEM_GLIMMERING_CHARM] =
    {
        .name = _("GlmmringCharm"),
        .price = 0,
        .importance = 1,
        .description = sGlimmeringCharmDesc,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_KEY_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },


// POKESCAPE ITEMS

//pokescape megastones

    [ITEM_FRAGMENT_OF_JAS] =
    {
        .name = _("JAS FRAGMENT"),
        .price = 200,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = sFragmentOfJasDesc,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_MEGA_Z,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },	
    
    [ITEM_MEGASTONE_TZHAAR] =
    {
        .name = _("TZHAAR FRAG"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = sFragmentOfJasDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_MEGA_Z,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_MEGASTONE_TOKHAAR] =
    {
        .name = _("TOKHAAR FRAG"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = sFragmentOfJasDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_MEGA_Z,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },
    
    [ITEM_MEGASTONE_WARRIOR] =
    {
        .name = _("WARRIOR FRAG"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = sFragmentOfJasDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_MEGA_Z,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },
    
    [ITEM_MEGASTONE_SEER] =
    {
        .name = _("SEER FRAG"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = sFragmentOfJasDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_MEGA_Z,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },
    
    [ITEM_MEGASTONE_ARCHER] =
    {
        .name = _("ARCHER FRAG"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = sFragmentOfJasDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_MEGA_Z,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },
    
    [ITEM_MEGASTONE_CHAOS] =
    {
        .name = _("CHAOS FRAG"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = sFragmentOfJasDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_MEGA_Z,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },
    
    [ITEM_MEGASTONE_KALPHITE] =
    {
        .name = _("KALPHITE FRAG"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = sFragmentOfJasDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_MEGA_Z,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },
    
    [ITEM_MEGASTONE_BEAST] =
    {
        .name = _("BEAST FRAG"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = sFragmentOfJasDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_MEGA_Z,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

	// Pokescape Evolution items

    [ITEM_AIR_RUNE] =
    {
        .name = _("AIR RUNE"),
        .price = 3000,
        .description = sAirRuneDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_EVOLUTION_STONE,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
    },
	

    [ITEM_WATER_RUNE] =
    {
        .name = _("WATER RUNE"),
        .price = 3000,
        .description = sEvoItemDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_EVOLUTION_STONE,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
    },
	
    [ITEM_EARTH_RUNE] =
    {
        .name = _("EARTH RUNE"),
        .price = 3000,
        .description = sEvoItemDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_EVOLUTION_STONE,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
    },	

	[ITEM_FIRE_RUNE] =
    {
        .name = _("FIRE RUNE"),
        .price = 3000,
        .description = sEvoItemDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_EVOLUTION_STONE,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
    },	
	
	[ITEM_MIND_RUNE] =
    {
        .name = _("MIND RUNE"),
        .price = 3000,
        .description = sEvoItemDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_EVOLUTION_STONE,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
    },	
	
	[ITEM_BODY_RUNE] =
    {
        .name = _("BODY RUNE"),
        .price = 3000,
        .description = sEvoItemDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_EVOLUTION_STONE,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
    },		
	
	[ITEM_COSMIC_RUNE] =
    {
        .name = _("COSMIC RUNE"),
        .price = 10000,
        .description = sEvoItemDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_EVOLUTION_STONE,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
    },		
	
	[ITEM_CHAOS_RUNE] =
    {
        .name = _("CHAOS RUNE"),
        .price = 10000,
        .description = sEvoItemDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_EVOLUTION_STONE,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
    },		
	
	[ITEM_NATURE_RUNE] =
    {
        .name = _("NATURE RUNE"),
        .price = 10000,
        .description = sEvoItemDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_EVOLUTION_STONE,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
    },		
	
	[ITEM_DEATH_RUNE] =
    {
        .name = _("DEATH RUNE"),
        .price = 10000,
        .description = sEvoItemDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_EVOLUTION_STONE,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
    },		
	
	[ITEM_BLOOD_RUNE] =
    {
        .name = _("BLOOD RUNE"),
        .price = 10000,
        .description = sEvoItemDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_EVOLUTION_STONE,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
    },		
	
	[ITEM_LAW_RUNE] =
    {
        .name = _("LAW RUNE"),
        .price = 10000,
        .description = sEvoItemDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_EVOLUTION_STONE,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
    },		
	
	[ITEM_SOUL_RUNE] =
    {
        .name = _("SOUL RUNE"),
        .price = 10000,
        .description = sEvoItemDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_EVOLUTION_STONE,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
    },		
	
	[ITEM_DUST_RUNE] =
    {
        .name = _("DUST RUNE"),
        .price = 20000,
        .description = sEvoItemDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_EVOLUTION_STONE,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
    },		
	
	[ITEM_MUD_RUNE] =
    {
        .name = _("MUD RUNE"),
        .price = 20000,
        .description = sEvoItemDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_EVOLUTION_STONE,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
    },		
	
	[ITEM_MIST_RUNE] =
    {
        .name = _("MIST RUNE"),
        .price = 20000,
        .description = sEvoItemDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_EVOLUTION_STONE,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
    },		
	
	[ITEM_LAVA_RUNE] =
    {
        .name = _("LAVA RUNE"),
        .price = 20000,
        .description = sEvoItemDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_EVOLUTION_STONE,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
    },		
	
	[ITEM_LIFE_RUNE] =
    {
        .name = _("LIFE RUNE"),
        .price = 50000,
        .description = sEvoItemDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_EVOLUTION_STONE,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
    },		
	
	[ITEM_ASTRAL_RUNE] =
    {
        .name = _("ASTRAL RUNE"),
        .price = 10000,
        .description = sEvoItemDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_EVOLUTION_STONE,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
    },			
	
	[ITEM_SPIRIT_CHARM] =
    {
        .name = _("SPIRIT CHARM"),
        .price = 2100,
        .description = sEvoItemDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_EVOLUTION_STONE,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
    },	

	[ITEM_BAD_EGG] =
    {
        .name = _("BAD EGG"),
        .price = 2100,
        .description = sEvoItemDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_EVOLUTION_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
    },		
	
	[ITEM_LEGENDARY_ITEM] =
    {
        .name = _("LEGEND EVOLVE"),
        .price = 2100,
        .description = sEvoLegendaryItemDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_EVOLUTION_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
    },	

	[ITEM_DAGANNOTH_EGG_SHELL] =
    {
        .name = _("EGG SHELL"),
        .price = 2100,
        .description = sEvoLegendaryItemDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_EVOLUTION_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
    },

	[ITEM_DAGANNOTH_SCALE] =
    {
        .name = _("DAGG SCALE"),
        .price = 2100,
        .description = sEvoLegendaryItemDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_EVOLUTION_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
    },

	[ITEM_SHRIVELLED_DAGANNOTH_CLAW] =
    {
        .name = _("DAGG CLAW"),
        .price = 2100,
        .description = sEvoLegendaryItemDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_EVOLUTION_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
    },

	[ITEM_NUMBLING_ROOT] =
    {
        .name = _("NUMBLING ROOT"),
        .price = 2100,
        .description = sEvoLegendaryItemDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_EVOLUTION_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
    },

	[ITEM_SOCK] =
    {
        .name = _("SOCK"),
        .price = 2100,
        .description = sEvoLegendaryItemDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_EVOLUTION_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
    },

	[ITEM_TEAR_OF_GUTHIX] =
    {
        .name = _("GUTHIX TEAR"),
        .price = 2100,
        .description = sEvoLegendaryItemDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_EVOLUTION_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
    },

    [ITEM_VANILLA_MILK] =    
    {
        .name = _("VANILLA MILK"),
        .price = 3000,
        .description = sVanillaMilkDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_EVOLUTION_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
    },
    
    [ITEM_STRAWBERRY_MILK] =    
    {
        .name = _("S-BERRY MILK"),
        .price = 3000,
        .description = sStrawberryMilkDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_EVOLUTION_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
    },
    
    [ITEM_CHOCOLATE_MILK] =    
    {
        .name = _("CHOC MILK"),
        .price = 3000,
        .description = sChocolateMilkDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_EVOLUTION_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
    },


// Pokescape Medicine
	[ITEM_BREAD] = 
    {
        .name = _("BREAD"),
        .price = 200,
        .holdEffectParam = 20,
        .description = sBreadDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_HEALTH_RECOVERY,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = EFFECT_ITEM_RESTORE_HP,
    },

    [ITEM_CAKE] =
    {
        .name = _("CAKE"),
        .price = 700,
        .holdEffectParam = 50,
        .description = sCakeDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_HEALTH_RECOVERY,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = EFFECT_ITEM_RESTORE_HP,
    },

    [ITEM_CHOCOLATE_CAKE] =
    {
        .name = _("CHOC CAKE"),
        .price = 1200,
        .holdEffectParam = 150,
        .description = sChocolateCakeDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_HEALTH_RECOVERY,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = EFFECT_ITEM_RESTORE_HP,
    },

    

    [ITEM_FROGEEL_BURGER] =
    {
        .name = _("F.BURGER"),
        .price = 1500,
        .description = sFrogeelBurgerDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_HEALTH_RECOVERY,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = EFFECT_ITEM_RESTORE_HP,
    },

    [ITEM_CABBAGE] =
    {
        .name = _("CABBAGE"),
        .price = 2000,
        .description = sPokeScapeReviveDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_HEALTH_RECOVERY,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = EFFECT_ITEM_REVIVE,
        .flingPower = 30,
    },

    [ITEM_CHOCOLATE_SUNDAY] = //ANTIDOTE
    {
        .name = _("CHOC SUNDAY"),
        .price = 200,
        .description = sChocolateSundayDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_STATUS_RECOVERY,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = EFFECT_ITEM_CURE_STATUS,
        .flingPower = 30,
    },
    
    [ITEM_PINEAPPLE_PUNCH] = //Paralyze Heal
    {
        .name = _("P.APPLE PUNCH"),
        .price = 200,
        .description = sPineapplePunchDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_STATUS_RECOVERY,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = EFFECT_ITEM_CURE_STATUS,
        .flingPower = 30,
    },

    [ITEM_DRUNK_DRAGON] = //BURN HEAL
    {
        .name = _("DRUNK DRAGON"),
        .price = 200,
        .description = sDrunkDragonDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_STATUS_RECOVERY,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = EFFECT_ITEM_CURE_STATUS,
        .flingPower = 30,
    },

    [ITEM_WIZARDS_BLIZZARD] = //Ice Heal
    {
        .name = _("WIZZ BLIZZ"),
        .price = 200,
        .description = sWizardsBlizzardDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_STATUS_RECOVERY,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = EFFECT_ITEM_CURE_STATUS,
        .flingPower = 30,
    },

    [ITEM_FRUIT_BLAST] = //Awakening
    {
        .name = _("FRUIT BLAST"),
        .price = 200,
        .description = sFruitBlastDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_STATUS_RECOVERY,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = EFFECT_ITEM_CURE_STATUS,
        .flingPower = 30,
    },

    [ITEM_BLUEBERRY_SPECIAL] = //FULL HEAL
    {
        .name = _("BLUEBERRY SP"),
        .price = 400,
        .description = sBlueberrySpecialDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_STATUS_RECOVERY,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = EFFECT_ITEM_CURE_STATUS,
        .flingPower = 30,
    },


    [ITEM_PURPLE_SWEETS] =
    {
        .name = _("PURPLE SWEETS"),
        .price = 10000,
        .description = sPurpleSweetsDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_FIELD_USE,
        .fieldUseFunc = ItemUseOutOfBattle_RareCandy,
        .flingPower = 30,
    },

    [ITEM_STAT_BEER] =
    {
        .name = _("BEER"),
        .price = 9800,
        .description = sPPUpDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_PP_RECOVERY,
        .fieldUseFunc = ItemUseOutOfBattle_PPUp,
    },

    [ITEM_STAT_MOONLIGHT_MEAD] =
    {
        .name = _("MOONLIGHTMEAD"),
        .price = 9800,
        .description = sPPMaxDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_PP_RECOVERY,
        .fieldUseFunc = ItemUseOutOfBattle_PPUp,
    },

    [ITEM_LAMP_ATT] =
    {
        .name = _("ATK LAMP"),
        .price = 9800,
        .description = sAtkLampDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_STAT_BOOST,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
    },

    [ITEM_LAMP_DEF] =
    {
        .name = _("DEF LAMP"),
        .price = 9800,
        .description = sDefLampDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_STAT_BOOST,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
    },

    [ITEM_LAMP_HP] =
    {
        .name = _("HP LAMP"),
        .price = 9800,
        .description = sHPLampDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_STAT_BOOST,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
    },

    [ITEM_LAMP_SPATT] =
    {
        .name = _("SP. ATK LAMP"),
        .price = 9800,
        .description = sSpAtkLampDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_STAT_BOOST,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
    },

    [ITEM_LAMP_SPDEF] =
    {
        .name = _("SP. DEF LAMP"),
        .price = 9800,
        .description = sSpDefLampDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_STAT_BOOST,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
    },

    [ITEM_LAMP_SPEED] =
    {
        .name = _("SPEED LAMP"),
        .price = 9800,
        .description = sSpeedLampDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_STAT_BOOST,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
    },

#define X_ITEM_STAGES (B_X_ITEMS_BUFF >= GEN_7) ? 2 : 1

    [ITEM_POTION_ACC] =
    {
        .name = _("ACC POTION"),
        .price = 950,
        .holdEffectParam = X_ITEM_STAGES,
        .description = sXAccuracyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_BATTLE_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = EFFECT_ITEM_INCREASE_STAT,
    },

    [ITEM_POTION_ATT] =
    {
        .name = _("ATK POTION"),
        .price = 350,
        .holdEffectParam = X_ITEM_STAGES,
        .description = sXAttackDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_BATTLE_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = EFFECT_ITEM_INCREASE_STAT,
    },

    [ITEM_POTION_DEF] =
    {
        .name = _("DEF POTION"),
        .price = 350,
        .holdEffectParam = X_ITEM_STAGES,
        .description = sXDefenseDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_BATTLE_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = EFFECT_ITEM_INCREASE_STAT,
    },

    [ITEM_POTION_SPATT] =
    {
        .name = _("SPATK POTION"),
        .price = 350,
        .holdEffectParam = X_ITEM_STAGES,
        .description = sXSpAtkDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_BATTLE_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = EFFECT_ITEM_INCREASE_STAT,
    },
    
    [ITEM_POTION_SPDEF] =
    {
        .name = _("SPDEF POTION"),
        .price = 350,
        .holdEffectParam = X_ITEM_STAGES,
        .description = sXSpDefDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_BATTLE_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = EFFECT_ITEM_INCREASE_STAT,
    },

    [ITEM_POTION_SPEED] =
    {
        .name = _("SPEED POTION"),
        .price = 350,
        .holdEffectParam = X_ITEM_STAGES,
        .description = sXSpeedDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_BATTLE_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = EFFECT_ITEM_INCREASE_STAT,
    },

#undef X_ITEM_STAGES

    [ITEM_PRAYER_POTION] =
    {
        .name = _("PRAYER POTION"),
        .price = 1200,
        .holdEffectParam = 10,
        .description = sEtherDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU_MOVES,
        .sort = ITEM_TYPE_PP_RECOVERY,
        .fieldUseFunc = ItemUseOutOfBattle_PPRecovery,
        .battleUsage = EFFECT_ITEM_RESTORE_PP,
        .flingPower = 30,
    },

    [ITEM_SUPER_PRAYER_POTION] =
    {
        .name = _("SUPER P. POT"),
        .price = 4500,
        .holdEffectParam = 255,
        .description = sMaxElixirDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_PP_RECOVERY,
        .fieldUseFunc = ItemUseOutOfBattle_PPRecovery,
        .battleUsage = EFFECT_ITEM_RESTORE_PP,
    },

//Held items   
    [ITEM_PRISMATIC_STAR] =
    {
        .name = _("BONUS STAR"),
        .price = 200,
        .holdEffect = HOLD_EFFECT_LUCKY_EGG,
        .description = sPrismaticShardDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_RUNE_ESSENCE] =
    {
        .name = _("RUNE ESSENCE"),
        .price = 200,
        .holdEffect = HOLD_EFFECT_PREVENT_EVOLVE,
        .description = sEverstoneDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_RED_SCALE] =
    {
        .name = _("RED SCALE"),
        .price = 2100,
        .description = sRedScaleDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_SELLABLE,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },
	
    [ITEM_BLUE_SCALE] =
    {
        .name = _("BLUE SCALE"),
        .price = 2100,
        .description = sBlueScaleDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_SELLABLE,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },	
	
    [ITEM_BLACK_SCALE] =
    {
        .name = _("BLACK SCALE"),
        .price = 2100,
        .description = sBlackScaleDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_SELLABLE,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },		
	
    [ITEM_GREEN_SCALE] =
    {
        .name = _("GREEN SCALE"),
        .price = 2100,
        .description = sGreenScaleDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_SELLABLE,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_LUCKYRABBITFOOT] =
    {
        .name = _("LUCKY FOOT"),
        .price = 0,
        .description = sRabbitFootDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_FIELD,
        .sort = ITEM_TYPE_SELLABLE,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_GODRABBITFOOT] =
    {
        .name = _("BLESSED FOOT"),
        .price = 0,
        .description = sGodRabbitFootDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_FIELD,
        .sort = ITEM_TYPE_SELLABLE,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_10TH_SQUAD_SIGIL] =
    {
        .name = _("10TH SIGIL"),
        .price = 100,
        .holdEffect = HOLD_EFFECT_FLINCH,
        .holdEffectParam = 15,
        .description = s10thSigilDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_ABYSSAL_WHIP] =
    {
        .name = _("ABYSSAL WHIP"),
        .price = 100,
        .holdEffect = HOLD_EFFECT_CHOICE_BAND,
        .description = sAbyssalWhipDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_ARMA_HELM] =
    {
        .name = _("ARMA HELM"),
        .price = 9800,
        .holdEffect = HOLD_EFFECT_FLYING_POWER,
        .holdEffectParam = 20,
        .description = sArmahelmDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_BLOODFURY] =
    {
        .name = _("BLOOD FURY"),
        .price = 200,
        .holdEffect = HOLD_EFFECT_SHELL_BELL,
        .holdEffectParam = 4,
        .description = sBloodFuryDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_BLUEBOATER] =
    {
        .name = _("BLUE BOATER"),
        .price = 200,
        .holdEffect = HOLD_EFFECT_RANDOM_STAT_DOWN,
        .description = sBlueBoaterDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_BONECROSSBOW] =
    {
        .name = _("BONE XBOW"),
        .price = 15000,
        .holdEffect = HOLD_EFFECT_WIDE_LENS,
        .description = sBoneXBowDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_BRONZEHELMET] =
    {
        .name = _("BRONZE HELM"),
        .price = 9800,
        .holdEffect = HOLD_EFFECT_EVIOLITE,
        .description = sBronzeHelmDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },
    [ITEM_DAGONHAIHAT] =
    {
        .name = _("DAGONHAI HAT"),
        .price = 200,
        .holdEffect = HOLD_EFFECT_TERRAIN_EXTENDER,
        .description = sDagonHaiHatDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },
    [ITEM_DOUBLE_EYEPATCH] =
    {
        .name = _("EYEPATCHES"),
        .price = 100,
        .holdEffect = HOLD_EFFECT_DARK_POWER,
        .holdEffectParam = 20,
        .description = sEyePatchDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_DRAGON_CLAWS] =
    {
        .name = _("DRAGON CLAWS"),
        .price = 100,
        .holdEffect = HOLD_EFFECT_QUICK_CLAW,
        .holdEffectParam = 50,
        .description = sDragonClawDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_DRAGON_DAGGER_POISON] =
    {
        .name = _("DDS"),
        .price = 100,
        .holdEffect = HOLD_EFFECT_POISON_POWER,
        .holdEffectParam = 20,
        .description = sDragonDaggerPoisonDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_DRAGON_SCIMITAR] =
    {
        .name = _("DRAGON SCIM"),
        .price = 100,
        .holdEffect = HOLD_EFFECT_DRAGON_POWER,
        .holdEffectParam = 20,
        .description = sDragonScimitarDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_DRUID_POUCH] =
    {
        .name = _("DRUID POUCH"),
        .price = 100,
        .holdEffect = HOLD_EFFECT_GRASS_POWER,
        .holdEffectParam = 20,
        .description = sDruidPouchDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_EFFIGY] =
    {
        .name = _("EFFIGY"),
        .price = 100,
        .holdEffect = HOLD_EFFECT_WEAKNESS_POLICY,
        .description = sEffigyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_ELEMENTAL_SHIELD] =
    {
        .name = _("ELE SHIELD"),
        .price = 100,
        .holdEffect = HOLD_EFFECT_ASSAULT_VEST,
        .description = sElementalShieldDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_FIGHTER_BOOTS] =
    {
        .name = _("FIGHTER BOOTS"),
        .price = 100,
        .holdEffect = HOLD_EFFECT_FIGHTING_POWER,
        .holdEffectParam = 20,
        .description = sFighterBootsDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_FIGHTER_TORSO] =
    {
        .name = _("FIGHTER TORSO"),
        .price = 3000,
        .holdEffect = HOLD_EFFECT_MACHO_BRACE,
        .description = sFighterTorsoDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_FIRECAPE] =
    {
        .name = _("FIRE CAPE"),
        .price = 3000,
        .holdEffect = HOLD_EFFECT_FLAME_ORB,
        .description = sFireCapeDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_GHOSTSPEAK_AMULET] =
    {
        .name = _("GHOSTSPEAK"),
        .price = 100,
        .holdEffect = HOLD_EFFECT_GHOST_POWER,
        .holdEffectParam = 20,
        .description = sGhostSpeakDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_GODSWORD] =
    {
        .name = _("SARA GODSWORD"),
        .price = 200,
        .holdEffect = HOLD_EFFECT_GODSWORD,
        .holdEffectParam = 8,
        .description = sGodSwordDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_GNOMEGOGGLES] =
    {
        .name = _("GNOME GOGGLES"),
        .price = 100,
        .holdEffect = HOLD_EFFECT_CHOICE_SPECS,
        .description = sGnomeGogglesDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_GNOMESCARF] =
    {
        .name = _("GNOME SCARF"),
        .price = 100,
        .holdEffect = HOLD_EFFECT_CHOICE_SCARF,
        .description = sGnomScarfDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },
    
    [ITEM_GUTHANSPEAR] =
    {
        .name = _("GUTHAN SPEAR"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_BIG_ROOT,
        .description = sGuthanSpearDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_FIELD,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_GRANITE_MAUL] =
    {
        .name = _("GRANITE MAUL"),
        .price = 100,
        .holdEffect = HOLD_EFFECT_ROCK_POWER,
        .holdEffectParam = 20,
        .description = sGraniteMaulDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_HOLY_WRENCH] =
    {
        .name = _("HOLY WRENCH"),
        .price = 100,
        .holdEffect = HOLD_EFFECT_ELECTRIC_POWER,
        .holdEffectParam = 20,
        .description = sHolyWrenchDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_FANCY_BOOTS] =
    {
        .name = _("FANCY BOOTS"),
        .price = 100,
        .holdEffect = HOLD_EFFECT_FAIRY_POWER,
        .holdEffectParam = 20,
        .description = sInfinityBootsDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_IRONMAN_HELMET] =
    {
        .name = _("IRONMAN HELM"),
        .price = 9800,
        .holdEffect = HOLD_EFFECT_STEEL_POWER,
        .holdEffectParam = 20,
        .description = sIronmanHelmetDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_ITEM_GNOMEBALL] =
    {
        .name = _("GNOMEBALL"),
        .price = 100,
        .holdEffect = HOLD_EFFECT_FRIENDSHIP_UP,
        .description = sGnomeBallDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_KERIS] =
    {
        .name = _("KERIS"),
        .price = 100,
        .holdEffect = HOLD_EFFECT_BUG_POWER,
        .holdEffectParam = 20,
        .description = sKerisDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_KRAKEN_TENTACLE] =
    {
        .name = _("KRAKEN WHIP"),
        .price = 100,
        .holdEffect = HOLD_EFFECT_POISON_POWER,
        .holdEffectParam = 20,
        .description = sKrakenTentaclePouchDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_LINZAHAMMER] =
    {
        .name = _("LINZA HAMMER"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_ROCKY_HELMET,
        .description = sLinzaHammerDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_FIELD,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },
    
    [ITEM_ORB_OF_OCULUS] =
    {
        .name = _("OCULUS ORB"),
        .price = 200,
        .holdEffect = HOLD_EFFECT_SCOPE_LENS,
        .description = sOrbOfOcullusDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_OVERLOAD] =
    {
        .name = _("OVERLOAD"),
        .price = 200,
        .holdEffect = HOLD_EFFECT_LIFE_ORB,
        .description = sOverloadhDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_RING_OF_LIFE] =
    {
        .name = _("RING OF LIFE"),
        .price = 200,
        .holdEffect = HOLD_EFFECT_EJECT_BUTTON,
        .description = sRingOfLifeDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_RING_OF_WEALTH] =
    {
        .name = _("RING O WEALTH"),
        .price = 100,
        .holdEffect = HOLD_EFFECT_DOUBLE_PRIZE,
        .holdEffectParam = 10,
        .description = sRingOfWealthDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_ROCKCAKE] =
    {
        .name = _("ROCK CAKE"),
        .price = 100,
        .holdEffect = HOLD_EFFECT_STICKY_BARB,
        .holdEffectParam = 10,
        .description = sRockCakeDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_SARADOMIN_BREW] =
    {
        .name = _("SARA BREW"),
        .price = 200,
        .holdEffect = HOLD_EFFECT_LEFTOVERS,
        .holdEffectParam = 10,
        .description = sSaraBrewDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_SICKLE] =
    {
        .name = _("SILVER SICKLE"),
        .price = 200,
        .holdEffect = HOLD_EFFECT_REPEL,
        .description = sSilverSickleDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_SNELM] =
    {
        .name = _("SNELM"),
        .price = 100,
        .holdEffect = HOLD_EFFECT_SNELM,
        .description = sSnelmDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_SPIRITSHIELD] =
    {
        .name = _("SPIRIT SHIELD"),
        .price = 100,
        .holdEffect = HOLD_EFFECT_SPIRIT_SHIELD,
        .description = sSpiritShieldDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_SPOTTEDCAPE] =
    {
        .name = _("SPOTTED CAPE"),
        .price = 100,
        .holdEffect = HOLD_EFFECT_SHED_SHELL,
        .description = sSpottedCapeDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_STAFF_OF_EARTH] =
    {
        .name = _("EARTH STAFF"),
        .price = 100,
        .holdEffect = HOLD_EFFECT_GROUND_POWER,
        .holdEffectParam = 20,
        .description = sEarthStaffDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_TINDERBOX] =
    {
        .name = _("TINDERBOX"),
        .price = 100,
        .holdEffect = HOLD_EFFECT_FIRE_POWER,
        .holdEffectParam = 20,
        .description = sTinderboxDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_TOME_OF_FROST] =
    {
        .name = _("FROST TOME"),
        .price = 100,
        .holdEffect = HOLD_EFFECT_ICE_POWER,
        .holdEffectParam = 20,
        .description = sTomeOfFrostDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_WATERSKIN] =
    {
        .name = _("WATERSKIN"),
        .price = 100,
        .holdEffect = HOLD_EFFECT_WATER_POWER,
        .holdEffectParam = 20,
        .description = sWaterskinDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_WIZARDS_HAT] =
    {
        .name = _("WIZARD HAT"),
        .price = 100,
        .holdEffect = HOLD_EFFECT_PSYCHIC_POWER,
        .holdEffectParam = 20,
        .description = sWizardHatDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_WOOLBALL] =
    {
        .name = _("BALL OF WOOL"),
        .price = 100,
        .holdEffect = HOLD_EFFECT_NORMAL_POWER,
        .holdEffectParam = 20,
        .description = sBallOfWoolDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_VERACFLAIL] =
    {
        .name = _("VERAC FLAIL"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_VERAC,
        .description = sVeracFlailDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_DHAROKAXE] =
    {
        .name = _("DHAROK AXE"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_DHAROK,
        .description = sDharokaxeDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_KARILCROSSBOW] =
    {
        .name = _("KARIL XBOW"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_KARIL,
        .description = sKarilXBowDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_AHRIMSTAFF] =
    {
        .name = _("AHRIM STAFF"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_AHRIM,
        .description = sahrimStaffDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_TORAGHAMMER] =
    {
        .name = _("TORAG HAMMER"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_TORAG,
        .description = sToragHammerDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_AKRISAEMACE] =
    {
        .name = _("AKRISAE MACE"),
        .holdEffect = HOLD_EFFECT_PRESSURE,
        .price = 0,
        .description = sAkriaeMaceDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_FIELD,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_DFS] =
    {
        .name = _("ANTI-DRAGON"),
        .holdEffect = HOLD_EFFECT_DFS,
        .price = 0,
        .description = sDFSDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_FIELD,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_PHOENIX_NECKLACE] = 
        {
        .name = _("PHOENIX NECK"),
        .holdEffect = HOLD_EFFECT_FOCUS_SASH,
        .price = 0,
        .description = sPhoenixNeckDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_FIELD,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_MITHRIL_SCIMITAR] = 
        {
        .name = _("MITH SCIMITAR"),
        .holdEffect = HOLD_EFFECT_EVO_ATTACK,
        .price = 0,
        .description = sMithrilScimitarDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_FIELD,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_SNOW_GLOBE] = 
        {
        .name = _("SNOW GLOBE"),
        .holdEffect = HOLD_EFFECT_WEATHER_EXTENDER,
        .price = 0,
        .description = sSnowGlobeDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_FIELD,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    // Start qol_field_moves
    [ITEM_CUT_TOOL] =
    {
        .name = _("DRAGON AXE"),
        .price = 0,
        .importance = 1,
        .description = sDragonAxeDesc,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_FIELD,
        .sort = ITEM_TYPE_KEY_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CutTool,
    },

    [ITEM_FLY_TOOL] =
    {
        .name = _("TELEPORTS"),
        .price = 0,
        .importance = 1,
        .description = sTeleportsDesc,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_FIELD,
        .sort = ITEM_TYPE_KEY_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_FlyTool,
    },

    [ITEM_SURF_TOOL] =
    {
        .name = _("BOAT"),
        .price = 0,
        .importance = 1,
        .description = sBoatDesc,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_FIELD,
        .sort = ITEM_TYPE_KEY_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_SurfTool,
    },

    [ITEM_STRENGTH_TOOL] =
    {
        .name = _("BATTLEAXE"),
        .price = 0,
        .importance = 1,
        .description = sBattleaxeDesc,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_FIELD,
        .sort = ITEM_TYPE_KEY_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_StrengthTool,
    },

    [ITEM_FLASH_TOOL] =
    {
        .name = _("LANTERN"),
        .price = 0,
        .importance = 1,
        .description = sLanternDesc,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_FIELD,
        .sort = ITEM_TYPE_KEY_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_FlashTool,
    },

    [ITEM_ROCKSMASH_TOOL] =
    {
        .name = _("RockSmashTool"),
        .price = 0,
        .importance = 1,
        .description = sRockSmashToolDesc,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_FIELD,
        .sort = ITEM_TYPE_KEY_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_RockSmashTool,
    },

    [ITEM_WATERFALL_TOOL] =
    {
        .name = _("GRAPPLE"),
        .price = 0,
        .importance = 1,
        .description = sGrappleDesc,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_FIELD,
        .sort = ITEM_TYPE_KEY_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_WaterfallTool,
    },

    [ITEM_DIVE_TOOL] =
    {
        .name = _("DIVING GEAR"),
        .price = 0,
        .importance = 1,
        .description = sDivingGearDesc,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_FIELD,
        .sort = ITEM_TYPE_KEY_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_DiveTool,
    },

    [ITEM_TELEPORT_TOOL] =
    {
        .name = _("SPADE"),
        .price = 0,
        .importance = 1,
        .description = sSpadeDesc,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_FIELD,
        .sort = ITEM_TYPE_KEY_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_TeleportTool,
    },

    [ITEM_SWEETSCENT_TOOL] =
    {
        .name = _("SweetScntTool"),
        .price = 0,
        .importance = 1,
        .description = sSweetScentToolDesc,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_FIELD,
        .sort = ITEM_TYPE_KEY_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_SweetScentTool,
    },

    [ITEM_CLIMBINGBOOTS] = //Rock Climb
    {
        .name = _("CLIMB BOOTS"),
        .price = 0,
        .importance = 1,
        .description = sSweetScentToolDesc,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_FIELD,
        .sort = ITEM_TYPE_KEY_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_SweetScentTool,
    },

    // End qol_field_moves
    [ITEM_SMALL_NET] =
    {
        .name = _("SMALL NET"),
        .price = 0,
        .description = sSmallNetDesc,
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_FIELD,
        .sort = ITEM_TYPE_KEY_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_Rod,
        .secondaryId = OLD_ROD,
    },
	
    [ITEM_BIG_NET] =
    {
        .name = _("BIG NET"),
        .price = 0,
        .description = sBigNetDesc,
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_FIELD,
        .sort = ITEM_TYPE_KEY_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_Rod,
        .secondaryId = GOOD_ROD,
    },
	
    [ITEM_DRAGON_NET] =
    {
        .name = _("DRAGON NET"),
        .price = 0,
        .description = sDragonNetDesc,
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_FIELD,
        .sort = ITEM_TYPE_KEY_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_Rod,
        .secondaryId = SUPER_ROD,
    },

    [ITEM_TERRORBIRD_POUCH] =
    {
        .name = _("TERRORBIRD"),
        .price = 0,
        .description = sTerrorbirdDesc,
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_FIELD,
        .sort = ITEM_TYPE_KEY_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_Bike,
        .secondaryId = MACH_BIKE,
    },

    [ITEM_YAK_POUCH] =
    {
        .name = _("TRANSPORT YAK"),
        .price = 0,
        .description = sYakDesc,
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_FIELD,
        .sort = ITEM_TYPE_KEY_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_Bike,
        .secondaryId = ACRO_BIKE,
    },

    [ITEM_MAP] =
    {
        .name = _("NEWCOMER MAP"),
        .price = 0,
        .description = sNewcomerMapDesc,
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_FIELD,
        .sort = ITEM_TYPE_KEY_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_PokescapeMap,
    },

    [ITEM_LOVELETTER] =
    {
        .name = _("LOVE LETTER"),
        .price = 0,
        .description = sElementalPouchDesc,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_FIELD,
        .sort = ITEM_TYPE_KEY_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_RESEARCHNOTES] =
    {
        .name = _("ABYSSAL NOTES"),
        .price = 0,
        .description = sElementalPouchDesc,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_FIELD,
        .sort = ITEM_TYPE_KEY_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_SPECIAL_CAKE] =
    {
        .name = _("SPECIAL CAKE"),
        .price = 0,
        .description = sSpecialCakeDesc,
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_KEY_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_STAKE] =
    {
        .name = _("STAKE"),
        .price = 0,
        .description = sElementalPouchDesc,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_FIELD,
        .sort = ITEM_TYPE_KEY_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_TALISMAN_EARTH] =
    {
        .name = _("EARTH TALLY"),
        .price = 0,
        .description = sTALISMANDesc,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_FIELD,
        .sort = ITEM_TYPE_KEY_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_TALISMAN_FIRE] =
    {
        .name = _("FIRE TALLY"),
        .price = 0,
        .description = sTALISMANDesc,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_FIELD,
        .sort = ITEM_TYPE_KEY_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_TALISMAN_LAW] =
    {
        .name = _("LAW TALLY"),
        .price = 0,
        .description = sTALISMANDesc,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_FIELD,
        .sort = ITEM_TYPE_KEY_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_TALISMAN_MIND] =
    {
        .name = _("MIND TALLY"),
        .price = 0,
        .description = sTALISMANDesc,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_FIELD,
        .sort = ITEM_TYPE_KEY_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_TALISMAN_NATURE] =
    {
        .name = _("NATURE TALLY"),
        .price = 0,
        .description = sTALISMANDesc,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_FIELD,
        .sort = ITEM_TYPE_KEY_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_TALISMAN_SOUL] =
    {
        .name = _("SOUL TALLY"),
        .price = 0,
        .description = sTALISMANDesc,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_FIELD,
        .sort = ITEM_TYPE_KEY_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_TALISMAN_WATER] =
    {
        .name = _("WATER TALLY"),
        .price = 0,
        .description = sTALISMANDesc,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_FIELD,
        .sort = ITEM_TYPE_KEY_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_TALISMAN_AIR] =
    {
        .name = _("AIR TALLY"),
        .price = 0,
        .description = sTALISMANDesc,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_FIELD,
        .sort = ITEM_TYPE_KEY_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_TALISMAN_CHAOS] =
    {
        .name = _("CHAOS TALLY"),
        .price = 0,
        .description = sTALISMANDesc,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_FIELD,
        .sort = ITEM_TYPE_KEY_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_TALISMAN_COSMIC] =
    {
        .name = _("COSMIC TALLY"),
        .price = 0,
        .description = sTALISMANDesc,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_FIELD,
        .sort = ITEM_TYPE_KEY_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_TALISMAN_BODY] =
    {
        .name = _("BODY TALLY"),
        .price = 0,
        .description = sTALISMANDesc,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_FIELD,
        .sort = ITEM_TYPE_KEY_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },


// Pickaxes
    [ITEM_RUNEPICKAXE] =
    {
        .name = _("PICKAXE"),
        .price = 0,
        .description = sPickaxeDesc,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_FIELD,
        .sort = ITEM_TYPE_KEY_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_RockSmashTool,
    },

    [ITEM_ADAMANTPICKAXE] =
    {
        .name = _("PICKAXE"),
        .price = 0,
        .description = sPickaxeDesc,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_FIELD,
        .sort = ITEM_TYPE_KEY_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_RockSmashTool,
    },

    [ITEM_MITHRILPICKAXE] =
    {
        .name = _("PICKAXE"),
        .price = 0,
        .description = sPickaxeDesc,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_FIELD,
        .sort = ITEM_TYPE_KEY_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_RockSmashTool,
    },

    [ITEM_BLACKPICKAXE] =
    {
        .name = _("PICKAXE"),
        .price = 0,
        .description = sPickaxeDesc,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_FIELD,
        .sort = ITEM_TYPE_KEY_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_RockSmashTool,
    },

    [ITEM_STEELPICKAXE] =
    {
        .name = _("PICKAXE"),
        .price = 0,
        .description = sPickaxeDesc,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_FIELD,
        .sort = ITEM_TYPE_KEY_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_RockSmashTool,
    },

    [ITEM_IRONPICKAXE] =
    {
        .name = _("PICKAXE"),
        .price = 0,
        .description = sPickaxeDesc,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_FIELD,
        .sort = ITEM_TYPE_KEY_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_RockSmashTool,
    },

    [ITEM_BRONZEPICKAXE] =
    {
        .name = _("PICKAXE"),
        .price = 0,
        .description = sPickaxeDesc,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_FIELD,
        .sort = ITEM_TYPE_KEY_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_RockSmashTool,
    },

    [ITEM_DRAGON_PICKAXE] =
    {
        .name = _("PICKAXE"),
        .price = 0,
        .description = sPickaxeDesc,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_FIELD,
        .sort = ITEM_TYPE_KEY_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_RockSmashTool,
    },

    // Crafting Items	
    [ITEM_COPPER_ORE] =
    {
        .name = _("Copper Ore"),
        .price = 210,
        .description = sCupholderDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_FIELD,
        .sort = ITEM_TYPE_RELIC,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },
	
    [ITEM_TIN_ORE] =
    {
        .name = _("Tin Ore"),
        .price = 200,
        .description = sCupholderDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_FIELD,
        .sort = ITEM_TYPE_RELIC,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },
	
    [ITEM_IRON_ORE] =
    {
        .name = _("Iron Ore"),
        .price = 200,
        .description = sCupholderDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_FIELD,
        .sort = ITEM_TYPE_RELIC,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },
	
    [ITEM_COAL_ORE] =
    {
        .name = _("Coal"),
        .price = 200,
        .description = sCupholderDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_FIELD,
        .sort = ITEM_TYPE_RELIC,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },
	
    [ITEM_MITHRIL_ORE] =
    {
        .name = _("Mithril Ore"),
        .price = 200,
        .description = sCupholderDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_FIELD,
        .sort = ITEM_TYPE_RELIC,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },
	
    [ITEM_ADAMANT_ORE] =
    {
        .name = _("Adamant Ore"),
        .price = 200,
        .description = sCupholderDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_FIELD,
        .sort = ITEM_TYPE_RELIC,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },
	
    [ITEM_RUNE_ORE] =
    {
        .name = _("Rune Ore"),
        .price = 200,
        .description = sCupholderDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_FIELD,
        .sort = ITEM_TYPE_RELIC,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },
	
    [ITEM_ORIKALKUM_ORE] =
    {
        .name = _("Orikalkum Ore"),
        .price = 200,
        .description = sCupholderDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_FIELD,
        .sort = ITEM_TYPE_RELIC,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },
	
	[ITEM_AUGMENTOR] =
    {
        .name = _("Augmentor"),
        .price = 200,
        .description = sCupholderDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_FIELD,
        .sort = ITEM_TYPE_RELIC,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },
	
    [ITEM_BANE_ORE] =
    {
        .name = _("Bane Ore"),
        .price = 200,
        .description = sCupholderDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_FIELD,
        .sort = ITEM_TYPE_RELIC,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },
	
	[ITEM_BARROWS_ITEM] =
    {
        .name = _("Barrows Item"),
        .price = 1000,
        .description = sCupholderDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_FIELD,
        .sort = ITEM_TYPE_RELIC,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },
	
    [ITEM_BLACK_MUSHROOM] =
    {
        .name = _("Dark Mushroom"),
        .price = 100,
        .description = sCupholderDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_FIELD,
        .sort = ITEM_TYPE_RELIC,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },
	
    [ITEM_CRYSTAL_SHARD] =
    {
        .name = _("Crystal Shard"),
        .price = 100,
        .description = sCupholderDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_FIELD,
        .sort = ITEM_TYPE_RELIC,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },
	
    [ITEM_ELEMENTAL_ORE] =
    {
        .name = _("Elemental Ore"),
        .price = 100,
        .description = sCupholderDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_FIELD,
        .sort = ITEM_TYPE_RELIC,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },
	
    [ITEM_GRANITE] =
    {
        .name = _("Granite"),
        .price = 100,
        .description = sCupholderDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_FIELD,
        .sort = ITEM_TYPE_RELIC,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },
	
    [ITEM_HELLFIRE_METAL] =
    {
        .name = _("Ancient Metal"),
        .price = 100,
        .description = sCupholderDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_FIELD,
        .sort = ITEM_TYPE_RELIC,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },
	
    [ITEM_MYSTIC_CLOTH] =
    {
        .name = _("Mystic Cloth"),
        .price = 1500,
        .description = sCupholderDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_FIELD,
        .sort = ITEM_TYPE_RELIC,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },
	
    [ITEM_SPLITBARK] =
    {
        .name = _("SPLITBARK"),
        .price = 1500,
        .description = sSplitbarkDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_FIELD,
        .sort = ITEM_TYPE_RELIC,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

// Food Items
    [ITEM_EGG] =
    {
        .name = _("EGG"),
        .price = 20,
        .description = sCupholderDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_FIELD,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },
	
    [ITEM_EMPTY_BUCKET] =
    {
        .name = _("EMPTY BUCKET"),
        .price = 200,
        .description = sEmptyBucketDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_FIELD,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },
	
    [ITEM_WATER_BUCKET] =
    {
        .name = _("WATER BUCKET"),
        .price = 100,
        .description = sCupholderDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_FIELD,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_MILK_BUCKET] =    
    {
        .name = _("MILK BUCKET"),
        .price = 500,
        .description = sMilkBucketDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_WHEAT] =
    {
        .name = _("WHEAT GRAIN"),
        .price = 50,
        .description = sCupholderDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_FIELD,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_EMPTY_POT] =
    {
        .name = _("EMPTY POT"),
        .price = 100,
        .description = sCupholderDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_FIELD,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_FLOUR_POT] =
    {
        .name = _("POT OF FLOUR"),
        .price = 100,
        .description = sCupholderDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_FIELD,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

//Special interaction key items		
    [ITEM_ROTTEN_POTATO] =
    {
        .name = _("ROTTEN POTATO"),
        .price = 0,
        .description = sUnstuckDesc,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_KEY_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_Function,
    },

    [ITEM_XERIC] =
    {
        .name = _("XERIC AMMY"),
        .price = 0,
        .description = sXeric_Desc,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_KEY_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_Function,
    },

    [ITEM_SLAYER_GEM] =
    {
        .name = _("SLAYER GEM"),
        .price = 0,
        .description = sSLAYER_GEM_Desc,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_KEY_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_Function,
    },

    [ITEM_PULSE_CORE] =
    {/*
        .name = _("PULSE CORE"),
        .price = 3000,
        .holdEffect = HOLD_EFFECT_EXP_SHARE,
        .description = sPulseCoreDesc,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_KEY_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_Function,
*/
        .name = _("PULSE CORE"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_EXP_SHARE,
        .description = sExpShareDesc,
        .pocket = I_EXP_SHARE_ITEM >= GEN_6 ? POCKET_KEY_ITEMS : POCKET_ITEMS,
        .type = ITEM_USE_FIELD,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_ExpShare,
        .flingPower = 30,
    },

//Treasures
    [ITEM_FLAX] =
    {
        .name = _("FLAX"),
        .price = 500,
        .description = sFlaxDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_SELLABLE,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_SPIRIT_SHARD] =
    {
        .name = _("SPIRIT SHARD"),
        .price = 2500,
        .description = sSpiritShardDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_SELLABLE,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_MINT_CAKE] =
    {
        .name = _("MINT CAKE"),
        .price = 5000,
        .description = sMintCakeDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_SELLABLE,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_HWEEN_MASK] =
    {
        .name = _("HWEEN MASK"),
        .price = 10000,
        .description = sHweenMaskDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_SELLABLE,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_SANTA_HAT] =
    {
        .name = _("SANTA HAT"),
        .price = 15000,
        .description = sSantaHatDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_SELLABLE,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_PARTY_HAT] =
    {
        .name = _("PARTY HAT"),
        .price = 24147,  //REFERENCE MAX CASH - 2,147,483,647
        .description = sPartyHatDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_SELLABLE,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },


// Pokescape Crops
	[ITEM_FARMING_CABBAGE] =
    {
        .name = _("CABBAGE"),
        .price = 20,
        .holdEffect = HOLD_EFFECT_CURE_PAR,
        .description = sCabbageDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_STATUS_RECOVERY,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = EFFECT_ITEM_CURE_STATUS,
    },

    [ITEM_APPLE] = //Micle Berry
    {
        .name = _("APPLE"),
        .price = 20,
        .holdEffect = HOLD_EFFECT_MICLE_BERRY,
        .holdEffectParam = 4,
        .description = sAppleDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_BANANA] = //Salac Berry
    {
        .name = _("BANANA"),
        .price = 20,
        .holdEffect = HOLD_EFFECT_SPEED_UP,
        .holdEffectParam = 4,
        .description = sBananaDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_CADAVABERRY] = //Leppa Berry
    {
        .name = _("CADAVA"),
        .price = 20,
        .holdEffect = HOLD_EFFECT_RESTORE_PP,
        .holdEffectParam = 10,
        .description = sCadavaberryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_PARTY_MENU_MOVES,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_PPRecovery,
        .battleUsage = EFFECT_ITEM_RESTORE_PP,
        .flingPower = 10,
    },

    [ITEM_COCONUT] = //Starf Berry
    {
        .name = _("COCONUT"),
        .price = 20,
        .holdEffect = HOLD_EFFECT_RANDOM_STAT_UP,
        .holdEffectParam = 4,
        .description = sCoconutDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_CORN] = //Qualot Berry
    {
        .name = _("CORN"),
        .price = 20,
        .description = sCornDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_ReduceEV,
        .flingPower = 10,
    },

    [ITEM_GARLIC] = //Liechi Berry
    {
        .name = _("GARLIC"),
        .price = 20,
        .holdEffect = HOLD_EFFECT_ATTACK_UP,
        .holdEffectParam = 4,
        .description = sGarlicDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_GRAPES] = //Petaya Berry
    {
        .name = _("GRAPES"),
        .price = 20,
        .holdEffect = HOLD_EFFECT_SP_ATTACK_UP,
        .holdEffectParam = 4,
        .description = sGrapesDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_JANGERBERRY] = //Hondew Berry
    {
        .name = _("JANGERBERRY"),
        .price = 20,
        .description = sJangerberryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_ReduceEV,
        .flingPower = 10,
    },

    [ITEM_LEMON] = //Cheri Berry
    {
        .name = _("LEMON"),
        .price = 20,
        .holdEffect = HOLD_EFFECT_CURE_PAR,
        .description = sLemonDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = EFFECT_ITEM_CURE_STATUS,
        .flingPower = 10,
    },

    [ITEM_ONION] = //Pomeg Berry
    {
        .name = _("ONION"),
        .price = 20,
        .description = sOnionDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_ReduceEV,
        .flingPower = 10,
    },

    [ITEM_ORANGE] = //Lum Berry
    {
        .name = _("ORANGE"),
        .price = 20,
        .holdEffect = HOLD_EFFECT_CURE_STATUS,
        .description = sOrangeDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = EFFECT_ITEM_CURE_STATUS,
        .flingPower = 10,
    },

    [ITEM_PINEAPPLE] = //Rowap Berry
    {
        .name = _("PINEAPPLE"),
        .price = 20,
        .holdEffect = HOLD_EFFECT_ROWAP_BERRY,
        .description = sPineappleDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_POISONIVYBERRY] = //NOT ON THE LIST
    {
        .name = _("IVY BERRY"),
        .price = 20,
        .holdEffect = HOLD_EFFECT_CURE_PAR,
        .description = sCupholderDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_STATUS_RECOVERY,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = EFFECT_ITEM_CURE_STATUS,
    },

    [ITEM_POTATO] = //Pecha Berry
    {
        .name = _("POTATO"),
        .price = 20,
        .holdEffect = HOLD_EFFECT_CURE_PSN,
        .description = sPotatoDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = EFFECT_ITEM_CURE_STATUS,
        .flingPower = 10,
    },

    [ITEM_REDBERRY] = //Apicot Berry
    {
        .name = _("REDBERRY"),
        .price = 20,
        .holdEffect = HOLD_EFFECT_SP_DEFENSE_UP,
        .holdEffectParam = 4,
        .description = sRedberryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_STRAWBERRY] = //Ganlon Berry
    {
        .name = _("STRAWBERRY"),
        .price = 20,
        .holdEffect = HOLD_EFFECT_DEFENSE_UP,
        .holdEffectParam = 4,
        .description = sStrawberryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

[ITEM_TOMATO] = //Tamato Berry
    {
        .name = _("TOMATO"),
        .price = 20,
        .description = sTomatoDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_ReduceEV,
        .flingPower = 10,
    },

    [ITEM_TURNIP] = //Persim Berry
    {
        .name = _("TURNIP"),
        .price = 20,
        .holdEffect = HOLD_EFFECT_CURE_CONFUSION,
        .description = sTurnipDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = EFFECT_ITEM_CURE_STATUS,
        .flingPower = 10,
    },

    [ITEM_WATERMELON] = //Rawst Berry
    {
        .name = _("WATERMELON"),
        .price = 20,
        .holdEffect = HOLD_EFFECT_CURE_BRN,
        .description = sWatermelonDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = EFFECT_ITEM_CURE_STATUS,
        .flingPower = 10,
    },

    [ITEM_WHITEBERRY] = //Aspear Berry
    {
        .name = _("WHITEBERRY"),
        .price = 20,
        .holdEffect = HOLD_EFFECT_CURE_FRZ,
        .description = sWhiteberryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = EFFECT_ITEM_CURE_STATUS,
        .flingPower = 10,
    },

    [ITEM_PAPAYA] = //Lansat Berry - NEW - NEEDS TO MAKE SURE IT LINKS TO SPRITES ETC
    {
        .name = _("PAPAYA"),
        .price = 20,
        .holdEffect = HOLD_EFFECT_CRITICAL_UP,
        .holdEffectParam = 4,
        .description = sPapayaDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_DWELLBERRY] = //Chesto Berry - NEW - NEEDS TO MAKE SURE IT LINKS TO SPRITES ETC
    {
        .name = _("DWELLBERRY"),
        .price = 20,
        .holdEffect = HOLD_EFFECT_CURE_SLP,
        .description = sDwellberryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = EFFECT_ITEM_CURE_STATUS,
        .flingPower = 10,
    },

    [ITEM_COFFEEBEAN] = //Custap Berry - NEW - NEEDS TO MAKE SURE IT LINKS TO SPRITES ETC
    {
        .name = _("COFFEE BEAN"),
        .price = 20,
        .holdEffect = HOLD_EFFECT_CUSTAP_BERRY,
        .holdEffectParam = 4,
        .description = sCoffeeBeanDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_POISON_IVY] = //Jaboca Berry - NEW - NEEDS TO MAKE SURE IT LINKS TO SPRITES ETC - POSSIBLY CHANGE ITEM NAME ETC DEPENDING ON SPRITE
    {
        .name = _("POISON IVY"),
        .price = 20,
        .holdEffect = HOLD_EFFECT_JABOCA_BERRY,
        .description = sPoisonIvyDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_BLUEBERRY] = //Kelpsy Berry - NEW - NEEDS TO MAKE SURE IT LINKS TO SPRITES ETC
    {
        .name = _("BLUEBERRY"),
        .price = 20,
        .description = sBlueberryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_ReduceEV,
        .flingPower = 10,
    },

    [ITEM_CHEESE] = //Grepa Berry - NEW - NEEDS TO MAKE SURE IT LINKS TO SPRITES ETC
    {
        .name = _("CHEESE"),
        .price = 20,
        .description = sCheeseDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_ReduceEV,
        .flingPower = 10,
    },

    [ITEM_GLOOP_SOUP] = //Mago Berry - NEW - NEEDS TO MAKE SURE IT LINKS TO SPRITES ETC
    {
        .name = _("GLOOP SOUP"),
        .price = 20,
        .holdEffect = HOLD_EFFECT_CONFUSE_SWEET,
        .holdEffectParam = CONFUSE_BERRY_HEAL_FRACTION,
        .description = sGloopSoupDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_FINGERS] = //Iapapa Berry - NEW - NEEDS TO MAKE SURE IT LINKS TO SPRITES ETC
    {
        .name = _("FINGERS"),
        .price = 20,
        .holdEffect = HOLD_EFFECT_CONFUSE_SOUR,
        .holdEffectParam = CONFUSE_BERRY_HEAL_FRACTION,
        .description = sFingersDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_BAT_SHISH] = //Aguav Berry - NEW - NEEDS TO MAKE SURE IT LINKS TO SPRITES ETC
    {
        .name = _("BAT SHISH"),
        .price = 20,
        .holdEffect = HOLD_EFFECT_CONFUSE_BITTER,
        .holdEffectParam = CONFUSE_BERRY_HEAL_FRACTION,
        .description = sBatShishDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_FROGBURGER] = //Wiki Berry - NEW - NEEDS TO MAKE SURE IT LINKS TO SPRITES ETC
    {
        .name = _("FROGBURGER"),
        .price = 20,
        .holdEffect = HOLD_EFFECT_CONFUSE_DRY,
        .holdEffectParam = CONFUSE_BERRY_HEAL_FRACTION,
        .description = sFrogburgerDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_EEL_SUSHI] = //Figy Berry - NEW - NEEDS TO MAKE SURE IT LINKS TO SPRITES ETC
    {
        .name = _("EEL SUHSI"),
        .price = 20,
        .holdEffect = HOLD_EFFECT_CONFUSE_SPICY,
        .holdEffectParam = CONFUSE_BERRY_HEAL_FRACTION,
        .description = sEelSushiDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },




// Cooks Assistant Quest
    [ITEM_SUPER_LARGE_EGG] =
    {
        .name = _("EGG"),
        .price = 0,
        .description = sSuperLargeEggDesc,
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_KEY_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_TOP_QUALITY_MILK] =
    {
        .name = _("MILK"),
        .price = 0,
        .description = sTopQualityMilkDesc,
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_KEY_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_EXTRA_FINE_FLOUR] =
    {
        .name = _("FLOUR"),
        .price = 0,
        .description = sExtraFineFlourDesc,
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_KEY_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    //ERNEST QUEST
    [ITEM_FISH_FOOD] =
    {
        .name = _("FISH FOOD"),
        .price = 0,
        .description = sFishFoodDesc,
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_KEY_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_FISH_FOOD_POISONED] =
    {
        .name = _("FISH FOOD P++"),
        .price = 0,
        .description = sFishFoodPoisonedDesc,
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_KEY_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_OIL_CAN] =
    {
        .name = _("OIL CAN"),
        .price = 0,
        .description = sOilCanDesc,
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_KEY_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_PRESSURE_GAUGE] =
    {
        .name = _("GAUGE"),
        .price = 0,
        .description = sPressureGaugeDesc,
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_KEY_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_RUBBER_TUBE] =
    {
        .name = _("RUBBER TUBE"),
        .price = 0,
        .description = sRubberTubeDesc,
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_KEY_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_MAGICAL_CAGE] =
    {
        .name = _("MAGICAL CAGE"),
        .price = 0,
        .description = sMagicalCageDesc,
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_KEY_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_ANCIENT_SHARD] =
    {
        .name = _("ANCIENT SHARD"),
        .price = 0,
        .description = sANCIENT_SHARD_Desc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_RELIC,
        .fieldUseFunc = ItemUseOutOfBattle_Function
    },

    [ITEM_DARK_TOTEM_BASE] =
    {
        .name = _("TOTEM BASE"),
        .price = 0,
        .description = sDARK_TOTEM_BASE_Desc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_RELIC,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_DARK_TOTEM_MID] =
    {
        .name = _("TOTEM MID"),
        .price = 0,
        .description = sDARK_TOTEM_MID_Desc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_RELIC,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_DARK_TOTEM_TOP] =
    {
        .name = _("TOTEM TOP"),
        .price = 0,
        .description = sDARK_TOTEM_TOP_Desc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_RELIC,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_DARK_TOTEM] =
    {
        .name = _("DARK TOTEM"),
        .price = 0,
        .description = sDARK_TOTEM_Desc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_RELIC,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

//Dungeoneering Items
    [ITEM_DG_BALL_OF_WOOL] =
    {
        .name = _("BALL OF WOOL"),
        .price = 0,
        .description = sDGItemDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_DG_ROPE] =
    {
        .name = _("ROPE"),
        .price = 0,
        .description = sDGItemDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

//misc
    
    [ITEM_TALISMAN_MYSTERY] =
    {
        .name = _("TALISMAN"),
        .price = 0,
        .description = sMYSTERYTALISMANDesc,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_FIELD,
        .sort = ITEM_TYPE_KEY_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_SCURRIUS_CHEESE] =
    {
        .name = _("CHEESE"),
        .price = 0,
        .description = sScurriusCheeseDesc,
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_KEY_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_CRANDOR_MAP_FULL] =
    {
        .name = _("CRANDOR MAP"),
        .price = 0,
        .description = sCrandorMapDesc,
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_KEY_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_CRANDOR_MAP_PIECE1] =
    {
        .name = _("MAP PIECE 1"),
        .price = 0,
        .description = sCrandorPieceDesc,
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_KEY_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_CRANDOR_MAP_PIECE2] =
    {
        .name = _("MAP PIECE 2"),
        .price = 0,
        .description = sCrandorPieceDesc,
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_KEY_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_CRANDOR_MAP_PIECE3] =
    {
        .name = _("MAP PIECE 3"),
        .price = 0,
        .description = sCrandorPieceDesc,
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_KEY_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_WHISTLE] =
    {
        .name = _("WHISTLE"),
        .price = 0,
        .description = sWhistle_Desc,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Function,
    },

    [ITEM_ROPE] =
    {
        .name = _("ROPE"),
        .price = 550,
        .description = sEscapeRopeDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_FIELD,
        .fieldUseFunc = ItemUseOutOfBattle_EscapeRope,
    },

    [ITEM_REPEL_TEA_1] =
    {
        .name = _("CUP OF TEA"),
        .price = 300,
        .holdEffectParam = 100,
        .description = sTea1Desc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_FIELD_USE,
        .fieldUseFunc = ItemUseOutOfBattle_Repel,
        .flingPower = 30,
    },

    [ITEM_REPEL_TEA_2] =
    {
        .name = _("NETTLE TEA"),
        .price = 700,
        .holdEffectParam = 200,
        .description = sTea2Desc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_FIELD_USE,
        .fieldUseFunc = ItemUseOutOfBattle_Repel,
        .flingPower = 30,
    },

    [ITEM_REPEL_TEA_3] =
    {
        .name = _("GUTHIX REST"),
        .price = 900,
        .holdEffectParam = 250,
        .description = sTea3Desc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_FIELD_USE,
        .fieldUseFunc = ItemUseOutOfBattle_Repel,
        .flingPower = 30,
    },

    [ITEM_RING_OF_KINSHIP] =
    {
        .name = _("KINSHIP RING"),
        .price = 0,
        .description = sRingOfKinship_Desc,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_KEY_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_Function,
    },




// Weather Rocks

    [ITEM_BOOK_OF_GUTHIX] = 
    {
        .name = _("BALANCE BOOK"),
        .price = 4000,
        .holdEffect = HOLD_EFFECT_REMOVE_WEATHER,     // HOLD_EFFECT_WEATHER_EXTENDER
        .description = sBalanceBookDesc, 
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 60,
    },

    [ITEM_BOOK_OF_SARADOMIN] = //damp rock
    {
        .name = _("WISDOM BOOK"),
        .price = 4000,
        .holdEffect = HOLD_EFFECT_DAMP_ROCK,
        .description = sDampRockDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 60,
    },

    [ITEM_BOOK_OF_ZAMORAK] = //Heat rock
    {
        .name = _("CHAOS BOOK"),
        .price = 4000,
        .holdEffect = HOLD_EFFECT_HEAT_ROCK,
        .description = sHeatRockDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 60,
    },

    [ITEM_BOOK_OF_TUMEKEN] = // smooth rock
    {
        .name = _("SANDY BOOK"),
        .price = 4000,
        .holdEffect = HOLD_EFFECT_SMOOTH_ROCK,
        .description = sSmoothRockDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_BOOK_OF_SEREN] = //icy rock 
    {
        .name = _("LIGHT BOOK"), 
        .price = 4000,
        .holdEffect = HOLD_EFFECT_ICY_ROCK,
        .description = sIcyRockDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 40,
    },

    [ITEM_BOOK_OF_BANDOS] = 
    {
        .name = _("WAR BOOK"),
        .price = 4000,
        .holdEffect = HOLD_EFFECT_UTILITY_UMBRELLA,        
        .description = sSturdyBookDesc, 
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 60,
    },

    [ITEM_BOOK_OF_ZAROS] = //
    {
        .name = _("DARK BOOK"),
        .price = 4000,
        .holdEffect = HOLD_EFFECT_LIGHT_CLAY, //  
        .description = sBarrierBookDesc, 
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 60,
    },

    [ITEM_BOOK_OF_ARMADYL] = //
    {
        .name = _("LAW BOOK"),
        .price = 4000,
        .holdEffect = HOLD_EFFECT_EXTEND_TAILWIND,        
        .description = sWindyBookDesc, 
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .sort = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 60,
    },

//SANDWICHES

    [ITEM_TRIANGLE_SANDWICH] = //atk
    {
        .name = _("T. SANDWICH"),
        .price = 1000,
        .holdEffectParam = 1,
        .description = sTriangleSandwichDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_HEALTH_RECOVERY,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = EFFECT_ITEM_HEAL_AND_INCREASE_STAT,
        .flingPower = 10,
    },

    [ITEM_SQUARE_SANDWICH] = //def
    {
        .name = _("S. SANDWICH"),
        .price = 1000,
        .holdEffectParam = 1,
        .description = sSquareSandwichDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_HEALTH_RECOVERY,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = EFFECT_ITEM_HEAL_AND_INCREASE_STAT,
        .flingPower = 10,
    },

    [ITEM_MEAT_PIE_SANDWICH] = //spatk
    {
        .name = _("MEAT PIE"),
        .price = 1000,
        .holdEffectParam = 1,
        .description = sMeatPieSandwichDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_HEALTH_RECOVERY,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = EFFECT_ITEM_HEAL_AND_INCREASE_STAT,
        .flingPower = 10,
    },

    [ITEM_DONUT_SANDWICH] = //spdef
    {
        .name = _("DONUT"),
        .price = 1000,
        .holdEffectParam = 1,
        .description = sDonutSandwichDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_HEALTH_RECOVERY,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = EFFECT_ITEM_HEAL_AND_INCREASE_STAT,
        .flingPower = 10,
    },

    [ITEM_BREAD_ROLL_SANDWICH] = //speed
    {
        .name = _("BREAD ROLL"),
        .price = 1000,
        .holdEffectParam = 1,
        .description = sBreadRollSandwichDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_HEALTH_RECOVERY,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = EFFECT_ITEM_HEAL_AND_INCREASE_STAT,
        .flingPower = 10,
    },

    [ITEM_KEBAB_SANDWICH] = //acc?
    {
        .name = _("KEBAB"),
        .price = 1000,
        .holdEffectParam = 1,
        .description = sKebabSandwichDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_HEALTH_RECOVERY,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = EFFECT_ITEM_HEAL_AND_INCREASE_STAT,
        .flingPower = 10,
    },

    [ITEM_BAGUETTE_SANDWICH] =  //all
    {
        .name = _("BAGUETTE"),
        .price = 50000,
        .holdEffectParam = 2,
        .description = sBaguetteSandwichDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_HEALTH_RECOVERY,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = EFFECT_ITEM_HEAL_AND_INCREASE_STAT_TO_MAX,
        .flingPower = 10,
    },

    [ITEM_CHOCOLATE_BAR_SANDWICH] =
    {
        .name = _("CHOCOLATE BAR"),
        .price = 200,
        .holdEffect = HOLD_EFFECT_RESTORE_HP,
        .holdEffectParam = 10,
        .description = sChocolateBarSandwichDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .sort = ITEM_TYPE_UNSORTABLE,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = EFFECT_ITEM_RESTORE_HP,
        .flingPower = 10,
    },

    







};
