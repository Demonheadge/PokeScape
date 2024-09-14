KaramjaVolcano_B3F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, KaramjaVolcano_B3F_MapScripts_MAP_SCRIPT_ON_TRANSITION
	map_script MAP_SCRIPT_ON_LOAD, KaramjaVolcano_B3F_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

KaramjaVolcano_B3F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setvar VAR_EVOLUTION_MAP_STATE, 15
	call KaramjaVolcano_B3F_STATE
	return

KaramjaVolcano_B3F_MapScripts_MAP_SCRIPT_ON_LOAD:
	return


KaramjaVolcano_B3F_STATE::
	compare VAR_POKESCAPE_STORYMODE_PROGRESS, 140
	goto_if_eq KaramjaVolcano_B3F_STATE_1
	setflag FLAG_TEMP_1F
	setflag FLAG_TEMP_1E
	setflag FLAG_TEMP_1
	setflag FLAG_TEMP_2
	setflag FLAG_TEMP_3
	setflag FLAG_TEMP_4
	setflag FLAG_TEMP_5
	setflag FLAG_TEMP_6
	setflag FLAG_TEMP_7
	setflag FLAG_TEMP_C
	setflag FLAG_TEMP_D
	setflag FLAG_TEMP_1D
	setflag FLAG_TEMP_1C
	return

KaramjaVolcano_B3F_STATE_1:
	setvar VAR_TEMP_F, 1
	setflag FLAG_ELVARG
	setflag FLAG_TEMP_1
	setflag FLAG_TEMP_2
	setflag FLAG_TEMP_3
	setflag FLAG_TEMP_4
	setflag FLAG_TEMP_5
	setflag FLAG_TEMP_6
	setflag FLAG_TEMP_7
	setflag FLAG_TEMP_F
	setflag FLAG_TEMP_10
	removeobject 33
	removeobject 34
	setflag FLAG_TEMP_E
	setflag FLAG_TEMP_D
	setflag FLAG_TEMP_C
	setflag FLAG_TEMP_1D
	return


KaramjaVolcano_STATE3::
	switch VAR_POKESCAPE_KARAMJAVOLCANO_STATE
	case 0, KaramjaVolcano_STATE3_2
	case 1, KaramjaVolcano_STATE3_2
	case 2, KaramjaVolcano_STATE3_2
	case 3, KaramjaVolcano_STATE3_3
	case 4, KaramjaVolcano_STATE3_4
	case 5, KaramjaVolcano_STATE3_4
	case 6, KaramjaVolcano_STATE3_4
	case 7, KaramjaVolcano_STATE3_4
	case 8, KaramjaVolcano_STATE3_4
	return

KaramjaVolcano_STATE3_2:
	setflag FLAG_ELVARG
	setflag FLAG_TEMP_4
	setflag FLAG_TEMP_5
	removeobject 15
	removeobject 16
	removeobject 17
	playbgm MUS_PS_ENCOUNTER_HAM, 1
	release
	end

KaramjaVolcano_STATE3_3:
	setflag FLAG_TEMP_1
	setflag FLAG_TEMP_2
	setflag FLAG_TEMP_3
	setflag FLAG_TEMP_4
	removeobject 1
	removeobject 2
	removeobject 3
	removeobject 4
	removeobject 5
	removeobject 6
	removeobject 7
	removeobject 8
	removeobject 15
	removeobject 16
	setobjectxyperm 11, 12, 17
	setobjectxyperm 18, 10, 31
	release
	end

KaramjaVolcano_STATE3_4:
	release
	end


