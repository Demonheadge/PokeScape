Draynor_Manor_1F_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, Draynor_Manor_1F_MapScripts_MAP_SCRIPT_ON_LOAD
	map_script MAP_SCRIPT_ON_TRANSITION, Draynor_Manor_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Draynor_Manor_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Draynor_Manor_1F_MapScripts_MAP_SCRIPT_ON_LOAD:
	call DraynorManor_Lever_STATE
	call STORYMODE_STATE_DRAYNORMANOR_1F
	return

Draynor_Manor_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setvar VAR_EVOLUTION_MAP_STATE, 1
	return

Draynor_Manor_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_POKESCAPE_WIZARDS_TOWER_STATE, 7, HAM_EVENT_DRAYNORMANOR_1F
	map_script_2 VAR_TEMP_B, 1, HAM_EVENT_DRAYNORMANOR_1F
	.2byte 0


STORYMODE_STATE_DRAYNORMANOR_1F::
	checkitem ITEM_FISH_FOOD, 1
	compare VAR_RESULT, 0
	goto_if_ne STORYMODE_STATE_DRAYNORMANOR_1F_2
	setmetatile 9, 10, METATILE_PokeScapeIndoors_CUPBOARD_ITEMS, 1
	setmetatile 12, 2, METATILE_PokeScapeIndoors_CUPBOARD_ITEMS, 1
	setmetatile 13, 2, METATILE_PokeScapeIndoors_CUPBOARD_ITEMS, 1
	special DrawWholeMapView
STORYMODE_STATE_DRAYNORMANOR_1F_1:
	setflag FLAG_TEMP_1E
	removeobject 18
	switch VAR_POKESCAPE_STORYMODE_PROGRESS
	case 20, STORYMODE_STATE_DRAYNORMANOR_1F_7
	case 25, STORYMODE_STATE_DRAYNORMANOR_1F_7
	case 26, STORYMODE_STATE_DRAYNORMANOR_1F_8
	case 27, STORYMODE_STATE_DRAYNORMANOR_1F_9
	case 28, STORYMODE_STATE_DRAYNORMANOR_1F_10
STORYMODE_STATE_DRAYNORMANOR_1F_5:
	checkfollower
	compare VAR_RESULT, 0
	goto_if_ne STORYMODE_STATE_DRAYNORMANOR_1F_12
	removeobject 17
	setflag FLAG_TEMP_1F
STORYMODE_STATE_DRAYNORMANOR_1F_11:
	switch VAR_POKESCAPE_WIZARDS_TOWER_STATE
	case 8, STORYMODE_STATE_DRAYNORMANOR_1F_17
STORYMODE_STATE_DRAYNORMANOR_1F_15:
	return

STORYMODE_STATE_DRAYNORMANOR_1F_2:
	setmetatile 9, 10, METATILE_PokeScapeIndoors_CUPBOARD_SPARKLE, 1
	setmetatile 12, 2, METATILE_PokeScapeIndoors_CUPBOARD_SPARKLE, 1
	setmetatile 13, 2, METATILE_PokeScapeIndoors_CUPBOARD_SPARKLE, 1
	special DrawWholeMapView
	goto STORYMODE_STATE_DRAYNORMANOR_1F_1

STORYMODE_STATE_DRAYNORMANOR_1F_7:
	clearflag FLAG_TEMP_1E
	addobject 18
	setobjectxyperm 18, 18, 20
	goto STORYMODE_STATE_DRAYNORMANOR_1F_5

STORYMODE_STATE_DRAYNORMANOR_1F_8:
	setflag FLAG_TEMP_1E
	removeobject 18
	goto STORYMODE_STATE_DRAYNORMANOR_1F_5

STORYMODE_STATE_DRAYNORMANOR_1F_9:
	setflag FLAG_TEMP_1E
	removeobject 18
	goto STORYMODE_STATE_DRAYNORMANOR_1F_5

STORYMODE_STATE_DRAYNORMANOR_1F_10:
	clearflag FLAG_TEMP_1E
	addobject 18
	setobjectxyperm 18, 35, 18
	goto STORYMODE_STATE_DRAYNORMANOR_1F_5

STORYMODE_STATE_DRAYNORMANOR_1F_12:
	setvar VAR_TEMP_A, 1
	goto STORYMODE_STATE_DRAYNORMANOR_1F_11

STORYMODE_STATE_DRAYNORMANOR_1F_17:
	checkfollower
	compare VAR_RESULT, 0
	goto_if_eq STORYMODE_STATE_DRAYNORMANOR_1F_18
	goto STORYMODE_STATE_DRAYNORMANOR_1F_15

STORYMODE_STATE_DRAYNORMANOR_1F_18:
	addobject 17
	clearflag FLAG_TEMP_1F
	setvar VAR_TEMP_B, 1
	goto STORYMODE_STATE_DRAYNORMANOR_1F_15


DraynorManor_HAM_GRUNT::
	lock
	switch VAR_POKESCAPE_STORYMODE_PROGRESS
	case 25, DraynorManor_HAM_GRUNT_3
	case 26, DraynorManor_HAM_GRUNT_4
	case 27, DraynorManor_HAM_GRUNT_5
	case 28, DraynorManor_HAM_GRUNT_6
DraynorManor_HAM_GRUNT_1:
	release
	end

DraynorManor_HAM_GRUNT_3:
	delay 15
	playse SE_PIN
	applymovement OBJ_EVENT_ID_PLAYER, Movement_DraynorManor_Chase_1
	applymovement OBJ_EVENT_ID_FOLLOWER, Movement_DraynorManor_Chase_2
	waitmovement 0
	namebox DraynorManor_HAM_GRUNT_Text_0
	msgbox DraynorManor_HAM_GRUNT_Text_1
	hidenamebox
	closemessage
	special SpawnCameraObject
	applymovement OBJ_EVENT_ID_CAMERA, Movement_DraynorManor_Camera_1
	applymovement OBJ_EVENT_ID_PLAYER, Movement_InteractFACEDOWN
	applymovement 18, Movement_DraynorManor_Chase_4
	applymovement OBJ_EVENT_ID_FOLLOWER, Movement_DraynorManor_Chase_3
	waitmovement OBJ_EVENT_ID_CAMERA
	namebox DraynorManor_HAM_GRUNT_Text_0
	msgbox DraynorManor_HAM_GRUNT_Text_2
	hidenamebox
	closemessage
	playse SE_BIKE_HOP
	waitse
	applymovement OBJ_EVENT_ID_FOLLOWER, Movement_DraynorManor_Chase_5
	namebox DraynorManor_HAM_GRUNT_Text_0
	msgbox DraynorManor_HAM_GRUNT_Text_3
	hidenamebox
	closemessage
	waitmovement 0
	applymovement 18, Movement_DraynorManor_Chase_6
	applymovement OBJ_EVENT_ID_FOLLOWER, Movement_DraynorManor_Chase_7
	waitmovement 0
	delay 60
	playse SE_PIN
	applymovement 18, Movement_DraynorManor_Chase_8
	applymovement OBJ_EVENT_ID_FOLLOWER, Movement_DraynorManor_Chase_8
	waitmovement 0
	namebox DraynorManor_HAM_GRUNT_Text_0
	msgbox DraynorManor_HAM_GRUNT_Text_4
	hidenamebox
	closemessage
	applymovement OBJ_EVENT_ID_FOLLOWER, Movement_DraynorManor_Chase_10
	applymovement 18, Movement_DraynorManor_Chase_9
	applymovement OBJ_EVENT_ID_CAMERA, Movement_DraynorManor_Camera_2
	waitmovement 0
	setobjectxy 18, 22, 11
	setobjectxyperm 18, 22, 11
	applymovement OBJ_EVENT_ID_FOLLOWER, Movement_DraynorManor_Chase_11
	waitmovement 0
	applymovement 18, Movement_DraynorManor_Chase_12
	namebox DraynorManor_HAM_GRUNT_Text_0
	msgbox DraynorManor_HAM_GRUNT_Text_5
	hidenamebox
	closemessage
	waitmovement 0
	special RemoveCameraObject
	setflag FLAG_TEMP_1E
	removeobject 18
	setvar VAR_POKESCAPE_STORYMODE_PROGRESS, 26
	goto DraynorManor_HAM_GRUNT_1

