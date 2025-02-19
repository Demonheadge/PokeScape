Port_Sarim_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Port_Sarim_MapScripts_MAP_SCRIPT_ON_TRANSITION
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Port_Sarim_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Port_Sarim_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setflag FLAG_VISITED_PORT_SARIM
	call PORTSARIM_STATE
	return

Port_Sarim_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_TEMP_F, 1, PORTSARIM_WISEOLDMAN_RIVAL_2
	.2byte 0


VARSETTER::
	setvar VAR_POKESCAPE_STORYMODE_PROGRESS, 130
	return


PORTSARIM_STATE::
	compare VAR_POKESCAPE_GAMEMODE_STATE, 0
	goto_if_eq PORTSARIM_STATE_1
	removeobject 21
	removeobject 22
	removeobject 23
	removeobject 24
	removeobject 25
	removeobject 26
	removeobject 27
	setflag FLAG_TEMP_1F
	removeobject 38
	setflag FLAG_TEMP_1D
	removeobject 45
	removeobject 46
	removeobject 47
	removeobject 48
	removeobject 49
	setflag FLAG_TEMP_9
	setflag FLAG_TEMP_19
	removeobject 41
	return

PORTSARIM_STATE_1:
	removeobject 21
	removeobject 22
	removeobject 23
	removeobject 24
	removeobject 25
	removeobject 26
	removeobject 27
	setflag FLAG_TEMP_1F
	removeobject 38
	setflag FLAG_TEMP_1D
	setflag FLAG_TEMP_1C
	removeobject 45
	removeobject 46
	removeobject 47
	removeobject 48
	removeobject 49
	setflag FLAG_TEMP_9
	switch VAR_POKESCAPE_STORYMODE_PROGRESS
	case 150, PORTSARIM_STATE_6
	case 151, PORTSARIM_STATE_7
	case 100, PORTSARIM_STATE_8
	case 101, PORTSARIM_STATE_9
	case 130, PORTSARIM_STATE_10
PORTSARIM_STATE_4:
	compare VAR_POKESCAPE_STORYMODE_PROGRESS, 131
	goto_if_ge PORTSARIM_STATE_12
PORTSARIM_STATE_11:
	compare VAR_POKESCAPE_STORYMODE_PROGRESS, 105
	goto_if_eq PORTSARIM_STATE_17
PORTSARIM_STATE_16:
	removeobject 42
	setflag FLAG_TEMP_1A
PORTSARIM_STATE_14:
	return

PORTSARIM_STATE_6:
	addobject 21
	addobject 22
	addobject 23
	addobject 24
	addobject 25
	addobject 26
	addobject 27
	clearflag FLAG_TEMP_1F
	clearflag FLAG_TEMP_1E
	setobjectmovementtype 11, MOVEMENT_TYPE_FACE_RIGHT
	setobjectxyperm 11, 19, 20
	setobjectmovementtype 7, MOVEMENT_TYPE_NONE
	setobjectxyperm 7, 30, 20
	setobjectmovementtype 6, MOVEMENT_TYPE_NONE
	setobjectxyperm 6, 31, 20
	setobjectxyperm 35, 19, 18
	setobjectmovementtype 35, MOVEMENT_TYPE_FACE_RIGHT
	setobjectxyperm 18, 9, 30
	setobjectxyperm 10, 19, 34
	setobjectmovementtype 10, MOVEMENT_TYPE_FACE_LEFT
	setobjectxyperm 17, 44, 11
	setobjectxyperm 33, 12, 8
	setobjectmovementtype 34, MOVEMENT_TYPE_FACE_RIGHT
	setobjectxyperm 34, 20, 19
	return

PORTSARIM_STATE_7:
	setobjectmovementtype 34, MOVEMENT_TYPE_FACE_DOWN
	setobjectxyperm 34, 20, 18
	setobjectmovementtype 11, MOVEMENT_TYPE_FACE_RIGHT
	setobjectxyperm 11, 18, 21
	setobjectmovementtype 35, MOVEMENT_TYPE_FACE_DOWN
	setobjectxyperm 35, 19, 18
	addobject 27
	clearflag FLAG_TEMP_1E
	goto PORTSARIM_STATE_4

PORTSARIM_STATE_8:
	setobjectmovementtype 37, MOVEMENT_TYPE_FACE_DOWN
	setobjectxyperm 37, 6, 40
	addobject 38
	clearflag FLAG_TEMP_1D
	addobject 45
	addobject 46
	addobject 47
	addobject 48
	addobject 49
	clearflag FLAG_TEMP_9
	goto PORTSARIM_STATE_4

PORTSARIM_STATE_9:
	setobjectmovementtype 37, MOVEMENT_TYPE_FACE_DOWN
	setobjectxyperm 37, 6, 40
	addobject 38
	clearflag FLAG_TEMP_1D
	goto PORTSARIM_STATE_4

PORTSARIM_STATE_10:
	addobject 44
	addobject 40
	clearflag FLAG_TEMP_1C
	clearflag FLAG_TEMP_19
	addobject 41
	goto PORTSARIM_STATE_4

PORTSARIM_STATE_12:
	setflag FLAG_TEMP_19
	removeobject 41
	setflag FLAG_TEMP_1B
	removeobject 39
	goto PORTSARIM_STATE_11

PORTSARIM_STATE_15:
	setvar VAR_TEMP_F, 1
	addobject 42
	clearflag FLAG_TEMP_1A
	goto PORTSARIM_STATE_14

PORTSARIM_STATE_17:
	compare VAR_WISE_OLD_MAN_RIVAL, 5
	goto_if_eq PORTSARIM_STATE_15
	goto PORTSARIM_STATE_16


PORTSARIM_HAM_EVENT_TRIGGER1::
	call PORTSARIM_HAM_EVENT_PART1
	applymovement OBJ_EVENT_ID_CAMERA, PORTSARIM_HAM_CAMERA_1
	call PORTSARIM_HAM_EVENT_PART2
	applymovement OBJ_EVENT_ID_CAMERA, PORTSARIM_HAM_CAMERA_2
	waitmovement 0
	special RemoveCameraObject
	delay 20
	release
	end


PORTSARIM_HAM_EVENT_TRIGGER2::
	call PORTSARIM_HAM_EVENT_PART1
	applymovement OBJ_EVENT_ID_CAMERA, PORTSARIM_HAM_CAMERA_3
	call PORTSARIM_HAM_EVENT_PART2
	applymovement OBJ_EVENT_ID_CAMERA, PORTSARIM_HAM_CAMERA_4
	waitmovement 0
	special RemoveCameraObject
	delay 20
	release
	end


