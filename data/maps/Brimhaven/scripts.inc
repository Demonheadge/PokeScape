Brimhaven_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Brimhaven_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Brimhaven_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setvar VAR_EVOLUTION_MAP_STATE, 15
	call WEATHER_CHANGE_AREA_MUSAPOINT
	return

