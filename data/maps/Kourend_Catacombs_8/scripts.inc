Kourend_Catacombs_8_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, Kourend_Catacombs_8_MapScripts_MAP_SCRIPT_ON_LOAD
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Kourend_Catacombs_8_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Kourend_Catacombs_8_MapScripts_MAP_SCRIPT_ON_LOAD:
	call SKOTIZO_CHECK
	return

Kourend_Catacombs_8_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_SLAYER_COMPLETE, 1, SLAYER_TASK_COMPLETE
	.2byte 0


SKOTIZO_CHECK::
	checkitem ITEM_DARK_TOTEM, 1
	compare VAR_RESULT, 0
	goto_if_ne SKOTIZO_CHECK_2
SKOTIZO_CHECK_1:
	compare VAR_TEMP_E, 5
	goto_if_eq SKOTIZO_CHECK_4
	return

SKOTIZO_CHECK_2:
	setflag FLAG_TEMP_A
	removeobject 1
	goto SKOTIZO_CHECK_1

SKOTIZO_CHECK_4:
	clearflag FLAG_TEMP_A
	addobject 1
	setmetatile 9, 4, 673, 0
	setmetatile 10, 4, 673, 0
	setmetatile 11, 4, 673, 0
	setmetatile 9, 5, 673, 0
	setmetatile 10, 5, 673, 0
	setmetatile 11, 5, 673, 0
	special DrawWholeMapView
	return


SKOTIZO_TRIGGER::
	compare VAR_TEMP_E, 5
	goto_if_eq SKOTIZO_TRIGGER_2
	checkitem ITEM_DARK_TOTEM, 1
	compare VAR_RESULT, 0
	goto_if_ne SKOTIZO_TRIGGER_5
	release
	end

SKOTIZO_TRIGGER_2:
	release
	end

SKOTIZO_TRIGGER_5:
	lock
	applymovement OBJ_EVENT_ID_PLAYER, MOVEMENT_FACE_UP
	waitmovement 0
	msgbox SKOTIZO_TRIGGER_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne SKOTIZO_TRIGGER_8
SKOTIZO_TRIGGER_7:
	closemessage
	release
	end

SKOTIZO_TRIGGER_8:
	msgbox SKOTIZO_TRIGGER_Text_1
	closemessage
	delay 30
	setvar VAR_0x8004, 0
	setvar VAR_0x8005, 3
	setvar VAR_0x8006, 4
	setvar VAR_0x8007, 2
	special ShakeCamera
	delay 60
	setvar VAR_0x8004, 0
	setvar VAR_0x8005, 3
	setvar VAR_0x8006, 4
	setvar VAR_0x8007, 2
	special ShakeCamera
	delay 60
	fadescreenswapbuffers FADE_TO_WHITE
	clearflag FLAG_TEMP_A
	addobject 1
	setmetatile 9, 4, 673, 0
	setmetatile 10, 4, 673, 0
	setmetatile 11, 4, 673, 0
	setmetatile 9, 5, 673, 0
	setmetatile 10, 5, 673, 0
	setmetatile 11, 5, 673, 0
	special DrawWholeMapView
	playse SE_ICE_BREAK
	fadescreenswapbuffers FADE_FROM_WHITE
	msgbox SKOTIZO_TRIGGER_Text_2
	closemessage
	goto ENCOUNTER_SKOTIZO
	goto SKOTIZO_TRIGGER_7


ENCOUNTER_SKOTIZO::
	lock
	namebox ENCOUNTER_SKOTIZO_Text_0
	playmoncry SPECIES_SKOTIZO, 0
	msgbox ENCOUNTER_SKOTIZO_Text_1
	waitmoncry
	hidenamebox
	closemessage
	delay 1
	setwildbattle SPECIES_SKOTIZO, 70, ITEM_NONE
	dowildbattle
	switch VAR_RESULT
	case B_OUTCOME_WON, ENCOUNTER_SKOTIZO_3
	case B_OUTCOME_CAUGHT, ENCOUNTER_SKOTIZO_4
	case B_OUTCOME_RAN, ENCOUNTER_SKOTIZO_5
	case B_OUTCOME_PLAYER_TELEPORTED, ENCOUNTER_SKOTIZO_6
ENCOUNTER_SKOTIZO_1:
	release
	end

ENCOUNTER_SKOTIZO_3:
	fadescreenswapbuffers FADE_TO_BLACK
	removeitem ITEM_DARK_TOTEM, 1
	msgbox ENCOUNTER_SKOTIZO_Text_2
	closemessage
	setflag FLAG_TEMP_A
	removeobject 1
	fadescreenswapbuffers FADE_FROM_BLACK
	questmenu QUEST_MENU_CHECK_COMPLETE, QUEST_KOUREND_SLAYER
	compare VAR_RESULT, 0
	goto_if_eq ENCOUNTER_SKOTIZO_8
ENCOUNTER_SKOTIZO_7:
	call RESET_KOUREND_CATACOMBS
	closemessage
	end

ENCOUNTER_SKOTIZO_4:
	fadescreenswapbuffers FADE_TO_BLACK
	removeitem ITEM_DARK_TOTEM, 1
	msgbox ENCOUNTER_SKOTIZO_Text_2
	closemessage
	setflag FLAG_TEMP_A
	removeobject 1
	fadescreenswapbuffers FADE_FROM_BLACK
	questmenu QUEST_MENU_CHECK_COMPLETE, QUEST_KOUREND_SLAYER
	compare VAR_RESULT, 0
	goto_if_eq ENCOUNTER_SKOTIZO_11
ENCOUNTER_SKOTIZO_10:
	call RESET_KOUREND_CATACOMBS
	closemessage
	end

ENCOUNTER_SKOTIZO_5:
	msgbox ENCOUNTER_SKOTIZO_Text_3
	closemessage
	setvar VAR_TEMP_E, 5
	goto ENCOUNTER_SKOTIZO_1

ENCOUNTER_SKOTIZO_6:
	msgbox ENCOUNTER_SKOTIZO_Text_4
	closemessage
	setvar VAR_TEMP_E, 5
	goto ENCOUNTER_SKOTIZO_1

