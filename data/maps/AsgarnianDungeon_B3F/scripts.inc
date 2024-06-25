AsgarnianDungeon_B3F_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, AsgarnianDungeon_B3F_MapScripts_MAP_SCRIPT_ON_LOAD
	map_script MAP_SCRIPT_ON_TRANSITION, AsgarnianDungeon_B3F_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

AsgarnianDungeon_B3F_MapScripts_MAP_SCRIPT_ON_LOAD:
	call AsgarnianDungeon_B3F_METATILES
	return

AsgarnianDungeon_B3F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	call AsgarnianDungeon_B3F_STATE
	return


AsgarnianDungeon_B3F_STATE::
	switch VAR_DUNGEONEERING_DOOR_AsgarnianDungeon_STATE
	case 0, AsgarnianDungeon_B3F_STATE_3
	case 5, AsgarnianDungeon_B3F_STATE_4
	case 10, AsgarnianDungeon_B3F_STATE_4
	case 15, AsgarnianDungeon_B3F_STATE_5
AsgarnianDungeon_B3F_STATE_1:
	return

AsgarnianDungeon_B3F_STATE_3:
	clearflag FLAG_TEMP_D
	addobject 14
	goto AsgarnianDungeon_B3F_STATE_1

AsgarnianDungeon_B3F_STATE_4:
	clearflag FLAG_TEMP_D
	addobject 14
	setmetatile 12, 13, 919, 1
	setmetatile 20, 6, 919, 1
	setmetatile 27, 7, 919, 1
	setmetatile 17, 21, 919, 1
	special DrawWholeMapView
	goto AsgarnianDungeon_B3F_STATE_1

AsgarnianDungeon_B3F_STATE_5:
	removeobject 14
	setflag FLAG_TEMP_D
	goto AsgarnianDungeon_B3F_STATE_1


AsgarnianDungeon_B3F_METATILES::
	switch VAR_DUNGEONEERING_DOOR_AsgarnianDungeon_STATE
	case 0, AsgarnianDungeon_B3F_METATILES_2
	case 5, AsgarnianDungeon_B3F_METATILES_3
	case 10, AsgarnianDungeon_B3F_METATILES_3
	case 15, AsgarnianDungeon_B3F_METATILES_4
	return

AsgarnianDungeon_B3F_METATILES_2:
	return

AsgarnianDungeon_B3F_METATILES_3:
	setmetatile 12, 13, 919, 1
	setmetatile 20, 6, 919, 1
	setmetatile 27, 7, 919, 1
	setmetatile 17, 21, 919, 1
	special DrawWholeMapView
	return

AsgarnianDungeon_B3F_METATILES_4:
	setmetatile 26, 4, 910, 0
	special DrawWholeMapView
	return


DUNGEONEERING_DOOR_AsgarnianDungeon_B3F_KEYS::
	compare VAR_DUNGEONEERING_DOOR_AsgarnianDungeon_STATE, 5
	goto_if_eq DUNGEONEERING_DOOR_AsgarnianDungeon_B3F_KEYS_2
DUNGEONEERING_DOOR_AsgarnianDungeon_B3F_KEYS_1:
	end

DUNGEONEERING_DOOR_AsgarnianDungeon_B3F_KEYS_2:
	setvar VAR_DUNGEONEERING_DOOR_AsgarnianDungeon_STATE, 10
	playfanfare MUS_OBTAIN_ITEM
	msgbox DUNGEONEERING_DOOR_AsgarnianDungeon_B3F_KEYS_Text_0
	waitfanfare
	closemessage
	setmetatile 12, 13, 893, 1
	setmetatile 20, 6, 893, 1
	setmetatile 27, 7, 893, 1
	setmetatile 17, 21, 893, 1
	special DrawWholeMapView
	goto DUNGEONEERING_DOOR_AsgarnianDungeon_B3F_KEYS_1


DUNGEONEERING_DOOR_AsgarnianDungeon_B3F_FAKE_KEYS::
	compare VAR_DUNGEONEERING_DOOR_AsgarnianDungeon_STATE, 5
	goto_if_eq DUNGEONEERING_DOOR_AsgarnianDungeon_B3F_FAKE_KEYS_1
	return

DUNGEONEERING_DOOR_AsgarnianDungeon_B3F_FAKE_KEYS_1:
	msgbox DUNGEONEERING_DOOR_AsgarnianDungeon_B3F_FAKE_KEYS_Text_0
	closemessage
	return


