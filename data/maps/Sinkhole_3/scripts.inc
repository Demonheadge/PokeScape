Sinkhole_3_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, Sinkhole_3_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

Sinkhole_3_MapScripts_MAP_SCRIPT_ON_LOAD:
	call Randomise_Dungeon_FAILED3
	return


Randomise_Dungeon_Seed::
	random 128
	copyvar VAR_SEED, VAR_RESULT
	buffernumberstring STR_VAR_3, VAR_SEED
	msgbox Randomise_Dungeon_Seed_Text_0
	closemessage
	return


Check_Dungeon_Seed::
	buffernumberstring STR_VAR_3, VAR_SEED
	msgbox Randomise_Dungeon_Seed_Text_0
	closemessage
	return


Randomise_Dungeon_FAILED3::
	setvar VAR_TEMP_9, 7
	specialvar VAR_RESULT, GetSeededResult
	call_if_eq VAR_RESULT, 0, DungeonLayout_SetDoors_RIGHT
	call_if_eq VAR_RESULT, 1, DungeonLayout_SetDoors_LEFT
	call_if_eq VAR_RESULT, 2, DungeonLayout_SetDoors_DOWN
	call_if_eq VAR_RESULT, 3, DungeonLayout_SetDoors_RIGHT_LEFT
	call_if_eq VAR_RESULT, 4, DungeonLayout_SetDoors_RIGHT_LEFT_DOWN
	call_if_eq VAR_RESULT, 5, DungeonLayout_SetDoors_RIGHT_DOWN
	call_if_eq VAR_RESULT, 6, DungeonLayout_SetDoors_LEFT_DOWN
	setvar VAR_TEMP_9, 2
	specialvar VAR_RESULT, GetSeededResult
	call_if_eq VAR_RESULT, 0, DungeonLayout_1
	call_if_eq VAR_RESULT, 1, DungeonLayout_2
	special DrawWholeMapView
	return


Randomise_Dungeon_FAILED1::
	compare VAR_DUNGEONEERING_DOOR, 1
	goto_if_eq Randomise_Dungeon_FAILED1_2
	compare VAR_DUNGEONEERING_DOOR, 2
	goto_if_eq Randomise_Dungeon_FAILED1_3
	compare VAR_DUNGEONEERING_DOOR, 3
	goto_if_eq Randomise_Dungeon_FAILED1_4
Randomise_Dungeon_FAILED1_1:
	setvar VAR_DUNGEONEERING_DOOR, 0
	setvar VAR_TEMP_9, 7
	specialvar VAR_RESULT, GetSeededResult
	call_if_eq VAR_RESULT, 0, DungeonLayout_SetDoors_RIGHT
	call_if_eq VAR_RESULT, 1, DungeonLayout_SetDoors_LEFT
	call_if_eq VAR_RESULT, 2, DungeonLayout_SetDoors_DOWN
	call_if_eq VAR_RESULT, 3, DungeonLayout_SetDoors_RIGHT_LEFT
	call_if_eq VAR_RESULT, 4, DungeonLayout_SetDoors_RIGHT_LEFT_DOWN
	call_if_eq VAR_RESULT, 5, DungeonLayout_SetDoors_RIGHT_DOWN
	call_if_eq VAR_RESULT, 6, DungeonLayout_SetDoors_LEFT_DOWN
	setvar VAR_TEMP_9, 2
	specialvar VAR_RESULT, GetSeededResult
	call_if_eq VAR_RESULT, 0, DungeonLayout_1
	call_if_eq VAR_RESULT, 1, DungeonLayout_2
	special DrawWholeMapView
	return

Randomise_Dungeon_FAILED1_2:
	call DungeonLayout_SetDoors_LEFT
	goto Randomise_Dungeon_FAILED1_1

Randomise_Dungeon_FAILED1_3:
	call DungeonLayout_SetDoors_RIGHT
	goto Randomise_Dungeon_FAILED1_1

Randomise_Dungeon_FAILED1_4:
	call DungeonLayout_SetDoors_DOWN
	goto Randomise_Dungeon_FAILED1_1


DungeonLayout_RESET_DOORS::
	setvar VAR_DUNGEONEERING_DOOR, 0
	return


Randomise_Dungeon_FAILED2::
	setvar VAR_TEMP_9, 2
	specialvar VAR_RESULT, GetSeededResult
	call_if_eq VAR_RESULT, 0, DungeonLayout_1
	call_if_eq VAR_RESULT, 1, DungeonLayout_2
	special DrawWholeMapView
	return


DungeonLayout_SetDoors_RIGHT::
	setmetatile 0, 4, 524, 1
	setmetatile 1, 4, 531, 1
	setmetatile 0, 5, 523, 1
	setmetatile 1, 5, 539, 1
	setmetatile 0, 6, 523, 1
	setmetatile 1, 6, 547, 0
	setmetatile 0, 7, 563, 1
	setmetatile 1, 7, 515, 1
	setmetatile 10, 6, 520, 0
	setvar VAR_DUNGEONEERING_DOOR, 1
	return


DungeonLayout_SetDoors_LEFT::
	setmetatile 13, 4, 529, 1
	setmetatile 14, 4, 516, 1
	setmetatile 13, 5, 537, 1
	setmetatile 14, 5, 521, 1
	setmetatile 13, 6, 549, 0
	setmetatile 14, 6, 521, 1
	setmetatile 13, 7, 513, 1
	setmetatile 14, 7, 564, 1
	setmetatile 12, 6, 520, 0
	setvar VAR_DUNGEONEERING_DOOR, 2
	return


