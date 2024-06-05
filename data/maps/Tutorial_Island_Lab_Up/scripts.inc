Tutorial_Island_Lab_Up_MapScripts::
	.byte 0


ClockNotSetLeft::
	goto_if_unset FLAG_SET_WALL_CLOCK, ClockNotSetLeft_1
	release
	return

ClockNotSetLeft_1:
	lock
	msgbox ClockNotSetLeft_Text_0
	applymovement OBJ_EVENT_ID_PLAYER, ClockMoveLeft
	waitmovement 0
	release
	return


ClockNotSetDown::
	goto_if_unset FLAG_SET_WALL_CLOCK, ClockNotSetDown_1
	release
	return

ClockNotSetDown_1:
	lock
	msgbox ClockNotSetLeft_Text_0
	applymovement OBJ_EVENT_ID_PLAYER, ClockMoveDown
	waitmovement 0
	release
	return


PcStartGame::
	lock
	goto_if_unset FLAG_SET_WALL_CLOCK, PcStartGame_2
PcStartGame_1:
	goto_if_unset FLAG_SYS_POKEMON_GET, PcStartGame_4
	msgbox PcStartGame_Text_0
	release
	return

PcStartGame_2:
	goto SetTime
	goto PcStartGame_1

PcStartGame_4:
	goto MembershipChoice
	return


SetTime::
	msgbox SetTime_Text_0
	fadescreen FADE_TO_BLACK
	special StartWallClock
	waitstate
	setflag FLAG_SET_WALL_CLOCK
	goto PcStartGame
	return


MembershipChoice::
	msgbox MembershipChoice_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne MembershipChoice_1
	goto SkipChoice
	return

MembershipChoice_1:
	setflag FLAG_MEMBERSHIP
	goto SkipChoice
	return


SkipChoice::
	msgbox SkipChoice_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne SkipChoice_1
	release
	return

SkipChoice_1:
	setflag FLAG_SYS_POKEDEX_GET
	setflag FLAG_SYS_NATIONAL_DEX
	special EnableNationalPokedex
	setflag FLAG_RECEIVED_RUNNING_SHOES
	setflag FLAG_SYS_B_DASH
	giveitem ITEM_DRAGON_PICKAXE
	giveitem ITEM_SMALL_NET
	release
	goto_if_set FLAG_MEMBERSHIP, SkipChoice_4
	goto FreeStarterChoice
	return

SkipChoice_4:
	goto MemberStarterChoice
	return


MemberStarterChoice::
	multichoicedefault 1, 0, MULTI_STARTER_MEMBER, 0, 1
	switch VAR_RESULT
	case 0, MemberStarterChoice_2
	case 1, MemberStarterChoice_3
	case 2, MemberStarterChoice_4
	return

MemberStarterChoice_2:
	showmonpic SPECIES_ARMALING, 10, 3
	msgbox MemberStarterChoice_Text_0
	msgbox MemberStarterChoice_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq MemberStarterChoice_5
	setflag FLAG_SYS_POKEMON_GET
	setflag FLAG_STARTER1
	givemon SPECIES_ARMALING, 5, ITEM_NONE
	msgbox MemberStarterChoice_Text_2, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq MemberStarterChoice_15
	setvar VAR_0x8004, 0
	call Common_EventScript_NameReceivedPartyMon
MemberStarterChoice_14:
	goto TutorialIslandExitWarpMembers
	return

MemberStarterChoice_3:
	showmonpic SPECIES_UNGODLING, 10, 3
	msgbox MemberStarterChoice_Text_3
	msgbox MemberStarterChoice_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq MemberStarterChoice_8
	setflag FLAG_STARTER2
	setflag FLAG_SYS_POKEMON_GET
	givemon SPECIES_UNGODLING, 5, ITEM_NONE
	msgbox MemberStarterChoice_Text_2, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq MemberStarterChoice_19
	setvar VAR_0x8004, 0
	call Common_EventScript_NameReceivedPartyMon
MemberStarterChoice_18:
	goto TutorialIslandExitWarpMembers
	return

MemberStarterChoice_4:
	showmonpic SPECIES_TUMEKLING, 10, 3
	msgbox MemberStarterChoice_Text_4
	msgbox MemberStarterChoice_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq MemberStarterChoice_11
	setflag FLAG_STARTER3
	setflag FLAG_SYS_POKEMON_GET
	givemon SPECIES_TUMEKLING, 5, ITEM_NONE
	msgbox MemberStarterChoice_Text_2, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq MemberStarterChoice_23
	setvar VAR_0x8004, 0
	call Common_EventScript_NameReceivedPartyMon
MemberStarterChoice_22:
	goto TutorialIslandExitWarpMembers
	return

MemberStarterChoice_5:
	hidemonpic
	release
	goto MemberStarterChoice
	return

