Shantay_Pass_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Shantay_Pass_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Shantay_Pass_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setvar VAR_EVOLUTION_MAP_STATE, 11
	call WEATHER_CHANGE_AREA_DESERT_ROUGH
	return

