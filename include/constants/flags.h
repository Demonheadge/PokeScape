#ifndef GUARD_CONSTANTS_FLAGS_H
#define GUARD_CONSTANTS_FLAGS_H

#include "constants/opponents.h"

// Temporary Flags
// These temporary flags are are cleared every time a map is loaded. They are used
// for things like shortening an NPCs introduction text if the player already spoke
// to them once.
#define TEMP_FLAGS_START 0x0
#define FLAG_TEMP_1      (TEMP_FLAGS_START + 0x1)
#define FLAG_TEMP_2      (TEMP_FLAGS_START + 0x2)
#define FLAG_TEMP_3      (TEMP_FLAGS_START + 0x3)
#define FLAG_TEMP_4      (TEMP_FLAGS_START + 0x4)
#define FLAG_TEMP_5      (TEMP_FLAGS_START + 0x5)  // Unused Flag
#define FLAG_TEMP_6      (TEMP_FLAGS_START + 0x6)  // Unused Flag
#define FLAG_TEMP_7      (TEMP_FLAGS_START + 0x7)  // Unused Flag
#define FLAG_TEMP_8      (TEMP_FLAGS_START + 0x8)  // Unused Flag
#define FLAG_TEMP_9      (TEMP_FLAGS_START + 0x9)  // Unused Flag
#define FLAG_TEMP_A      (TEMP_FLAGS_START + 0xA)  // Unused Flag
#define FLAG_TEMP_B      (TEMP_FLAGS_START + 0xB)  // Unused Flag
#define FLAG_TEMP_C      (TEMP_FLAGS_START + 0xC)  // Unused Flag
#define FLAG_TEMP_D      (TEMP_FLAGS_START + 0xD)  // Unused Flag
#define FLAG_TEMP_E      (TEMP_FLAGS_START + 0xE)  // Unused Flag
#define FLAG_TEMP_F      (TEMP_FLAGS_START + 0xF)  // Unused Flag
#define FLAG_TEMP_10     (TEMP_FLAGS_START + 0x10) // Unused Flag
#define FLAG_TEMP_11     (TEMP_FLAGS_START + 0x11)
#define FLAG_TEMP_12     (TEMP_FLAGS_START + 0x12)
#define FLAG_TEMP_13     (TEMP_FLAGS_START + 0x13)
#define FLAG_TEMP_14     (TEMP_FLAGS_START + 0x14)
#define FLAG_TEMP_15     (TEMP_FLAGS_START + 0x15)
#define FLAG_TEMP_16     (TEMP_FLAGS_START + 0x16)
#define FLAG_TEMP_17     (TEMP_FLAGS_START + 0x17)
#define FLAG_TEMP_18     (TEMP_FLAGS_START + 0x18)
#define FLAG_TEMP_19     (TEMP_FLAGS_START + 0x19)
#define FLAG_TEMP_1A     (TEMP_FLAGS_START + 0x1A)
#define FLAG_TEMP_1B     (TEMP_FLAGS_START + 0x1B)
#define FLAG_TEMP_1C     (TEMP_FLAGS_START + 0x1C)
#define FLAG_TEMP_1D     (TEMP_FLAGS_START + 0x1D)
#define FLAG_TEMP_1E     (TEMP_FLAGS_START + 0x1E)
#define FLAG_TEMP_1F     (TEMP_FLAGS_START + 0x1F)
#define TEMP_FLAGS_END   FLAG_TEMP_1F
#define NUM_TEMP_FLAGS   (TEMP_FLAGS_END - TEMP_FLAGS_START + 1)

//pokescape chicken event flags
#define FLAG_CHICKEN1_HIDE    	 	 0x20 // Unused Flag //FLAG_CHICKEN1_HIDE
#define FLAG_CHICKEN2_HIDE    	 	 0x21 // Unused Flag //FLAG_CHICKEN2_HIDE
#define FLAG_CHICKEN3_HIDE    	 	 0x22 // Unused Flag //FLAG_CHICKEN3_HIDE
#define FLAG_EVILCHICKEN_HIDE    	 0x23 // Unused Flag
#define FLAG_EVILCHICKEN_DEFEATED    0x24 // Unused Flag

//POKESCAPE START FLAGS
#define FLAG_MEMBERSHIP              0x25 // Unused Flag
#define FLAG_STARTER1                0x26 // Unused Flag
#define FLAG_STARTER2                0x27 // Unused Flag
#define FLAG_STARTER3                0x28 // Unused Flag

//POKESCAPE TUTORIAL ISLAND SCRIPTS
#define FLAG_RATDEFEATED             0x29 // Unused Flag

//POKESCAPE LEGENDARY BATTLE FLAGS
#define FLAG_KALPHITE_KING_DEFEATED  0x2A // Unused Flag
#define FLAG_KALPHITE_QUEEN_DEFEATED 0x2B // Unused Flag

//pokescape flag
#define FLAG_DISABLE_RUN             0x2C // Unused Flag

//cooks assistant/gym 1
#define FLAG_COOKS_ASSIST_STARTED    0x2D // Unused Flag
#define FLAG_COOKS_ASSIST_FINISHED   0x2E // Unused Flag
#define FLAG_DUKE_TALKED             0x2F // Unused Flag

//START -- TRADE FLAGS
#define FLAG_LUMBRIDGE_TRADE_1  0x30 // Unused Flag
#define FLAG_BKFORT_TRADE_1     0x31 // Unused Flag
#define FLAG_UNUSED_32          0x32 // Unused Flag
#define FLAG_UNUSED_33          0x33 // Unused Flag
#define FLAG_UNUSED_34          0x34 // Unused Flag
#define FLAG_UNUSED_35          0x35 // Unused Flag
#define FLAG_UNUSED_36          0x36 // Unused Flag
#define FLAG_UNUSED_37          0x37 // Unused Flag
#define FLAG_UNUSED_38          0x38 // Unused Flag
#define FLAG_UNUSED_39          0x39 // Unused Flag
#define FLAG_UNUSED_0x03A       0x3A // Unused Flag
#define FLAG_UNUSED_0x03B       0x3B // Unused Flag
#define FLAG_UNUSED_0x03C       0x3C // Unused Flag
#define FLAG_UNUSED_0x03D       0x3D // Unused Flag
#define FLAG_UNUSED_0x03E       0x3E // Unused Flag
#define FLAG_UNUSED_0x03F       0x3F // Unused Flag
#define FLAG_UNUSED_0x040       0x40 // Unused Flag
//END -- TRADE FLAGS

#define FLAG_A_NUB_TOT_TUTORIAL 0x41 // Unused Flag
#define FLAG_MITHRILMAN2        0x42 // Unused Flag
#define FLAG_MITHRILMAN3        0x43 // Unused Flag
#define FLAG_MITHRILMAN4        0x44 // Unused Flag
#define FLAG_MITHRILMAN5        0x45 // Unused Flag
#define FLAG_MITHRILMAN6        0x46 // Unused Flag
#define FLAG_MITHRILMAN7        0x47 // Unused Flag
#define FLAG_MITHRILMAN8        0x48 // Unused Flag
#define FLAG_MITHRILMAN9        0x49 // Unused Flag
#define FLAG_MITHRILMAN10       0x4A // Unused Flag
#define FLAG_TZHAAR_RANDOM      0x4B // Unused Flag
#define FLAG_UNUSED_0x04C       0x4C // Unused Flag
#define FLAG_UNUSED_0x04D       0x4D // Unused Flag
#define FLAG_UNUSED_0x04E       0x4E // Unused Flag
#define FLAG_GOLDENGNOME        0x4F // Unused Flag

// Scripts
#define FLAG_EVENT_PORTSARIM_HAM_BOAT        0x50
#define FLAG_SET_WALL_CLOCK                  0x51
#define FLAG_RECEIVED_SPLITBARK              0x52
#define FLAG_MOD_TIMBO                       0x53    //REMOVE THIS ONE!
#define FLAG_DUNGEONEERING_DOOR_ROUTE29      0x54  // FLAG_UNUSED_0x054 Unused Flag
#define FLAG_ABYSS_PORTALS_ENABLED           0x55  // FLAG_UNUSED_0x055 Unused Flag 
#define FLAG_HAIRDRESSER                     0x56
#define FLAG_SANDWICH_LADY                   0x57 //FLAG_MET_RIVAL_MOM
#define FLAG_BIRCH_AIDE_MET                  0x58
#define FLAG_DECLINED_BIKE                   0x59
#define FLAG_RECEIVED_BIKE                   0x5A
#define FLAG_WATTSON_REMATCH_AVAILABLE       0x5B
#define FLAG_COLLECTED_ALL_SILVER_SYMBOLS    0x5C
#define FLAG_GOOD_LUCK_SAFARI_ZONE           0x5D // Set after talking to NPC blocking Safari Zone entrance/exit once.
#define FLAG_RECEIVED_WAILMER_PAIL           0x5E
#define FLAG_RECEIVED_POKEBLOCK_CASE         0x5F
#define FLAG_RECEIVED_SECRET_POWER           0x60
#define FLAG_MET_TEAM_AQUA_HARBOR            0x61
#define FLAG_TV_EXPLAINED                    0x62
#define FLAG_MAUVILLE_GYM_BARRIERS_STATE     0x63
#define FLAG_MOSSDEEP_GYM_SWITCH_1           0x64 // Leftover from the RS version of Mossdeep Gym, functionally unused
#define FLAG_MOSSDEEP_GYM_SWITCH_2           0x65 //
#define FLAG_MOSSDEEP_GYM_SWITCH_3           0x66 //
#define FLAG_MOSSDEEP_GYM_SWITCH_4           0x67 //
#define FLAG_RECEIVED_PULSECORE              0x68
#define FLAG_ELVARG                          0x69
#define FLAG_RECEIVED_PHOENIX_EGG            0x6A 
#define FLAG_RECEIVED_GUTHIX_EGG             0x6B 
#define FLAG_RECIEVED_KITTEN                 0x6C 
#define FLAG_VARROCKGYM_BOOK_1               0x6D 
#define FLAG_VARROCKGYM_BOOK_2               0x6E
#define FLAG_VARROCKGYM_BOOK_3               0x6F 
#define FLAG_VARROCKGYM_BOOK_4               0x70
#define FLAG_RECEIVED_TM63                   0x71
#define FLAG_EVENT_TEAM_JATIZSO              0x72 
#define FLAG_EVENT_TEAM_NEITIZNOT            0x73
#define FLAG_ADVENTURE_STARTED               0x74 // RECEIVED Pokédex.
#define FLAG_RECEIVED_YAK                    0x75 
#define FLAG_MET_HIDDEN_POWER_GIVER          0x76
#define FLAG_CANCEL_BATTLE_ROOM_CHALLENGE    0x77
#define FLAG_GAMEMODE_MONSTER_SPAWN          0x79
#define FLAG_LANDMARK_MIRAGE_TOWER           0x78
#define FLAG_EXP_ALL                         0x7A
#define FLAG_ALKHARIDGYM_1                   0x7B
#define FLAG_DG_DOOR_VARROCK_SEWERS          0x7C    //FLAG_REGISTER_RIVAL_POKENAV
#define FLAG_LIGHTHOUSE_PIRATE               0x7D    //FLAG_DEFEATED_RIVAL_ROUTE_104
#define FLAG_DEFEATED_WALLY_VICTORY_ROAD     0x7E
#define FLAG_MET_PRETTY_PETAL_SHOP_OWNER     0x7F
#define FLAG_ENABLE_ROXANNE_FIRST_CALL       0x80 // Set after defeating Brawly. This will activate a call with Roxanne in order to register her.
#define FLAG_KYOGRE_ESCAPED_SEAFLOOR_CAVERN  0x81
#define FLAG_TZHAAR_FOLLOW_GYM_INFO          0x82
#define FLAG_RECEIVED_DOLL_LANETTE           0x83
#define FLAG_RECEIVED_POTION_OLDALE          0x84
#define FLAG_RECEIVED_AMULET_COIN            0x85
#define FLAG_PENDING_DAYCARE_EGG             0x86
#define FLAG_THANKED_FOR_PLAYING_WITH_WALLY  0x87
#define FLAG_ENABLE_FIRST_WALLY_POKENAV_CALL 0x88 // Set after defeating Wally outside Mauville Gym. Will activate a call later to register Wally.
#define FLAG_ALKHARIDGYM_2                   0x89
#define FLAG_SCOTT_CALL_FORTREE_GYM          0x8A // Triggers call from Scott after defeating Winona
#define FLAG_DEFEATED_EVIL_TEAM_MT_CHIMNEY   0x8B
#define FLAG_ALKHARIDGYM_3                   0x8D
#define FLAG_ALKHARIDGYM_4                   0x8C
#define FLAG_DG_PUZZLE_ROOM_1                0x8E    //FLAG_DEVON_GOODS_STOLEN
#define FLAG_DG_PUZZLE_ROOM_2                0x8F    //FLAG_RECOVERED_DEVON_GOODS
#define FLAG_DG_PUZZLE_ROOM_3                0x90    //FLAG_RETURNED_DEVON_GOODS
#define FLAG_DG_PUZZLE_ROOM_4                0x91    //FLAG_CAUGHT_LUGIA
#define FLAG_DG_PUZZLE_ROOM_5                0x92    //FLAG_CAUGHT_HO_OH
#define FLAG_DG_PUZZLE_ROOM_6                0x93    //FLAG_MR_BRINEY_SAILING_INTRO
#define FLAG_DG_PUZZLE_ROOM_7                0x94    //FLAG_DOCK_REJECTED_DEVON_GOODS
#define FLAG_DG_PUZZLE_ROOM_8                0x95    //FLAG_DELIVERED_DEVON_GOODS
#define FLAG_GAMEMODE_SCALE_EVOLUTION        0x96 
#define FLAG_DUNGEONEERING_ITEM_1            0x97
#define FLAG_DUNGEONEERING_ITEM_2            0x98
#define FLAG_DUNGEONEERING_ITEM_3            0x99
#define FLAG_DUNGEONEERING_ITEM_4            0x9A
#define FLAG_DUNGEONEERING_ITEM_5            0x9B
#define FLAG_DUNGEONEERING_ITEM_6            0x9C
#define FLAG_DUNGEONEERING_ITEM_7            0x9D
#define FLAG_DUNGEONEERING_ITEM_8            0x9E
#define FLAG_DUNGEONEERING_ITEM_9            0x9F
#define FLAG_DUNGEONEERING_ITEM_10           0xA0
#define FLAG_DUNGEONEERING_ITEM_11           0xA1
#define FLAG_DUNGEONEERING_ITEM_12           0xA2
#define FLAG_DUNGEONEERING_ITEM_13           0xA3
#define FLAG_DUNGEONEERING_ITEM_14           0xA4
#define FLAG_DUNGEONEERING_ITEM_15           0xA5
#define FLAG_DUNGEONEERING_ITEM_16           0xA6
#define FLAG_DIANGO_GIFT_DRAGONKITE          0xA7   //FLAG_RECEIVED_TM34
#define FLAG_DIANGO_GIFT_FROGEELBURGER       0xA8   //FLAG_RECEIVED_TM50
#define FLAG_URI_ITEMFINDER                  0xA9   //FLAG_RECEIVED_TM42
#define FLAG_RECEIVED_TM37_DARKERMANZ        0xAA   //FLAG_RECEIVED_TM40
#define FLAG_POKESCAPE_RIMMINGTON_HAM_LOST_TIME 0xAB //FLAG_RECEIVED_TM04
#define FLAG_CAPTURED_VORKATH                0xAC   //FLAG_RECEIVED_TM03
#define FLAG_HIDE_SECRET_BASE_TRAINER        0xAD
#define FLAG_DECORATION_1                    0xAE
#define FLAG_DECORATION_2                    0xAF
#define FLAG_DECORATION_3                    0xB0
#define FLAG_DECORATION_4                    0xB1
#define FLAG_DECORATION_5                    0xB2
#define FLAG_DECORATION_6                    0xB3
#define FLAG_DECORATION_7                    0xB4
#define FLAG_DECORATION_8                    0xB5
#define FLAG_DECORATION_9                    0xB6
#define FLAG_DECORATION_10                   0xB7
#define FLAG_DECORATION_11                   0xB8
#define FLAG_DECORATION_12                   0xB9
#define FLAG_DECORATION_13                   0xBA
#define FLAG_DECORATION_14                   0xBB
#define FLAG_RECEIVED_POKENAV                0xBC
#define FLAG_RECIEVED_EX_EX_PARROT           0xBD   
#define FLAG_RECEIVED_SARADOMIN_EGG          0xBE //FLAG_RECEIVED_GUTHIX_EGG //FLAG_DEFEATED_WALLY_MAUVILLE
#define FLAG_RECEIVED_ZAMORAK_EGG            0xBF //FLAG_DEFEATED_GRUNT_SPACE_CENTER_1F
#define FLAG_RECEIVED_BANDLING_EGG           0xC0 //FLAG_RECEIVED_SUN_STONE_MOSSDEEP
#define FLAG_RECEIVED_ZAROLING_EGG           0xC1 //FLAG_WALLY_SPEECH
#define FLAG_RECEIVED_SERELING_EGG           0xC2 // Leftover from the RS version of Puzzle Room 7, functionally unused
#define FLAG_RECEIVED_UNGODLING_EGG          0xC3 //
#define FLAG_RECEIVED_ARMALING_EGG           0xC4 //
#define FLAG_RECEIVED_RAVENLING_EGG          0xC5 //
#define FLAG_RECEIVED_BASILISK_EGG           0xC6 //
#define FLAG_RECEIVED_TUMEKLING_EGG          0xC7 //FLAG_RUSTURF_TUNNEL_OPENED
#define FLAG_MIND_TALISMAN                   0xC8 // FLAG_RECEIVED_RED_SCARF
#define FLAG_MALIGNIUS_BATTLE                0xC9 //  FLAG_RECEIVED_BLUE_SCARF
#define FLAG_ROCKS_ROUTE23                   0xCA //FLAG_RECEIVED_PINK_SCARF
#define FLAG_POKESCAPE_TIME_RESET_MORNING    0xCB //FLAG_RECEIVED_GREEN_SCARF
#define FLAG_POKESCAPE_TIME_RESET_DAY        0xCC //FLAG_RECEIVED_YELLOW_SCARF
#define FLAG_POKESCAPE_TIME_RESET_EVENING    0xCD //FLAG_INTERACTED_WITH_STEVEN_SPACE_CENTER
#define FLAG_POKESCAPE_TIME_RESET_NIGHT      0xCE //FLAG_ENCOUNTERED_LATIAS_OR_LATIOS
#define FLAG_DIANGO_GIFT_SPARKLES24          0xCF // FLAG_MET_ARCHIE_METEOR_FALLS
#define FLAG_GIFT_BIRDS_NEST                 0xD0 // FLAG_GOT_BASEMENT_KEY_FROM_WATTSON
#define FLAG_POKESCAPE_USECUSTOM_POOL_LEVEL  0xD1 //FLAG_GOT_TM24_FROM_WATTSON
#define FLAG_FAN_CLUB_STRENGTH_SHARED        0xD2 // Set when you rate the strength of another trainer in Lilycove's Trainer Fan Club.
#define FLAG_CAPTURED_SNOWIMP                0xD3 //FLAG_DEFEATED_RIVAL_RUSTBORO
#define FLAG_RECEIVED_RED_OR_BLUE_ORB        0xD4
#define FLAG_PARTNER_BATTLE                  0xD5 //FLAG_RECEIVED_PREMIER_BALL_RUSTBORO
#define FLAG_TOGGLE_FORCED_WILD_DOUBLE_BATTLES  0xD6 // FLAG_ENABLE_WALLY_MATCH_CALL
#define FLAG_ENABLE_SCOTT_MATCH_CALL         0xD7
#define FLAG_ENABLE_MOM_MATCH_CALL           0xD8
#define FLAG_MET_DIVING_TREASURE_HUNTER      0xD9
#define FLAG_MET_WAILMER_TRAINER             0xDA
#define FLAG_EVIL_LEADER_PLEASE_STOP         0xDB
#define FLAG_NEVER_SET_0x0DC                 0xDC // This flag is read, but never written to
#define FLAG_RECEIVED_GO_GOGGLES             0xDD
#define FLAG_WINGULL_SENT_ON_ERRAND          0xDE
#define FLAG_RECEIVED_MENTAL_HERB            0xDF
#define FLAG_WINGULL_DELIVERED_MAIL          0xE0
#define FLAG_RECEIVED_20_COINS               0xE1
#define FLAG_RECEIVED_STARTER_DOLL           0xE2
#define FLAG_RECEIVED_GOOD_ROD               0xE3
#define FLAG_REGI_DOORS_OPENED               0xE4
#define FLAG_SEA_TROLL                       0xE5 //FLAG_SEA_TROLL FLAG_RECEIVED_TM27
#define FLAG_RECEIVED_TM36                   0xE6
#define FLAG_RECEIVED_TM05                   0xE7
#define FLAG_RECEIVED_TM19                   0xE8
#define FLAG_RECEIVED_TM47                   0xE9
#define FLAG_RECEIVED_TM44                   0xEA
#define FLAG_RECEIVED_TM45                   0xEB
#define FLAG_RECEIVED_GLASS_ORNAMENT         0xEC
#define FLAG_RECEIVED_SILVER_SHIELD          0xED
#define FLAG_RECEIVED_GOLD_SHIELD            0xEE
#define FLAG_USED_STORAGE_KEY                0xEF
#define FLAG_USED_ROOM_1_KEY                 0xF0
#define FLAG_USED_ROOM_2_KEY                 0xF1
#define FLAG_USED_ROOM_4_KEY                 0xF2
#define FLAG_USED_ROOM_6_KEY                 0xF3
#define FLAG_MET_PROF_COZMO                  0xF4
#define FLAG_RECEIVED_WAILMER_DOLL           0xF5
#define FLAG_RECEIVED_CHESTO_BERRY_ROUTE_104 0xF6
#define FLAG_DEFEATED_SS_TIDAL_TRAINERS      0xF7
#define FLAG_RECEIVED_SPELON_BERRY           0xF8
#define FLAG_RECEIVED_PAMTRE_BERRY           0xF9
#define FLAG_RECEIVED_WATMEL_BERRY           0xFA
#define FLAG_RECEIVED_DURIN_BERRY            0xFB
#define FLAG_RECEIVED_BELUE_BERRY            0xFC
#define FLAG_ENABLE_RIVAL_MATCH_CALL         0xFD
#define FLAG_RECEIVED_CHARCOAL               0xFE
#define FLAG_LATIOS_OR_LATIAS_ROAMING        0xFF
#define FLAG_RECEIVED_REPEAT_BALL            0x100
#define FLAG_RECEIVED_OLD_ROD                0x101
#define FLAG_RECEIVED_COIN_CASE              0x102
#define FLAG_RETURNED_RED_OR_BLUE_ORB        0x103
#define FLAG_RECEIVED_TM49                   0x104
#define FLAG_RECEIVED_TM28                   0x105
#define FLAG_RECEIVED_TM09                   0x106
#define FLAG_ENTERED_ELITE_FOUR              0x107
#define FLAG_RECEIVED_TM10                   0x108
#define FLAG_RECEIVED_TM41                   0x109
#define FLAG_RECEIVED_LAVARIDGE_EGG          0x10A
#define FLAG_RECEIVED_REVIVED_FOSSIL_MON     0x10B
#define FLAG_SECRET_BASE_REGISTRY_ENABLED    0x10C
#define FLAG_RECEIVED_TM46                   0x10D
#define FLAG_CONTEST_SKETCH_CREATED          0x10E  // Set but never read
#define FLAG_EVIL_TEAM_ESCAPED_STERN_SPOKE   0x10F
#define FLAG_RECEIVED_EXP_SHARE              0x110
#define FLAG_POKERUS_EXPLAINED               0x111
#define FLAG_RECEIVED_RUNNING_SHOES          0x112
#define FLAG_RECEIVED_QUICK_CLAW             0x113
#define FLAG_RECEIVED_KINGS_ROCK             0x114
#define FLAG_RECEIVED_MACHO_BRACE            0x115
#define FLAG_RECEIVED_SOOTHE_BELL            0x116
#define FLAG_RECEIVED_WHITE_HERB             0x117
#define FLAG_RECEIVED_SOFT_SAND              0x118
#define FLAG_ENABLE_PROF_BIRCH_MATCH_CALL    0x119
#define FLAG_RECEIVED_CLEANSE_TAG            0x11A
#define FLAG_RECEIVED_FOCUS_BAND             0x11B
#define FLAG_DECLINED_WALLY_BATTLE_MAUVILLE  0x11C
#define FLAG_RECEIVED_DEVON_SCOPE            0x11D
#define FLAG_DECLINED_RIVAL_BATTLE_LILYCOVE  0x11E
#define FLAG_MET_DEVON_EMPLOYEE              0x11F
#define FLAG_MET_RIVAL_RUSTBORO              0x120
#define FLAG_RECEIVED_SILK_SCARF             0x121
#define FLAG_NOT_READY_FOR_BATTLE_ROUTE_120  0x122
#define FLAG_RECEIVED_SS_TICKET              0x123
#define FLAG_MET_RIVAL_LILYCOVE              0x124
#define FLAG_MET_RIVAL_IN_HOUSE_AFTER_LILYCOVE 0x125
#define FLAG_EXCHANGED_SCANNER               0x126
#define FLAG_KECLEON_FLED_FORTREE            0x127
#define FLAG_PETALBURG_MART_EXPANDED_ITEMS   0x128
#define FLAG_RECEIVED_MIRACLE_SEED           0x129
#define FLAG_RECEIVED_BELDUM                 0x12A
#define FLAG_RECEIVED_FANCLUB_TM_THIS_WEEK   0x12B
#define FLAG_MET_FANCLUB_YOUNGER_BROTHER     0x12C
#define FLAG_RIVAL_LEFT_FOR_ROUTE103         0x12D
#define FLAG_OMIT_DIVE_FROM_STEVEN_LETTER    0x12E
#define FLAG_HAS_MATCH_CALL                  0x12F
#define FLAG_ADDED_MATCH_CALL_TO_POKENAV     0x130
#define FLAG_REGISTERED_STEVEN_POKENAV       0x131
#define FLAG_ENABLE_NORMAN_MATCH_CALL        0x132
#define FLAG_STEVEN_GUIDES_TO_CAVE_OF_ORIGIN 0x133 // Set after you follow Steven to the entrance of the Cave of Origin.
#define FLAG_MET_ARCHIE_SOOTOPOLIS           0x134
#define FLAG_MET_MAXIE_SOOTOPOLIS            0x135
#define FLAG_MET_SCOTT_RUSTBORO              0x136
#define FLAG_WALLACE_GOES_TO_SKY_PILLAR      0x137 // Set after speaking to Wallace within the Cave of Origin.
#define FLAG_RECEIVED_HM07                   0x138
#define FLAG_BEAT_MAGMA_GRUNT_JAGGED_PASS    0x139
#define FLAG_RECEIVED_AURORA_TICKET          0x13A
#define FLAG_RECEIVED_MYSTIC_TICKET          0x13B
#define FLAG_RECEIVED_OLD_SEA_MAP            0x13C
#define FLAG_WONDER_CARD_UNUSED_1            0x13D // These Wonder Card flags are referenced but never set
#define FLAG_WONDER_CARD_UNUSED_2            0x13E
#define FLAG_WONDER_CARD_UNUSED_3            0x13F
#define FLAG_WONDER_CARD_UNUSED_4            0x140
#define FLAG_WONDER_CARD_UNUSED_5            0x141
#define FLAG_WONDER_CARD_UNUSED_6            0x142
#define FLAG_WONDER_CARD_UNUSED_7            0x143
#define FLAG_WONDER_CARD_UNUSED_8            0x144
#define FLAG_WONDER_CARD_UNUSED_9            0x145
#define FLAG_WONDER_CARD_UNUSED_10           0x146
#define FLAG_WONDER_CARD_UNUSED_11           0x147
#define FLAG_WONDER_CARD_UNUSED_12           0x148
#define FLAG_WONDER_CARD_UNUSED_13           0x149
#define FLAG_WONDER_CARD_UNUSED_14           0x14A
#define FLAG_WONDER_CARD_UNUSED_15           0x14B
#define FLAG_WONDER_CARD_UNUSED_16           0x14C
#define FLAG_WONDER_CARD_UNUSED_17           0x14D
#define NUM_WONDER_CARD_FLAGS                (1 + FLAG_WONDER_CARD_UNUSED_17 - FLAG_RECEIVED_AURORA_TICKET)