PORTSARIM_HAM_EVENT_PART1::
	lock
	delay 60
	special SpawnCameraObject
	return


PORTSARIM_HAM_EVENT_PART2::
	delay 40
	playbgm MUS_PS_ENCOUNTER_HAM, 1
	waitmovement 0
	special RemoveCameraObject
	delay 60
	PlaySE SE_PIN
	applymovement 25, PORTSARIM_HAM_LEADER_1
	namebox PORTSARIM_HAM_EVENT_PART2_Text_0
	msgbox PORTSARIM_HAM_EVENT_PART2_Text_1
	waitmovement 0
	waitmessage
	hidenamebox
	applymovement 21, PORTSARIM_HAM_MEMBER_2
	namebox PORTSARIM_HAM_EVENT_PART2_Text_2
	msgbox PORTSARIM_HAM_EVENT_PART2_Text_3
	waitmovement 0
	waitmessage
	hidenamebox
	applymovement 25, PORTSARIM_HAM_LEADER_3
	namebox PORTSARIM_HAM_EVENT_PART2_Text_0
	msgbox PORTSARIM_HAM_EVENT_PART2_Text_4
	waitmovement 0
	waitmessage
	hidenamebox
	namebox PORTSARIM_HAM_EVENT_PART2_Text_2
	msgbox PORTSARIM_HAM_EVENT_PART2_Text_5
	waitmessage
	hidenamebox
	closemessage
	applymovement 21, PORTSARIM_HAM_MEMBERS_5
	applymovement 22, PORTSARIM_HAM_MEMBERS_5
	waitmovement 0
	namebox PORTSARIM_HAM_EVENT_PART2_Text_0
	msgbox PORTSARIM_HAM_EVENT_PART2_Text_6
	waitmessage
	hidenamebox
	closemessage
	applymovement 25, PORTSARIM_HAM_LEADER_4
	waitmovement 0
	fadescreenswapbuffers FADE_TO_BLACK
	removeobject 21
	removeobject 22
	removeobject 23
	removeobject 24
	removeobject 25
	removeobject 26
	setflag FLAG_TEMP_1F
	setvar VAR_POKESCAPE_STORYMODE_PROGRESS, 101
	fadescreenswapbuffers FADE_FROM_BLACK
	applymovement 27, PORTSARIM_HAM_BOAT
	waitmovement 0
	removeobject 27
	setflag FLAG_TEMP_1E
	delay 10
	savebgm MUS_DUMMY
	fadedefaultbgm
	special SpawnCameraObject
	call PORTSARIM_STATE
	return


PORTSARIM_HAM_LEADER_1:
	emote_exclamation_mark
	delay_8
	walk_in_place_left
	walk_in_place_left
	step_end

PORTSARIM_HAM_MEMBER_2:
	jump_in_place_right
	jump_in_place_right
	delay_4
	walk_in_place_right
	step_end

PORTSARIM_HAM_LEADER_3:
	jump_in_place_left
	step_end

PORTSARIM_HAM_LEADER_4:
	face_down
	step_end

PORTSARIM_HAM_BOAT:
	walk_slow_right
	walk_slow_right
	walk_slow_right
	walk_slow_right
	walk_slow_right
	walk_slow_right
	walk_slow_right
	walk_slow_right
	walk_slow_right
	step_end

PORTSARIM_HAM_MEMBERS_5:
	walk_left
	walk_up
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

PORTSARIM_HAM_CAMERA_1:
	walk_slow_right
	walk_slow_diag_southeast
	walk_slow_right
	walk_slow_right
	walk_slow_right
	walk_slow_right
	walk_slow_right
	step_end

PORTSARIM_HAM_CAMERA_2:
	walk_slow_left
	walk_slow_left
	walk_slow_left
	walk_slow_left
	walk_slow_left
	walk_slow_diag_northwest
	walk_slow_left
	step_end

PORTSARIM_HAM_CAMERA_3:
	walk_slow_diag_southeast
	walk_slow_diag_southeast
	walk_slow_diag_southeast
	walk_slow_right
	walk_slow_right
	step_end

PORTSARIM_HAM_CAMERA_4:
	walk_slow_diag_northwest
	walk_slow_diag_northwest
	walk_slow_diag_northwest
	walk_slow_left
	walk_slow_left
	step_end

NPC_FLAGRESETER::
	lock
	faceplayer
	playmoncry SPECIES_MAREEP, 0
	clearflag FLAG_EVENT_PORTSARIM_HAM_BOAT
	msgbox NPC_FLAGRESETER_Text_0
	waitmoncry
	waitmessage
	release
	end


NPC_SEAGULL::
	lock
	faceplayer
	namebox NPC_SEAGULL_Text_0
	playmoncry SPECIES_SEAGULL_NORMAL_FORM, 0
	msgbox NPC_SEAGULL_Text_1
	waitmoncry
	hidenamebox
	release
	end


NPC_PORTSARIM_BETTY::
	lock
	faceplayer
	namebox NPC_PORTSARIM_BETTY_Text_0
	msgbox NPC_PORTSARIM_BETTY_Text_1
	waitmessage
	hidenamebox
	pokemart STORE_RuneStore_2
	msgbox NPC_PORTSARIM_BETTY_Text_2
	release
	end


NPC_PORTSARIM_BRIAN::
	lock
	faceplayer
	namebox NPC_PORTSARIM_BRIAN_Text_0
	msgbox NPC_PORTSARIM_BRIAN_Text_1
	waitmessage
	hidenamebox
	release
	end


NPC_PORTSARIM_CAPTIAN_TOBIAS::
	lock
	faceplayer
	namebox NPC_PORTSARIM_CAPTIAN_TOBIAS_Text_0
	compare VAR_POKESCAPE_STORYMODE_PROGRESS, 100
	goto_if_eq NPC_PORTSARIM_CAPTIAN_TOBIAS_2
	compare VAR_POKESCAPE_STORYMODE_PROGRESS, 101
	goto_if_eq NPC_PORTSARIM_CAPTIAN_TOBIAS_2
	goto_if_unset FLAG_BADGE03_GET, NPC_PORTSARIM_CAPTIAN_TOBIAS_3
	goto_if_set FLAG_BADGE03_GET, NPC_PORTSARIM_CAPTIAN_TOBIAS_4
