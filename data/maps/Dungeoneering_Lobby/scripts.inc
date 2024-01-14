Dungeoneering_Lobby_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, Dungeoneering_Lobby_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

Dungeoneering_Lobby_MapScripts_MAP_SCRIPT_ON_LOAD:
	setflag FLAG_TEMP_12
	call Randomise_Dungeon
	return


DUNGEONEERING_CHECK_VAR::
	buffernumberstring STR_VAR_1, VAR_DUNGEONEERING_STARTER_ROOM
	msgbox DUNGEONEERING_CHECK_VAR_Text_0
	buffernumberstring STR_VAR_1, VAR_DUNGEONEERING_RANDOM_PUZZLE_1
	msgbox DUNGEONEERING_CHECK_VAR_Text_1
	buffernumberstring STR_VAR_1, VAR_DUNGEONEERING_RANDOM_PUZZLE_2
	msgbox DUNGEONEERING_CHECK_VAR_Text_2
	buffernumberstring STR_VAR_1, VAR_DUNGEONEERING_RANDOM_PUZZLE_3
	msgbox DUNGEONEERING_CHECK_VAR_Text_3
	buffernumberstring STR_VAR_1, VAR_DUNGEONEERING_RANDOM_PUZZLE_4
	msgbox DUNGEONEERING_CHECK_VAR_Text_4
	buffernumberstring STR_VAR_1, VAR_DUNGEONEERING_RANDOM_PUZZLE_5
	msgbox DUNGEONEERING_CHECK_VAR_Text_5
	buffernumberstring STR_VAR_1, VAR_DUNGEONEERING_RANDOM_PUZZLE_6
	msgbox DUNGEONEERING_CHECK_VAR_Text_6
	buffernumberstring STR_VAR_1, VAR_DUNGEONEERING_RANDOM_PUZZLE_7
	msgbox DUNGEONEERING_CHECK_VAR_Text_7
	buffernumberstring STR_VAR_1, VAR_DUNGEONEERING_RANDOM_PUZZLE_8
	msgbox DUNGEONEERING_CHECK_VAR_Text_8
	closemessage
	release
	end


Randomise_Puzzles::
	setvar VAR_DUNGEONEERING_AMOUNT_OF_PUZZLES, 6
	random VAR_DUNGEONEERING_AMOUNT_OF_PUZZLES
	copyvar VAR_DUNGEONEERING_RANDOM_PUZZLE_1, VAR_RESULT
	random VAR_DUNGEONEERING_AMOUNT_OF_PUZZLES
	copyvar VAR_DUNGEONEERING_RANDOM_PUZZLE_2, VAR_RESULT
	random VAR_DUNGEONEERING_AMOUNT_OF_PUZZLES
	copyvar VAR_DUNGEONEERING_RANDOM_PUZZLE_3, VAR_RESULT
	random VAR_DUNGEONEERING_AMOUNT_OF_PUZZLES
	copyvar VAR_DUNGEONEERING_RANDOM_PUZZLE_4, VAR_RESULT
	random VAR_DUNGEONEERING_AMOUNT_OF_PUZZLES
	copyvar VAR_DUNGEONEERING_RANDOM_PUZZLE_5, VAR_RESULT
	random VAR_DUNGEONEERING_AMOUNT_OF_PUZZLES
	copyvar VAR_DUNGEONEERING_RANDOM_PUZZLE_6, VAR_RESULT
	random VAR_DUNGEONEERING_AMOUNT_OF_PUZZLES
	copyvar VAR_DUNGEONEERING_RANDOM_PUZZLE_7, VAR_RESULT
	random VAR_DUNGEONEERING_AMOUNT_OF_PUZZLES
	copyvar VAR_DUNGEONEERING_RANDOM_PUZZLE_8, VAR_RESULT
	return


