KaramjaVolcano_B3F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, KaramjaVolcano_B3F_MapScripts_MAP_SCRIPT_ON_TRANSITION
	map_script MAP_SCRIPT_ON_LOAD, KaramjaVolcano_B3F_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

KaramjaVolcano_B3F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setvar VAR_EVOLUTION_MAP_STATE, 15
	return

KaramjaVolcano_B3F_MapScripts_MAP_SCRIPT_ON_LOAD:
	goto KaramjaVolcano_STATE3
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
