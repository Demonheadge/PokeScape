Tzhaar_Gym_Challenge_MapScripts::
	.byte 0


TZHAAR_GYM_CHALLENGE_WAVE1::
	msgbox TZHAAR_GYM_CHALLENGE_WAVE1_Text_0
	closemessage
	applymovement 1, movement_TZHAAR_GYM_WAVES_1
	applymovement 2, movement_TZHAAR_GYM_WAVES_2
	applymovement 3, movement_TZHAAR_GYM_WAVES_3
	delay 90
	msgbox TZHAAR_GYM_CHALLENGE_WAVE1_Text_1
	closemessage
	removeobject 1
	removeobject 2
	removeobject 3
	setflag FLAG_TEMP_1
	setflag FLAG_TEMP_2
	setflag FLAG_TEMP_3
	msgbox TZHAAR_GYM_CHALLENGE_WAVE1_Text_2
	closemessage
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	addvar VAR_TEMP_0, 4
	addvar VAR_TEMP_1, 4
	setobjectxyperm 1, VAR_TEMP_0, VAR_TEMP_1
	subvar VAR_TEMP_0, 4
	subvar VAR_TEMP_1, 3
	setobjectxyperm 2, VAR_TEMP_0, VAR_TEMP_1
	addobject 1
	addobject 2
	addobject 3
	clearflag FLAG_TEMP_1
	clearflag FLAG_TEMP_2
	clearflag FLAG_TEMP_3
	msgbox TZHAAR_GYM_CHALLENGE_WAVE1_Text_1
	closemessage
	msgbox TZHAAR_GYM_CHALLENGE_WAVE1_Text_3
	closemessage
	playmoncry SPECIES_TZ_KIH, 1
	msgbox TZHAAR_GYM_CHALLENGE_WAVE1_Text_1
	waitmoncry
	closemessage
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	subvar VAR_TEMP_1, 2
	setobjectxyperm 1, VAR_TEMP_0, VAR_TEMP_1
	release
	end


movement_TZHAAR_GYM_WAVES_1:
	walk_down
	walk_down
	walk_down
	step_end

movement_TZHAAR_GYM_WAVES_2:
	walk_right
	walk_right
	walk_right
	step_end

movement_TZHAAR_GYM_WAVES_3:
	walk_left
	walk_left
	walk_left
	step_end

RANDOM_ENEMY_SPAWN::
	compare VAR_TEMP_A, 1
	goto_if_eq RANDOM_ENEMY_SPAWN_2
	compare VAR_TEMP_B, 1
	goto_if_eq RANDOM_ENEMY_SPAWN_3
RANDOM_ENEMY_SPAWN_1:
	return

RANDOM_ENEMY_SPAWN_2:
	random 2
	switch VAR_RESULT
	case 0, RANDOM_ENEMY_SPAWN_7
	case 1, RANDOM_ENEMY_SPAWN_8
	goto RANDOM_ENEMY_SPAWN_1

RANDOM_ENEMY_SPAWN_3:
	random 2
	switch VAR_RESULT
	case 0, RANDOM_ENEMY_SPAWN_10
	case 1, RANDOM_ENEMY_SPAWN_11
	goto RANDOM_ENEMY_SPAWN_1

RANDOM_ENEMY_SPAWN_7:
	call SPAWN_TZKIH_A
	goto RANDOM_ENEMY_SPAWN_1

RANDOM_ENEMY_SPAWN_8:
	call SPAWN_GAAL_A
	goto RANDOM_ENEMY_SPAWN_1

RANDOM_ENEMY_SPAWN_10:
	call SPAWN_TZKIH_B
	goto RANDOM_ENEMY_SPAWN_1

RANDOM_ENEMY_SPAWN_11:
	call SPAWN_GAAL_B
	goto RANDOM_ENEMY_SPAWN_1


RANDOM_ENEMY_SPAWN_LOCATION::
	random 8
	switch VAR_RESULT
	case 0, RANDOM_ENEMY_SPAWN_LOCATION_3
	case 1, RANDOM_ENEMY_SPAWN_LOCATION_4
	case 2, RANDOM_ENEMY_SPAWN_LOCATION_5
	case 3, RANDOM_ENEMY_SPAWN_LOCATION_6
	case 4, RANDOM_ENEMY_SPAWN_LOCATION_7
	case 5, RANDOM_ENEMY_SPAWN_LOCATION_8
	case 6, RANDOM_ENEMY_SPAWN_LOCATION_9
	case 7, RANDOM_ENEMY_SPAWN_LOCATION_10
RANDOM_ENEMY_SPAWN_LOCATION_1:
	return