#define FLAG_MIRAGE_TOWER_VISIBLE            0x14E
#define FLAG_CHOSE_ROOT_FOSSIL               0x14F
#define FLAG_CHOSE_CLAW_FOSSIL               0x150
#define FLAG_RECEIVED_POWDER_JAR             0x151

#define FLAG_CHOSEN_MULTI_BATTLE_NPC_PARTNER 0x152

#define FLAG_MET_BATTLE_FRONTIER_BREEDER     0x153
#define FLAG_MET_BATTLE_FRONTIER_MANIAC      0x154
#define FLAG_ENTERED_CONTEST                 0x155
#define FLAG_MET_SLATEPORT_FANCLUB_CHAIRMAN  0x156
#define FLAG_MET_BATTLE_FRONTIER_GAMBLER     0x157
#define FLAG_ENABLE_MR_STONE_POKENAV         0x158
#define FLAG_NURSE_MENTIONS_GOLD_CARD        0x159
#define FLAG_MET_FRONTIER_BEAUTY_MOVE_TUTOR  0x15A
#define FLAG_MET_FRONTIER_SWIMMER_MOVE_TUTOR 0x15B

// Trainer Rematch Flags
#define FLAG_MATCH_CALL_REGISTERED           0x15C
#define FLAG_REMATCH_ROSE                    0x15D
#define FLAG_REMATCH_ANDRES                  0x15E
#define FLAG_REMATCH_DUSTY                   0x15F
#define FLAG_REMATCH_LOLA                    0x160
#define FLAG_REMATCH_RICKY                   0x161
#define FLAG_REMATCH_LILA_AND_ROY            0x162
#define FLAG_REMATCH_CRISTIN                 0x163
#define FLAG_REMATCH_BROOKE                  0x164
#define FLAG_REMATCH_WILTON                  0x165
#define FLAG_REMATCH_VALERIE                 0x166
#define FLAG_REMATCH_CINDY                   0x167
#define FLAG_REMATCH_THALIA                  0x168
#define FLAG_REMATCH_JESSICA                 0x169
#define FLAG_REMATCH_WINSTON                 0x16A
#define FLAG_REMATCH_STEVE                   0x16B
#define FLAG_REMATCH_TONY                    0x16C
#define FLAG_REMATCH_NOB                     0x16D
#define FLAG_REMATCH_KOJI                    0x16E
#define FLAG_REMATCH_FERNANDO                0x16F
#define FLAG_REMATCH_DALTON                  0x170
#define FLAG_REMATCH_BERNIE                  0x171
#define FLAG_REMATCH_ETHAN                   0x172
#define FLAG_REMATCH_JOHN_AND_JAY            0x173
#define FLAG_REMATCH_JEFFREY                 0x174
#define FLAG_REMATCH_CAMERON                 0x175
#define FLAG_REMATCH_JACKI                   0x176
#define FLAG_REMATCH_WALTER                  0x177
#define FLAG_REMATCH_KAREN                   0x178
#define FLAG_REMATCH_JERRY                   0x179
#define FLAG_REMATCH_ANNA_AND_MEG            0x17A
#define FLAG_REMATCH_ISABEL                  0x17B
#define FLAG_REMATCH_MIGUEL                  0x17C
#define FLAG_REMATCH_TIMOTHY                 0x17D
#define FLAG_REMATCH_SHELBY                  0x17E
#define FLAG_REMATCH_CALVIN                  0x17F
#define FLAG_REMATCH_ELLIOT                  0x180
#define FLAG_REMATCH_ISAIAH                  0x181
#define FLAG_REMATCH_MARIA                   0x182
#define FLAG_REMATCH_ABIGAIL                 0x183
#define FLAG_REMATCH_DYLAN                   0x184
#define FLAG_REMATCH_KATELYN                 0x185
#define FLAG_REMATCH_BENJAMIN                0x186
#define FLAG_REMATCH_PABLO                   0x187
#define FLAG_REMATCH_NICOLAS                 0x188
#define FLAG_REMATCH_ROBERT                  0x189
#define FLAG_REMATCH_LAO                     0x18A
#define FLAG_REMATCH_CYNDY                   0x18B
#define FLAG_REMATCH_MADELINE                0x18C
#define FLAG_REMATCH_JENNY                   0x18D
#define FLAG_REMATCH_DIANA                   0x18E
#define FLAG_REMATCH_AMY_AND_LIV             0x18F
#define FLAG_REMATCH_ERNEST                  0x190
#define FLAG_REMATCH_CORY                    0x191
#define FLAG_REMATCH_EDWIN                   0x192
#define FLAG_REMATCH_LYDIA                   0x193
#define FLAG_REMATCH_ISAAC                   0x194
#define FLAG_REMATCH_GABRIELLE               0x195
#define FLAG_REMATCH_CATHERINE               0x196
#define FLAG_REMATCH_JACKSON                 0x197
#define FLAG_REMATCH_HALEY                   0x198
#define FLAG_REMATCH_JAMES                   0x199
#define FLAG_REMATCH_TRENT                   0x19A
#define FLAG_REMATCH_SAWYER                  0x19B
#define FLAG_REMATCH_KIRA_AND_DAN            0x19C
#define FLAG_REMATCH_WALLY                   0x19D
#define FLAG_REMATCH_ROXANNE                 0x19E
#define FLAG_REMATCH_BRAWLY                  0x19F
#define FLAG_REMATCH_WATTSON                 0x1A0
#define FLAG_REMATCH_FLANNERY                0x1A1
#define FLAG_REMATCH_NORMAN                  0x1A2
#define FLAG_REMATCH_WINONA                  0x1A3
#define FLAG_REMATCH_TATE_AND_LIZA           0x1A4
// Note: FLAG_REMATCH_JUAN is handled by FLAG_ENABLE_JUAN_MATCH_CALL instead.
#define FLAG_REMATCH_SIDNEY                  0x1A5
#define FLAG_REMATCH_PHOEBE                  0x1A6
#define FLAG_REMATCH_GLACIA                  0x1A7
#define FLAG_REMATCH_DRAKE                   0x1A8
#define FLAG_REMATCH_WALLACE                 0x1A9

#define FLAG_RECEIVED_TM51                   0x1AA
#define FLAG_UNUSED_0x1AB                    0x1AB // Unused Flag

#define FLAG_DEFEATED_DEOXYS                 0x1AC
#define FLAG_BATTLED_DEOXYS                  0x1AD
#define FLAG_SHOWN_EON_TICKET                0x1AE
#define FLAG_SHOWN_AURORA_TICKET             0x1AF
#define FLAG_SHOWN_OLD_SEA_MAP               0x1B0
#define FLAG_MOVE_TUTOR_TAUGHT_SWAGGER       0x1B1
#define FLAG_MOVE_TUTOR_TAUGHT_ROLLOUT       0x1B2
#define FLAG_MOVE_TUTOR_TAUGHT_FURY_CUTTER   0x1B3
#define FLAG_MOVE_TUTOR_TAUGHT_MIMIC         0x1B4
#define FLAG_MOVE_TUTOR_TAUGHT_METRONOME     0x1B5
#define FLAG_MOVE_TUTOR_TAUGHT_SLEEP_TALK    0x1B6
#define FLAG_MOVE_TUTOR_TAUGHT_SUBSTITUTE    0x1B7
#define FLAG_MOVE_TUTOR_TAUGHT_DYNAMICPUNCH  0x1B8
#define FLAG_MOVE_TUTOR_TAUGHT_DOUBLE_EDGE   0x1B9
#define FLAG_MOVE_TUTOR_TAUGHT_EXPLOSION     0x1BA
#define FLAG_DEFEATED_REGIROCK               0x1BB
#define FLAG_DEFEATED_REGICE                 0x1BC
#define FLAG_DEFEATED_REGISTEEL              0x1BD
#define FLAG_DEFEATED_KYOGRE                 0x1BE
#define FLAG_DEFEATED_GROUDON                0x1BF
#define FLAG_DEFEATED_RAYQUAZA               0x1C0
#define FLAG_DEFEATED_VOLTORB_1_NEW_MAUVILLE 0x1C1
#define FLAG_DEFEATED_VOLTORB_2_NEW_MAUVILLE 0x1C2
#define FLAG_DEFEATED_VOLTORB_3_NEW_MAUVILLE 0x1C3
#define FLAG_DEFEATED_ELECTRODE_1_AQUA_HIDEOUT 0x1C4
#define FLAG_DEFEATED_ELECTRODE_2_AQUA_HIDEOUT 0x1C5
#define FLAG_DEFEATED_SUDOWOODO              0x1C6
#define FLAG_DEFEATED_MEW                    0x1C7
#define FLAG_DEFEATED_LATIAS_OR_LATIOS       0x1C8
#define FLAG_CAUGHT_LATIAS_OR_LATIOS         0x1C9
#define FLAG_CAUGHT_MEW                      0x1CA
#define FLAG_MET_SCOTT_AFTER_OBTAINING_STONE_BADGE 0x1CB
#define FLAG_MET_SCOTT_IN_VERDANTURF         0x1CC
#define FLAG_MET_SCOTT_IN_FALLARBOR          0x1CD
#define FLAG_MET_SCOTT_IN_LILYCOVE           0x1CE
#define FLAG_MET_SCOTT_IN_EVERGRANDE         0x1CF
#define FLAG_MET_SCOTT_ON_SS_TIDAL           0x1D0
#define FLAG_SCOTT_GIVES_BATTLE_POINTS       0x1D1
#define FLAG_COLLECTED_ALL_GOLD_SYMBOLS      0x1D2
#define FLAG_ENABLE_ROXANNE_MATCH_CALL       0x1D3
#define FLAG_ENABLE_BRAWLY_MATCH_CALL        0x1D4
#define FLAG_ENABLE_WATTSON_MATCH_CALL       0x1D5
#define FLAG_ENABLE_FLANNERY_MATCH_CALL      0x1D6
#define FLAG_ENABLE_WINONA_MATCH_CALL        0x1D7
#define FLAG_ENABLE_TATE_AND_LIZA_MATCH_CALL 0x1D8
#define FLAG_ENABLE_JUAN_MATCH_CALL          0x1D9

