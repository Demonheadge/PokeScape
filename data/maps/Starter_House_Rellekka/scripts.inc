Starter_House_Rellekka_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, Starter_House_Rellekka_MapScripts_MAP_SCRIPT_ON_LOAD
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Starter_House_Rellekka_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Starter_House_Rellekka_MapScripts_MAP_SCRIPT_ON_LOAD:
	checkgamemode
	compare VAR_RESULT, 0
	goto_if_eq Starter_House_Rellekka_MapScripts_MAP_SCRIPT_ON_LOAD_2
Starter_House_Rellekka_MapScripts_MAP_SCRIPT_ON_LOAD_1:
	compare VAR_RESULT, 1
	goto_if_eq Starter_House_Rellekka_MapScripts_MAP_SCRIPT_ON_LOAD_5
Starter_House_Rellekka_MapScripts_MAP_SCRIPT_ON_LOAD_4:
	goto_if_set FLAG_RECEIVED_YAK, Starter_House_Rellekka_MapScripts_MAP_SCRIPT_ON_LOAD_7
	return

Starter_House_Rellekka_MapScripts_MAP_SCRIPT_ON_LOAD_2:
	setvar VAR_POKESCAPE_GAMEMODE_STATE, 0
	goto Starter_House_Rellekka_MapScripts_MAP_SCRIPT_ON_LOAD_1

Starter_House_Rellekka_MapScripts_MAP_SCRIPT_ON_LOAD_5:
	setvar VAR_POKESCAPE_GAMEMODE_STATE, 1
	goto Starter_House_Rellekka_MapScripts_MAP_SCRIPT_ON_LOAD_4

Starter_House_Rellekka_MapScripts_MAP_SCRIPT_ON_LOAD_7:
	call STARTERHOUSE_RELLEKKA_STATE
	return

Starter_House_Rellekka_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_TEMP_0, 0, GAMEMODE_CHECK_NEWGAME_ITEMS
	.2byte 0


STARTERHOUSE_RELLEKKA_STATE::
	goto_if_set FLAG_EVENT_TEAM_JATIZSO, STARTERHOUSE_RELLEKKA_STATE_1
	return

STARTERHOUSE_RELLEKKA_STATE_1:
	removeobject 3
	return


GiveMon_Yak::
	lock
	showmonpic SPECIES_YAK_NORMAL_FORM, 10, 3
	msgbox GiveMon_Yak_Text_0
	msgbox GiveMon_Yak_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq GiveMon_Yak_1
	givemon SPECIES_YAK_NORMAL_FORM, 50, ITEM_VERACFLAIL
	msgbox GiveMon_Yak_Text_2, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq GiveMon_Yak_5
	setvar VAR_0x8004, 0
	call Common_EventScript_NameReceivedPartyMon
	removeobject 5
GiveMon_Yak_4:
	setflag FLAG_RECEIVED_YAK
	removeobject 3
	return

GiveMon_Yak_1:
	hidemonpic
	release
	return

GiveMon_Yak_5:
	removeobject 5
	hidemonpic
	release
	goto GiveMon_Yak_4


Quest_Start::
	startquest QUEST_ARTFIGHT_JATIZSO
	end


Unlock_Quest_Menu::
	setflag FLAG_SYS_QUEST_MENU_GET
	end


Quest_Test::
	setflag FLAG_SYS_QUEST_MENU_GET
	msgbox GiveMon_Yak_Text_0
	closemessage
	goto_if_eq VAR_RESULT, TRUE, CelebrateEndgame
	end


CelebrateEndgame::
	special DoDomeConfetti
	return


Quest_Test_1::
	startquest QUEST_ARTFIGHT_JATIZSO
	end


Quest_Test_2::
	end


GiveMon_Yak_Text_0:
	.string "Inside this Pouch is a YAK.$"

GiveMon_Yak_Text_1:
	.string "Would you like to take this monster?$"

GiveMon_Yak_Text_2:
	.string "Would you like to give your monster a\n"
	.string "nickname?$"
