
.set LOCALID_OPPONENT, 1
.set LOCALID_ATTENDANT_1, 2
.set LOCALID_ATTENDANT_2, 3

Pokescape_Battle_Tower_Battle_Room_MapScripts:: @ 8241B40
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Pokescape_Battle_Tower_Battle_Room_OnFrame
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Pokescape_Battle_Tower_Battle_Room_OnWarp
	.byte 0

Pokescape_Battle_Tower_Battle_Room_OnWarp: @ 8241B4B
	map_script_2 VAR_TEMP_1, 0, Pokescape_Battle_Tower_Battle_Room_EventScript_SetUpObjects
	.2byte 0

Pokescape_Battle_Tower_Battle_Room_EventScript_SetUpObjects:: @ 8241B55
	setvar VAR_TEMP_1, 1
	applymovement LOCALID_ATTENDANT_2, Pokescape_Battle_Tower_Battle_Room_Movement_SetInvisible
	end

Pokescape_Battle_Tower_Battle_Room_OnFrame: @ 8241B62
	map_script_2 VAR_TEMP_0, 0, Pokescape_Battle_Tower_Battle_Room_EventScript_EnterRoom
	.2byte 0

Pokescape_Battle_Tower_Battle_Room_EventScript_EnterRoom:: @ 8241B6C
	setvar VAR_TEMP_0, 1
	applymovement OBJ_EVENT_ID_PLAYER, Pokescape_Battle_Tower_Battle_Room_Movement_PlayerEnter
	waitmovement 0
	frontier_get FRONTIER_DATA_BATTLE_NUM
	compare VAR_RESULT, 0
	goto_if_eq Pokescape_Battle_Tower_Battle_Room_EventScript_OpponentEnter
	applymovement LOCALID_ATTENDANT_1, Pokescape_Battle_Tower_Battle_Room_Movement_AttendantApproachPlayer
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Pokescape_Battle_Tower_Battle_Room_Movement_PlayerGoToChest
	waitmovement 0
	setvar VAR_TEMP_2, 1
	frontier_set FRONTIER_DATA_RECORD_DISABLED, TRUE
	goto Pokescape_Battle_Tower_Battle_Room_EventScript_AskReadyForOpponent

Pokescape_Battle_Tower_Battle_Room_EventScript_OpponentEnter:: @ 8241BC3
	tower_setopponent
	addobject LOCALID_OPPONENT
	applymovement LOCALID_OPPONENT, Pokescape_Battle_Tower_Battle_Room_Movement_OpponentEnter
	waitmovement 0
	tower_getopponentintro 0
	msgbox gStringVar4, MSGBOX_DEFAULT
	waitmessage
	call Pokescape_Battle_Tower_Battle_Room_EventScript_DoTowerBattle
	switch VAR_RESULT
	case B_OUTCOME_WON, Pokescape_Battle_Tower_Battle_Room_EventScript_DefeatedOpponent
Pokescape_Battle_Tower_EventScript_WarpToLobbyLost:: @ 8241C03
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, CHALLENGE_STATUS_LOST
	tower_set TOWER_DATA_LVL_MODE
	setvar VAR_0x8004, FANCOUNTER_USED_BATTLE_TOWER
	special Script_TryGainNewFanFromCounter
	goto Pokescape_Battle_Tower_Battle_Room_EventScript_WarpToLobby

Pokescape_Battle_Tower_Battle_Room_EventScript_DefeatedOpponent:: @ 8241C2F
	call BattleFrontier_EventScript_IncrementWinStreak
	tower_setbattlewon
	switch VAR_RESULT
	case 7, Pokescape_Battle_Tower_Battle_Room_EventScript_WarpToLobbyWon
	applymovement LOCALID_OPPONENT, Pokescape_Battle_Tower_Battle_Room_Movement_OpponentExit
	waitmovement 0
	removeobject LOCALID_OPPONENT
	frontier_getbrainstatus
	compare VAR_RESULT, FRONTIER_BRAIN_NOT_READY
	call_if_ne Pokescape_Battle_Tower_Battle_Room_EventScript_SecondAttendantEnter
	applymovement OBJ_EVENT_ID_PLAYER, Pokescape_Battle_Tower_Battle_Room_Movement_PlayerGoToChest
	waitmovement 0
	msgbox Pokescape_Battle_Tower_Battle_Room_Text_RestoreMonsToFullHealth, MSGBOX_DEFAULT
	playfanfare MUS_HEAL
	waitfanfare
	special HealPlayerParty