NPC_PORTSARIM_CAPTIAN_TOBIAS_1:
	msgbox NPC_PORTSARIM_CAPTIAN_TOBIAS_Text_5, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq NPC_PORTSARIM_CAPTIAN_TOBIAS_11
	msgbox NPC_PORTSARIM_CAPTIAN_TOBIAS_Text_7
NPC_PORTSARIM_CAPTIAN_TOBIAS_10:
	waitmessage
	hidenamebox
	release
	end

NPC_PORTSARIM_CAPTIAN_TOBIAS_2:
	msgbox NPC_PORTSARIM_CAPTIAN_TOBIAS_Text_1
	hidenamebox
	release
	end

NPC_PORTSARIM_CAPTIAN_TOBIAS_3:
	msgbox NPC_PORTSARIM_CAPTIAN_TOBIAS_Text_2
	hidenamebox
	release
	end

NPC_PORTSARIM_CAPTIAN_TOBIAS_4:
	compare VAR_POKESCAPE_STORYMODE_PROGRESS, 155
	goto_if_eq NPC_PORTSARIM_CAPTIAN_TOBIAS_14
	msgbox NPC_PORTSARIM_CAPTIAN_TOBIAS_Text_4
	goto NPC_PORTSARIM_CAPTIAN_TOBIAS_1

NPC_PORTSARIM_CAPTIAN_TOBIAS_11:
	msgbox NPC_PORTSARIM_CAPTIAN_TOBIAS_Text_6
	waitmessage
	hidenamebox
	warp MAP_MUSA_POINT, 2, 0, 0
	waitstate
	goto NPC_PORTSARIM_CAPTIAN_TOBIAS_10

NPC_PORTSARIM_CAPTIAN_TOBIAS_14:
	msgbox NPC_PORTSARIM_CAPTIAN_TOBIAS_Text_3
	hidenamebox
	release
	end


NPC_PORTSARIM_CREWMAN_1::
	lock
	faceplayer
	namebox NPC_PORTSARIM_CREWMAN_1_Text_0
	msgbox NPC_PORTSARIM_CREWMAN_1_Text_1
	waitmessage
	hidenamebox
	release
	end


NPC_PORTSARIM_CREWMAN_2::
	lock
	faceplayer
	namebox NPC_PORTSARIM_CREWMAN_1_Text_0
	msgbox NPC_PORTSARIM_CREWMAN_2_Text_0
	waitmessage
	hidenamebox
	release
	end


NPC_PORTSARIM_GRUM::
	lock
	faceplayer
	namebox NPC_PORTSARIM_GRUM_Text_0
	msgbox NPC_PORTSARIM_GRUM_Text_1
	waitmessage
	hidenamebox
	release
	end


NPC_PORTSARIM_KLARENSE::
	lock
	faceplayer
	namebox NPC_PORTSARIM_KLARENSE_Text_0
	msgbox NPC_PORTSARIM_KLARENSE_Text_1
	waitmessage
	hidenamebox
	release
	end


NPC_PORTSARIM_LORRIS::
	lock
	faceplayer
	namebox NPC_PORTSARIM_LORRIS_Text_0
	msgbox NPC_PORTSARIM_LORRIS_Text_1
	waitmessage
	hidenamebox
	release
	end


NPC_PORTSARIM_NPC_1::
	lock
	faceplayer
	namebox NPC_PORTSARIM_NPC_1_Text_0
	msgbox NPC_PORTSARIM_NPC_1_Text_1
	waitmessage
	hidenamebox
	release
	end


NPC_PORTSARIM_MONK_1::
	lock
	faceplayer
	namebox NPC_PORTSARIM_MONK_1_Text_0
	switch VAR_POKESCAPE_STORYMODE_PROGRESS
	case 150, NPC_PORTSARIM_MONK_1_3
	msgbox NPC_PORTSARIM_MONK_1_Text_2
	waitmessage
	hidenamebox
	release
	end

NPC_PORTSARIM_MONK_1_3:
	msgbox NPC_PORTSARIM_MONK_1_Text_1
	closemessage
	hidenamebox
	release
	end


NPC_PORTSARIM_MONK_2::
	lock
	faceplayer
	namebox NPC_PORTSARIM_MONK_1_Text_0
	switch VAR_POKESCAPE_STORYMODE_PROGRESS
	case 150, NPC_PORTSARIM_MONK_2_3
	msgbox NPC_PORTSARIM_MONK_2_Text_1
	waitmessage
	hidenamebox
	release
	end

NPC_PORTSARIM_MONK_2_3:
	msgbox NPC_PORTSARIM_MONK_2_Text_0
	closemessage
	hidenamebox
	release
	end


NPC_PORTSARIM_NPC_2::
	lock
	faceplayer
	namebox NPC_PORTSARIM_NPC_2_Text_0
	msgbox NPC_PORTSARIM_NPC_2_Text_1
	waitmessage
	hidenamebox
	release
	end


NPC_PORTSARIM_NPC_3::
	lock
	faceplayer
	namebox NPC_PORTSARIM_NPC_2_Text_0
	msgbox NPC_PORTSARIM_NPC_3_Text_0
	waitmessage
	hidenamebox
	release
	end


NPC_PORTSARIM_NPC_4::
	lock
	faceplayer
	namebox NPC_PORTSARIM_NPC_2_Text_0
	msgbox NPC_PORTSARIM_NPC_4_Text_0
	waitmessage
	hidenamebox
	release
	end


NPC_PORTSARIM_NPC_5::
	lock
	faceplayer
	namebox NPC_PORTSARIM_NPC_2_Text_0
	msgbox NPC_PORTSARIM_NPC_5_Text_0
	waitmessage
	hidenamebox
	release
	end


NPC_PORTSARIM_SIGNPOST::
	lock
	msgbox NPC_PORTSARIM_SIGNPOST_Text_0
	waitmessage
	release
	end


NPC_PORTSARIM_REDBEARD_FRANK::
	lock
	faceplayer
	namebox NPC_PORTSARIM_REDBEARD_FRANK_Text_0
	msgbox NPC_PORTSARIM_REDBEARD_FRANK_Text_1
	waitmessage
	hidenamebox
	release
	end


NPC_PORTSARIM_NPC_6::
	lock
	faceplayer
	namebox NPC_PORTSARIM_NPC_2_Text_0
	msgbox NPC_PORTSARIM_NPC_6_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne NPC_PORTSARIM_NPC_6_2
	msgbox NPC_PORTSARIM_NPC_6_Text_2
