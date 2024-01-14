Dungeoneering_9_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, Dungeoneering_9_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

Dungeoneering_9_MapScripts_MAP_SCRIPT_ON_LOAD:
	call Randomise_Dungeon
	return