DUNGEONEERING_DOOR_AsgarnianDungeon_B3F::
	compare VAR_DUNGEONEERING_DOOR_AsgarnianDungeon_STATE, 15
	goto_if_ne DUNGEONEERING_DOOR_AsgarnianDungeon_B3F_2
	msgbox DUNGEONEERING_DOOR_AsgarnianDungeon_B3F_Text_5
	closemessage
DUNGEONEERING_DOOR_AsgarnianDungeon_B3F_1:
	release
	end

DUNGEONEERING_DOOR_AsgarnianDungeon_B3F_2:
	msgbox DUNGEONEERING_DOOR_AsgarnianDungeon_B3F_Text_0, MSGBOX_YESNO
	closemessage
	compare VAR_RESULT, 0
	goto_if_ne DUNGEONEERING_DOOR_AsgarnianDungeon_B3F_5
	goto DUNGEONEERING_DOOR_AsgarnianDungeon_B3F_1

DUNGEONEERING_DOOR_AsgarnianDungeon_B3F_5:
	compare VAR_DUNGEONEERING_DOOR_AsgarnianDungeon_STATE, 10
	goto_if_eq DUNGEONEERING_DOOR_AsgarnianDungeon_B3F_7
	playse SE_FAILURE
	waitse
	delay 30
	msgbox DUNGEONEERING_DOOR_AsgarnianDungeon_B3F_Text_4
	closemessage
	goto DUNGEONEERING_DOOR_AsgarnianDungeon_B3F_1

DUNGEONEERING_DOOR_AsgarnianDungeon_B3F_7:
	playse SE_SWITCH
	waitse
	delay 30
	setmetatile 26, 4, 910, 0
	special DrawWholeMapView
	playse SE_ICE_BREAK
	msgbox DUNGEONEERING_DOOR_AsgarnianDungeon_B3F_Text_1
	closemessage
	applymovement 14, Movement_InteractFACERIGHT
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, MOVEMENT_FACE_LEFT
	waitmovement 0
	namebox DUNGEONEERING_DOOR_AsgarnianDungeon_B3F_Text_2
	msgbox DUNGEONEERING_DOOR_AsgarnianDungeon_B3F_Text_3
	closemessage
	hidenamebox
	applymovement OBJ_EVENT_ID_PLAYER, Movement_ASGDUNGEON_3
	applymovement 14, Movement_ASGDUNGEON_4
	playse SE_DOOR
	waitmovement 0
	removeobject 14
	setflag FLAG_TEMP_D
	setvar VAR_DUNGEONEERING_DOOR_AsgarnianDungeon_STATE, 15
	goto DUNGEONEERING_DOOR_AsgarnianDungeon_B3F_1


TRIGGER_DUNGEONEERING_DOOR_AsgarnianDungeon_B3F::
	lock
	call AsgarnianDungeon_B3F_STATE
	applymovement 14, Movement_ASGDUNGEON_1
	waitmovement 0
	namebox DUNGEONEERING_DOOR_AsgarnianDungeon_B3F_Text_2
	msgbox TRIGGER_DUNGEONEERING_DOOR_AsgarnianDungeon_B3F_Text_0
	closemessage
	hidenamebox
	applymovement 14, Movement_ASGDUNGEON_2
	waitmovement 0
	setvar VAR_DUNGEONEERING_DOOR_AsgarnianDungeon_STATE, 5
	call AsgarnianDungeon_B3F_STATE
	release
	end


Movement_ASGDUNGEON_1:
	walk_down
	walk_down
	walk_left
	step_end

Movement_ASGDUNGEON_2:
	walk_right
	walk_up
	walk_up
	face_down
	step_end

Movement_ASGDUNGEON_3:
	lock_facing_direction
	walk_down
	unlock_facing_direction
	step_end

Movement_ASGDUNGEON_4:
	walk_right
	walk_up
	step_end

DUNGEONEERING_DOOR_AsgarnianDungeon_B3F_NPC::
	faceplayer
	namebox DUNGEONEERING_DOOR_AsgarnianDungeon_B3F_Text_2
	compare VAR_DUNGEONEERING_DOOR_AsgarnianDungeon_STATE, 10
	goto_if_eq DUNGEONEERING_DOOR_AsgarnianDungeon_B3F_NPC_2
	msgbox DUNGEONEERING_DOOR_AsgarnianDungeon_B3F_NPC_Text_1
DUNGEONEERING_DOOR_AsgarnianDungeon_B3F_NPC_1:
	closemessage
	hidenamebox
	release
	end

DUNGEONEERING_DOOR_AsgarnianDungeon_B3F_NPC_2:
	msgbox DUNGEONEERING_DOOR_AsgarnianDungeon_B3F_NPC_Text_0
	goto DUNGEONEERING_DOOR_AsgarnianDungeon_B3F_NPC_1


