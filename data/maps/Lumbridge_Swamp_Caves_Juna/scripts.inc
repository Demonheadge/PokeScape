Lumbridge_Swamp_Caves_Juna_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Lumbridge_Swamp_Caves_Juna_MapScripts_MAP_SCRIPT_ON_TRANSITION
	map_script MAP_SCRIPT_ON_LOAD, Lumbridge_Swamp_Caves_Juna_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

Lumbridge_Swamp_Caves_Juna_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setvar VAR_EVOLUTION_MAP_STATE, 43
	return

Lumbridge_Swamp_Caves_Juna_MapScripts_MAP_SCRIPT_ON_LOAD:
	setflag FLAG_TEMP_B
	setflag FLAG_TEMP_C
	setflag FLAG_TEMP_F
	call JUNA_POOL_STATE
	call JUNA_POOL_DIRTY
	return


JUNA_POOL_DIRTY::
	goto_if_unset FLAG_TEMP_10, JUNA_POOL_DIRTY_2
JUNA_POOL_DIRTY_1:
	goto_if_set FLAG_TEMP_10, JUNA_POOL_DIRTY_5
JUNA_POOL_DIRTY_4:
	return

JUNA_POOL_DIRTY_2:
	setmetatile 29, 11, 556, 0
	setmetatile 30, 11, 556, 0
	setmetatile 29, 12, 556, 0
	setmetatile 30, 12, 556, 0
	setmetatile 29, 13, 556, 0
	setmetatile 30, 13, 556, 0
	setmetatile 29, 14, 556, 0
	setmetatile 30, 14, 556, 0
	setmetatile 28, 13, 556, 0
	setmetatile 28, 14, 556, 0
	special DrawWholeMapView
	goto JUNA_POOL_DIRTY_1

JUNA_POOL_DIRTY_5:
	setmetatile 29, 11, 646, 0
	setmetatile 30, 11, 646, 0
	setmetatile 29, 12, 646, 0
	setmetatile 30, 12, 646, 0
	setmetatile 29, 13, 646, 0
	setmetatile 30, 13, 646, 0
	setmetatile 29, 14, 646, 0
	setmetatile 30, 14, 646, 0
	setmetatile 28, 13, 646, 0
	setmetatile 28, 14, 646, 0
	setmetatile 28, 24, 589, 0
	setmetatile 26, 24, 646, 0
	setmetatile 27, 24, 646, 0
	setmetatile 26, 25, 646, 0
	setmetatile 27, 25, 646, 0
	setmetatile 1, 18, 589, 0
	setmetatile 2, 18, 646, 0
	setmetatile 3, 18, 646, 0
	setmetatile 2, 19, 646, 0
	setmetatile 3, 19, 646, 0
	special DrawWholeMapView
	goto JUNA_POOL_DIRTY_4


JUNA_POOL_ALL_FLAGS::
	goto_if_set FLAG_TEMP_A, JUNA_POOL_ALL_FLAGS_2
JUNA_POOL_ALL_FLAGS_1:
	return

JUNA_POOL_ALL_FLAGS_2:
	goto_if_set FLAG_TEMP_B, JUNA_POOL_ALL_FLAGS_4
	goto JUNA_POOL_ALL_FLAGS_1

JUNA_POOL_ALL_FLAGS_4:
	goto_if_set FLAG_TEMP_C, JUNA_POOL_ALL_FLAGS_6
	goto JUNA_POOL_ALL_FLAGS_1

JUNA_POOL_ALL_FLAGS_6:
	goto_if_set FLAG_TEMP_D, JUNA_POOL_ALL_FLAGS_8
	goto JUNA_POOL_ALL_FLAGS_1

JUNA_POOL_ALL_FLAGS_8:
	goto_if_set FLAG_TEMP_E, JUNA_POOL_ALL_FLAGS_10
	goto JUNA_POOL_ALL_FLAGS_1

JUNA_POOL_ALL_FLAGS_10:
	goto_if_set FLAG_TEMP_F, JUNA_POOL_ALL_FLAGS_12
	goto JUNA_POOL_ALL_FLAGS_1