#define FLAG_UNUSED_0x1DA                    0x1DA // Unused Flag

#define FLAG_SHOWN_MYSTIC_TICKET             0x1DB
#define FLAG_DEFEATED_HO_OH                  0x1DC
#define FLAG_DEFEATED_LUGIA                  0x1DD

#define FLAG_UNUSED_0x1DE                    0x1DE // Unused Flag
#define FLAG_UNUSED_0x1DF                    0x1DF // Unused Flag
#define FLAG_UNUSED_0x1E0                    0x1E0 // Unused Flag
#define FLAG_UNUSED_0x1E1                    0x1E1 // Unused Flag
#define FLAG_UNUSED_0x1E2                    0x1E2 // Unused Flag
#define FLAG_UNUSED_0x1E3                    0x1E3 // Unused Flag

// Mystery Gift Flags (Unknown)
#define FLAG_MYSTERY_GIFT_DONE               0x1E4
#define FLAG_MYSTERY_GIFT_1                  0x1E5
#define FLAG_MYSTERY_GIFT_2                  0x1E6
#define FLAG_MYSTERY_GIFT_3                  0x1E7
#define FLAG_MYSTERY_GIFT_4                  0x1E8
#define FLAG_MYSTERY_GIFT_5                  0x1E9
#define FLAG_MYSTERY_GIFT_6                  0x1EA
#define FLAG_MYSTERY_GIFT_7                  0x1EB
#define FLAG_MYSTERY_GIFT_8                  0x1EC
#define FLAG_MYSTERY_GIFT_9                  0x1ED
#define FLAG_MYSTERY_GIFT_10                 0x1EE
#define FLAG_MYSTERY_GIFT_11                 0x1EF
#define FLAG_MYSTERY_GIFT_12                 0x1F0
#define FLAG_MYSTERY_GIFT_13                 0x1F1
#define FLAG_MYSTERY_GIFT_14                 0x1F2
#define FLAG_MYSTERY_GIFT_15                 0x1F3

// Hidden Items -- sorted by location
#define FLAG_HIDDEN_ITEMS_START                                 0x1F4

//POKESCAPE HIDDEN ITEMS
#define FLAG_HIDDEN_ITEM_LUMBRIDGE_ITEM_1                       (FLAG_HIDDEN_ITEMS_START + 0x01)
#define FLAG_HIDDEN_ITEM_LUMBRIDGE_ITEM_2                       (FLAG_HIDDEN_ITEMS_START + 0x08)
#define FLAG_HIDDEN_ITEM_LUMBRIDGE_BEER                         (FLAG_HIDDEN_ITEMS_START + 0x09)
#define FLAG_HIDDEN_ITEM_LUMBRIDGE_CABBAGE                      (FLAG_HIDDEN_ITEMS_START + 0x0A)
#define FLAG_HIDDEN_ITEM_DRAYNORMANOR_ITEM_LAMP_HP              (FLAG_HIDDEN_ITEMS_START + 0x0B)
#define FLAG_HIDDEN_ITEM_DRAYNORMANOR_ITEM_PURPLE_SWEETS        (FLAG_HIDDEN_ITEMS_START + 0x0D)
#define FLAG_HIDDEN_ITEM_ROUTE10_MINT_CAKE                      (FLAG_HIDDEN_ITEMS_START + 0x24)
#define FLAG_HIDDEN_ITEM_ROUTE10_LAMP_SPDEF                     (FLAG_HIDDEN_ITEMS_START + 0x26)
#define FLAG_HIDDEN_ITEM_PORTSARIM_WATER_RUNE                   (FLAG_HIDDEN_ITEMS_START + 0x0E)
#define FLAG_HIDDEN_ITEM_PORTSARIM_LAMP_SPEED                   (FLAG_HIDDEN_ITEMS_START + 0x0F)
#define FLAG_HIDDEN_ITEM_PORTSARIM_FLAX                         (FLAG_HIDDEN_ITEMS_START + 0x10)
#define FLAG_HIDDEN_ITEM_AsgarnianDungeon_1                     (FLAG_HIDDEN_ITEMS_START + 0x11)
#define FLAG_HIDDEN_ITEM_AsgarnianDungeon_2                     (FLAG_HIDDEN_ITEMS_START + 0x13)
#define FLAG_HIDDEN_ITEM_AsgarnianDungeon_3                     (FLAG_HIDDEN_ITEMS_START + 0x12)
#define FLAG_HIDDEN_ITEM_GoblinVillage_1                        (FLAG_HIDDEN_ITEMS_START + 0x14)
#define FLAG_HIDDEN_ITEM_GoblinVillage_2                        (FLAG_HIDDEN_ITEMS_START + 0x0C)
#define FLAG_HIDDEN_FLAG_ITEM_RimmingtonMines_1                 (FLAG_HIDDEN_ITEMS_START + 0x15)
#define FLAG_HIDDEN_FLAG_ITEM_RimmingtonMines_2                 (FLAG_HIDDEN_ITEMS_START + 0x16)
#define FLAG_HIDDEN_ITEM_ROUTE8_1                               (FLAG_HIDDEN_ITEMS_START + 0x17)
#define FLAG_HIDDEN_ITEM_ROUTE8_2                               (FLAG_HIDDEN_ITEMS_START + 0x18)
#define FLAG_HIDDEN_ITEM_ROUTE8_3                               (FLAG_HIDDEN_ITEMS_START + 0x19)
#define FLAG_HIDDEN_ITEM_ROUTE8_4                               (FLAG_HIDDEN_ITEMS_START + 0x1A)
#define FLAG_HIDDEN_ITEM_ROUTE29_1                              (FLAG_HIDDEN_ITEMS_START + 0x1C)
#define FLAG_HIDDEN_ITEM_ROUTE29_2                              (FLAG_HIDDEN_ITEMS_START + 0x00)
//LeAVE THESE KEYS
#define FLAG_HIDDEN_ITEM_ABANDONED_SHIP_RM_1_KEY                (FLAG_HIDDEN_ITEMS_START + 0x1F)
#define FLAG_HIDDEN_ITEM_ABANDONED_SHIP_RM_2_KEY                (FLAG_HIDDEN_ITEMS_START + 0x20)
#define FLAG_HIDDEN_ITEM_ABANDONED_SHIP_RM_4_KEY                (FLAG_HIDDEN_ITEMS_START + 0x21)
#define FLAG_HIDDEN_ITEM_ABANDONED_SHIP_RM_6_KEY                (FLAG_HIDDEN_ITEMS_START + 0x22)
//
#define FLAG_HIDDEN_ITEM_ROUTE29_3                              (FLAG_HIDDEN_ITEMS_START + 0x65)
#define FLAG_HIDDEN_ITEM_MUSA_POINT_1                           (FLAG_HIDDEN_ITEMS_START + 0x66)
#define FLAG_HIDDEN_ITEM_MUSA_POINT_2                           (FLAG_HIDDEN_ITEMS_START + 0x67)
#define FLAG_HIDDEN_ITEM_MUSA_POINT_3                           (FLAG_HIDDEN_ITEMS_START + 0x68)
#define FLAG_HIDDEN_ITEM_MUSA_POINT_4                           (FLAG_HIDDEN_ITEMS_START + 0x30)
#define FLAG_HIDDEN_ITEM_KARAMJA_VOLCANO_1                      (FLAG_HIDDEN_ITEMS_START + 0x31)
#define FLAG_HIDDEN_ITEM_LUMBRIDGE_FOREST_1                     (FLAG_HIDDEN_ITEMS_START + 0x4C)
#define FLAG_HIDDEN_ITEM_TEMP_1                                 (FLAG_HIDDEN_ITEMS_START + 0x4D)
#define FLAG_HIDDEN_ITEM_TEMP_2                                 (FLAG_HIDDEN_ITEMS_START + 0x1B)
#define FLAG_HIDDEN_ITEM_TEMP_3                                 (FLAG_HIDDEN_ITEMS_START + 0x2B)
#define FLAG_HIDDEN_ITEM_TEMP_4                                 (FLAG_HIDDEN_ITEMS_START + 0x4B)
#define FLAG_HIDDEN_ITEM_TEMP_5                                 (FLAG_HIDDEN_ITEMS_START + 0x1D)
#define FLAG_HIDDEN_ITEM_TEMP_6                                 (FLAG_HIDDEN_ITEMS_START + 0x4E)
#define FLAG_HIDDEN_ITEM_TEMP_7                                 (FLAG_HIDDEN_ITEMS_START + 0x4F)
#define FLAG_HIDDEN_ITEM_TEMP_8                                 (FLAG_HIDDEN_ITEMS_START + 0x50)
#define FLAG_HIDDEN_ITEM_TEMP_9                                 (FLAG_HIDDEN_ITEMS_START + 0x6D)
#define FLAG_HIDDEN_ITEM_TEMP_10                                (FLAG_HIDDEN_ITEMS_START + 0x5F)
#define FLAG_HIDDEN_ITEM_TEMP_11                                (FLAG_HIDDEN_ITEMS_START + 0x3A)
#define FLAG_HIDDEN_ITEM_TEMP_12                                (FLAG_HIDDEN_ITEMS_START + 0x3B)
#define FLAG_HIDDEN_ITEM_TEMP_13                                (FLAG_HIDDEN_ITEMS_START + 0x3C)
#define FLAG_HIDDEN_ITEM_TEMP_14                                (FLAG_HIDDEN_ITEMS_START + 0x3D)
#define FLAG_HIDDEN_ITEM_TEMP_15                                (FLAG_HIDDEN_ITEMS_START + 0x52)
#define FLAG_HIDDEN_ITEM_TEMP_16                                (FLAG_HIDDEN_ITEMS_START + 0x53)
#define FLAG_HIDDEN_ITEM_TEMP_17                                (FLAG_HIDDEN_ITEMS_START + 0x6A)
#define FLAG_HIDDEN_ITEM_TEMP_18                                (FLAG_HIDDEN_ITEMS_START + 0x6B)
#define FLAG_HIDDEN_ITEM_TEMP_19                                (FLAG_HIDDEN_ITEMS_START + 0x6C)
#define FLAG_HIDDEN_ITEM_TEMP_20                                (FLAG_HIDDEN_ITEMS_START + 0x69)
#define FLAG_HIDDEN_ITEM_VARROCK_1                              (FLAG_HIDDEN_ITEMS_START + 0x23)
#define FLAG_HIDDEN_ITEM_VARROCK_2                              (FLAG_HIDDEN_ITEMS_START + 0x51)
#define FLAG_HIDDEN_ITEM_VARROCK_3                              (FLAG_HIDDEN_ITEMS_START + 0x2C)
#define FLAG_HIDDEN_ITEM_VARROCK_4                              (FLAG_HIDDEN_ITEMS_START + 0x3E)
#define FLAG_HIDDEN_ITEM_VARROCK_5                              (FLAG_HIDDEN_ITEMS_START + 0x25)
#define FLAG_HIDDEN_ITEM_VARROCK_6                              (FLAG_HIDDEN_ITEMS_START + 0x55)
#define FLAG_HIDDEN_ITEM_DWARVEN_MINES_1                        (FLAG_HIDDEN_ITEMS_START + 0x58)
#define FLAG_HIDDEN_ITEM_DWARVEN_MINES_2                        (FLAG_HIDDEN_ITEMS_START + 0x59)
#define FLAG_HIDDEN_ITEM_DWARVEN_MINES_3                        (FLAG_HIDDEN_ITEMS_START + 0x6F)
#define FLAG_HIDDEN_ITEM_DWARVEN_MINES_4                        (FLAG_HIDDEN_ITEMS_START + 0x3F)
#define FLAG_HIDDEN_ITEM_MUDSKIPPER_POINT_1                     (FLAG_HIDDEN_ITEMS_START + 0x2E)
#define FLAG_HIDDEN_ITEM_MUDSKIPPER_POINT_2                     (FLAG_HIDDEN_ITEMS_START + 0x2F)
#define FLAG_HIDDEN_ITEM_MUDSKIPPER_POINT_3                     (FLAG_HIDDEN_ITEMS_START + 0x56)
#define FLAG_HIDDEN_ITEM_VARROCK_SEWER_1                        (FLAG_HIDDEN_ITEMS_START + 0x32)
#define FLAG_HIDDEN_ITEM_DRAYNORMANOR_1                         (FLAG_HIDDEN_ITEMS_START + 0x34)
#define FLAG_HIDDEN_ITEM_DRAYNORMANOR_2                         (FLAG_HIDDEN_ITEMS_START + 0x33)
#define FLAG_HIDDEN_ITEM_DRAYNORMANOR_3                         (FLAG_HIDDEN_ITEMS_START + 0x40)
#define FLAG_HIDDEN_ITEM_DRAYNORMANOR_4                         (FLAG_HIDDEN_ITEMS_START + 0x5A)
#define FLAG_HIDDEN_ITEM_DRAYNORMANOR_5                         (FLAG_HIDDEN_ITEMS_START + 0x5B)
#define FLAG_HIDDEN_ITEM_MELZAR_1                               (FLAG_HIDDEN_ITEMS_START + 0x36)
#define FLAG_HIDDEN_ITEM_MELZAR_2                               (FLAG_HIDDEN_ITEMS_START + 0x35)
#define FLAG_HIDDEN_ITEM_MELZAR_3                               (FLAG_HIDDEN_ITEMS_START + 0x41)
#define FLAG_HIDDEN_ITEM_MELZAR_4                               (FLAG_HIDDEN_ITEMS_START + 0x37)
#define FLAG_HIDDEN_ITEM_MELZAR_5                               (FLAG_HIDDEN_ITEMS_START + 0x02)
#define FLAG_HIDDEN_ITEM_MELZAR_6                               (FLAG_HIDDEN_ITEMS_START + 0x38)
#define FLAG_HIDDEN_ITEM_MELZAR_7                               (FLAG_HIDDEN_ITEMS_START + 0x39)
#define FLAG_HIDDEN_ITEM_ROUTE12_1                              (FLAG_HIDDEN_ITEMS_START + 0x03)
#define FLAG_HIDDEN_ITEM_ROUTE39_1                              (FLAG_HIDDEN_ITEMS_START + 0x1E)
#define FLAG_HIDDEN_ITEM_ROUTE39_2                              (FLAG_HIDDEN_ITEMS_START + 0x62)
#define FLAG_HIDDEN_ITEM_TRAINING_ROOM_1                        (FLAG_HIDDEN_ITEMS_START + 0x04)
#define FLAG_HIDDEN_ITEM_TRAINING_ROOM_2                        (FLAG_HIDDEN_ITEMS_START + 0x2A)
#define FLAG_HIDDEN_ITEM_TRAINING_ROOM_3                        (FLAG_HIDDEN_ITEMS_START + 0x61)
#define FLAG_HIDDEN_ITEM_TRAINING_ROOM_4                        (FLAG_HIDDEN_ITEMS_START + 0x2D)
#define FLAG_HIDDEN_ITEM_BKFORT_CABBAGE                         (FLAG_HIDDEN_ITEMS_START + 0x60)

#define FLAG_HIDDEN_ITEM_ROUTE_117_REPEL                        (FLAG_HIDDEN_ITEMS_START + 0x48)
#define FLAG_HIDDEN_ITEM_ROUTE_118_HEART_SCALE                  (FLAG_HIDDEN_ITEMS_START + 0x42)
#define FLAG_HIDDEN_ITEM_ROUTE_118_IRON                         (FLAG_HIDDEN_ITEMS_START + 0x43)
#define FLAG_HIDDEN_ITEM_ROUTE_119_CALCIUM                      (FLAG_HIDDEN_ITEMS_START + 0x05)
#define FLAG_HIDDEN_ITEM_ROUTE_119_ULTRA_BALL                   (FLAG_HIDDEN_ITEMS_START + 0x06)
#define FLAG_HIDDEN_ITEM_ROUTE_119_FULL_HEAL                    (FLAG_HIDDEN_ITEMS_START + 0x44)
#define FLAG_HIDDEN_ITEM_ROUTE_119_MAX_ETHER                    (FLAG_HIDDEN_ITEMS_START + 0x57)
#define FLAG_HIDDEN_ITEM_ROUTE_120_RARE_CANDY_1                 (FLAG_HIDDEN_ITEMS_START + 0x47)
#define FLAG_HIDDEN_ITEM_ROUTE_120_REVIVE                       (FLAG_HIDDEN_ITEMS_START + 0x54)
#define FLAG_HIDDEN_ITEM_ROUTE_120_RARE_CANDY_2                 (FLAG_HIDDEN_ITEMS_START + 0x45)
#define FLAG_HIDDEN_ITEM_ROUTE_120_ZINC                         (FLAG_HIDDEN_ITEMS_START + 0x46)
#define FLAG_HIDDEN_ITEM_ROUTE_121_HP_UP                        (FLAG_HIDDEN_ITEMS_START + 0x27)
#define FLAG_HIDDEN_ITEM_ROUTE_121_NUGGET                       (FLAG_HIDDEN_ITEMS_START + 0x28)
#define FLAG_HIDDEN_ITEM_ROUTE_121_FULL_HEAL                    (FLAG_HIDDEN_ITEMS_START + 0x49)
#define FLAG_HIDDEN_ITEM_ROUTE_121_MAX_REVIVE                   (FLAG_HIDDEN_ITEMS_START + 0x64)
#define FLAG_HIDDEN_ITEM_ROUTE_123_SUPER_REPEL                  (FLAG_HIDDEN_ITEMS_START + 0x07)
#define FLAG_HIDDEN_ITEM_ROUTE_123_REVIVE                       (FLAG_HIDDEN_ITEMS_START + 0x29)
#define FLAG_HIDDEN_ITEM_ROUTE_123_HYPER_POTION                 (FLAG_HIDDEN_ITEMS_START + 0x4A)
#define FLAG_HIDDEN_ITEM_ROUTE_123_PP_UP                        (FLAG_HIDDEN_ITEMS_START + 0x63)
#define FLAG_HIDDEN_ITEM_ROUTE_123_RARE_CANDY                   (FLAG_HIDDEN_ITEMS_START + 0x6E)
#define FLAG_HIDDEN_ITEM_ROUTE_128_HEART_SCALE_1                (FLAG_HIDDEN_ITEMS_START + 0x5C)
#define FLAG_HIDDEN_ITEM_ROUTE_128_HEART_SCALE_2                (FLAG_HIDDEN_ITEMS_START + 0x5D)
#define FLAG_HIDDEN_ITEM_ROUTE_128_HEART_SCALE_3                (FLAG_HIDDEN_ITEMS_START + 0x5E)