NPC_KaramjaVolcano_HAM_EVENT1::
	playSE SE_PIN
	applymovement 3, HAM_EVENT_KaramjaVolcano_1
	waitmovement 0
	applymovement 3, HAM_EVENT_KaramjaVolcano_2
	waitmovement 0
	namebox NPC_KaramjaVolcano_HAM_EVENT1_Text_0
	msgbox NPC_KaramjaVolcano_HAM_EVENT1_Text_1
	hidenamebox
	closemessage
	applymovement 3, HAM_EVENT_KaramjaVolcano_3
	applymovement 2, HAM_EVENT_KaramjaVolcano_8
	waitmovement 0
	namebox NPC_KaramjaVolcano_HAM_EVENT1_Text_2
	msgbox NPC_KaramjaVolcano_HAM_EVENT1_Text_3
	msgbox NPC_KaramjaVolcano_HAM_EVENT1_Text_4
	hidenamebox
	trainerbattle_no_intro TRAINER_KARAMJAVOLCANO_HAM_ADMIN_PATTY, NPC_KaramjaVolcano_HAM_EVENT1_Text_5
	namebox NPC_KaramjaVolcano_HAM_EVENT1_Text_2
	msgbox NPC_KaramjaVolcano_HAM_EVENT1_Text_6
	hidenamebox
	closemessage
	applymovement 2, HAM_EVENT_KaramjaVolcano_9
	applymovement OBJ_EVENT_ID_PLAYER, HAM_EVENT_KaramjaVolcano_10
	special SpawnCameraObject
	applymovement 3, HAM_EVENT_KaramjaVolcano_4
	delay 40
	applymovement OBJ_EVENT_ID_CAMERA, KARAMJAVOLCANO_HAM_CAMERA_1
	waitmovement 0
	special RemoveCameraObject
	delay 60
	playse SE_THUNDERSTORM_STOP
	delay 30
	playse SE_THUNDERSTORM_STOP
	delay 30
	playse SE_THUNDERSTORM_STOP
	delay 30
	playse SE_THUNDERSTORM_STOP
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
	applymovement 3, HAM_EVENT_KaramjaVolcano_5
	namebox NPC_KaramjaVolcano_HAM_EVENT1_Text_0
	msgbox NPC_KaramjaVolcano_HAM_EVENT1_Text_7
	waitmovement 0
	applymovement 2, HAM_EVENT_KaramjaVolcano_5
	namebox NPC_KaramjaVolcano_HAM_EVENT1_Text_2
	msgbox NPC_KaramjaVolcano_HAM_EVENT1_Text_8
	waitmovement 0
	hidenamebox
	closemessage
	delay 60
	setvar VAR_0x8004, 0
	setvar VAR_0x8005, 3
	setvar VAR_0x8006, 4
	setvar VAR_0x8007, 2
	special ShakeCamera
	delay 40
	setvar VAR_0x8004, 0
	setvar VAR_0x8005, 3
	setvar VAR_0x8006, 4
	setvar VAR_0x8007, 2
	special ShakeCamera
	delay 40
	namebox NPC_KaramjaVolcano_HAM_EVENT1_Text_9
	msgbox NPC_KaramjaVolcano_HAM_EVENT1_Text_10
	hidenamebox
	closemessage
	delay 60
	playse SE_M_DETECT
	delay 60
	playse SE_ORB
	special DoOrbEffect
	delay 60
	fadescreen FADE_TO_WHITE
	special FadeOutOrbEffect
	delay 60
	delay 60
	delay 60
	delay 60
	setflag FLAG_TEMP_3
	removeobject 1
	fadescreen FADE_FROM_WHITE
	delay 60
	applymovement 2, HAM_EVENT_KaramjaVolcano_11
	waitmovement 0
	namebox NPC_KaramjaVolcano_HAM_EVENT1_Text_11
	msgbox NPC_KaramjaVolcano_HAM_EVENT1_Text_12
	hidenamebox
	closemessage
	delay 60
	setvar VAR_0x8004, 0
	setvar VAR_0x8005, 3
	setvar VAR_0x8006, 8
	setvar VAR_0x8007, 2
	special ShakeCamera
	delay 20
	setvar VAR_0x8004, 0
	setvar VAR_0x8005, 3
	setvar VAR_0x8006, 8
	setvar VAR_0x8007, 2
	special ShakeCamera
	delay 20
	setvar VAR_0x8004, 0
	setvar VAR_0x8005, 3
	setvar VAR_0x8006, 8
	setvar VAR_0x8007, 2
	special ShakeCamera
	delay 60
	applymovement 2, HAM_EVENT_KaramjaVolcano_14
	applymovement OBJ_EVENT_ID_PLAYER, HAM_EVENT_KaramjaVolcano_14
	applymovement 5, HAM_EVENT_KaramjaVolcano_12
	applymovement 6, HAM_EVENT_KaramjaVolcano_12
	applymovement 4, HAM_EVENT_KaramjaVolcano_13
	applymovement 3, HAM_EVENT_KaramjaVolcano_13
	setvar VAR_0x8004, 0
	setvar VAR_0x8005, 3
	setvar VAR_0x8006, 8
	setvar VAR_0x8007, 2
	special ShakeCamera
	delay 20
	setvar VAR_0x8004, 0
	setvar VAR_0x8005, 3
	setvar VAR_0x8006, 8
	setvar VAR_0x8007, 2
	special ShakeCamera
	delay 20
	setvar VAR_0x8004, 0
	setvar VAR_0x8005, 3
	setvar VAR_0x8006, 8
	setvar VAR_0x8007, 2
	special ShakeCamera
	delay 60
	delay 60
	waitmovement 0
	namebox NPC_KaramjaVolcano_HAM_EVENT1_Text_2
	msgbox NPC_KaramjaVolcano_HAM_EVENT1_Text_13
	hidenamebox
	closemessage
	clearflag FLAG_TEMP_4
	addobject 15
	addobject 16
	applymovement 15, HAM_EVENT_KaramjaVolcano_6
	applymovement 16, HAM_EVENT_KaramjaVolcano_15
	waitmovement 0
	applymovement 2, HAM_EVENT_KaramjaVolcano_16
	applymovement 3, HAM_EVENT_KaramjaVolcano_16
	applymovement OBJ_EVENT_ID_PLAYER, HAM_EVENT_KaramjaVolcano_7
	waitmovement 0
	namebox NPC_KaramjaVolcano_HAM_EVENT1_Text_0
	msgbox NPC_KaramjaVolcano_HAM_EVENT1_Text_14
	namebox NPC_KaramjaVolcano_HAM_EVENT1_Text_2
	msgbox NPC_KaramjaVolcano_HAM_EVENT1_Text_15
	delay 20
	setvar VAR_0x8004, 0
	setvar VAR_0x8005, 3
	setvar VAR_0x8006, 8
	setvar VAR_0x8007, 2
	special ShakeCamera
	delay 20
	setvar VAR_0x8004, 0
	setvar VAR_0x8005, 3
	setvar VAR_0x8006, 8
	setvar VAR_0x8007, 2
	special ShakeCamera
	delay 20
	setvar VAR_0x8004, 0
	setvar VAR_0x8005, 3
	setvar VAR_0x8006, 8
	setvar VAR_0x8007, 2
	special ShakeCamera
	namebox NPC_KaramjaVolcano_HAM_EVENT1_Text_0
	msgbox NPC_KaramjaVolcano_HAM_EVENT1_Text_16
	applymovement 2, HAM_EVENT_KaramjaVolcano_2
	waitmovement 0
	namebox NPC_KaramjaVolcano_HAM_EVENT1_Text_2
	msgbox NPC_KaramjaVolcano_HAM_EVENT1_Text_17
	fadescreen FADE_TO_BLACK
	playmoncry SPECIES_LUGIA, 2
	namebox NPC_KaramjaVolcano_HAM_EVENT1_Text_18
	msgbox NPC_KaramjaVolcano_HAM_EVENT1_Text_19
	waitmoncry
	special SpawnCameraObject
	applymovement OBJ_EVENT_ID_CAMERA, KARAMJAVOLCANO_HAM_CAMERA_2
	waitmovement 0
	special RemoveCameraObject
	setflag FLAG_TEMP_1
	setflag FLAG_TEMP_2
	setflag FLAG_TEMP_4
	setvar VAR_POKESCAPE_KARAMJAVOLCANO_STATE, 3
	removeobject 1
	removeobject 2
	removeobject 3
	removeobject 4
	removeobject 5
	removeobject 6
	removeobject 7
	removeobject 8
	removeobject 15
	removeobject 16
	hidenamebox
	closemessage
	clearflag FLAG_ELVARG
	addobject 17
	fadescreen FADE_FROM_BLACK
	delay 20
	setvar VAR_0x8004, 0
	setvar VAR_0x8005, 3
	setvar VAR_0x8006, 8
	setvar VAR_0x8007, 2
	special ShakeCamera
	delay 20
	setvar VAR_0x8004, 0
	setvar VAR_0x8005, 3
	setvar VAR_0x8006, 8
	setvar VAR_0x8007, 2
	special ShakeCamera
	delay 20
	setvar VAR_0x8004, 0
	setvar VAR_0x8005, 3
	setvar VAR_0x8006, 8
	setvar VAR_0x8007, 2
	special ShakeCamera
	delay 20
	playmoncry SPECIES_LUGIA, 2
	namebox NPC_KaramjaVolcano_HAM_EVENT1_Text_18
	msgbox NPC_KaramjaVolcano_HAM_EVENT1_Text_19
	waitmoncry
	hidenamebox
	closemessage
	delay 20
	msgbox NPC_KaramjaVolcano_HAM_EVENT1_Text_20
	warp MAP_ROUTE39, 0, 0, 0
	waitstate
	release
	end


HAM_EVENT_KaramjaVolcano_1:
	emote_exclamation_mark
	face_player
	delay_16
	delay_16
	delay_16
	delay_16
	step_end

HAM_EVENT_KaramjaVolcano_2:
	face_down
	step_end

HAM_EVENT_KaramjaVolcano_3:
	face_player
	step_end

HAM_EVENT_KaramjaVolcano_4:
	face_right
	step_end

KARAMJAVOLCANO_HAM_CAMERA_1:
	walk_slow_right
	walk_slow_right
	walk_slow_right
	walk_slow_right
	walk_slow_right
	walk_slow_right
	step_end

KARAMJAVOLCANO_HAM_CAMERA_2:
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_right
	walk_faster_down
	walk_faster_right
	step_end

HAM_EVENT_KaramjaVolcano_5:
	walk_in_place_right
	walk_in_place_right
	walk_in_place_right
	step_end

HAM_EVENT_KaramjaVolcano_6:
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	step_end

HAM_EVENT_KaramjaVolcano_7:
	face_up
	step_end

HAM_EVENT_KaramjaVolcano_8:
	walk_left
	step_end

