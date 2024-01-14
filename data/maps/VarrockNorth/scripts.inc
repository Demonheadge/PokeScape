VarrockNorth_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, VarrockNorth_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

VarrockNorth_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setvar VAR_EVOLUTION_MAP_STATE, 16
	return

