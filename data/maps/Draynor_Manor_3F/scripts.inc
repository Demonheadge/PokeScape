Draynor_Manor_3F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Draynor_Manor_3F_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Draynor_Manor_3F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setvar VAR_EVOLUTION_MAP_STATE, 1
	call DRAYNOR_MANOR_3F_STATE
	return


DRAYNOR_MANOR_3F_STATE::
	removeobject 6
	removeobject 7
	setflag FLAG_TEMP_18
	setflag FLAG_TEMP_19
	compare VAR_POKESCAPE_ERNEST_QUEST_STATE, 4
	goto_if_eq DRAYNOR_MANOR_3F_STATE_1
	compare VAR_POKESCAPE_ERNEST_QUEST_STATE, 6
	goto_if_eq DRAYNOR_MANOR_3F_STATE_2
	return

DRAYNOR_MANOR_3F_STATE_1:
	addobject 6
	clearflag FLAG_TEMP_18
	setflag FLAG_TEMP_1D
	setflag FLAG_TEMP_1E
	setflag FLAG_TEMP_1F
	setflag FLAG_TEMP_1B
	removeobject 2
	removeobject 3
	removeobject 4
	removeobject 5
	return

DRAYNOR_MANOR_3F_STATE_2:
	subquestmenu QUEST_MENU_CHECK_COMPLETE, QUEST_ERNEST_THE_CHICKEN, 3
	compare VAR_RESULT, FALSE
	goto_if_eq DRAYNOR_MANOR_3F_STATE_5
	return

DRAYNOR_MANOR_3F_STATE_5:
	removeobject 5
	setflag FLAG_TEMP_1B
	setobjectxyperm 6, 8, 17
	addobject 6
	clearflag FLAG_TEMP_18
	return


NPC_DraynorManor_Chicken_1::
	lock
	faceplayer
	namebox NPC_DraynorManor_Chicken_1_Text_0
	playmoncry SPECIES_ERNEST, 0
	msgbox NPC_DraynorManor_Chicken_1_Text_1
	waitmoncry
	hidenamebox
	closemessage
	namebox NPC_DraynorManor_Chicken_1_Text_2
	msgbox NPC_DraynorManor_Chicken_1_Text_3
	hidenamebox
	closemessage
	release
	end


NPC_DraynorManor_OddenstienLog::
	msgbox NPC_DraynorManor_OddenstienLog_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne NPC_DraynorManor_OddenstienLog_2
NPC_DraynorManor_OddenstienLog_1:
	closemessage
	release
	end

NPC_DraynorManor_OddenstienLog_2:
	msgbox NPC_DraynorManor_OddenstienLog_Text_1
	msgbox NPC_DraynorManor_OddenstienLog_Text_2
	msgbox NPC_DraynorManor_OddenstienLog_Text_3
	msgbox NPC_DraynorManor_OddenstienLog_Text_4
	msgbox NPC_DraynorManor_OddenstienLog_Text_5
	msgbox NPC_DraynorManor_OddenstienLog_Text_6
	msgbox NPC_DraynorManor_OddenstienLog_Text_7
	msgbox NPC_DraynorManor_OddenstienLog_Text_8
	goto NPC_DraynorManor_OddenstienLog_1


NPC_DraynorManor_Chicken_2::
	lock
	faceplayer
	namebox NPC_DraynorManor_Chicken_1_Text_0
	playmoncry SPECIES_ERNEST, 0
	msgbox NPC_DraynorManor_Chicken_1_Text_1
	waitmoncry
	hidenamebox
	closemessage
	compare VAR_POKESCAPE_ERNEST_QUEST_STATE, 2
	goto_if_eq NPC_DraynorManor_Chicken_2_2
NPC_DraynorManor_Chicken_2_1:
	release
	end

NPC_DraynorManor_Chicken_2_2:
	msgbox NPC_DraynorManor_Chicken_2_Text_0
	removeobject VAR_LAST_TALKED
	closemessage
	setvar VAR_POKESCAPE_ERNEST_QUEST_STATE, 3
	goto NPC_DraynorManor_Chicken_2_1


ITEM_DRAYNORMANOR_FISHFOOD::
	finditem ITEM_FISH_FOOD
	closemessage
	end


ITEM_DRAYNORMANOR_OILCAN::
	finditem ITEM_OIL_CAN
	closemessage
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_ERNEST_THE_CHICKEN, 0
	end


ITEM_DRAYNORMANOR_RUBBERTUBE::
	finditem ITEM_RUBBER_TUBE
	closemessage
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_ERNEST_THE_CHICKEN, 1
	end


SCRIPT_DraynorManor_Poison::
	msgbox SCRIPT_DraynorManor_Poison_Text_0
	checkitem ITEM_FISH_FOOD, 1
	compare VAR_RESULT, 0
	goto_if_ne SCRIPT_DraynorManor_Poison_2
	closemessage
	end

SCRIPT_DraynorManor_Poison_2:
	msgbox SCRIPT_DraynorManor_Poison_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne SCRIPT_DraynorManor_Poison_4
	closemessage
	end

SCRIPT_DraynorManor_Poison_4:
	msgbox SCRIPT_DraynorManor_Poison_Text_2
	removeitem ITEM_FISH_FOOD
	giveitem ITEM_FISH_FOOD_POISONED
	closemessage
	call STORYMODE_STATE_DRAYNORMANOR_1F
	end


SCRIPT_DraynorManor_Fountain::
	compare VAR_POKESCAPE_ERNEST_QUEST_STATE, 1
	goto_if_eq SCRIPT_DraynorManor_Fountain_2
	msgbox SCRIPT_DraynorManor_Fountain_Text_2
SCRIPT_DraynorManor_Fountain_1:
	closemessage
	checkitem ITEM_FISH_FOOD, 1
	compare VAR_RESULT, 0
	goto_if_ne SCRIPT_DraynorManor_Fountain_6
	checkitem ITEM_FISH_FOOD_POISONED, 1
	compare VAR_RESULT, 0
	goto_if_ne SCRIPT_DraynorManor_Fountain_12
	end

