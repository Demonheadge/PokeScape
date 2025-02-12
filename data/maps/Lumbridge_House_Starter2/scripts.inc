Lumbridge_House_Starter2_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, Lumbridge_House_Starter2_MapScripts_MAP_SCRIPT_ON_LOAD
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Lumbridge_House_Starter2_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Lumbridge_House_Starter2_MapScripts_MAP_SCRIPT_ON_LOAD:
	checkgamemode
	compare VAR_RESULT, 0
	goto_if_eq Lumbridge_House_Starter2_MapScripts_MAP_SCRIPT_ON_LOAD_2
Lumbridge_House_Starter2_MapScripts_MAP_SCRIPT_ON_LOAD_1:
	compare VAR_RESULT, 1
	goto_if_eq Lumbridge_House_Starter2_MapScripts_MAP_SCRIPT_ON_LOAD_4
	return

Lumbridge_House_Starter2_MapScripts_MAP_SCRIPT_ON_LOAD_2:
	setvar VAR_POKESCAPE_GAMEMODE_STATE, 0
	call GAMEMODE_set_inital_level_cap
	goto Lumbridge_House_Starter2_MapScripts_MAP_SCRIPT_ON_LOAD_1

Lumbridge_House_Starter2_MapScripts_MAP_SCRIPT_ON_LOAD_4:
	setvar VAR_POKESCAPE_GAMEMODE_STATE, 1
	return

Lumbridge_House_Starter2_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_TEMP_0, 0, GAMEMODE_CHECK_NEWGAME_ITEMS
	.2byte 0


GAMEMODE_set_inital_level_cap::
	compare VAR_GAMEMODE_LEVEL_CAP, 0
	goto_if_eq GAMEMODE_set_inital_level_cap_2
GAMEMODE_set_inital_level_cap_1:
	return

GAMEMODE_set_inital_level_cap_2:
	addvar VAR_GAMEMODE_LEVEL_CAP, 16
	goto GAMEMODE_set_inital_level_cap_1


GAMEMODE_CHECK_NEWGAME_ITEMS::
	compare VAR_POKESCAPE_GAMEMODE_STATE, 1
	goto_if_eq GAMEMODE_CHECK_NEWGAME_ITEMS_1
	setvar VAR_TEMP_0, 1
	return

GAMEMODE_CHECK_NEWGAME_ITEMS_1:
	compare VAR_OPENWORLD_STATE, 0
	goto_if_eq GAMEMODE_CHECK_NEWGAME_ITEMS_4
	setvar VAR_TEMP_0, 1
	return

GAMEMODE_CHECK_NEWGAME_ITEMS_4:
	lockall
	msgbox GAMEMODE_CHECK_NEWGAME_ITEMS_Text_0
	msgbox GAMEMODE_CHECK_NEWGAME_ITEMS_Text_1
	closemessage
	special StartWallClock
	waitstate
	msgbox GAMEMODE_CHECK_NEWGAME_ITEMS_Text_2
	msgbox GAMEMODE_CHECK_NEWGAME_ITEMS_Text_3
	playfanfare MUS_OBTAIN_ITEM
	msgbox GAMEMODE_CHECK_NEWGAME_ITEMS_Text_4
	waitfanfare
	setflag FLAG_SYS_POKEDEX_GET
	setflag FLAG_SYS_QUEST_MENU_GET
	playfanfare MUS_OBTAIN_ITEM
	msgbox GAMEMODE_CHECK_NEWGAME_ITEMS_Text_5
	waitfanfare
	additem ITEM_ROTTEN_POTATO
	additem ITEM_POUCH, 10
	additem ITEM_MAP
	additem ITEM_ITEMFINDER
	additem ITEM_SMALL_NET
	additem ITEM_BIG_NET
	additem ITEM_DRAGON_NET
	additem ITEM_TERRORBIRD_POUCH
	additem ITEM_YAK_POUCH
	additem ITEM_DRAGON_PICKAXE
	additem ITEM_SURF_TOOL
	additem ITEM_CUT_TOOL
	additem ITEM_STRENGTH_TOOL
	additem ITEM_DIVE_TOOL
	additem ITEM_TELEPORT_TOOL
	additem ITEM_FLY_TOOL
	additem ITEM_FLASH_TOOL
	additem ITEM_WATERFALL_TOOL
	setflag FLAG_SYS_POKEMON_GET
	setflag FLAG_RECEIVED_RUNNING_SHOES
	setflag FLAG_SYS_B_DASH
	msgbox GAMEMODE_CHECK_NEWGAME_ITEMS_Text_6
	setvar VAR_TEMP_0, 1
	setvar VAR_OPENWORLD_STATE, 1
	closemessage
	special ChooseStarter
	waitstate
	release
	return