HAM_EVENT_KaramjaVolcano_9:
	walk_slow_right
	step_end

HAM_EVENT_KaramjaVolcano_10:
	walk_slow_right
	walk_slow_down
	walk_slow_right
	step_end

HAM_EVENT_KaramjaVolcano_11:
	walk_fast_right
	walk_fast_right
	delay_8
	face_down
	delay_8
	face_right
	delay_8
	face_up
	delay_8
	face_left
	step_end

HAM_EVENT_KaramjaVolcano_12:
	face_left
	delay_8
	face_right
	delay_8
	face_up
	delay_8
	face_left
	delay_8
	face_right
	delay_8
	face_up
	delay_8
	face_left
	step_end

HAM_EVENT_KaramjaVolcano_13:
	face_up
	delay_8
	face_down
	delay_8
	face_up
	delay_8
	face_right
	delay_8
	face_down
	delay_8
	face_up
	delay_8
	face_right
	step_end

HAM_EVENT_KaramjaVolcano_14:
	face_up
	delay_8
	face_right
	delay_8
	face_down
	delay_8
	face_left
	delay_8
	face_right
	delay_8
	face_down
	delay_8
	face_right
	step_end

HAM_EVENT_KaramjaVolcano_15:
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	step_end

HAM_EVENT_KaramjaVolcano_16:
	face_left
	step_end

NPC_KaramjaVolcano_HAM_EVENT2::
	delay 60
	playse SE_M_DETECT
	dofieldeffectsparkle 16, 14, 0
	waitfieldeffect FLDEFF_SPARKLE
	delay 60
	playfanfare MUS_AWAKEN_LEGEND
	playse SE_ORB
	special DoOrbEffect
	delay 60
	fadescreen FADE_TO_WHITE
	delay 60
	fadeoutbgm 1
	special FadeOutOrbEffect
	fadescreen FADE_FROM_WHITE
	return


ELVARG_KaramjaVolcano::
	lock
	setvar VAR_0x8004, 0
	setvar VAR_0x8005, 3
	setvar VAR_0x8006, 8
	setvar VAR_0x8007, 2
	special ShakeCamera
	delay 20
	setvar VAR_0x8004, 0
	setvar VAR_0x8005, 3
	setvar VAR_0x8006, 8
	setvar VAR_0x8007, 2
	special ShakeCamera
	delay 20
	setvar VAR_0x8004, 0
	setvar VAR_0x8005, 3
	setvar VAR_0x8006, 8
	setvar VAR_0x8007, 2
	special ShakeCamera
	delay 20
	playmoncry SPECIES_LUGIA, 2
	namebox NPC_KaramjaVolcano_HAM_EVENT1_Text_18
	msgbox NPC_KaramjaVolcano_HAM_EVENT1_Text_19
	waitmoncry
	hidenamebox
	closemessage
	delay 20
	setvar VAR_0x8004, SPECIES_ELVARG
	setvar VAR_0x8005, 40 @ level
	setvar VAR_0x8006, ITEM_NONE
	special CreateEnemyEventMon
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	special BattleSetup_StartLegendaryBattle
	waitstate
	setflag FLAG_ELVARG
	removeobject 17
	release
	end


ENCOUNTER_LESSERDEMON_KARAMJA_1::
	lock
	faceplayer
	namebox ENCOUNTER_LESSERDEMON_KARAMJA_1_Text_0
	playmoncry SPECIES_EKANS, 0
	msgbox ENCOUNTER_LESSERDEMON_KARAMJA_1_Text_1
	waitmoncry
	hidenamebox
	closemessage
	delay 1
	setwildbattle SPECIES_DEMON_LESSER_OSRS_FORM, 15, ITEM_NONE
	dowildbattle
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq ENCOUNTER_LESSERDEMON_KARAMJA_1_2
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq ENCOUNTER_LESSERDEMON_KARAMJA_1_3
	end

ENCOUNTER_LESSERDEMON_KARAMJA_1_2:
	fadescreen FADE_TO_BLACK
	setflag FLAG_TEMP_A
	removeobject 5
	fadescreen FADE_FROM_BLACK
	closemessage
	end

ENCOUNTER_LESSERDEMON_KARAMJA_1_3:
	fadescreen FADE_TO_BLACK
	setflag FLAG_TEMP_A
	removeobject 5
	fadescreen FADE_FROM_BLACK
	closemessage
	end


ENCOUNTER_LESSERDEMON_KARAMJA_2::
	lock
	faceplayer
	namebox ENCOUNTER_LESSERDEMON_KARAMJA_1_Text_0
	playmoncry SPECIES_EKANS, 0
	msgbox ENCOUNTER_LESSERDEMON_KARAMJA_1_Text_1
	waitmoncry
	hidenamebox
	closemessage
	delay 1
	setwildbattle SPECIES_DEMON_LESSER_OSRS_FORM, 15, ITEM_NONE
	dowildbattle
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq ENCOUNTER_LESSERDEMON_KARAMJA_2_2
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq ENCOUNTER_LESSERDEMON_KARAMJA_2_3
	end

ENCOUNTER_LESSERDEMON_KARAMJA_2_2:
	fadescreen FADE_TO_BLACK
	setflag FLAG_TEMP_B
	removeobject 6
	fadescreen FADE_FROM_BLACK
	closemessage
	end

ENCOUNTER_LESSERDEMON_KARAMJA_2_3:
	fadescreen FADE_TO_BLACK
	setflag FLAG_TEMP_B
	removeobject 6
	fadescreen FADE_FROM_BLACK
	closemessage
	end


ENCOUNTER_JAD::
	lock
	namebox ENCOUNTER_JAD_Text_0
	playmoncry SPECIES_EKANS, 0
	msgbox ENCOUNTER_JAD_Text_1
	waitmoncry
	hidenamebox
	closemessage
	delay 1
	setwildbattle SPECIES_TZTOK_JAD, 50, ITEM_FRAGMENT_OF_JAS
	dowildbattle
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq ENCOUNTER_JAD_2
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq ENCOUNTER_JAD_3
	end

ENCOUNTER_JAD_2:
	fadescreen FADE_TO_BLACK
	setflag FLAG_TEMP_1
	removeobject 6
	fadescreen FADE_FROM_BLACK
	closemessage
	end

ENCOUNTER_JAD_3:
	fadescreen FADE_TO_BLACK
	setflag FLAG_TEMP_1
	removeobject 6
	fadescreen FADE_FROM_BLACK
	closemessage
	end


ITEM_MegaEvolution_TOKHAAR::
	finditem ITEM_MEGASTONE_TOKHAAR
	end


ITEM_MegaEvolution_TZHAAR::
	finditem ITEM_MEGASTONE_TZHAAR
	end


Crandor_Event_Volcano::
	lock
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	compare VAR_TEMP_0, 23
	goto_if_eq Crandor_Event_Volcano_2
	compare VAR_TEMP_0, 25
	goto_if_eq Crandor_Event_Volcano_3