TRIGGER_WISEOLDMAN_RIVAL_2::
	lock
	playse SE_PIN
	applymovement 1, movement_wom_asgDung_0
	waitmovement 0
	delay 60
	applymovement 1, MOVEMENT_WALK_DOWN
	waitmovement 0
	playbgm MUS_ENCOUNTER_BRENDAN, 1
	waitmovement 0
	namebox TRIGGER_WISEOLDMAN_RIVAL_2_Text_0
	msgbox TRIGGER_WISEOLDMAN_RIVAL_2_Text_1
	hidenamebox
	closemessage
	trainerbattle_no_intro TRAINER_RIVAL_WISE_OLD_MAN_2, TRIGGER_WISEOLDMAN_RIVAL_2_Text_2
	namebox TRIGGER_WISEOLDMAN_RIVAL_2_Text_0
	msgbox TRIGGER_WISEOLDMAN_RIVAL_2_Text_3
	hidenamebox
	closemessage
	fadescreen FADE_TO_BLACK
	savebgm MUS_DUMMY
	fadedefaultbgm
	removeobject 1
	setflag FLAG_TEMP_1F
	setvar VAR_WISE_OLD_MAN_RIVAL, 15
	fadescreen FADE_FROM_BLACK
	release
	end


movement_wom_asgDung_0:
	face_down
	emote_exclamation_mark
	delay_16
	step_end

DUNGEONEERING_DOOR_AsgarnianDungeon_B3F_KEYS_Text_0:
	.string "{PLAYER} found the DUNGEON KEY.$"

DUNGEONEERING_DOOR_AsgarnianDungeon_B3F_FAKE_KEYS_Text_0:
	.string "You search the rubble…\p"
	.string "You find nothing except some very\n"
	.string "reflective ice.$"

DUNGEONEERING_DOOR_AsgarnianDungeon_B3F_Text_0:
	.string "It appears to be a mysterious door.\p"
	.string "Would you like to try and pry it open?$"

DUNGEONEERING_DOOR_AsgarnianDungeon_B3F_Text_1:
	.string "The door opens.$"

DUNGEONEERING_DOOR_AsgarnianDungeon_B3F_Text_2:
	.string "???$"

DUNGEONEERING_DOOR_AsgarnianDungeon_B3F_Text_3:
	.string "Hey thanks, that was extremely helpful\n"
	.string "of you.$"

DUNGEONEERING_DOOR_AsgarnianDungeon_B3F_Text_4:
	.string "The door refuses to open.$"

DUNGEONEERING_DOOR_AsgarnianDungeon_B3F_Text_5:
	.string "The door is already open.$"

TRIGGER_DUNGEONEERING_DOOR_AsgarnianDungeon_B3F_Text_0:
	.string "Hey you…{PAUSE 15} have you seen my keys?\p"
	.string "I dropped them around here somewhere.\p"
	.string "If you find them can you help me open\n"
	.string "this door.$"

DUNGEONEERING_DOOR_AsgarnianDungeon_B3F_NPC_Text_0:
	.string "You found my keys!\p"
	.string "Oh, but my poor hands now have\n"
	.string "frostbite.\p"
	.string "Could you open the door for me?$"

DUNGEONEERING_DOOR_AsgarnianDungeon_B3F_NPC_Text_1:
	.string "Have you seen my keys?\n"
	.string "I dropped them somewhere around here.$"

TRIGGER_WISEOLDMAN_RIVAL_2_Text_0:
	.string "Wise Old Man$"

TRIGGER_WISEOLDMAN_RIVAL_2_Text_1:
	.string "Aah, so you decided to humour this old\n"
	.string "man after all.\p"
	.string "This place makes for a fine setpiece\n"
	.string "doesn't it?\p"
	.string "Really makes you tingle for a battle.\p"
	.string "You have come this far, it is a bit late\n"
	.string "to turn back now.$"

TRIGGER_WISEOLDMAN_RIVAL_2_Text_2:
	.string "You are looking more promising by the\n"
	.string "minute.$"

TRIGGER_WISEOLDMAN_RIVAL_2_Text_3:
	.string "This really is becoming a habit at this\n"
	.string "point huh?\p"
	.string "You are growing stronger every battle.\p"
	.string "By the way, have you seen Melzar the\n"
	.string "Mad at Rimmington?\p"
	.string "A strong trainer like you could probably\n"
	.string "learn a thing or two from that place.\p"
	.string "I hope to see you again in the future,\n"
	.string "it has been fun.$"