#define FLAG_UNUSED_0x264  0x264 // Unused Flag
#define FLAG_UNUSED_0x265  0x265 // Unused Flag
#define FLAG_UNUSED_0x266  0x266 // Unused Flag
#define FLAG_UNUSED_0x267  0x267 // Unused Flag
#define FLAG_UNUSED_0x268  0x268 // Unused Flag
#define FLAG_UNUSED_0x269  0x269 // Unused Flag
#define FLAG_UNUSED_0x26A  0x26A // Unused Flag
#define FLAG_UNUSED_0x26B  0x26B // Unused Flag
#define FLAG_UNUSED_0x26C  0x26C // Unused Flag
#define FLAG_UNUSED_0x26D  0x26D // Unused Flag
#define FLAG_UNUSED_0x26E  0x26E // Unused Flag
#define FLAG_UNUSED_0x26F  0x26F // Unused Flag
#define FLAG_UNUSED_0x270  0x270 // Unused Flag
#define FLAG_UNUSED_0x271  0x271 // Unused Flag
#define FLAG_UNUSED_0x272  0x272 // Unused Flag
#define FLAG_UNUSED_0x273  0x273 // Unused Flag
#define FLAG_UNUSED_0x274  0x274 // Unused Flag
#define FLAG_UNUSED_0x275  0x275 // Unused Flag
#define FLAG_UNUSED_0x276  0x276 // Unused Flag
#define FLAG_UNUSED_0x277  0x277 // Unused Flag
#define FLAG_UNUSED_0x278  0x278 // Unused Flag
#define FLAG_UNUSED_0x279  0x279 // Unused Flag
#define FLAG_UNUSED_0x27A  0x27A // Unused Flag
#define FLAG_UNUSED_0x27B  0x27B // Unused Flag
#define FLAG_UNUSED_0x27C  0x27C // Unused Flag
#define FLAG_UNUSED_0x27D  0x27D // Unused Flag
#define FLAG_UNUSED_0x27E  0x27E // Unused Flag
#define FLAG_UNUSED_0x27F  0x27F // Unused Flag
#define FLAG_UNUSED_0x280  0x280 // Unused Flag
#define FLAG_UNUSED_0x281  0x281 // Unused Flag
#define FLAG_UNUSED_0x282  0x282 // Unused Flag
#define FLAG_UNUSED_0x283  0x283 // Unused Flag
#define FLAG_UNUSED_0x284  0x284 // Unused Flag
#define FLAG_UNUSED_0x285  0x285 // Unused Flag
#define FLAG_UNUSED_0x286  0x286 // Unused Flag
#define FLAG_UNUSED_0x287  0x287 // Unused Flag
#define FLAG_UNUSED_0x288  0x288 // Unused Flag
#define FLAG_UNUSED_0x289  0x289 // Unused Flag
#define FLAG_UNUSED_0x28A  0x28A // Unused Flag
#define FLAG_UNUSED_0x28B  0x28B // Unused Flag
#define FLAG_UNUSED_0x28C  0x28C // Unused Flag
#define FLAG_UNUSED_0x28D  0x28D // Unused Flag
#define FLAG_UNUSED_0x28E  0x28E // Unused Flag
#define FLAG_UNUSED_0x28F  0x28F // Unused Flag
#define FLAG_UNUSED_0x290  0x290 // Unused Flag
#define FLAG_UNUSED_0x291  0x291 // Unused Flag
#define FLAG_UNUSED_0x292  0x292 // Unused Flag
#define FLAG_UNUSED_0x293  0x293 // Unused Flag
#define FLAG_UNUSED_0x294  0x294 // Unused Flag
#define FLAG_UNUSED_0x295  0x295 // Unused Flag
#define FLAG_UNUSED_0x296  0x296 // Unused Flag
#define FLAG_UNUSED_0x297  0x297 // Unused Flag
#define FLAG_UNUSED_0x298  0x298 // Unused Flag
#define FLAG_UNUSED_0x299  0x299 // Unused Flag
#define FLAG_UNUSED_0x29A  0x29A // Unused Flag
#define FLAG_UNUSED_0x29B  0x29B // Unused Flag
#define FLAG_UNUSED_0x29C  0x29C // Unused Flag
#define FLAG_UNUSED_0x29D  0x29D // Unused Flag
#define FLAG_UNUSED_0x29E  0x29E // Unused Flag
#define FLAG_UNUSED_0x29F  0x29F // Unused Flag
#define FLAG_UNUSED_0x2A0  0x2A0 // Unused Flag
#define FLAG_UNUSED_0x2A1  0x2A1 // Unused Flag
#define FLAG_UNUSED_0x2A2  0x2A2 // Unused Flag
#define FLAG_UNUSED_0x2A3  0x2A3 // Unused Flag
#define FLAG_UNUSED_0x2A4  0x2A4 // Unused Flag
#define FLAG_UNUSED_0x2A5  0x2A5 // Unused Flag
#define FLAG_UNUSED_0x2A6  0x2A6 // Unused Flag
#define FLAG_UNUSED_0x2A7  0x2A7 // Unused Flag
#define FLAG_UNUSED_0x2A8  0x2A8 // Unused Flag
#define FLAG_UNUSED_0x2A9  0x2A9 // Unused Flag
#define FLAG_UNUSED_0x2AA  0x2AA // Unused Flag
#define FLAG_UNUSED_0x2AB  0x2AB // Unused Flag
#define FLAG_UNUSED_0x2AC  0x2AC // Unused Flag
#define FLAG_UNUSED_0x2AD  0x2AD // Unused Flag
#define FLAG_UNUSED_0x2AE  0x2AE // Unused Flag
#define FLAG_UNUSED_0x2AF  0x2AF // Unused Flag
#define FLAG_UNUSED_0x2B0  0x2B0 // Unused Flag
#define FLAG_UNUSED_0x2B1  0x2B1 // Unused Flag
#define FLAG_UNUSED_0x2B2  0x2B2 // Unused Flag
#define FLAG_UNUSED_0x2B3  0x2B3 // Unused Flag
#define FLAG_UNUSED_0x2B4  0x2B4 // Unused Flag
#define FLAG_UNUSED_0x2B5  0x2B5 // Unused Flag
#define FLAG_UNUSED_0x2B6  0x2B6 // Unused Flag
#define FLAG_UNUSED_0x2B7  0x2B7 // Unused Flag
#define FLAG_UNUSED_0x2B8  0x2B8 // Unused Flag
#define FLAG_BRASS_KEY                                              0x2B9 // Unused Flag
#define FLAG_SINKHOLE_BEHEMOTH_1                                    0x2BA // Unused Flag
#define FLAG_PENGUIN_HUNT_ON_ROUTE                                  0x2BB // Unused Flag

// Event Flags
#define FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG                      0x2BC
#define FLAG_HIDE_APPRENTICE                                        0x2BD
#define FLAG_HIDE_POKEMON_CENTER_2F_MYSTERY_GIFT_MAN                0x2BE
#define FLAG_HIDE_UNION_ROOM_PLAYER_1                               0x2BF
#define FLAG_HIDE_UNION_ROOM_PLAYER_2                               0x2C0
#define FLAG_HIDE_UNION_ROOM_PLAYER_3                               0x2C1
#define FLAG_HIDE_UNION_ROOM_PLAYER_4                               0x2C2
#define FLAG_HIDE_UNION_ROOM_PLAYER_5                               0x2C3
#define FLAG_HIDE_UNION_ROOM_PLAYER_6                               0x2C4
#define FLAG_HIDE_UNION_ROOM_PLAYER_7                               0x2C5
#define FLAG_HIDE_UNION_ROOM_PLAYER_8                               0x2C6
#define FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_1               0x2C7
#define FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_2               0x2C8
#define FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_3               0x2C9
#define FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_4               0x2CA
#define FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_5               0x2CB
#define FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_6               0x2CC
#define FLAG_HIDE_SAFARI_ZONE_SOUTH_CONSTRUCTION_WORKERS            0x2CD
#define FLAG_HIDE_MEW                                               0x2CE
#define FLAG_HIDE_ROUTE_104_RIVAL                                   0x2CF
#define FLAG_HIDE_ROUTE_101_BIRCH_ZIGZAGOON_BATTLE                  0x2D0
#define FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_BIRCH                  0x2D1
#define FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_BEDROOM          0x2D2
#define FLAG_HIDE_ROUTE_103_RIVAL                                   0x2D3
#define FLAG_HIDE_PETALBURG_WOODS_DEVON_EMPLOYEE                    0x2D4
#define FLAG_HIDE_PETALBURG_WOODS_AQUA_GRUNT                        0x2D5
#define FLAG_HIDE_PETALBURG_CITY_WALLY                              0x2D6
#define FLAG_HIDE_MOSSDEEP_CITY_STEVENS_HOUSE_INVISIBLE_NINJA_BOY   0x2D7
#define FLAG_HIDE_PETALBURG_CITY_WALLYS_MOM                         0x2D8

#define FLAG_UNUSED_0x2D9                                           0x2D9 // Unused Flag