NPC_PORTSARIM_NPC_6_1:
	waitmessage
	hidenamebox
	release
	end

NPC_PORTSARIM_NPC_6_2:
	msgbox NPC_PORTSARIM_NPC_6_Text_1
	goto NPC_PORTSARIM_NPC_6_1


NPC_PORTSARIM_VOID_SQUIRE::
	goto_if_set FLAG_BADGE03_GET, NPC_PORTSARIM_VOID_SQUIRE_2
NPC_PORTSARIM_VOID_SQUIRE_1:
	faceplayer
	namebox NPC_PORTSARIM_VOID_SQUIRE_Text_0
	msgbox NPC_PORTSARIM_VOID_SQUIRE_Text_1
	waitmessage
	hidenamebox
	release
	end

NPC_PORTSARIM_VOID_SQUIRE_2:
	goto PEST_CONTROL_ENTER
	goto NPC_PORTSARIM_VOID_SQUIRE_1


NPC_PORTSARIM_THE_FACE::
	lock
	faceplayer
	namebox NPC_PORTSARIM_THE_FACE_Text_0
	msgbox NPC_PORTSARIM_THE_FACE_Text_1
	waitmessage
	hidenamebox
	release
	end


NPC_PORTSARIM_THRESNOR::
	lock
	faceplayer
	namebox NPC_PORTSARIM_THRESNOR_Text_0
	msgbox NPC_PORTSARIM_THRESNOR_Text_1
	waitmessage
	hidenamebox
	release
	end


NPC_PORTSARIM_TRADER_STAN::
	lock
	faceplayer
	namebox NPC_PORTSARIM_TRADER_STAN_Text_0
	msgbox NPC_PORTSARIM_TRADER_STAN_Text_1
	waitmessage
	hidenamebox
	release
	end


NPC_PORTSARIM_NPC_7::
	lock
	faceplayer
	namebox NPC_PORTSARIM_NPC_2_Text_0
	msgbox NPC_PORTSARIM_NPC_7_Text_0
	waitmessage
	hidenamebox
	release
	end


NPC_PORTSARIM_WYDIN::
	lock
	faceplayer
	namebox NPC_PORTSARIM_WYDIN_Text_0
	msgbox NPC_PORTSARIM_WYDIN_Text_1
	waitmessage
	hidenamebox
	release
	end


NPC_PORTSARIM_GENERALSTORE_CUSTOMER_1::
	lock
	faceplayer
	namebox NPC_PORTSARIM_GENERALSTORE_CUSTOMER_1_Text_0
	msgbox NPC_PORTSARIM_GENERALSTORE_CUSTOMER_1_Text_1
	waitmessage
	hidenamebox
	release
	end


NPC_PORTSARIM_GENERALSTORE_CUSTOMER_2::
	lock
	faceplayer
	namebox NPC_PORTSARIM_GENERALSTORE_CUSTOMER_1_Text_0
	msgbox NPC_PORTSARIM_GENERALSTORE_CUSTOMER_2_Text_0
	waitmessage
	hidenamebox
	release
	end


NPC_PORTSARIM_GERRANT::
	lock
	faceplayer
	namebox NPC_PORTSARIM_GERRANT_Text_0
	checkitem ITEM_BIG_NET, 1
	compare VAR_RESULT, 0
	goto_if_eq NPC_PORTSARIM_GERRANT_2
	msgbox NPC_PORTSARIM_GERRANT_Text_3
	closemessage
	hidenamebox
	release
	end

	release
	end

NPC_PORTSARIM_GERRANT_2:
	msgbox NPC_PORTSARIM_GERRANT_Text_1
	closemessage
	hidenamebox
	giveitem ITEM_BIG_NET
	namebox NPC_PORTSARIM_GERRANT_Text_0
	msgbox NPC_PORTSARIM_GERRANT_Text_2
	closemessage
	hidenamebox
	release
	end


NPC_PORTSARIM_FISHING_CUSTOMER::
	lock
	faceplayer
	namebox NPC_PORTSARIM_GENERALSTORE_CUSTOMER_1_Text_0
	msgbox NPC_PORTSARIM_FISHING_CUSTOMER_Text_0
	waitmessage
	hidenamebox
	release
	end


NPC_PORTSARIM_BANK_NPC::
	lock
	faceplayer
	namebox NPC_PORTSARIM_BANK_NPC_Text_0
	msgbox NPC_PORTSARIM_BANK_NPC_Text_1
	waitmessage
	hidenamebox
	release
	end


NPC_PORTSARIM_BATTLEAXE_LOREBOOK::
	lock
	msgbox NPC_PORTSARIM_BATTLEAXE_LOREBOOK_Text_0
	waitmessage
	release
	end


NPC_PORTSARIM_NPC_JAILGUARD::
	lock
	faceplayer
	namebox NPC_PORTSARIM_NPC_JAILGUARD_Text_0
	switch VAR_POKESCAPE_STORYMODE_PROGRESS
	case 100, NPC_PORTSARIM_NPC_JAILGUARD_3
	case 101, NPC_PORTSARIM_NPC_JAILGUARD_3
	msgbox NPC_PORTSARIM_NPC_JAILGUARD_Text_2
	waitmessage
	hidenamebox
	release
	end

NPC_PORTSARIM_NPC_JAILGUARD_3:
	msgbox NPC_PORTSARIM_NPC_JAILGUARD_Text_1
	closemessage
	hidenamebox
	release
	end


NPC_PORTSARIM_BLOCKADE_HAM::
	lock
	applymovement 9, MOVEMENT_INTERACT_DOWN
	namebox NPC_PORTSARIM_BLOCKADE_HAM_Text_0
	msgbox NPC_PORTSARIM_BLOCKADE_HAM_Text_1
	hidenamebox
	waitmovement 0
	applymovement 11, MOVEMENT_INTERACT_UP
	namebox NPC_PORTSARIM_BLOCKADE_HAM_Text_0
	msgbox NPC_PORTSARIM_BLOCKADE_HAM_Text_2
	waitmovement 0
	closemessage
	hidenamebox
	release
	end


