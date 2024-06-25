const u8 gTrainerClassNames[][13] = {
    [TRAINER_CLASS_PKMN_TRAINER_1] = _("{PKMN} TRAINER"),
    [TRAINER_CLASS_PKMN_TRAINER_2] = _("{PKMN} TRAINER"),
    [TRAINER_CLASS_HIKER] = _("HIKER"),
    [TRAINER_CLASS_TEAM_AQUA] = _("TEAM AQUA"),
    [TRAINER_CLASS_PKMN_BREEDER] = _("{PKMN} BREEDER"),
    [TRAINER_CLASS_COOLTRAINER] = _("COOLTRAINER"),
    [TRAINER_CLASS_BIRD_KEEPER] = _("BIRD KEEPER"),
    [TRAINER_CLASS_COLLECTOR] = _("COLLECTOR"),
    [TRAINER_CLASS_SWIMMER_M] = _("SWIMMER♂"),
    [TRAINER_CLASS_TEAM_MAGMA] = _("TEAM MAGMA"),
    [TRAINER_CLASS_EXPERT] = _("EXPERT"),
    [TRAINER_CLASS_AQUA_ADMIN] = _("AQUA ADMIN"),
    [TRAINER_CLASS_BLACK_BELT] = _("BLACK BELT"),
    [TRAINER_CLASS_AQUA_LEADER] = _("AQUA LEADER"),
    [TRAINER_CLASS_HEX_MANIAC] = _("HEX MANIAC"),
    [TRAINER_CLASS_AROMA_LADY] = _("AROMA LADY"),
    [TRAINER_CLASS_RUIN_MANIAC] = _("RUIN MANIAC"),
    [TRAINER_CLASS_INTERVIEWER] = _("INTERVIEWER"),
    [TRAINER_CLASS_TUBER_F] = _("TUBER"),
    [TRAINER_CLASS_TUBER_M] = _("TUBER"),
    [TRAINER_CLASS_LADY] = _("LADY"),
    [TRAINER_CLASS_BEAUTY] = _("BEAUTY"),
    [TRAINER_CLASS_RICH_BOY] = _("RICH BOY"),
    [TRAINER_CLASS_POKEMANIAC] = _("POKéMANIAC"),
    [TRAINER_CLASS_GUITARIST] = _("GUITARIST"),
    [TRAINER_CLASS_KINDLER] = _("KINDLER"),
    [TRAINER_CLASS_CAMPER] = _("CAMPER"),
    [TRAINER_CLASS_PICNICKER] = _("PICNICKER"),
    [TRAINER_CLASS_BUG_MANIAC] = _("BUG MANIAC"),
    [TRAINER_CLASS_PSYCHIC] = _("PSYCHIC"),
    [TRAINER_CLASS_GENTLEMAN] = _("GENTLEMAN"),
    [TRAINER_CLASS_ELITE_FOUR] = _("ELITE FOUR"),
    [TRAINER_CLASS_LEADER] = _("LEADER"),
    [TRAINER_CLASS_SCHOOL_KID] = _("SCHOOL KID"),
    [TRAINER_CLASS_SR_AND_JR] = _("SR. AND JR."),
    [TRAINER_CLASS_WINSTRATE] = _("WINSTRATE"),
    [TRAINER_CLASS_POKEFAN] = _("POKéFAN"),
    [TRAINER_CLASS_YOUNGSTER] = _("YOUNGSTER"),
    [TRAINER_CLASS_CHAMPION] = _("CHAMPION"),
    [TRAINER_CLASS_FISHERMAN] = _("FISHERMAN"),
    [TRAINER_CLASS_TRIATHLETE] = _("TRIATHLETE"),
    [TRAINER_CLASS_DRAGON_TAMER] = _("DRAGON TAMER"),
    [TRAINER_CLASS_NINJA_BOY] = _("NINJA BOY"),
    [TRAINER_CLASS_BATTLE_GIRL] = _("BATTLE GIRL"),
    [TRAINER_CLASS_PARASOL_LADY] = _("PARASOL LADY"),
    [TRAINER_CLASS_SWIMMER_F] = _("SWIMMER♀"),
    [TRAINER_CLASS_TWINS] = _("TWINS"),
    [TRAINER_CLASS_SAILOR] = _("SAILOR"),
    [TRAINER_CLASS_COOLTRAINER_2] = _("COOLTRAINER"),
    [TRAINER_CLASS_MAGMA_ADMIN] = _("MAGMA ADMIN"),
    [TRAINER_CLASS_RIVAL] = _("{PKMN} TRAINER"),
    [TRAINER_CLASS_BUG_CATCHER] = _("BUG CATCHER"),
    [TRAINER_CLASS_PKMN_RANGER] = _("{PKMN} RANGER"),
    [TRAINER_CLASS_MAGMA_LEADER] = _("MAGMA LEADER"),
    [TRAINER_CLASS_LASS] = _("LASS"),
    [TRAINER_CLASS_YOUNG_COUPLE] = _("YOUNG COUPLE"),
    [TRAINER_CLASS_OLD_COUPLE] = _("OLD COUPLE"),
    [TRAINER_CLASS_SIS_AND_BRO] = _("SIS AND BRO"),
    [TRAINER_CLASS_SALON_MAIDEN] = _("SALON MAIDEN"),
    [TRAINER_CLASS_DOME_ACE] = _("DOME ACE"),
    [TRAINER_CLASS_PALACE_MAVEN] = _("PALACE MAVEN"),
    [TRAINER_CLASS_ARENA_TYCOON] = _("ARENA TYCOON"),
    [TRAINER_CLASS_FACTORY_HEAD] = _("FACTORY HEAD"),
    [TRAINER_CLASS_PIKE_QUEEN] = _("PIKE QUEEN"),
    [TRAINER_CLASS_PYRAMID_KING] = _("PYRAMID KING"),
    [TRAINER_CLASS_RS_PROTAG] = _("{PKMN} TRAINER"),
    //POKESCAPE
	[TRAINER_CLASS_MILLER] = _("MILLER"),
	[TRAINER_CLASS_GOBLIN] = _("GOBLIN"),
	[TRAINER_CLASS_SKELETON] = _("SKELETON"),
	[TRAINER_CLASS_TZHAAR] = _("TZHAAR"),
	[TRAINER_CLASS_GOEBIE] = _("GOEBIE"),
	[TRAINER_CLASS_HAM_GRUNT] = _("H.A.M"),
	[TRAINER_CLASS_HAM_BOSS] = _("H.A.M BOSS"),
	[TRAINER_CLASS_WHITE_KNIGHT] = _("WHITE KNIGHT"),
	[TRAINER_CLASS_BLACK_KNIGHT] = _("BLACK KNIGHT"),
	[TRAINER_CLASS_WIZARD] = _("WIZARD"),
	[TRAINER_CLASS_WITCH] = _("WITCH"),
	[TRAINER_CLASS_GUARD] = _("GUARD"),
	[TRAINER_CLASS_JMOD] = _("MOD"),
	[TRAINER_CLASS_BOT] = _("BOT"),
	[TRAINER_CLASS_NOOB] = _("NOOB"),
	[TRAINER_CLASS_MERCHER] = _("MERCHER"),
	[TRAINER_CLASS_PKer] = _("PKer"),
	[TRAINER_CLASS_DWARF] = _("DWARF"),
	[TRAINER_CLASS_MUGGER] = _("MUGGER"),
//	[TRAINER_CLASS_SAILOR] = _("SAILOR"),
	[TRAINER_CLASS_PIRATE] = _("PIRATE"),
	[TRAINER_CLASS_BARBARIAN] = _("BARBARIAN"),
	[TRAINER_CLASS_IRONMAN] = _("IRONMAN"),
	[TRAINER_CLASS_MITHRILMAN] = _("MITHRILMAN"),
	[TRAINER_CLASS_SCAMMER] = _("SCAMMER"),
	[TRAINER_CLASS_VICTIM] = _("VICTIM"),
	[TRAINER_CLASS_TRIBESMAN] = _("TRIBESMAN"),
	[TRAINER_CLASS_RSMVer] = _("RSMVer"),
	[TRAINER_CLASS_DnDer] = _("D&D"),
	[TRAINER_CLASS_QUESTER] = _("QUESTER"),
	[TRAINER_CLASS_LOREHOUND] = _("LOREHOUND"),
	[TRAINER_CLASS_VAMPYRE] = _("VAMPYRE"),
	[TRAINER_CLASS_COUNT] = _("COUNT"),
	[TRAINER_CLASS_DUKE] = _("DUKE"),
	[TRAINER_CLASS_KING] = _("KING"),
	[TRAINER_CLASS_PRINCE] = _("PRINCE"),
	[TRAINER_CLASS_CHIEFTAIN] = _("CHIEFTAIN"),
	[TRAINER_CLASS_UNKNOWN] = _("???"),
	[TRAINER_CLASS_WARRIOR] = _("WARRIOR"),
	[TRAINER_CLASS_SIR] = _("SIR"),
	[TRAINER_CLASS_SKILLER] = _("SKILLER"),
	[TRAINER_CLASS_SLAYER] = _("SLAYER"),
	[TRAINER_CLASS_WOODCUTTER] = _("WOODCUTTER"),
	[TRAINER_CLASS_SMITH] = _("SMITH"),
	[TRAINER_CLASS_MINER] = _("MINER"),
	[TRAINER_CLASS_MONK] = _("MONK"),
	[TRAINER_CLASS_HUNTER] = _("HUNTER"),
	[TRAINER_CLASS_FIREMAKER] = _("FIREMAKER"),
	[TRAINER_CLASS_FARMER] = _("FARMER"),
	[TRAINER_CLASS_SUMMONER] = _("SUMMONER"),
	[TRAINER_CLASS_FISHER] = _("FISHER"),
	[TRAINER_CLASS_POKESCAPER] = _("POKESCAPER"),
	[TRAINER_CLASS_SIGNATURE_HERO] = _("HERO"),
	[TRAINER_CLASS_PLAYER] = _("PLAYER"),
	[TRAINER_CLASS_BARROWS_BROTHER] = _("BARROWS BROS"),
	[TRAINER_CLASS_LEGEND] = _("LEGEND"),
    [TRAINER_CLASS_CHEF] = _("CHEF"),
    [TRAINER_CLASS_AGILE] = _("AGILE"),
    [TRAINER_CLASS_DARK] = _("DARK"),
    [TRAINER_CLASS_DIVINER] = _("DIVINER"),
    [TRAINER_CLASS_DUO] = _("DUO"),
    [TRAINER_CLASS_ARCHAEOLOGIST] = _("EXCAVATOR"),
    [TRAINER_CLASS_HILL_GIANT] = _("HILL GIANT"),
    [TRAINER_CLASS_MOSS_GIANT] = _("MOSS GIANT"),
    [TRAINER_CLASS_FIRE_GIANT] = _("FIRE GIANT"),
    [TRAINER_CLASS_HAM_ADMIN] = _("H.A.M ADMIN"),
    [TRAINER_CLASS_NECROMANCER] = _("NECROMANCER"),
    [TRAINER_CLASS_RUNECRAFTER] = _("RUNECRAFTER"),
    [TRAINER_CLASS_WISE_OLD_MAN] = _("WISE OLD MAN"),
};
