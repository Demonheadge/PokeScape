AlKharid_Bank_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, AlKharid_Bank_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

AlKharid_Bank_MapScripts_MAP_SCRIPT_ON_LOAD:
	call AlKharid_Bank_OnTransition
	return


AlKharid_Bank_OnTransition::
	setrespawn HEAL_LOCATION_AL_KHARID
	return