Pokescape_Battle_Tower_Battle_Room_EventScript_AskReadyForOpponent:: @ 8241C8F
	frontier_getbrainstatus
	copyvar VAR_TEMP_F, VAR_RESULT
	compare VAR_RESULT, FRONTIER_BRAIN_NOT_READY
	goto_if_ne Pokescape_Battle_Tower_Battle_Room_EventScript_MaidenUpNext
	frontier_get FRONTIER_DATA_BATTLE_NUM
	call Pokescape_Battle_Tower_Battle_Room_EventScript_ReadyForOpponent
	call BattleFrontier_EventScript_GetCantRecordBattle
	compare VAR_RESULT, TRUE
	goto_if_eq Pokescape_Battle_Tower_Battle_Room_EventScript_AskReadyForOpponentNoRecord
	multichoice 19, 4, MULTI_GO_ON_RECORD_REST_RETIRE, 1
	switch VAR_RESULT
	case 0, Pokescape_Battle_Tower_Battle_Room_EventScript_ContinueChallenge
	case 1, Pokescape_Battle_Tower_Battle_Room_EventScript_AskRecordBattle
	case 2, Pokescape_Battle_Tower_Battle_Room_EventScript_AskPauseChallenge
	case 3, Pokescape_Battle_Tower_Battle_Room_EventScript_AskRetireChallenge
	case MULTI_B_PRESSED, Pokescape_Battle_Tower_Battle_Room_EventScript_AskReadyForOpponent

Pokescape_Battle_Tower_Battle_Room_EventScript_AskReadyForOpponentNoRecord:: @ 8241D0A
	multichoice 20, 6, MULTI_GO_ON_REST_RETIRE, 1
	switch VAR_RESULT
	case 0, Pokescape_Battle_Tower_Battle_Room_EventScript_ContinueChallenge
	case 1, Pokescape_Battle_Tower_Battle_Room_EventScript_AskPauseChallenge
	case 2, Pokescape_Battle_Tower_Battle_Room_EventScript_AskRetireChallenge
	case MULTI_B_PRESSED, Pokescape_Battle_Tower_Battle_Room_EventScript_AskReadyForOpponent

Pokescape_Battle_Tower_Battle_Room_EventScript_AskRecordBattle:: @ 8241D40
	message Pokescape_Battle_Tower_Battle_Room_Text_RecordYourBattle
	waitmessage
	multichoicedefault 20, 8, MULTI_YESNO, 1, 0
	switch VAR_RESULT
	case 1, Pokescape_Battle_Tower_Battle_Room_EventScript_AskReadyForOpponent
	case 0, Pokescape_Battle_Tower_Battle_Room_EventScript_RecordBattle
	case MULTI_B_PRESSED, Pokescape_Battle_Tower_Battle_Room_EventScript_AskReadyForOpponent

Pokescape_Battle_Tower_Battle_Room_EventScript_RecordBattle:: @ 8241D72
	call BattleFrontier_EventScript_SaveBattle
	goto Pokescape_Battle_Tower_Battle_Room_EventScript_AskReadyForOpponent

Pokescape_Battle_Tower_Battle_Room_EventScript_AskPauseChallenge:: @ 8241D7C
	msgbox Pokescape_Battle_Tower_Battle_Room_Text_SaveAndQuitGame, MSGBOX_YESNO
	switch VAR_RESULT
	case NO, Pokescape_Battle_Tower_Battle_Room_EventScript_AskReadyForOpponent
	case YES, Pokescape_Battle_Tower_Battle_Room_EventScript_PauseChallenge
	case MULTI_B_PRESSED, Pokescape_Battle_Tower_Battle_Room_EventScript_AskReadyForOpponent

Pokescape_Battle_Tower_Battle_Room_EventScript_AskRetireChallenge:: @ 8241DAA
	message Pokescape_Battle_Tower_Battle_Room_Text_CancelYourChallenge
	waitmessage
	multichoicedefault 20, 8, MULTI_YESNO, 1, 0
	switch VAR_RESULT
	case 1, Pokescape_Battle_Tower_Battle_Room_EventScript_AskReadyForOpponent
	case 0, Pokescape_Battle_Tower_Battle_Room_EventScript_RetireChallenge
	case MULTI_B_PRESSED, Pokescape_Battle_Tower_Battle_Room_EventScript_AskReadyForOpponent

