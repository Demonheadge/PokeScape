Lumbridge_Swamp_Caves_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Lumbridge_Swamp_Caves_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Lumbridge_Swamp_Caves_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setvar VAR_EVOLUTION_MAP_STATE, 43
	return


LumbridgeSwampCaves_WallBeasts::
	lockall
	applymovement OBJ_EVENT_ID_PLAYER, Movement_WallBeast
	playSE SE_LEDGE
	msgbox LumbridgeSwampCaves_WallBeasts_Text_0
	waitmovement 0
	random 8
	switch VAR_RESULT
	case 0, LumbridgeSwampCaves_WallBeasts_3
	case 1, LumbridgeSwampCaves_WallBeasts_3
	case 2, LumbridgeSwampCaves_WallBeasts_3
	case 3, LumbridgeSwampCaves_WallBeasts_3
	case 4, LumbridgeSwampCaves_WallBeasts_3
	case 5, LumbridgeSwampCaves_WallBeasts_4
	case 6, LumbridgeSwampCaves_WallBeasts_5
	case 7, LumbridgeSwampCaves_WallBeasts_6
	release
	end

LumbridgeSwampCaves_WallBeasts_3:
	msgbox LumbridgeSwampCaves_WallBeasts_Text_1
	closemessage
	setwildbattle SPECIES_WALL_BEAST, 10, ITEM_NONE
	dowildbattle
	release
	end

LumbridgeSwampCaves_WallBeasts_4:
	msgbox LumbridgeSwampCaves_WallBeasts_Text_2
	closemessage
	special RockSmashWildEncounter
	release
	end

LumbridgeSwampCaves_WallBeasts_5:
	msgbox LumbridgeSwampCaves_WallBeasts_Text_3
	closemessage
	setwildbattle SPECIES_FLEDGLING, 10, ITEM_NONE
	dowildbattle
	release
	end

LumbridgeSwampCaves_WallBeasts_6:
	msgbox LumbridgeSwampCaves_WallBeasts_Text_4
	closemessage
	setwildbattle SPECIES_HAND_CREEPING_FORM, 10, ITEM_NONE
	dowildbattle
	release
	end


Movement_WallBeast:
	emote_exclamation_mark
	jump_in_place_up
	step_end

ITEM_LUMBRIDGESWAMPCAVE_ITEM_1::
	finditem ITEM_TM21_TOXIC
	end


ITEM_LUMBRIDGESWAMPCAVE_ITEM_2::
	finditem ITEM_SPIRIT_SHARD
	end


ITEM_LUMBRIDGESWAMPCAVE_ITEM_3::
	finditem ITEM_SPIRIT_SHARD
	end


ITEM_LUMBRIDGESWAMPCAVE_ITEM_4::
	finditem ITEM_SPIRIT_SHARD
	end


ITEM_LUMBRIDGESWAMPCAVE_ITEM_5::
	finditem ITEM_SPIRIT_SHARD
	end


ITEM_LUMBRIDGESWAMPCAVE_ITEM_6::
	finditem ITEM_SPIRIT_SHARD
	end


BATTLE_LUMBRIDGESWAMPCAVE_FISHERMAN_1::
	trainerbattle_single TRAINER_LUMBRIDGESWAMPCAVE_FISHERMAN_1, BATTLE_LUMBRIDGESWAMPCAVE_FISHERMAN_1_Text_0, BATTLE_LUMBRIDGESWAMPCAVE_FISHERMAN_1_Text_1
	msgbox BATTLE_LUMBRIDGESWAMPCAVE_FISHERMAN_1_Text_1
	hidenamebox
	release
	end


BATTLE_LUMBRIDGESWAMPCAVE_SKELETON_1::
	trainerbattle_single TRAINER_LUMBRIDGESWAMPCAVE_SKELETON_1, BATTLE_LUMBRIDGESWAMPCAVE_SKELETON_1_Text_0, BATTLE_LUMBRIDGESWAMPCAVE_SKELETON_1_Text_1
	msgbox BATTLE_LUMBRIDGESWAMPCAVE_SKELETON_1_Text_2
	release
	end


BATTLE_LUMBRIDGESWAMPCAVE_PVMER_1::
	trainerbattle_single TRAINER_LUMBRIDGESWAMPCAVE_PVMER_1, BATTLE_LUMBRIDGESWAMPCAVE_PVMER_1_Text_0, BATTLE_LUMBRIDGESWAMPCAVE_PVMER_1_Text_1
	msgbox BATTLE_LUMBRIDGESWAMPCAVE_PVMER_1_Text_1
	hidenamebox
	release
	end