#define FLAG_HIDE_LILYCOVE_FAN_CLUB_INTERVIEWER                     0x2DA
#define FLAG_HIDE_RUSTBORO_CITY_AQUA_GRUNT                          0x2DB
#define FLAG_HIDE_RUSTBORO_CITY_DEVON_EMPLOYEE_1                    0x2DC
#define FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_KYOGRE_ASLEEP              0x2DD
#define FLAG_HIDE_PLAYERS_HOUSE_DAD                                 0x2DE
#define FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_SIBLING      0x2DF
#define FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_SIBLING          0x2E0
#define FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_MAGMA_NOTE             0x2E1
#define FLAG_HIDE_ROUTE_104_MR_BRINEY                               0x2E2
#define FLAG_HIDE_BRINEYS_HOUSE_MR_BRINEY                           0x2E3
#define FLAG_HIDE_MR_BRINEY_DEWFORD_TOWN                            0x2E4
#define FLAG_HIDE_ROUTE_109_MR_BRINEY                               0x2E5
#define FLAG_HIDE_ROUTE_104_MR_BRINEY_BOAT                          0x2E6
#define FLAG_HIDE_MR_BRINEY_BOAT_DEWFORD_TOWN                       0x2E7
#define FLAG_HIDE_ROUTE_109_MR_BRINEY_BOAT                          0x2E8
#define FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_BRENDAN            0x2E9
#define FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_MAY                    0x2EA
#define FLAG_HIDE_SAFARI_ZONE_SOUTH_EAST_EXPANSION                  0x2EB
#define FLAG_HIDE_LILYCOVE_HARBOR_EVENT_TICKET_TAKER                0x2EC
#define FLAG_HIDE_SLATEPORT_CITY_SCOTT                              0x2ED
#define FLAG_HIDE_ROUTE_101_ZIGZAGOON                               0x2EE
#define FLAG_HIDE_VICTORY_ROAD_EXIT_WALLY                           0x2EF
#define FLAG_HIDE_LITTLEROOT_TOWN_MOM_OUTSIDE                       0x2F0
#define FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_1F_STEVEN              0x2F1
#define FLAG_HIDE_LITTLEROOT_TOWN_PLAYERS_HOUSE_VIGOROTH_1          0x2F2
#define FLAG_HIDE_LITTLEROOT_TOWN_PLAYERS_HOUSE_VIGOROTH_2          0x2F3
#define FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_1F_TEAM_MAGMA          0x2F4
#define FLAG_HIDE_LITTLEROOT_TOWN_PLAYERS_BEDROOM_MOM               0x2F5
#define FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_MOM                0x2F6
#define FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_MOM                    0x2F7
#define FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_BEDROOM      0x2F8
#define FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_TRUCK              0x2F9
#define FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_TRUCK                  0x2FA
#define FLAG_HIDE_DEOXYS                                            0x2FB
#define FLAG_HIDE_BIRTH_ISLAND_DEOXYS_TRIANGLE                      0x2FC
#define FLAG_HIDE_MAUVILLE_CITY_SCOTT                               0x2FD
#define FLAG_HIDE_VERDANTURF_TOWN_SCOTT                             0x2FE
#define FLAG_HIDE_FALLARBOR_TOWN_BATTLE_TENT_SCOTT                  0x2FF
#define FLAG_HIDE_ROUTE_111_VICTOR_WINSTRATE                        0x300
#define FLAG_HIDE_ROUTE_111_VICTORIA_WINSTRATE                      0x301
#define FLAG_HIDE_ROUTE_111_VIVI_WINSTRATE                          0x302
#define FLAG_HIDE_ROUTE_111_VICKY_WINSTRATE                         0x303
#define FLAG_HIDE_PETALBURG_GYM_NORMAN                              0x304
#define FLAG_HIDE_SKY_PILLAR_TOP_RAYQUAZA                           0x305
#define FLAG_HIDE_LILYCOVE_CONTEST_HALL_CONTEST_ATTENDANT_1         0x306
#define FLAG_HIDE_LILYCOVE_MUSEUM_CURATOR                           0x307
#define FLAG_HIDE_LILYCOVE_MUSEUM_PATRON_1                          0x308
#define FLAG_HIDE_LILYCOVE_MUSEUM_PATRON_2                          0x309
#define FLAG_HIDE_LILYCOVE_MUSEUM_PATRON_3                          0x30A
#define FLAG_HIDE_LILYCOVE_MUSEUM_PATRON_4                          0x30B
#define FLAG_HIDE_LILYCOVE_MUSEUM_TOURISTS                          0x30C
#define FLAG_HIDE_PETALBURG_GYM_GREETER                             0x30D
#define FLAG_HIDE_MARINE_CAVE_KYOGRE                                0x30E
#define FLAG_HIDE_TERRA_CAVE_GROUDON                                0x30F
#define FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_MOM          0x310
#define FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_MOM              0x311
#define FLAG_HIDE_ROUTE_119_SCOTT                                   0x312
#define FLAG_HIDE_LILYCOVE_MOTEL_SCOTT                              0x313
#define FLAG_HIDE_MOSSDEEP_CITY_SCOTT                               0x314
#define FLAG_HIDE_FANCLUB_OLD_LADY                                  0x315
#define FLAG_HIDE_FANCLUB_BOY                                       0x316
#define FLAG_HIDE_FANCLUB_LITTLE_BOY                                0x317
#define FLAG_HIDE_FANCLUB_LADY                                      0x318
#define FLAG_HIDE_EVER_GRANDE_POKEMON_CENTER_1F_SCOTT               0x319
#define FLAG_HIDE_LITTLEROOT_TOWN_RIVAL                             0x31A
#define FLAG_HIDE_LITTLEROOT_TOWN_BIRCH                             0x31B
#define FLAG_HIDE_ROUTE_111_GABBY_AND_TY_1                          0x31C
#define FLAG_HIDE_ROUTE_118_GABBY_AND_TY_1                          0x31D
#define FLAG_HIDE_ROUTE_120_GABBY_AND_TY_1                          0x31E
#define FLAG_HIDE_ROUTE_111_GABBY_AND_TY_3                          0x31F
#define FLAG_HIDE_LUGIA                                             0x320
#define FLAG_HIDE_HO_OH                                             0x321
#define FLAG_HIDE_LILYCOVE_CONTEST_HALL_REPORTER                    0x322
#define FLAG_HIDE_SLATEPORT_CITY_CONTEST_REPORTER                   0x323
#define FLAG_HIDE_MAUVILLE_CITY_WALLY                               0x324
#define FLAG_HIDE_MAUVILLE_CITY_WALLYS_UNCLE                        0x325
#define FLAG_HIDE_VERDANTURF_TOWN_WANDAS_HOUSE_WALLY                0x326
#define FLAG_HIDE_RUSTURF_TUNNEL_WANDAS_BOYFRIEND                   0x327
#define FLAG_HIDE_VERDANTURF_TOWN_WANDAS_HOUSE_WANDAS_BOYFRIEND     0x328
#define FLAG_HIDE_VERDANTURF_TOWN_WANDAS_HOUSE_WALLYS_UNCLE         0x329
#define FLAG_HIDE_SS_TIDAL_CORRIDOR_SCOTT                           0x32A
#define FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_POKEBALL_CYNDAQUIL     0x32B
#define FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_POKEBALL_TOTODILE      0x32C
#define FLAG_HIDE_ROUTE_116_DROPPED_GLASSES_MAN                     0x32D
#define FLAG_HIDE_RUSTBORO_CITY_RIVAL                               0x32E
#define FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F_SWABLU_DOLL     0x32F
#define FLAG_HIDE_SOOTOPOLIS_CITY_WALLACE                           0x330
#define FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F_POKE_BALL       0x331
#define FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_2F_POKE_BALL           0x332
#define FLAG_HIDE_ROUTE_112_TEAM_MAGMA                              0x333
#define FLAG_HIDE_CAVE_OF_ORIGIN_B1F_WALLACE                        0x334
#define FLAG_HIDE_AQUA_HIDEOUT_1F_GRUNT_1_BLOCKING_ENTRANCE         0x335
#define FLAG_HIDE_AQUA_HIDEOUT_1F_GRUNT_2_BLOCKING_ENTRANCE         0x336
#define FLAG_HIDE_MOSSDEEP_CITY_TEAM_MAGMA                          0x337
#define FLAG_HIDE_PETALBURG_GYM_WALLYS_DAD                          0x338
#define FLAG_HIDE_LEGEND_MON_CAVE_OF_ORIGIN                         0x339 // Unused, leftover from R/S
#define FLAG_HIDE_SOOTOPOLIS_CITY_ARCHIE                            0x33A
#define FLAG_HIDE_SOOTOPOLIS_CITY_MAXIE                             0x33B
#define FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_ARCHIE                     0x33C
#define FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_MAXIE                      0x33D
#define FLAG_HIDE_PETALBURG_CITY_WALLYS_DAD                         0x33E
#define FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_MAGMA_GRUNTS               0x33F
#define FLAG_HIDE_LILYCOVE_CONTEST_HALL_BLEND_MASTER                0x340
#define FLAG_HIDE_GRANITE_CAVE_STEVEN                               0x341
#define FLAG_HIDE_ROUTE_128_STEVEN                                  0x342
#define FLAG_HIDE_SLATEPORT_CITY_GABBY_AND_TY                       0x343
#define FLAG_HIDE_BATTLE_FRONTIER_RECEPTION_GATE_SCOTT              0x344
#define FLAG_HIDE_ROUTE_110_BIRCH                                   0x345
#define FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_POKEBALL_CHIKORITA     0x346
#define FLAG_HIDE_SOOTOPOLIS_CITY_MAN_1                             0x347
#define FLAG_HIDE_SLATEPORT_CITY_CAPTAIN_STERN                      0x348
#define FLAG_HIDE_SLATEPORT_CITY_HARBOR_CAPTAIN_STERN               0x349
#define FLAG_HIDE_BATTLE_FRONTIER_SUDOWOODO                         0x34A
#define FLAG_HIDE_ROUTE_111_ROCK_SMASH_TIP_GUY                      0x34B
#define FLAG_HIDE_RUSTBORO_CITY_SCIENTIST                           0x34C
#define FLAG_HIDE_SLATEPORT_CITY_HARBOR_AQUA_GRUNT                  0x34D
#define FLAG_HIDE_SLATEPORT_CITY_HARBOR_ARCHIE                      0x34E
#define FLAG_HIDE_JAGGED_PASS_MAGMA_GUARD                           0x34F
#define FLAG_HIDE_SLATEPORT_CITY_HARBOR_SUBMARINE_SHADOW            0x350
#define FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_2F_PICHU_DOLL          0x351
#define FLAG_HIDE_MAGMA_HIDEOUT_4F_GROUDON_ASLEEP                   0x352
#define FLAG_HIDE_ROUTE_119_RIVAL                                   0x353
#define FLAG_HIDE_LILYCOVE_CITY_AQUA_GRUNTS                         0x354
#define FLAG_HIDE_MAGMA_HIDEOUT_4F_GROUDON                          0x355
#define FLAG_HIDE_SOOTOPOLIS_CITY_RESIDENTS                         0x356
#define FLAG_HIDE_SKY_PILLAR_WALLACE                                0x357
#define FLAG_HIDE_MT_PYRE_SUMMIT_MAXIE                              0x358
#define FLAG_HIDE_MAGMA_HIDEOUT_GRUNTS                              0x359
#define FLAG_HIDE_VICTORY_ROAD_ENTRANCE_WALLY                       0x35A
#define FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_KYOGRE                     0x35B
#define FLAG_HIDE_SLATEPORT_CITY_HARBOR_SS_TIDAL                    0x35C
#define FLAG_HIDE_LILYCOVE_HARBOR_SSTIDAL                           0x35D
#define FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_2F_TEAM_MAGMA          0x35E
#define FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_2F_STEVEN              0x35F
#define FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_ALT_1           0x360
#define FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_ALT_2           0x361
#define FLAG_HIDE_PETALBURG_GYM_WALLY                               0x362
#define FLAG_UNKNOWN_0x363                                          0x363 // Set, however has no purpose.
#define FLAG_HIDE_LITTLEROOT_TOWN_FAT_MAN                           0x364
#define FLAG_HIDE_SLATEPORT_CITY_STERNS_SHIPYARD_MR_BRINEY          0x365
#define FLAG_HIDE_LANETTES_HOUSE_LANETTE                            0x366
#define FLAG_HIDE_FALLORBOR_POKEMON_CENTER_LANETTE                  0x367
#define FLAG_HIDE_TRICK_HOUSE_ENTRANCE_MAN                          0x368
#define FLAG_HIDE_LILYCOVE_CONTEST_HALL_BLEND_MASTER_REPLACEMENT    0x369
#define FLAG_HIDE_DESERT_UNDERPASS_FOSSIL                           0x36A
#define FLAG_HIDE_ROUTE_111_PLAYER_DESCENT                          0x36B
#define FLAG_HIDE_ROUTE_111_DESERT_FOSSIL                           0x36C
#define FLAG_HIDE_MT_CHIMNEY_TRAINERS                               0x36D
#define FLAG_HIDE_RUSTURF_TUNNEL_AQUA_GRUNT                         0x36E
#define FLAG_HIDE_RUSTURF_TUNNEL_BRINEY                             0x36F
#define FLAG_HIDE_RUSTURF_TUNNEL_PEEKO                              0x370
#define FLAG_HIDE_BRINEYS_HOUSE_PEEKO                               0x371
#define FLAG_HIDE_SLATEPORT_CITY_TEAM_AQUA                          0x372
#define FLAG_HIDE_SLATEPORT_CITY_OCEANIC_MUSEUM_AQUA_GRUNTS         0x373
#define FLAG_HIDE_SLATEPORT_CITY_OCEANIC_MUSEUM_2F_AQUA_GRUNT_1     0x374
#define FLAG_HIDE_SLATEPORT_CITY_OCEANIC_MUSEUM_2F_AQUA_GRUNT_2     0x375
#define FLAG_HIDE_SLATEPORT_CITY_OCEANIC_MUSEUM_2F_ARCHIE           0x376
#define FLAG_HIDE_SLATEPORT_CITY_OCEANIC_MUSEUM_2F_CAPTAIN_STERN    0x377
#define FLAG_HIDE_BATTLE_TOWER_OPPONENT                             0x378
#define FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_RIVAL                  0x379
#define FLAG_HIDE_ROUTE_119_TEAM_AQUA                               0x37A
#define FLAG_HIDE_ROUTE_116_MR_BRINEY                               0x37B
#define FLAG_HIDE_WEATHER_INSTITUTE_1F_WORKERS                      0x37C
#define FLAG_HIDE_WEATHER_INSTITUTE_2F_WORKERS                      0x37D
#define FLAG_HIDE_ROUTE_116_WANDAS_BOYFRIEND                        0x37E
#define FLAG_HIDE_LILYCOVE_CONTEST_HALL_CONTEST_ATTENDANT_2         0x37F
#define FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_UNKNOWN_0x380          0x380
#define FLAG_HIDE_ROUTE_101_BIRCH                                   0x381
#define FLAG_HIDE_ROUTE_103_BIRCH                                   0x382
#define FLAG_HIDE_TRICK_HOUSE_END_MAN                               0x383
#define FLAG_HIDE_ROUTE_110_TEAM_AQUA                               0x384
#define FLAG_HIDE_ROUTE_118_GABBY_AND_TY_2                          0x385
#define FLAG_HIDE_ROUTE_120_GABBY_AND_TY_2                          0x386
#define FLAG_HIDE_ROUTE_111_GABBY_AND_TY_2                          0x387
#define FLAG_HIDE_ROUTE_118_GABBY_AND_TY_3                          0x388
#define FLAG_HIDE_SLATEPORT_CITY_HARBOR_PATRONS                     0x389
#define FLAG_HIDE_ROUTE_104_WHITE_HERB_FLORIST                      0x38A
#define FLAG_HIDE_FALLARBOR_AZURILL                                 0x38B
#define FLAG_HIDE_LILYCOVE_HARBOR_FERRY_ATTENDANT                   0x38C
#define FLAG_HIDE_LILYCOVE_HARBOR_FERRY_SAILOR                      0x38D
#define FLAG_HIDE_SOUTHERN_ISLAND_EON_STONE                         0x38E
#define FLAG_HIDE_SOUTHERN_ISLAND_UNCHOSEN_EON_DUO_MON              0x38F
#define FLAG_HIDE_MAUVILLE_CITY_WATTSON                             0x390
#define FLAG_HIDE_MAUVILLE_GYM_WATTSON                              0x391
#define FLAG_HIDE_ROUTE_121_TEAM_AQUA_GRUNTS                        0x392
#define FLAG_UNKNOWN_0x393                                          0x393 // Set, however has no purpose.
#define FLAG_HIDE_MT_PYRE_SUMMIT_ARCHIE                             0x394
#define FLAG_HIDE_MT_PYRE_SUMMIT_TEAM_AQUA                          0x395
#define FLAG_HIDE_BATTLE_TOWER_REPORTER                             0x396
#define FLAG_HIDE_ROUTE_110_RIVAL                                   0x397
#define FLAG_HIDE_CHAMPIONS_ROOM_RIVAL                              0x398
#define FLAG_HIDE_CHAMPIONS_ROOM_BIRCH                              0x399
#define FLAG_HIDE_ROUTE_110_RIVAL_ON_BIKE                           0x39A
#define FLAG_HIDE_ROUTE_119_RIVAL_ON_BIKE                           0x39B
#define FLAG_HIDE_AQUA_HIDEOUT_GRUNTS                               0x39C
#define FLAG_HIDE_LILYCOVE_MOTEL_GAME_DESIGNERS                     0x39D
#define FLAG_HIDE_MT_CHIMNEY_TEAM_AQUA                              0x39E
#define FLAG_HIDE_MT_CHIMNEY_TEAM_MAGMA                             0x39F
#define FLAG_HIDE_FALLARBOR_HOUSE_PROF_COZMO                        0x3A0
#define FLAG_HIDE_LAVARIDGE_TOWN_RIVAL                              0x3A1
#define FLAG_HIDE_LAVARIDGE_TOWN_RIVAL_ON_BIKE                      0x3A2
#define FLAG_HIDE_RUSTURF_TUNNEL_ROCK_1                             0x3A3
#define FLAG_HIDE_RUSTURF_TUNNEL_ROCK_2                             0x3A4
#define FLAG_HIDE_FORTREE_CITY_HOUSE_4_WINGULL                      0x3A5
#define FLAG_HIDE_MOSSDEEP_CITY_HOUSE_2_WINGULL                     0x3A6
#define FLAG_HIDE_REGIROCK                                          0x3A7
#define FLAG_HIDE_REGICE                                            0x3A8
#define FLAG_HIDE_REGISTEEL                                         0x3A9
#define FLAG_HIDE_METEOR_FALLS_TEAM_AQUA                            0x3AA
#define FLAG_HIDE_METEOR_FALLS_TEAM_MAGMA                           0x3AB
#define FLAG_HIDE_DEWFORD_HALL_SLUDGE_BOMB_MAN                      0x3AC
#define FLAG_HIDE_SEAFLOOR_CAVERN_ENTRANCE_AQUA_GRUNT               0x3AD
#define FLAG_HIDE_METEOR_FALLS_1F_1R_COZMO                          0x3AE
#define FLAG_HIDE_AQUA_HIDEOUT_B2F_SUBMARINE_SHADOW                 0x3AF
#define FLAG_HIDE_ROUTE_128_ARCHIE                                  0x3B0
#define FLAG_HIDE_ROUTE_128_MAXIE                                   0x3B1
#define FLAG_HIDE_SEAFLOOR_CAVERN_AQUA_GRUNTS                       0x3B2
#define FLAG_HIDE_ROUTE_116_DEVON_EMPLOYEE                          0x3B3
#define FLAG_HIDE_SLATEPORT_CITY_TM_SALESMAN                        0x3B4
#define FLAG_HIDE_RUSTBORO_CITY_DEVON_CORP_3F_EMPLOYEE              0x3B5
#define FLAG_HIDE_SS_TIDAL_CORRIDOR_MR_BRINEY                       0x3B6
#define FLAG_HIDE_SS_TIDAL_ROOMS_SNATCH_GIVER                       0x3B7
#define FLAG_RECEIVED_SHOAL_SALT_1                                  0x3B8
#define FLAG_RECEIVED_SHOAL_SALT_2                                  0x3B9
#define FLAG_RECEIVED_SHOAL_SALT_3                                  0x3BA
#define FLAG_RECEIVED_SHOAL_SALT_4                                  0x3BB
#define FLAG_RECEIVED_SHOAL_SHELL_1                                 0x3BC
#define FLAG_RECEIVED_SHOAL_SHELL_2                                 0x3BD
#define FLAG_RECEIVED_SHOAL_SHELL_3                                 0x3BE
#define FLAG_RECEIVED_SHOAL_SHELL_4                                 0x3BF
#define FLAG_HIDE_ROUTE_111_SECRET_POWER_MAN                        0x3C0
#define FLAG_HIDE_SLATEPORT_MUSEUM_POPULATION                       0x3C1
#define FLAG_HIDE_LILYCOVE_DEPARTMENT_STORE_ROOFTOP_SALE_WOMAN      0x3C2
#define FLAG_HIDE_MIRAGE_TOWER_ROOT_FOSSIL                          0x3C3
#define FLAG_HIDE_MIRAGE_TOWER_CLAW_FOSSIL                          0x3C4
#define FLAG_HIDE_SLATEPORT_CITY_OCEANIC_MUSEUM_FAMILIAR_AQUA_GRUNT 0x3C5
#define FLAG_HIDE_ROUTE_118_STEVEN                                  0x3C6
#define FLAG_HIDE_MOSSDEEP_CITY_STEVENS_HOUSE_STEVEN                0x3C7
#define FLAG_HIDE_MOSSDEEP_CITY_STEVENS_HOUSE_BELDUM_POKEBALL       0x3C8
#define FLAG_HIDE_FORTREE_CITY_KECLEON                              0x3C9
#define FLAG_HIDE_ROUTE_120_KECLEON_BRIDGE                          0x3CA
#define FLAG_HIDE_LILYCOVE_CITY_RIVAL                               0x3CB
#define FLAG_HIDE_ROUTE_120_STEVEN                                  0x3CC
#define FLAG_HIDE_SOOTOPOLIS_CITY_STEVEN                            0x3CD
#define FLAG_HIDE_NEW_MAUVILLE_VOLTORB_1                            0x3CE
#define FLAG_HIDE_NEW_MAUVILLE_VOLTORB_2                            0x3CF
#define FLAG_HIDE_NEW_MAUVILLE_VOLTORB_3                            0x3D0
#define FLAG_HIDE_AQUA_HIDEOUT_B1F_ELECTRODE_1                      0x3D1
#define FLAG_HIDE_AQUA_HIDEOUT_B1F_ELECTRODE_2                      0x3D2
#define FLAG_HIDE_OLDALE_TOWN_RIVAL                                 0x3D3
#define FLAG_HIDE_UNDERWATER_SEA_FLOOR_CAVERN_STOLEN_SUBMARINE      0x3D4
#define FLAG_HIDE_ROUTE_120_KECLEON_BRIDGE_SHADOW                   0x3D5
#define FLAG_HIDE_ROUTE_120_KECLEON_1                               0x3D6
#define FLAG_HIDE_RUSTURF_TUNNEL_WANDA                              0x3D7
#define FLAG_HIDE_VERDANTURF_TOWN_WANDAS_HOUSE_WANDA                0x3D8
#define FLAG_HIDE_ROUTE_120_KECLEON_2                               0x3D9
#define FLAG_HIDE_ROUTE_120_KECLEON_3                               0x3DA
#define FLAG_HIDE_ROUTE_120_KECLEON_4                               0x3DB
#define FLAG_HIDE_ROUTE_120_KECLEON_5                               0x3DC
#define FLAG_HIDE_ROUTE_119_KECLEON_1                               0x3DD
#define FLAG_HIDE_ROUTE_119_KECLEON_2                               0x3DE
#define FLAG_HIDE_ROUTE_101_BOY                                     0x3DF
#define FLAG_HIDE_WEATHER_INSTITUTE_2F_AQUA_GRUNT_M                 0x3E0
#define FLAG_BKF_QUIZ_1                                             0x3E1 //FLAG_HIDE_LILYCOVE_POKEMON_CENTER_CONTEST_LADY_MON
#define FLAG_BKF_QUIZ_2                                             0x3E2 //FLAG_HIDE_MT_CHIMNEY_LAVA_COOKIE_LADY
#define FLAG_BKF_QUIZ_3                                             0x3E3 //FLAG_HIDE_PETALBURG_CITY_SCOTT
#define FLAG_BKF_QUIZ_4                                             0x3E4 //FLAG_HIDE_SOOTOPOLIS_CITY_RAYQUAZA
#define FLAG_BKF_QUIZ_5                                             0x3E5 //FLAG_HIDE_SOOTOPOLIS_CITY_KYOGRE
#define FLAG_BKF_QUIZ_6                                             0x3E6 //FLAG_HIDE_SOOTOPOLIS_CITY_GROUDON
#define FLAG_BKF_QUIZ_7                                             0x3E7 //FLAG_HIDE_RUSTBORO_CITY_POKEMON_SCHOOL_SCOTT

// Item Ball Flags
#define FLAG_ITEM_LUMBRIDGE_1                                       0x3E8
#define FLAG_ITEM_LUMBRIDGE_2                                       0x3E9
#define FLAG_ITEM_LUMBRIDGE_3                                       0x3EA
#define FLAG_ITEM_LUMBRIDGE_4                                       0x3EB
#define FLAG_ITEM_LUMBRIDGE_5                                       0x3EC
#define FLAG_ITEM_LUMBRIDGE_6                                       0x3ED
#define FLAG_ITEM_LUMBRIDGE_7                                       0x3EE
#define FLAG_ITEM_MillLaneMill_PURPLE_SWEETS                        0x3EF
#define FLAG_ITEM_MillLaneMill_FLOUR_POT                            0x3F0

#define FLAG_ITEM_REPEATABLE_ITEM_1                                 0x3F1
#define FLAG_ITEM_REPEATABLE_ITEM_2                                 0x3F2
#define FLAG_ITEM_REPEATABLE_ITEM_3                                 0x3F3
#define FLAG_ITEM_REPEATABLE_ITEM_4                                 0x3F4
#define FLAG_ITEM_REPEATABLE_ITEM_5                                 0x3F5
#define FLAG_ITEM_REPEATABLE_ITEM_6                                 0x3F6
#define FLAG_ITEM_REPEATABLE_ITEM_7                                 0x3F7
#define FLAG_ITEM_REPEATABLE_ITEM_8                                 0x3F8
#define FLAG_ITEM_REPEATABLE_ITEM_9                                 0x3F9
#define FLAG_ITEM_REPEATABLE_ITEM_10                                0x3FA