SCRIPT_DraynorManor_Fountain_2:
	checkitem ITEM_PRESSURE_GAUGE, 1
	compare VAR_RESULT, 0
	goto_if_ne SCRIPT_DraynorManor_Fountain_8
	msgbox SCRIPT_DraynorManor_Fountain_Text_1
	goto SCRIPT_DraynorManor_Fountain_1

SCRIPT_DraynorManor_Fountain_6:
	msgbox SCRIPT_DraynorManor_Fountain_Text_3, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne SCRIPT_DraynorManor_Fountain_15
SCRIPT_DraynorManor_Fountain_14:
	closemessage
	release
	end

SCRIPT_DraynorManor_Fountain_8:
	msgbox SCRIPT_DraynorManor_Fountain_Text_0
	hidenamebox
	closemessage
	release
	end

SCRIPT_DraynorManor_Fountain_12:
	msgbox SCRIPT_DraynorManor_Fountain_Text_6, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne SCRIPT_DraynorManor_Fountain_17
	closemessage
	end

SCRIPT_DraynorManor_Fountain_15:
	msgbox SCRIPT_DraynorManor_Fountain_Text_4
	msgbox SCRIPT_DraynorManor_Fountain_Text_5
	goto SCRIPT_DraynorManor_Fountain_14

SCRIPT_DraynorManor_Fountain_17:
	msgbox SCRIPT_DraynorManor_Fountain_Text_4
	removeitem ITEM_FISH_FOOD_POISONED
	finditem ITEM_PRESSURE_GAUGE
	closemessage
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_ERNEST_THE_CHICKEN, 2
	end


SCRIPT_DraynorManor_Gravestone::
	msgbox SCRIPT_DraynorManor_Gravestone_Text_0
	closemessage
	goto_if_unset FLAG_RECIEVED_EX_EX_PARROT, SCRIPT_DraynorManor_Gravestone_2
	msgbox SCRIPT_DraynorManor_Gravestone_Text_6
	closemessage
	end

SCRIPT_DraynorManor_Gravestone_2:
	msgbox SCRIPT_DraynorManor_Gravestone_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq SCRIPT_DraynorManor_Gravestone_5
	msgbox SCRIPT_DraynorManor_Gravestone_Text_5
	closemessage
	end

SCRIPT_DraynorManor_Gravestone_5:
	checkitem ITEM_MAGICAL_CAGE, 1
	compare VAR_RESULT, 0
	goto_if_ne SCRIPT_DraynorManor_Gravestone_8
	msgbox SCRIPT_DraynorManor_Gravestone_Text_4
	closemessage
	end

SCRIPT_DraynorManor_Gravestone_8:
	msgbox SCRIPT_DraynorManor_Gravestone_Text_2
	removeitem ITEM_MAGICAL_CAGE
	msgbox SCRIPT_DraynorManor_Gravestone_Text_3
	call EventScript_DraynorManor_ExExParrot
	closemessage
	end


SCRIPT_DraynorManor_FindCage::
	msgbox SCRIPT_DraynorManor_FindCage_Text_0
	goto_if_unset FLAG_RECIEVED_EX_EX_PARROT, SCRIPT_DraynorManor_FindCage_2
SCRIPT_DraynorManor_FindCage_1:
	msgbox SCRIPT_DraynorManor_FindCage_Text_1
	closemessage
	end

SCRIPT_DraynorManor_FindCage_2:
	checkitem ITEM_MAGICAL_CAGE, 1
	compare VAR_RESULT, 0
	goto_if_eq SCRIPT_DraynorManor_FindCage_4
	goto SCRIPT_DraynorManor_FindCage_1

SCRIPT_DraynorManor_FindCage_4:
	closemessage
	giveitem ITEM_MAGICAL_CAGE, 1
	closemessage
	end


EventScript_DraynorManor_ExExParrot::
	setvar VAR_TEMP_1, SPECIES_EXEXPARROT
	givemon SPECIES_EXEXPARROT, 5, ITEM_NONE
	compare VAR_RESULT, 0
	goto_if_eq EventScript_DraynorManor_SendParty_ExExParrot
	compare VAR_RESULT, 1
	goto_if_eq EventScript_DraynorManor_SendPC_ExExParrot
	goto Common_EventScript_NoMoreRoomForPokemon
	end


EventScript_DraynorManor_SendParty_ExExParrot::
	call EventScript_DraynorManor_ReceivedFanfare_ExExParrot
	msgbox EventScript_DraynorManor_SendParty_ExExParrot_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq EventScript_DraynorManor_Received_ExExParrot
	call Common_EventScript_GetGiftMonPartySlot
	call Common_EventScript_NameReceivedPartyMon
	goto EventScript_DraynorManor_Received_ExExParrot
	end


EventScript_DraynorManor_SendPC_ExExParrot::
	call EventScript_DraynorManor_ReceivedFanfare_ExExParrot
	msgbox EventScript_DraynorManor_SendParty_ExExParrot_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq EventScript_DraynorManor_TransferredToPC_ExExParrot
	call Common_EventScript_NameReceivedBoxMon
	goto EventScript_DraynorManor_TransferredToPC_ExExParrot
	end


EventScript_DraynorManor_TransferredToPC_ExExParrot::
	call Common_EventScript_TransferredToPC
	goto EventScript_DraynorManor_Received_ExExParrot
	end


EventScript_DraynorManor_ReceivedFanfare_ExExParrot::
	bufferspeciesname 1, SPECIES_EXEXPARROT
	playfanfare MUS_OBTAIN_ITEM
	msgbox EventScript_DraynorManor_ReceivedFanfare_ExExParrot_Text_0
	waitmessage
	waitfanfare
	bufferspeciesname 0, SPECIES_EXEXPARROT
	return