BATTLE_LUMBRIDGESWAMPCAVE_4::
	trainerbattle_single TRAINER_LUMBRIDGESWAMPCAVE_4, BATTLE_LUMBRIDGESWAMPCAVE_4_Text_0, BATTLE_LUMBRIDGESWAMPCAVE_4_Text_1
	msgbox BATTLE_LUMBRIDGESWAMPCAVE_4_Text_1
	hidenamebox
	release
	end


BATTLE_LUMBRIDGESWAMPCAVE_5::
	trainerbattle_single TRAINER_LUMBRIDGESWAMPCAVE_5, BATTLE_LUMBRIDGESWAMPCAVE_5_Text_0, BATTLE_LUMBRIDGESWAMPCAVE_5_Text_1
	msgbox BATTLE_LUMBRIDGESWAMPCAVE_5_Text_2
	hidenamebox
	release
	end


BATTLE_LUMBRIDGESWAMPCAVE_6::
	trainerbattle_single TRAINER_LUMBRIDGESWAMPCAVE_6, BATTLE_LUMBRIDGESWAMPCAVE_6_Text_0, BATTLE_LUMBRIDGESWAMPCAVE_6_Text_1
	msgbox BATTLE_LUMBRIDGESWAMPCAVE_6_Text_1
	hidenamebox
	release
	end


LumbridgeSwampCaves_WallBeasts_Text_0:
	.string "Something jumps out of the wall towards\n"
	.string "you!$"

LumbridgeSwampCaves_WallBeasts_Text_1:
	.string "A hand swipes at you!$"

LumbridgeSwampCaves_WallBeasts_Text_2:
	.string "A wild Monster attacked!$"

LumbridgeSwampCaves_WallBeasts_Text_3:
	.string "A creature jumps out at you!$"

LumbridgeSwampCaves_WallBeasts_Text_4:
	.string "A small hand falls out of the rubble!$"

BATTLE_LUMBRIDGESWAMPCAVE_FISHERMAN_1_Text_0:
	.string "Im collecting frogspawn, dont bother\n"
	.string "me.$"

BATTLE_LUMBRIDGESWAMPCAVE_FISHERMAN_1_Text_1:
	.string "I hear somewhere in Kandarin theres a\n"
	.string "tower.\p"
	.string "If you bring it a slimy eel and frog legs\n"
	.string "it will create a legendary monster.$"

BATTLE_LUMBRIDGESWAMPCAVE_SKELETON_1_Text_0:
	.string "The skeleton tries to shoo you away.$"

BATTLE_LUMBRIDGESWAMPCAVE_SKELETON_1_Text_1:
	.string "Chitter, chitter.$"

BATTLE_LUMBRIDGESWAMPCAVE_SKELETON_1_Text_2:
	.string "It looks like the skeleton thinks you\n"
	.string "are smart for bringing a lantern rather\l"
	.string "than a naked candle.$"

BATTLE_LUMBRIDGESWAMPCAVE_PVMER_1_Text_0:
	.string "Show me the way to the slayer tower\n"
	.string "noob!$"

BATTLE_LUMBRIDGESWAMPCAVE_PVMER_1_Text_1:
	.string "Oh it is in Morytania.\p"
	.string "This explains a lot.$"

BATTLE_LUMBRIDGESWAMPCAVE_4_Text_0:
	.string "Really should have brought a lantern\n"
	.string "for this task…$"

BATTLE_LUMBRIDGESWAMPCAVE_4_Text_1:
	.string "I cannot even see if I won or lost…$"

BATTLE_LUMBRIDGESWAMPCAVE_5_Text_0:
	.string "I might not be able to see, but that will\n"
	.string "not stop me from fishing!$"

BATTLE_LUMBRIDGESWAMPCAVE_5_Text_1:
	.string "Cupholder has lost.$"

BATTLE_LUMBRIDGESWAMPCAVE_5_Text_2:
	.string "I might not be able to see, but that will\n"
	.string "not stop me from ignoring you.$"

BATTLE_LUMBRIDGESWAMPCAVE_6_Text_0:
	.string "I am here to kill all the cave slimes!$"

BATTLE_LUMBRIDGESWAMPCAVE_6_Text_1:
	.string "Kill all the slimes!!$"