NPC_PORTSARIM_BLOCKADE_HAM_2::
	lock
	applymovement 11, MOVEMENT_INTERACT_RIGHT
	namebox NPC_PORTSARIM_BLOCKADE_HAM_Text_0
	msgbox NPC_PORTSARIM_BLOCKADE_HAM_2_Text_0
	waitmovement 0
	applymovement 12, MOVEMENT_INTERACT_LEFT
	namebox NPC_PORTSARIM_BLOCKADE_HAM_Text_0
	msgbox NPC_PORTSARIM_BLOCKADE_HAM_2_Text_1
	hidenamebox
	waitmovement 0
	closemessage
	hidenamebox
	release
	end


NPC_PORTSARIM_DRUNK_HAM::
	lock
	faceplayer
	namebox NPC_PORTSARIM_DRUNK_HAM_Text_0
	msgbox NPC_PORTSARIM_DRUNK_HAM_Text_1
	waitmessage
	hidenamebox
	release
	end


NPC_PORTSARIM_NPC_8::
	lock
	faceplayer
	namebox NPC_PORTSARIM_NPC_1_Text_0
	msgbox NPC_PORTSARIM_NPC_8_Text_0
	waitmessage
	hidenamebox
	release
	end


PORTSARIM_WISEOLDMAN_RIVAL_2::
	compare VAR_POKESCAPE_STORYMODE_PROGRESS, 105
	goto_if_eq PORTSARIM_WISEOLDMAN_RIVAL_2_2
PORTSARIM_WISEOLDMAN_RIVAL_2_1:
	setvar VAR_TEMP_F, 2
	end

PORTSARIM_WISEOLDMAN_RIVAL_2_2:
	lock
	playse SE_PIN
	applymovement 42, movement_wom_portsarim_0
	waitmovement 0
	delay 60
	playbgm MUS_PS_WISE_OLD_MAN_THEME, 1
	applymovement 42, movement_wom_portsarim_1
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, MOVEMENT_FACE_LEFT
	waitmovement 0
	namebox PORTSARIM_WISEOLDMAN_RIVAL_2_Text_0
	msgbox PORTSARIM_WISEOLDMAN_RIVAL_2_Text_1
	hidenamebox
	closemessage
	applymovement 42, movement_wom_portsarim_2
	waitmovement 0
	namebox PORTSARIM_WISEOLDMAN_RIVAL_2_Text_0
	msgbox PORTSARIM_WISEOLDMAN_RIVAL_2_Text_2
	hidenamebox
	closemessage
	applymovement 42, movement_wom_portsarim_3
	savebgm MUS_DUMMY
	fadedefaultbgm
	waitmovement 0
	removeobject 42
	setflag FLAG_TEMP_1A
	setvar VAR_WISE_OLD_MAN_RIVAL, 10
	goto PORTSARIM_WISEOLDMAN_RIVAL_2_1


movement_wom_portsarim_0:
	face_right
	emote_exclamation_mark
	delay_16
	step_end

movement_wom_portsarim_1:
	walk_right
	walk_right
	step_end

movement_wom_portsarim_2:
	face_left
	delay_16
	delay_16
	delay_16
	delay_16
	face_player
	step_end

movement_wom_portsarim_3:
	walk_left
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

CRANDOR_EVENT_PORTSARIM_NED::
	lockall
	faceplayer
	namebox CRANDOR_EVENT_PORTSARIM_NED_Text_0
	msgbox CRANDOR_EVENT_PORTSARIM_NED_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne CRANDOR_EVENT_PORTSARIM_NED_2
CRANDOR_EVENT_PORTSARIM_NED_1:
	closemessage
	hidenamebox
	release
	end

CRANDOR_EVENT_PORTSARIM_NED_2:
	msgbox CRANDOR_EVENT_PORTSARIM_NED_Text_2, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne CRANDOR_EVENT_PORTSARIM_NED_4
	goto CRANDOR_EVENT_PORTSARIM_NED_1

CRANDOR_EVENT_PORTSARIM_NED_4:
	msgbox CRANDOR_EVENT_PORTSARIM_NED_Text_3
	closemessage
	hidenamebox
	applymovement 44, Movement_InteractFACERIGHT
	waitmovement 0
	applymovement 40, MOVEMENT_PORTSARIM_CRANDOR_SAIL_1
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, MOVEMENT_PORTSARIM_CRANDOR_SAIL_7
	applymovement 41, MOVEMENT_PORTSARIM_CRANDOR_SAIL_2
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, MOVEMENT_PORTSARIM_CRANDOR_SAIL_3
	waitmovement 0
	namebox CRANDOR_EVENT_PORTSARIM_NED_Text_4
	msgbox CRANDOR_EVENT_PORTSARIM_NED_Text_5
	closemessage
	hidenamebox
	applymovement OBJ_EVENT_ID_PLAYER, MOVEMENT_PORTSARIM_CRANDOR_SAIL_4
	waitmovement 0
	applymovement 44, Movement_InteractFACEUP
	waitmovement 0
	special SpawnCameraObject
	applymovement OBJ_EVENT_ID_CAMERA, MOVEMENT_PORTSARIM_CRANDOR_SAIL_5
	waitmovement 0
	applymovement 39, MOVEMENT_PORTSARIM_CRANDOR_SAIL_6
	delay 120
	special RemoveCameraObject
	warp MAP_CRANDOR_SEA_ROUTE, 72, 7
	waitstate
	end


CRANDOR_EVENT_PORTSARIM_SIROWEN::
	lock
	faceplayer
	namebox CRANDOR_EVENT_PORTSARIM_NED_Text_4
	msgbox CRANDOR_EVENT_PORTSARIM_SIROWEN_Text_0
	closemessage
	hidenamebox
	release
	end


MOVEMENT_PORTSARIM_CRANDOR_SAIL_1:
	face_up
	delay_16
	jump_up
	set_invisible
	step_end

MOVEMENT_PORTSARIM_CRANDOR_SAIL_2:
	walk_left
	walk_up
	delay_16
	jump_up
	set_invisible
	step_end

MOVEMENT_PORTSARIM_CRANDOR_SAIL_3:
	delay_16
	walk_up
	delay_16
	face_left
	step_end

MOVEMENT_PORTSARIM_CRANDOR_SAIL_4:
	walk_up
	delay_16
	jump_up
	set_invisible
	step_end

MOVEMENT_PORTSARIM_CRANDOR_SAIL_5:
	walk_slow_up
	walk_slow_up
	step_end

MOVEMENT_PORTSARIM_CRANDOR_SAIL_6:
	walk_slow_right
	walk_slow_right
	walk_slow_right
	walk_slow_right
	walk_slow_right
	walk_slow_right
	walk_slow_right
	step_end