EventScript_DraynorManor_Received_ExExParrot::
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_ERNEST_THE_CHICKEN, 4
	setflag FLAG_RECIEVED_EX_EX_PARROT
	releaseall
	return


NPC_DraynorManor_Oddenstein::
	lock
	faceplayer
	switch VAR_POKESCAPE_ERNEST_QUEST_STATE
	case 0, NPC_DraynorManor_Oddenstein_2
	case 1, NPC_DraynorManor_Oddenstein_3
	case 2, NPC_DraynorManor_Oddenstein_4
	case 3, NPC_DraynorManor_Oddenstein_5
	case 4, NPC_DraynorManor_Oddenstein_6
	case 5, NPC_DraynorManor_Oddenstein_7
	case 6, NPC_DraynorManor_Oddenstein_8
	return

NPC_DraynorManor_Oddenstein_2:
	namebox NPC_DraynorManor_Chicken_1_Text_2
	msgbox NPC_DraynorManor_Oddenstein_Text_0
	msgbox NPC_DraynorManor_Oddenstein_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne NPC_DraynorManor_Oddenstein_9
	msgbox NPC_DraynorManor_Oddenstein_Text_7
	hidenamebox
	closemessage
	release
	end

NPC_DraynorManor_Oddenstein_3:
	namebox NPC_DraynorManor_Chicken_1_Text_2
	msgbox NPC_DraynorManor_Oddenstein_Text_8, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne NPC_DraynorManor_Oddenstein_12
	msgbox NPC_DraynorManor_Oddenstein_Text_7
	hidenamebox
	release
	end

NPC_DraynorManor_Oddenstein_4:
	namebox NPC_DraynorManor_Chicken_1_Text_2
	msgbox NPC_DraynorManor_Oddenstein_Text_13
	hidenamebox
	closemessage
	release
	end

NPC_DraynorManor_Oddenstein_5:
	namebox NPC_DraynorManor_Chicken_1_Text_2
	msgbox NPC_DraynorManor_Oddenstein_Text_14
	closemessage
	hidenamebox
	fadenewbgm MUS_PS_KOUREND_CATACOMBS
	fadescreenswapbuffers FADE_TO_BLACK
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
	compare VAR_TEMP_2, 3
	goto_if_eq NPC_DraynorManor_Oddenstein_16
	compare VAR_TEMP_2, 4
	goto_if_eq NPC_DraynorManor_Oddenstein_17
NPC_DraynorManor_Oddenstein_15:
	applymovement 1, movement_ENEREST_CHICKEN_QUEST_3
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, movement_ENEREST_CHICKEN_QUEST_6
	waitmovement OBJ_EVENT_ID_PLAYER
	setflag FLAG_TEMP_1D
	setflag FLAG_TEMP_1E
	setflag FLAG_TEMP_1F
	removeobject 2
	removeobject 3
	removeobject 4
	removeobject 5
	checkfollower
	compare VAR_RESULT, 0
	goto_if_ne NPC_DraynorManor_Oddenstein_26
NPC_DraynorManor_Oddenstein_25:
	fadescreenswapbuffers FADE_FROM_BLACK
	special SpawnCameraObject
	applymovement OBJ_EVENT_ID_CAMERA, movement_ENEREST_CHICKEN_QUEST_5
	waitmovement 0
	namebox NPC_DraynorManor_Chicken_1_Text_2
	msgbox NPC_DraynorManor_Oddenstein_Text_15
	closemessage
	hidenamebox
	applymovement 1, movement_ENEREST_CHICKEN_QUEST_7
	waitmovement 0
	addobject 7
	clearflag FLAG_TEMP_19
	delay 64
	applymovement 1, movement_ENEREST_CHICKEN_QUEST_4
	waitmovement 0
	namebox NPC_DraynorManor_Chicken_1_Text_2
	msgbox NPC_DraynorManor_Oddenstein_Text_16
	closemessage
	hidenamebox
	applymovement 1, movement_ENEREST_CHICKEN_QUEST_8
	playse SE_BANG
	waitmovement 0
	delay 10
	applymovement 1, movement_ENEREST_CHICKEN_QUEST_8
	playse SE_SELECT
	waitmovement 0
	delay 10
	applymovement 1, movement_ENEREST_CHICKEN_QUEST_8
	playse SE_TRUCK_DOOR
	waitmovement 0
	delay 30
	applymovement 1, Movement_InteractFACEDOWN
	waitmovement 0
	delay 64
	fadeoutbgm 1
	namebox NPC_DraynorManor_Chicken_1_Text_2
	msgbox NPC_DraynorManor_Oddenstein_Text_17
	closemessage
	hidenamebox
	setvar VAR_0x8004, 1 @ vertical pan
	setvar VAR_0x8005, 1 @ horizontal pan
	setvar VAR_0x8006, 8 @ num shakes
	setvar VAR_0x8007, 3 @ shake delay
	special ShakeCamera
	waitstate
	setvar VAR_0x8004, 1 @ vertical pan
	setvar VAR_0x8005, 1 @ horizontal pan
	setvar VAR_0x8006, 8 @ num shakes
	setvar VAR_0x8007, 3 @ shake delay
	special ShakeCamera
	waitstate
	applymovement 7, movement_chickentransform
	delay 10
	namebox NPC_DraynorManor_Chicken_1_Text_2
	msgbox NPC_DraynorManor_Oddenstein_Text_18
	closemessage
	hidenamebox
	waitmovement 0
	playse SE_ORB
	special DoOrbEffect
	delay 60
	fadescreenswapbuffers FADE_TO_WHITE
	special FadeOutOrbEffect
	delay 120
	setvar VAR_0x8004, 1 @ vertical pan
	setvar VAR_0x8005, 1 @ horizontal pan
	setvar VAR_0x8006, 8 @ num shakes
	setvar VAR_0x8007, 3 @ shake delay
	special ShakeCamera
	waitstate
	setvar VAR_0x8004, 1 @ vertical pan
	setvar VAR_0x8005, 1 @ horizontal pan
	setvar VAR_0x8006, 8 @ num shakes
	setvar VAR_0x8007, 3 @ shake delay
	special ShakeCamera
	waitstate
	delay 120
	setflag FLAG_TEMP_19
	clearflag FLAG_TEMP_18
	addobject 6
	removeobject 7
	delay 32
	fadescreenswapbuffers FADE_FROM_WHITE
	delay 30
	applymovement 1, Movement_InteractFACELEFT
	waitmovement 0
	namebox NPC_DraynorManor_Chicken_1_Text_2
	msgbox NPC_DraynorManor_Oddenstein_Text_19
	closemessage
	hidenamebox
	applymovement OBJ_EVENT_ID_CAMERA, movement_ENEREST_CHICKEN_QUEST_9
	waitmovement 0
	special RemoveCameraObject
	fadeinbgm 1
	setvar VAR_POKESCAPE_ERNEST_QUEST_STATE, 4
	end

