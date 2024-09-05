WildernessVolcano_Room_1_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, WildernessVolcano_Room_1_MapScripts_MAP_SCRIPT_ON_TRANSITION
	map_script MAP_SCRIPT_ON_FRAME_TABLE, WildernessVolcano_Room_1_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

WildernessVolcano_Room_1_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	return

WildernessVolcano_Room_1_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_TEMP_9, 0, WILDERNESS_VOLCANO_ROOM_1_WalkInCloseDoor
	.2byte 0


WILDERNESS_VOLCANO_ROOM_1_WalkInCloseDoor::
	lockall
	playse SE_TRUCK_DOOR
	setmetatile 5, 13, METATILE_ChaosTunnels_E4_CAVE_TOP_M, 1
	setmetatile 6, 13, METATILE_ChaosTunnels_E4_CAVE_TOP_M, 1
	setmetatile 7, 13, METATILE_ChaosTunnels_E4_CAVE_TOP_M, 1
	setmetatile 6, 12, METATILE_ChaosTunnels_E4_CRACKED_TILE, 0
	special DrawWholeMapView
	setvar VAR_TEMP_9, 1
	releaseall
	return


WILDERNESS_VOLCANO_ROOM_1_OpenNextRoom::
	playse SE_TRUCK_DOOR
	setmetatile 6, 2, METATILE_ChaosTunnels_E4_OPEN_DOOR_BOTTOM, 0
	setmetatile 6, 1, METATILE_ChaosTunnels_E4_OPEN_DOOR_TOP, 0
	special DrawWholeMapView
	return