MOVEMENT_PORTSARIM_CRANDOR_SAIL_7:
	lock_facing_direction
	walk_down
	unlock_facing_direction
	step_end

TRIGGER_PORTSARIM_HAM_EVENT_WALK_TO_JAIL::
	lock
	compare VAR_POKESCAPE_STORYMODE_PROGRESS, 100
	goto_if_eq TRIGGER_PORTSARIM_HAM_EVENT_WALK_TO_JAIL_2
TRIGGER_PORTSARIM_HAM_EVENT_WALK_TO_JAIL_1:
	release
	end

TRIGGER_PORTSARIM_HAM_EVENT_WALK_TO_JAIL_2:
	applymovement 45, movement_walk_to_lighthouse_3
	applymovement 46, MOVEMENT_INTERACT_RIGHT
	waitmovement 46
	delay 30
	applymovement 46, movement_walk_to_lighthouse_1
	delay 30
	applymovement 48, movement_walk_to_lighthouse_1
	delay 20
	applymovement 47, movement_walk_to_lighthouse_1
	delay 10
	applymovement 49, movement_walk_to_lighthouse_1
	applymovement 45, movement_walk_to_lighthouse_2
	waitmovement 0
	playse SE_LEDGE
	applymovement 45, movement_jump_in_place_LEFT
	waitmovement 0
	waitse
	applymovement 45, movement_walk_to_lighthouse_4
	waitmovement 0
	removeobject 45
	removeobject 46
	removeobject 47
	removeobject 48
	removeobject 49
	setflag FLAG_TEMP_9
	setvar VAR_POKESCAPE_STORYMODE_PROGRESS, 101
	goto TRIGGER_PORTSARIM_HAM_EVENT_WALK_TO_JAIL_1


movement_walk_to_lighthouse_1:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

movement_walk_to_lighthouse_2:
	face_down
	delay_16
	delay_16
	face_left
	step_end

movement_walk_to_lighthouse_3:
	face_up
	delay_16
	delay_16
	face_right
	delay_16
	delay_16
	face_up
	step_end

movement_walk_to_lighthouse_4:
	walk_fast_left
	walk_fast_down
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	step_end

movement_jump_in_place_LEFT:
	jump_in_place_left
	step_end

PORTSARIM_HAM_EVENT_PART2_Text_0:
	.string "H.A.M Leader$"

PORTSARIM_HAM_EVENT_PART2_Text_1:
	.string "It's about time you got here rookie!\p"
	.string "What took you so long!\p"
	.string "Do you have the package?!$"

PORTSARIM_HAM_EVENT_PART2_Text_2:
	.string "H.A.M Member$"

PORTSARIM_HAM_EVENT_PART2_Text_3:
	.string "Sorry Leader!\p"
	.string "I lost the goods…\p"
	.string "Some pesky adventurers-$"

PORTSARIM_HAM_EVENT_PART2_Text_4:
	.string "YOU WHAT?!\p"
	.string "I DON'T WANT TO HEAR IT!\p"
	.string "We are already behind schedule so we\n"
	.string "will have to talk about this later!$"

PORTSARIM_HAM_EVENT_PART2_Text_5:
	.string "…$"

PORTSARIM_HAM_EVENT_PART2_Text_6:
	.string "Alright grunts!\p"
	.string "We are moving out to Karamja for our\n"
	.string "next mission!\p"
	.string "Everyone on the ship!$"

NPC_FLAGRESETER_Text_0:
	.string "Your flag is now reset!$"

NPC_SEAGULL_Text_0:
	.string "Seagull$"

NPC_SEAGULL_Text_1:
	.string "Gull!$"

NPC_PORTSARIM_BETTY_Text_0:
	.string "Betty$"

NPC_PORTSARIM_BETTY_Text_1:
	.string "Welcome to Betty's Magic Emporium!\p"
	.string "How may I help you today?$"

NPC_PORTSARIM_BETTY_Text_2:
	.string "Thank you, come again!$"

NPC_PORTSARIM_BRIAN_Text_0:
	.string "Brian$"

NPC_PORTSARIM_BRIAN_Text_1:
	.string "Hi there, welcome to Brian's Battleaxe\n"
	.string "Bazaar.\p"
	.string "If you see Jimmy the Chisel please tell\n"
	.string "him to get back here.\p"
	.string "I cannot open the shop without him.$"

NPC_PORTSARIM_CAPTIAN_TOBIAS_Text_0:
	.string "Tobias$"

NPC_PORTSARIM_CAPTIAN_TOBIAS_Text_1:
	.string "There seems to be some sort of\n"
	.string "commotion happening over at the\l"
	.string "lighthouse.$"

NPC_PORTSARIM_CAPTIAN_TOBIAS_Text_2:
	.string "Sorry but our boat has popped a leak.\p"
	.string "It will be some time before it is\n"
	.string "repaired.\p"
	.string "You should go visit those House Parties\n"
	.string "in Rimmington or something while you are\l"
	.string "waiting.$"

NPC_PORTSARIM_CAPTIAN_TOBIAS_Text_3:
	.string "Our repairs are almost finished.\p"
	.string "Maybe you should visit Falador Castle\n"
	.string "or finish up an important task or\l"
	.string "something.\p"
	.string "After that I'm sure our boat will be\n"
	.string "repaired.$"

NPC_PORTSARIM_CAPTIAN_TOBIAS_Text_4:
	.string "Is your name {PLAYER}?\p"
	.string "I have received word that you are\n"
	.string "participating in the MvM Championships,\l"
	.string "is this correct?\p"
	.string "Usually our services cost 30gp but we\n"
	.string "have a deal with the Championship\l"
	.string "League that allows all participants to\l"
	.string "travel for free!\p"
	.string "So…{PAUSE 15}… Ahem!$"

NPC_PORTSARIM_CAPTIAN_TOBIAS_Text_5:
	.string "Hi, there would you like to board the\n"
	.string "boat to Musa Point, Karamja?$"

NPC_PORTSARIM_CAPTIAN_TOBIAS_Text_6:
	.string "All aboard!\l"
	.string "We set sail for Karamja!$"

NPC_PORTSARIM_CAPTIAN_TOBIAS_Text_7:
	.string "Suit yourself.$"

NPC_PORTSARIM_CREWMAN_1_Text_0:
	.string "Sailor$"

