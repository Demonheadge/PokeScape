Daemonheim_Gym_MapScripts::
	.byte 0


DAEMONHEIM_GYM_THOK::
	lock
	faceplayer
	namebox DAEMONHEIM_GYM_THOK_Text_0
	goto_if_unset FLAG_BADGE06_GET, DAEMONHEIM_GYM_THOK_2
	msgbox DAEMONHEIM_GYM_THOK_Text_7
	hidenamebox
	release
	end

DAEMONHEIM_GYM_THOK_2:
	msgbox DAEMONHEIM_GYM_THOK_Text_1
	hidenamebox
	call GYM_BATTLE_THOK
	namebox DAEMONHEIM_GYM_THOK_Text_0
	msgbox DAEMONHEIM_GYM_THOK_Text_2
	hidenamebox
	playfanfare MUS_PS_QUEST_COMPLETE
	msgbox DAEMONHEIM_GYM_THOK_Text_3
	waitfanfare
	waitmessage
	namebox DAEMONHEIM_GYM_THOK_Text_0
	msgbox DAEMONHEIM_GYM_THOK_Text_4
	hidenamebox
	giveitem ITEM_TM48, 1
	compare VAR_RESULT, FALSE
	goto_if_eq Common_EventScript_ShowBagIsFull
	playbgm MUS_PS_ALKHARID, 0
	savebgm MUS_PS_ALKHARID
	namebox DAEMONHEIM_GYM_THOK_Text_5
	msgbox DAEMONHEIM_GYM_THOK_Text_6
	setflag FLAG_BADGE06_GET
	hidenamebox
	release
	end


DAEMONHEIM_GYM_THOK_Text_0:
	.string "Thok$"

DAEMONHEIM_GYM_THOK_Text_1:
	.string "Welcome to the Daemonheim Gym.\p"
	.string "I am Thok.$"

DAEMONHEIM_GYM_THOK_Text_2:
	.string "Have this Badge.$"

DAEMONHEIM_GYM_THOK_Text_3:
	.string "{PLAYER} received the Daemonheim\n"
	.string "BADGE from Thok.$"

DAEMONHEIM_GYM_THOK_Text_4:
	.string "Also have this Scroll.$"

DAEMONHEIM_GYM_THOK_Text_5:
	.string "Prince Ali$"

DAEMONHEIM_GYM_THOK_Text_6:
	.string "That move is called CUPHOLDER.\p"
	.string "CUPHOLDER.$"

DAEMONHEIM_GYM_THOK_Text_7:
	.string "You have defeated the Daemonheim Gym.$"