ENCOUNTER_SKOTIZO_8:
	questmenu QUEST_MENU_COMPLETE_QUEST, QUEST_KOUREND_SLAYER
	goto ENCOUNTER_SKOTIZO_7

ENCOUNTER_SKOTIZO_11:
	questmenu QUEST_MENU_COMPLETE_QUEST, QUEST_KOUREND_SLAYER
	goto ENCOUNTER_SKOTIZO_10


RESET_KOUREND_CATACOMBS::
	clearflag FLAG_ITEM_REPEATABLE_ITEM_1
	clearflag FLAG_ITEM_REPEATABLE_ITEM_2
	clearflag FLAG_ITEM_REPEATABLE_ITEM_3
	clearflag FLAG_ITEM_REPEATABLE_ITEM_4
	clearflag FLAG_ITEM_REPEATABLE_ITEM_5
	clearflag FLAG_ITEM_REPEATABLE_ITEM_6
	clearflag FLAG_ITEM_REPEATABLE_ITEM_7
	clearflag FLAG_ITEM_REPEATABLE_ITEM_8
	clearflag FLAG_ITEM_REPEATABLE_ITEM_9
	clearflag FLAG_ITEM_REPEATABLE_ITEM_10
	clearflag FLAG_HIDDEN_ITEM_TEMP_1
	clearflag FLAG_HIDDEN_ITEM_TEMP_2
	clearflag FLAG_HIDDEN_ITEM_TEMP_3
	clearflag FLAG_HIDDEN_ITEM_TEMP_4
	clearflag FLAG_HIDDEN_ITEM_TEMP_5
	clearflag FLAG_HIDDEN_ITEM_TEMP_6
	clearflag FLAG_HIDDEN_ITEM_TEMP_7
	clearflag FLAG_HIDDEN_ITEM_TEMP_8
	clearflag FLAG_HIDDEN_ITEM_TEMP_9
	clearflag FLAG_HIDDEN_ITEM_TEMP_10
	clearflag FLAG_HIDDEN_ITEM_TEMP_11
	clearflag FLAG_HIDDEN_ITEM_TEMP_12
	clearflag FLAG_HIDDEN_ITEM_TEMP_13
	clearflag FLAG_HIDDEN_ITEM_TEMP_14
	clearflag FLAG_HIDDEN_ITEM_TEMP_15
	clearflag FLAG_HIDDEN_ITEM_TEMP_16
	clearflag FLAG_HIDDEN_ITEM_TEMP_17
	clearflag FLAG_HIDDEN_ITEM_TEMP_18
	clearflag FLAG_HIDDEN_ITEM_TEMP_19
	clearflag FLAG_HIDDEN_ITEM_TEMP_20
	return


ENCOUNTER_ABYSSAL_DEMON::
	lock
	faceplayer
	namebox ENCOUNTER_ABYSSAL_DEMON_Text_0
	playmoncry SPECIES_ABYSSAL_DEMON_FORM, 0
	msgbox ENCOUNTER_ABYSSAL_DEMON_Text_1
	waitmoncry
	hidenamebox
	closemessage
	delay 1
	specialvar VAR_RESULT, GetCurrentMap
	compare VAR_RESULT, MAP_ABYSSAL_REALM_1
	goto_if_eq ENCOUNTER_ABYSSAL_DEMON_2
	setwildbattle SPECIES_ABYSSAL_DEMON_FORM, 50, ITEM_NONE
ENCOUNTER_ABYSSAL_DEMON_1:
	dowildbattle
	switch VAR_RESULT
	case B_OUTCOME_WON, ENCOUNTER_ABYSSAL_DEMON_7
	case B_OUTCOME_CAUGHT, ENCOUNTER_ABYSSAL_DEMON_8
ENCOUNTER_ABYSSAL_DEMON_5:
	release
	end

ENCOUNTER_ABYSSAL_DEMON_2:
	setwildbattle SPECIES_ABYSSAL_DEMON_FORM, 25, ITEM_NONE
	goto ENCOUNTER_ABYSSAL_DEMON_1

ENCOUNTER_ABYSSAL_DEMON_7:
	fadescreenswapbuffers FADE_TO_BLACK
	removeobject VAR_LAST_TALKED
	fadescreenswapbuffers FADE_FROM_BLACK
	goto ENCOUNTER_ABYSSAL_DEMON_5

ENCOUNTER_ABYSSAL_DEMON_8:
	fadescreenswapbuffers FADE_TO_BLACK
	removeobject VAR_LAST_TALKED
	fadescreenswapbuffers FADE_FROM_BLACK
	goto ENCOUNTER_ABYSSAL_DEMON_5


ENCOUNTER_SLIME::
	lock
	faceplayer
	namebox ENCOUNTER_SLIME_Text_0
	playmoncry SPECIES_CAVE_SLIME, 0
	msgbox ENCOUNTER_SLIME_Text_1
	waitmoncry
	hidenamebox
	closemessage
	delay 1
	specialvar VAR_RESULT, GetCurrentMap
	compare VAR_RESULT, MAP_KOUREND_CATACOMBS_4
	goto_if_eq ENCOUNTER_SLIME_2
	compare VAR_RESULT, MAP_KOUREND_CATACOMBS_3
	goto_if_eq ENCOUNTER_SLIME_3
	compare VAR_RESULT, MAP_LUMBRIDGE_SWAMP_CAVES
	goto_if_eq ENCOUNTER_SLIME_4
	setwildbattle SPECIES_CAVE_SLIME, 20, ITEM_NONE
ENCOUNTER_SLIME_1:
	dowildbattle
	switch VAR_RESULT
	case B_OUTCOME_WON, ENCOUNTER_SLIME_11
	case B_OUTCOME_CAUGHT, ENCOUNTER_SLIME_12
ENCOUNTER_SLIME_9:
	release
	end

ENCOUNTER_SLIME_2:
	setwildbattle SPECIES_JELLY_WARPED_FORM, 50, ITEM_NONE
	goto ENCOUNTER_SLIME_1

