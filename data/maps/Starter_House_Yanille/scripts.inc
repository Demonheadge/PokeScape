Starter_House_Yanille_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, Starter_House_Yanille_MapScripts_MAP_SCRIPT_ON_LOAD
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Starter_House_Yanille_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Starter_House_Yanille_MapScripts_MAP_SCRIPT_ON_LOAD:
	checkgamemode
	compare VAR_RESULT, 0
	goto_if_eq Starter_House_Yanille_MapScripts_MAP_SCRIPT_ON_LOAD_2
Starter_House_Yanille_MapScripts_MAP_SCRIPT_ON_LOAD_1:
	compare VAR_RESULT, 1
	goto_if_eq Starter_House_Yanille_MapScripts_MAP_SCRIPT_ON_LOAD_4
	return

Starter_House_Yanille_MapScripts_MAP_SCRIPT_ON_LOAD_2:
	setvar VAR_POKESCAPE_GAMEMODE_STATE, 0
	goto Starter_House_Yanille_MapScripts_MAP_SCRIPT_ON_LOAD_1

Starter_House_Yanille_MapScripts_MAP_SCRIPT_ON_LOAD_4:
	setvar VAR_POKESCAPE_GAMEMODE_STATE, 1
	return

Starter_House_Yanille_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_TEMP_0, 0, GAMEMODE_CHECK_NEWGAME_ITEMS
	.2byte 0


FollowerTest::
	lock
	faceplayer
	namebox FollowerTest_Text_0
	loadword 0, Following_ZanikTalk
	setfollower 3, 0x100
	msgbox FollowerTest_Text_1
	hidenamebox
	release
	end


Following_ZanikTalk::
	msgbox Following_ZanikTalk_Text_0
	hidenamebox
	closemessage
	release
	end


Follower_Frogeel::
	lock
	faceplayer
	namebox Follower_Frogeel_Text_0
	msgbox Follower_Frogeel_Text_1
	msgbox Follower_Frogeel_Text_2, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne Follower_Frogeel_2
Follower_Frogeel_1:
	hidenamebox
	closemessage
	release
	end

Follower_Frogeel_2:
	loadword 0, Following_Frogeel
	setfollower 2, 0x100
	msgbox Follower_Frogeel_Text_1
	msgbox Follower_Frogeel_Text_3
	goto Follower_Frogeel_1


Following_Frogeel::
	msgbox Following_Frogeel_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne Following_Frogeel_2
Following_Frogeel_1:
	hidenamebox
	closemessage
	release
	end

Following_Frogeel_2:
	msgbox Following_Frogeel_Text_1
	destroyfollower
	goto Following_Frogeel_1


Follower_Cupholder::
	lock
	faceplayer
	namebox Follower_Cupholder_Text_0
	msgbox Follower_Cupholder_Text_1
	msgbox Follower_Cupholder_Text_2, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne Follower_Cupholder_2
Follower_Cupholder_1:
	hidenamebox
	closemessage
	release
	end

Follower_Cupholder_2:
	loadword 0, Following_DropTheCupholder
	setfollower 4, 0x100
	msgbox Follower_Cupholder_Text_3
	msgbox Follower_Cupholder_Text_4
	goto Follower_Cupholder_1


Following_DropTheCupholder::
	msgbox Following_DropTheCupholder_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne Following_DropTheCupholder_2
Following_DropTheCupholder_1:
	hidenamebox
	closemessage
	release
	end

Following_DropTheCupholder_2:
	msgbox Following_DropTheCupholder_Text_1
	destroyfollower
	goto Following_DropTheCupholder_1


FollowerTest_Text_0:
	.string "Zanik$"

FollowerTest_Text_1:
	.string "Hey I will follow you!$"

Following_ZanikTalk_Text_0:
	.string "Hi, Where are we going?$"

Follower_Frogeel_Text_0:
	.string "FROGEEL$"

Follower_Frogeel_Text_1:
	.string "AAAAAAAAAAAAAAAAAAA!$"

Follower_Frogeel_Text_2:
	.string "Take Frogeel for a walk?$"

Follower_Frogeel_Text_3:
	.string "Frogeel is now following you.$"

Following_Frogeel_Text_0:
	.string "Tell Frogeel to stop following you?$"

Following_Frogeel_Text_1:
	.string "Despair!\l"
	.string "For Frogeel is gone.$"

Follower_Cupholder_Text_0:
	.string "CUPHOLDER$"

Follower_Cupholder_Text_1:
	.string "May I hold your Cup?$"

Follower_Cupholder_Text_2:
	.string "Do you want a Cupholder?$"

Follower_Cupholder_Text_3:
	.string "Very well, I shall be the best Cupholder\n"
	.string "there is!$"

Follower_Cupholder_Text_4:
	.string "A Cupholder is now following you.$"

Following_DropTheCupholder_Text_0:
	.string "Would you like me to stop holding the\n"
	.string "cup?$"

Following_DropTheCupholder_Text_1:
	.string "And with that, the Cupholder vanishes…$"
