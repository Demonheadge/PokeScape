Route20_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route20_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Route20_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	goto ROUTE20_STATE
	return


ROUTE20_STATE::
	setflag FLAG_TEMP_1F
	setflag FLAG_TEMP_1E
	removeobject 9
	removeobject 10
	removeobject 11
	removeobject 12
	removeobject 13
	compare VAR_POKESCAPE_STORYMODE_PROGRESS, 160
	goto_if_eq ROUTE20_STATE_2
ROUTE20_STATE_1:
	compare VAR_POKESCAPE_STORYMODE_PROGRESS, 165
	goto_if_eq ROUTE20_STATE_4
	return

ROUTE20_STATE_2:
	clearflag FLAG_TEMP_1F
	clearflag FLAG_TEMP_1E
	addobject 9
	addobject 10
	addobject 11
	addobject 12
	addobject 13
	goto ROUTE20_STATE_1

ROUTE20_STATE_4:
	clearflag FLAG_TEMP_1E
	addobject 11
	addobject 12
	return