MemberStarterChoice_8:
	hidemonpic
	goto MemberStarterChoice
	return

MemberStarterChoice_11:
	hidemonpic
	goto MemberStarterChoice
	return

MemberStarterChoice_15:
	hidemonpic
	release
	goto MemberStarterChoice_14

MemberStarterChoice_19:
	hidemonpic
	release
	goto MemberStarterChoice_18

MemberStarterChoice_23:
	hidemonpic
	release
	goto MemberStarterChoice_22


FreeStarterChoice::
	multichoicedefault 1, 0, MULTI_STARTER_FREE, 0, 1
	switch VAR_RESULT
	case 0, FreeStarterChoice_2
	case 1, FreeStarterChoice_3
	case 2, FreeStarterChoice_4
	return

FreeStarterChoice_2:
	showmonpic SPECIES_GUTHLING, 10, 3
	msgbox FreeStarterChoice_Text_0
	msgbox MemberStarterChoice_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq FreeStarterChoice_5
	setflag FLAG_SYS_POKEMON_GET
	setflag FLAG_STARTER1
	givemon SPECIES_GUTHLING, 5, ITEM_NONE
	msgbox MemberStarterChoice_Text_2, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq FreeStarterChoice_15
	setvar VAR_0x8004, 0
	call Common_EventScript_NameReceivedPartyMon
FreeStarterChoice_14:
	goto TutorialIslandExitWarpFree
	return

FreeStarterChoice_3:
	showmonpic SPECIES_ZAMLING, 10, 3
	msgbox FreeStarterChoice_Text_1
	msgbox MemberStarterChoice_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq FreeStarterChoice_8
	setflag FLAG_STARTER2
	setflag FLAG_SYS_POKEMON_GET
	givemon SPECIES_ZAMLING, 5, ITEM_NONE
	msgbox MemberStarterChoice_Text_2, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq FreeStarterChoice_19
	setvar VAR_0x8004, 0
	call Common_EventScript_NameReceivedPartyMon
FreeStarterChoice_18:
	goto TutorialIslandExitWarpFree
	return

FreeStarterChoice_4:
	showmonpic SPECIES_SARALING, 10, 3
	msgbox FreeStarterChoice_Text_2
	msgbox MemberStarterChoice_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq FreeStarterChoice_11
	setflag FLAG_STARTER3
	setflag FLAG_SYS_POKEMON_GET
	givemon SPECIES_SARALING, 5, ITEM_NONE
	msgbox MemberStarterChoice_Text_2, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq FreeStarterChoice_23
	setvar VAR_0x8004, 0
	call Common_EventScript_NameReceivedPartyMon
FreeStarterChoice_22:
	goto TutorialIslandExitWarpFree
	return

FreeStarterChoice_5:
	hidemonpic
	release
	goto FreeStarterChoice
	return

FreeStarterChoice_8:
	hidemonpic
	goto FreeStarterChoice
	return

FreeStarterChoice_11:
	hidemonpic
	goto FreeStarterChoice
	return

FreeStarterChoice_15:
	hidemonpic
	release
	goto FreeStarterChoice_14

FreeStarterChoice_19:
	hidemonpic
	release
	goto FreeStarterChoice_18

FreeStarterChoice_23:
	hidemonpic
	release
	goto FreeStarterChoice_22


TutorialIslandExitWarpFree::
	warp MAP_LUMBRIDGE_HOUSE_STARTER2, 255, 5, 3
	return


TutorialIslandExitWarpMembers::
	warp MAP_VARROCK, 255, 28, 12
	return


ClockMoveLeft:
	walk_left
	step_end

ClockMoveDown:
	walk_down
	step_end

ClockNotSetLeft_Text_0:
	.string "I should check what time it is.$"

PcStartGame_Text_0:
	.string "BEEP BEEP BOOP$"

SetTime_Text_0:
	.string "You check the clock. What time is it?$"

MembershipChoice_Text_0:
	.string "Would you like to be a member?$"

SkipChoice_Text_0:
	.string "Would you like to skip the tutorial?$"

MemberStarterChoice_Text_0:
	.string "This is an armaling.$"

MemberStarterChoice_Text_1:
	.string "Would you like this monster as your\n"
	.string "starter?$"

MemberStarterChoice_Text_2:
	.string "Would you like to give your monster a\n"
	.string "nickname?$"

MemberStarterChoice_Text_3:
	.string "This is an ungodling.$"

MemberStarterChoice_Text_4:
	.string "This is a tumekling.$"

FreeStarterChoice_Text_0:
	.string "This is a guthling.$"

FreeStarterChoice_Text_1:
	.string "This is a zamling.$"

FreeStarterChoice_Text_2:
	.string "This is a saraling.$"