DraynorManor_HAM_GRUNT_4:
	applymovement 8, Movement_InteractFACEUP
	waitmovement 0
	delay 30
	applymovement 8, Movement_InteractFACEDOWN
	waitmovement 0
	namebox DraynorManor_HAM_GRUNT_Text_6
	msgbox DraynorManor_HAM_GRUNT_Text_7
	hidenamebox
	closemessage
	playse SE_PIN
	applymovement 11, MOVEMENT_EXCLAMATIONMARK_FACEPLAYER
	waitmovement 0
	namebox DraynorManor_HAM_GRUNT_Text_6
	msgbox DraynorManor_HAM_GRUNT_Text_8
	hidenamebox
	closemessage
	applymovement 11, Movement_DraynorManor_Chase_13
	waitmovement 0
	facefollower
	namebox DraynorManor_HAM_GRUNT_Text_0
	msgbox DraynorManor_HAM_GRUNT_Text_9
	hidenamebox
	closemessage
	setobjectxyperm 11, 14, 19
	setvar VAR_POKESCAPE_STORYMODE_PROGRESS, 27
	goto DraynorManor_HAM_GRUNT_1

DraynorManor_HAM_GRUNT_5:
	trainerbattle_no_intro TRAINER_DRAYNORMANOR_HAM, DraynorManor_HAM_GRUNT_Text_10
	setflag FLAG_TEMP_1E
	removeobject 11
	setvar VAR_POKESCAPE_STORYMODE_PROGRESS, 28
	goto DraynorManor_HAM_GRUNT_1

DraynorManor_HAM_GRUNT_6:
	setflag FLAG_TEMP_1E
	removeobject 18
	setvar VAR_POKESCAPE_STORYMODE_PROGRESS, 29
	goto DraynorManor_HAM_GRUNT_1


Movement_DraynorManor_Chase_1:
	face_right
	lock_facing_direction
	walk_left
	unlock_facing_direction
	step_end

Movement_DraynorManor_Chase_2:
	emote_exclamation_mark
	walk_down
	step_end

Movement_DraynorManor_Chase_3:
	walk_down
	walk_down
	walk_down
	step_end

Movement_DraynorManor_Chase_4:
	face_right
	step_end

Movement_DraynorManor_Chase_5:
	emote_question_mark
	step_end

Movement_DraynorManor_Chase_6:
	face_left
	step_end

Movement_DraynorManor_Chase_7:
	face_right
	step_end

Movement_DraynorManor_Chase_8:
	lock_facing_direction
	emote_exclamation_mark
	jump_in_place_down
	unlock_facing_direction
	step_end

Movement_DraynorManor_Chase_9:
	walk_fast_left
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	step_end

Movement_DraynorManor_Chase_10:
	walk_fast_left
	walk_fast_left
	walk_fast_up
	walk_fast_left
	face_right
	step_end

Movement_DraynorManor_Chase_11:
	walk_fast_right
	walk_fast_right
	walk_up
	face_player
	step_end

Movement_DraynorManor_Chase_12:
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	step_end

Movement_DraynorManor_Camera_1:
	walk_slow_down
	walk_slow_down
	walk_slow_down
	step_end

Movement_DraynorManor_Camera_2:
	walk_slow_up
	walk_slow_up
	walk_slow_up
	step_end

Movement_DraynorManor_Chase_13:
	walk_fast_up
	walk_fast_up
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	step_end

Movement_DraynorManor_Chase_14:
	face_up
	delay_16
	delay_16
	delay_16
	face_right
	step_end

DraynorManor_Lever_STATE::
	switch VAR_POKESCAPE_DRAYNORMANOR_LEVER_STATE
	case 0, DraynorManor_Lever_STATE_2
	case 1, DraynorManor_Lever_STATE_3
	return

DraynorManor_Lever_STATE_2:
	setmetatile 6, 15, METATILE_DraynorManor_BASEMENT_LEVER_UP_1, 1
	setmetatile 6, 16, METATILE_DraynorManor_BASEMENT_LEVER_UP_2, 1
	setmetatile 9, 16, METATILE_PokeScapeIndoors_BOOKCASE_SPARKLE, 1
	setmetatile 7, 17, 602, 1
	setmetatile 7, 18, 602, 1
	setmetatile 7, 19, 602, 1
	setmetatile 7, 20, 602, 1
	setmetatile 7, 21, 602, 1
	setmetatile 8, 17, 604, 1
	setmetatile 8, 18, 604, 1
	setmetatile 8, 19, 604, 1
	setmetatile 8, 20, 604, 1
	setmetatile 8, 21, 604, 1
	special DrawWholeMapView
	return

DraynorManor_Lever_STATE_3:
	setmetatile 9, 16, METATILE_PokeScapeIndoors_BOOKCASE_INTERACT_L, 1
	setmetatile 6, 15, METATILE_DraynorManor_BASEMENT_LEVER_DOWN_1, 1
	setmetatile 6, 16, METATILE_DraynorManor_BASEMENT_LEVER_DOWN_2, 1
	setmetatile 7, 17, 570, 1
	setmetatile 7, 18, 578, 1
	setmetatile 7, 19, 586, 1
	setmetatile 7, 20, 516, 0
	setmetatile 7, 21, 594, 1
	setmetatile 8, 17, 572, 1
	setmetatile 8, 18, 580, 1
	setmetatile 8, 19, 588, 1
	setmetatile 8, 20, 516, 0
	setmetatile 8, 21, 596, 1
	special DrawWholeMapView
	return


