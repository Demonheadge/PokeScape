Falador_Castle_1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Falador_Castle_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION
	map_script MAP_SCRIPT_ON_LOAD, Falador_Castle_1F_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

Falador_Castle_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	compare VAR_POKESCAPE_GAMEMODE_STATE, 0
	goto_if_eq Falador_Castle_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	call OPENWORLD_STATE_FALADOR_CASTLE_1F
	return

Falador_Castle_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	call STORYMODE_STATE_FALADOR_CASTLE_1F
	return

Falador_Castle_1F_MapScripts_MAP_SCRIPT_ON_LOAD:
	call FALADOR_GYM_MUSIC
	return


OPENWORLD_STATE_FALADOR_CASTLE_1F::
	removeobject 2
	removeobject 5
	removeobject 3
	removeobject 4
	removeobject 8
	setflag FLAG_TEMP_1
	return


STORYMODE_STATE_FALADOR_CASTLE_1F::
	compare VAR_POKESCAPE_STORYMODE_PROGRESS, 115
	goto_if_eq STORYMODE_STATE_FALADOR_CASTLE_1F_2
	removeobject 2
	removeobject 5
	removeobject 3
	removeobject 4
	removeobject 8
	setflag FLAG_TEMP_1
STORYMODE_STATE_FALADOR_CASTLE_1F_1:
	return

STORYMODE_STATE_FALADOR_CASTLE_1F_2:
	addobject 2
	addobject 5
	addobject 3
	addobject 4
	addobject 8
	clearflag FLAG_TEMP_1
	goto STORYMODE_STATE_FALADOR_CASTLE_1F_1