Pokescape_Battle_Tower_Battle_Room_EventScript_ContinueChallenge:: @ 8241DDC
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Pokescape_Battle_Tower_Battle_Room_Movement_PlayerFaceBattle
	waitmovement 0
	applymovement LOCALID_ATTENDANT_1, Pokescape_Battle_Tower_Battle_Room_Movement_AttendantReturnToPos
	waitmovement 0
	goto Pokescape_Battle_Tower_Battle_Room_EventScript_OpponentEnter

Pokescape_Battle_Tower_Battle_Room_EventScript_WarpToLobbyWon:: @ 8241DF6
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, CHALLENGE_STATUS_WON
	tower_set TOWER_DATA_LVL_MODE
	setvar VAR_0x8004, FANCOUNTER_USED_BATTLE_TOWER
	special Script_TryGainNewFanFromCounter
	goto Pokescape_Battle_Tower_Battle_Room_EventScript_WarpToLobby

Pokescape_Battle_Tower_Battle_Room_EventScript_PauseChallenge:: @ 8241E22
	message Pokescape_Battle_Tower_Battle_Room_Text_SavingPleaseWait
	waitmessage
	tower_save CHALLENGE_STATUS_PAUSED
	playse SE_SAVE
	waitse
	fadescreen FADE_TO_BLACK
	frontier_reset
	end

Pokescape_Battle_Tower_Battle_Room_EventScript_ReadyForOpponent:: @ 8241E44
	copyvar VAR_TEMP_F, VAR_RESULT
	switch VAR_TEMP_F
	case 1, Pokescape_Battle_Tower_Battle_Room_EventScript_ReadyFor2ndOpponent
	case 2, Pokescape_Battle_Tower_Battle_Room_EventScript_ReadyFor3rdOpponent
	case 3, Pokescape_Battle_Tower_Battle_Room_EventScript_ReadyFor4thOpponent
	case 4, Pokescape_Battle_Tower_Battle_Room_EventScript_ReadyFor5thOpponent
	case 5, Pokescape_Battle_Tower_Battle_Room_EventScript_ReadyFor6thOpponent
	case 6, Pokescape_Battle_Tower_Battle_Room_EventScript_ReadyFor7thOpponent

Pokescape_Battle_Tower_Battle_Room_EventScript_ReadyFor2ndOpponent:: @ 8241E90
	message Pokescape_Battle_Tower_Battle_Room_Text_ReadyFor2ndOpponent
	waitmessage
	return

Pokescape_Battle_Tower_Battle_Room_EventScript_ReadyFor3rdOpponent:: @ 8241E97
	message Pokescape_Battle_Tower_Battle_Room_Text_ReadyFor3rdOpponent
	waitmessage
	return

Pokescape_Battle_Tower_Battle_Room_EventScript_ReadyFor4thOpponent:: @ 8241E9E
	message Pokescape_Battle_Tower_Battle_Room_Text_ReadyFor4thOpponent
	waitmessage
	return

Pokescape_Battle_Tower_Battle_Room_EventScript_ReadyFor5thOpponent:: @ 8241EA5
	message Pokescape_Battle_Tower_Battle_Room_Text_ReadyFor5thOpponent
	waitmessage
	return

Pokescape_Battle_Tower_Battle_Room_EventScript_ReadyFor6thOpponent:: @ 8241EAC
	message Pokescape_Battle_Tower_Battle_Room_Text_ReadyFor6thOpponent
	waitmessage
	return

Pokescape_Battle_Tower_Battle_Room_EventScript_ReadyFor7thOpponent:: @ 8241EB3
	message Pokescape_Battle_Tower_Battle_Room_Text_ReadyFor7thOpponent
	waitmessage
	return



Pokescape_Battle_Tower_Battle_Room_EventScript_SecondAttendantEnter:: @ 8241EC3
	applymovement LOCALID_ATTENDANT_2, Pokescape_Battle_Tower_Battle_Room_Movement_SecondAttendantEnter
	waitmovement 0
	applymovement LOCALID_ATTENDANT_2, Common_Movement_WalkInPlaceLeft
	waitmovement 0
	playse SE_PIN
	applymovement LOCALID_ATTENDANT_1, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_ATTENDANT_1, Common_Movement_Delay48
	waitmovement 0
	applymovement LOCALID_ATTENDANT_2, Pokescape_Battle_Tower_Battle_Room_Movement_SecondAttendantDelay
	applymovement LOCALID_ATTENDANT_1, Pokescape_Battle_Tower_Battle_Room_Movement_AttendantFaceSecondAttendant
	waitmovement 0
	applymovement LOCALID_ATTENDANT_2, Pokescape_Battle_Tower_Battle_Room_Movement_SecondAttendantExit
	waitmovement 0
	return