HAM_EVENT_DRAYNORMANOR_1F::
	lockall
	switch VAR_POKESCAPE_WIZARDS_TOWER_STATE
	case 7, HAM_EVENT_DRAYNORMANOR_1F_3
	case 8, HAM_EVENT_DRAYNORMANOR_1F_4
HAM_EVENT_DRAYNORMANOR_1F_1:
	release
	return

HAM_EVENT_DRAYNORMANOR_1F_3:
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
	compare VAR_TEMP_1, 24
	goto_if_eq HAM_EVENT_DRAYNORMANOR_1F_6
	compare VAR_TEMP_1, 25
	goto_if_eq HAM_EVENT_DRAYNORMANOR_1F_7
HAM_EVENT_DRAYNORMANOR_1F_5:
	setobjectmovementtype 17, MOVEMENT_TYPE_FACE_UP
	applymovement OBJ_EVENT_ID_PLAYER, Movement_DraynorManor_Entry_1
	waitmovement 0
	delay 32
	playse SE_DOOR
	addobject 17
	clearflag FLAG_TEMP_1F
	delay 32
	applymovement 17, Movement_DraynorManor_Entry_2
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, MOVEMENT_FACE_DOWN
	waitmovement 0
	namebox DraynorManor_HAM_GRUNT_Text_0
	msgbox HAM_EVENT_DRAYNORMANOR_1F_Text_0
	closemessage
	hidenamebox
	applymovement 17, Movement_DraynorManor_Entry_4
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, MOVEMENT_FACE_LEFT
	waitmovement 0
	namebox DraynorManor_HAM_GRUNT_Text_0
	msgbox HAM_EVENT_DRAYNORMANOR_1F_Text_1
	hidenamebox
	closemessage
	applymovement 6, Movement_DraynorManor_Entry_Rat
	playmoncry SPECIES_RAT_NORMAL_FORM, 1
	namebox HAM_EVENT_DRAYNORMANOR_1F_Text_2
	msgbox HAM_EVENT_DRAYNORMANOR_1F_Text_3
	waitmovement 0
	removeobject 6
	setflag FLAG_TEMP_19
	waitmoncry
	playse SE_LEDGE
	applymovement 17, MOVEMENT_EXCLAMATIONMARK_JUMP_UP
	waitmovement 0
	namebox DraynorManor_HAM_GRUNT_Text_0
	msgbox HAM_EVENT_DRAYNORMANOR_1F_Text_4
	applymovement 17, Movement_DraynorManor_Entry_5
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, MOVEMENT_FACE_DOWN
	waitmovement 0
	msgbox HAM_EVENT_DRAYNORMANOR_1F_Text_5
	closemessage
	hidenamebox
	setvar VAR_POKESCAPE_WIZARDS_TOWER_STATE, 8
	setvar VAR_POKESCAPE_STORYMODE_PROGRESS, 25
	playfanfare MUS_OBTAIN_SYMBOL
	msgbox HAM_EVENT_DRAYNORMANOR_1F_Text_6
	waitfanfare
	closemessage
	hidenamebox
	checkfollower
	compare VAR_RESULT, 0
	goto_if_ne HAM_EVENT_DRAYNORMANOR_1F_16
HAM_EVENT_DRAYNORMANOR_1F_15:
	setflag FLAG_TOGGLE_FORCED_WILD_DOUBLE_BATTLES
	setflag FLAG_PARTNER_BATTLE
	setvar VAR_PARTNER_TRAINER, TRAINER_ARIANE_1
	setvar VAR_PARTNER_SPRITE, TRAINER_BACK_PIC_ARIANE
	loadword 0, FOLLOWING_Ariane
	setfollower 17, 0x80
	setvar VAR_TEMP_A, 1
	goto HAM_EVENT_DRAYNORMANOR_1F_1

HAM_EVENT_DRAYNORMANOR_1F_4:
	applymovement OBJ_EVENT_ID_PLAYER, Movement_DraynorManor_Entry_3
	waitmovement 0
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
	compare VAR_TEMP_1, 24
	goto_if_eq HAM_EVENT_DRAYNORMANOR_1F_11
	compare VAR_TEMP_1, 25
	goto_if_eq HAM_EVENT_DRAYNORMANOR_1F_12
HAM_EVENT_DRAYNORMANOR_1F_10:
	applymovement OBJ_EVENT_ID_PLAYER, MOVEMENT_FACE_RIGHT
	waitmovement 0
	namebox DraynorManor_HAM_GRUNT_Text_0
	msgbox HAM_EVENT_DRAYNORMANOR_1F_Text_7
	hidenamebox
	playfanfare MUS_OBTAIN_SYMBOL
	msgbox HAM_EVENT_DRAYNORMANOR_1F_Text_6
	waitfanfare
	closemessage
	hidenamebox
	checkfollower
	compare VAR_RESULT, 0
	goto_if_ne HAM_EVENT_DRAYNORMANOR_1F_19
HAM_EVENT_DRAYNORMANOR_1F_18:
	setflag FLAG_TOGGLE_FORCED_WILD_DOUBLE_BATTLES
	setflag FLAG_PARTNER_BATTLE
	setvar VAR_PARTNER_TRAINER, TRAINER_ARIANE_1
	setvar VAR_PARTNER_SPRITE, TRAINER_BACK_PIC_ARIANE
	loadword 0, FOLLOWING_Ariane
	setfollower 17, 0x80
	setvar VAR_TEMP_A, 1
	setvar VAR_TEMP_B, 0
	goto HAM_EVENT_DRAYNORMANOR_1F_1

HAM_EVENT_DRAYNORMANOR_1F_6:
	setobjectxyperm 17, 24, 22
	goto HAM_EVENT_DRAYNORMANOR_1F_5

HAM_EVENT_DRAYNORMANOR_1F_7:
	setobjectxyperm 17, 25, 22
	goto HAM_EVENT_DRAYNORMANOR_1F_5

HAM_EVENT_DRAYNORMANOR_1F_11:
	applymovement 17, MOVEMENT_WALKLEFT
	waitmovement 0
	applymovement 17, MOVEMENT_WALKLEFT
	waitmovement 0
	goto HAM_EVENT_DRAYNORMANOR_1F_10

HAM_EVENT_DRAYNORMANOR_1F_12:
	applymovement 17, MOVEMENT_WALKLEFT
	waitmovement 0
	goto HAM_EVENT_DRAYNORMANOR_1F_10

HAM_EVENT_DRAYNORMANOR_1F_16:
	call FOLLOWER_REMOVE
	goto HAM_EVENT_DRAYNORMANOR_1F_15

HAM_EVENT_DRAYNORMANOR_1F_19:
	call FOLLOWER_REMOVE
	goto HAM_EVENT_DRAYNORMANOR_1F_18


Movement_DraynorManor_Entry_1:
	walk_slow_up
	walk_slow_up
	step_end

Movement_DraynorManor_Entry_2:
	delay_16
	walk_slow_up
	step_end

Movement_DraynorManor_Entry_3:
	walk_slow_up
	step_end

