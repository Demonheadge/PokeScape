Dungeoneering_8_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, Dungeoneering_8_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

Dungeoneering_8_MapScripts_MAP_SCRIPT_ON_LOAD:
	call Randomise_Dungeon
	return