NPC_DraynorManor_Oddenstein_6:
	namebox NPC_DraynorManor_Chicken_1_Text_2
	msgbox NPC_DraynorManor_Oddenstein_Text_20
	closemessage
	hidenamebox
	release
	end

NPC_DraynorManor_Oddenstein_7:
	namebox NPC_DraynorManor_Chicken_1_Text_2
	msgbox NPC_DraynorManor_Oddenstein_Text_21
	questmenu QUEST_MENU_COMPLETE_QUEST, QUEST_ERNEST_THE_CHICKEN
	hidenamebox
	giveitem ITEM_MINT_CAKE, 2
	setvar VAR_POKESCAPE_ERNEST_QUEST_STATE, 6
	closemessage
	hidenamebox
	namebox NPC_DraynorManor_Chicken_1_Text_2
	msgbox NPC_DraynorManor_Oddenstein_Text_22
	closemessage
	hidenamebox
	release
	end

NPC_DraynorManor_Oddenstein_8:
	namebox NPC_DraynorManor_Chicken_1_Text_2
	msgbox NPC_DraynorManor_Oddenstein_Text_23
	subquestmenu QUEST_MENU_CHECK_COMPLETE, QUEST_ERNEST_THE_CHICKEN, 4
	compare VAR_RESULT, FALSE
	goto_if_eq NPC_DraynorManor_Oddenstein_21
	compare VAR_RESULT, TRUE
	goto_if_eq NPC_DraynorManor_Oddenstein_22
NPC_DraynorManor_Oddenstein_20:
	hidenamebox
	closemessage
	release
	end

NPC_DraynorManor_Oddenstein_9:
	hidenamebox
	startquest QUEST_ERNEST_THE_CHICKEN
	namebox NPC_DraynorManor_Chicken_1_Text_2
	msgbox NPC_DraynorManor_Oddenstein_Text_2
	msgbox NPC_DraynorManor_Oddenstein_Text_3
	msgbox NPC_DraynorManor_Oddenstein_Text_4
	msgbox NPC_DraynorManor_Oddenstein_Text_5
	msgbox NPC_DraynorManor_Oddenstein_Text_6
	setvar VAR_POKESCAPE_ERNEST_QUEST_STATE, 1
	hidenamebox
	closemessage
	release
	end

NPC_DraynorManor_Oddenstein_12:
	msgbox NPC_DraynorManor_Oddenstein_Text_9
	call CooksAssistant_Check_OilCan
	call CooksAssistant_Check_PressureGauge
	call CooksAssistant_Check_RubberTube
	namebox NPC_DraynorManor_Chicken_1_Text_2
	msgbox NPC_DraynorManor_Oddenstein_Text_10
	closemessage
	hidenamebox
	removeitem ITEM_OIL_CAN
	removeitem ITEM_PRESSURE_GAUGE
	removeitem ITEM_RUBBER_TUBE
	applymovement 1, MOVEMENT_DraynorManor_Oddenstein_1
	waitmovement 0
	namebox NPC_DraynorManor_Chicken_1_Text_2
	msgbox NPC_DraynorManor_Oddenstein_Text_11
	closemessage
	hidenamebox
	applymovement 1, MOVEMENT_DraynorManor_Oddenstein_2
	waitmovement 0
	namebox NPC_DraynorManor_Chicken_1_Text_2
	msgbox NPC_DraynorManor_Oddenstein_Text_12
	closemessage
	hidenamebox
	hidenamebox
	closemessage
	setvar VAR_POKESCAPE_ERNEST_QUEST_STATE, 2
	release
	end

NPC_DraynorManor_Oddenstein_16:
	applymovement OBJ_EVENT_ID_PLAYER, movement_ENEREST_CHICKEN_QUEST_1
	goto NPC_DraynorManor_Oddenstein_15

NPC_DraynorManor_Oddenstein_17:
	applymovement OBJ_EVENT_ID_PLAYER, movement_ENEREST_CHICKEN_QUEST_2
	goto NPC_DraynorManor_Oddenstein_15

NPC_DraynorManor_Oddenstein_21:
	checkitem ITEM_MAGICAL_CAGE, 1
	compare VAR_RESULT, 0
	goto_if_ne NPC_DraynorManor_Oddenstein_28
	msgbox NPC_DraynorManor_Oddenstein_Text_25
	goto NPC_DraynorManor_Oddenstein_20

NPC_DraynorManor_Oddenstein_22:
	subquestmenu QUEST_MENU_CHECK_COMPLETE, QUEST_ERNEST_THE_CHICKEN, 3
	compare VAR_RESULT, FALSE
	goto_if_eq NPC_DraynorManor_Oddenstein_32
	subquestmenu QUEST_MENU_CHECK_COMPLETE, QUEST_ERNEST_THE_CHICKEN, 4
	compare VAR_RESULT, TRUE
	goto_if_eq NPC_DraynorManor_Oddenstein_34
	goto NPC_DraynorManor_Oddenstein_20