Movement_DraynorManor_Entry_4:
	walk_left
	walk_up
	face_player
	step_end

Movement_DraynorManor_Entry_5:
	walk_faster_down
	walk_faster_right
	face_player
	step_end

MOVEMENT_EXCLAMATIONMARK_JUMP_LEFT:
	emote_exclamation_mark
	jump_in_place_left
	step_end

MOVEMENT_EXCLAMATIONMARK_JUMP_UP:
	emote_exclamation_mark
	jump_in_place_up
	step_end

Movement_DraynorManor_Entry_Rat:
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	step_end

FOLLOWING_Ariane::
	namebox DraynorManor_HAM_GRUNT_Text_0
	facefollower
	specialvar VAR_RESULT, GetCurrentMap
	compare VAR_RESULT, MAP_DRAYNOR_MANOR_B1F
	goto_if_eq FOLLOWING_Ariane_2
	random 9
	switch VAR_RESULT
	case 0, FOLLOWING_Ariane_6
	case 1, FOLLOWING_Ariane_7
	case 2, FOLLOWING_Ariane_8
	case 3, FOLLOWING_Ariane_9
	case 4, FOLLOWING_Ariane_10
	case 5, FOLLOWING_Ariane_11
	case 6, FOLLOWING_Ariane_12
	case 7, FOLLOWING_Ariane_13
	case 8, FOLLOWING_Ariane_14
FOLLOWING_Ariane_4:
	hidenamebox
	closemessage
	release
	end

FOLLOWING_Ariane_2:
	random 3
	switch VAR_RESULT
	case 0, FOLLOWING_Ariane_17
	case 1, FOLLOWING_Ariane_18
	case 2, FOLLOWING_Ariane_19
FOLLOWING_Ariane_15:
	hidenamebox
	closemessage
	release
	end

FOLLOWING_Ariane_6:
	msgbox FOLLOWING_Ariane_Text_3
	goto FOLLOWING_Ariane_4

FOLLOWING_Ariane_7:
	msgbox FOLLOWING_Ariane_Text_4
	goto FOLLOWING_Ariane_4

FOLLOWING_Ariane_8:
	msgbox FOLLOWING_Ariane_Text_5
	goto FOLLOWING_Ariane_4

FOLLOWING_Ariane_9:
	msgbox FOLLOWING_Ariane_Text_6
	playse SE_LEDGE
	applymovement 17, MOVEMENT_EXCLAMATIONMARK_JUMP_UP
	waitmovement 0
	msgbox FOLLOWING_Ariane_Text_7
	goto FOLLOWING_Ariane_4

FOLLOWING_Ariane_10:
	msgbox FOLLOWING_Ariane_Text_8
	goto FOLLOWING_Ariane_4

FOLLOWING_Ariane_11:
	msgbox FOLLOWING_Ariane_Text_9
	goto FOLLOWING_Ariane_4

FOLLOWING_Ariane_12:
	msgbox FOLLOWING_Ariane_Text_10
	goto FOLLOWING_Ariane_4

FOLLOWING_Ariane_13:
	msgbox FOLLOWING_Ariane_Text_11
	goto FOLLOWING_Ariane_4

FOLLOWING_Ariane_14:
	msgbox FOLLOWING_Ariane_Text_12
	goto FOLLOWING_Ariane_4

FOLLOWING_Ariane_17:
	msgbox FOLLOWING_Ariane_Text_0
	goto FOLLOWING_Ariane_15

FOLLOWING_Ariane_18:
	msgbox FOLLOWING_Ariane_Text_1
	goto FOLLOWING_Ariane_15

FOLLOWING_Ariane_19:
	msgbox FOLLOWING_Ariane_Text_2
	goto FOLLOWING_Ariane_15


TRIGGER_ARIANE_DRAYNORMANOR_1F_1::
	facefollower
	namebox DraynorManor_HAM_GRUNT_Text_0
	msgbox TRIGGER_ARIANE_DRAYNORMANOR_1F_1_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne TRIGGER_ARIANE_DRAYNORMANOR_1F_1_1
	closemessage
	hidenamebox
	applymovement OBJ_EVENT_ID_PLAYER, MOVEMENT_WALK_UP
	applymovement OBJ_EVENT_ID_FOLLOWER, MOVEMENT_WALK_UP
	waitmovement 0
	return

TRIGGER_ARIANE_DRAYNORMANOR_1F_1_1:
	msgbox TRIGGER_ARIANE_DRAYNORMANOR_1F_1_Text_1
	closemessage
	hidenamebox
	setvar VAR_TEMP_A, 0
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
	compare VAR_TEMP_1, 24
	goto_if_eq TRIGGER_ARIANE_DRAYNORMANOR_1F_1_5
	compare VAR_TEMP_1, 25
	goto_if_eq TRIGGER_ARIANE_DRAYNORMANOR_1F_1_6
TRIGGER_ARIANE_DRAYNORMANOR_1F_1_4:
	call FOLLOWER_REMOVE
	return

TRIGGER_ARIANE_DRAYNORMANOR_1F_1_5:
	warp MAP_DRAYNOR_MANOR, 0, 0, 0
	goto TRIGGER_ARIANE_DRAYNORMANOR_1F_1_4

TRIGGER_ARIANE_DRAYNORMANOR_1F_1_6:
	warp MAP_DRAYNOR_MANOR, 1, 0, 0
	goto TRIGGER_ARIANE_DRAYNORMANOR_1F_1_4


TRIGGER_ARIANE_DRAYNORMANOR_1F_2::
	checkfollower
	compare VAR_RESULT, 0
	goto_if_ne TRIGGER_ARIANE_DRAYNORMANOR_1F_2_2
TRIGGER_ARIANE_DRAYNORMANOR_1F_2_1:
	release
	end

TRIGGER_ARIANE_DRAYNORMANOR_1F_2_2:
	facefollower
	playse SE_LEDGE
	applymovement OBJ_EVENT_ID_FOLLOWER, MOVEMENT_EXCLAMATIONMARK_JUMP_LEFT
	waitmovement 0
	namebox DraynorManor_HAM_GRUNT_Text_0
	msgbox TRIGGER_ARIANE_DRAYNORMANOR_1F_2_Text_0
	closemessage
	hidenamebox
	setvar VAR_TEMP_C, 1
	goto TRIGGER_ARIANE_DRAYNORMANOR_1F_2_1


TRIGGER_ARIANE_DRAYNORMANOR_1F_3::
	checkfollower
	compare VAR_RESULT, 0
	goto_if_ne TRIGGER_ARIANE_DRAYNORMANOR_1F_3_2
TRIGGER_ARIANE_DRAYNORMANOR_1F_3_1:
	release
	end

