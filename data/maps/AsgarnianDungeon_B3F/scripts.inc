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
	case 10, AsgarnianDungeon_B3F_STATE_5
	case 15, AsgarnianDungeon_B3F_STATE_6
AsgarnianDungeon_B3F_STATE_1:
	return

AsgarnianDungeon_B3F_STATE_3:
	clearflag FLAG_TEMP_D
	addobject 14
	goto AsgarnianDungeon_B3F_STATE_1

AsgarnianDungeon_B3F_STATE_4:
	clearflag FLAG_TEMP_D
	addobject 14
	setmetatile 12, 13, METATILE_Lumbridge_Swamp_Caves_ICE_ROCKS_SPAKRLE, 1
	setmetatile 20, 6, METATILE_Lumbridge_Swamp_Caves_ICE_ROCKS_SPAKRLE, 1
	setmetatile 27, 7, METATILE_Lumbridge_Swamp_Caves_ICE_ROCKS_SPAKRLE, 1
	setmetatile 17, 21, METATILE_Lumbridge_Swamp_Caves_ICE_ROCKS_SPAKRLE, 1
	special DrawWholeMapView
	goto AsgarnianDungeon_B3F_STATE_1

AsgarnianDungeon_B3F_STATE_5:
	clearflag FLAG_TEMP_D
	addobject 14
	goto AsgarnianDungeon_B3F_STATE_1

AsgarnianDungeon_B3F_STATE_6:
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
	setmetatile 12, 13, METATILE_Lumbridge_Swamp_Caves_ICE_ROCKS_SPAKRLE, 1
	setmetatile 20, 6, METATILE_Lumbridge_Swamp_Caves_ICE_ROCKS_SPAKRLE, 1
	setmetatile 27, 7, METATILE_Lumbridge_Swamp_Caves_ICE_ROCKS_SPAKRLE, 1
	setmetatile 17, 21, METATILE_Lumbridge_Swamp_Caves_ICE_ROCKS_SPAKRLE, 1
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
	setmetatile 12, 13, METATILE_Lumbridge_Swamp_Caves_ICE_ROCKS, 1
	setmetatile 20, 6, METATILE_Lumbridge_Swamp_Caves_ICE_ROCKS, 1
	setmetatile 27, 7, METATILE_Lumbridge_Swamp_Caves_ICE_ROCKS, 1
	setmetatile 17, 21, METATILE_Lumbridge_Swamp_Caves_ICE_ROCKS, 1
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
