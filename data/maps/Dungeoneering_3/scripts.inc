Dungeoneering_3_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, Dungeoneering_3_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

Dungeoneering_3_MapScripts_MAP_SCRIPT_ON_LOAD:
	call Randomise_Dungeon
	return