Crandor_Event_Volcano_1:
	playse SE_PIN
	applymovement 15, MOVEMENT_EXCLAMATIONMARK_FACE_DOWN
	waitmovement 0
	waitse
	playbgm MUS_PS_ENCOUNTER_HAM, TRUE
	namebox Crandor_Event_Volcano_Text_0
	msgbox Crandor_Event_Volcano_Text_1
	closemessage
	hidenamebox
	applymovement 2, Movement_InteractFACEDOWN
	waitmovement 0
	namebox Crandor_Event_Volcano_Text_2
	msgbox Crandor_Event_Volcano_Text_3
	closemessage
	hidenamebox
	namebox Crandor_Event_Volcano_Text_0
	msgbox Crandor_Event_Volcano_Text_4
	closemessage
	hidenamebox
	applymovement 2, Movement_InteractFACELEFT
	applymovement 15, Movement_InteractFACERIGHT
	waitmovement 0
	namebox Crandor_Event_Volcano_Text_2
	msgbox Crandor_Event_Volcano_Text_5
	closemessage
	hidenamebox
	applymovement 2, HAM_EVENT_CRANDOR_VOLCANO_1
	applymovement 15, HAM_EVENT_CRANDOR_VOLCANO_1
	waitmovement 0
	trainerbattle_twoopponents TRAINER_CRANDOR_HAM_ADMIN_BABE, Crandor_Event_Volcano_Text_6, TRAINER_CRANDOR_HAM_ADMIN_PATTY, Crandor_Event_Volcano_Text_7
	applymovement 15, Movement_InteractFACERIGHT
	waitmovement 0
	namebox Crandor_Event_Volcano_Text_0
	msgbox Crandor_Event_Volcano_Text_8
	closemessage
	hidenamebox
	applymovement 2, Movement_InteractFACELEFT
	waitmovement 0
	namebox Crandor_Event_Volcano_Text_2
	msgbox Crandor_Event_Volcano_Text_9
	closemessage
	hidenamebox
	applymovement 2, Movement_InteractFACEUP
	waitmovement 0
	namebox Crandor_Event_Volcano_Text_2
	msgbox Crandor_Event_Volcano_Text_10
	closemessage
	hidenamebox
	playse SE_PIN
	applymovement 16, HAM_EVENT_CRANDOR_VOLCANO_2
	waitmovement 0
	applymovement 2, HAM_EVENT_CRANDOR_VOLCANO_3
	waitmovement 0
	applymovement 16, HAM_EVENT_CRANDOR_VOLCANO_4
	waitmovement 0
	namebox Crandor_Event_Volcano_Text_11
	msgbox Crandor_Event_Volcano_Text_12
	namebox Crandor_Event_Volcano_Text_11
	msgbox Crandor_Event_Volcano_Text_13
	applymovement 16, Movement_InteractFACEUP
	namebox Crandor_Event_Volcano_Text_11
	msgbox Crandor_Event_Volcano_Text_14
	waitmovement 0
	closemessage
	hidenamebox
	special SpawnCameraObject
	applymovement OBJ_EVENT_ID_CAMERA, HAM_EVENT_CRANDOR_VOLCANO_5
	fadeoutbgm 2
	waitmovement 0
	applymovement 3, Movement_InteractFACEUP
	waitmovement 0
	namebox Crandor_Event_Volcano_Text_15
	msgbox Crandor_Event_Volcano_Text_16
	closemessage
	hidenamebox
	applymovement 3, Movement_InteractFACEDOWN
	waitmovement 0
	namebox Crandor_Event_Volcano_Text_15
	msgbox Crandor_Event_Volcano_Text_17
	closemessage
	hidenamebox
	applymovement 3, HAM_EVENT_CRANDOR_VOLCANO_6
	applymovement OBJ_EVENT_ID_CAMERA, HAM_EVENT_CRANDOR_VOLCANO_11
	delay 30
	applymovement 15, HAM_EVENT_CRANDOR_VOLCANO_8
	applymovement 16, HAM_EVENT_CRANDOR_VOLCANO_9
	namebox Crandor_Event_Volcano_Text_15
	msgbox Crandor_Event_Volcano_Text_18
	waitmovement 0
	closemessage
	hidenamebox
	waitmovement 0
	namebox Crandor_Event_Volcano_Text_15
	msgbox Crandor_Event_Volcano_Text_19
	waitmovement 0
	closemessage
	hidenamebox
	namebox Crandor_Event_Volcano_Text_11
	msgbox Crandor_Event_Volcano_Text_20
	applymovement 3, HAM_EVENT_CRANDOR_VOLCANO_7
	waitmovement 0
	namebox Crandor_Event_Volcano_Text_15
	msgbox Crandor_Event_Volcano_Text_21
	closemessage
	hidenamebox
	applymovement 15, HAM_EVENT_CRANDOR_VOLCANO_12
	applymovement 16, HAM_EVENT_CRANDOR_VOLCANO_13
	applymovement OBJ_EVENT_ID_PLAYER, HAM_EVENT_CRANDOR_VOLCANO_22
	applymovement 2, HAM_EVENT_CRANDOR_VOLCANO_14
	applymovement 3, HAM_EVENT_CRANDOR_VOLCANO_15
	waitmovement 0
	applymovement 3, HAM_EVENT_CRANDOR_VOLCANO_17
	namebox Crandor_Event_Volcano_Text_15
	msgbox Crandor_Event_Volcano_Text_22
	closemessage
	hidenamebox
	waitmovement 0
	applymovement 3, HAM_EVENT_CRANDOR_VOLCANO_16
	applymovement 31, HAM_EVENT_CRANDOR_VOLCANO_18
	applymovement 4, HAM_EVENT_CRANDOR_VOLCANO_21
	applymovement 6, HAM_EVENT_CRANDOR_VOLCANO_20
	delay 30
	applymovement 30, HAM_EVENT_CRANDOR_VOLCANO_19
	waitmovement 3
	waitmovement 30
	setflag FLAG_TEMP_1F
	removeobject 3
	removeobject 2
	removeobject 16
	removeobject 15
	special RemoveCameraObject
	delay 60
	setvar VAR_0x8004, 0
	setvar VAR_0x8005, 3
	setvar VAR_0x8006, 8
	setvar VAR_0x8007, 2
	special ShakeCamera
	delay 20
	setvar VAR_0x8004, 0
	setvar VAR_0x8005, 3
	setvar VAR_0x8006, 8
	setvar VAR_0x8007, 2
	special ShakeCamera
	delay 20
	setvar VAR_0x8004, 0
	setvar VAR_0x8005, 3
	setvar VAR_0x8006, 8
	setvar VAR_0x8007, 2
	special ShakeCamera
	delay 60
	applymovement OBJ_EVENT_ID_PLAYER, HAM_EVENT_KaramjaVolcano_14
	applymovement 30, HAM_EVENT_KaramjaVolcano_12
	applymovement 31, HAM_EVENT_KaramjaVolcano_12
	applymovement 4, HAM_EVENT_KaramjaVolcano_13
	applymovement 6, HAM_EVENT_KaramjaVolcano_13
	namebox NPC_KaramjaVolcano_HAM_EVENT1_Text_0
	msgbox Crandor_Event_Volcano_Text_23
	hidenamebox
	closemessage
	setvar VAR_0x8004, 0
	setvar VAR_0x8005, 3
	setvar VAR_0x8006, 8
	setvar VAR_0x8007, 2
	special ShakeCamera
	delay 20
	setvar VAR_0x8004, 0
	setvar VAR_0x8005, 3
	setvar VAR_0x8006, 8
	setvar VAR_0x8007, 2
	special ShakeCamera
	delay 20
	setvar VAR_0x8004, 0
	setvar VAR_0x8005, 3
	setvar VAR_0x8006, 8
	setvar VAR_0x8007, 2
	special ShakeCamera
	delay 60
	delay 60
	waitmovement 0
	fadescreen FADE_TO_BLACK
	setvar VAR_0x8004, 0
	setvar VAR_0x8005, 3
	setvar VAR_0x8006, 8
	setvar VAR_0x8007, 2
	special ShakeCamera
	delay 40
	clearflag FLAG_ELVARG
	addobject 17
	fadescreen FADE_FROM_BLACK
	playmoncry SPECIES_ELVARG, 2
	namebox NPC_KaramjaVolcano_HAM_EVENT1_Text_18
	msgbox NPC_KaramjaVolcano_HAM_EVENT1_Text_19
	waitmoncry
	hidenamebox
	closemessage
	playbgm MUS_PS_VS_CHAOS_TUNNELS, TRUE
	fadeinbgm 2
	applymovement 31, Movement_InteractFACEUP
	applymovement 4, Movement_InteractFACEUP
	applymovement 6, Movement_InteractFACEUP
	applymovement 30, Movement_InteractFACEUP
	applymovement OBJ_EVENT_ID_PLAYER, Movement_InteractFACEUP
	waitmovement 0
	applymovement 6, MOVEMENT_INTERACT_UP
	namebox NPC_KaramjaVolcano_HAM_EVENT1_Text_0
	msgbox Crandor_Event_Volcano_Text_24
	hidenamebox
	closemessage
	waitmovement 0
	applymovement 31, MOVEMENT_INTERACT_UP
	namebox NPC_KaramjaVolcano_HAM_EVENT1_Text_0
	msgbox Crandor_Event_Volcano_Text_25
	hidenamebox
	closemessage
	waitmovement 0
	applymovement 6, Movement_InteractFACELEFT
	namebox NPC_KaramjaVolcano_HAM_EVENT1_Text_0
	msgbox Crandor_Event_Volcano_Text_26
	hidenamebox
	closemessage
	waitmovement 0
	applymovement 30, Movement_InteractFACERIGHT
	namebox NPC_KaramjaVolcano_HAM_EVENT1_Text_0
	msgbox Crandor_Event_Volcano_Text_27
	hidenamebox
	closemessage
	waitmovement 0
	applymovement 4, MOVEMENT_INTERACT_UP
	namebox NPC_KaramjaVolcano_HAM_EVENT1_Text_0
	msgbox Crandor_Event_Volcano_Text_28
	hidenamebox
	closemessage
	waitmovement 0
	applymovement 31, Movement_InteractFACERIGHT
	applymovement 6, Movement_InteractFACERIGHT
	applymovement 30, Movement_InteractFACERIGHT
	applymovement OBJ_EVENT_ID_PLAYER, Movement_InteractFACERIGHT
	waitmovement 0
	applymovement 4, HAM_EVENT_CRANDOR_VOLCANO_24
	playse SE_LEDGE
	waitse
	waitmovement 0
	applymovement 4, HAM_EVENT_CRANDOR_VOLCANO_24
	playse SE_LEDGE
	waitse
	waitmovement 0
	namebox NPC_KaramjaVolcano_HAM_EVENT1_Text_0
	msgbox Crandor_Event_Volcano_Text_29
	hidenamebox
	closemessage
	waitmovement 0
	playse SE_FLEE
	applymovement OBJ_EVENT_ID_PLAYER, HAM_EVENT_CRANDOR_VOLCANO_28
	applymovement 31, HAM_EVENT_CRANDOR_VOLCANO_23
	applymovement 4, HAM_EVENT_CRANDOR_VOLCANO_23
	applymovement 6, HAM_EVENT_CRANDOR_VOLCANO_23
	applymovement 30, HAM_EVENT_CRANDOR_VOLCANO_23
	waitmovement 0
	setflag FLAG_TEMP_1C
	removeobject 36
	setflag FLAG_TEMP_1E
	removeobject 31
	removeobject 4
	removeobject 6
	removeobject 30
	removeobject 8
	removeobject 9
	setvar VAR_0x8004, 0
	setvar VAR_0x8005, 3
	setvar VAR_0x8006, 8
	setvar VAR_0x8007, 2
	special ShakeCamera
	delay 20
	setvar VAR_0x8004, 0
	setvar VAR_0x8005, 3
	setvar VAR_0x8006, 8
	setvar VAR_0x8007, 2
	special ShakeCamera
	delay 20
	setvar VAR_0x8004, 0
	setvar VAR_0x8005, 3
	setvar VAR_0x8006, 8
	setvar VAR_0x8007, 2
	special ShakeCamera
	delay 60
	msgbox Crandor_Event_Volcano_Text_30
	closemessage
	setflag FLAG_SYS_ENCOUNTER
	setvar VAR_POKESCAPE_STORYMODE_PROGRESS, 145
	setvar VAR_TEMP_F, 0
	setvar VAR_TEMP_E, 1
	setvar VAR_TEMP_D, 1
	clearflag FLAG_TEMP_1D
	addobject 32
	release
	end