NPC_DraynorManor_Oddenstein_26:
	setobjectxy OBJ_EVENT_ID_FOLLOWER, 7, 3
	applymovement OBJ_EVENT_ID_FOLLOWER, Movement_InteractFACEDOWN
	waitmovement 0
	goto NPC_DraynorManor_Oddenstein_25

NPC_DraynorManor_Oddenstein_28:
	msgbox NPC_DraynorManor_Oddenstein_Text_24
	goto NPC_DraynorManor_Oddenstein_20

NPC_DraynorManor_Oddenstein_32:
	msgbox NPC_DraynorManor_Oddenstein_Text_26
	hidenamebox
	closemessage
	release
	end

NPC_DraynorManor_Oddenstein_34:
	msgbox NPC_DraynorManor_Oddenstein_Text_27
	goto NPC_DraynorManor_Oddenstein_20


EvilChickenBattleScript::
	lock
	playmoncry SPECIES_EVILCHICKEN, 0
	namebox EvilChickenBattleScript_Text_0
	msgbox EvilChickenBattleScript_Text_1
	waitmoncry
	closemessage
	setwildbattle SPECIES_EVILCHICKEN, 18, ITEM_NONE
	dowildbattle
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq EvilChickenBattleScript_2
EvilChickenBattleScript_1:
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq EvilChickenBattleScript_5
EvilChickenBattleScript_4:
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq EvilChickenBattleScript_13
EvilChickenBattleScript_12:
	end

EvilChickenBattleScript_2:
	fadescreenswapbuffers FADE_TO_BLACK
	removeobject VAR_LAST_TALKED
	compare VAR_POKESCAPE_ERNEST_QUEST_STATE, 4
	goto_if_eq EvilChickenBattleScript_8
	compare VAR_POKESCAPE_ERNEST_QUEST_STATE, 6
	goto_if_eq EvilChickenBattleScript_9
EvilChickenBattleScript_7:
	fadescreenswapbuffers FADE_FROM_BLACK
	goto EvilChickenBattleScript_1

EvilChickenBattleScript_5:
	fadescreenswapbuffers FADE_TO_BLACK
	removeobject VAR_LAST_TALKED
	compare VAR_POKESCAPE_ERNEST_QUEST_STATE, 4
	goto_if_eq EvilChickenBattleScript_16
EvilChickenBattleScript_15:
	fadescreenswapbuffers FADE_FROM_BLACK
	goto EvilChickenBattleScript_4

EvilChickenBattleScript_8:
	setvar VAR_POKESCAPE_ERNEST_QUEST_STATE, 5
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_ERNEST_THE_CHICKEN, 3
	goto EvilChickenBattleScript_7

EvilChickenBattleScript_9:
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_ERNEST_THE_CHICKEN, 3
	goto EvilChickenBattleScript_7

EvilChickenBattleScript_13:
	namebox NPC_DraynorManor_Chicken_1_Text_2
	msgbox EvilChickenBattleScript_Text_2
	closemessage
	hidenamebox
	release
	goto EvilChickenBattleScript_12

EvilChickenBattleScript_16:
	setvar VAR_POKESCAPE_ERNEST_QUEST_STATE, 5
	goto EvilChickenBattleScript_15


movement_chickentransform:
	levitate
	face_left
	delay_16
	delay_16
	delay_16
	delay_16
	face_right
	delay_16
	delay_16
	delay_16
	delay_16
	face_down
	delay_16
	delay_16
	delay_16
	delay_16
	stop_levitate
	step_end

MOVEMENT_DraynorManor_Oddenstein_1:
	walk_in_place_down
	walk_in_place_down
	walk_in_place_down
	step_end

MOVEMENT_DraynorManor_Oddenstein_2:
	walk_in_place_down
	walk_in_place_down
	walk_in_place_down
	face_player
	step_end

movement_ENEREST_CHICKEN_QUEST_1:
	face_down
	delay_16
	delay_16
	step_end

movement_ENEREST_CHICKEN_QUEST_2:
	face_down
	lock_facing_direction
	walk_up
	unlock_facing_direction
	step_end

movement_ENEREST_CHICKEN_QUEST_3:
	walk_left
	walk_left
	face_down
	face_down
	step_end

movement_ENEREST_CHICKEN_QUEST_4:
	walk_right
	walk_right
	step_end

movement_ENEREST_CHICKEN_QUEST_5:
	walk_slow_down
	walk_slow_down
	walk_slow_down
	step_end

movement_ENEREST_CHICKEN_QUEST_6:
	delay_16
	delay_16
	walk_left
	walk_left
	walk_down
	step_end

movement_ENEREST_CHICKEN_QUEST_7:
	walk_down
	walk_down
	step_end

movement_ENEREST_CHICKEN_QUEST_8:
	walk_in_place_right
	step_end

movement_ENEREST_CHICKEN_QUEST_9:
	walk_slow_up
	walk_slow_up
	walk_slow_up
	step_end

CooksAssistant_Check_OilCan::
	checkitem ITEM_OIL_CAN, 1
	compare VAR_RESULT, 0
	goto_if_eq CooksAssistant_Check_OilCan_1
	namebox NPC_DraynorManor_Chicken_1_Text_2
	msgbox CooksAssistant_Check_OilCan_Text_1
	closemessage
	return

CooksAssistant_Check_OilCan_1:
	namebox NPC_DraynorManor_Chicken_1_Text_2
	msgbox CooksAssistant_Check_OilCan_Text_0
	hidenamebox
	closemessage
	release
	end


CooksAssistant_Check_PressureGauge::
	checkitem ITEM_PRESSURE_GAUGE, 1
	compare VAR_RESULT, 0
	goto_if_eq CooksAssistant_Check_PressureGauge_1
	namebox NPC_DraynorManor_Chicken_1_Text_2
	msgbox CooksAssistant_Check_PressureGauge_Text_1
	closemessage
	return

