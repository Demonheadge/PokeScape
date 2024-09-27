Daemonheim_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Daemonheim_MapScripts_MAP_SCRIPT_ON_TRANSITION
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Daemonheim_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Daemonheim_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setvar VAR_EVOLUTION_MAP_STATE, 6
	call Daemonheim_STATE
	call RANDOM_EVENT_SANDWICH_LADY
	return

Daemonheim_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_POKESCAPE_DAEMONHEIM_GYM_QUEST, 5, THOK_GYM_CHALLENGE_STATE_2
	.2byte 0


Daemonheim_STATE::
	setflag FLAG_TEMP_1F
	switch VAR_POKESCAPE_DAEMONHEIM_GYM_QUEST
	case 5, Daemonheim_STATE_3
Daemonheim_STATE_1:
	compare VAR_POKESCAPE_DAEMONHEIM_GYM_QUEST, 10
	goto_if_ge Daemonheim_STATE_5
Daemonheim_STATE_4:
	return

Daemonheim_STATE_3:
	clearflag FLAG_TEMP_1F
	addobject 7
	goto Daemonheim_STATE_1

Daemonheim_STATE_5:
	setobjectxyperm 4, 22, 14
	setobjectxyperm 5, 25, 14
	goto Daemonheim_STATE_4


THOK_GYM_CHALLENGE_STATE_2::
	applymovement 7, Movement_DaemonheimGym_3
	delay 50
	applymovement OBJ_EVENT_ID_PLAYER, Movement_DaemonheimGym_4
	waitmovement 0
	applymovement 7, MOVEMENT_INTERACT_UP
	namebox THOK_GYM_CHALLENGE_STATE_2_Text_0
	msgbox THOK_GYM_CHALLENGE_STATE_2_Text_1
	closemessage
	hidenamebox
	waitmovement 0
	applymovement 4, Movement_DaemonheimGym_5
	applymovement 5, Movement_DaemonheimGym_6
	delay 5
	playse SE_PIN
	waitmovement 0
	delay 60
	applymovement 7, Movement_DaemonheimGym_7
	delay 30
	applymovement OBJ_EVENT_ID_PLAYER, Movement_DaemonheimGym_7
	waitmovement 0
	setvar VAR_POKESCAPE_DAEMONHEIM_GYM_QUEST, 10
	warp MAP_DUNGEONEERING_LOBBY, 0, 0, 0
	return


Movement_DaemonheimGym_3:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	face_up
	step_end

Movement_DaemonheimGym_4:
	walk_down
	walk_down
	walk_slow_down
	walk_slow_down
	walk_slow_down
	walk_slow_down
	walk_right
	walk_right
	walk_right
	face_up
	step_end

Movement_DaemonheimGym_5:
	face_right
	emote_question_mark
	delay_16
	delay_16
	delay_16
	delay_16
	face_down
	lock_facing_direction
	delay_16
	delay_16
	delay_16
	delay_16
	walk_left
	step_end

Movement_DaemonheimGym_6:
	face_left
	emote_question_mark
	delay_16
	delay_16
	delay_16
	delay_16
	face_down
	lock_facing_direction
	delay_16
	delay_16
	delay_16
	delay_16
	walk_right
	step_end

Movement_DaemonheimGym_7:
	walk_up
	walk_up
	set_invisible
	step_end

NPC_DAEMONHEIM_GUARD_1::
	lock
	faceplayer
	namebox NPC_DAEMONHEIM_GUARD_1_Text_0
	compare VAR_POKESCAPE_DAEMONHEIM_GYM_QUEST, 10
	goto_if_ge NPC_DAEMONHEIM_GUARD_1_2
	msgbox NPC_DAEMONHEIM_GUARD_1_Text_2
NPC_DAEMONHEIM_GUARD_1_1:
	closemessage
	hidenamebox
	release
	end

NPC_DAEMONHEIM_GUARD_1_2:
	msgbox NPC_DAEMONHEIM_GUARD_1_Text_1
	goto NPC_DAEMONHEIM_GUARD_1_1


NPC_DAEMONHEIM_GUARD_2::
	lock
	faceplayer
	namebox NPC_DAEMONHEIM_GUARD_1_Text_0
	compare VAR_POKESCAPE_DAEMONHEIM_GYM_QUEST, 10
	goto_if_ge NPC_DAEMONHEIM_GUARD_2_2
	msgbox NPC_DAEMONHEIM_GUARD_1_Text_2
