AsgarnianDungeon_B3F_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, AsgarnianDungeon_B3F_MapScripts_MAP_SCRIPT_ON_LOAD
	map_script MAP_SCRIPT_ON_TRANSITION, AsgarnianDungeon_B3F_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

AsgarnianDungeon_B3F_MapScripts_MAP_SCRIPT_ON_LOAD:
	call AsgarnianDungeon_B3F_DOOR
	return

AsgarnianDungeon_B3F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	call AsgarnianDungeon_B3F_STATE
	return


AsgarnianDungeon_B3F_STATE::
	switch VAR_DUNGEONEERING_DOOR_AsgarnianDungeon_STATE
	case 0, AsgarnianDungeon_B3F_STATE_3
	case 1, AsgarnianDungeon_B3F_STATE_4
	case 2, AsgarnianDungeon_B3F_STATE_5
AsgarnianDungeon_B3F_STATE_1:
	return

AsgarnianDungeon_B3F_STATE_3:
	clearflag FLAG_TEMP_D
	addobject 14
	setobjectxy 14, 23, 7
	setobjectxyperm 14, 23, 7
	goto AsgarnianDungeon_B3F_STATE_1

AsgarnianDungeon_B3F_STATE_4:
	clearflag FLAG_TEMP_D
	addobject 14
	setobjectxy 14, 25, 5
	setobjectxyperm 14, 25, 5
	goto AsgarnianDungeon_B3F_STATE_1

AsgarnianDungeon_B3F_STATE_5:
	removeobject 14
	setflag FLAG_TEMP_D
	goto AsgarnianDungeon_B3F_STATE_1


AsgarnianDungeon_B3F_DOOR::
	compare VAR_DUNGEONEERING_DOOR_AsgarnianDungeon_STATE, 2
	goto_if_eq AsgarnianDungeon_B3F_DOOR_2
AsgarnianDungeon_B3F_DOOR_1:
	return

AsgarnianDungeon_B3F_DOOR_2:
	setmetatile 26, 4, 910, 0
	special DrawWholeMapView
	goto AsgarnianDungeon_B3F_DOOR_1


DUNGEONEERING_DOOR_AsgarnianDungeon_B3F::
	compare VAR_DUNGEONEERING_DOOR_AsgarnianDungeon_STATE, 1
	goto_if_eq DUNGEONEERING_DOOR_AsgarnianDungeon_B3F_2
	msgbox DUNGEONEERING_DOOR_AsgarnianDungeon_B3F_Text_4
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
	setvar VAR_DUNGEONEERING_DOOR_AsgarnianDungeon_STATE, 2
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
	setvar VAR_DUNGEONEERING_DOOR_AsgarnianDungeon_STATE, 1
	call AsgarnianDungeon_B3F_STATE
	release
	end


Movement_ASGDUNGEON_1:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

Movement_ASGDUNGEON_2:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
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
	msgbox DUNGEONEERING_DOOR_AsgarnianDungeon_B3F_NPC_Text_0
	closemessage
	hidenamebox
	release
	end


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
	.string "The door is already open.$"

TRIGGER_DUNGEONEERING_DOOR_AsgarnianDungeon_B3F_Text_0:
	.string "Psst…{PAUSE 15} Hey you…\p"
	.string "Come this way.$"

DUNGEONEERING_DOOR_AsgarnianDungeon_B3F_NPC_Text_0:
	.string "Hey you see this door?\p"
	.string "Try opening it.$"
