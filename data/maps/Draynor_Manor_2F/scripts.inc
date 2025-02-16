Draynor_Manor_2F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Draynor_Manor_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Draynor_Manor_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	call DRAYNOR_MANOR_2F_STATE
	return


DRAYNOR_MANOR_2F_STATE::
	setflag FLAG_TEMP_1E
	removeobject 11
	switch VAR_POKESCAPE_STORYMODE_PROGRESS
	case 26, DRAYNOR_MANOR_2F_STATE_2
	case 27, DRAYNOR_MANOR_2F_STATE_3
	return

DRAYNOR_MANOR_2F_STATE_2:
	clearflag FLAG_TEMP_1E
	addobject 11
	setobjectmovementtype 11, MOVEMENT_TYPE_FACE_UP
	return

DRAYNOR_MANOR_2F_STATE_3:
	clearflag FLAG_TEMP_1E
	addobject 11
	setobjectxyperm 11, 14, 19
	setobjectmovementtype 11, MOVEMENT_TYPE_LOOK_AROUND
	return