CooksAssistant_Check_PressureGauge_1:
	namebox NPC_DraynorManor_Chicken_1_Text_2
	msgbox CooksAssistant_Check_PressureGauge_Text_0
	hidenamebox
	closemessage
	release
	end


CooksAssistant_Check_RubberTube::
	checkitem ITEM_RUBBER_TUBE, 1
	compare VAR_RESULT, 0
	goto_if_eq CooksAssistant_Check_RubberTube_1
	namebox NPC_DraynorManor_Chicken_1_Text_2
	msgbox CooksAssistant_Check_RubberTube_Text_1
	closemessage
	return

CooksAssistant_Check_RubberTube_1:
	namebox NPC_DraynorManor_Chicken_1_Text_2
	msgbox CooksAssistant_Check_RubberTube_Text_0
	hidenamebox
	closemessage
	release
	end


NPC_DraynorManor_Fisherman::
	lock
	faceplayer
	namebox NPC_DraynorManor_Fisherman_Text_0
	checkitem ITEM_PRESSURE_GAUGE, 1
	compare VAR_RESULT, 0
	goto_if_ne NPC_DraynorManor_Fisherman_2
	checkitem ITEM_FISH_FOOD_POISONED, 1
	compare VAR_RESULT, 0
	goto_if_ne NPC_DraynorManor_Fisherman_5
	checkitem ITEM_FISH_FOOD, 1
	compare VAR_RESULT, 0
	goto_if_ne NPC_DraynorManor_Fisherman_7
	switch VAR_POKESCAPE_ERNEST_QUEST_STATE
	case 0, NPC_DraynorManor_Fisherman_11
	case 1, NPC_DraynorManor_Fisherman_12
	case 2, NPC_DraynorManor_Fisherman_13
	case 3, NPC_DraynorManor_Fisherman_13
	case 4, NPC_DraynorManor_Fisherman_13
	return

NPC_DraynorManor_Fisherman_2:
	msgbox NPC_DraynorManor_Fisherman_Text_1
	hidenamebox
	closemessage
	release
	end

NPC_DraynorManor_Fisherman_5:
	msgbox NPC_DraynorManor_Fisherman_Text_2
	hidenamebox
	closemessage
	release
	end

NPC_DraynorManor_Fisherman_7:
	msgbox NPC_DraynorManor_Fisherman_Text_3
	hidenamebox
	closemessage
	release
	end

NPC_DraynorManor_Fisherman_11:
	msgbox NPC_DraynorManor_Fisherman_Text_4
	hidenamebox
	closemessage
	release
	end

NPC_DraynorManor_Fisherman_12:
	msgbox NPC_DraynorManor_Fisherman_Text_5
	hidenamebox
	closemessage
	release
	end

NPC_DraynorManor_Fisherman_13:
	msgbox NPC_DraynorManor_Fisherman_Text_6
	hidenamebox
	closemessage
	release
	end


NPC_DraynorManor_Chicken_1_Text_0:
	.string "Chicken$"

NPC_DraynorManor_Chicken_1_Text_1:
	.string "BWawkrk!$"

NPC_DraynorManor_Chicken_1_Text_2:
	.string "Oddenstein$"

NPC_DraynorManor_Chicken_1_Text_3:
	.string "I call that an Ernest Chicken!\p"
	.string "I named it this breed after its father.\p"
	.string "Basically I turned this guy called\n"
	.string "Ernest into a chicken, he laid some eggs\l"
	.string "and these chickens are what hatched\l"
	.string "from them.$"

NPC_DraynorManor_OddenstienLog_Text_0:
	.string "It is Professor Oddenstien's Log book.\p"
	.string "Want to read it?$"

NPC_DraynorManor_OddenstienLog_Text_1:
	.string "Log 1: I met a man named Ernest.\p"
	.string "This was perfect, before he could say a\n"
	.string "word I told him to be my assistant for\l"
	.string "my newest experiment.\p"
	.string "And it was a success I could now\n"
	.string "transform humans into chickens!\p"
	.string "With this I will never have a shortage\n"
	.string "of eggs for breakfast.$"

NPC_DraynorManor_OddenstienLog_Text_2:
	.string "Log 2: Ernest seemed like he wanted to\n"
	.string "go outside so I opened a window.\p"
	.string "I wonder where he will go.$"

NPC_DraynorManor_OddenstienLog_Text_3:
	.string "Log 3: An adventurer brought Ernest\n"
	.string "back to me and told me his fiancee\l"
	.string "wanted him turned back into a human.\p"
	.string "Does this mean I will no longer have\n"
	.string "eggs for breakfast?$"

NPC_DraynorManor_OddenstienLog_Text_4:
	.string "Log 4: With Ernest gone only his eggs\n"
	.string "remain.\p"
	.string "I probably have enough supply for a\n"
	.string "week but I think I will need to find\l"
	.string "another assistant soon otherwise I will\l"
	.string "run out of eggs.$"

NPC_DraynorManor_OddenstienLog_Text_5:
	.string "Log 5: Nooo!\p"
	.string "This is so unfortunate, the eggs have\n"
	.string "hatched!\p"
	.string "Now I must eat them before they hatch\n"
	.string "so I can have my breakfast.$"

NPC_DraynorManor_OddenstienLog_Text_6:
	.string "Log 6: These are some weird-looking\n"
	.string "hybrid chickens.\p"
	.string "I think I will name them Ernest Chickens\n"
	.string "after thier father.$"

NPC_DraynorManor_OddenstienLog_Text_7:
	.string "Log 7: I wonder what will happen if I\n"
	.string "turn these Ernest Chickens into\l"
	.string "humans…$"

NPC_DraynorManor_OddenstienLog_Text_8:
	.string "End of log.$"