JUNA_POOL_ALL_FLAGS_12:
	msgbox JUNA_POOL_ALL_FLAGS_Text_0
	closemessage
	setflag FLAG_TEMP_10
	call JUNA_POOL_DIRTY
	return


JUNA_POOL_STATE::
	goto_if_set FLAG_TEMP_A, JUNA_POOL_STATE_2
	goto_if_unset FLAG_TEMP_A, JUNA_POOL_STATE_3
JUNA_POOL_STATE_1:
	goto_if_set FLAG_TEMP_B, JUNA_POOL_STATE_7
	goto_if_unset FLAG_TEMP_B, JUNA_POOL_STATE_8
JUNA_POOL_STATE_6:
	goto_if_set FLAG_TEMP_C, JUNA_POOL_STATE_12
	setmetatile 34, 9, 590, 0
	special DrawWholeMapView
JUNA_POOL_STATE_11:
	goto_if_set FLAG_TEMP_D, JUNA_POOL_STATE_16
	setmetatile 37, 9, 590, 0
	special DrawWholeMapView
JUNA_POOL_STATE_15:
	goto_if_set FLAG_TEMP_E, JUNA_POOL_STATE_20
	setmetatile 38, 10, 590, 0
	special DrawWholeMapView
JUNA_POOL_STATE_19:
	goto_if_set FLAG_TEMP_F, JUNA_POOL_STATE_24
	setmetatile 38, 15, 590, 0
	special DrawWholeMapView
JUNA_POOL_STATE_23:
	return

JUNA_POOL_STATE_2:
	setmetatile 30, 9, 589, 0
	special DrawWholeMapView
	goto JUNA_POOL_STATE_1

JUNA_POOL_STATE_3:
	setmetatile 30, 9, 590, 0
	special DrawWholeMapView
	goto JUNA_POOL_STATE_1

JUNA_POOL_STATE_7:
	setmetatile 32, 9, 589, 0
	special DrawWholeMapView
	goto JUNA_POOL_STATE_6

JUNA_POOL_STATE_8:
	setmetatile 32, 9, 590, 0
	special DrawWholeMapView
	goto JUNA_POOL_STATE_6

JUNA_POOL_STATE_12:
	setmetatile 34, 9, 589, 0
	special DrawWholeMapView
	goto JUNA_POOL_STATE_11

JUNA_POOL_STATE_16:
	setmetatile 37, 9, 589, 0
	special DrawWholeMapView
	goto JUNA_POOL_STATE_15

JUNA_POOL_STATE_20:
	setmetatile 38, 10, 589, 0
	special DrawWholeMapView
	goto JUNA_POOL_STATE_19

JUNA_POOL_STATE_24:
	setmetatile 38, 15, 589, 0
	special DrawWholeMapView
	goto JUNA_POOL_STATE_23


JUNA_TOGGLE_TEMP_FLAG_1::
	goto_if_unset FLAG_TEMP_A, JUNA_TOGGLE_TEMP_FLAG_1_2
	goto_if_set FLAG_TEMP_A, JUNA_TOGGLE_TEMP_FLAG_1_5
	return

JUNA_TOGGLE_TEMP_FLAG_1_2:
	setflag FLAG_TEMP_A
	return

JUNA_TOGGLE_TEMP_FLAG_1_5:
	clearflag FLAG_TEMP_A
	return


JUNA_TOGGLE_TEMP_FLAG_2::
	goto_if_unset FLAG_TEMP_B, JUNA_TOGGLE_TEMP_FLAG_2_2
	goto_if_set FLAG_TEMP_B, JUNA_TOGGLE_TEMP_FLAG_2_5
	return

JUNA_TOGGLE_TEMP_FLAG_2_2:
	setflag FLAG_TEMP_B
	return

JUNA_TOGGLE_TEMP_FLAG_2_5:
	clearflag FLAG_TEMP_B
	return


JUNA_TOGGLE_TEMP_FLAG_3::
	goto_if_unset FLAG_TEMP_C, JUNA_TOGGLE_TEMP_FLAG_3_2
	goto_if_set FLAG_TEMP_C, JUNA_TOGGLE_TEMP_FLAG_3_5
	return