TRIGGER_ARIANE_DRAYNORMANOR_1F_3_2:
	delay 32
	applymovement OBJ_EVENT_ID_FOLLOWER, MOVEMENT_FACE_LEFT
	waitmovement 0
	delay 32
	facefollower
	namebox DraynorManor_HAM_GRUNT_Text_0
	msgbox TRIGGER_ARIANE_DRAYNORMANOR_1F_3_Text_0
	closemessage
	hidenamebox
	setvar VAR_TEMP_E, 1
	goto TRIGGER_ARIANE_DRAYNORMANOR_1F_3_1


TRIGGER_ARIANE_DRAYNORMANOR_1F_4::
	checkfollower
	compare VAR_RESULT, 0
	goto_if_ne TRIGGER_ARIANE_DRAYNORMANOR_1F_4_2
TRIGGER_ARIANE_DRAYNORMANOR_1F_4_1:
	release
	end

TRIGGER_ARIANE_DRAYNORMANOR_1F_4_2:
	facefollower
	namebox DraynorManor_HAM_GRUNT_Text_0
	msgbox TRIGGER_ARIANE_DRAYNORMANOR_1F_4_Text_0
	closemessage
	hidenamebox
	applymovement OBJ_EVENT_ID_PLAYER, MOVEMENT_WALK_DOWN
	applymovement OBJ_EVENT_ID_FOLLOWER, MOVEMENT_WALK_DOWN
	waitmovement 0
	goto TRIGGER_ARIANE_DRAYNORMANOR_1F_4_1


TRIGGER_ARIANE_DRAYNORMANOR_1F_5::
	checkfollower
	compare VAR_RESULT, 0
	goto_if_ne TRIGGER_ARIANE_DRAYNORMANOR_1F_5_2
TRIGGER_ARIANE_DRAYNORMANOR_1F_5_1:
	release
	end

TRIGGER_ARIANE_DRAYNORMANOR_1F_5_2:
	facefollower
	namebox DraynorManor_HAM_GRUNT_Text_0
	msgbox FOLLOWING_Ariane_Text_0
	closemessage
	hidenamebox
	applymovement OBJ_EVENT_ID_PLAYER, MOVEMENT_WALK_RIGHT
	applymovement OBJ_EVENT_ID_FOLLOWER, MOVEMENT_WALK_RIGHT
	waitmovement 0
	goto TRIGGER_ARIANE_DRAYNORMANOR_1F_5_1


TRIGGER_ARIANE_DRAYNORMANOR_1F_6::
	checkfollower
	compare VAR_RESULT, 0
	goto_if_ne TRIGGER_ARIANE_DRAYNORMANOR_1F_6_2
TRIGGER_ARIANE_DRAYNORMANOR_1F_6_1:
	release
	end

TRIGGER_ARIANE_DRAYNORMANOR_1F_6_2:
	facefollower
	namebox DraynorManor_HAM_GRUNT_Text_0
	switch VAR_POKESCAPE_STORYMODE_PROGRESS
	case 25, TRIGGER_ARIANE_DRAYNORMANOR_1F_6_6
	case 26, TRIGGER_ARIANE_DRAYNORMANOR_1F_6_6
	case 27, TRIGGER_ARIANE_DRAYNORMANOR_1F_6_6
	case 28, TRIGGER_ARIANE_DRAYNORMANOR_1F_6_6
	msgbox TRIGGER_ARIANE_DRAYNORMANOR_1F_6_Text_1
	closemessage
	hidenamebox
	applymovement OBJ_EVENT_ID_FOLLOWER, MOVEMENT_WALK_RIGHT
	waitmovement 0
	facefollower
	applymovement OBJ_EVENT_ID_PLAYER, MOVEMENT_FACE_LEFT
	delay 32
	setvar VAR_TEMP_9, 1
	warp MAP_DRAYNOR_MANOR_CRYPT, 0, 0, 0
	call FOLLOWER_REMOVE
	goto TRIGGER_ARIANE_DRAYNORMANOR_1F_6_1

TRIGGER_ARIANE_DRAYNORMANOR_1F_6_6:
	msgbox TRIGGER_ARIANE_DRAYNORMANOR_1F_6_Text_0
	closemessage
	hidenamebox
	release
	end


TRIGGER_ARIANE_DRAYNORMANOR_B1F_1::
	checkfollower
	compare VAR_RESULT, 0
	goto_if_ne TRIGGER_ARIANE_DRAYNORMANOR_B1F_1_2
TRIGGER_ARIANE_DRAYNORMANOR_B1F_1_1:
	setvar VAR_TEMP_9, 1
	end

TRIGGER_ARIANE_DRAYNORMANOR_B1F_1_2:
	facefollower
	namebox DraynorManor_HAM_GRUNT_Text_0
	msgbox TRIGGER_ARIANE_DRAYNORMANOR_B1F_1_Text_0
	closemessage
	hidenamebox
	release
	goto TRIGGER_ARIANE_DRAYNORMANOR_B1F_1_1


NPC_DraynorManor_Ava::
	lock
	faceplayer
	namebox NPC_DraynorManor_Ava_Text_0
	compare VAR_POKESCAPE_ERNEST_QUEST_STATE, 1
	goto_if_eq NPC_DraynorManor_Ava_2
	random 5
	switch VAR_RESULT
	case 0, NPC_DraynorManor_Ava_5
	case 1, NPC_DraynorManor_Ava_6
	case 2, NPC_DraynorManor_Ava_7
	case 3, NPC_DraynorManor_Ava_8
	case 4, NPC_DraynorManor_Ava_9
	case 5, NPC_DraynorManor_Ava_10
	return

NPC_DraynorManor_Ava_2:
	checkitem ITEM_OIL_CAN, 1
	compare VAR_RESULT, 0
	goto_if_eq NPC_DraynorManor_Ava_11
	msgbox NPC_DraynorManor_Ava_Text_2
	closemessage
	hidenamebox
	closemessage
	release
	end

NPC_DraynorManor_Ava_5:
	msgbox NPC_DraynorManor_Ava_Text_3
	hidenamebox
	closemessage
	release
	end

NPC_DraynorManor_Ava_6:
	msgbox NPC_DraynorManor_Ava_Text_4
	hidenamebox
	closemessage
	release
	end

NPC_DraynorManor_Ava_7:
	msgbox NPC_DraynorManor_Ava_Text_5
	hidenamebox
	closemessage
	release
	end

NPC_DraynorManor_Ava_8:
	msgbox NPC_DraynorManor_Ava_Text_6
	hidenamebox
	closemessage
	release
	end

NPC_DraynorManor_Ava_9:
	msgbox NPC_DraynorManor_Ava_Text_7
	hidenamebox
	closemessage
	release
	end

NPC_DraynorManor_Ava_10:
	msgbox NPC_DraynorManor_Ava_Text_8
	hidenamebox
	closemessage
	release
	end

NPC_DraynorManor_Ava_11:
	msgbox NPC_DraynorManor_Ava_Text_1
	hidenamebox
	closemessage
	release
	end