NPC_DAEMONHEIM_GUARD_2_1:
	closemessage
	hidenamebox
	release
	end

NPC_DAEMONHEIM_GUARD_2_2:
	msgbox NPC_DAEMONHEIM_GUARD_2_Text_0
	goto NPC_DAEMONHEIM_GUARD_2_1


NPC_DAEMONHEIM_1::
	lock
	faceplayer
	namebox NPC_DAEMONHEIM_1_Text_0
	msgbox NPC_DAEMONHEIM_1_Text_1
	closemessage
	hidenamebox
	release
	end


NPC_DAEMONHEIM_2::
	lock
	faceplayer
	namebox NPC_DAEMONHEIM_2_Text_0
	msgbox NPC_DAEMONHEIM_2_Text_1
	closemessage
	hidenamebox
	release
	end


NPC_DAEMONHEIM_3::
	lock
	applymovement 9, MOVEMENT_INTERACT_LEFT
	namebox NPC_DAEMONHEIM_3_Text_0
	msgbox NPC_DAEMONHEIM_3_Text_1
	waitmovement 0
	closemessage
	hidenamebox
	applymovement 10, MOVEMENT_INTERACT_RIGHT
	namebox NPC_DAEMONHEIM_3_Text_2
	msgbox NPC_DAEMONHEIM_3_Text_3
	waitmovement 0
	closemessage
	hidenamebox
	release
	end


NPC_DAEMONHEIM_4::
	lock
	faceplayer
	namebox NPC_DAEMONHEIM_4_Text_0
	msgbox NPC_DAEMONHEIM_4_Text_1
	closemessage
	hidenamebox
	release
	end


NPC_DAEMONHEIM_5::
	lock
	faceplayer
	namebox NPC_DAEMONHEIM_4_Text_0
	msgbox NPC_DAEMONHEIM_5_Text_0
	closemessage
	hidenamebox
	release
	end


THOK_GYM_CHALLENGE_STATE_2_Text_0:
	.string "Thok$"

THOK_GYM_CHALLENGE_STATE_2_Text_1:
	.string "Move aside!\p"
	.string "The mighty Thok coming through!$"

NPC_DAEMONHEIM_GUARD_1_Text_0:
	.string "Guard$"

NPC_DAEMONHEIM_GUARD_1_Text_1:
	.string "We do as requested from the MvM league.\p"
	.string "Although I wish they picked someone\n"
	.string "else besides Thok to be the Gym Leader\l"
	.string "of this place…$"

NPC_DAEMONHEIM_GUARD_1_Text_2:
	.string "Go no further!\p"
	.string "We stand guard to the dungeon!\p"
	.string "Only those granted permission from\n"
	.string "Thok may enter.$"

NPC_DAEMONHEIM_GUARD_2_Text_0:
	.string "We must quarantine this dungeon as\n"
	.string "there are dangerous things that must\l"
	.string "not be allowed to corrupt the rest of\l"
	.string "the world.$"

NPC_DAEMONHEIM_1_Text_0:
	.string "Novice$"

NPC_DAEMONHEIM_1_Text_1:
	.string "What is this blinding bright object on\n"
	.string "your ceiling!?\p"
	.string "My eyes are burning!$"

NPC_DAEMONHEIM_2_Text_0:
	.string "Warrior$"

NPC_DAEMONHEIM_2_Text_1:
	.string "We've been told we cannot leave\n"
	.string "Daemonheim.\p"
	.string "They said they had to set up some sort\n"
	.string "of quarintine.$"

NPC_DAEMONHEIM_3_Text_0:
	.string "Dungeoneer$"

NPC_DAEMONHEIM_3_Text_1:
	.string "Woah man, back off!$"

NPC_DAEMONHEIM_3_Text_2:
	.string "Smuggler$"

NPC_DAEMONHEIM_3_Text_3:
	.string "You cannot take those items to the\n"
	.string "outside world!\p"
	.string "Put them back this instant!$"

NPC_DAEMONHEIM_4_Text_0:
	.string "Barbarian$"

NPC_DAEMONHEIM_4_Text_1:
	.string "Thok is our fiercest warrior, he and his\n"
	.string "brother Marmaros almost made it to the\l"
	.string "bottom of Daemonheim once!\p"
	.string "They don't talk about it however.$"

NPC_DAEMONHEIM_5_Text_0:
	.string "This room is off limits, go away.$"
