Lumbridge_Bank_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, Lumbridge_Bank_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

Lumbridge_Bank_MapScripts_MAP_SCRIPT_ON_LOAD:
	call Lumbridge_Bank_OnTransition
	return


Lumbridge_Bank_OnTransition::
	setrespawn HEAL_LOCATION_LUMBRIDGE
	return


BANK_EventScript_PC::
	setvar VAR_0x800B, LOCALID_NURSE
	lock
	faceplayer
	namebox BANK_EventScript_PC_Text_0
	msgbox BANK_EventScript_PC_Text_1
	msgbox BANK_EventScript_PC_Text_2, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_ne BANK_EventScript_PC_3
	msgbox BANK_EventScript_PC_Text_4
	special HealPlayerParty
	hidenamebox
	release
	end

BANK_EventScript_PC_3:
	msgbox BANK_EventScript_PC_Text_3
	hidenamebox
	release
	end


BANK_EventScript_Banker::
	faceplayer
	namebox BANK_EventScript_PC_Text_0
	msgbox BANK_EventScript_Banker_Text_0
	waitmessage
	goto BANK_OPTIONS
	return


BANK_OPTIONS::
	closemessage
	multichoicedefault 1, 0, MULTI_BANKOPTIONS, 0, 0
	switch VAR_RESULT
	case 0, BANK_OPTIONS_3
	case 1, BANK_OPTIONS_4
	case 2, BANK_OPTIONS_5
	case 3, BANK_OPTIONS_6
BANK_OPTIONS_1:
	end
	waitstate
	goto EventScript_AccessPC
	end

BANK_OPTIONS_3:
	goto BANK_HEAL
	goto BANK_OPTIONS_1

BANK_OPTIONS_4:
	goto EventScript_AccessPokemonStorage
	goto BANK_OPTIONS_1

BANK_OPTIONS_5:
	goto EventScript_AccessPlayersPC
	goto BANK_OPTIONS_1

BANK_OPTIONS_6:
	goto BANK_ExitBank
	goto BANK_OPTIONS_1


BANK_ExitBank::
	setvar VAR_0x8004, 0
	playse SE_PC_OFF
	releaseall
	end


BANK_HEAL::
	msgbox BANK_HEAL_Text_0
	closemessage
	fadescreen FADE_TO_BLACK
	playfanfare MUS_HEAL
	waitfanfare
	special HealPlayerParty
	fadescreen FADE_FROM_BLACK
	msgbox BANK_HEAL_Text_1
	hidenamebox
	releaseall
	end


BANK_EventScript_PC_Text_0:
	.string "Banker$"

BANK_EventScript_PC_Text_1:
	.string "Welcome to the Bank of PokeScape.$"

BANK_EventScript_PC_Text_2:
	.string "Would you like to heal your MONSTERS?$"

BANK_EventScript_PC_Text_3:
	.string "Very well, come again soon.$"

BANK_EventScript_PC_Text_4:
	.string "Your MONSTERS are all healed!$"

BANK_EventScript_Banker_Text_0:
	.string "Welcome to the Bank of PokeScape.\p"
	.string "How may I help you today?$"

BANK_HEAL_Text_0:
	.string "Very well, I will take your MONSTERs for\n"
	.string "a minute.$"

BANK_HEAL_Text_1:
	.string "Your MONSTERS are all healed!\p"
	.string "Please come again soon.$"