ENCOUNTER_SLIME_3:
	setwildbattle SPECIES_JELLY_NORMAL_FORM, 50, ITEM_NONE
	goto ENCOUNTER_SLIME_1

ENCOUNTER_SLIME_4:
	random 10
	switch VAR_RESULT
	case 9, ENCOUNTER_SLIME_14
	setwildbattle SPECIES_CAVE_SLIME, 10, ITEM_NONE
	goto ENCOUNTER_SLIME_1

ENCOUNTER_SLIME_11:
	fadescreenswapbuffers FADE_TO_BLACK
	removeobject VAR_LAST_TALKED
	fadescreenswapbuffers FADE_FROM_BLACK
	goto ENCOUNTER_SLIME_9

ENCOUNTER_SLIME_12:
	fadescreenswapbuffers FADE_TO_BLACK
	removeobject VAR_LAST_TALKED
	fadescreenswapbuffers FADE_FROM_BLACK
	goto ENCOUNTER_SLIME_9

ENCOUNTER_SLIME_14:
	setwildbattle SPECIES_SLIME_LILGLOOP, 10, ITEM_NONE
	goto ENCOUNTER_SLIME_1


ENCOUNTER_ROCKCRAB::
	lock
	namebox ENCOUNTER_ROCKCRAB_Text_0
	playmoncry SPECIES_ROCK_CRAB_NORMAL_FORM, 0
	msgbox ENCOUNTER_ROCKCRAB_Text_1
	waitmoncry
	hidenamebox
	closemessage
	delay 1
	specialvar VAR_RESULT, GetCurrentMap
	compare VAR_RESULT, MAP_KOUREND_CATACOMBS_3
	goto_if_eq ENCOUNTER_ROCKCRAB_2
	compare VAR_RESULT, MAP_KOUREND_CATACOMBS_4
	goto_if_eq ENCOUNTER_ROCKCRAB_2
	compare VAR_RESULT, MAP_MUDSKIPPER_POINT
	goto_if_eq ENCOUNTER_ROCKCRAB_3
	compare VAR_RESULT, MAP_ROUTE11
	goto_if_eq ENCOUNTER_ROCKCRAB_3
	compare VAR_RESULT, MAP_ROUTE9
	goto_if_eq ENCOUNTER_ROCKCRAB_3
	setwildbattle SPECIES_ROCK_CRAB_NORMAL_FORM, 20, ITEM_NONE
ENCOUNTER_ROCKCRAB_1:
	dowildbattle
	switch VAR_RESULT
	case B_OUTCOME_WON, ENCOUNTER_ROCKCRAB_15
	case B_OUTCOME_CAUGHT, ENCOUNTER_ROCKCRAB_16
ENCOUNTER_ROCKCRAB_13:
	release
	end

ENCOUNTER_ROCKCRAB_2:
	setwildbattle SPECIES_ROCK_CRAB_GIANT_SAND_FORM, 50, ITEM_NONE
	goto ENCOUNTER_ROCKCRAB_1

ENCOUNTER_ROCKCRAB_3:
	random 2
	switch VAR_RESULT
	case 0, ENCOUNTER_ROCKCRAB_18
	case 1, ENCOUNTER_ROCKCRAB_19
	goto ENCOUNTER_ROCKCRAB_1

ENCOUNTER_ROCKCRAB_15:
	fadescreenswapbuffers FADE_TO_BLACK
	removeobject VAR_LAST_TALKED
	fadescreenswapbuffers FADE_FROM_BLACK
	goto ENCOUNTER_ROCKCRAB_13

ENCOUNTER_ROCKCRAB_16:
	fadescreenswapbuffers FADE_TO_BLACK
	removeobject VAR_LAST_TALKED
	fadescreenswapbuffers FADE_FROM_BLACK
	goto ENCOUNTER_ROCKCRAB_13

ENCOUNTER_ROCKCRAB_18:
	setwildbattle SPECIES_ROCK_CRAB_SAND_FORM, 15, ITEM_NONE
	goto ENCOUNTER_ROCKCRAB_1

ENCOUNTER_ROCKCRAB_19:
	setwildbattle SPECIES_CRAB_GRANITE_FORM, 15, ITEM_NONE
	goto ENCOUNTER_ROCKCRAB_1


ENCOUNTER_DRAGON_BLACK::
	lock
	namebox ENCOUNTER_DRAGON_BLACK_Text_0
	playmoncry SPECIES_DRAGON_BLACK_FORM, 0
	msgbox ENCOUNTER_DRAGON_BLACK_Text_1
	waitmoncry
	hidenamebox
	closemessage
	delay 1
	setwildbattle SPECIES_DRAGON_BLACK_FORM, 50, ITEM_NONE
	dowildbattle
	switch VAR_RESULT
	case B_OUTCOME_WON, ENCOUNTER_DRAGON_BLACK_3
	case B_OUTCOME_CAUGHT, ENCOUNTER_DRAGON_BLACK_4
ENCOUNTER_DRAGON_BLACK_1:
	release
	end

ENCOUNTER_DRAGON_BLACK_3:
	fadescreenswapbuffers FADE_TO_BLACK
	removeobject VAR_LAST_TALKED
	fadescreenswapbuffers FADE_FROM_BLACK
	goto ENCOUNTER_DRAGON_BLACK_1

ENCOUNTER_DRAGON_BLACK_4:
	fadescreenswapbuffers FADE_TO_BLACK
	removeobject VAR_LAST_TALKED
	fadescreenswapbuffers FADE_FROM_BLACK
	goto ENCOUNTER_DRAGON_BLACK_1


ENCOUNTER_DRAGON_RED::
	lock
	namebox ENCOUNTER_DRAGON_BLACK_Text_0
	playmoncry SPECIES_DRAGON_RED_FORM, 0
	msgbox ENCOUNTER_DRAGON_BLACK_Text_1
	waitmoncry
	hidenamebox
	closemessage
	delay 1
	setwildbattle SPECIES_DRAGON_RED_FORM, 50, ITEM_NONE
	dowildbattle
	switch VAR_RESULT
	case B_OUTCOME_WON, ENCOUNTER_DRAGON_RED_3
	case B_OUTCOME_CAUGHT, ENCOUNTER_DRAGON_RED_4