NPC_PORTSARIM_CREWMAN_1_Text_1:
	.string "These ships go to just about any port.\p"
	.string "There are a lot of exotic monsters out\n"
	.string "there so make sure to use our services.$"

NPC_PORTSARIM_CREWMAN_2_Text_0:
	.string "If you go to Musa Point, say hi to\n"
	.string "Stephanie for me.\p"
	.string "I love her tattoos.$"

NPC_PORTSARIM_GRUM_Text_0:
	.string "Grum$"

NPC_PORTSARIM_GRUM_Text_1:
	.string "Do you want some of these gems?\p"
	.string "They are truely outrageous.\p"
	.string "Probably out of your price range.$"

NPC_PORTSARIM_KLARENSE_Text_0:
	.string "Klarense$"

NPC_PORTSARIM_KLARENSE_Text_1:
	.string "This ship will set sail to only the most\n"
	.string "dangerous locations.\p"
	.string "But the time is not right just yet.$"

NPC_PORTSARIM_LORRIS_Text_0:
	.string "Lorris$"

NPC_PORTSARIM_LORRIS_Text_1:
	.string "People always say Thresnor and I look\n"
	.string "the same, but we are completely\l"
	.string "different.$"

NPC_PORTSARIM_NPC_1_Text_0:
	.string "Fisherman$"

NPC_PORTSARIM_NPC_1_Text_1:
	.string "Sailing will never happen, get over it.$"

NPC_PORTSARIM_MONK_1_Text_0:
	.string "Monk$"

NPC_PORTSARIM_MONK_1_Text_1:
	.string "I cannot believe they nicked our ship…$"

NPC_PORTSARIM_MONK_1_Text_2:
	.string "You cannot come to Entrana with those\n"
	.string "monsters.$"

NPC_PORTSARIM_MONK_2_Text_0:
	.string "They stole our ship!\p"
	.string "May Saradomin smite them!$"

NPC_PORTSARIM_MONK_2_Text_1:
	.string "Sorry, but you cannot enter Entrana\n"
	.string "while you have those despicable\l"
	.string "creatures with you.$"

NPC_PORTSARIM_NPC_2_Text_0:
	.string "Man$"

NPC_PORTSARIM_NPC_2_Text_1:
	.string "Did you know that water type moves are\n"
	.string "twice as strong in the rain, but fire\l"
	.string "type moves damage are halved?$"

NPC_PORTSARIM_NPC_3_Text_0:
	.string "I have that shanty stuck in my head.$"

NPC_PORTSARIM_NPC_4_Text_0:
	.string "Here in Port Sarim we mostly just see\n"
	.string "seagulls.\p"
	.string "I hope you like them.$"

NPC_PORTSARIM_NPC_5_Text_0:
	.string "I wish I had my own port, maybe a player\n"
	.string "owned port?$"

NPC_PORTSARIM_SIGNPOST_Text_0:
	.string "Welcome to Port Sarim.\p"
	.string "…\p"
	.string "There is something scribbled on the\n"
	.string "sign.\p"
	.string "Sea Shanty 2, Sea Shanty 2, Sea Shanty\n"
	.string "2, Sea Shanty 2, Sea Shanty 2, Sea\l"
	.string "Shanty 2, Sea Shanty 2, Sea Shanty 2.\p"
	.string "Sea Shanty 2.$"

NPC_PORTSARIM_REDBEARD_FRANK_Text_0:
	.string "Frank$"

NPC_PORTSARIM_REDBEARD_FRANK_Text_1:
	.string "Do you have any Karamjan rum?\p"
	.string "No?\p"
	.string "Shame.$"

NPC_PORTSARIM_NPC_6_Text_0:
	.string "Sea Shanty 2 is the best song right?$"

NPC_PORTSARIM_NPC_6_Text_1:
	.string "Damn right!$"

NPC_PORTSARIM_NPC_6_Text_2:
	.string "WOT!?\p"
	.string "…\p"
	.string "…\p"
	.string "REEEEEEEE!$"

NPC_PORTSARIM_VOID_SQUIRE_Text_0:
	.string "Void Squire$"

NPC_PORTSARIM_VOID_SQUIRE_Text_1:
	.string "Sorry, to set sail to the outpost you\n"
	.string "will need at least 3 badges.\p"
	.string "Please come back when you have them.$"

NPC_PORTSARIM_THE_FACE_Text_0:
	.string "The Face$"

NPC_PORTSARIM_THE_FACE_Text_1:
	.string "Welcome to the Rat Pits.\p"
	.string "We do not have any fights going on at\n"
	.string "this moment.\p"
	.string "But if you want to raise a strong cat,\n"
	.string "remember that there are multiple ways\l"
	.string "to evolve a kitten.$"

NPC_PORTSARIM_THRESNOR_Text_0:
	.string "Thresnor$"

NPC_PORTSARIM_THRESNOR_Text_1:
	.string "People always say Lorris and I look the\n"
	.string "same, but we are completely different.$"

NPC_PORTSARIM_TRADER_STAN_Text_0:
	.string "Trader Stan$"

NPC_PORTSARIM_TRADER_STAN_Text_1:
	.string "Sorry, this ship is not ready to set sail\n"
	.string "anytime soon.\p"
	.string "My cousin still needs to hand over some\n"
	.string "supplies.$"

NPC_PORTSARIM_NPC_7_Text_0:
	.string "Do you happen to know what to do with a\n"
	.string "drunken sailor?\p"
	.string "Asking for a friend.$"

NPC_PORTSARIM_WYDIN_Text_0:
	.string "Wydin$"

NPC_PORTSARIM_WYDIN_Text_1:
	.string "If you are here with a mithril arrow,\n"
	.string "soft clay and a chisel, I suggest you\l"
	.string "leave before I call the guards.$"

NPC_PORTSARIM_GENERALSTORE_CUSTOMER_1_Text_0:
	.string "Customer$"

NPC_PORTSARIM_GENERALSTORE_CUSTOMER_1_Text_1:
	.string "It is good to see that Wydin finally\n"
	.string "hired an assistant to run the store.\p"
	.string "He has been struggling on his own for\n"
	.string "awhile now.$"

NPC_PORTSARIM_GENERALSTORE_CUSTOMER_2_Text_0:
	.string "Me like this store!\p"
	.string "Mr.W allows me to buy bread to feed me\n"
	.string "family.$"

NPC_PORTSARIM_GERRANT_Text_0:
	.string "Gerrant$"