NPC_DraynorManor_Quester::
	lock
	faceplayer
	namebox NPC_DraynorManor_Quester_Text_0
	compare VAR_POKESCAPE_DRAYNORMANOR_LEVER_STATE, 1
	goto_if_eq NPC_DraynorManor_Quester_2
	msgbox NPC_DraynorManor_Quester_Text_2
NPC_DraynorManor_Quester_1:
	closemessage
	release
	end

NPC_DraynorManor_Quester_2:
	msgbox NPC_DraynorManor_Quester_Text_1
	goto NPC_DraynorManor_Quester_1


NPC_DraynorManor_Witch::
	lock
	faceplayer
	namebox NPC_DraynorManor_Witch_Text_0
	msgbox NPC_DraynorManor_Witch_Text_1
	hidenamebox
	closemessage
	release
	end


NPC_DraynorManor_Chair::
	lock
	random 15
	switch VAR_RESULT
	case 0, NPC_DraynorManor_Chair_3
	case 1, NPC_DraynorManor_Chair_3
	case 2, NPC_DraynorManor_Chair_3
	case 3, NPC_DraynorManor_Chair_3
	case 4, NPC_DraynorManor_Chair_3
	case 5, NPC_DraynorManor_Chair_3
	case 6, NPC_DraynorManor_Chair_3
NPC_DraynorManor_Chair_1:
	msgbox NPC_DraynorManor_Chair_Text_0
	hidenamebox
	closemessage
	release
	end

NPC_DraynorManor_Chair_3:
	goto ENCOUNTER_CHAIR
	goto NPC_DraynorManor_Chair_1


NPC_DraynorManor_Chair1::
	lock
	msgbox NPC_DraynorManor_Chair_Text_0
	hidenamebox
	closemessage
	release
	end


NPC_PIANO::
	lock
	msgbox NPC_PIANO_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne NPC_PIANO_2
NPC_PIANO_1:
	closemessage
	release
	end

NPC_PIANO_2:
	specialvar VAR_RESULT, GetCurrentMap
	compare VAR_RESULT, MAP_DRAYNOR_MANOR_2F
	goto_if_eq NPC_PIANO_5
NPC_PIANO_4:
	closemessage
	delay 15
	random 8
	switch VAR_RESULT
	case 0, NPC_PIANO_9
	case 1, NPC_PIANO_10
	case 2, NPC_PIANO_11
	case 3, NPC_PIANO_12
	case 4, NPC_PIANO_13
	case 5, NPC_PIANO_14
	case 6, NPC_PIANO_15
	case 7, NPC_PIANO_16
NPC_PIANO_7:
	waitse
	goto NPC_PIANO_1

NPC_PIANO_5:
	goto NPC_SKELETON_PIANO
	goto NPC_PIANO_4

NPC_PIANO_9:
	playse SE_NOTE_A
	goto NPC_PIANO_7

NPC_PIANO_10:
	playse SE_NOTE_B
	goto NPC_PIANO_7

NPC_PIANO_11:
	playse SE_NOTE_C
	goto NPC_PIANO_7

NPC_PIANO_12:
	playse SE_NOTE_D
	goto NPC_PIANO_7

NPC_PIANO_13:
	playse SE_NOTE_E
	goto NPC_PIANO_7

NPC_PIANO_14:
	playse SE_NOTE_F
	goto NPC_PIANO_7

NPC_PIANO_15:
	playse SE_NOTE_G
	goto NPC_PIANO_7

NPC_PIANO_16:
	playse SE_NOTE_C_HIGH
	waitse
	goto ENCOUNTER_GHOST
	goto NPC_PIANO_7


NPC_DraynorManor_Skeleton_1::
	lock
	faceplayer
	namebox NPC_DraynorManor_Skeleton_1_Text_0
	msgbox NPC_DraynorManor_Skeleton_1_Text_1
	hidenamebox
	closemessage
	release
	end


NPC_SKELETON_PIANO::
	closemessage
	playse SE_NOTE_A
	waitse
	playse SE_NOTE_B
	waitse
	playse SE_NOTE_B
	waitse
	playse SE_NOTE_C
	waitse
	playse SE_NOTE_A
	waitse
	playse SE_NOTE_D
	waitse
	playse SE_NOTE_A
	waitse
	playse SE_NOTE_G
	waitse
	applymovement 6, MOVEMENT_SHOCKED_FACEPLAYER
	waitmovement 0
	namebox NPC_DraynorManor_Skeleton_1_Text_0
	msgbox NPC_SKELETON_PIANO_Text_0
	hidenamebox
	closemessage
	release
	end


BATTLE_DRAYNORMANOR_Trainer_1::
	trainerbattle_single TRAINER_DRAYNOR_MANOR_SKELETON_1, BATTLE_DRAYNORMANOR_Trainer_1_Text_0, BATTLE_DRAYNORMANOR_Trainer_1_Text_1
	msgbox BATTLE_DRAYNORMANOR_Trainer_1_Text_1
	hidenamebox
	release
	end


BATTLE_DRAYNORMANOR_Trainer_2::
	trainerbattle_single TRAINER_DRAYNOR_MANOR_SKELETON_2, BATTLE_DRAYNORMANOR_Trainer_2_Text_0, BATTLE_DRAYNORMANOR_Trainer_2_Text_1
	msgbox BATTLE_DRAYNORMANOR_Trainer_2_Text_2
	hidenamebox
	release
	end


BATTLE_DRAYNORMANOR_Trainer_3::
	trainerbattle_single TRAINER_DRAYNOR_MANOR_TRAINER_3, BATTLE_DRAYNORMANOR_Trainer_3_Text_0, BATTLE_DRAYNORMANOR_Trainer_3_Text_1
	namebox BATTLE_DRAYNORMANOR_Trainer_3_Text_2
	msgbox BATTLE_DRAYNORMANOR_Trainer_3_Text_1
	hidenamebox
	release
	end


BATTLE_DRAYNORMANOR_Trainer_4::
	trainerbattle_single TRAINER_DRAYNOR_MANOR_SKELETON_4, BATTLE_DRAYNORMANOR_Trainer_4_Text_0, BATTLE_DRAYNORMANOR_Trainer_4_Text_1
	msgbox BATTLE_DRAYNORMANOR_Trainer_4_Text_1
	hidenamebox
	release
	end


BATTLE_DRAYNORMANOR_Trainer_5::
	trainerbattle_single TRAINER_DRAYNOR_MANOR_SKELETON_5, BATTLE_DRAYNORMANOR_Trainer_5_Text_0, BATTLE_DRAYNORMANOR_Trainer_5_Text_1
	msgbox BATTLE_DRAYNORMANOR_Trainer_5_Text_1
	hidenamebox
	release
	end


BATTLE_DRAYNORMANOR_Trainer_6::
	trainerbattle_single TRAINER_DRAYNOR_MANOR_SKELETON_6, BATTLE_DRAYNORMANOR_Trainer_6_Text_0, BATTLE_DRAYNORMANOR_Trainer_6_Text_1
	msgbox BATTLE_DRAYNORMANOR_Trainer_6_Text_1
	hidenamebox
	release
	end