Start_Dungeoneering::
	call RandomiseSeed_ForDoors
	call Randomise_Dungeon
	call Randomise_Puzzles
	compare VAR_DUNGEONEERING_STARTER_ROOM, 1
	goto_if_eq Start_Dungeoneering_1
	compare VAR_DUNGEONEERING_STARTER_ROOM, 2
	goto_if_eq Start_Dungeoneering_2
	compare VAR_DUNGEONEERING_STARTER_ROOM, 3
	goto_if_eq Start_Dungeoneering_3
	compare VAR_DUNGEONEERING_STARTER_ROOM, 4
	goto_if_eq Start_Dungeoneering_4
	compare VAR_DUNGEONEERING_STARTER_ROOM, 5
	goto_if_eq Start_Dungeoneering_5
	compare VAR_DUNGEONEERING_STARTER_ROOM, 6
	goto_if_eq Start_Dungeoneering_6
	compare VAR_DUNGEONEERING_STARTER_ROOM, 7
	goto_if_eq Start_Dungeoneering_7
	compare VAR_DUNGEONEERING_STARTER_ROOM, 8
	goto_if_eq Start_Dungeoneering_8
	compare VAR_DUNGEONEERING_STARTER_ROOM, 9
	goto_if_eq Start_Dungeoneering_9
	compare VAR_DUNGEONEERING_STARTER_ROOM, 10
	goto_if_eq Start_Dungeoneering_10
	compare VAR_DUNGEONEERING_STARTER_ROOM, 11
	goto_if_eq Start_Dungeoneering_11
	compare VAR_DUNGEONEERING_STARTER_ROOM, 12
	goto_if_eq Start_Dungeoneering_12
	compare VAR_DUNGEONEERING_STARTER_ROOM, 13
	goto_if_eq Start_Dungeoneering_13
	compare VAR_DUNGEONEERING_STARTER_ROOM, 14
	goto_if_eq Start_Dungeoneering_14
	compare VAR_DUNGEONEERING_STARTER_ROOM, 15
	goto_if_eq Start_Dungeoneering_15
	compare VAR_DUNGEONEERING_STARTER_ROOM, 16
	goto_if_eq Start_Dungeoneering_16
	return

Start_Dungeoneering_1:
	warp MAP_DUNGEONEERING_1, 0, 0, 0
	waitstate
	return

Start_Dungeoneering_2:
	warp MAP_DUNGEONEERING_2, 0, 0, 0
	waitstate
	return

Start_Dungeoneering_3:
	warp MAP_DUNGEONEERING_3, 0, 0, 0
	waitstate
	return

Start_Dungeoneering_4:
	warp MAP_DUNGEONEERING_4, 0, 0, 0
	waitstate
	return

Start_Dungeoneering_5:
	warp MAP_DUNGEONEERING_5, 0, 0, 0
	waitstate
	return

Start_Dungeoneering_6:
	warp MAP_DUNGEONEERING_6, 0, 0, 0
	waitstate
	return

Start_Dungeoneering_7:
	warp MAP_DUNGEONEERING_7, 0, 0, 0
	waitstate
	return

Start_Dungeoneering_8:
	warp MAP_DUNGEONEERING_8, 0, 0, 0
	waitstate
	return

Start_Dungeoneering_9:
	warp MAP_DUNGEONEERING_9, 0, 0, 0
	waitstate
	return

Start_Dungeoneering_10:
	warp MAP_DUNGEONEERING_10, 0, 0, 0
	waitstate
	return

Start_Dungeoneering_11:
	warp MAP_DUNGEONEERING_11, 0, 0, 0
	waitstate
	return

Start_Dungeoneering_12:
	warp MAP_DUNGEONEERING_12, 0, 0, 0
	waitstate
	return

Start_Dungeoneering_13:
	warp MAP_DUNGEONEERING_13, 0, 0, 0
	waitstate
	return

Start_Dungeoneering_14:
	warp MAP_DUNGEONEERING_14, 0, 0, 0
	waitstate
	return