ENCOUNTER_DRAGON_RED_1:
	release
	end

ENCOUNTER_DRAGON_RED_3:
	fadescreenswapbuffers FADE_TO_BLACK
	removeobject VAR_LAST_TALKED
	fadescreenswapbuffers FADE_FROM_BLACK
	goto ENCOUNTER_DRAGON_RED_1

ENCOUNTER_DRAGON_RED_4:
	fadescreenswapbuffers FADE_TO_BLACK
	removeobject VAR_LAST_TALKED
	fadescreenswapbuffers FADE_FROM_BLACK
	goto ENCOUNTER_DRAGON_RED_1


ENCOUNTER_DRAGON_BLUE::
	lock
	namebox ENCOUNTER_DRAGON_BLACK_Text_0
	playmoncry SPECIES_DRAGON_BLUE_FORM, 0
	msgbox ENCOUNTER_DRAGON_BLACK_Text_1
	waitmoncry
	hidenamebox
	closemessage
	delay 1
	setwildbattle SPECIES_DRAGON_BLUE_FORM, 50, ITEM_NONE
	dowildbattle
	switch VAR_RESULT
	case B_OUTCOME_WON, ENCOUNTER_DRAGON_BLUE_3
	case B_OUTCOME_CAUGHT, ENCOUNTER_DRAGON_BLUE_4
ENCOUNTER_DRAGON_BLUE_1:
	release
	end

ENCOUNTER_DRAGON_BLUE_3:
	fadescreenswapbuffers FADE_TO_BLACK
	removeobject VAR_LAST_TALKED
	fadescreenswapbuffers FADE_FROM_BLACK
	goto ENCOUNTER_DRAGON_BLUE_1

ENCOUNTER_DRAGON_BLUE_4:
	fadescreenswapbuffers FADE_TO_BLACK
	removeobject VAR_LAST_TALKED
	fadescreenswapbuffers FADE_FROM_BLACK
	goto ENCOUNTER_DRAGON_BLUE_1


ENCOUNTER_DRAGON_GREEN::
	lock
	namebox ENCOUNTER_DRAGON_BLACK_Text_0
	playmoncry SPECIES_DRAGON_GREEN_FORM, 0
	msgbox ENCOUNTER_DRAGON_BLACK_Text_1
	waitmoncry
	hidenamebox
	closemessage
	delay 1
	setwildbattle SPECIES_DRAGON_GREEN_FORM, 50, ITEM_NONE
	dowildbattle
	switch VAR_RESULT
	case B_OUTCOME_WON, ENCOUNTER_DRAGON_GREEN_3
	case B_OUTCOME_CAUGHT, ENCOUNTER_DRAGON_GREEN_4
ENCOUNTER_DRAGON_GREEN_1:
	release
	end

ENCOUNTER_DRAGON_GREEN_3:
	fadescreenswapbuffers FADE_TO_BLACK
	removeobject VAR_LAST_TALKED
	fadescreenswapbuffers FADE_FROM_BLACK
	goto ENCOUNTER_DRAGON_GREEN_1

ENCOUNTER_DRAGON_GREEN_4:
	fadescreenswapbuffers FADE_TO_BLACK
	removeobject VAR_LAST_TALKED
	fadescreenswapbuffers FADE_FROM_BLACK
	goto ENCOUNTER_DRAGON_GREEN_1


ENCOUNTER_BASILISK::
	lock
	namebox ENCOUNTER_BASILISK_Text_0
	playmoncry SPECIES_BASILISK_KNIGHT_FORM, 0
	msgbox ENCOUNTER_BASILISK_Text_1
	waitmoncry
	hidenamebox
	closemessage
	delay 1
	setwildbattle SPECIES_BASILISK_KNIGHT_FORM, 50, ITEM_NONE
	dowildbattle
	switch VAR_RESULT
	case B_OUTCOME_WON, ENCOUNTER_BASILISK_3
	case B_OUTCOME_CAUGHT, ENCOUNTER_BASILISK_4
ENCOUNTER_BASILISK_1:
	release
	end

ENCOUNTER_BASILISK_3:
	fadescreenswapbuffers FADE_TO_BLACK
	removeobject VAR_LAST_TALKED
	fadescreenswapbuffers FADE_FROM_BLACK
	goto ENCOUNTER_BASILISK_1

ENCOUNTER_BASILISK_4:
	fadescreenswapbuffers FADE_TO_BLACK
	removeobject VAR_LAST_TALKED
	fadescreenswapbuffers FADE_FROM_BLACK
	goto ENCOUNTER_BASILISK_1


ENCOUNTER_GREATER_DEMON::
	lock
	faceplayer
	namebox ENCOUNTER_GREATER_DEMON_Text_0
	playmoncry SPECIES_DEMON_GREATER_TONGUE_FORM, 0
	msgbox ENCOUNTER_GREATER_DEMON_Text_1
	waitmoncry
	hidenamebox
	closemessage
	delay 1
	specialvar VAR_RESULT, GetCurrentMap
	compare VAR_RESULT, MAP_KOUREND_CATACOMBS_2
	goto_if_eq ENCOUNTER_GREATER_DEMON_2
	compare VAR_RESULT, MAP_KOUREND_CATACOMBS_3
	goto_if_eq ENCOUNTER_GREATER_DEMON_3
	compare VAR_RESULT, MAP_KOUREND_CATACOMBS_7
	goto_if_eq ENCOUNTER_GREATER_DEMON_4
	setwildbattle SPECIES_DEMON_GREATER_OSRS_FORM, 25, ITEM_NONE
ENCOUNTER_GREATER_DEMON_1:
	dowildbattle
	switch VAR_RESULT
	case B_OUTCOME_WON, ENCOUNTER_GREATER_DEMON_11
	case B_OUTCOME_CAUGHT, ENCOUNTER_GREATER_DEMON_12