//POKESCAPE ITEMS
#define FLAG_ITEM_LUMBRIDGE_BREAD_1                                 0x3FB
#define FLAG_ITEM_LUMBRIDGE_STEEL_POUCH                             0x3FC
#define FLAG_ITEM_LUMBRIDGE_DRUNK_DRAGON                            0x3FD
#define FLAG_ITEM_LUMBRIDGE_BREAD_2                                 0x3FE
#define FLAG_ITEM_ROUTE1_BALL_OF_WOOL                               0x3FF
#define FLAG_ITEM_LUMBRIDGE_CAKE                                    0x400
#define FLAG_ITEM_ROUTE1_WATER_RUNE                                 0x401
#define FLAG_ITEM_ROUTE1_BREAD                                      0x402
#define FLAG_ITEM_ROUTE1_CHOCOLATE_SUNDAY                           0x403
#define FLAG_ITEM_MILLLANEMILL_TM05                                 0x404
#define FLAG_ITEM_MILLLANEMILL_MITHRIL_POUCH                        0x405
#define FLAG_ITEM_DRAYNORMANOR_CAKE                                 0x406
#define FLAG_ITEM_DRAYNORMANOR_CABBAGE                              0x407
#define FLAG_ITEM_DRAYNOR_DEFENCE_POTION                            0x408
#define FLAG_ITEM_DRAYNORSEWERS_TM50                                0x409 // Unused Flag, leftover from R/S. In Emerald this is a hidden item and uses a different flag
#define FLAG_ITEM_DRAYNORSEWERS_BEER                                0x40A
#define FLAG_ITEM_ROUTE2_MAGIC_POTION                               0x40B
#define FLAG_ITEM_ROUTE2_RUNE_POUCH                                 0x40C
#define FLAG_ITEM_WIZARDSTOWER_WIZARDS_HAT                          0x40D
#define FLAG_ITEM_WIZARDSTOWER_AIR_RUNE                             0x40E
#define FLAG_ITEM_WIZARDSTOWER_WATER_RUNE                           0x40F
#define FLAG_ITEM_WIZARDSTOWER_EARTH_RUNE                           0x410
#define FLAG_ITEM_WIZARDSTOWER_FIRE_RUNE                            0x411
#define FLAG_ITEM_ROUTE12_BREAD                                     0x412
#define FLAG_ITEM_ROUTE12_WIZARDS_BLIZZARD                          0x413
#define FLAG_ITEM_ROUTE12_CABBAGE                                   0x414
#define FLAG_ITEM_ROUTE12_ATTACK_POTION                             0x415
#define FLAG_ITEM_DRAYNORMANOR_FISHFOOD                             0x416
#define FLAG_ITEM_DRAYNORMANOR_OILCAN                               0x417
#define FLAG_ITEM_DRAYNORMANOR_RUBBERTUBE                           0x418
#define FLAG_ITEM_ROUTE12_EGG                                       0x419
#define FLAG_ITEM_ROUTE12_PRAYER_POTION                             0x41A
#define FLAG_ITEM_DRAYNORMANOR_TM55_HEX                             0x41B
#define FLAG_ITEM_ROUTE1_CHOC_SUNDAY                                0x41C
#define FLAG_ITEM_ROUTE10_TM38                                      0x41D
#define FLAG_ITEM_ROUTE10_PINEAPPLE_PUNCH                           0x41E
#define FLAG_ITEM_ROUTE3_CORN                                       0x41F
#define FLAG_ITEM_WIZARDSTOWER_AIR_RUNE_2                           0x420
#define FLAG_ITEM_ROUTE4_FLAX                                       0x421
#define FLAG_ITEM_PORTSARIM_BLUEBERRY_SPECIAL                       0x422
#define FLAG_ITEM_PORTSARIM_ITEM_FRUIT_BLAST                        0x423
#define FLAG_ITEM_PORTSARIM_ITEM_SPIRIT_SHARD                       0x424
#define FLAG_ITEM_ROUTE9_TM54_MUD_BOMB                              0x425
#define FLAG_ITEM_ROUTE9_EARTH_RUNE                                 0x426
#define FLAG_ITEM_ROUTE9_CABBAGE                                    0x427
#define FLAG_ITEM_ROUTE8_ITEM_POUCH_MITHRIL                         0x428
#define FLAG_ITEM_ROUTE8_ITEM_FLAX                                  0x429
#define FLAG_ITEM_ROUTE8_ITEM_PRAYER_POTION                         0x42A
#define FLAG_ITEM_LUMBRIDGESWAMP_ITEM_SPIRIT_SHARD                  0x42B
#define FLAG_ITEM_LUMBRIDGESWAMPCAVE_ITEM_1                         0x42C
#define FLAG_ITEM_LUMBRIDGESWAMPCAVE_ITEM_2                         0x42D
#define FLAG_ITEM_LUMBRIDGESWAMPCAVE_ITEM_3                         0x42E
#define FLAG_ITEM_LUMBRIDGESWAMPCAVE_ITEM_4                         0x42F
#define FLAG_ITEM_LUMBRIDGESWAMPCAVE_ITEM_5                         0x430
#define FLAG_ITEM_LUMBRIDGESWAMPCAVE_ITEM_6                         0x431
#define FLAG_ITEM_AsgarnianDungeon_1                                0x432
#define FLAG_ITEM_AsgarnianDungeon_2                                0x433
#define FLAG_ITEM_AsgarnianDungeon_3                                0x434
#define FLAG_ITEM_AsgarnianDungeon_4                                0x435
#define FLAG_ITEM_AsgarnianDungeon_5                                0x436
#define FLAG_ITEM_ROUTE11_ITEM_1                                    0x437
#define FLAG_ITEM_ROUTE11_ITEM_2                                    0x438
#define FLAG_ITEM_ROUTE11_ITEM_3                                    0x439
#define FLAG_ITEM_ROUTE11_ITEM_4                                    0x43A
#define FLAG_ITEM_ROUTE11_ITEM_5                                    0x43B
#define FLAG_ITEM_RIMMINGTON_1                                      0x43C
#define FLAG_ITEM_RIMMINGTON_2                                      0x43D
#define FLAG_ITEM_RIMMINGTON_3                                      0x43E
#define FLAG_ITEM_RIMMINGTON_4                                      0x43F
#define FLAG_ITEM_RIMMINGTON_5                                      0x440
#define FLAG_ITEM_DWARVENMINES_1                                    0x441
#define FLAG_ITEM_DWARVENMINES_2                                    0x442
#define FLAG_ITEM_DWARVENMINES_3                                    0x443
#define FLAG_ITEM_FALADORPUB_1                                      0x444
#define FLAG_ITEM_FALADOR_1                                         0x445
#define FLAG_ITEM_FALADOR_2                                         0x446
#define FLAG_ITEM_GOBLIN_VILLAGE_1                                  0x447
#define FLAG_ITEM_GOBLIN_VILLAGE_2                                  0x448
#define FLAG_ITEM_GOBLIN_VILLAGE_3                                  0x449
#define FLAG_ITEM_GOBLIN_VILLAGE_4                                  0x44A
#define FLAG_ITEM_ROUTE24_2                                         0x44B
#define FLAG_ITEM_ROUTE24_3                                         0x44C
#define FLAG_ITEM_ROUTE24_4                                         0x44D
#define FLAG_ITEM_ROUTE24_1                                         0x44E
#define FLAG_ITEM_RimmingtonMines_1                                 0x44F
#define FLAG_ITEM_RimmingtonMines_2                                 0x450
#define FLAG_ITEM_RimmingtonMines_3                                 0x451
#define FLAG_ITEM_LUMBRIDGEFOREST_1                                 0x452
#define FLAG_ITEM_SINKHOLE_1                                        0x453
#define FLAG_ITEM_SINKHOLE_2                                        0x454
#define FLAG_ITEM_SINKHOLE_3                                        0x455
#define FLAG_ITEM_ROUTE16_1                                         0x456
#define FLAG_ITEM_ROUTE16_2                                         0x457
#define FLAG_ITEM_ROUTE17_1                                         0x458
#define FLAG_ITEM_ROUTE15_1                                         0x459
#define FLAG_ITEM_ROUTE15_2                                         0x45A
#define FLAG_ITEM_ROUTE15_3                                         0x45B
#define FLAG_ITEM_ROUTE15_4                                         0x45C
#define FLAG_ITEM_ROUTE13_1                                         0x45D
#define FLAG_ITEM_ROUTE13_2                                         0x45E
#define FLAG_ITEM_ROUTE13_3                                         0x45F
#define FLAG_ITEM_ROUTE14_1                                         0x460
#define FLAG_ITEM_ROUTE29_1                                         0x461
#define FLAG_ITEM_ROUTE29_2                                         0x462
#define FLAG_ITEM_ROUTE28_1                                         0x463
#define FLAG_ITEM_ROUTE28_2                                         0x464
#define FLAG_ITEM_ALKHARID_1                                        0x465 // Unused Flag, leftover from the Ruby Magma hideout
#define FLAG_ITEM_ROUTE33_1                                         0x466 // Unused Flag, leftover from the Ruby Magma hideout
#define FLAG_ITEM_ROUTE19_1                                         0x467 // Unused Flag, leftover from the Ruby Magma hideout
#define FLAG_ITEM_LUMBRIDGEFOREST_2                                 0x468 // Unused Flag
#define FLAG_ITEM_PRISMATIC_STAR                                    0x468 // Unused Flag
#define FLAG_ITEM_LUMBRIDGE_FOREST_CABBAGE                          0x469
#define FLAG_ITEM_MUSA_POINT_1                                      0x46A
#define FLAG_ITEM_ROUTE39_1                                         0x46B
#define FLAG_ITEM_ROUTE39_2                                         0x46C
#define FLAG_ITEM_ROUTE39_3                                         0x46D // Unused Flag, leftover from R/S. HM08 is given to the player directly in Emerald
#define FLAG_ITEM_ROUTE39_4                                         0x46E
#define FLAG_ITEM_KARAMJA_VOLCANO_1                                 0x46F
#define FLAG_ITEM_KARAMJA_VOLCANO_2                                 0x470 // Unused Flag
#define FLAG_ITEM_KARAMJA_VOLCANO_3                                 0x471
#define FLAG_ITEM_LUMBRIDGE_FOREST_3                                0x472 // Unused Flag
#define FLAG_ITEM_EDGEVILLE_1                                       0x473
#define FLAG_CHEAT_ITEM_PULSE_CORE                                  0x474
#define FLAG_ITEM_KOUREND_CATACOMBS_1                               0x475
#define FLAG_ITEM_KOUREND_CATACOMBS_2                               0x476
#define FLAG_ITEM_KOUREND_CATACOMBS_3                               0x477
#define FLAG_ITEM_KOUREND_CATACOMBS_4                               0x478
#define FLAG_ITEM_KOUREND_CATACOMBS_5                               0x479 // Unused Flag
#define FLAG_ITEM_ROUTE_35_MITHRIL_POUCH                            0x47A
#define FLAG_ITEM_ROUTE_35_BREAD                                    0x47B 
#define FLAG_ITEM_ROUTE_35_CABBAGE                                  0x47C 
#define FLAG_ITEM_ROUTE_38_PRAYER_POTION                            0x47D
#define FLAG_ITEM_ROUTE_38_CAKE                                     0x47E
#define FLAG_ITEM_ROUTE_31_PRAYER_POTION                            0x47F
#define FLAG_ITEM_ROUTE_31_SUPER_PRAYER_POTION                      0x480
#define FLAG_ITEM_ROUTE_31_CHOCOLATE_CAKE                           0x481
#define FLAG_ITEM_ROUTE_43_MOONLIGHT_MEAD                           0x482
#define FLAG_ITEM_ROUTE_43_SPEED_LAMP                               0x483
#define FLAG_ITEM_ROUTE_42_EASTER_EGG                               0x484
#define FLAG_ITEM_ROUTE_41_BEER                                     0x485
#define FLAG_ITEM_ROUTE_41_CHOCOLATE_CAKE                           0x486
#define FLAG_ITEM_ROUTE_41_CABBAGE                                  0x487
#define FLAG_ITEM_ROUTE_54_PURPLE_SWEETS                            0x488
#define FLAG_ITEM_ROUTE_50_BREAD                                    0x489
#define FLAG_ITEM_ROUTE_50_DEF_POTION                               0x48A
#define FLAG_ITEM_ROUTE_50_SUPER_TEA                                0x48B
#define FLAG_ITEM_PORTKHAZARD_ATTACK_LAMP                           0x48C
#define FLAG_ITEM_PORTKHAZARD_PURPLE_SWEETS                         0x48D
#define FLAG_ITEM_YANILLE_PRAYER_POTION                             0x48E
#define FLAG_ITEM_GRUMS_HOUSE                                       0x48F
#define FLAG_ITEM_ROUTE_40_BEER                                     0x490
#define FLAG_ITEM_DWARVENMINES_4                                    0x491
#define FLAG_ITEM_ROUTE_18_CAKE                                     0x492
#define FLAG_ITEM_ROUTE_18_BEER                                     0x49B
#define FLAG_ITEM_MELZARS_1F_ROPE                                   0x49C // Unused Flag
#define FLAG_ITEM_MELZARS_2F_RUNE                                   0x49D // Unused Flag
#define FLAG_ITEM_MELZARS_2F_BREAD                                  0x49E // Unused Flag
#define FLAG_ITEM_CRANDOR_SPIRIT_SHARD                              0x49F // Unused Flag
#define FLAG_ITEM_CRANDOR_CHOCOLATE_CAKE                            0x4A0 // Unused Flag
#define FLAG_ITEM_CRANDOR_RUNE_POUCH                                0x4A1 // Unused Flag
#define FLAG_ITEM_DRAYNORMANOR_TEA                                  0x493 // Unused Flag
#define FLAG_ITEM_DRAYNORMANOR_POUCHES                              0x494 // Unused Flag
#define FLAG_ITEM_LUMBRIDGESWAMP_ITEM_3                             0x495 // Unused Flag
#define FLAG_ITEM_AIRALTAR_1                                        0x496 // Unused Flag
#define FLAG_ITEM_ROUTE3_REPEL_TEA                                  0x497 // Unused Flag
#define FLAG_ITEM_BARBARIAN_VILLAGE_1                               0x498 // Unused Flag
#define FLAG_ITEM_BARBARIAN_VILLAGE_2                               0x499 // Unused Flag
#define FLAG_ITEM_BARBARIAN_VILLAGE_3                               0x49A // Unused Flag
#define FLAG_ITEM_VARROCK_POTIONSTORE                               0x49B // Unused Flag
#define FLAG_ITEM_VARROCK_CLOTHESSTORE                              0x49C // Unused Flag
#define FLAG_ITEM_CRANDOR_CABBAGE                                   0x49D // Unused Flag
#define FLAG_LOWES_BONE_CROSSBOW                                    0x49E // Unused Flag
#define FLAG_ITEM_ZMI_DEATH_RUNE                                    0x49F // Unused Flag
#define FLAG_ITEM_BLACK_ARM_MITH_SCIM                               0x4A0 // Unused Flag
#define FLAG_ITEM_MELZARS_3F_PRAYER_POTION                          0x4A1 // Unused Flag
#define FLAG_ITEM_ROUTE0_TINDERBOX                                  0x4A2 // Unused Flag
#define FLAG_ITEM_ROUTE0_SWEETS                                     0x4A3 // Unused Flag
#define FLAG_ITEM_NORTH_VARROCK_1                                   0x4A4 // Unused Flag
#define FLAG_ITEM_BRASS_HOUSE                                       0x4A5 // Unused Flag
#define FLAG_ITEM_LUMBRIDGESWAMP_ITEM_2                             0x4A6 // Unused Flag
#define FLAG_ITEM_FALADOR_CASTLE_1                                  0x4A7 // Unused Flag
#define FLAG_ROUTE26_SUPER_PRAYER_POTION                            0x4A8 // Unused Flag
#define FLAG_ROUTE26_ADAMANT_POUCH                                  0x4A9 // Unused Flag
#define FLAG_EDGEVILLE_INDOOR_1                                     0x4AA // Unused Flag
#define FLAG_EDGEVILLE_INDOOR_2                                     0x4AB // Unused Flag
#define FLAG_ITEM_MUSA_POINT_2                                      0x4AC // Unused Flag
#define FLAG_ITEM_LIGHTHOUSE_1                                      0x4AD // Unused Flag
#define FLAG_ITEM_DWARVENMINES_5                                    0x4AE // Unused Flag
#define FLAG_ITEM_EDGEVILLE_INDOOR_1                                0x4AF // Unused Flag
#define FLAG_ITEM_EDGEVILLE_INDOOR_2                                0x4B0 // Unused Flag
#define FLAG_ITEM_WGS_CAVERN_1                                      0x4B1 // Unused Flag
#define FLAG_ITEM_WGS_CAVERN_2                                      0x4B2 // Unused Flag
#define FLAG_ITEM_VARROCK_SEWERS_1                                  0x4B3 // Unused Flag
#define FLAG_ITEM_VARROCK_SEWERS_2                                  0x4B4 // Unused Flag
#define FLAG_ITEM_VARROCK_SEWERS_3                                  0x4B5 // Unused Flag
#define FLAG_ITEM_VARROCK_SEWERS_4                                  0x4B6 // Unused Flag
#define FLAG_ITEM_VARROCK_SEWERS_5                                  0x4B7 // Unused Flag
#define FLAG_ITEM_VARROCK_SEWERS_6                                  0x4B8 // Unused Flag
#define FLAG_ITEM_VARROCK_SEWERS_7                                  0x4B9 // Unused Flag
#define FLAG_ITEM_VARROCK_SEWERS_8                                  0x4BA // Unused Flag
#define FLAG_ITEM_VARROCK_SEWERS_9                                  0x4BB // Unused Flag
#define FLAG_ITEM_PURO_PURO_1                                       0x4BC // Unused Flag
#define FLAG_ITEM_PURO_PURO_2                                       0x4BD // Unused Flag
#define FLAG_ITEM_PURO_PURO_3                                       0x4BE // Unused Flag
#define FLAG_ITEM_FALADOR_COURTYARD_1                               0x4BF // Unused Flag
#define FLAG_ITEM_ROUTE20                                           0x4C0 // Unused Flag
#define FLAG_ITEM_MAKEOVER_MAGE_ITEM_CAKE                           0x4C1 // Unused Flag
#define FLAG_ITEM_FALADOR_COURTYARD_2                               0x4C2 // Unused Flag
#define FLAG_ITEM_SHANTY_PASS_1                                     0x4C3 // Unused Flag
#define FLAG_ITEM_ROUTE_7                                           0x4C4 // Unused Flag
#define FLAG_ITEM_MUDSKIPPER_SOUND_1                                0x4C5 // Unused Flag
#define FLAG_ITEM_CRANDOR_SEA_ROUTE_1                               0x4C6 // Unused Flag
#define FLAG_ITEM_CRANDOR_SEA_ROUTE_2                               0x4C7 // Unused Flag
#define FLAG_ITEM_WIZARDSTOWER_RUNE_3                               0x4C8 // Unused Flag
#define FLAG_ITEM_LUMBRIDGE_FIRE_RUNE                               0x4C9 // Unused Flag
#define FLAG_ITEM_DRAYNORMANOR_TEA_2                                0x4CA // Unused Flag
#define FLAG_ITEM_KARAMJA_VOLCANO_4                                 0x4CB // Unused Flag
#define FLAG_ITEM_BLACKKNIGHTS_FORTRESS_1                           0x4CC // Unused Flag
#define FLAG_ITEM_BKFORT_1F_ITEM1                                   0x4CD // Unused Flag
#define FLAG_ITEM_BKFORT_1F_ITEM2                                   0x4CE // Unused Flag
#define FLAG_ITEM_BKFORT_1F_ITEM3                                   0x4CF // Unused Flag
#define FLAG_ITEM_BKFORT_2F_ITEM1                                   0x4D0 // Unused Flag
#define FLAG_ITEM_BKFORT_2F_ITEM2                                   0x4D1 // Unused Flag
#define FLAG_ITEM_BKFORT_2F_ITEM3                                   0x4D2 // Unused Flag
#define FLAG_ITEM_BKFORT_2F_ITEM4                                   0x4D3 // Unused Flag
#define FLAG_ITEM_BKFORT_2F_ITEM5                                   0x4D4 // Unused Flag
#define FLAG_ITEM_BKFORT_2F_ITEM6                                   0x4D5 // Unused Flag
#define FLAG_ITEM_BKFORT_2F_ITEM7                                   0x4D6 // Unused Flag
#define FLAG_ITEM_BKFORT_2F_ITEM8                                   0x4D7 // Unused Flag
#define FLAG_ITEM_ROUTE21_ITEM1                                     0x4D8 // Unused Flag
#define FLAG_ITEM_BKFORT_4F_ITEM1                                   0x4D9 // Unused Flag
#define FLAG_ITEM_BKFORT_4F_ITEM2                                   0x4DA // Unused Flag
#define FLAG_ITEM_BKFORT_4F_ITEM3                                   0x4DB // Unused Flag
#define FLAG_ITEM_BKFORT_4F_ITEM4                                   0x4DC // Unused Flag
#define FLAG_ITEM_BKFORT_4F_ITEM5                                   0x4DD // Unused Flag
#define FLAG_ITEM_BKFORT_4F_ITEM6                                   0x4DE // Unused Flag
#define FLAG_ITEM_BKFORT_3F_ITEM1                                   0x4DF // Unused Flag
#define FLAG_ITEM_BKFORT_3F_ITEM2                                   0x4E0 // Unused Flag
#define FLAG_ITEM_BKFORT_3F_ITEM3                                   0x4E1 // Unused Flag
#define FLAG_ITEM_DIGSITE_EARTH_TALISMAN                            0x4E2 // Unused Flag
#define FLAG_ITEM_ALKHARID_FIRE_TALISMAN                            0x4E3 // Unused Flag
#define FLAG_ITEM_DWARVENMINES_BODY_TALISMAN                        0x4E4 // Unused Flag

