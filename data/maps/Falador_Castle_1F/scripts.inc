Falador_Castle_1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Falador_Castle_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Falador_Castle_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	compare VAR_POKESCAPE_GAMEMODE_STATE, 0
	goto_if_eq Falador_Castle_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	call OPENWORLD_STATE_FALADOR_CASTLE_1F
	return

Falador_Castle_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	return


OPENWORLD_STATE_FALADOR_CASTLE_1F::
	removeobject 2
	removeobject 5
	removeobject 3
	removeobject 4
	removeobject 8
	setflag FLAG_TEMP_1
	return