Pokescape_Battle_Tower_Battle_Room_EventScript_MaidenUpNext:: @ 8241F0A
	compare VAR_TEMP_2, 1
	goto_if_eq Pokescape_Battle_Tower_Battle_Room_EventScript_AskReadyForMaiden
	msgbox Pokescape_Battle_Tower_Battle_Room_Text_SalonMaidenOnHerWay, MSGBOX_DEFAULT
	setvar VAR_TEMP_2, 1
Pokescape_Battle_Tower_Battle_Room_EventScript_AskReadyForMaiden:: @ 8241F22
	message Pokescape_Battle_Tower_Battle_Room_Text_ReadyForSalonMaiden
	waitmessage
	call BattleFrontier_EventScript_GetCantRecordBattle
	compare VAR_RESULT, TRUE
	goto_if_eq Pokescape_Battle_Tower_Battle_Room_EventScript_AskReadyForMaidenNoRecord
	multichoice 19, 4, MULTI_GO_ON_RECORD_REST_RETIRE, 1
	switch VAR_RESULT
	case 0, Pokescape_Battle_Tower_Battle_Room_EventScript_BattleAnabel
	case 1, Pokescape_Battle_Tower_Battle_Room_EventScript_AskRecordBattle
	case 2, Pokescape_Battle_Tower_Battle_Room_EventScript_AskPauseChallenge
	case 3, Pokescape_Battle_Tower_Battle_Room_EventScript_AskRetireChallenge
	case MULTI_B_PRESSED, Pokescape_Battle_Tower_Battle_Room_EventScript_AskReadyForMaiden

Pokescape_Battle_Tower_Battle_Room_EventScript_AskReadyForMaidenNoRecord:: @ 8241F79
	multichoice 20, 6, MULTI_GO_ON_REST_RETIRE, 1
	switch VAR_RESULT
	case 0, Pokescape_Battle_Tower_Battle_Room_EventScript_BattleAnabel
	case 1, Pokescape_Battle_Tower_Battle_Room_EventScript_AskPauseChallenge
	case 2, Pokescape_Battle_Tower_Battle_Room_EventScript_AskRetireChallenge
	case MULTI_B_PRESSED, Pokescape_Battle_Tower_Battle_Room_EventScript_AskReadyForMaiden

Pokescape_Battle_Tower_Battle_Room_EventScript_BattleAnabel:: @ 8241FAF
	call BattleFrontier_EventScript_SetBrainObjectGfx
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Pokescape_Battle_Tower_Battle_Room_Movement_PlayerFaceBattle
	waitmovement 0
	applymovement LOCALID_ATTENDANT_1, Pokescape_Battle_Tower_Battle_Room_Movement_AttendantReturnToPos
	waitmovement 0
	addobject LOCALID_OPPONENT
	applymovement LOCALID_OPPONENT, Pokescape_Battle_Tower_Battle_Room_Movement_AnabelEnter
	waitmovement 0
	switch VAR_TEMP_F
	case FRONTIER_BRAIN_GOLD, Pokescape_Battle_Tower_Battle_Room_EventScript_AnabelGoldIntro
	case FRONTIER_BRAIN_STREAK, Pokescape_Battle_Tower_Battle_Room_EventScript_BattleAnabelSilver
	case FRONTIER_BRAIN_STREAK_LONG, Pokescape_Battle_Tower_Battle_Room_EventScript_BattleAnabelGold
	frontier_get FRONTIER_DATA_HEARD_BRAIN_SPEECH
	compare VAR_RESULT, FALSE
	goto_if_ne Pokescape_Battle_Tower_Battle_Room_EventScript_BattleAnabelSilver
	msgbox Pokescape_Battle_Tower_Battle_Room_Text_GreetingsImAnabel, MSGBOX_DEFAULT
	frontier_set FRONTIER_DATA_HEARD_BRAIN_SPEECH
