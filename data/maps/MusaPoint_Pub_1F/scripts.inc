MusaPoint_Pub_1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, MusaPoint_Pub_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

MusaPoint_Pub_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	call MUSAPOINT_PUB_STATE
	setvar VAR_EVOLUTION_MAP_STATE, 15
	return


MUSAPOINT_PUB_STATE::
	compare VAR_WISE_OLD_MAN_RIVAL, 20
	goto_if_eq MUSAPOINT_PUB_STATE_1
	removeobject 5
	setflag FLAG_TEMP_1F
	return

MUSAPOINT_PUB_STATE_1:
	addobject 5
	clearflag FLAG_TEMP_1F
	return