Crandor_Event_Volcano_2:
	applymovement OBJ_EVENT_ID_PLAYER, HAM_EVENT_CRANDOR_VOLCANO_29
	waitmovement 0
	goto Crandor_Event_Volcano_1

Crandor_Event_Volcano_3:
	applymovement OBJ_EVENT_ID_PLAYER, HAM_EVENT_CRANDOR_VOLCANO_30
	waitmovement 0
	goto Crandor_Event_Volcano_1


MOVEMENT_EXCLAMATIONMARK_FACE_DOWN:
	emote_exclamation_mark
	face_down
	step_end

HAM_EVENT_CRANDOR_VOLCANO_1:
	walk_down
	step_end

HAM_EVENT_CRANDOR_VOLCANO_2:
	emote_question_mark
	face_down
	delay_16
	delay_16
	walk_down
	walk_down
	walk_right
	face_down
	step_end

HAM_EVENT_CRANDOR_VOLCANO_3:
	face_left
	lock_facing_direction
	walk_right
	unlock_facing_direction
	step_end

HAM_EVENT_CRANDOR_VOLCANO_4:
	walk_down
	delay_16
	delay_16
	face_right
	delay_16
	delay_16
	face_left
	delay_16
	delay_16
	face_down
	step_end

HAM_EVENT_CRANDOR_VOLCANO_5:
	walk_slow_up
	walk_slow_up
	walk_slow_up
	walk_slow_up
	step_end

HAM_EVENT_CRANDOR_VOLCANO_6:
	walk_slow_down
	walk_slow_down
	walk_slow_down
	step_end

HAM_EVENT_CRANDOR_VOLCANO_7:
	face_left
	step_end

HAM_EVENT_CRANDOR_VOLCANO_8:
	face_right
	lock_facing_direction
	walk_slow_down
	unlock_facing_direction
	step_end