Pokescape_Battle_Tower_Battle_Room_EventScript_BattleAnabelSilver:: @ 8242029
	msgbox Pokescape_Battle_Tower_Battle_Room_Text_LetMeSeeYourTalent, MSGBOX_DEFAULT
	call Pokescape_Battle_Tower_Battle_Room_EventScript_DoTowerBattle
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq Pokescape_Battle_Tower_Battle_Room_EventScript_DefeatedAnabelSilver
	goto BattleFrontier_BattleTower_EventScript_WarpToLobbyLost

Pokescape_Battle_Tower_Battle_Room_EventScript_DefeatedAnabelSilver:: @ 8242046
	call BattleFrontier_EventScript_IncrementWinStreak
	frontier_getsymbols
	compare VAR_RESULT, 0
	goto_if_ne Pokescape_Battle_Tower_Battle_Room_EventScript_WarpToLobbyWon
	msgbox Pokescape_Battle_Tower_Battle_Room_Text_AnabelTalentShallBeRecognized, MSGBOX_DEFAULT
	playfanfare MUS_OBTAIN_SYMBOL
	message Pokescape_Battle_Tower_Battle_Room_Text_ReceivedAbilitySymbol
	waitmessage
	waitfanfare
	frontier_givesymbol
	msgbox Pokescape_Battle_Tower_Battle_Room_Text_UntilNextTime, MSGBOX_DEFAULT
	goto Pokescape_Battle_Tower_Battle_Room_EventScript_WarpToLobbyWon

Pokescape_Battle_Tower_Battle_Room_EventScript_AnabelGoldIntro:: @ 8242085
	frontier_get FRONTIER_DATA_HEARD_BRAIN_SPEECH
	compare VAR_RESULT, FALSE
	goto_if_ne Pokescape_Battle_Tower_Battle_Room_EventScript_BattleAnabelGold
	msgbox Pokescape_Battle_Tower_Battle_Room_Text_AnabelYouCameBack, MSGBOX_DEFAULT
	frontier_set FRONTIER_DATA_HEARD_BRAIN_SPEECH
Pokescape_Battle_Tower_Battle_Room_EventScript_BattleAnabelGold:: @ 82420B2
	msgbox Pokescape_Battle_Tower_Battle_Room_Text_LetsBeginShallWe, MSGBOX_DEFAULT
	call Pokescape_Battle_Tower_Battle_Room_EventScript_DoTowerBattle
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq Pokescape_Battle_Tower_Battle_Room_EventScript_DefeatedAnabelGold
	goto BattleFrontier_BattleTower_EventScript_WarpToLobbyLost

Pokescape_Battle_Tower_Battle_Room_EventScript_DefeatedAnabelGold:: @ 82420CF
	call BattleFrontier_EventScript_IncrementWinStreak
	frontier_getsymbols
	compare VAR_RESULT, 2
	goto_if_eq Pokescape_Battle_Tower_Battle_Room_EventScript_WarpToLobbyWon
	msgbox Pokescape_Battle_Tower_Battle_Room_Text_AnabelCongratsYourPassPlease, MSGBOX_DEFAULT
	playfanfare MUS_OBTAIN_SYMBOL
	message Pokescape_Battle_Tower_Battle_Room_Text_AbilitySymbolTookGoldenShine
	waitmessage
	waitfanfare
	frontier_givesymbol
	msgbox Pokescape_Battle_Tower_Battle_Room_Text_WishICouldBattleYouAgain, MSGBOX_DEFAULT
	goto Pokescape_Battle_Tower_Battle_Room_EventScript_WarpToLobbyWon

Pokescape_Battle_Tower_Battle_Room_EventScript_DoTowerBattle:: @ 824210E
	closemessage
	setvar VAR_TEMP_2, 0
	frontier_set FRONTIER_DATA_RECORD_DISABLED, FALSE
	special HealPlayerParty
	setvar VAR_0x8004, SPECIAL_BATTLE_TOWER
	setvar VAR_0x8005, 0
	special DoSpecialTrainerBattle
	waitstate
	copyvar VAR_0x8004, VAR_FRONTIER_BATTLE_MODE
	compare VAR_0x8004, FRONTIER_MODE_LINK_MULTIS
	goto_if_eq Pokescape_Battle_Tower_Battle_Room_EventScript_EndTowerBattle
	frontier_restorehelditems
	special HealPlayerParty
	frontier_resetsketch
Pokescape_Battle_Tower_Battle_Room_EventScript_EndTowerBattle:: @ 824215A
	tower_setinterviewdata
	frontier_get FRONTIER_DATA_BATTLE_OUTCOME
	return