Quackers::
	lock
	faceplayer
	random 2
	switch VAR_RESULT
	case 0, Quackers_3
	case 1, Quackers_4
Quackers_1:
	release
	end

Quackers_3:
	msgbox Quackers_Text_0
	goto Quackers_1

Quackers_4:
	msgbox Quackers_Text_1
	goto Quackers_1


ITEM_CUPHOLDER::
	lock
	faceplayer
	msgbox ITEM_CUPHOLDER_Text_0
	release
	end


The_Needle_Clock::
	compare VAR_POKESCAPE_STARTER_HOUSE_STATE, 1
	goto_if_eq The_Needle_Clock_2
The_Needle_Clock_1:
	compare VAR_POKESCAPE_STARTER_HOUSE_STATE, 0
	goto_if_eq The_Needle_Clock_5
The_Needle_Clock_4:
	release
	end

The_Needle_Clock_2:
	lock
	msgbox The_Needle_Clock_Text_0
	msgbox The_Needle_Clock_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq The_Needle_Clock_7
	msgbox The_Needle_Clock_Text_2
	goto The_Needle_Clock_1

The_Needle_Clock_5:
	lock
	msgbox The_Needle_Clock_Text_3
	goto The_Needle_Clock_4

The_Needle_Clock_7:
	clearflag FLAG_SET_WALL_CLOCK
	goto Set_The_Needle_Clock
	goto The_Needle_Clock_1


Set_The_Needle_Clock::
	fadescreenswapbuffers FADE_TO_BLACK
	special StartWallClock
	waitstate
	setflag FLAG_SET_WALL_CLOCK
	return


EventScript_CheckClock::
	incrementgamestat GAME_STAT_CHECKED_CLOCK
	fadescreenswapbuffers FADE_TO_BLACK
	special Special_ViewWallClock
	waitstate
	releaseall
	end


Mithrilman_FLAGS::
	lock
	faceplayer
	msgbox Mithrilman_FLAGS_Text_0
	release
	end


Mithrilman_VARROCK1::
	lock
	faceplayer
	playbgm MUS_ENCOUNTER_MAY, 1
	namebox Mithrilman_VARROCK1_Text_0
	msgbox Mithrilman_VARROCK1_Text_1
	trainerbattle_single TRAINER_MITHRILMAN3, Mithrilman_VARROCK1_Text_2, Mithrilman_VARROCK1_Text_3, Mithrilman_VARROCK2
	return


Mithrilman_VARROCK2::
	lock
	faceplayer
	namebox Mithrilman_VARROCK1_Text_0
	msgbox Mithrilman_VARROCK2_Text_0
	waitmessage
	closemessage
	fadescreenswapbuffers FADE_TO_BLACK
	removeobject 2
	fadescreenswapbuffers FADE_FROM_BLACK
	setflag FLAG_MITHRILMAN3
	clearflag FLAG_MITHRILMAN4
	savebgm MUS_DUMMY
	fadedefaultbgm
	release
	end


Mithrilman_ALKHARID1::
	lock
	faceplayer
	playbgm MUS_ENCOUNTER_MAY, 1
	namebox Mithrilman_VARROCK1_Text_0
	msgbox Mithrilman_ALKHARID1_Text_0
	trainerbattle_single TRAINER_MITHRILMAN4, Mithrilman_ALKHARID1_Text_1, Mithrilman_VARROCK1_Text_3, Mithrilman_ALKHARID2
	return