NPC_PORTSARIM_GERRANT_Text_1:
	.string "THAT IS IT!\p"
	.string "THAT SHINE IN YOUR EYES!\p"
	.string "You understand the beauty of fishing\n"
	.string "don't you?!\p"
	.string "Here take this!$"

NPC_PORTSARIM_GERRANT_Text_2:
	.string "This fishing net will allow you to catch\n"
	.string "those big suckers!\p"
	.string "Don't worry I won't charge you anything\n"
	.string "for it!\p"
	.string "Now off with you!\p"
	.string "Much fishing awaits in your future!$"

NPC_PORTSARIM_GERRANT_Text_3:
	.string "Being in the fish selling business has\n"
	.string "made me gain weight over the years.\p"
	.string "Oh did you wish to buy something?$"

NPC_PORTSARIM_FISHING_CUSTOMER_Text_0:
	.string "Psst… {PAUSE 15}Yeah, you.\p"
	.string "I will let you in on a little secret…\p"
	.string "…{PAUSE 15}…{PAUSE 15}\n"
	.string "…{PAUSE 15}…{PAUSE 15}\p"
	.string "They say that if you stay in the same\n"
	.string "location and catch a whole heap of fish\l"
	.string "that it is very common that you might\l"
	.string "find a super rare coloured fish!\p"
	.string "…{PAUSE 15}…{PAUSE 15}\n"
	.string "This stays between us.$"

NPC_PORTSARIM_BANK_NPC_Text_0:
	.string "Pirate$"

NPC_PORTSARIM_BANK_NPC_Text_1:
	.string "Ye will never believe me lad.\p"
	.string "I raised six seagulls.\n"
	.string "Six!\p"
	.string "That's more than three!\p"
	.string "Every one of them wee flying rats\n"
	.string "evolved to a different beastie.\p"
	.string "What in tarnation is this sorcery lad?$"

NPC_PORTSARIM_BATTLEAXE_LOREBOOK_Text_0:
	.string "It seems to be a Fan-fic about a man\n"
	.string "who fell in love with his battleaxe.\p"
	.string "You feel the sudden urge to leave.$"

NPC_PORTSARIM_NPC_JAILGUARD_Text_0:
	.string "Jailer$"

NPC_PORTSARIM_NPC_JAILGUARD_Text_1:
	.string "Was that H.A.M that just ran into the\n"
	.string "lighthouse?!\p"
	.string "Eh, I'm on my break, let it be someone\n"
	.string "elses problem.$"

NPC_PORTSARIM_NPC_JAILGUARD_Text_2:
	.string "I am on my break, don't bother me.$"

NPC_PORTSARIM_BLOCKADE_HAM_Text_0:
	.string "H.A.M Grunt$"

NPC_PORTSARIM_BLOCKADE_HAM_Text_1:
	.string "Remind me, where are we meeting the\n"
	.string "rest of the team?$"

NPC_PORTSARIM_BLOCKADE_HAM_Text_2:
	.string "You noob, how could you forget.\p"
	.string "We will be meeting them at the\n"
	.string "Lighthouse in Port Sarim.$"

NPC_PORTSARIM_BLOCKADE_HAM_2_Text_0:
	.string "I don't feel so well…$"

NPC_PORTSARIM_BLOCKADE_HAM_2_Text_1:
	.string "I told you shouldn't have eaten those\n"
	.string "Toad Crunchies!\p"
	.string "Now we are going to be late meeting up\n"
	.string "with the rest of the team at the\l"
	.string "lighthouse!$"

NPC_PORTSARIM_DRUNK_HAM_Text_0:
	.string "H.A.M Drunk$"

NPC_PORTSARIM_DRUNK_HAM_Text_1:
	.string "hic…{PAUSE 32}Where is e…{PAUSE 32}very…{PAUSE 32}one.\n"
	.string "Oh {PAUSE 32}…right {PAUSE 32}the lighthouse… {PAUSE 32}hic…$"

NPC_PORTSARIM_NPC_8_Text_0:
	.string "Seagulls are great.\p"
	.string "They grow up differently depending on\n"
	.string "how you raise them.\p"
	.string "For example, if it has equal attack and\n"
	.string "defence when you level it up enough\l"
	.string "it'll turn into a Pelican.\p"
	.string "I've heard some of those runes that\n"
	.string "Wizards use have an effect on them too,\l"
	.string "but I don't dabble with any of that\l"
	.string "magic nonsense so you'll have to try\l"
	.string "those for yourself.$"

PORTSARIM_WISEOLDMAN_RIVAL_2_Text_0:
	.string "Wise Old Man$"

PORTSARIM_WISEOLDMAN_RIVAL_2_Text_1:
	.string "Well {PLAYER}, you have been busy I\n"
	.string "see.\p"
	.string "These H.A.M. people just goes about and\n"
	.string "do what they want.\p"
	.string "It's very good to see someone like you\n"
	.string "clean up their act.$"

PORTSARIM_WISEOLDMAN_RIVAL_2_Text_2:
	.string "I am going to the Asgarnia ice dungeon\n"
	.string "down south, care to join me?\p"
	.string "I will see you there if you do.$"

CRANDOR_EVENT_PORTSARIM_NED_Text_0:
	.string "Ned$"

CRANDOR_EVENT_PORTSARIM_NED_Text_1:
	.string "{PLAYER}, are you ready to set sail to\n"
	.string "the Isle of Crandor?$"

CRANDOR_EVENT_PORTSARIM_NED_Text_2:
	.string "I'll warn you one final time, this will be\n"
	.string "extremely dangerous.\p"
	.string "We might not make it back alive.\p"
	.string "Are you sure you are ready to go?$"

CRANDOR_EVENT_PORTSARIM_NED_Text_3:
	.string "Very well, then let us embark on this\n"
	.string "voyage!$"

CRANDOR_EVENT_PORTSARIM_NED_Text_4:
	.string "Sir Owen$"

CRANDOR_EVENT_PORTSARIM_NED_Text_5:
	.string "{PLAYER} I must admit that it pains\n"
	.string "me not to be able to join you.\p"
	.string "But I fully believe you are capable on\n"
	.string "completing this mission.\p"
	.string "Good luck!$"

CRANDOR_EVENT_PORTSARIM_SIROWEN_Text_0:
	.string "Sorry {PLAYER}, something came up\n"
	.string "last minute that I must attend to.\p"
	.string "It seems like it will just be you three\n"
	.string "sailing to Crandor.\p"
	.string "I wish you all the best.$"
