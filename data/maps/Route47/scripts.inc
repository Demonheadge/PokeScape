Route47_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route47_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Route47_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setvar VAR_EVOLUTION_MAP_STATE, 6
	call SPECIAL_PENGUIN_EVENT
	return


ENCOUNTER_PENGUIN_ROCK::
	lock
	faceplayer
	namebox ENCOUNTER_PENGUIN_ROCK_Text_0
	playmoncry SPECIES_PIDGEY, 0
	msgbox ENCOUNTER_PENGUIN_ROCK_Text_1
	waitmoncry
	hidenamebox
	closemessage
	delay 1
	setwildbattle SPECIES_PENGUIN_DISGUISE_ROCK_FORM, 15, ITEM_NONE
	dowildbattle
	fadescreen FADE_TO_BLACK
	setflag FLAG_TEMP_8
	setflag FLAG_TEMP_9
	removeobject 1
	removeobject 2
	fadedefaultbgm
	fadescreen FADE_FROM_BLACK
	closemessage
	end


ENCOUNTER_PENGUIN_ROCK_Text_0:
	.string "Penguin$"

ENCOUNTER_PENGUIN_ROCK_Text_1:
	.string "Noot! Noot!$"