Mithrilman_ALKHARID2::
	lock
	faceplayer
	namebox Mithrilman_VARROCK1_Text_0
	msgbox Mithrilman_ALKHARID2_Text_0
	closemessage
	hidenamebox
	giveitem ITEM_WATERSKIN, 1
	waitmessage
	closemessage
	hidenamebox
	namebox Mithrilman_VARROCK1_Text_0
	msgbox Mithrilman_ALKHARID2_Text_1
	waitmessage
	closemessage
	fadescreenswapbuffers FADE_TO_BLACK
	removeobject 2
	fadescreenswapbuffers FADE_FROM_BLACK
	setflag FLAG_MITHRILMAN4
	clearflag FLAG_MITHRILMAN5
	savebgm MUS_DUMMY
	fadedefaultbgm
	release
	end


Mithrilman_DRAYNOR1::
	lock
	faceplayer
	playbgm MUS_ENCOUNTER_MAY, 1
	namebox Mithrilman_VARROCK1_Text_0
	msgbox Mithrilman_DRAYNOR1_Text_0
	trainerbattle_single TRAINER_MITHRILMAN6, Mithrilman_DRAYNOR1_Text_1, Mithrilman_VARROCK1_Text_3, Mithrilman_DRAYNOR2
	return


Mithrilman_DRAYNOR2::
	lock
	faceplayer
	namebox Mithrilman_VARROCK1_Text_0
	msgbox Mithrilman_DRAYNOR2_Text_0
	waitmessage
	closemessage
	fadescreenswapbuffers FADE_TO_BLACK
	removeobject 2
	fadescreenswapbuffers FADE_FROM_BLACK
	setflag FLAG_MITHRILMAN6
	clearflag FLAG_MITHRILMAN7
	savebgm MUS_DUMMY
	fadedefaultbgm
	release
	end


Mithrilman_EDGEVILLE1::
	goto_if_set FLAG_MITHRILMAN8, Mithrilman_EDGEVILLE1_1
	lock
	faceplayer
	namebox Mithrilman_VARROCK1_Text_0
	msgbox Mithrilman_EDGEVILLE1_Text_2
	release
	end

Mithrilman_EDGEVILLE1_1:
	lock
	faceplayer
	playbgm MUS_ENCOUNTER_MAY, 1
	namebox Mithrilman_VARROCK1_Text_0
	msgbox Mithrilman_EDGEVILLE1_Text_0
	trainerbattle_single TRAINER_MITHRILMAN7, Mithrilman_EDGEVILLE1_Text_1, Mithrilman_VARROCK1_Text_3, Mithrilman_EDGEVILLE2
	return


Mithrilman_EDGEVILLE2::
	lock
	faceplayer
	namebox Mithrilman_VARROCK1_Text_0
	msgbox Mithrilman_EDGEVILLE2_Text_0
	waitmessage
	closemessage
	setflag FLAG_MITHRILMAN7
	clearflag FLAG_MITHRILMAN8
	savebgm MUS_DUMMY
	fadedefaultbgm
	release
	end


Mithrilman_WILDERNESS1::
	lock
	faceplayer
	playbgm MUS_ENCOUNTER_MAY, 1
	namebox Mithrilman_VARROCK1_Text_0
	msgbox Mithrilman_WILDERNESS1_Text_0
	trainerbattle_single TRAINER_MITHRILMAN8, Mithrilman_WILDERNESS1_Text_1, Mithrilman_VARROCK1_Text_3, Mithrilman_WILDERNESS2
	return