Start_Dungeoneering_15:
	warp MAP_DUNGEONEERING_15, 0, 0, 0
	waitstate
	return

Start_Dungeoneering_16:
	warp MAP_DUNGEONEERING_16, 0, 0, 0
	waitstate
	return


DungeonLayout_ROOM_PATH_1::
	setvar VAR_DUNGEONEERING_STARTER_ROOM, 1
	specialvar VAR_RESULT, GetCurrentMap
	call_if_eq VAR_RESULT, MAP_DUNGEONEERING_1, DungeonLayout_StartingRoom
	call DungeonLayout_BLOCKED_RIGHT_ROOM_1
	call DungeonLayout_BLOCKED_LEFT_ROOM_1
	call DungeonLayout_BLOCKED_DOWN_ROOM_1
	call DungeonLayout_BLOCKED_RIGHT_ROOM_4
	call DungeonLayout_BLOCKED_RIGHT_ROOM_1
	call DungeonLayout_BLOCKED_UP_ROOM_8
	setvar VAR_DUNGEONEERING_BOSS_ROOM, 12
	specialvar VAR_RESULT, GetCurrentMap
	call_if_eq VAR_RESULT, MAP_DUNGEONEERING_12, DungeonLayout_BossRoom
	return


DungeonLayout_ROOM_PATH_2::
	setvar VAR_DUNGEONEERING_STARTER_ROOM, 1
	specialvar VAR_RESULT, GetCurrentMap
	call_if_eq VAR_RESULT, MAP_DUNGEONEERING_1, DungeonLayout_StartingRoom
	call DungeonLayout_BLOCKED_DOWN_ROOM_1
	call DungeonLayout_BLOCKED_DOWN_ROOM_2
	call DungeonLayout_BLOCKED_UP_ROOM_3
	call DungeonLayout_BLOCKED_RIGHT_ROOM_4
	setvar VAR_DUNGEONEERING_BOSS_ROOM, 12
	specialvar VAR_RESULT, GetCurrentMap
	call_if_eq VAR_RESULT, MAP_DUNGEONEERING_12, DungeonLayout_BossRoom
	return


DungeonLayout_ROOM_PATH_3::
	setvar VAR_DUNGEONEERING_STARTER_ROOM, 8
	specialvar VAR_RESULT, GetCurrentMap
	call_if_eq VAR_RESULT, MAP_DUNGEONEERING_8, DungeonLayout_StartingRoom
	call DungeonLayout_BLOCKED_RIGHT_ROOM_12
	call DungeonLayout_BLOCKED_LEFT_ROOM_8
	call DungeonLayout_BLOCKED_RIGHT_ROOM_5
	call DungeonLayout_BLOCKED_LEFT_ROOM_14
	call DungeonLayout_BLOCKED_DOWN_ROOM_1
	call DungeonLayout_BLOCKED_LEFT_ROOM_1
	call DungeonLayout_BLOCKED_DOWN_ROOM_2
	setvar VAR_DUNGEONEERING_BOSS_ROOM, 12
	specialvar VAR_RESULT, GetCurrentMap
	call_if_eq VAR_RESULT, MAP_DUNGEONEERING_12, DungeonLayout_BossRoom
	return


DungeonLayout_ROOM_PATH_4::
	setvar VAR_DUNGEONEERING_STARTER_ROOM, 6
	specialvar VAR_RESULT, GetCurrentMap
	call_if_eq VAR_RESULT, MAP_DUNGEONEERING_6, DungeonLayout_StartingRoom
	call DungeonLayout_BLOCKED_RIGHT_ROOM_2
	call DungeonLayout_BLOCKED_RIGHT_ROOM_1
	call DungeonLayout_BLOCKED_UP_ROOM_2
	setvar VAR_DUNGEONEERING_BOSS_ROOM, 2
	specialvar VAR_RESULT, GetCurrentMap
	call_if_eq VAR_RESULT, MAP_DUNGEONEERING_2, DungeonLayout_BossRoom
	return