HAM_EVENT_CRANDOR_VOLCANO_9:
	face_up
	lock_facing_direction
	walk_slow_left
	unlock_facing_direction
	face_right
	step_end

HAM_EVENT_CRANDOR_VOLCANO_10:
	walk_down
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

HAM_EVENT_CRANDOR_VOLCANO_11:
	walk_slow_down
	walk_slow_down
	walk_slow_down
	walk_slow_down
	step_end

HAM_EVENT_CRANDOR_VOLCANO_12:
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

HAM_EVENT_CRANDOR_VOLCANO_13:
	walk_down
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

HAM_EVENT_CRANDOR_VOLCANO_14:
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

HAM_EVENT_CRANDOR_VOLCANO_15:
	walk_right
	walk_down
	walk_down
	walk_down
	step_end

HAM_EVENT_CRANDOR_VOLCANO_16:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

HAM_EVENT_CRANDOR_VOLCANO_17:
	face_down
	delay_16
	delay_16
	face_right
	step_end

HAM_EVENT_CRANDOR_VOLCANO_18:
	walk_right
	walk_down
	walk_right
	walk_right
	walk_right
	walk_up
	face_right
	step_end

HAM_EVENT_CRANDOR_VOLCANO_19:
	walk_right
	walk_right
	walk_up
	walk_up
	walk_up
	face_right
	step_end

HAM_EVENT_CRANDOR_VOLCANO_20:
	walk_up
	walk_left
	walk_up
	step_end

HAM_EVENT_CRANDOR_VOLCANO_21:
	walk_left
	walk_up
	walk_up
	walk_left
	step_end

HAM_EVENT_CRANDOR_VOLCANO_22:
	face_right
	delay_16
	delay_16
	face_down
	step_end

HAM_EVENT_CRANDOR_VOLCANO_23:
	walk_faster_down
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	step_end

HAM_EVENT_CRANDOR_VOLCANO_24:
	jump_in_place_up
	step_end

HAM_EVENT_CRANDOR_VOLCANO_28:
	face_down
	delay_16
	delay_16
	face_left
	step_end

CRANDOR_VOLCANO_EARTHQUAKE_0::
	lockall
	playmoncry SPECIES_ELVARG, 2
	namebox NPC_KaramjaVolcano_HAM_EVENT1_Text_18
	msgbox NPC_KaramjaVolcano_HAM_EVENT1_Text_19
	waitmoncry
	hidenamebox
	closemessage
	setvar VAR_0x8004, 0
	setvar VAR_0x8005, 3
	setvar VAR_0x8006, 8
	setvar VAR_0x8007, 2
	special ShakeCamera
	delay 20
	setvar VAR_0x8004, 0
	setvar VAR_0x8005, 3
	setvar VAR_0x8006, 8
	setvar VAR_0x8007, 2
	special ShakeCamera
	delay 20
	setvar VAR_0x8004, 0
	setvar VAR_0x8005, 3
	setvar VAR_0x8006, 8
	setvar VAR_0x8007, 2
	special ShakeCamera
	delay 20
	setvar VAR_0x8004, 0
	setvar VAR_0x8005, 3
	setvar VAR_0x8006, 8
	setvar VAR_0x8007, 2
	special ShakeCamera
	delay 60
	clearflag FLAG_TEMP_F
	clearflag FLAG_TEMP_10
	addobject 33
	addobject 34
	setvar VAR_POKESCAPE_STORYMODE_PROGRESS, 146
	setvar VAR_TEMP_D, 2
	release
	end


CRANDOR_VOLCANO_EARTHQUAKE_1::
	lockall
	setvar VAR_0x8004, 0
	setvar VAR_0x8005, 3
	setvar VAR_0x8006, 8
	setvar VAR_0x8007, 2
	special ShakeCamera
	delay 20
	setvar VAR_0x8004, 0
	setvar VAR_0x8005, 3
	setvar VAR_0x8006, 8
	setvar VAR_0x8007, 2
	special ShakeCamera
	delay 20
	setvar VAR_0x8004, 0
	setvar VAR_0x8005, 3
	setvar VAR_0x8006, 8
	setvar VAR_0x8007, 2
	special ShakeCamera
	delay 60
	addobject 23
	addobject 24
	clearflag FLAG_TEMP_6
	clearflag FLAG_TEMP_7
	addobject 22
	clearflag FLAG_TEMP_5
	setvar VAR_POKESCAPE_STORYMODE_PROGRESS, 147
	setvar VAR_TEMP_E, 2
	release
	end


CRANDOR_VOLCANO_EARTHQUAKE_2::
	lockall
	setvar VAR_0x8004, 0
	setvar VAR_0x8005, 3
	setvar VAR_0x8006, 8
	setvar VAR_0x8007, 2
	special ShakeCamera
	delay 20
	setvar VAR_0x8004, 0
	setvar VAR_0x8005, 3
	setvar VAR_0x8006, 8
	setvar VAR_0x8007, 2
	special ShakeCamera
	delay 20
	setvar VAR_0x8004, 0
	setvar VAR_0x8005, 3
	setvar VAR_0x8006, 8
	setvar VAR_0x8007, 2
	special ShakeCamera
	delay 60
	addobject 14
	clearflag FLAG_TEMP_4
	setvar VAR_POKESCAPE_STORYMODE_PROGRESS, 148
	setvar VAR_TEMP_E, 3
	release
	end


CRANDOR_VOLCANO_EARTHQUAKE_3::
	lockall
	setvar VAR_0x8004, 0
	setvar VAR_0x8005, 3
	setvar VAR_0x8006, 8
	setvar VAR_0x8007, 2
	special ShakeCamera
	delay 20
	setvar VAR_0x8004, 0
	setvar VAR_0x8005, 3
	setvar VAR_0x8006, 8
	setvar VAR_0x8007, 2
	special ShakeCamera
	delay 20
	setvar VAR_0x8004, 0
	setvar VAR_0x8005, 3
	setvar VAR_0x8006, 8
	setvar VAR_0x8007, 2
	special ShakeCamera
	delay 60
	addobject 10
	clearflag FLAG_TEMP_C
	addobject 12
	clearflag FLAG_TEMP_D
	addobject 7
	clearflag FLAG_TEMP_E
	setvar VAR_POKESCAPE_STORYMODE_PROGRESS, 149
	setvar VAR_TEMP_E, 4
	release
	end


CRANDOR_VOLCANO_EARTHQUAKE_4::
	lockall
	setvar VAR_0x8004, 0
	setvar VAR_0x8005, 3
	setvar VAR_0x8006, 8
	setvar VAR_0x8007, 2
	special ShakeCamera
	delay 20
	setvar VAR_0x8004, 0
	setvar VAR_0x8005, 3
	setvar VAR_0x8006, 8
	setvar VAR_0x8007, 2
	special ShakeCamera
	delay 20
	setvar VAR_0x8004, 0
	setvar VAR_0x8005, 3
	setvar VAR_0x8006, 8
	setvar VAR_0x8007, 2
	special ShakeCamera
	delay 60
	setvar VAR_POKESCAPE_STORYMODE_PROGRESS, 150
	setvar VAR_TEMP_E, 5
	clearflag FLAG_TEMP_1D
	addobject 32
	applymovement 32, HAM_EVENT_CRANDOR_VOLCANO_25
	waitmovement 0
	namebox CRANDOR_VOLCANO_EARTHQUAKE_4_Text_0
	msgbox CRANDOR_VOLCANO_EARTHQUAKE_4_Text_1
	closemessage
	hidenamebox
	setvar VAR_0x8004, 0
	setvar VAR_0x8005, 3
	setvar VAR_0x8006, 8
	setvar VAR_0x8007, 2
	special ShakeCamera
	delay 20
	applymovement 32, HAM_EVENT_CRANDOR_VOLCANO_26
	applymovement OBJ_EVENT_ID_PLAYER, HAM_EVENT_CRANDOR_VOLCANO_27
	delay 90
	clearflag FLAG_SYS_ENCOUNTER
	warp MAP_TZHAAR_1F, 0
	waitstate
	release
	end


