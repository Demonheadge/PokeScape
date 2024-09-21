Ice_Mountain_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Ice_Mountain_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Ice_Mountain_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setvar VAR_EVOLUTION_MAP_STATE, 3
	call WEATHER_CHANGE_AREA_ICE_MOUNTAIN
	return