Mithrilman_WILDERNESS2::
	lock
	faceplayer
	namebox Mithrilman_VARROCK1_Text_0
	msgbox Mithrilman_WILDERNESS2_Text_0
	waitmessage
	closemessage
	fadescreenswapbuffers FADE_TO_BLACK
	removeobject 2
	fadescreenswapbuffers FADE_FROM_BLACK
	setflag FLAG_MITHRILMAN8
	clearflag FLAG_MITHRILMAN9
	savebgm MUS_DUMMY
	fadedefaultbgm
	release
	end


Mithrilman_WILDERNESSVOLCANO1::
	lock
	faceplayer
	playbgm MUS_ENCOUNTER_MAY, 1
	namebox Mithrilman_VARROCK1_Text_0
	msgbox Mithrilman_WILDERNESSVOLCANO1_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_ne Mithrilman_WILDERNESSVOLCANO1_3
	namebox Mithrilman_VARROCK1_Text_0
	msgbox Mithrilman_WILDERNESSVOLCANO1_Text_2
	trainerbattle_single TRAINER_MITHRILMAN9, Mithrilman_WILDERNESSVOLCANO1_Text_3, Mithrilman_VARROCK1_Text_3, Mithrilman_WILDERNESSVOLCANO2
	return

Mithrilman_WILDERNESSVOLCANO1_3:
	namebox Mithrilman_VARROCK1_Text_0
	msgbox Mithrilman_WILDERNESSVOLCANO1_Text_1
	savebgm MUS_DUMMY
	fadedefaultbgm
	release
	end


Mithrilman_WILDERNESSVOLCANO2::
	lock
	faceplayer
	namebox Mithrilman_VARROCK1_Text_0
	msgbox Mithrilman_WILDERNESSVOLCANO2_Text_0
	waitmessage
	closemessage
	fadescreenswapbuffers FADE_TO_BLACK
	removeobject 2
	fadescreenswapbuffers FADE_FROM_BLACK
	setflag FLAG_MITHRILMAN9
	clearflag FLAG_MITHRILMAN10
	savebgm MUS_DUMMY
	fadedefaultbgm
	release
	end


GAMEMODE_CHECK_NEWGAME_ITEMS_Text_0:
	.string "Welcome to PokeScape OPEN WORLD mode.$"

GAMEMODE_CHECK_NEWGAME_ITEMS_Text_1:
	.string "Please set the time.$"

GAMEMODE_CHECK_NEWGAME_ITEMS_Text_2:
	.string "It seems that Prof. Normal Tree has\n"
	.string "left you a parcel.$"

GAMEMODE_CHECK_NEWGAME_ITEMS_Text_3:
	.string "Dear {PLAYER}, I hope these will be of\n"
	.string "great use to you on your adventure.\l"
	.string "- Prof. Normal Tree.$"

GAMEMODE_CHECK_NEWGAME_ITEMS_Text_4:
	.string "Obtained the BESTIARY.$"

GAMEMODE_CHECK_NEWGAME_ITEMS_Text_5:
	.string "Obtained a load of useful items.$"

GAMEMODE_CHECK_NEWGAME_ITEMS_Text_6:
	.string "Select a starting Monster.$"

Quackers_Text_0:
	.string "It's Quackers!\p"
	.string "Explorer Jack's pet Duck.$"

Quackers_Text_1:
	.string "It's totally Quackers.$"

ITEM_CUPHOLDER_Text_0:
	.string "CONGRATULATIONS!\p"
	.string "You OBTAINED 'A CUPHOLDER!'$"

The_Needle_Clock_Text_0:
	.string "It's a grandfather clock.\p"
	.string "One of the hands looks like it has been\n"
	.string "replaced with a weird looking needle.$"

The_Needle_Clock_Text_1:
	.string "Would you like to change the time?$"

The_Needle_Clock_Text_2:
	.string "You decided to not touch the clock.$"

The_Needle_Clock_Text_3:
	.string "It's a grandfather clock.$"

Mithrilman_FLAGS_Text_0:
	.string "MITHRILMEN FLAG SET!$"

Mithrilman_VARROCK1_Text_0:
	.string "Mithrilman$"