RANDOM_ENEMY_SPAWN_LOCATION_3:
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	addvar VAR_TEMP_1, 1
	goto RANDOM_ENEMY_SPAWN_LOCATION_1

RANDOM_ENEMY_SPAWN_LOCATION_4:
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	subvar VAR_TEMP_1, 1
	goto RANDOM_ENEMY_SPAWN_LOCATION_1

RANDOM_ENEMY_SPAWN_LOCATION_5:
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	addvar VAR_TEMP_0, 1
	goto RANDOM_ENEMY_SPAWN_LOCATION_1

RANDOM_ENEMY_SPAWN_LOCATION_6:
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	subvar VAR_TEMP_0, 1
	goto RANDOM_ENEMY_SPAWN_LOCATION_1

RANDOM_ENEMY_SPAWN_LOCATION_7:
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	addvar VAR_TEMP_1, 2
	goto RANDOM_ENEMY_SPAWN_LOCATION_1

RANDOM_ENEMY_SPAWN_LOCATION_8:
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	subvar VAR_TEMP_1, 2
	goto RANDOM_ENEMY_SPAWN_LOCATION_1

RANDOM_ENEMY_SPAWN_LOCATION_9:
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	addvar VAR_TEMP_0, 2
	goto RANDOM_ENEMY_SPAWN_LOCATION_1

RANDOM_ENEMY_SPAWN_LOCATION_10:
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	subvar VAR_TEMP_0, 2
	goto RANDOM_ENEMY_SPAWN_LOCATION_1


TRIGGER_ENEMY_SPAWN_A::
	call RANDOM_ENEMY_SPAWN_LOCATION
	call RANDOM_ENEMY_SPAWN
	setvar VAR_TEMP_A, 2
	release
	end


SPAWN_TZKIH_A::
	setobjectxyperm 1, VAR_TEMP_0, VAR_TEMP_1
	addobject 1
	clearflag FLAG_TEMP_1
	playmoncry SPECIES_TZ_KIH, 1
	namebox SPAWN_TZKIH_A_Text_0
	msgbox TZHAAR_GYM_CHALLENGE_WAVE1_Text_1
	waitmoncry
	closemessage
	return


SPAWN_GAAL_A::
	setobjectxyperm 4, VAR_TEMP_0, VAR_TEMP_1
	addobject 4
	clearflag FLAG_TEMP_4
	namebox SPAWN_GAAL_A_Text_0
	msgbox SPAWN_GAAL_A_Text_1
	closemessage
	return


ENEMY_TZKIH_A::
	removeobject 1
	setflag FLAG_TEMP_1
	setvar VAR_TEMP_A, 1
	return


ENEMY_GAAL_A::
	removeobject 4
	setflag FLAG_TEMP_4
	setvar VAR_TEMP_A, 1
	return


TRIGGER_ENEMY_SPAWN_B::
	call RANDOM_ENEMY_SPAWN_LOCATION
	call RANDOM_ENEMY_SPAWN
	setvar VAR_TEMP_B, 2
	release
	end


SPAWN_TZKIH_B::
	setobjectxyperm 2, VAR_TEMP_0, VAR_TEMP_1
	addobject 2
	clearflag FLAG_TEMP_2
	playmoncry SPECIES_TZ_KIH, 1
	namebox SPAWN_TZKIH_A_Text_0
	msgbox TZHAAR_GYM_CHALLENGE_WAVE1_Text_1
	waitmoncry
	closemessage
	return


SPAWN_GAAL_B::
	setobjectxyperm 5, VAR_TEMP_0, VAR_TEMP_1
	addobject 5
	clearflag FLAG_TEMP_5
	namebox SPAWN_GAAL_A_Text_0
	msgbox SPAWN_GAAL_A_Text_1
	closemessage
	return


ENEMY_TZKIH_B::
	removeobject 2
	setflag FLAG_TEMP_2
	setvar VAR_TEMP_B, 1
	return


ENEMY_GAAL_B::
	removeobject 5
	setflag FLAG_TEMP_5
	setvar VAR_TEMP_B, 1
	return


TZHAAR_GYM_CHALLENGE_WAVE1_Text_0:
	.string "WAVE 1.$"

TZHAAR_GYM_CHALLENGE_WAVE1_Text_1:
	.string "Keehsse!$"

TZHAAR_GYM_CHALLENGE_WAVE1_Text_2:
	.string "WAVE 2.$"

TZHAAR_GYM_CHALLENGE_WAVE1_Text_3:
	.string "WAVE 3.$"

SPAWN_TZKIH_A_Text_0:
	.string "Tz-Kih$"

SPAWN_GAAL_A_Text_0:
	.string "Ga'al$"

SPAWN_GAAL_A_Text_1:
	.string "Surpirse battle!$"