ENCOUNTER_GREATER_DEMON_9:
	release
	end

ENCOUNTER_GREATER_DEMON_2:
	setwildbattle SPECIES_DEMON_GREATER_OSRS_FORM, 50, ITEM_NONE
	goto ENCOUNTER_GREATER_DEMON_1

ENCOUNTER_GREATER_DEMON_3:
	setwildbattle SPECIES_DEMON_GREATER_TONGUE_FORM, 50, ITEM_NONE
	goto ENCOUNTER_GREATER_DEMON_1

ENCOUNTER_GREATER_DEMON_4:
	setwildbattle SPECIES_DEMON_GREATER_BLACK_FORM, 50, ITEM_NONE
	goto ENCOUNTER_GREATER_DEMON_1

ENCOUNTER_GREATER_DEMON_11:
	fadescreenswapbuffers FADE_TO_BLACK
	removeobject VAR_LAST_TALKED
	fadescreenswapbuffers FADE_FROM_BLACK
	goto ENCOUNTER_GREATER_DEMON_9

ENCOUNTER_GREATER_DEMON_12:
	fadescreenswapbuffers FADE_TO_BLACK
	removeobject VAR_LAST_TALKED
	fadescreenswapbuffers FADE_FROM_BLACK
	goto ENCOUNTER_GREATER_DEMON_9


ENCOUNTER_MONKEY_QUEST::
	lock
	faceplayer
	namebox ENCOUNTER_MONKEY_QUEST_Text_0
	playmoncry SPECIES_MONKEY_NORMAL_FORM, 0
	msgbox ENCOUNTER_MONKEY_QUEST_Text_1
	waitmoncry
	hidenamebox
	closemessage
	delay 1
	msgbox ENCOUNTER_MONKEY_QUEST_Text_2
	closemessage
	setwildbattle SPECIES_MONKEY_NORMAL_FORM, 20, ITEM_BANANA
	dowildbattle
	switch VAR_RESULT
	case B_OUTCOME_WON, ENCOUNTER_MONKEY_QUEST_3
	case B_OUTCOME_CAUGHT, ENCOUNTER_MONKEY_QUEST_4
ENCOUNTER_MONKEY_QUEST_1:
	closemessage
	release
	end

ENCOUNTER_MONKEY_QUEST_3:
	fadescreenswapbuffers FADE_TO_BLACK
	removeobject VAR_LAST_TALKED
	fadescreenswapbuffers FADE_FROM_BLACK
	msgbox ENCOUNTER_MONKEY_QUEST_Text_3
	giveitem ITEM_BANANA, 5
	goto ENCOUNTER_MONKEY_QUEST_1

ENCOUNTER_MONKEY_QUEST_4:
	fadescreenswapbuffers FADE_TO_BLACK
	removeobject VAR_LAST_TALKED
	fadescreenswapbuffers FADE_FROM_BLACK
	msgbox ENCOUNTER_MONKEY_QUEST_Text_3
	giveitem ITEM_BANANA, 5
	goto ENCOUNTER_MONKEY_QUEST_1


ENCOUNTER_SNOW_IMP::
	lock
	faceplayer
	namebox ENCOUNTER_SNOW_IMP_Text_0
	playmoncry SPECIES_SNOW_IMP, 0
	msgbox ENCOUNTER_SNOW_IMP_Text_1
	waitmoncry
	hidenamebox
	closemessage
	delay 1
	specialvar VAR_RESULT, GetCurrentMap
	compare VAR_RESULT, MAP_WIZARDS_TOWER_DINING_HALL
	goto_if_eq ENCOUNTER_SNOW_IMP_2
	setwildbattle SPECIES_SNOW_IMP, 30, ITEM_NONE
ENCOUNTER_SNOW_IMP_1:
	dowildbattle
	switch VAR_RESULT
	case B_OUTCOME_WON, ENCOUNTER_SNOW_IMP_7
	case B_OUTCOME_CAUGHT, ENCOUNTER_SNOW_IMP_8
ENCOUNTER_SNOW_IMP_5:
	release
	end

ENCOUNTER_SNOW_IMP_2:
	setwildbattle SPECIES_SNOW_IMP, 5, ITEM_NONE
	goto ENCOUNTER_SNOW_IMP_1

ENCOUNTER_SNOW_IMP_7:
	fadescreenswapbuffers FADE_TO_BLACK
	removeobject VAR_LAST_TALKED
	fadescreenswapbuffers FADE_FROM_BLACK
	goto ENCOUNTER_SNOW_IMP_5

ENCOUNTER_SNOW_IMP_8:
	fadescreenswapbuffers FADE_TO_BLACK
	specialvar VAR_RESULT, GetCurrentMap
	compare VAR_RESULT, MAP_WIZARDS_TOWER_DINING_HALL
	goto_if_eq ENCOUNTER_SNOW_IMP_10
ENCOUNTER_SNOW_IMP_9:
	removeobject VAR_LAST_TALKED
	fadescreenswapbuffers FADE_FROM_BLACK
	goto ENCOUNTER_SNOW_IMP_5

ENCOUNTER_SNOW_IMP_10:
	setflag FLAG_CAPTURED_SNOWIMP
	goto ENCOUNTER_SNOW_IMP_9


ENCOUNTER_UNICORN_BARB::
	lock
	faceplayer
	namebox ENCOUNTER_UNICORN_BARB_Text_0
	playmoncry SPECIES_UNICORN_WHITE_FORM, 0
	msgbox ENCOUNTER_UNICORN_BARB_Text_1
	waitmoncry
	hidenamebox
	closemessage
	delay 1
	setwildbattle SPECIES_UNICORN_WHITE_FORM, 30, ITEM_NONE
	dowildbattle
	switch VAR_RESULT
	case B_OUTCOME_WON, ENCOUNTER_UNICORN_BARB_3
	case B_OUTCOME_CAUGHT, ENCOUNTER_UNICORN_BARB_4