DungeonLayout_SetDoors_DOWN::
	setmetatile 6, 8, 555, 0
	setmetatile 7, 8, 556, 0
	setmetatile 8, 8, 557, 0
	setvar VAR_DUNGEONEERING_DOOR, 3
	return


DungeonLayout_SetDoors_UP::
	setmetatile 6, 2, 555, 0
	setmetatile 7, 2, 556, 0
	setmetatile 8, 2, 557, 0
	setvar VAR_DUNGEONEERING_DOOR, 4
	return


DungeonLayout_SetDoors_RIGHT_LEFT::
	setmetatile 0, 4, 524, 1
	setmetatile 1, 4, 531, 1
	setmetatile 0, 5, 523, 1
	setmetatile 1, 5, 539, 1
	setmetatile 0, 6, 523, 1
	setmetatile 1, 6, 547, 0
	setmetatile 0, 7, 563, 1
	setmetatile 1, 7, 515, 1
	setmetatile 10, 6, 520, 0
	setvar VAR_DUNGEONEERING_DOOR, 1
	setmetatile 13, 4, 529, 1
	setmetatile 14, 4, 516, 1
	setmetatile 13, 5, 537, 1
	setmetatile 14, 5, 521, 1
	setmetatile 13, 6, 549, 0
	setmetatile 14, 6, 521, 1
	setmetatile 13, 7, 513, 1
	setmetatile 14, 7, 564, 1
	setmetatile 12, 6, 520, 0
	setvar VAR_DUNGEONEERING_DOOR, 2
	return


DungeonLayout_SetDoors_RIGHT_LEFT_DOWN::
	setmetatile 0, 4, 524, 1
	setmetatile 1, 4, 531, 1
	setmetatile 0, 5, 523, 1
	setmetatile 1, 5, 539, 1
	setmetatile 0, 6, 523, 1
	setmetatile 1, 6, 547, 0
	setmetatile 0, 7, 563, 1
	setmetatile 1, 7, 515, 1
	setmetatile 10, 6, 520, 0
	setvar VAR_DUNGEONEERING_DOOR, 1
	setmetatile 13, 4, 529, 1
	setmetatile 14, 4, 516, 1
	setmetatile 13, 5, 537, 1
	setmetatile 14, 5, 521, 1
	setmetatile 13, 6, 549, 0
	setmetatile 14, 6, 521, 1
	setmetatile 13, 7, 513, 1
	setmetatile 14, 7, 564, 1
	setmetatile 12, 6, 520, 0
	setvar VAR_DUNGEONEERING_DOOR, 2
	setmetatile 6, 8, 555, 0
	setmetatile 7, 8, 556, 0
	setmetatile 8, 8, 557, 0
	setvar VAR_DUNGEONEERING_DOOR, 3
	return


DungeonLayout_SetDoors_LEFT_DOWN::
	setmetatile 13, 4, 529, 1
	setmetatile 14, 4, 516, 1
	setmetatile 13, 5, 537, 1
	setmetatile 14, 5, 521, 1
	setmetatile 13, 6, 549, 0
	setmetatile 14, 6, 521, 1
	setmetatile 13, 7, 513, 1
	setmetatile 14, 7, 564, 1
	setmetatile 12, 6, 520, 0
	setvar VAR_DUNGEONEERING_DOOR, 2
	setmetatile 6, 8, 555, 0
	setmetatile 7, 8, 556, 0
	setmetatile 8, 8, 557, 0
	setvar VAR_DUNGEONEERING_DOOR, 3
	return


DungeonLayout_SetDoors_RIGHT_DOWN::
	setmetatile 0, 4, 524, 1
	setmetatile 1, 4, 531, 1
	setmetatile 0, 5, 523, 1
	setmetatile 1, 5, 539, 1
	setmetatile 0, 6, 523, 1
	setmetatile 1, 6, 547, 0
	setmetatile 0, 7, 563, 1
	setmetatile 1, 7, 515, 1
	setmetatile 10, 6, 520, 0
	setvar VAR_DUNGEONEERING_DOOR, 1
	setmetatile 6, 8, 555, 0
	setmetatile 7, 8, 556, 0
	setmetatile 8, 8, 557, 0
	setvar VAR_DUNGEONEERING_DOOR, 3
	return


DungeonLayout_1::
	setmetatile 2, 3, 613, 0
	setmetatile 3, 3, 618, 1
	setmetatile 11, 3, 612, 1
	setmetatile 12, 3, 614, 0
	setmetatile 2, 4, 621, 1
	setmetatile 3, 4, 619, 1
	setmetatile 12, 4, 622, 1
	setmetatile 2, 5, 610, 1
	setmetatile 2, 7, 613, 0
	setmetatile 2, 8, 621, 1
	setmetatile 12, 7, 614, 0
	setmetatile 12, 8, 622, 1
	return


DungeonLayout_2::
	setmetatile 10, 5, 614, 0
	setmetatile 10, 6, 622, 1
	return


Randomise_Dungeon_Seed_Text_0:
	.string "VAR SEED is {STR_VAR_3} .$"
