Dungeoneering_15_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, Dungeoneering_15_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

Dungeoneering_15_MapScripts_MAP_SCRIPT_ON_LOAD:
	call Randomise_Dungeon
	return