ENCOUNTER_UNICORN_BARB_1:
	release
	end

ENCOUNTER_UNICORN_BARB_3:
	fadescreenswapbuffers FADE_TO_BLACK
	removeobject VAR_LAST_TALKED
	fadescreenswapbuffers FADE_FROM_BLACK
	goto ENCOUNTER_UNICORN_BARB_1

ENCOUNTER_UNICORN_BARB_4:
	fadescreenswapbuffers FADE_TO_BLACK
	removeobject VAR_LAST_TALKED
	fadescreenswapbuffers FADE_FROM_BLACK
	goto ENCOUNTER_UNICORN_BARB_1


ENCOUNTER_CHAIR::
	lock
	faceplayer
	namebox ENCOUNTER_CHAIR_Text_0
	playmoncry SPECIES_ANICHAIR, 0
	msgbox ENCOUNTER_CHAIR_Text_1
	waitmoncry
	hidenamebox
	closemessage
	delay 1
	setwildbattle SPECIES_ANICHAIR, 10, ITEM_NONE
	dowildbattle
	switch VAR_RESULT
	case B_OUTCOME_WON, ENCOUNTER_CHAIR_3
	case B_OUTCOME_CAUGHT, ENCOUNTER_CHAIR_4
ENCOUNTER_CHAIR_1:
	release
	end

ENCOUNTER_CHAIR_3:
	fadescreenswapbuffers FADE_TO_BLACK
	removeobject VAR_LAST_TALKED
	fadescreenswapbuffers FADE_FROM_BLACK
	goto ENCOUNTER_CHAIR_1

ENCOUNTER_CHAIR_4:
	fadescreenswapbuffers FADE_TO_BLACK
	removeobject VAR_LAST_TALKED
	fadescreenswapbuffers FADE_FROM_BLACK
	goto ENCOUNTER_CHAIR_1


ENCOUNTER_GHOST::
	lock
	faceplayer
	namebox ENCOUNTER_CHAIR_Text_0
	playmoncry SPECIES_DOBBIN, 0
	msgbox ENCOUNTER_GHOST_Text_0
	waitmoncry
	hidenamebox
	closemessage
	delay 1
	random 8
	switch VAR_RESULT
	case 0, ENCOUNTER_GHOST_3
	case 1, ENCOUNTER_GHOST_3
	case 2, ENCOUNTER_GHOST_4
	case 3, ENCOUNTER_GHOST_4
	case 4, ENCOUNTER_GHOST_4
	case 5, ENCOUNTER_GHOST_5
	case 6, ENCOUNTER_GHOST_5
	case 7, ENCOUNTER_GHOST_6
	setwildbattle SPECIES_DOBBIN, 10, ITEM_NONE
ENCOUNTER_GHOST_1:
	dowildbattle
	switch VAR_RESULT
	case B_OUTCOME_WON, ENCOUNTER_GHOST_10
	case B_OUTCOME_CAUGHT, ENCOUNTER_GHOST_11
ENCOUNTER_GHOST_8:
	release
	end

ENCOUNTER_GHOST_3:
	setwildbattle SPECIES_DOBBIN, 10, ITEM_NONE
	goto ENCOUNTER_GHOST_1

ENCOUNTER_GHOST_4:
	setwildbattle SPECIES_TOY_MOUSE, 10, ITEM_NONE
	goto ENCOUNTER_GHOST_1

ENCOUNTER_GHOST_5:
	setwildbattle SPECIES_ORIGAMI_BALLOON, 10, ITEM_NONE
	goto ENCOUNTER_GHOST_1

ENCOUNTER_GHOST_6:
	setwildbattle SPECIES_ANIMOUR, 10, ITEM_NONE
	goto ENCOUNTER_GHOST_1

ENCOUNTER_GHOST_10:
	fadescreenswapbuffers FADE_TO_BLACK
	removeobject VAR_LAST_TALKED
	fadescreenswapbuffers FADE_FROM_BLACK
	goto ENCOUNTER_GHOST_8

ENCOUNTER_GHOST_11:
	fadescreenswapbuffers FADE_TO_BLACK
	removeobject VAR_LAST_TALKED
	fadescreenswapbuffers FADE_FROM_BLACK
	goto ENCOUNTER_GHOST_8


ENCOUNTER_RAT::
	lock
	faceplayer
	namebox ENCOUNTER_RAT_Text_0
	playmoncry SPECIES_GIANT_RAT_NORMAL_FORM, 0
	msgbox ENCOUNTER_RAT_Text_1
	waitmoncry
	hidenamebox
	closemessage
	delay 1
	specialvar VAR_RESULT, GetCurrentMap
	compare VAR_RESULT, MAP_LUMBRIDGE
	goto_if_eq ENCOUNTER_RAT_2
	compare VAR_RESULT, MAP_LUMBRIDGE_SWAMP
	goto_if_eq ENCOUNTER_RAT_2
	compare VAR_RESULT, MAP_LUMBRIDGE_FOREST
	goto_if_eq ENCOUNTER_RAT_2
	setwildbattle SPECIES_GIANT_RAT_NORMAL_FORM, 30, ITEM_NONE
ENCOUNTER_RAT_1:
	dowildbattle
	switch VAR_RESULT
	case B_OUTCOME_WON, ENCOUNTER_RAT_11
	case B_OUTCOME_CAUGHT, ENCOUNTER_RAT_12
ENCOUNTER_RAT_9:
	release
	end

ENCOUNTER_RAT_2:
	random 20
	switch VAR_RESULT
	case 7, ENCOUNTER_RAT_14
	setwildbattle SPECIES_RAT_NORMAL_FORM, 5, ITEM_NONE
	goto ENCOUNTER_RAT_1

ENCOUNTER_RAT_11:
	fadescreenswapbuffers FADE_TO_BLACK
	removeobject VAR_LAST_TALKED
	fadescreenswapbuffers FADE_FROM_BLACK
	goto ENCOUNTER_RAT_9

