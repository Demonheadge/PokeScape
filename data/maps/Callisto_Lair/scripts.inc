Callisto_Lair_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, Callisto_Lair_MapScripts_MAP_SCRIPT_ON_LOAD
	map_script MAP_SCRIPT_ON_TRANSITION, Callisto_Lair_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Callisto_Lair_MapScripts_MAP_SCRIPT_ON_LOAD:
	call CALLISTO_STATE
	return

Callisto_Lair_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setvar VAR_EVOLUTION_MAP_STATE, 6
	return


CALLISTO_STATE::
	switch VAR_CALLISTO_STATE
	case 0, CALLISTO_STATE_2
	case 5, CALLISTO_STATE_3
	return

CALLISTO_STATE_2:
	clearflag FLAG_TEMP_A
	return

CALLISTO_STATE_3:
	removeobject 1
	setflag FLAG_TEMP_A
	return


ENCOUNTER_CALLISTO::
	lock
	namebox ENCOUNTER_CALLISTO_Text_0
	playmoncry SPECIES_URSARING, 0
	msgbox ENCOUNTER_CALLISTO_Text_1
	waitmoncry
	hidenamebox
	closemessage
	delay 1
	setwildbattle SPECIES_CALLISTO, 40, ITEM_NONE
	dowildbattle
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq ENCOUNTER_CALLISTO_2
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq ENCOUNTER_CALLISTO_3
	end

ENCOUNTER_CALLISTO_2:
	fadescreen FADE_TO_BLACK
	setvar VAR_CALLISTO_STATE, 0
	setflag FLAG_TEMP_A
	removeobject 1
	fadescreen FADE_FROM_BLACK
	closemessage
	end

ENCOUNTER_CALLISTO_3:
	fadescreen FADE_TO_BLACK
	setvar VAR_CALLISTO_STATE, 5
	setflag FLAG_TEMP_A
	removeobject 1
	fadescreen FADE_FROM_BLACK
	closemessage
	end


ENCOUNTER_CALLISTO_Text_0:
	.string "CALLISTO$"

ENCOUNTER_CALLISTO_Text_1:
	.string "ROARR!$"