JUNA_TOGGLE_TEMP_FLAG_3_2:
	setflag FLAG_TEMP_C
	return

JUNA_TOGGLE_TEMP_FLAG_3_5:
	clearflag FLAG_TEMP_C
	return


JUNA_TOGGLE_TEMP_FLAG_4::
	goto_if_unset FLAG_TEMP_D, JUNA_TOGGLE_TEMP_FLAG_4_2
	goto_if_set FLAG_TEMP_D, JUNA_TOGGLE_TEMP_FLAG_4_5
	return

JUNA_TOGGLE_TEMP_FLAG_4_2:
	setflag FLAG_TEMP_D
	return

JUNA_TOGGLE_TEMP_FLAG_4_5:
	clearflag FLAG_TEMP_D
	return


JUNA_TOGGLE_TEMP_FLAG_5::
	goto_if_unset FLAG_TEMP_E, JUNA_TOGGLE_TEMP_FLAG_5_2
	goto_if_set FLAG_TEMP_E, JUNA_TOGGLE_TEMP_FLAG_5_5
	return

JUNA_TOGGLE_TEMP_FLAG_5_2:
	setflag FLAG_TEMP_E
	return

JUNA_TOGGLE_TEMP_FLAG_5_5:
	clearflag FLAG_TEMP_E
	return


JUNA_TOGGLE_TEMP_FLAG_6::
	goto_if_unset FLAG_TEMP_F, JUNA_TOGGLE_TEMP_FLAG_6_2
	goto_if_set FLAG_TEMP_F, JUNA_TOGGLE_TEMP_FLAG_6_5
	return

JUNA_TOGGLE_TEMP_FLAG_6_2:
	setflag FLAG_TEMP_F
	return

JUNA_TOGGLE_TEMP_FLAG_6_5:
	clearflag FLAG_TEMP_F
	return


JUNA_TEARS_1::
	call JUNA_TOGGLE_TEMP_FLAG_1
	call JUNA_TOGGLE_TEMP_FLAG_2
	call JUNA_POOL_STATE
	call JUNA_POOL_ALL_FLAGS
	return


JUNA_TEARS_2::
	call JUNA_TOGGLE_TEMP_FLAG_1
	call JUNA_TOGGLE_TEMP_FLAG_2
	call JUNA_TOGGLE_TEMP_FLAG_3
	call JUNA_POOL_STATE
	call JUNA_POOL_ALL_FLAGS
	return


JUNA_TEARS_3::
	call JUNA_TOGGLE_TEMP_FLAG_2
	call JUNA_TOGGLE_TEMP_FLAG_3
	call JUNA_TOGGLE_TEMP_FLAG_4
	call JUNA_POOL_STATE
	call JUNA_POOL_ALL_FLAGS
	return


JUNA_TEARS_4::
	call JUNA_TOGGLE_TEMP_FLAG_3
	call JUNA_TOGGLE_TEMP_FLAG_4
	call JUNA_TOGGLE_TEMP_FLAG_5
	call JUNA_POOL_STATE
	call JUNA_POOL_ALL_FLAGS
	return


JUNA_TEARS_5::
	call JUNA_TOGGLE_TEMP_FLAG_4
	call JUNA_TOGGLE_TEMP_FLAG_5
	call JUNA_TOGGLE_TEMP_FLAG_6
	call JUNA_POOL_STATE
	call JUNA_POOL_ALL_FLAGS
	return


JUNA_TEARS_6::
	call JUNA_TOGGLE_TEMP_FLAG_5
	call JUNA_TOGGLE_TEMP_FLAG_6
	call JUNA_POOL_STATE
	call JUNA_POOL_ALL_FLAGS
	return


JUNA_TOXIC_WATER::
	msgbox JUNA_TOXIC_WATER_Text_0
	closemessage
	release
	end


JUNA_POOL_ALL_FLAGS_Text_0:
	.string "BEEP BOOP.$"

JUNA_TOXIC_WATER_Text_0:
	.string "This water is too toxic to pass.$"