ENCOUNTER_RAT_12:
	fadescreenswapbuffers FADE_TO_BLACK
	removeobject VAR_LAST_TALKED
	fadescreenswapbuffers FADE_FROM_BLACK
	goto ENCOUNTER_RAT_9

ENCOUNTER_RAT_14:
	setwildbattle SPECIES_GIANT_RAT_NORMAL_FORM, 8, ITEM_NONE
	goto ENCOUNTER_RAT_1


ENCOUNTER_SHEEP::
	lock
	faceplayer
	namebox ENCOUNTER_SHEEP_Text_0
	playmoncry SPECIES_SHEEP_WHITE_FORM, 0
	msgbox ENCOUNTER_SHEEP_Text_1
	waitmoncry
	hidenamebox
	closemessage
	delay 1
	specialvar VAR_RESULT, GetCurrentMap
	compare VAR_RESULT, MAP_ROUTE1
	goto_if_eq ENCOUNTER_SHEEP_2
	compare VAR_RESULT, MAP_MILL_LANE_MILL
	goto_if_eq ENCOUNTER_SHEEP_2
	compare VAR_RESULT, MAP_LUMBRIDGE_FOREST
	goto_if_eq ENCOUNTER_SHEEP_2
	random 1
	switch VAR_RESULT
	case 0, ENCOUNTER_SHEEP_18
	case 1, ENCOUNTER_SHEEP_19
ENCOUNTER_SHEEP_1:
	dowildbattle
	switch VAR_RESULT
	case B_OUTCOME_WON, ENCOUNTER_SHEEP_11
	case B_OUTCOME_CAUGHT, ENCOUNTER_SHEEP_12
ENCOUNTER_SHEEP_9:
	release
	end

ENCOUNTER_SHEEP_2:
	random 20
	switch VAR_RESULT
	case 5, ENCOUNTER_SHEEP_14
	case 7, ENCOUNTER_SHEEP_15
	setwildbattle SPECIES_LAMB, 5, ITEM_NONE
	goto ENCOUNTER_SHEEP_1

ENCOUNTER_SHEEP_11:
	fadescreenswapbuffers FADE_TO_BLACK
	removeobject VAR_LAST_TALKED
	fadescreenswapbuffers FADE_FROM_BLACK
	goto ENCOUNTER_SHEEP_9

ENCOUNTER_SHEEP_12:
	fadescreenswapbuffers FADE_TO_BLACK
	removeobject VAR_LAST_TALKED
	fadescreenswapbuffers FADE_FROM_BLACK
	goto ENCOUNTER_SHEEP_9

ENCOUNTER_SHEEP_14:
	setwildbattle SPECIES_SHEEP_WHITE_FORM, 8, ITEM_NONE
	goto ENCOUNTER_SHEEP_1

ENCOUNTER_SHEEP_15:
	setwildbattle SPECIES_RAM_FLUFFY_FORM, 8, ITEM_NONE
	goto ENCOUNTER_SHEEP_1

ENCOUNTER_SHEEP_18:
	setwildbattle SPECIES_SHEEP_WHITE_FORM, 10, ITEM_NONE
	goto ENCOUNTER_SHEEP_1

ENCOUNTER_SHEEP_19:
	setwildbattle SPECIES_RAM_FLUFFY_FORM, 10, ITEM_NONE
	goto ENCOUNTER_SHEEP_1


ENCOUNTER_CHICKEN::
	lock
	faceplayer
	namebox ENCOUNTER_CHICKEN_Text_0
	playmoncry SPECIES_CHICKEN_NORMAL_FORM, 0
	msgbox ENCOUNTER_CHICKEN_Text_1
	waitmoncry
	hidenamebox
	closemessage
	delay 1
	specialvar VAR_RESULT, GetCurrentMap
	compare VAR_RESULT, MAP_ROUTE1
	goto_if_eq ENCOUNTER_CHICKEN_2
	compare VAR_RESULT, MAP_ROUTE12
	goto_if_eq ENCOUNTER_CHICKEN_2
	random 1
	switch VAR_RESULT
	case 0, ENCOUNTER_CHICKEN_16
	case 1, ENCOUNTER_CHICKEN_17
ENCOUNTER_CHICKEN_1:
	dowildbattle
	switch VAR_RESULT
	case B_OUTCOME_WON, ENCOUNTER_CHICKEN_9
	case B_OUTCOME_CAUGHT, ENCOUNTER_CHICKEN_10
ENCOUNTER_CHICKEN_7:
	release
	end

ENCOUNTER_CHICKEN_2:
	random 20
	switch VAR_RESULT
	case 5, ENCOUNTER_CHICKEN_12
	case 7, ENCOUNTER_CHICKEN_13
	setwildbattle SPECIES_CHICK, 5, ITEM_NONE
	goto ENCOUNTER_CHICKEN_1

ENCOUNTER_CHICKEN_9:
	fadescreenswapbuffers FADE_TO_BLACK
	removeobject VAR_LAST_TALKED
	fadescreenswapbuffers FADE_FROM_BLACK
	goto ENCOUNTER_CHICKEN_7

ENCOUNTER_CHICKEN_10:
	fadescreenswapbuffers FADE_TO_BLACK
	removeobject VAR_LAST_TALKED
	fadescreenswapbuffers FADE_FROM_BLACK
	goto ENCOUNTER_CHICKEN_7

ENCOUNTER_CHICKEN_12:
	setwildbattle SPECIES_CHICKEN_NORMAL_FORM, 8, ITEM_NONE
	goto ENCOUNTER_CHICKEN_1

ENCOUNTER_CHICKEN_13:
	setwildbattle SPECIES_CHICKEN_NORMAL_FORM, 8, ITEM_NONE
	goto ENCOUNTER_CHICKEN_1

ENCOUNTER_CHICKEN_16:
	setwildbattle SPECIES_CHICKEN_NORMAL_FORM, 10, ITEM_NONE
	goto ENCOUNTER_CHICKEN_1

ENCOUNTER_CHICKEN_17:
	setwildbattle SPECIES_CHICKEN_NORMAL_FORM, 10, ITEM_NONE
	goto ENCOUNTER_CHICKEN_1


