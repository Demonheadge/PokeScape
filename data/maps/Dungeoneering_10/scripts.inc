Dungeoneering_10_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, Dungeoneering_10_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

Dungeoneering_10_MapScripts_MAP_SCRIPT_ON_LOAD:
	call Randomise_Dungeon
	return

