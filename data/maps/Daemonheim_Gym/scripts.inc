Daemonheim_Gym_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Daemonheim_Gym_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Daemonheim_Gym_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	call Daemonheim_Gym_STATE
	return


Daemonheim_Gym_STATE::
	switch VAR_POKESCAPE_DAEMONHEIM_GYM_QUEST
	case 5, Daemonheim_Gym_STATE_3
	case 10, Daemonheim_Gym_STATE_3
Daemonheim_Gym_STATE_1:
	return

Daemonheim_Gym_STATE_3:
	setflag FLAG_TEMP_1F
	removeobject 1
	goto Daemonheim_Gym_STATE_1


DAEMONHEIM_GYM_THOK::
	switch VAR_POKESCAPE_DAEMONHEIM_GYM_QUEST
	case 0, DAEMONHEIM_GYM_THOK_2
	return

DAEMONHEIM_GYM_THOK_2:
	goto THOK_GYM_CHALLENGE_STATE_1
	return


THOK_GYM_CHALLENGE_STATE_1::
	lockall
	faceplayer
	namebox THOK_GYM_CHALLENGE_STATE_1_Text_0
	msgbox THOK_GYM_CHALLENGE_STATE_1_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_eq THOK_GYM_CHALLENGE_STATE_1_2
	msgbox THOK_GYM_CHALLENGE_STATE_1_Text_2
	hidenamebox
	closemessage
	setvar VAR_POKESCAPE_DAEMONHEIM_GYM_QUEST, 5
	applymovement 1, Movement_DaemonheimGym_1
	applymovement OBJ_EVENT_ID_PLAYER, Movement_DaemonheimGym_2
	waitmovement 0
	playse SE_WARP_OUT
	warp MAP_DAEMONHEIM, 2, 0, 0
	return

THOK_GYM_CHALLENGE_STATE_1_2:
	hidenamebox
	closemessage
	releaseall
	end


Movement_DaemonheimGym_1:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	set_invisible
	step_end

Movement_DaemonheimGym_2:
	lock_facing_direction
	walk_down
	unlock_facing_direction
	face_right
	lock_facing_direction
	walk_left
	delay_8
	unlock_facing_direction
	walk_right
	walk_down
	walk_down
	walk_down
	step_end

DAEMONHEIM_GYM_THOK_BATTLE_INTRO::
	lock
	faceplayer
	namebox THOK_GYM_CHALLENGE_STATE_1_Text_0
	goto_if_unset FLAG_BADGE06_GET, DAEMONHEIM_GYM_THOK_BATTLE_INTRO_2
	msgbox DAEMONHEIM_GYM_THOK_BATTLE_INTRO_Text_6
	hidenamebox
	release
	end

DAEMONHEIM_GYM_THOK_BATTLE_INTRO_2:
	msgbox DAEMONHEIM_GYM_THOK_BATTLE_INTRO_Text_0
	hidenamebox
	call GYM_BATTLE_THOK
	namebox THOK_GYM_CHALLENGE_STATE_1_Text_0
	msgbox DAEMONHEIM_GYM_THOK_BATTLE_INTRO_Text_1
	hidenamebox
	playfanfare MUS_PS_QUEST_COMPLETE
	msgbox DAEMONHEIM_GYM_THOK_BATTLE_INTRO_Text_2
	waitfanfare
	waitmessage
	namebox THOK_GYM_CHALLENGE_STATE_1_Text_0
	msgbox DAEMONHEIM_GYM_THOK_BATTLE_INTRO_Text_3
	hidenamebox
	giveitem ITEM_TM48, 1
	compare VAR_RESULT, FALSE
	goto_if_eq Common_EventScript_ShowBagIsFull
	playbgm MUS_PS_ALKHARID, 0
	savebgm MUS_PS_ALKHARID
	namebox DAEMONHEIM_GYM_THOK_BATTLE_INTRO_Text_4
	msgbox DAEMONHEIM_GYM_THOK_BATTLE_INTRO_Text_5
	setflag FLAG_BADGE06_GET
	hidenamebox
	release
	end


THOK_GYM_CHALLENGE_STATE_1_Text_0:
	.string "Thok$"

THOK_GYM_CHALLENGE_STATE_1_Text_1:
	.string "This is the greatest Gym!\p"
	.string "This is the Daemonheim Gym!\p"
	.string "I am Thok.\p"
	.string "Are you here for a Gym challenge?$"

THOK_GYM_CHALLENGE_STATE_1_Text_2:
	.string "RAH HA HA!\p"
	.string "EXCELLENT!\p"
	.string "FOLLOW ME AND WE SHALL START!$"

DAEMONHEIM_GYM_THOK_BATTLE_INTRO_Text_0:
	.string "Welcome to the Daemonheim Gym.\p"
	.string "I am Thok.$"

DAEMONHEIM_GYM_THOK_BATTLE_INTRO_Text_1:
	.string "Have this Badge.$"

DAEMONHEIM_GYM_THOK_BATTLE_INTRO_Text_2:
	.string "{PLAYER} received the Daemonheim\n"
	.string "BADGE from Thok.$"

DAEMONHEIM_GYM_THOK_BATTLE_INTRO_Text_3:
	.string "Also have this Scroll.$"

DAEMONHEIM_GYM_THOK_BATTLE_INTRO_Text_4:
	.string "Prince Ali$"

DAEMONHEIM_GYM_THOK_BATTLE_INTRO_Text_5:
	.string "That move is called CUPHOLDER.\p"
	.string "CUPHOLDER.$"

DAEMONHEIM_GYM_THOK_BATTLE_INTRO_Text_6:
	.string "You have defeated the Daemonheim Gym.$"
