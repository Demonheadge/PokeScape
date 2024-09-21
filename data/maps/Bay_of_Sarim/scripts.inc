Bay_of_Sarim_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Bay_of_Sarim_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Bay_of_Sarim_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setvar VAR_EVOLUTION_MAP_STATE, 15
	call WEATHER_CHANGE_SEA_ROUTES_CALM
	return

