Varrock_Bank_East_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, Varrock_Bank_East_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

Varrock_Bank_East_MapScripts_MAP_SCRIPT_ON_LOAD:
	call VarrockEast_Bank_OnTransition
	return


VarrockEast_Bank_OnTransition::
	setrespawn HEAL_LOCATION_VARROCK2
	return