HAM_EVENT_CRANDOR_VOLCANO_25:
	walk_fast_up
	walk_fast_up
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_up
	walk_fast_up
	walk_fast_up
	step_end

HAM_EVENT_CRANDOR_VOLCANO_26:
	walk_down
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	walk_down
	step_end

HAM_EVENT_CRANDOR_VOLCANO_27:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	walk_down
	step_end

HAM_EVENT_CRANDOR_VOLCANO_29:
	walk_right
	face_up
	step_end

HAM_EVENT_CRANDOR_VOLCANO_30:
	walk_left
	face_up
	step_end

NPC_CRANDOR_VOLCANO_HAMGRUNT_1::
	lock
	applymovement 8, MOVEMENT_INTERACT_RIGHT
	namebox NPC_KaramjaVolcano_HAM_EVENT1_Text_0
	msgbox NPC_CRANDOR_VOLCANO_HAMGRUNT_1_Text_0
	hidenamebox
	closemessage
	waitmovement 0
	applymovement 9, MOVEMENT_INTERACT_LEFT
	namebox NPC_KaramjaVolcano_HAM_EVENT1_Text_0
	msgbox NPC_CRANDOR_VOLCANO_HAMGRUNT_1_Text_1
	hidenamebox
	closemessage
	waitmovement 0
	release
	end


NPC_CRANDOR_VOLCANO_HAMGRUNT_2::
	lock
	faceplayer
	namebox NPC_KaramjaVolcano_HAM_EVENT1_Text_0
	msgbox NPC_CRANDOR_VOLCANO_HAMGRUNT_2_Text_0
	hidenamebox
	closemessage
	release
	end


NPC_CRANDOR_VOLCANO_HAMGRUNT_3::
	lock
	faceplayer
	namebox NPC_KaramjaVolcano_HAM_EVENT1_Text_0
	msgbox NPC_CRANDOR_VOLCANO_HAMGRUNT_3_Text_0
	hidenamebox
	closemessage
	release
	end


NPC_CRANDOR_VOLCANO_HAMGRUNT_4::
	lock
	faceplayer
	namebox NPC_KaramjaVolcano_HAM_EVENT1_Text_0
	msgbox NPC_CRANDOR_VOLCANO_HAMGRUNT_4_Text_0
	hidenamebox
	closemessage
	release
	end


NPC_CRANDOR_VOLCANO_HAMGRUNT_5::
	lock
	faceplayer
	namebox NPC_KaramjaVolcano_HAM_EVENT1_Text_0
	msgbox NPC_CRANDOR_VOLCANO_HAMGRUNT_5_Text_0
	hidenamebox
	closemessage
	release
	end


BATTLE_KaramjaVolcano_HAM_6::
	trainerbattle_single TRAINER_KARAMJAVOLCANO_HAM_GRUNT_6, BATTLE_KaramjaVolcano_HAM_6_Text_0, BATTLE_KaramjaVolcano_HAM_6_Text_1
	namebox NPC_KaramjaVolcano_HAM_EVENT1_Text_0
	msgbox BATTLE_KaramjaVolcano_HAM_6_Text_2
	hidenamebox
	closemessage
	fadescreen FADE_TO_BLACK
	setflag FLAG_TEMP_1C
	removeobject 36
	fadescreen FADE_FROM_BLACK
	release
	end


NPC_KaramjaVolcano_HAM_EVENT1_Text_0:
	.string "H.A.M Grunt$"

NPC_KaramjaVolcano_HAM_EVENT1_Text_1:
	.string "Leader!\n"
	.string "This is the adventurer who gave me\l"
	.string "trouble at the Wizards Tower!$"

NPC_KaramjaVolcano_HAM_EVENT1_Text_2:
	.string "H.A.M Leader$"

NPC_KaramjaVolcano_HAM_EVENT1_Text_3:
	.string "So you are the one who interrupted our\n"
	.string "mission to retrieve the abyssal\l"
	.string "research notes.\p"
	.string "No matter, our plans were only set back\n"
	.string "slightly!\p"
	.string "We still were able to obtain the\n"
	.string "information we needed.\p"
	.string "Anyway since you made it this far, you\n"
	.string "won't be getting out of here in one\l"
	.string "piece so I may as well tell you.\p"
	.string "You may be wondering why we are all the\n"
	.string "way in the middle of this volcano?\p"
	.string "Simple, we plan to trigger an eruption\n"
	.string "wiping out all of these disgusting\l"
	.string "monsters and now you alongside with it.$"

NPC_KaramjaVolcano_HAM_EVENT1_Text_4:
	.string "Ha, you think you can stop us…\p"
	.string "This will be entertaining.$"

NPC_KaramjaVolcano_HAM_EVENT1_Text_5:
	.string "What?\n"
	.string "How can this happen…$"

NPC_KaramjaVolcano_HAM_EVENT1_Text_6:
	.string "I don't know how you are so strong but\n"
	.string "it does not matter, you are too late!\p"
	.string "Watch as we get rid of every monster on\n"
	.string "this forsaken island!$"

NPC_KaramjaVolcano_HAM_EVENT1_Text_7:
	.string "LEADER!\p"
	.string "Something is wrong!\p"
	.string "The rift… It is out of control!$"

NPC_KaramjaVolcano_HAM_EVENT1_Text_8:
	.string "Fix it then!$"

NPC_KaramjaVolcano_HAM_EVENT1_Text_9:
	.string "Abyssal Mage$"

NPC_KaramjaVolcano_HAM_EVENT1_Text_10:
	.string "Watch out!$"

NPC_KaramjaVolcano_HAM_EVENT1_Text_11:
	.string "H.A.M ADMIN$"

NPC_KaramjaVolcano_HAM_EVENT1_Text_12:
	.string "NOO!!!\p"
	.string "The calculations were meant to be\n"
	.string "correct!\p"
	.string "It seems more research is still needed…$"

NPC_KaramjaVolcano_HAM_EVENT1_Text_13:
	.string "What was that?!\p"
	.string "That wasn't the rift…$"

NPC_KaramjaVolcano_HAM_EVENT1_Text_14:
	.string "Leader we have to go!\p"
	.string "It is coming!$"

NPC_KaramjaVolcano_HAM_EVENT1_Text_15:
	.string "What is coming?$"

NPC_KaramjaVolcano_HAM_EVENT1_Text_16:
	.string "The legendary Dragon, Elvarg!\n"
	.string "It has awoken!\p"
	.string "It must awoken due to the rifts energy!$"