#define FLAG_UNUSED_0x4E5                                           0x4E5 // Unused Flag
#define FLAG_UNUSED_0x4E6                                           0x4E6 // Unused Flag
#define FLAG_UNUSED_0x4E7                                           0x4E7 // Unused Flag
#define FLAG_UNUSED_0x4E8                                           0x4E8 // Unused Flag
#define FLAG_UNUSED_0x4E9                                           0x4E9 // Unused Flag
#define FLAG_UNUSED_0x4EA                                           0x4EA // Unused Flag
#define FLAG_UNUSED_0x4EB                                           0x4EB // Unused Flag
#define FLAG_SKY_BATTLE                                             0x4EC // Unused Flag
#define FLAG_HIDE_SKY_PILLAR_TOP_RAYQUAZA_STILL                     0x4ED // Unused Flag
#define FLAG_RESCUED_BIRCH                                          0x4EE // Unused Flag
#define FLAG_LEGENDARIES_IN_SOOTOPOLIS                              0x4EF // Unused Flag

#define FLAG_DEFEATED_RUSTBORO_GYM                                  0x4F0
#define FLAG_DEFEATED_DEWFORD_GYM                                   0x4F1
#define FLAG_DEFEATED_MAUVILLE_GYM                                  0x4F2
#define FLAG_DEFEATED_LAVARIDGE_GYM                                 0x4F3
#define FLAG_DEFEATED_PETALBURG_GYM                                 0x4F4
#define FLAG_DEFEATED_FORTREE_GYM                                   0x4F5
#define FLAG_DEFEATED_MOSSDEEP_GYM                                  0x4F6
#define FLAG_DEFEATED_SOOTOPOLIS_GYM                                0x4F7
#define FLAG_DEFEATED_METEOR_FALLS_STEVEN                           0x4F8

#define FLAG_UNUSED_0x4F9                                           0x4F9 // Unused Flag
#define FLAG_UNUSED_0x4FA                                           0x4FA // Unused Flag

#define FLAG_DEFEATED_ELITE_4_SIDNEY                                0x4FB
#define FLAG_DEFEATED_ELITE_4_PHOEBE                                0x4FC
#define FLAG_DEFEATED_ELITE_4_GLACIA                                0x4FD
#define FLAG_DEFEATED_ELITE_4_DRAKE                                 0x4FE

#define FLAG_UNUSED_0x4FF                                           0x4FF // Unused Flag

// Trainer Flags
// Trainer flags occupy 0x500 - 0x85F, the last 9 of which are unused
// See constants/opponents.h. The values there + FLAG_TRAINER_FLAG_START are the flag IDs

#define TRAINER_FLAGS_START                                         0x500
#define TRAINER_FLAGS_END                                           (TRAINER_FLAGS_START + MAX_TRAINERS_COUNT - 1) // 0x85F

// System Flags

#define SYSTEM_FLAGS                                 (TRAINER_FLAGS_END + 1) // 0x860

#define FLAG_SYS_POKEMON_GET                         (SYSTEM_FLAGS + 0x0) // FLAG_0x860
#define FLAG_SYS_POKEDEX_GET                         (SYSTEM_FLAGS + 0x1)
#define FLAG_SYS_POKENAV_GET                         (SYSTEM_FLAGS + 0x2)
#define FLAG_SYS_QUEST_MENU_GET                      (SYSTEM_FLAGS + 0x3) 
#define FLAG_SYS_GAME_CLEAR                          (SYSTEM_FLAGS + 0x4)
#define FLAG_SYS_CHAT_USED                           (SYSTEM_FLAGS + 0x5)
#define FLAG_SYS_HIPSTER_MEET                        (SYSTEM_FLAGS + 0x6)

// Badges
#define FLAG_BADGE01_GET                             (SYSTEM_FLAGS + 0x7)
#define FLAG_BADGE02_GET                             (SYSTEM_FLAGS + 0x8)
#define FLAG_BADGE03_GET                             (SYSTEM_FLAGS + 0x9)
#define FLAG_BADGE04_GET                             (SYSTEM_FLAGS + 0xA)
#define FLAG_BADGE05_GET                             (SYSTEM_FLAGS + 0xB)
#define FLAG_BADGE06_GET                             (SYSTEM_FLAGS + 0xC)
#define FLAG_BADGE07_GET                             (SYSTEM_FLAGS + 0xD)
#define FLAG_BADGE08_GET                             (SYSTEM_FLAGS + 0xE)
#define NUM_BADGES                                   (1 + FLAG_BADGE08_GET - FLAG_BADGE01_GET)

// Towns and Cities
#define FLAG_VISITED_LITTLEROOT_TOWN                (SYSTEM_FLAGS + 0xF)
#define FLAG_VISITED_OLDALE_TOWN                    (SYSTEM_FLAGS + 0x10)
#define FLAG_VISITED_DEWFORD_TOWN                   (SYSTEM_FLAGS + 0x11)
#define FLAG_VISITED_LAVARIDGE_TOWN                 (SYSTEM_FLAGS + 0x12)
#define FLAG_VISITED_FALLARBOR_TOWN                 (SYSTEM_FLAGS + 0x13)
#define FLAG_VISITED_VERDANTURF_TOWN                (SYSTEM_FLAGS + 0x14)
#define FLAG_VISITED_PACIFIDLOG_TOWN                (SYSTEM_FLAGS + 0x15)
#define FLAG_VISITED_PETALBURG_CITY                 (SYSTEM_FLAGS + 0x16)
#define FLAG_VISITED_SLATEPORT_CITY                 (SYSTEM_FLAGS + 0x17)
#define FLAG_VISITED_MAUVILLE_CITY                  (SYSTEM_FLAGS + 0x18)
#define FLAG_VISITED_RUSTBORO_CITY                  (SYSTEM_FLAGS + 0x19)
#define FLAG_VISITED_FORTREE_CITY                   (SYSTEM_FLAGS + 0x1A)
#define FLAG_VISITED_LILYCOVE_CITY                  (SYSTEM_FLAGS + 0x1B)
#define FLAG_VISITED_MOSSDEEP_CITY                  (SYSTEM_FLAGS + 0x1C)
#define FLAG_VISITED_SOOTOPOLIS_CITY                (SYSTEM_FLAGS + 0x1D)
#define FLAG_VISITED_EVER_GRANDE_CITY               (SYSTEM_FLAGS + 0x1E)

#define FLAG_IS_CHAMPION                            (SYSTEM_FLAGS + 0x1F) // Seems to be related to linking.
#define FLAG_NURSE_UNION_ROOM_REMINDER              (SYSTEM_FLAGS + 0x20)

#define FLAG_SYS_COLLISION                          (SYSTEM_FLAGS + 0x21) // Debug Flag
#define FLAG_SYS_TRAINER_SEE                        (SYSTEM_FLAGS + 0x22) // Debug Flag
#define FLAG_SYS_ENCOUNTER                          (SYSTEM_FLAGS + 0x23) // Debug Flag
// Start qol_field_moves
#define FLAG_SYS_USE_CUT                            (SYSTEM_FLAGS + 0x24)
#define FLAG_SYS_USE_SURF                           (SYSTEM_FLAGS + 0x25)
#define FLAG_SYS_USE_ROCK_SMASH                     (SYSTEM_FLAGS + 0x26)
#define FLAG_SYS_USE_WATERFALL                      (SYSTEM_FLAGS + 0x27)
// End qol_field_moves

#define FLAG_SYS_USE_FLASH                          (SYSTEM_FLAGS + 0x28)
#define FLAG_SYS_USE_STRENGTH                       (SYSTEM_FLAGS + 0x29)
#define FLAG_SYS_WEATHER_CTRL                       (SYSTEM_FLAGS + 0x2A)
#define FLAG_SYS_CYCLING_ROAD                       (SYSTEM_FLAGS + 0x2B)
#define FLAG_SYS_SAFARI_MODE                        (SYSTEM_FLAGS + 0x2C)
#define FLAG_SYS_CRUISE_MODE                        (SYSTEM_FLAGS + 0x2D)

#define FLAG_SUPPRESS_SPEAKER_NAME                  (SYSTEM_FLAGS + 0x2E) // Unused Flag
#define FLAG_ENABLE_P2P_BADGES                      (SYSTEM_FLAGS + 0x2F) // Unused Flag

#define FLAG_SYS_TV_HOME                            (SYSTEM_FLAGS + 0x30)
#define FLAG_SYS_TV_WATCH                           (SYSTEM_FLAGS + 0x31)
#define FLAG_SYS_TV_START                           (SYSTEM_FLAGS + 0x32)
#define FLAG_SYS_CHANGED_DEWFORD_TREND              (SYSTEM_FLAGS + 0x33)
#define FLAG_SYS_MIX_RECORD                         (SYSTEM_FLAGS + 0x34)
#define FLAG_SYS_CLOCK_SET                          (SYSTEM_FLAGS + 0x35)
#define FLAG_SYS_NATIONAL_DEX                       (SYSTEM_FLAGS + 0x36)
#define FLAG_SYS_CAVE_SHIP                          (SYSTEM_FLAGS + 0x37) // Unused Flag, leftover from R/S debug, presumably used by Emerald's debug too
#define FLAG_SYS_CAVE_WONDER                        (SYSTEM_FLAGS + 0x38) // Unused Flag, same as above
#define FLAG_SYS_CAVE_BATTLE                        (SYSTEM_FLAGS + 0x39) // Unused Flag, same as above
#define FLAG_SYS_SHOAL_TIDE                         (SYSTEM_FLAGS + 0x3A)
#define FLAG_SYS_RIBBON_GET                         (SYSTEM_FLAGS + 0x3B)

#define FLAG_LANDMARK_FLOWER_SHOP                   (SYSTEM_FLAGS + 0x3C)
#define FLAG_LANDMARK_MR_BRINEY_HOUSE               (SYSTEM_FLAGS + 0x3D)
#define FLAG_LANDMARK_ABANDONED_SHIP                (SYSTEM_FLAGS + 0x3E)
#define FLAG_LANDMARK_SEASHORE_HOUSE                (SYSTEM_FLAGS + 0x3F)
#define FLAG_LANDMARK_NEW_MAUVILLE                  (SYSTEM_FLAGS + 0x40)
#define FLAG_LANDMARK_OLD_LADY_REST_SHOP            (SYSTEM_FLAGS + 0x41)
#define FLAG_LANDMARK_TRICK_HOUSE                   (SYSTEM_FLAGS + 0x42)
#define FLAG_LANDMARK_WINSTRATE_FAMILY              (SYSTEM_FLAGS + 0x43)
#define FLAG_LANDMARK_GLASS_WORKSHOP                (SYSTEM_FLAGS + 0x44)
#define FLAG_LANDMARK_LANETTES_HOUSE                (SYSTEM_FLAGS + 0x45)
#define FLAG_LANDMARK_POKEMON_DAYCARE               (SYSTEM_FLAGS + 0x46)
#define FLAG_LANDMARK_SEAFLOOR_CAVERN               (SYSTEM_FLAGS + 0x47)
#define FLAG_LANDMARK_BATTLE_FRONTIER               (SYSTEM_FLAGS + 0x48)
#define FLAG_LANDMARK_SOUTHERN_ISLAND               (SYSTEM_FLAGS + 0x49)
#define FLAG_LANDMARK_FIERY_PATH                    (SYSTEM_FLAGS + 0x4A)

#define FLAG_SYS_PC_LANETTE                         (SYSTEM_FLAGS + 0x4B)
#define FLAG_SYS_MYSTERY_EVENT_ENABLE               (SYSTEM_FLAGS + 0x4C)
#define FLAG_SYS_ENC_UP_ITEM                        (SYSTEM_FLAGS + 0x4D)
#define FLAG_SYS_ENC_DOWN_ITEM                      (SYSTEM_FLAGS + 0x4E)
#define FLAG_SYS_BRAILLE_DIG                        (SYSTEM_FLAGS + 0x4F)
#define FLAG_SYS_REGIROCK_PUZZLE_COMPLETED          (SYSTEM_FLAGS + 0x50)
#define FLAG_SYS_BRAILLE_REGICE_COMPLETED           (SYSTEM_FLAGS + 0x51)
#define FLAG_SYS_REGISTEEL_PUZZLE_COMPLETED         (SYSTEM_FLAGS + 0x52)
#define FLAG_ENABLE_SHIP_SOUTHERN_ISLAND            (SYSTEM_FLAGS + 0x53)

#define FLAG_LANDMARK_POKEMON_LEAGUE                (SYSTEM_FLAGS + 0x54)
#define FLAG_LANDMARK_ISLAND_CAVE                   (SYSTEM_FLAGS + 0x55)
#define FLAG_LANDMARK_DESERT_RUINS                  (SYSTEM_FLAGS + 0x56)
#define FLAG_LANDMARK_FOSSIL_MANIACS_HOUSE          (SYSTEM_FLAGS + 0x57)
#define FLAG_LANDMARK_SCORCHED_SLAB                 (SYSTEM_FLAGS + 0x58)
#define FLAG_LANDMARK_ANCIENT_TOMB                  (SYSTEM_FLAGS + 0x59)
#define FLAG_LANDMARK_TUNNELERS_REST_HOUSE          (SYSTEM_FLAGS + 0x5A)
#define FLAG_LANDMARK_HUNTERS_HOUSE                 (SYSTEM_FLAGS + 0x5B)
#define FLAG_LANDMARK_SEALED_CHAMBER                (SYSTEM_FLAGS + 0x5C)

#define FLAG_SYS_TV_LATIAS_LATIOS                   (SYSTEM_FLAGS + 0x5D)

#define FLAG_LANDMARK_SKY_PILLAR                    (SYSTEM_FLAGS + 0x5E)

#define FLAG_SYS_SHOAL_ITEM                         (SYSTEM_FLAGS + 0x5F)
#define FLAG_SYS_B_DASH                             (SYSTEM_FLAGS + 0x60) // RECEIVED Running Shoes
#define FLAG_SYS_CTRL_OBJ_DELETE                    (SYSTEM_FLAGS + 0x61)
#define FLAG_SYS_RESET_RTC_ENABLE                   (SYSTEM_FLAGS + 0x62)

#define FLAG_LANDMARK_BERRY_MASTERS_HOUSE           (SYSTEM_FLAGS + 0x63)

#define FLAG_SYS_TOWER_SILVER                       (SYSTEM_FLAGS + 0x64)
#define FLAG_SYS_TOWER_GOLD                         (SYSTEM_FLAGS + 0x65)
#define FLAG_SYS_DOME_SILVER                        (SYSTEM_FLAGS + 0x66)
#define FLAG_SYS_DOME_GOLD                          (SYSTEM_FLAGS + 0x67)
#define FLAG_SYS_PALACE_SILVER                      (SYSTEM_FLAGS + 0x68)
#define FLAG_SYS_PALACE_GOLD                        (SYSTEM_FLAGS + 0x69)
#define FLAG_SYS_ARENA_SILVER                       (SYSTEM_FLAGS + 0x6A)
#define FLAG_SYS_ARENA_GOLD                         (SYSTEM_FLAGS + 0x6B)
#define FLAG_SYS_FACTORY_SILVER                     (SYSTEM_FLAGS + 0x6C)
#define FLAG_SYS_FACTORY_GOLD                       (SYSTEM_FLAGS + 0x6D)
#define FLAG_SYS_PIKE_SILVER                        (SYSTEM_FLAGS + 0x6E)
#define FLAG_SYS_PIKE_GOLD                          (SYSTEM_FLAGS + 0x6F)
#define FLAG_SYS_PYRAMID_SILVER                     (SYSTEM_FLAGS + 0x70)
#define FLAG_SYS_PYRAMID_GOLD                       (SYSTEM_FLAGS + 0x71)
#define FLAG_SYS_FRONTIER_PASS                      (SYSTEM_FLAGS + 0x72)