Pokescape_Battle_Tower_Battle_Room_Movement_PlayerEnter: @ 8242179
	walk_up
	walk_left
	walk_up
	walk_up
	face_right
	step_end

Pokescape_Battle_Tower_Battle_Room_Movement_PlayerGoToChest: @ 824217E
	walk_left
	walk_left
	face_up
	step_end

Pokescape_Battle_Tower_Battle_Room_Movement_PlayerFaceBattle: @ 8242180
	walk_right
	walk_right
	step_end

Pokescape_Battle_Tower_Battle_Room_Movement_OpponentEnter: @ 8242182
	walk_down
	walk_down
	walk_right
	walk_right
	walk_down
	walk_down
	face_left
	step_end

Pokescape_Battle_Tower_Battle_Room_Movement_OpponentExit: @ 8242188
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

Pokescape_Battle_Tower_Battle_Room_Movement_AttendantApproachPlayer: @ 824218D
	walk_right
	walk_right
	walk_right
	walk_up
	step_end

Pokescape_Battle_Tower_Battle_Room_Movement_AttendantReturnToPos: @ 8242192
	walk_down
	walk_left
	walk_left
	walk_left
	face_right
	step_end

Pokescape_Battle_Tower_Battle_Room_Movement_SetInvisible: @ 8242198
	set_invisible
	step_end

Pokescape_Battle_Tower_Battle_Room_Movement_SecondAttendantEnter: @ 824219A
	set_visible
	delay_16
	walk_up
	walk_left
	walk_left
	delay_8
	step_end

Pokescape_Battle_Tower_Battle_Room_Movement_SecondAttendantExit: @ 82421A1
	walk_right
	walk_right
	walk_down
	set_invisible
	step_end

Pokescape_Battle_Tower_Battle_Room_Movement_SecondAttendantDelay: @ 82421A6
	delay_16
	delay_16
	delay_16
	delay_16
	step_end

Pokescape_Battle_Tower_Battle_Room_Movement_AttendantFaceSecondAttendant: @ 82421AB
	face_right
	delay_16
	delay_16
	delay_16
	delay_16
	walk_in_place_right
	step_end

Pokescape_Battle_Tower_Battle_Room_Movement_AnabelEnter: @ 82421B2
	walk_slow_down
	walk_slow_down
	walk_slow_down
	walk_slow_down
	face_left
	step_end

Pokescape_Battle_Tower_Battle_Room_EventScript_WarpToLobby:: @ 82421B8
	warp MAP_LUMBRIDGE, 255, 34, 26
	waitstate
	end

Pokescape_Battle_Tower_Battle_Room_EventScript_RetireChallenge:: @ 824220E
	setflag FLAG_CANCEL_BATTLE_ROOM_CHALLENGE
	goto BattleFrontier_BattleTower_EventScript_WarpToLobbyLost
	end

Pokescape_Battle_Tower_Battle_Room_Text_RestoreMonsToFullHealth: @ 8242217
	.string "We will restore your POKéMON to\n"
	.string "full health.$"

@ Unused
Pokescape_Battle_Tower_Battle_Room_Text_ReadyForOpponent: @ 8242244
	.string "You will be facing opponent no. {STR_VAR_1}.\n"
	.string "Are you ready?$"

Pokescape_Battle_Tower_Battle_Room_Text_ReadyFor2ndOpponent: @ 8242277
	.string "You will be facing opponent no. 2.\n"
	.string "Are you ready?$"

Pokescape_Battle_Tower_Battle_Room_Text_ReadyFor3rdOpponent: @ 82422A9
	.string "You will be facing opponent no. 3.\n"
	.string "Are you ready?$"

Pokescape_Battle_Tower_Battle_Room_Text_ReadyFor4thOpponent: @ 82422DB
	.string "You will be facing opponent no. 4.\n"
	.string "Are you ready?$"

Pokescape_Battle_Tower_Battle_Room_Text_ReadyFor5thOpponent: @ 824230D
	.string "You will be facing opponent no. 5.\n"
	.string "Are you ready?$"

Pokescape_Battle_Tower_Battle_Room_Text_ReadyFor6thOpponent: @ 824233F
	.string "You will be facing opponent no. 6.\n"
	.string "Are you ready?$"

Pokescape_Battle_Tower_Battle_Room_Text_ReadyFor7thOpponent: @ 8242371
	.string "You will be facing opponent no. 7.\n"
	.string "Are you ready?$"

