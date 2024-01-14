Dungeoneering_16_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, Dungeoneering_16_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

Dungeoneering_16_MapScripts_MAP_SCRIPT_ON_LOAD:
	call Randomise_Dungeon
	return