NPC_DraynorManor_Chicken_2_Text_0:
	.string "You pick up the weird-looking chicken.$"

SCRIPT_DraynorManor_Poison_Text_0:
	.string "You search the shelves…{PAUSE 15} …{PAUSE 15}\p"
	.string "You find a bunch of products labeled\n"
	.string "with a skull and bones.$"

SCRIPT_DraynorManor_Poison_Text_1:
	.string "Would you like to mix it them with the\n"
	.string "Fish Food?$"

SCRIPT_DraynorManor_Poison_Text_2:
	.string "You mix the poison in with the Fish\n"
	.string "Food.$"

SCRIPT_DraynorManor_Fountain_Text_0:
	.string "There appears to be a lot of dead\n"
	.string "piranha in there.\p"
	.string "…{PAUSE 32}Oops.$"

SCRIPT_DraynorManor_Fountain_Text_1:
	.string "You spot the Pressure Gauge among a\n"
	.string "school of piranhas.$"

SCRIPT_DraynorManor_Fountain_Text_2:
	.string "There appears to be a lot of piranha in\n"
	.string "there.$"

SCRIPT_DraynorManor_Fountain_Text_3:
	.string "Would you like to use FISH FOOD?$"

SCRIPT_DraynorManor_Fountain_Text_4:
	.string "Seeing the piranhas in the fountain you\n"
	.string "throw the fish food into the fountain.$"

SCRIPT_DraynorManor_Fountain_Text_5:
	.string "…{PAUSE 32}… They eat the food within seconds.\p"
	.string "Maybe something from the kitchen could\n"
	.string "help slow the piranhas down long enough\l"
	.string "to grab the pressure gauge.$"

SCRIPT_DraynorManor_Fountain_Text_6:
	.string "Would you like to use FISH FOOD P++?$"

SCRIPT_DraynorManor_Gravestone_Text_0:
	.string "It is a gravestone.\p"
	.string "It reads 'here lies Polly'.$"

SCRIPT_DraynorManor_Gravestone_Text_1:
	.string "Would you like to dig up Polly?$"

SCRIPT_DraynorManor_Gravestone_Text_2:
	.string "You dig up the corpse of an ex-parrot.\p"
	.string "You place the body in the cage.\p"
	.string "…{PAUSE 15} …{PAUSE 15} The cage begins to glow.$"

SCRIPT_DraynorManor_Gravestone_Text_3:
	.string "The ex-parrot comes to life!$"

SCRIPT_DraynorManor_Gravestone_Text_4:
	.string "You dig up the corpse of an ex-parrot.\p"
	.string "But have nowhere to put, so you bury it\n"
	.string "again.\p"
	.string "Maybe if you had a cage…$"

SCRIPT_DraynorManor_Gravestone_Text_5:
	.string "You decide it is best to let Poly rest in\n"
	.string "peace.$"

SCRIPT_DraynorManor_Gravestone_Text_6:
	.string "Looks like someone looted this grave.\p"
	.string "How could they…$"

SCRIPT_DraynorManor_FindCage_Text_0:
	.string "You search through the shelves…$"

SCRIPT_DraynorManor_FindCage_Text_1:
	.string "…{PAUSE 15}…{PAUSE 15} and find nothing!$"

EventScript_DraynorManor_SendParty_ExExParrot_Text_0:
	.string "Would you like to give your monster a\n"
	.string "nickname?$"

EventScript_DraynorManor_ReceivedFanfare_ExExParrot_Text_0:
	.string "{PLAYER} obtained a {STR_VAR_2}.$"

NPC_DraynorManor_Oddenstein_Text_0:
	.string "Hello there, you seem to be an\n"
	.string "adventurer.\p"
	.string "You see, recently a human named Ernest\n"
	.string "was turned into a chicken.\p"
	.string "We managed to transform him back but\n"
	.string "not before he laid a bunch of eggs.\p"
	.string "Originally I thought nothing of it and\n"
	.string "was planning to have the eggs for\l"
	.string "breakfast tomorrow but they ended up\l"
	.string "hatching and now there are chicken all\l"
	.string "over the place.$"

NPC_DraynorManor_Oddenstein_Text_1:
	.string "I've come up with a great idea involving\n"
	.string "the increasing number of chickens.\p"
	.string "But I need an assistant, can you help\n"
	.string "me with my experiment?$"

NPC_DraynorManor_Oddenstein_Text_2:
	.string "I need a few items for my experiment to\n"
	.string "succeed can you go get me them?\p"
	.string "I need a Oil Can, Pressure Gauge and\n"
	.string "Rubber Tube.$"

NPC_DraynorManor_Oddenstein_Text_3:
	.string "The Oil Can should be with Ava.\p"
	.string "She is in the room next to the living\n"
	.string "room.\p"
	.string "She loves puzzles so I'd imagine she\n"
	.string "would have hidden the door to her room\l"
	.string "behind a bookcase or something.$"

NPC_DraynorManor_Oddenstein_Text_4:
	.string "I believe the last place I saw the\n"
	.string "Pressure Gauge being used was outside\l"
	.string "in the fountain.$"

NPC_DraynorManor_Oddenstein_Text_5:
	.string "As I recall McBoneFace borrowed the\n"
	.string "Rubber Tube, he should be in his room.\p"
	.string "What he needed it for I have no idea.$"

NPC_DraynorManor_Oddenstein_Text_6:
	.string "Alright off you go my assistant!\p"
	.string "I cannot do this experiment without\n"
	.string "those items!$"

NPC_DraynorManor_Oddenstein_Text_7:
	.string "Shame.$"

NPC_DraynorManor_Oddenstein_Text_8:
	.string "Have you found the parts?$"

NPC_DraynorManor_Oddenstein_Text_9:
	.string "Let me check…$"

NPC_DraynorManor_Oddenstein_Text_10:
	.string "It looks like you have everything!\p"
	.string "Allow me to take those off your hands.$"