Pokescape_Battle_Tower_Battle_Room_Text_RecordYourBattle: @ 82423A3
	.string "Record your battle on your\n"
	.string "FRONTIER PASS?$"


Pokescape_Battle_Tower_Battle_Room_Text_SaveAndQuitGame: @ 82423FC
	.string "Would you like to save and\n"
	.string "quit the game?$"

Pokescape_Battle_Tower_Battle_Room_Text_SavingPleaseWait: @ 8242426
	.string "Saving your battle data.\n"
	.string "Please wait.$"

Pokescape_Battle_Tower_Battle_Room_Text_CancelYourChallenge: @ 824244C
	.string "Would you like to cancel your BATTLE\n"
	.string "ROOM challenge?$"

Pokescape_Battle_Tower_Battle_Room_Text_RecordCouldntBeSaved:: @ 8242481
	.string "There was an error of some sort.\n"
	.string "Your record could not be saved.$"

Pokescape_Battle_Tower_Battle_Room_Text_SalonMaidenOnHerWay: @ 82424C2
	.string "Excuse me, but…\p"
	.string "Our leader, the SALON MAIDEN, is on\n"
	.string "her way here in hopes of battling you.\p"
	.string "She should be arriving very shortly.$"

Pokescape_Battle_Tower_Battle_Room_Text_ReadyForSalonMaiden: @ 8242542
	.string "You will be facing the SALON MAIDEN.\n"
	.string "Are you prepared?$"

Pokescape_Battle_Tower_Battle_Room_Text_GreetingsImAnabel: @ 8242579
	.string "Greetings…\n"
	.string "My name is ANABEL.\p"
	.string "I am the SALON MAIDEN, and I am in\n"
	.string "charge of running the BATTLE TOWER…\p"
	.string "I have heard several rumors\n"
	.string "about you…\p"
	.string "In all honesty, what I have heard does\n"
	.string "not seem attractive in any way…\p"
	.string "The reason I've come to see you…\n"
	.string "Well, there is but one reason…$"

Pokescape_Battle_Tower_Battle_Room_Text_LetMeSeeYourTalent: @ 824268C
	.string "Let me see your talent in\n"
	.string "its entirety…$"

Pokescape_Battle_Tower_Battle_Room_Text_AnabelTalentShallBeRecognized: @ 82426B4
	.string "ANABEL: Fufufu, nicely done…\p"
	.string "Your FRONTIER PASS, please…\n"
	.string "Your talent shall be recognized.$"

Pokescape_Battle_Tower_Battle_Room_Text_ReceivedAbilitySymbol: @ 824270E
	.string "The Ability Symbol was embossed on\n"
	.string "the FRONTIER PASS!$"

Pokescape_Battle_Tower_Battle_Room_Text_UntilNextTime: @ 8242744
	.string "… … … … … …\p"
	.string "You have confidence in your POKéMON\n"
	.string "battling talent, don't you?\p"
	.string "I urge you to keep battling and\n"
	.string "keep on winning.\p"
	.string "I will be waiting for you.\n"
	.string "Until the next time we meet…$"

Pokescape_Battle_Tower_Battle_Room_Text_AnabelYouCameBack: @ 82427F9
	.string "ANABEL: You really did come back to\n"
	.string "see me…\p"
	.string "… … … … … …\p"
	.string "You've won straight matches to see me…\n"
	.string "I won't have to hold back against you…\p"
	.string "It's been too long now…\p"
	.string "Too long since I've been able to battle\n"
	.string "without thinking about anything…$"

Pokescape_Battle_Tower_Battle_Room_Text_LetsBeginShallWe: @ 82428E0
	.string "Let's begin, shall we?$"

Pokescape_Battle_Tower_Battle_Room_Text_AnabelCongratsYourPassPlease: @ 82428F7
	.string "ANABEL: Fufu, congratulations…\n"
	.string "Your FRONTIER PASS, please…$"

Pokescape_Battle_Tower_Battle_Room_Text_AbilitySymbolTookGoldenShine: @ 8242932
	.string "The Ability Symbol took on\n"
	.string "a golden shine!$"

Pokescape_Battle_Tower_Battle_Room_Text_WishICouldBattleYouAgain: @ 824295D
	.string "That was fun…\p"
	.string "I have never had a POKéMON battle\n"
	.string "so enjoyable before…\p"
	.string "I wish I could battle with you again…$"