DungeonLayout_ROOM_PATH_5::
	setvar VAR_DUNGEONEERING_STARTER_ROOM, 4
	specialvar VAR_RESULT, GetCurrentMap
	call_if_eq VAR_RESULT, MAP_DUNGEONEERING_4, DungeonLayout_StartingRoom
	call DungeonLayout_BLOCKED_RIGHT_ROOM_4
	call DungeonLayout_BLOCKED_DOWN_ROOM_1
	call DungeonLayout_BLOCKED_DOWN_ROOM_12
	call DungeonLayout_BLOCKED_UP_ROOM_8
	call DungeonLayout_BLOCKED_UP_ROOM_15
	call DungeonLayout_BLOCKED_UP_ROOM_14
	call DungeonLayout_BLOCKED_DOWN_ROOM_3
	call DungeonLayout_BLOCKED_UP_ROOM_3
	call DungeonLayout_BLOCKED_LEFT_ROOM_5
	specialvar VAR_RESULT, GetCurrentMap
	call_if_eq VAR_RESULT, MAP_DUNGEONEERING_1, DungeonLayout_PuzzleRoom_1
	specialvar VAR_RESULT, GetCurrentMap
	call_if_eq VAR_RESULT, MAP_DUNGEONEERING_2, DungeonLayout_PuzzleRoom_2
	specialvar VAR_RESULT, GetCurrentMap
	call_if_eq VAR_RESULT, MAP_DUNGEONEERING_3, DungeonLayout_PuzzleRoom_3
	specialvar VAR_RESULT, GetCurrentMap
	call_if_eq VAR_RESULT, MAP_DUNGEONEERING_5, DungeonLayout_PuzzleRoom_5
	specialvar VAR_RESULT, GetCurrentMap
	call_if_eq VAR_RESULT, MAP_DUNGEONEERING_6, DungeonLayout_PuzzleRoom_6
	specialvar VAR_RESULT, GetCurrentMap
	call_if_eq VAR_RESULT, MAP_DUNGEONEERING_7, DungeonLayout_PuzzleRoom_7
	specialvar VAR_RESULT, GetCurrentMap
	call_if_eq VAR_RESULT, MAP_DUNGEONEERING_8, DungeonLayout_PuzzleRoom_8
	setvar VAR_DUNGEONEERING_BOSS_ROOM, 11
	specialvar VAR_RESULT, GetCurrentMap
	call_if_eq VAR_RESULT, MAP_DUNGEONEERING_11, DungeonLayout_BossRoom
	return


DUNGEONEERING_CHECK_VAR_Text_0:
	.string "The Starting room is Room:\n"
	.string "{STR_VAR_1}.$"

DUNGEONEERING_CHECK_VAR_Text_1:
	.string "The Puzzle Room 1 is: {STR_VAR_1}.$"

DUNGEONEERING_CHECK_VAR_Text_2:
	.string "The Puzzle Room 2 is: {STR_VAR_1}.$"

DUNGEONEERING_CHECK_VAR_Text_3:
	.string "The Puzzle Room 3 is: {STR_VAR_1}.$"

DUNGEONEERING_CHECK_VAR_Text_4:
	.string "The Puzzle Room 4 is: {STR_VAR_1}.$"

DUNGEONEERING_CHECK_VAR_Text_5:
	.string "The Puzzle Room 5 is: {STR_VAR_1}.$"

DUNGEONEERING_CHECK_VAR_Text_6:
	.string "The Puzzle Room 6 is: {STR_VAR_1}.$"

DUNGEONEERING_CHECK_VAR_Text_7:
	.string "The Puzzle Room 7 is: {STR_VAR_1}.$"

DUNGEONEERING_CHECK_VAR_Text_8:
	.string "The Puzzle Room 8 is: {STR_VAR_1}.$"
