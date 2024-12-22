Tzhaar_HarAken_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Tzhaar_HarAken_MapScripts_MAP_SCRIPT_ON_TRANSITION
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Tzhaar_HarAken_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Tzhaar_HarAken_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	.byte 0

Tzhaar_HarAken_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	call HARAKEN_STATE
	return

Tzhaar_HarAken_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_TEMP_A, 0, HARAKEN_START
	.2byte 0

Tzhaar_HarAken_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
	map_script_2 VAR_TEMP_B, 0, HARAKEN_METATILES
	.2byte 0


FIGHT_CAVES_RESTRICTIONS_ON::
	setflag FLAG_TOGGLE_NO_CATCHING
	setflag FLAG_TOGGLE_NO_BAG_USE
	setflag FLAG_TZHAAR_RANDOM
	setflag FLAG_POKESCAPE_USECUSTOM_POOL_LEVEL
	closemessage
	return


FIGHT_CAVES_RESTRICTIONS_OFF::
	clearflag FLAG_TOGGLE_NO_CATCHING
	clearflag FLAG_TOGGLE_NO_BAG_USE
	clearflag FLAG_TZHAAR_RANDOM
	clearflag FLAG_POKESCAPE_USECUSTOM_POOL_LEVEL
	closemessage
	return


FIGHT_CAVES_START::
	call FIGHT_CAVES_RESTRICTIONS_ON
	warp MAP_TZHAAR_GYM_CHALLENGE, 0
	waitstate
	return


FIGHT_CAVES_FINISHED::
	closemessage
	call FIGHT_CAVES_RESTRICTIONS_OFF
	warp MAP_TZHAAR_GYM_ROOM, 1
	waitstate
	end


HARAKEN_STATE::
	removeobject 1
	setflag FLAG_TEMP_1
	removeobject 2
	setflag FLAG_TEMP_2
	removeobject 3
	setflag FLAG_TEMP_3
	removeobject 4
	setflag FLAG_TEMP_4
	removeobject 5
	setflag FLAG_TEMP_5
	removeobject 6
	setflag FLAG_TEMP_6
	removeobject 7
	setflag FLAG_TEMP_7
	removeobject 8
	setflag FLAG_TEMP_8
	removeobject 9
	setflag FLAG_TEMP_9
	return


HARAKEN_METATILES::
	setvar VAR_TEMP_B, 1
	setmetatile 4, 1, METATILE_PokeScape_Caves_LAVA_POOL, TRUE
	setmetatile 5, 1, METATILE_PokeScape_Caves_LAVA_BUBBLES, TRUE
	setmetatile 6, 1, METATILE_PokeScape_Caves_LAVA_POOL, TRUE
	setmetatile 3, 1, METATILE_PokeScape_Caves_LAVA_POOL, TRUE
	setmetatile 7, 1, METATILE_PokeScape_Caves_LAVA_POOL, TRUE
	setmetatile 9, 3, METATILE_PokeScape_Caves_LAVA_POOL_R, TRUE
	setmetatile 9, 7, METATILE_PokeScape_Caves_LAVA_POOL_R, TRUE
	setmetatile 1, 3, METATILE_PokeScape_Caves_LAVA_POOL_L, TRUE
	setmetatile 1, 7, METATILE_PokeScape_Caves_LAVA_POOL_L, TRUE
	setmetatile 3, 9, METATILE_PokeScape_Caves_LAVA_POOL_DOWN, TRUE
	setmetatile 7, 9, METATILE_PokeScape_Caves_LAVA_POOL_DOWN, TRUE
	special DrawWholeMapView
	return