NPC_DraynorManor_Oddenstein_Text_11:
	.string "… {PAUSE 15}Just a few more adjustments…$"

NPC_DraynorManor_Oddenstein_Text_12:
	.string "Done!\p"
	.string "Now all we need is one of those\n"
	.string "chickens.\p"
	.string "Can you go grab one for me.$"

NPC_DraynorManor_Oddenstein_Text_13:
	.string "Don't be shy, I know they look weird but\n"
	.string "they are just chickens.\p"
	.string "Go pick one up and bring it over here to\n"
	.string "me.$"

NPC_DraynorManor_Oddenstein_Text_14:
	.string "Perfect, thats an Ernest Chicken\n"
	.string "exactly what we needed!\p"
	.string "Stand back and let the experiment\n"
	.string "begin!$"

NPC_DraynorManor_Oddenstein_Text_15:
	.string "Okay, first we place the chicken down.$"

NPC_DraynorManor_Oddenstein_Text_16:
	.string "Then we press this button and fiddle\n"
	.string "with these doohickles…$"

NPC_DraynorManor_Oddenstein_Text_17:
	.string "Wait!\n"
	.string "Something is wrong!$"

NPC_DraynorManor_Oddenstein_Text_18:
	.string "Oh nooo!$"

NPC_DraynorManor_Oddenstein_Text_19:
	.string "Drat my experiment has ended in\n"
	.string "failure!\p"
	.string "Let's call it there.\p"
	.string "Please dispose of the failed\n"
	.string "experiment.$"

NPC_DraynorManor_Oddenstein_Text_20:
	.string "Please dispose of that chicken.$"

NPC_DraynorManor_Oddenstein_Text_21:
	.string "Ah, thank you for disposing of that\n"
	.string "fowl creature.\p"
	.string "Despite my experiment ending in failure\n"
	.string "I would like you to have this.$"

NPC_DraynorManor_Oddenstein_Text_22:
	.string "Thank you for your assistance with the\n"
	.string "experiment.$"

NPC_DraynorManor_Oddenstein_Text_23:
	.string "Hello again {PLAYER}.$"

NPC_DraynorManor_Oddenstein_Text_24:
	.string "Oh that's Polly's CAGE!\n"
	.string "I used to have a parrot named Polly.\p"
	.string "She loved that cage…\p"
	.string "She has sadly passed from this world\n"
	.string "and her grave now rests in the backyard\l"
	.string "of the manor…$"

NPC_DraynorManor_Oddenstein_Text_25:
	.string "Oh by the way, have you seen a CAGE\n"
	.string "anywhere?\p"
	.string "I could have swore I left it in the room\n"
	.string "next to us somewhere but I haven't\l"
	.string "seen it in awhile.$"

NPC_DraynorManor_Oddenstein_Text_26:
	.string "By the way, it appears that ever since\n"
	.string "we experimented on that chicken it\l"
	.string "appears to keep coming back.\p"
	.string "It would be great if you could get rid\n"
	.string "of it for me.$"

NPC_DraynorManor_Oddenstein_Text_27:
	.string "OMFG I CANNOT BELIEVE THIS!\p"
	.string "SOMEONE DUG UP MY POOR POLLY!\p"
	.string "What kind of monster would disturb my\n"
	.string "poor Polly's rest!$"

EvilChickenBattleScript_Text_0:
	.string "Evil Chicken$"

EvilChickenBattleScript_Text_1:
	.string "BWAWWWK!\p"
	.string "BEGONE {PLAYER}!$"

EvilChickenBattleScript_Text_2:
	.string "Don't listen to that failed experiment!\p"
	.string "Catch it or defeat it!\p"
	.string "Do something and get it out of my lab.$"

CooksAssistant_Check_OilCan_Text_0:
	.string "You don't have the Oil Can.\p"
	.string "Check with Ava.\p"
	.string "She is in the room next to the living\n"
	.string "room.\p"
	.string "She loves puzzles so I'd imagine she\n"
	.string "would have hidden the door to her room\l"
	.string "behind a bookcase or something.$"

CooksAssistant_Check_OilCan_Text_1:
	.string "You have the Oil Can!$"

CooksAssistant_Check_PressureGauge_Text_0:
	.string "You don't have the Pressure Gauge.\p"
	.string "I believe the last place I saw that was\n"
	.string "outside in the fountain.$"

CooksAssistant_Check_PressureGauge_Text_1:
	.string "You have the Pressure Gauge!$"

CooksAssistant_Check_RubberTube_Text_0:
	.string "You don't have the Rubber Tube.\p"
	.string "As I recall McBoneFace borrowed it last.$"

CooksAssistant_Check_RubberTube_Text_1:
	.string "You have the Rubber Tube!$"

NPC_DraynorManor_Fisherman_Text_0:
	.string "Man$"

NPC_DraynorManor_Fisherman_Text_1:
	.string "Why did you do that?\p"
	.string "I just wanted to fish for piranhas.$"

NPC_DraynorManor_Fisherman_Text_2:
	.string "Hey, that fish food looks ominous.\p"
	.string "What are you planning to do?\p"
	.string "…{PAUSE 15}Murder the fish?$"

NPC_DraynorManor_Fisherman_Text_3:
	.string "Where did you get that fish food from?\p"
	.string "Hopefully you didn't get it from the\n"
	.string "kitchen, there's a bunch of poisons in\l"
	.string "there.$"

NPC_DraynorManor_Fisherman_Text_4:
	.string "Rumours say there is a rare fish called\n"
	.string "piranha in this fountain.$"

NPC_DraynorManor_Fisherman_Text_5:
	.string "The fish are looking a bit hungry.\p"
	.string "I think I saw some fish food somewhere\n"
	.string "upstairs in that Manor.$"

NPC_DraynorManor_Fisherman_Text_6:
	.string "The piranhas went extinct…$"