Mithrilman_VARROCK1_Text_1:
	.string "We meet again knave.\p"
	.string "How farest thee battle?\p"
	.string "Thine?\p"
	.string "Thine has bartered with the skin pelter\n"
	.string "of Varrockia.\p"
	.string "Thine wouldst need a bear skin.\p"
	.string "But alas, clause 73 of the Mithrilmen\n"
	.string "states thine is not to use money to\l"
	.string "gainst relics.\p"
	.string "Thust thine simply did not pay the\n"
	.string "pelter.\p"
	.string "Thoust seems eager for a rematch?$"

Mithrilman_VARROCK1_Text_2:
	.string "Alas knave, there is no ducks to save\n"
	.string "thee this time.$"

Mithrilman_VARROCK1_Text_3:
	.string "…$"

Mithrilman_VARROCK2_Text_0:
	.string "Thine ears hurt, the pelter gave thine\n"
	.string "an earfull.\p"
	.string "How crude language of one who skins\n"
	.string "bears and wolves.\p"
	.string "Thine is tired and willst gracefully\n"
	.string "accept this a draw.\p"
	.string "Fare thee decently knave, ourst fated\n"
	.string "rematch shall commence in thee future.$"

Mithrilman_ALKHARID1_Text_0:
	.string "Greetings knave, these lands be\n"
	.string "scorchest of themst all.\p"
	.string "Thine battlest so far has been harsher\n"
	.string "than before.\p"
	.string "But fear not, a Mithrilman never bends.\p"
	.string "Adamantmen may falter, for they do not\n"
	.string "posesst the speed of a Mithrilman.\p"
	.string "Thus they succumb to the heat of the\n"
	.string "desert.\p"
	.string "Thus Mithrilmen shalt be known as the\n"
	.string "superior challenge!$"

Mithrilman_ALKHARID1_Text_1:
	.string "Yee seem tired knave, wouldst a battle\n"
	.string "fire yee up?$"

Mithrilman_ALKHARID2_Text_0:
	.string "The heat scorched upon your head\n"
	.string "knave.\p"
	.string "An illusion, a miragest of the illusions.\p"
	.string "A blunder upon thee seven desertst.\p"
	.string "Thine must be dehydrated to think\n"
	.string "thoust would win.\p"
	.string "A Mithrilman is a man of charity.\p"
	.string "Thoust can have thine to stay\n"
	.string "hydrated.$"

Mithrilman_ALKHARID2_Text_1:
	.string "These lands be treacherous, someones\n"
	.string "as feeble as thee be warned.$"

Mithrilman_DRAYNOR1_Text_0:
	.string "Wiseness is a praise upon us all.\p"
	.string "And thine has battlest the wisest of\n"
	.string "them all.\p"
	.string "Dizzy himself, the wisest old man.\p"
	.string "Glory upon thine as thine am the\n"
	.string "strongest.\p"
	.string "Is that envy I spy upon yee knave?\p"
	.string "Doest not fear, for thine has granted\n"
	.string "yee the blessing of my visit.\p"
	.string "The wisest got this 8 times and by the\n"
	.string "last the victory was mine by default\l"
	.string "beforest the battle birthed.$"

Mithrilman_DRAYNOR1_Text_1:
	.string "Would thoust challenge a man as awingst\n"
	.string "as me?$"

Mithrilman_DRAYNOR2_Text_0:
	.string "Thoust does cheat?\p"
	.string "Thoust must.\p"
	.string "Thine cannot lose, for thine is a\n"
	.string "Mithrilman.\p"
	.string "Glory be upon thine.\p"
	.string "Knave, I leave yee be for now.\p"
	.string "Nowst is notst the moment.\p"
	.string "Nowst is…\p"
	.string "Fare thee decently knave.$"

Mithrilman_EDGEVILLE1_Text_0:
	.string "Thoust contemplatest going downst\n"
	.string "there?\p"
	.string "Knave yee humour thine so well.\p"
	.string "A Mithrilman as thine would never flaunt\n"
	.string "thine strength.\p"
	.string "But yee go on, yee do thoust best.\p"
	.string "A Mithrilman doest notst belittle thine\n"
	.string "inferior.\p"
	.string "But thine shall commence a parry.\p"
	.string "Forst the last battle between thine\n"
	.string "and yee left thine in a bitter mood.$"