HARAKEN_START::
	setvar VAR_TEMP_A, 1
	setmetatile 4, 1, METATILE_PokeScape_Caves_LAVA_POOL, TRUE
	setmetatile 5, 1, METATILE_PokeScape_Caves_LAVA_BUBBLES, TRUE
	setmetatile 6, 1, METATILE_PokeScape_Caves_LAVA_POOL, TRUE
	setmetatile 3, 1, METATILE_PokeScape_Caves_LAVA_POOL, TRUE
	setmetatile 7, 1, METATILE_PokeScape_Caves_LAVA_POOL, TRUE
	setmetatile 9, 3, METATILE_PokeScape_Caves_LAVA_POOL_R, TRUE
	setmetatile 9, 7, METATILE_PokeScape_Caves_LAVA_POOL_R, TRUE
	setmetatile 1, 3, METATILE_PokeScape_Caves_LAVA_POOL_L, TRUE
	setmetatile 1, 7, METATILE_PokeScape_Caves_LAVA_POOL_L, TRUE
	setmetatile 3, 9, METATILE_PokeScape_Caves_LAVA_POOL_DOWN, TRUE
	setmetatile 7, 9, METATILE_PokeScape_Caves_LAVA_POOL_DOWN, TRUE
	special DrawWholeMapView
	msgbox HARAKEN_START_Text_0
	closemessage
	addobject 2
	clearflag FLAG_TEMP_2
	setmetatile 7, 1, METATILE_PokeScape_Caves_TENTACLE_POOL_UP, TRUE
	special DrawWholeMapView
	applymovement 2, movement_HARAKEN_1
	waitmovement 0
	setobjectmovementtype 2, MOVEMENT_TYPE_WALK_IN_PLACE_UP
	addobject 3
	clearflag FLAG_TEMP_3
	setmetatile 9, 3, METATILE_PokeScape_Caves_TENTACLE_POOL_R, TRUE
	special DrawWholeMapView
	applymovement 3, movement_HARAKEN_1
	waitmovement 0
	setobjectmovementtype 3, MOVEMENT_TYPE_WALK_IN_PLACE_UP
	addobject 4
	clearflag FLAG_TEMP_4
	setmetatile 9, 7, METATILE_PokeScape_Caves_TENTACLE_POOL_R, TRUE
	special DrawWholeMapView
	applymovement 4, movement_HARAKEN_1
	waitmovement 0
	setobjectmovementtype 4, MOVEMENT_TYPE_WALK_IN_PLACE_UP
	addobject 5
	clearflag FLAG_TEMP_5
	setmetatile 7, 9, METATILE_PokeScape_Caves_TENTACLE_POOL_DOWN, TRUE
	special DrawWholeMapView
	applymovement 5, movement_HARAKEN_1
	waitmovement 0
	setobjectmovementtype 5, MOVEMENT_TYPE_WALK_IN_PLACE_UP
	addobject 6
	clearflag FLAG_TEMP_6
	setmetatile 3, 9, METATILE_PokeScape_Caves_TENTACLE_POOL_DOWN, TRUE
	special DrawWholeMapView
	applymovement 6, movement_HARAKEN_2
	waitmovement 0
	setobjectmovementtype 6, MOVEMENT_TYPE_WALK_IN_PLACE_DOWN
	addobject 7
	clearflag FLAG_TEMP_7
	setmetatile 1, 7, METATILE_PokeScape_Caves_TENTACLE_POOL_L, TRUE
	special DrawWholeMapView
	applymovement 7, movement_HARAKEN_2
	waitmovement 0
	setobjectmovementtype 7, MOVEMENT_TYPE_WALK_IN_PLACE_DOWN
	addobject 8
	clearflag FLAG_TEMP_8
	setmetatile 1, 3, METATILE_PokeScape_Caves_TENTACLE_POOL_L, TRUE
	special DrawWholeMapView
	applymovement 8, movement_HARAKEN_2
	waitmovement 0
	setobjectmovementtype 8, MOVEMENT_TYPE_WALK_IN_PLACE_DOWN
	addobject 9
	clearflag FLAG_TEMP_9
	setmetatile 3, 1, METATILE_PokeScape_Caves_TENTACLE_POOL_UP, TRUE
	special DrawWholeMapView
	applymovement 9, movement_HARAKEN_2
	waitmovement 0
	setobjectmovementtype 9, MOVEMENT_TYPE_WALK_IN_PLACE_DOWN
	addobject 1
	clearflag FLAG_TEMP_1
	applymovement 1, HAR_AKEN_WALK_SLOW
	waitmovement 0
	setmetatile 4, 1, METATILE_PokeScape_Caves_HARAKEN_POOL_L, TRUE
	setmetatile 5, 1, METATILE_PokeScape_Caves_HARAKEN_POOL_M, TRUE
	setmetatile 6, 1, METATILE_PokeScape_Caves_HARAKEN_POOL_R, TRUE
	special DrawWholeMapView
	namebox HARAKEN_START_Text_1
	msgbox HARAKEN_START_Text_2
	closemessage
	hidenamebox
	delay 60
	msgbox HARAKEN_START_Text_3
	closemessage
	release
	return


movement_HARAKEN_1:
	face_right
	walk_in_place_right
	walk_in_place_right
	face_up
	step_end

movement_HARAKEN_2:
	face_left
	walk_in_place_left
	walk_in_place_left
	face_down
	step_end

HAR_AKEN_WALK_SLOW:
	lock_facing_direction
	walk_slow_down
	unlock_facing_direction
	step_end

ENEMY_TENTACLE_1::
	setmetatile 7, 1, METATILE_PokeScape_Caves_LAVA_POOL, TRUE
	call ENCOUNTER_TENTACLE
	special DrawWholeMapView
	return


ENEMY_TENTACLE_2::
	setmetatile 9, 3, METATILE_PokeScape_Caves_LAVA_POOL_R, TRUE
	call ENCOUNTER_TENTACLE
	special DrawWholeMapView
	return