#define FLAG_MAP_SCRIPT_CHECKED_DEOXYS              (SYSTEM_FLAGS + 0x73)
#define FLAG_DEOXYS_ROCK_COMPLETE                   (SYSTEM_FLAGS + 0x74)
#define FLAG_ENABLE_SHIP_BIRTH_ISLAND               (SYSTEM_FLAGS + 0x75)
#define FLAG_ENABLE_SHIP_FARAWAY_ISLAND             (SYSTEM_FLAGS + 0x76)

#define FLAG_SHOWN_BOX_WAS_FULL_MESSAGE             (SYSTEM_FLAGS + 0x77)

#define FLAG_ARRIVED_ON_FARAWAY_ISLAND              (SYSTEM_FLAGS + 0x78)
#define FLAG_ARRIVED_AT_MARINE_CAVE_EMERGE_SPOT     (SYSTEM_FLAGS + 0x79)
#define FLAG_ARRIVED_AT_TERRA_CAVE_ENTRANCE         (SYSTEM_FLAGS + 0x7A)

#define FLAG_SYS_MYSTERY_GIFT_ENABLE                (SYSTEM_FLAGS + 0x7B)

#define FLAG_ENTERED_MIRAGE_TOWER                   (SYSTEM_FLAGS + 0x7C)
#define FLAG_LANDMARK_ALTERING_CAVE                 (SYSTEM_FLAGS + 0x7D)
#define FLAG_LANDMARK_DESERT_UNDERPASS              (SYSTEM_FLAGS + 0x7E)
#define FLAG_LANDMARK_ARTISAN_CAVE                  (SYSTEM_FLAGS + 0x7F)
#define FLAG_ENABLE_SHIP_NAVEL_ROCK                 (SYSTEM_FLAGS + 0x80)
#define FLAG_ARRIVED_AT_NAVEL_ROCK                  (SYSTEM_FLAGS + 0x81)
#define FLAG_LANDMARK_TRAINER_HILL                  (SYSTEM_FLAGS + 0x82)

#define FLAG_UNUSED_0x8E3                           (SYSTEM_FLAGS + 0x83) // Unused Flag

#define FLAG_RECEIVED_POKEDEX_FROM_BIRCH            (SYSTEM_FLAGS + 0x84)

#define FLAG_VISITED_LUMBRIDGE                      (SYSTEM_FLAGS + 0x85) // MAPSEC & these flags MUST BE IN THE SAME ORDER!!!!
#define FLAG_VISITED_DRAYNOR                        (SYSTEM_FLAGS + 0x86) // Unused Flag
#define FLAG_VISITED_PORT_SARIM                     (SYSTEM_FLAGS + 0x87) // Unused Flag
#define FLAG_VISITED_RIMMINGTON                     (SYSTEM_FLAGS + 0x88) // Unused Flag
#define FLAG_VISITED_TAVERLEY                       (SYSTEM_FLAGS + 0x89) // Unused Flag
#define FLAG_VISITED_FALADOR                        (SYSTEM_FLAGS + 0x8A) // Unused Flag
#define FLAG_VISITED_BARBARIAN_VILLAGE              (SYSTEM_FLAGS + 0x8B) // Unused Flag
#define FLAG_VISITED_VARROCK                        (SYSTEM_FLAGS + 0x8C) // Unused Flag
#define FLAG_VISITED_EDGEVILLE                      (SYSTEM_FLAGS + 0x8D) // Unused Flag
#define FLAG_VISITED_AL_KHARID                      (SYSTEM_FLAGS + 0x8E) // Unused Flag
#define FLAG_VISITED_MUSA_POINT                     (SYSTEM_FLAGS + 0x8F) // Unused Flag
#define FLAG_TOGGLE_INVERSE_BATTLE                  (SYSTEM_FLAGS + 0x90) // Unused Flag
#define FLAG_TOGGLE_NO_BAG_USE                      (SYSTEM_FLAGS + 0x91) // Unused Flag
#define FLAG_TOGGLE_NO_CATCHING                     (SYSTEM_FLAGS + 0x92) // Unused Flag
#define FLAG_UNUSED_0x8F3                           (SYSTEM_FLAGS + 0x93) // Unused Flag
#define FLAG_UNUSED_0x8F4                           (SYSTEM_FLAGS + 0x94) // Unused Flag
#define FLAG_UNUSED_0x8F5                           (SYSTEM_FLAGS + 0x95) // Unused Flag
#define FLAG_UNUSED_0x8F6                           (SYSTEM_FLAGS + 0x96) // Unused Flag
#define FLAG_UNUSED_0x8F7                           (SYSTEM_FLAGS + 0x97) // Unused Flag
#define FLAG_UNUSED_0x8F8                           (SYSTEM_FLAGS + 0x98) // Unused Flag
#define FLAG_UNUSED_0x8F9                           (SYSTEM_FLAGS + 0x99) // Unused Flag
#define FLAG_UNUSED_0x8FA                           (SYSTEM_FLAGS + 0x9A) // Unused Flag
#define FLAG_UNUSED_0x8FB                           (SYSTEM_FLAGS + 0x9B) // Unused Flag
#define FLAG_UNUSED_0x8FC                           (SYSTEM_FLAGS + 0x9C) // Unused Flag
#define FLAG_UNUSED_0x8FD                           (SYSTEM_FLAGS + 0x9D) // Unused Flag
#define FLAG_UNUSED_0x8FE                           (SYSTEM_FLAGS + 0x9E) // Unused Flag
#define FLAG_UNUSED_0x8FF                           (SYSTEM_FLAGS + 0x9F) // Unused Flag
#define FLAG_UNUSED_0x900                           (SYSTEM_FLAGS + 0xA0) // Unused Flag
#define FLAG_UNUSED_0x901                           (SYSTEM_FLAGS + 0xA1) // Unused Flag
#define FLAG_UNUSED_0x902                           (SYSTEM_FLAGS + 0xA2) // Unused Flag
#define FLAG_UNUSED_0x903                           (SYSTEM_FLAGS + 0xA3) // Unused Flag
#define FLAG_UNUSED_0x904                           (SYSTEM_FLAGS + 0xA4) // Unused Flag
#define FLAG_UNUSED_0x905                           (SYSTEM_FLAGS + 0xA5) // Unused Flag
#define FLAG_UNUSED_0x906                           (SYSTEM_FLAGS + 0xA6) // Unused Flag
#define FLAG_UNUSED_0x907                           (SYSTEM_FLAGS + 0xA7) // Unused Flag
#define FLAG_UNUSED_0x908                           (SYSTEM_FLAGS + 0xA8) // Unused Flag
#define FLAG_UNUSED_0x909                           (SYSTEM_FLAGS + 0xA9) // Unused Flag
#define FLAG_UNUSED_0x90A                           (SYSTEM_FLAGS + 0xAA) // Unused Flag
#define FLAG_UNUSED_0x90B                           (SYSTEM_FLAGS + 0xAB) // Unused Flag
#define FLAG_UNUSED_0x90C                           (SYSTEM_FLAGS + 0xAC) // Unused Flag
#define FLAG_UNUSED_0x90D                           (SYSTEM_FLAGS + 0xAD) // Unused Flag
#define FLAG_UNUSED_0x90E                           (SYSTEM_FLAGS + 0xAE) // Unused Flag
#define FLAG_UNUSED_0x90F                           (SYSTEM_FLAGS + 0xAF) // Unused Flag
#define FLAG_UNUSED_0x910                           (SYSTEM_FLAGS + 0xB0) // Unused Flag
#define FLAG_UNUSED_0x911                           (SYSTEM_FLAGS + 0xB1) // Unused Flag
#define FLAG_UNUSED_0x912                           (SYSTEM_FLAGS + 0xB2) // Unused Flag
#define FLAG_UNUSED_0x913                           (SYSTEM_FLAGS + 0xB3) // Unused Flag
#define FLAG_UNUSED_0x914                           (SYSTEM_FLAGS + 0xB4) // Unused Flag
#define FLAG_UNUSED_0x915                           (SYSTEM_FLAGS + 0xB5) // Unused Flag
#define FLAG_UNUSED_0x916                           (SYSTEM_FLAGS + 0xB6) // Unused Flag
#define FLAG_SYS_MOVE_INFO                          (SYSTEM_FLAGS + 0xB7) // Unused Flag
#define FLAG_UNUSED_0x918                           (SYSTEM_FLAGS + 0xB8) // Unused Flag
#define FLAG_UNUSED_0x919                           (SYSTEM_FLAGS + 0xB9) // Unused Flag
#define FLAG_UNUSED_0x91A                           (SYSTEM_FLAGS + 0xBA) // Unused Flag
#define FLAG_UNUSED_0x91B                           (SYSTEM_FLAGS + 0xBB) // Unused Flag
#define FLAG_UNUSED_0x91C                           (SYSTEM_FLAGS + 0xBC) // Unused Flag
#define FLAG_UNUSED_0x91D                           (SYSTEM_FLAGS + 0xBD) // Unused Flag
#define FLAG_UNUSED_0x91E                           (SYSTEM_FLAGS + 0xBE) // Unused Flag
#define FLAG_UNUSED_0x91F                           (SYSTEM_FLAGS + 0xBF) // Unused Flag

// Daily Flags
// These flags are cleared once per day
// The start and end are byte-aligned because the flags are cleared in byte increments
#define DAILY_FLAGS_START                           (FLAG_UNUSED_0x91F + (8 - FLAG_UNUSED_0x91F % 8))
#define FLAG_UNUSED_0x920                           (DAILY_FLAGS_START + 0x0)  // Unused Flag
#define FLAG_DAILY_CONTEST_LOBBY_RECEIVED_BERRY     (DAILY_FLAGS_START + 0x1)
#define FLAG_DAILY_SECRET_BASE                      (DAILY_FLAGS_START + 0x2)
#define FLAG_UNUSED_0x923                           (DAILY_FLAGS_START + 0x3)  // Unused Flag
#define FLAG_UNUSED_0x924                           (DAILY_FLAGS_START + 0x4)  // Unused Flag
#define FLAG_UNUSED_0x925                           (DAILY_FLAGS_START + 0x5)  // Unused Flag
#define FLAG_UNUSED_0x926                           (DAILY_FLAGS_START + 0x6)  // Unused Flag
#define FLAG_UNUSED_0x927                           (DAILY_FLAGS_START + 0x7)  // Unused Flag
#define FLAG_UNUSED_0x928                           (DAILY_FLAGS_START + 0x8)  // Unused Flag
#define FLAG_UNUSED_0x929                           (DAILY_FLAGS_START + 0x9)  // Unused Flag
#define FLAG_DAILY_PICKED_LOTO_TICKET               (DAILY_FLAGS_START + 0xA)
#define FLAG_DAILY_ROUTE_114_RECEIVED_BERRY         (DAILY_FLAGS_START + 0xB)
#define FLAG_DAILY_ROUTE_111_RECEIVED_BERRY         (DAILY_FLAGS_START + 0xC)
#define FLAG_DAILY_BERRY_MASTER_RECEIVED_BERRY      (DAILY_FLAGS_START + 0xD)
#define FLAG_DAILY_ROUTE_120_RECEIVED_BERRY         (DAILY_FLAGS_START + 0xE)
#define FLAG_DAILY_LILYCOVE_RECEIVED_BERRY          (DAILY_FLAGS_START + 0xF)
#define FLAG_DAILY_FLOWER_SHOP_RECEIVED_BERRY       (DAILY_FLAGS_START + 0x10)
#define FLAG_DAILY_BERRY_MASTERS_WIFE               (DAILY_FLAGS_START + 0x11)
#define FLAG_DAILY_SOOTOPOLIS_RECEIVED_BERRY        (DAILY_FLAGS_START + 0x12)
#define FLAG_UNUSED_0x933                           (DAILY_FLAGS_START + 0x13) // Unused Flag
#define FLAG_DAILY_APPRENTICE_LEAVES                (DAILY_FLAGS_START + 0x14)

#define FLAG_UNUSED_0x935                           (DAILY_FLAGS_START + 0x15) // PUB TRAINER 1
#define FLAG_UNUSED_0x936                           (DAILY_FLAGS_START + 0x16) // PUB TRAINER 2
#define FLAG_UNUSED_0x937                           (DAILY_FLAGS_START + 0x17) // PUB TRAINER 3
#define FLAG_UNUSED_0x938                           (DAILY_FLAGS_START + 0x18) // PUB TRAINER 4
#define FLAG_UNUSED_0x939                           (DAILY_FLAGS_START + 0x19) // PUB TRAINER 5
#define FLAG_UNUSED_0x93A                           (DAILY_FLAGS_START + 0x1A) // PUB TRAINER 6
#define FLAG_UNUSED_0x93B                           (DAILY_FLAGS_START + 0x1B) // PUB TRAINER 7
#define FLAG_UNUSED_0x93C                           (DAILY_FLAGS_START + 0x1C) // PUB TRAINER 8
#define FLAG_GOODIE_BAG                             (DAILY_FLAGS_START + 0x1D) // NIGHTMARERH GOODIE BAG
#define FLAG_HIDDEN_GROTTO_1                        (DAILY_FLAGS_START + 0x1E) // Unused Flag
#define FLAG_HIDDEN_GROTTO_2                        (DAILY_FLAGS_START + 0x1F) // Unused Flag
#define FLAG_HIDDEN_GROTTO_3                        (DAILY_FLAGS_START + 0x20) // Unused Flag
#define FLAG_HIDDEN_GROTTO_4                        (DAILY_FLAGS_START + 0x21) // Unused Flag
#define FLAG_HIDDEN_GROTTO_5                        (DAILY_FLAGS_START + 0x22) // Unused Flag
#define FLAG_HIDDEN_GROTTO_6                        (DAILY_FLAGS_START + 0x23) // Unused Flag
#define FLAG_HIDDEN_GROTTO_7                        (DAILY_FLAGS_START + 0x24) // Unused Flag
#define FLAG_HIDDEN_GROTTO_8                        (DAILY_FLAGS_START + 0x25) // Unused Flag
#define FLAG_PUB_TRAINER_9                          (DAILY_FLAGS_START + 0x26) // Unused Flag
#define FLAG_PUB_TRAINER_10                         (DAILY_FLAGS_START + 0x27) // Unused Flag
#define FLAG_PUB_TRAINER_11                         (DAILY_FLAGS_START + 0x28) // Unused Flag
#define FLAG_PUB_TRAINER_12                         (DAILY_FLAGS_START + 0x29) // Unused Flag
#define FLAG_PUB_TRAINER_13                         (DAILY_FLAGS_START + 0x2A) // Unused Flag
#define FLAG_PUB_TRAINER_14                         (DAILY_FLAGS_START + 0x2B) // Unused Flag
#define FLAG_PUB_TRAINER_15                         (DAILY_FLAGS_START + 0x2C) // Unused Flag
#define FLAG_PUB_TRAINER_16                         (DAILY_FLAGS_START + 0x2D) // Unused Flag
#define FLAG_PUB_TRAINER_17                         (DAILY_FLAGS_START + 0x2E) // Unused Flag
#define FLAG_PUB_TRAINER_18                         (DAILY_FLAGS_START + 0x2F) // Unused Flag
#define FLAG_PUB_TRAINER_19                         (DAILY_FLAGS_START + 0x30) // Unused Flag
#define FLAG_PUB_TRAINER_20                         (DAILY_FLAGS_START + 0x31) // Unused Flag
#define FLAG_HIDDEN_GROTTO_9                        (DAILY_FLAGS_START + 0x32) // Unused Flag
#define FLAG_HIDDEN_GROTTO_10                       (DAILY_FLAGS_START + 0x33) // Unused Flag
#define FLAG_HIDDEN_GROTTO_11                       (DAILY_FLAGS_START + 0x34) // Unused Flag
#define FLAG_HIDDEN_GROTTO_12                       (DAILY_FLAGS_START + 0x35) // Unused Flag
#define FLAG_HIDDEN_GROTTO_13                       (DAILY_FLAGS_START + 0x36) // Unused Flag
#define FLAG_HIDDEN_GROTTO_14                       (DAILY_FLAGS_START + 0x37) // Unused Flag
#define FLAG_HIDDEN_GROTTO_15                       (DAILY_FLAGS_START + 0x38) // Unused Flag
#define FLAG_UNUSED_0x959                           (DAILY_FLAGS_START + 0x39) // Unused Flag
#define FLAG_UNUSED_0x95A                           (DAILY_FLAGS_START + 0x3A) // Unused Flag
#define FLAG_UNUSED_0x95B                           (DAILY_FLAGS_START + 0x3B) // Unused Flag
#define FLAG_UNUSED_0x95C                           (DAILY_FLAGS_START + 0x3C) // Unused Flag
#define FLAG_UNUSED_0x95D                           (DAILY_FLAGS_START + 0x3D) // Unused Flag
#define FLAG_UNUSED_0x95E                           (DAILY_FLAGS_START + 0x3E) // Unused Flag
#define FLAG_UNUSED_0x95F                           (DAILY_FLAGS_START + 0x3F) // Unused Flag
#define DAILY_FLAGS_END                             (FLAG_UNUSED_0x95F + (7 - FLAG_UNUSED_0x95F % 8))
#define NUM_DAILY_FLAGS                             (DAILY_FLAGS_END - DAILY_FLAGS_START + 1)

#define FLAGS_COUNT (DAILY_FLAGS_END + 1)

// Special Flags (Stored in EWRAM (sSpecialFlags), not in the SaveBlock)
#define SPECIAL_FLAGS_START                     0x4000
#define FLAG_HIDE_MAP_NAME_POPUP                (SPECIAL_FLAGS_START + 0x0)
#define FLAG_DONT_TRANSITION_MUSIC              (SPECIAL_FLAGS_START + 0x1)
#define FLAG_ENABLE_MULTI_CORRIDOR_DOOR         (SPECIAL_FLAGS_START + 0x2)
#define FLAG_SPECIAL_FLAG_UNUSED_0x4003         (SPECIAL_FLAGS_START + 0x3) // Unused Flag
#define FLAG_STORING_ITEMS_IN_PYRAMID_BAG       (SPECIAL_FLAGS_START + 0x4)
// FLAG_SPECIAL_FLAG_0x4005 - 0x407F also exist and are unused
#define SPECIAL_FLAGS_END                       (SPECIAL_FLAGS_START + 0x7F)
#define NUM_SPECIAL_FLAGS                       (SPECIAL_FLAGS_END - SPECIAL_FLAGS_START + 1)

// Temp flag aliases
#define FLAG_TEMP_SKIP_GABBY_INTERVIEW              FLAG_TEMP_1
#define FLAG_TEMP_REGICE_PUZZLE_STARTED             FLAG_TEMP_2
#define FLAG_TEMP_REGICE_PUZZLE_FAILED              FLAG_TEMP_3
#define FLAG_TEMP_HIDE_MIRAGE_ISLAND_BERRY_TREE     FLAG_TEMP_11

#endif // GUARD_CONSTANTS_FLAGS_H
