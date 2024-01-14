Tutorial_Island_MapScripts::
	.byte 0


Tutorial_Jogger::
	lock
	faceplayer
	msgbox Tutorial_Jogger_Text_0
	release
	return


Tutorial_Chicken::
	lock
	faceplayer
	msgbox Tutorial_Chicken_Text_0
	release
	return


Tutorial_Ironman::
	lock
	faceplayer
	msgbox Tutorial_Ironman_Text_0
	release
	return


Tutorial_Noob1::
	lock
	faceplayer
	msgbox Tutorial_Noob1_Text_0
	release
	return


Tutorial_Noob2::
	lock
	faceplayer
	msgbox Tutorial_Noob2_Text_0
	release
	return


Tutorial_Sign::
	msgbox Tutorial_Sign_Text_0
	release
	return


Tutorial_PondGirl::
	lock
	faceplayer
	checkitem ITEM_SMALL_NET, 1
	compare VAR_RESULT, 0
	goto_if_eq Tutorial_PondGirl_1
	msgbox Tutorial_PondGirl_Text_4
	release
	return

Tutorial_PondGirl_1:
	msgbox Tutorial_PondGirl_Text_0
	applymovement OBJ_EVENT_ID_PLAYER, Tutorial_FacePond
	msgbox Tutorial_PondGirl_Text_1
	delay 15
	msgbox Tutorial_PondGirl_Text_2
	giveitem ITEM_SMALL_NET, 1
	msgbox Tutorial_PondGirl_Text_3
	release
	return


Tutorial_PondGirlCheck::
	checkitem ITEM_SMALL_NET, 1
	compare VAR_RESULT, 0
	goto_if_eq Tutorial_PondGirlCheck_1
	release
	return

Tutorial_PondGirlCheck_1:
	lock
	msgbox Tutorial_PondGirlCheck_Text_0
	applymovement OBJ_EVENT_ID_PLAYER, Tutorial_ReturnToPond
	waitmovement 0
	release
	return


Tutorial_FacePond:
	face_down
	step_end

Tutorial_ReturnToPond:
	walk_right
	walk_right
	walk_right
	step_end

Tutorial_Jogger_Text_0:
	.string "cupholder$"

Tutorial_Chicken_Text_0:
	.string "BAWK!$"

Tutorial_Ironman_Text_0:
	.string "Cupholders are EZ scape.$"

Tutorial_Noob1_Text_0:
	.string "I Picked Guthling as my starter!$"

Tutorial_Noob2_Text_0:
	.string "I Picked Zamling as my starter!$"

Tutorial_Sign_Text_0:
	.string "Thanks for playing!$"

Tutorial_PondGirl_Text_0:
	.string "I dropped my net in the pond! Can you\n"
	.string "help me get it back?$"

Tutorial_PondGirl_Text_1:
	.string "You dig around in the pond for a moment.\p…$"

Tutorial_PondGirl_Text_2:
	.string "You feel an item at the bottom of the\n"
	.string "pond$"

Tutorial_PondGirl_Text_3:
	.string "Thats not my net… mine was a lot bigger.\n"
	.string "Oh well you can keep it.$"

Tutorial_PondGirl_Text_4:
	.string "Thanks for trying to help me.$"

Tutorial_PondGirlCheck_Text_0:
	.string "That girl looks like she needs help.$"
