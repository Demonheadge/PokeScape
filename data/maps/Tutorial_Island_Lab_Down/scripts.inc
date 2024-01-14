Tutorial_Island_Lab_Down_MapScripts::
	.byte 0


membership::
	msgbox membership_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq membership_1
	clearflag FLAG_MEMBERSHIP
	release
	return

membership_1:
	setflag FLAG_MEMBERSHIP
	release
	return


INeedAMonsterUp::
	goto_if_unset FLAG_SYS_POKEMON_GET, INeedAMonsterUp_1
	release
	return

INeedAMonsterUp_1:
	lock
	msgbox INeedAMonsterUp_Text_0
	applymovement OBJ_EVENT_ID_PLAYER, MonsterMoveUp
	waitmovement 0
	release
	return


INeedAMonsterLeft::
	goto_if_unset FLAG_SYS_POKEMON_GET, INeedAMonsterLeft_1
	release
	return

INeedAMonsterLeft_1:
	lock
	msgbox INeedAMonsterUp_Text_0
	applymovement OBJ_EVENT_ID_PLAYER, MonsterMoveLeft
	waitmovement 0
	release
	return


INeedAMonsterRight::
	goto_if_unset FLAG_SYS_POKEMON_GET, INeedAMonsterRight_1
	release
	return

INeedAMonsterRight_1:
	lock
	msgbox INeedAMonsterUp_Text_0
	applymovement OBJ_EVENT_ID_PLAYER, MonsterMoveRight
	waitmovement 0
	release
	return


MonsterMoveUp:
	walk_up
	step_end

MonsterMoveLeft:
	walk_left
	step_end

MonsterMoveRight:
	walk_right
	step_end

membership_Text_0:
	.string "Would you like to be a member?$"

INeedAMonsterUp_Text_0:
	.string "I should take a monster with me.$"