NPC_KaramjaVolcano_HAM_EVENT1_Text_17:
	.string "Urgh!\n"
	.string "Our plans my have been foiled this time\l"
	.string "but our team in Feldip Hills should have\l"
	.string "succeeded at obtaining the horn by now,\l"
	.string "so it is only a matter of time!\p"
	.string "Lets get out of here!$"

NPC_KaramjaVolcano_HAM_EVENT1_Text_18:
	.string "ELVARG$"

NPC_KaramjaVolcano_HAM_EVENT1_Text_19:
	.string "ROOOOOOAAAARRRR!!!$"

NPC_KaramjaVolcano_HAM_EVENT1_Text_20:
	.string "The cave starts to collapse around you.\p"
	.string "You escape to safety.$"

ENCOUNTER_LESSERDEMON_KARAMJA_1_Text_0:
	.string "Lesser Demon$"

ENCOUNTER_LESSERDEMON_KARAMJA_1_Text_1:
	.string "GWARAKU!$"

ENCOUNTER_JAD_Text_0:
	.string "JAD$"

ENCOUNTER_JAD_Text_1:
	.string "TOKTOK RAAWOORR!$"

Crandor_Event_Volcano_Text_0:
	.string "Babe$"

Crandor_Event_Volcano_Text_1:
	.string "Oh, its you!$"

Crandor_Event_Volcano_Text_2:
	.string "Patty$"

Crandor_Event_Volcano_Text_3:
	.string "Here to spoil our plans again?$"

Crandor_Event_Volcano_Text_4:
	.string "Sorry, but we are both on duty right\n"
	.string "now.\p"
	.string "The boss is here even.$"

Crandor_Event_Volcano_Text_5:
	.string "Come on Babe, lets show this monster\n"
	.string "lover what happens when they enter the\l"
	.string "wrong volcano.$"

Crandor_Event_Volcano_Text_6:
	.string "Babe: Huh, you're quite good.$"

Crandor_Event_Volcano_Text_7:
	.string "Patty: You just don't give up, do you?$"

Crandor_Event_Volcano_Text_8:
	.string "Well, nothing else to do but give up\n"
	.string "then.$"

Crandor_Event_Volcano_Text_9:
	.string "Oh no we won't.$"

Crandor_Event_Volcano_Text_10:
	.string "Boss!\n"
	.string "Get over here.$"

Crandor_Event_Volcano_Text_11:
	.string "Johanhus$"

Crandor_Event_Volcano_Text_12:
	.string "So this is the one you struggle with.$"

Crandor_Event_Volcano_Text_13:
	.string "I suppose you are a monster\n"
	.string "sympathiser.\p"
	.string "We of H.A.M are trying to do good in this\n"
	.string "world.\p"
	.string "Help you even.\p"
	.string "With the monsters gone, this world will\n"
	.string "become peaceful.\p"
	.string "It is by Saradomin's will that we do so.$"

Crandor_Event_Volcano_Text_14:
	.string "Isn't that right Sigmund?$"

Crandor_Event_Volcano_Text_15:
	.string "Sigmund$"

Crandor_Event_Volcano_Text_16:
	.string "True.\p"
	.string "Monsters.\p"
	.string "A great power, one you seem keen to use\n"
	.string "for yourself.\p"
	.string "But what if that power was turned on\n"
	.string "you?$"

Crandor_Event_Volcano_Text_17:
	.string "Even now, monsters still kill families,\n"
	.string "cause torment, create orphans.$"

Crandor_Event_Volcano_Text_18:
	.string "And you right there, choose to oppose\n"
	.string "us who wants them gone?\p"
	.string "We of H.A.M want to cleanse this world\n"
	.string "of the blight that is monsters.$"

Crandor_Event_Volcano_Text_19:
	.string "And here on Crandor, in this wrecked\n"
	.string "little volcano, we found the means to do\l"
	.string "so.\p"
	.string "Meaning.{PAUSE 32}\n"
	.string "We have no time for you.$"

Crandor_Event_Volcano_Text_20:
	.string "Shall we take our leave then?$"

Crandor_Event_Volcano_Text_21:
	.string "Yes, we now know it exists out there.\p"
	.string "A weapon to destroy all monsters.\p"
	.string "Power.$"

Crandor_Event_Volcano_Text_22:
	.string "Make sure they won't follow us.$"

Crandor_Event_Volcano_Text_23:
	.string "Wh-what was that?!$"

Crandor_Event_Volcano_Text_24:
	.string "No way!\p"
	.string "Th-that is a dragon!$"

Crandor_Event_Volcano_Text_25:
	.string "Not just any dragon!\p"
	.string "That's the legendary E-Elvarg!$"

Crandor_Event_Volcano_Text_26:
	.string "No way man I didn't sign up for this!$"

Crandor_Event_Volcano_Text_27:
	.string "What do we do!?$"

Crandor_Event_Volcano_Text_28:
	.string "I have an idea…$"

Crandor_Event_Volcano_Text_29:
	.string "R-r-run!!!$"

Crandor_Event_Volcano_Text_30:
	.string "The cave starts to collapse around you.\p"
	.string "You should probably run too.$"

CRANDOR_VOLCANO_EARTHQUAKE_4_Text_0:
	.string "???$"

CRANDOR_VOLCANO_EARTHQUAKE_4_Text_1:
	.string "Human!\p"
	.string "Quick follow me!$"

NPC_CRANDOR_VOLCANO_HAMGRUNT_1_Text_0:
	.string "Man those Lava monsters were such a\n"
	.string "pain to get through…$"

NPC_CRANDOR_VOLCANO_HAMGRUNT_1_Text_1:
	.string "Yeah I agree, the sooner we rid the\n"
	.string "world of those foul things the better!$"

NPC_CRANDOR_VOLCANO_HAMGRUNT_2_Text_0:
	.string "Who are you?\p"
	.string "I don't remember seeing you earlier.$"

NPC_CRANDOR_VOLCANO_HAMGRUNT_3_Text_0:
	.string "The boss is studying that mural over\n"
	.string "there.\p"
	.string "But it looks pretty cracked up.\p"
	.string "I hope he can find what he is looking\n"
	.string "for.$"

NPC_CRANDOR_VOLCANO_HAMGRUNT_4_Text_0:
	.string "AAH!\p"
	.string "Oh, you startled me.\p"
	.string "I thought it was another earthquake.\p"
	.string "Those have been happening ever since\n"
	.string "we got here…\p"
	.string "I hope there is no cave-in.$"

NPC_CRANDOR_VOLCANO_HAMGRUNT_5_Text_0:
	.string "Yo, this guy legit looks cripsy.\p"
	.string "I wonder what happened to him.$"

BATTLE_KaramjaVolcano_HAM_6_Text_0:
	.string "Nothing will stop us!\p"
	.string "This volcano is about to become a\n"
	.string "monster killer!$"

BATTLE_KaramjaVolcano_HAM_6_Text_1:
	.string "Wait… Won't it kill us too?$"

BATTLE_KaramjaVolcano_HAM_6_Text_2:
	.string "Nope!\n"
	.string "I don't like this plan anymore!\p"
	.string "I'm out of here!$"