BATTLE_DRAYNORMANOR_Trainer_7::
	trainerbattle_single TRAINER_DRAYNOR_MANOR_SKELETON_7, BATTLE_DRAYNORMANOR_Trainer_7_Text_0, BATTLE_DRAYNORMANOR_Trainer_7_Text_1
	msgbox BATTLE_DRAYNORMANOR_Trainer_7_Text_1
	hidenamebox
	release
	end


BATTLE_DRAYNORMANOR_Trainer_8::
	trainerbattle_single TRAINER_DRAYNOR_MANOR_SKELETON_8, BATTLE_DRAYNORMANOR_Trainer_8_Text_0, BATTLE_DRAYNORMANOR_Trainer_8_Text_1
	msgbox BATTLE_DRAYNORMANOR_Trainer_8_Text_2
	hidenamebox
	release
	end


SIGN_DRAYNORMANOR_LEVER_1::
	switch VAR_POKESCAPE_DRAYNORMANOR_LEVER_STATE
	case 0, SIGN_DRAYNORMANOR_LEVER_1_2
	case 1, SIGN_DRAYNORMANOR_LEVER_1_3
	return

SIGN_DRAYNORMANOR_LEVER_1_2:
	lock
	msgbox SIGN_DRAYNORMANOR_LEVER_1_Text_0
	playse SE_TRUCK_DOOR
	setvar VAR_POKESCAPE_DRAYNORMANOR_LEVER_STATE, 1
	call DraynorManor_Lever_STATE
	release
	end

SIGN_DRAYNORMANOR_LEVER_1_3:
	lock
	msgbox SIGN_DRAYNORMANOR_LEVER_1_Text_0
	playse SE_TRUCK_DOOR
	setvar VAR_POKESCAPE_DRAYNORMANOR_LEVER_STATE, 0
	call DraynorManor_Lever_STATE
	release
	end


DraynorManor_HAM_GRUNT_Text_0:
	.string "Ariane$"

DraynorManor_HAM_GRUNT_Text_1:
	.string "Oooh!\p"
	.string "Is that an item!?$"

DraynorManor_HAM_GRUNT_Text_2:
	.string "I wonder what it is…$"

DraynorManor_HAM_GRUNT_Text_3:
	.string "…Huh?$"

DraynorManor_HAM_GRUNT_Text_4:
	.string "EEEEEEEEEEK!!$"

DraynorManor_HAM_GRUNT_Text_5:
	.string "EEEK!\n"
	.string "That was him!\p"
	.string "Quick lets give chase!$"

DraynorManor_HAM_GRUNT_Text_6:
	.string "???$"

DraynorManor_HAM_GRUNT_Text_7:
	.string "…{PAUSE 15}…{PAUSE 15}…Did that chair{PAUSE 15}…\p"
	.string "{PAUSE 15}…{PAUSE 15}…{PAUSE 15}just move{PAUSE 15}…?$"

DraynorManor_HAM_GRUNT_Text_8:
	.string "Aaak!$"

DraynorManor_HAM_GRUNT_Text_9:
	.string "I think we are wearing him out, let's get\n"
	.string "him!$"

DraynorManor_HAM_GRUNT_Text_10:
	.string "No way…\pTwo against one is just not fair…$"

HAM_EVENT_DRAYNORMANOR_1F_Text_0:
	.string "…{PAUSE 32}…{PAUSE 32}…\n"
	.string "He… Hey you…\p"
	.string "Can… can we go together?$"

HAM_EVENT_DRAYNORMANOR_1F_Text_1:
	.string "Pssh!\p"
	.string "I'm not scared, what do you take me for?$"

HAM_EVENT_DRAYNORMANOR_1F_Text_2:
	.string "Rat$"

HAM_EVENT_DRAYNORMANOR_1F_Text_3:
	.string "Squeeek!$"

HAM_EVENT_DRAYNORMANOR_1F_Text_4:
	.string "Eeek!$"

HAM_EVENT_DRAYNORMANOR_1F_Text_5:
	.string "Okay, maybe I am a little scared…\p"
	.string "You lead the way.$"

HAM_EVENT_DRAYNORMANOR_1F_Text_6:
	.string "ARIANE JOINS THE PARTY!$"

HAM_EVENT_DRAYNORMANOR_1F_Text_7:
	.string "…{PAUSE 32}…{PAUSE 32}…\n"
	.string "He… Hey you came back…\p"
	.string "Can… can we please go together?\p"
	.string "I'm scared.$"

FOLLOWING_Ariane_Text_0:
	.string "As mysterious as this is, we are looking\n"
	.string "for the pink man.\p"
	.string "Not some lever side quest.$"

FOLLOWING_Ariane_Text_1:
	.string "We should probably go back upstairs…$"

FOLLOWING_Ariane_Text_2:
	.string "Eww… it stinks of old oil cans down here.$"

FOLLOWING_Ariane_Text_3:
	.string "This place is 2spooky4me!$"

FOLLOWING_Ariane_Text_4:
	.string "Where do you think the pink guy went?$"

FOLLOWING_Ariane_Text_5:
	.string "Hey my name is Ariane, what is yours?\p"
	.string "…{PAUSE 32}{PLAYER}?\n"
	.string "That's a cute name.$"

FOLLOWING_Ariane_Text_6:
	.string "You know what?\p"
	.string "With you here this place isn't as scary.$"

FOLLOWING_Ariane_Text_7:
	.string "EEK!\n"
	.string "What was that!?$"

FOLLOWING_Ariane_Text_8:
	.string "What's with all of these weird-looking\n"
	.string "chickens around the place?$"

FOLLOWING_Ariane_Text_9:
	.string "We haven't checked the basement yet,\n"
	.string "we should look there.$"

FOLLOWING_Ariane_Text_10:
	.string "Did…{PAUSE 32} that armour just move?!$"

FOLLOWING_Ariane_Text_11:
	.string "How can anyone even live here…$"

FOLLOWING_Ariane_Text_12:
	.string "Eeek!\p"
	.string "I think I just saw a ghost!$"

TRIGGER_ARIANE_DRAYNORMANOR_1F_1_Text_0:
	.string "What are you doing?\p"
	.string "That guy is still in here somewhere.\p"
	.string "Wait you aren't going to leave me here\n"
	.string "are you?$"

TRIGGER_ARIANE_DRAYNORMANOR_1F_1_Text_1:
	.string "Eeek!!$"

TRIGGER_ARIANE_DRAYNORMANOR_1F_2_Text_0:
	.string "Eeek!!\p"
	.string "Did that chair just move?!$"

TRIGGER_ARIANE_DRAYNORMANOR_1F_3_Text_0:
	.string "I hear noises coming from the basement,\n"
	.string "lets go look!$"

TRIGGER_ARIANE_DRAYNORMANOR_1F_4_Text_0:
	.string "I doubt he would be outside.\p"
	.string "Lets go look elsewhere.$"

