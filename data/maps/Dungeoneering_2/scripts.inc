Dungeoneering_2_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, Dungeoneering_2_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

Dungeoneering_2_MapScripts_MAP_SCRIPT_ON_LOAD:
	call Randomise_Dungeon
	return

