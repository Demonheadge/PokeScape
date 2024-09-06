Dungeoneering_Lobby_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Dungeoneering_Lobby_MapScripts_MAP_SCRIPT_ON_TRANSITION
	map_script MAP_SCRIPT_ON_LOAD, Dungeoneering_Lobby_MapScripts_MAP_SCRIPT_ON_LOAD
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Dungeoneering_Lobby_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Dungeoneering_Lobby_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	call Daemonheim_Lobby_STATE
	return

Dungeoneering_Lobby_MapScripts_MAP_SCRIPT_ON_LOAD:
	setflag FLAG_TEMP_12
	call Randomise_Dungeon
	return

Dungeoneering_Lobby_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_POKESCAPE_DAEMONHEIM_GYM_QUEST, 10, THOK_GYM_CHALLENGE_STATE_3
	.2byte 0


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
	delay 60
	playse SE_LEDGE
	applymovement OBJ_EVENT_ID_PLAYER, Movement_JumpIntoPortal
	waitmovement 0
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


Movement_JumpIntoPortal:
	jump_up
	set_invisible
	step_end

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


Daemonheim_Lobby_STATE::
	setflag FLAG_TEMP_1F
	switch VAR_POKESCAPE_DAEMONHEIM_GYM_QUEST
	case 10, Daemonheim_Lobby_STATE_3
Daemonheim_Lobby_STATE_1:
	return

Daemonheim_Lobby_STATE_3:
	clearflag FLAG_TEMP_1F
	addobject 2
	setobjectxyperm 1, 9, 5
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_LEFT
	goto Daemonheim_Lobby_STATE_1


THOK_GYM_CHALLENGE_STATE_3::
	applymovement 2, Movement_DaemonheimGym_8
	applymovement OBJ_EVENT_ID_PLAYER, Movement_DaemonheimGym_9
	waitmovement 2
	namebox THOK_GYM_CHALLENGE_STATE_3_Text_0
	msgbox THOK_GYM_CHALLENGE_STATE_3_Text_1
	closemessage
	hidenamebox
	playse SE_LEDGE
	applymovement 2, Movement_DaemonheimGym_10
	waitmovement 0
	setflag FLAG_TEMP_1F
	removeobject 2
	applymovement 1, Movement_DaemonheimGym_11
	waitmovement 0
	namebox THOK_GYM_CHALLENGE_STATE_3_Text_2
	msgbox THOK_GYM_CHALLENGE_STATE_3_Text_3
	closemessage
	hidenamebox
	applymovement 1, Movement_DaemonheimGym_12
	waitmovement 0
	setobjectmovementtype 1, MOVEMENT_TYPE_WANDER_AROUND
	setvar VAR_POKESCAPE_DAEMONHEIM_GYM_QUEST, 15
	return


Movement_DaemonheimGym_8:
	walk_up
	walk_up
	walk_up
	face_down
	step_end

Movement_DaemonheimGym_9:
	walk_slow_up
	walk_slow_up
	step_end

Movement_DaemonheimGym_10:
	jump_2_up
	step_end

Movement_DaemonheimGym_11:
	face_up
	delay_16
	delay_16
	walk_left
	walk_left
	walk_left
	face_down
	step_end

Movement_DaemonheimGym_12:
	walk_right
	walk_right
	walk_right
	face_left
	step_end

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

THOK_GYM_CHALLENGE_STATE_3_Text_0:
	.string "Thok$"

THOK_GYM_CHALLENGE_STATE_3_Text_1:
	.string "I'll be in Dungeon!\p"
	.string "You come find me.\l"
	.string "Then we battle.$"

THOK_GYM_CHALLENGE_STATE_3_Text_2:
	.string "Smuggler$"

THOK_GYM_CHALLENGE_STATE_3_Text_3:
	.string "Sorry about Thok, he can be a little\n"
	.string "forward.\p"
	.string "Your a gym challenger correct?\p"
	.string "It's like Thok said, you must find him\n"
	.string "within the Dungeon and then he will\l"
	.string "challenge you to a battle.\p"
	.string "The part he left out was that there are\n"
	.string "many puzzles and enemies that await\l"
	.string "you.\p"
	.string "When you are ready just jump in that\n"
	.string "portal.\p"
	.string "Good luck, I'll be here if you need any\n"
	.string "advice about the dungeon.$"