Mithrilman_EDGEVILLE1_Text_1:
	.string "Thine shall have vengeance.$"

Mithrilman_EDGEVILLE1_Text_2:
	.string "Thine wishes to be alones.$"

Mithrilman_EDGEVILLE2_Text_0:
	.string "…\p"
	.string "……\p"
	.string "Thoust wouldnst mind leaving thine be\n"
	.string "for a bit?\p"
	.string "Thine needs to think forst a bit.$"

Mithrilman_WILDERNESS1_Text_0:
	.string "Greetings knave.\p"
	.string "Doust thoust know of Ironmen?\p"
	.string "Ironmen favour themselves to be a\n"
	.string "solitary existence.\p"
	.string "They embark on a quest uninvolved by\n"
	.string "others.\p"
	.string "Solitary beingst.\p"
	.string "Where doest this leave thine the\n"
	.string "Mithrilman?\p"
	.string "Mithrilmen are alone, scorned, hated and\n"
	.string "resentedst.\p"
	.string "If Ironmen are alone, Mithrilmen are\n"
	.string "singular.\p"
	.string "As thee solitary existence that is\n"
	.string "Mithril.\p"
	.string "Thine must no longer holdst back.\p"
	.string "Knave, this endst now.$"

Mithrilman_WILDERNESS1_Text_1:
	.string "Thine have beatenst the 8 strongest of\n"
	.string "this realm and thine shall now smite yee\l"
	.string "as the non Mithrilman thoust are.$"

Mithrilman_WILDERNESS2_Text_0:
	.string "Mithrilmen are solitary.\p"
	.string "Thine is singular.\p"
	.string "Alone, scorned.\p"
	.string "Yet yee fight me once and once again\n"
	.string "knave.\p"
	.string "Knave, state thoust name…\p"
	.string "…\p"
	.string "{PLAYER}\p"
	.string "Thine shall remember.$"

Mithrilman_WILDERNESSVOLCANO1_Text_0:
	.string "Knave…\p"
	.string "{PLAYER}\p"
	.string "Thine can see thoust travel is\n"
	.string "embarking an end.\p"
	.string "Thine has not been fair to yee.\p"
	.string "Yee have fought me headst on for every\n"
	.string "proclamation thine has given, yet has\l"
	.string "never truly acceptedst the defeat.\p"
	.string "Thine is sorry.\p"
	.string "{PLAYER}, thine wish to proclaim a\n"
	.string "rivalry, not for the glory of Mithrilmen,\l"
	.string "but as equals.\p"
	.string "Would yee accept?$"

Mithrilman_WILDERNESSVOLCANO1_Text_1:
	.string "…\p"
	.string "Decisions thine has made leaves yee\n"
	.string "resentful.\p"
	.string "Thine understand.\p"
	.string "Best of glory onwards.$"

Mithrilman_WILDERNESSVOLCANO1_Text_2:
	.string "…\p"
	.string "Thine is still nost the greatest of\n"
	.string "Mithrilmen.\p"
	.string "But thoust are nost the greatest of\n"
	.string "champions yet either.\p"
	.string "{PLAYER}$"

Mithrilman_WILDERNESSVOLCANO1_Text_3:
	.string "Let usts mark this day by blood and\n"
	.string "sword.$"

Mithrilman_WILDERNESSVOLCANO2_Text_0:
	.string "Ahahaha\l"
	.string "Hah…\p"
	.string "Refreshment, thine feels refreshment.\p"
	.string "Thine could not win, but Mithrilmen\n"
	.string "never gives up, no matter the\l"
	.string "challengst.\p"
	.string "{PLAYER}, fare yee well and bests of\n"
	.string "luck in thousts ordeals.\p"
	.string "Thine shall cheer for yee victory.$"
