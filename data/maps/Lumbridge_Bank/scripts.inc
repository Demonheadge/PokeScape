Lumbridge_Bank_MapScripts::
# 4 "data/maps/Lumbridge_Bank/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Lumbridge_Bank_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

Lumbridge_Bank_MapScripts_MAP_SCRIPT_ON_LOAD:
# 5 "data/maps/Lumbridge_Bank/scripts.pory"
	call Lumbridge_Bank_OnTransition
	return


Lumbridge_Bank_OnTransition::
# 12 "data/maps/Lumbridge_Bank/scripts.pory"
	setrespawn HEAL_LOCATION_LUMBRIDGE
	return


BANK_EventScript_PC::
# 18 "data/maps/Lumbridge_Bank/scripts.pory"
	setvar VAR_0x800B, LOCALID_NURSE
# 19 "data/maps/Lumbridge_Bank/scripts.pory"
	lock
# 20 "data/maps/Lumbridge_Bank/scripts.pory"
	faceplayer
# 21 "data/maps/Lumbridge_Bank/scripts.pory"
	namebox BANK_EventScript_PC_Text_0
# 22 "data/maps/Lumbridge_Bank/scripts.pory"
	msgbox BANK_EventScript_PC_Text_1
# 24 "data/maps/Lumbridge_Bank/scripts.pory"
	msgbox BANK_EventScript_PC_Text_2, MSGBOX_YESNO
# 25 "data/maps/Lumbridge_Bank/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_ne BANK_EventScript_PC_3
# 31 "data/maps/Lumbridge_Bank/scripts.pory"
	msgbox BANK_EventScript_PC_Text_4
# 32 "data/maps/Lumbridge_Bank/scripts.pory"
	special HealPlayerParty
# 33 "data/maps/Lumbridge_Bank/scripts.pory"
	hidenamebox
# 34 "data/maps/Lumbridge_Bank/scripts.pory"
	release
	end

BANK_EventScript_PC_3:
# 26 "data/maps/Lumbridge_Bank/scripts.pory"
	msgbox BANK_EventScript_PC_Text_3
# 27 "data/maps/Lumbridge_Bank/scripts.pory"
	hidenamebox
# 28 "data/maps/Lumbridge_Bank/scripts.pory"
	release
	end


BANK_EventScript_Banker::
# 41 "data/maps/Lumbridge_Bank/scripts.pory"
	faceplayer
# 43 "data/maps/Lumbridge_Bank/scripts.pory"
	msgbox BANK_EventScript_Banker_Text_0
# 44 "data/maps/Lumbridge_Bank/scripts.pory"
	waitmessage
# 45 "data/maps/Lumbridge_Bank/scripts.pory"
	goto BANK_OPTIONS
	return


BANK_OPTIONS::
# 48 "data/maps/Lumbridge_Bank/scripts.pory"
	closemessage
# 49 "data/maps/Lumbridge_Bank/scripts.pory"
	multichoicedefault 1, 0, MULTI_BANKOPTIONS, 0, 0
# 50 "data/maps/Lumbridge_Bank/scripts.pory"
	switch VAR_RESULT
# 52 "data/maps/Lumbridge_Bank/scripts.pory"
	case 0, BANK_OPTIONS_3
# 54 "data/maps/Lumbridge_Bank/scripts.pory"
	case 1, BANK_OPTIONS_4
# 57 "data/maps/Lumbridge_Bank/scripts.pory"
	case 2, BANK_OPTIONS_5
# 60 "data/maps/Lumbridge_Bank/scripts.pory"
	case 3, BANK_OPTIONS_6
BANK_OPTIONS_1:
# 63 "data/maps/Lumbridge_Bank/scripts.pory"
	end
# 66 "data/maps/Lumbridge_Bank/scripts.pory"
	waitstate
# 67 "data/maps/Lumbridge_Bank/scripts.pory"
	goto EventScript_AccessPC
	end

BANK_OPTIONS_3:
# 53 "data/maps/Lumbridge_Bank/scripts.pory"
	goto BANK_HEAL
	goto BANK_OPTIONS_1

BANK_OPTIONS_4:
# 55 "data/maps/Lumbridge_Bank/scripts.pory"
	goto EventScript_AccessPokemonStorage
	goto BANK_OPTIONS_1

BANK_OPTIONS_5:
# 58 "data/maps/Lumbridge_Bank/scripts.pory"
	goto EventScript_AccessPlayersPC
	goto BANK_OPTIONS_1

BANK_OPTIONS_6:
# 61 "data/maps/Lumbridge_Bank/scripts.pory"
	goto BANK_ExitBank
	goto BANK_OPTIONS_1


BANK_ExitBank::
# 73 "data/maps/Lumbridge_Bank/scripts.pory"
	setvar VAR_0x8004, 0
# 74 "data/maps/Lumbridge_Bank/scripts.pory"
	playse SE_PC_OFF
# 76 "data/maps/Lumbridge_Bank/scripts.pory"
	releaseall
	end


BANK_HEAL::
# 81 "data/maps/Lumbridge_Bank/scripts.pory"
	msgbox BANK_HEAL_Text_0
# 82 "data/maps/Lumbridge_Bank/scripts.pory"
	closemessage
# 83 "data/maps/Lumbridge_Bank/scripts.pory"
	fadescreen FADE_TO_BLACK
# 84 "data/maps/Lumbridge_Bank/scripts.pory"
	playfanfare MUS_HEAL
# 85 "data/maps/Lumbridge_Bank/scripts.pory"
	waitfanfare
# 86 "data/maps/Lumbridge_Bank/scripts.pory"
	special HealPlayerParty
# 87 "data/maps/Lumbridge_Bank/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 88 "data/maps/Lumbridge_Bank/scripts.pory"
	msgbox BANK_HEAL_Text_1
# 89 "data/maps/Lumbridge_Bank/scripts.pory"
	hidenamebox
# 90 "data/maps/Lumbridge_Bank/scripts.pory"
	releaseall
	end


BANK_EventScript_PC_Text_0:
# 21 "data/maps/Lumbridge_Bank/scripts.pory"
	.string "Banker$"

BANK_EventScript_PC_Text_1:
# 22 "data/maps/Lumbridge_Bank/scripts.pory"
	.string "Welcome to the Bank of PokeScape.$"

BANK_EventScript_PC_Text_2:
# 24 "data/maps/Lumbridge_Bank/scripts.pory"
	.string "Would you like to heal your MONSTERs?$"

BANK_EventScript_PC_Text_3:
# 26 "data/maps/Lumbridge_Bank/scripts.pory"
	.string "Very well, come again soon.$"

BANK_EventScript_PC_Text_4:
# 31 "data/maps/Lumbridge_Bank/scripts.pory"
	.string "Your MONSTERs are all healed!$"

BANK_EventScript_Banker_Text_0:
# 43 "data/maps/Lumbridge_Bank/scripts.pory"
	.string "Welcome to the Bank of PokeScape.\p"
	.string "How may I help you today?$"

BANK_HEAL_Text_0:
# 81 "data/maps/Lumbridge_Bank/scripts.pory"
	.string "Very well, I will take your MONSTERs for a minute.$"

BANK_HEAL_Text_1:
# 88 "data/maps/Lumbridge_Bank/scripts.pory"
	.string "Your MONSTERs are all healed!\p"
	.string "Please come again soon.$"