TRIGGER_ARIANE_DRAYNORMANOR_1F_6_Text_0:
	.string "Eek! I'm getting some sinister vibes\n"
	.string "from down there, maybe we could look\l"
	.string "around the rest of the manor before we\l"
	.string "look down there.$"

TRIGGER_ARIANE_DRAYNORMANOR_1F_6_Text_1:
	.string "Uh…{PAUSE 32} I know he ran down there, but that\n"
	.string "basement is giving of some serious\l"
	.string "sinister vibes.\p"
	.string "I think I'll stay up here while you go\n"
	.string "ahead.$"

TRIGGER_ARIANE_DRAYNORMANOR_B1F_1_Text_0:
	.string "I feel like the pink man isn't down here.\p"
	.string "We should probably turn back.$"

NPC_DraynorManor_Ava_Text_0:
	.string "Ava$"

NPC_DraynorManor_Ava_Text_1:
	.string "Oil Can?\p"
	.string "Last time I used it was to oil up my bed\n"
	.string "to stop it from creaking.\p"
	.string "Where did I leave it?\p"
	.string "Uh…{PAUSE 32}… I believe I left it in the basement\n"
	.string "over there.\p"
	.string "So if you want it you will have to go get\n"
	.string "it.$"

NPC_DraynorManor_Ava_Text_2:
	.string "Hey you found the Oil Can!\p"
	.string "My bed is starting to creek again, can I\n"
	.string "use it before you go haha.$"

NPC_DraynorManor_Ava_Text_3:
	.string "I think the walls are watching me…$"

NPC_DraynorManor_Ava_Text_4:
	.string "Who thought it was a good idea to put\n"
	.string "piranhas in the fountain…\p"
	.string "It is no where near big enough!$"

NPC_DraynorManor_Ava_Text_5:
	.string "If you see any animated chairs…\p"
	.string "I assure you, it was not my fault.$"

NPC_DraynorManor_Ava_Text_6:
	.string "I'm overjoyed with my new mattress!\p"
	.string "It almost feels like I'm being consumed\n"
	.string "by a fluffy…{PAUSE 15}{PAUSE 15} undead…{PAUSE 15}{PAUSE 15} zombie…{PAUSE 15} chicken…?$"

NPC_DraynorManor_Ava_Text_7:
	.string "If only there were more trainers\n"
	.string "gullible enough to travel across the\l"
	.string "land searching far and wide for my\l"
	.string "questionable research.$"

NPC_DraynorManor_Ava_Text_8:
	.string "EEK!\n"
	.string "A HUMAN…!\p"
	.string "…Sorry…{PAUSE 15} I have spent way too much time\n"
	.string "here, I'm not used to seeing corporeal\l"
	.string "beings.$"

NPC_DraynorManor_Quester_Text_0:
	.string "Quester$"

NPC_DraynorManor_Quester_Text_1:
	.string "Did you find the hidden switch?\p"
	.string "Where was it?!$"

NPC_DraynorManor_Quester_Text_2:
	.string "I heard there was a hidden switch\n"
	.string "somewhere in this room but I am yet to\l"
	.string "find it.$"

NPC_DraynorManor_Witch_Text_0:
	.string "Witch$"

NPC_DraynorManor_Witch_Text_1:
	.string "I have so much poison in my kitchen\n"
	.string "cupboards!\p"
	.string "I don't think a blueberry special will\n"
	.string "save you from how toxic that stuff is!$"

NPC_DraynorManor_Chair_Text_0:
	.string "It's just a chair.$"

NPC_PIANO_Text_0:
	.string "Play the Piano?$"

NPC_DraynorManor_Skeleton_1_Text_0:
	.string "Skeleton$"

NPC_DraynorManor_Skeleton_1_Text_1:
	.string "I would really like to play the piano.\p"
	.string "But I have nobody to play with.$"

NPC_SKELETON_PIANO_Text_0:
	.string "Yo that's pretty groovy.\p"
	.string "Say you know that piano downstairs?\p"
	.string "There's a broken note on it that angers\n"
	.string "many of the monsters in the manor, so\l"
	.string "be careful.$"

BATTLE_DRAYNORMANOR_Trainer_1_Text_0:
	.string "The skeleton stares deep into your\n"
	.string "eyes before it challenges you to a\l"
	.string "battle.$"

BATTLE_DRAYNORMANOR_Trainer_1_Text_1:
	.string "The skeleton stares intently into your\n"
	.string "eyes but refuses to move.$"

BATTLE_DRAYNORMANOR_Trainer_2_Text_0:
	.string "Do not steal the Rubber Tube!$"

BATTLE_DRAYNORMANOR_Trainer_2_Text_1:
	.string "Oh you want to return it?$"

BATTLE_DRAYNORMANOR_Trainer_2_Text_2:
	.string "You are going to return the Rubber Tube\n"
	.string "to Oddenstein?\p"
	.string "Sure go for it.$"

BATTLE_DRAYNORMANOR_Trainer_3_Text_0:
	.string "Fear me and my monsters!$"

BATTLE_DRAYNORMANOR_Trainer_3_Text_1:
	.string "Ahhh!\p"
	.string "I fear you and your monsters!$"

BATTLE_DRAYNORMANOR_Trainer_3_Text_2:
	.string "Dark Wizard$"

BATTLE_DRAYNORMANOR_Trainer_4_Text_0:
	.string "Boo!$"

BATTLE_DRAYNORMANOR_Trainer_4_Text_1:
	.string "The skeleton is giggling at your\n"
	.string "previous reaction.$"

BATTLE_DRAYNORMANOR_Trainer_5_Text_0:
	.string "The skeleton strikes a menacing pose.$"

BATTLE_DRAYNORMANOR_Trainer_5_Text_1:
	.string "The skeleton stands perfectly still in\n"
	.string "a menacing pose.$"

BATTLE_DRAYNORMANOR_Trainer_6_Text_0:
	.string "The skeleton looks like it forgot what\n"
	.string "it was about to say.$"

BATTLE_DRAYNORMANOR_Trainer_6_Text_1:
	.string "The skeleton remembered, but the\n"
	.string "chance to say it is lost.$"

BATTLE_DRAYNORMANOR_Trainer_7_Text_0:
	.string "The skeleton loses an arm walking\n"
	.string "towards you.$"

BATTLE_DRAYNORMANOR_Trainer_7_Text_1:
	.string "The skeleton is frantically looking for\n"
	.string "his arm.$"

BATTLE_DRAYNORMANOR_Trainer_8_Text_0:
	.string "…$"

BATTLE_DRAYNORMANOR_Trainer_8_Text_1:
	.string "…………Hi.$"

BATTLE_DRAYNORMANOR_Trainer_8_Text_2:
	.string "………………Hi.$"

SIGN_DRAYNORMANOR_LEVER_1_Text_0:
	.string "You pull a hidden lever!$"