ENEMY_TENTACLE_3::
	setmetatile 9, 7, METATILE_PokeScape_Caves_LAVA_POOL_R, TRUE
	call ENCOUNTER_TENTACLE
	special DrawWholeMapView
	return


ENEMY_TENTACLE_4::
	setmetatile 7, 9, METATILE_PokeScape_Caves_LAVA_POOL_DOWN, TRUE
	call ENCOUNTER_TENTACLE
	special DrawWholeMapView
	return


ENEMY_TENTACLE_5::
	setmetatile 3, 9, METATILE_PokeScape_Caves_LAVA_POOL_DOWN, TRUE
	call ENCOUNTER_TENTACLE
	special DrawWholeMapView
	return


ENEMY_TENTACLE_6::
	setmetatile 1, 7, METATILE_PokeScape_Caves_LAVA_POOL_L, TRUE
	call ENCOUNTER_TENTACLE
	special DrawWholeMapView
	return


ENEMY_TENTACLE_7::
	setmetatile 1, 3, METATILE_PokeScape_Caves_LAVA_POOL_L, TRUE
	call ENCOUNTER_TENTACLE
	special DrawWholeMapView
	return


ENEMY_TENTACLE_8::
	setmetatile 3, 1, METATILE_PokeScape_Caves_LAVA_POOL, TRUE
	call ENCOUNTER_TENTACLE
	special DrawWholeMapView
	return


ENEMY_HAR_AKEN::
	compare VAR_TEMP_C, 8
	goto_if_eq ENEMY_HAR_AKEN_2
	msgbox ENEMY_HAR_AKEN_Text_0
	closemessage
ENEMY_HAR_AKEN_1:
	release
	end

ENEMY_HAR_AKEN_2:
	setmetatile 4, 1, METATILE_PokeScape_Caves_LAVA_POOL, TRUE
	setmetatile 5, 1, METATILE_PokeScape_Caves_LAVA_BUBBLES, TRUE
	setmetatile 6, 1, METATILE_PokeScape_Caves_LAVA_POOL, TRUE
	call ENCOUNTER_HAR_AKEN
	special DrawWholeMapView
	goto FIGHT_CAVES_FINISHED
	goto ENEMY_HAR_AKEN_1


ENCOUNTER_TENTACLE::
	setwildbattle SPECIES_TOME_OF_STRENGTH, 20, ITEM_NONE
	dowildbattle
	switch VAR_RESULT
	case B_OUTCOME_WON, ENCOUNTER_TENTACLE_3
	case B_OUTCOME_CAUGHT, ENCOUNTER_TENTACLE_4
ENCOUNTER_TENTACLE_1:
	return

ENCOUNTER_TENTACLE_3:
	fadescreenswapbuffers FADE_TO_BLACK
	removeobject VAR_LAST_TALKED
	addvar VAR_TEMP_C, 1
	fadescreenswapbuffers FADE_FROM_BLACK
	goto ENCOUNTER_TENTACLE_1

ENCOUNTER_TENTACLE_4:
	fadescreenswapbuffers FADE_TO_BLACK
	removeobject VAR_LAST_TALKED
	addvar VAR_TEMP_C, 1
	fadescreenswapbuffers FADE_FROM_BLACK
	goto ENCOUNTER_TENTACLE_1


ENCOUNTER_HAR_AKEN::
	namebox HARAKEN_START_Text_1
	msgbox HARAKEN_START_Text_2
	closemessage
	hidenamebox
	setwildbattle SPECIES_TZKAL_ZUK, 30, ITEM_NONE
	dowildbattle
	switch VAR_RESULT
	case B_OUTCOME_WON, ENCOUNTER_HAR_AKEN_3
	case B_OUTCOME_CAUGHT, ENCOUNTER_HAR_AKEN_4
ENCOUNTER_HAR_AKEN_1:
	return

ENCOUNTER_HAR_AKEN_3:
	fadescreenswapbuffers FADE_TO_BLACK
	removeobject VAR_LAST_TALKED
	fadescreenswapbuffers FADE_FROM_BLACK
	goto ENCOUNTER_HAR_AKEN_1

ENCOUNTER_HAR_AKEN_4:
	fadescreenswapbuffers FADE_TO_BLACK
	removeobject VAR_LAST_TALKED
	fadescreenswapbuffers FADE_FROM_BLACK
	goto ENCOUNTER_HAR_AKEN_1


HARAKEN_START_Text_0:
	.string "WAVE: HAR-AKEN.$"

HARAKEN_START_Text_1:
	.string "Har-Aken$"

HARAKEN_START_Text_2:
	.string "RAROUGH!$"

HARAKEN_START_Text_3:
	.string "Defeat the tentacles!$"

ENEMY_HAR_AKEN_Text_0:
	.string "Har-Aken is too strong to approach.\p"
	.string "Get rid of the tentcales first!$"