ENCOUNTER_COW::
	lock
	faceplayer
	namebox ENCOUNTER_COW_Text_0
	playmoncry SPECIES_COW, 0
	msgbox ENCOUNTER_COW_Text_1
	waitmoncry
	hidenamebox
	closemessage
	delay 1
	goto_if_set FLAG_BADGE01_GET, ENCOUNTER_COW_2
	random 13
	switch VAR_RESULT
	case 0, ENCOUNTER_COW_11
	case 1, ENCOUNTER_COW_11
	case 2, ENCOUNTER_COW_11
	case 3, ENCOUNTER_COW_12
	case 6, ENCOUNTER_COW_13
	case 7, ENCOUNTER_COW_13
	case 9, ENCOUNTER_COW_14
	setwildbattle SPECIES_CALF, 5, ITEM_NONE
ENCOUNTER_COW_1:
	dowildbattle
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq ENCOUNTER_COW_6
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq ENCOUNTER_COW_6
ENCOUNTER_COW_5:
	release
	end

ENCOUNTER_COW_2:
	setwildbattle SPECIES_COW, 10, ITEM_NONE
	goto ENCOUNTER_COW_1

ENCOUNTER_COW_6:
	fadescreenswapbuffers FADE_TO_BLACK
	removeobject VAR_LAST_TALKED
	fadescreenswapbuffers FADE_FROM_BLACK
	goto ENCOUNTER_COW_5

ENCOUNTER_COW_11:
	setwildbattle SPECIES_CALF, 8, ITEM_NONE
	goto ENCOUNTER_COW_1

ENCOUNTER_COW_12:
	setwildbattle SPECIES_COW, 5, ITEM_NONE
	goto ENCOUNTER_COW_1

ENCOUNTER_COW_13:
	setwildbattle SPECIES_CALF, 10, ITEM_NONE
	goto ENCOUNTER_COW_1

ENCOUNTER_COW_14:
	setwildbattle SPECIES_COW, 10, ITEM_NONE
	goto ENCOUNTER_COW_1


SKOTIZO_TRIGGER_Text_0:
	.string "The Dark Totem in your backpack starts\n"
	.string "to react to the crystal.\p"
	.string "Would you like to use it?$"

SKOTIZO_TRIGGER_Text_1:
	.string "The Totem and the crystal begin to\n"
	.string "shake.$"

SKOTIZO_TRIGGER_Text_2:
	.string "The crystal shatters and reveals a\n"
	.string "giant monster!$"

ENCOUNTER_SKOTIZO_Text_0:
	.string "Skotizo$"

ENCOUNTER_SKOTIZO_Text_1:
	.string "ROOOARR!$"

ENCOUNTER_SKOTIZO_Text_2:
	.string "You feel the catacombs shake and\n"
	.string "tremble as the Dark Totem shatters\l"
	.string "into pieces.\p"
	.string "The air feels renewed.$"

ENCOUNTER_SKOTIZO_Text_3:
	.string "Skotizo just stands there staring at\n"
	.string "you menacingly.$"

ENCOUNTER_SKOTIZO_Text_4:
	.string "Skotizo is in disbelief you just\n"
	.string "teleported away from battle.$"

ENCOUNTER_ABYSSAL_DEMON_Text_0:
	.string "Abyssal Demon$"

ENCOUNTER_ABYSSAL_DEMON_Text_1:
	.string "WIZZZLE!$"

ENCOUNTER_SLIME_Text_0:
	.string "Slime$"

ENCOUNTER_SLIME_Text_1:
	.string "GLOOOP! GOOP!$"

ENCOUNTER_ROCKCRAB_Text_0:
	.string "Rock Crab$"

ENCOUNTER_ROCKCRAB_Text_1:
	.string "SNIP SNIP!$"

ENCOUNTER_DRAGON_BLACK_Text_0:
	.string "Dragon$"

ENCOUNTER_DRAGON_BLACK_Text_1:
	.string "RAWR!$"

ENCOUNTER_BASILISK_Text_0:
	.string "Basilisk$"

ENCOUNTER_BASILISK_Text_1:
	.string "KYARROOW!$"

ENCOUNTER_GREATER_DEMON_Text_0:
	.string "Greater Demon$"

ENCOUNTER_GREATER_DEMON_Text_1:
	.string "RAOUGH!$"

ENCOUNTER_MONKEY_QUEST_Text_0:
	.string "Monkey$"

ENCOUNTER_MONKEY_QUEST_Text_1:
	.string "EEEKK OOK AAAK!!$"

ENCOUNTER_MONKEY_QUEST_Text_2:
	.string "The monkey attacks!$"

ENCOUNTER_MONKEY_QUEST_Text_3:
	.string "The monkey dropped some bananas.$"

ENCOUNTER_SNOW_IMP_Text_0:
	.string "Snow Imp$"

ENCOUNTER_SNOW_IMP_Text_1:
	.string "Sneez kek Kek!$"

ENCOUNTER_UNICORN_BARB_Text_0:
	.string "Unicorn$"

ENCOUNTER_UNICORN_BARB_Text_1:
	.string "NeEeehHHaAyY!$"

ENCOUNTER_CHAIR_Text_0:
	.string "???$"

ENCOUNTER_CHAIR_Text_1:
	.string "The chair attacks you!$"

ENCOUNTER_GHOST_Text_0:
	.string "Something attacks you!$"

ENCOUNTER_RAT_Text_0:
	.string "Rat$"

ENCOUNTER_RAT_Text_1:
	.string "Squeek!$"

ENCOUNTER_SHEEP_Text_0:
	.string "Sheep$"

ENCOUNTER_SHEEP_Text_1:
	.string "Baaa!$"

ENCOUNTER_CHICKEN_Text_0:
	.string "Chicken$"

ENCOUNTER_CHICKEN_Text_1:
	.string "Bawk!$"

ENCOUNTER_COW_Text_0:
	.string "Cow$"

ENCOUNTER_COW_Text_1:
	.string "MOOOOOOOO!!$"
