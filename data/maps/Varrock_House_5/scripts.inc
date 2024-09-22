Varrock_House_5_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Varrock_House_5_MapScripts_MAP_SCRIPT_ON_TRANSITION
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Varrock_House_5_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Varrock_House_5_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setvar VAR_EVOLUTION_MAP_STATE, 15
	call URI_STATE
	return

Varrock_House_5_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_TEMP_0, 0, URI_FEELING_WATCHED
	.2byte 0


URI_STATE::
	checkitem ITEM_ITEMFINDER, 1
	compare VAR_RESULT, 0
	goto_if_eq URI_STATE_2
URI_STATE_1:
	return

URI_STATE_2:
	setflag FLAG_URI_ITEMFINDER
	setflag FLAG_HIDDEN_ITEM_VARROCK_2
	setflag FLAG_HIDDEN_ITEM_VARROCK_3
	setflag FLAG_HIDDEN_ITEM_VARROCK_4
	setflag FLAG_HIDDEN_ITEM_VARROCK_5
	goto URI_STATE_1


URI_FEELING_WATCHED::
	compare VAR_TEMP_0, 0
	goto_if_eq URI_FEELING_WATCHED_2
URI_FEELING_WATCHED_1:
	return

URI_FEELING_WATCHED_2:
	checkitem ITEM_ITEMFINDER, 1
	compare VAR_RESULT, 0
	goto_if_eq URI_FEELING_WATCHED_5
URI_FEELING_WATCHED_4:
	setvar VAR_TEMP_0, 1
	goto URI_FEELING_WATCHED_1

URI_FEELING_WATCHED_5:
	msgbox URI_FEELING_WATCHED_Text_0
	closemessage
	goto URI_FEELING_WATCHED_4


FIND_VARROCK_URI::
	lock
	msgbox FIND_VARROCK_URI_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne FIND_VARROCK_URI_2
FIND_VARROCK_URI_1:
	closemessage
	release
	end

FIND_VARROCK_URI_2:
	closemessage
	playse SE_USE_ITEM
	addvar VAR_TEMP_1, 1
	compare VAR_TEMP_1, 3
	goto_if_ge FIND_VARROCK_URI_4
	goto FIND_VARROCK_URI_1

FIND_VARROCK_URI_4:
	checkitem ITEM_ITEMFINDER, 1
	compare VAR_RESULT, 0
	goto_if_eq FIND_VARROCK_URI_6
	msgbox FIND_VARROCK_URI_Text_5
	goto FIND_VARROCK_URI_1

FIND_VARROCK_URI_6:
	fadescreenswapbuffers FADE_TO_BLACK
	delay 90
	clearflag FLAG_URI_ITEMFINDER
	clearflag FLAG_HIDDEN_ITEM_VARROCK_2
	clearflag FLAG_HIDDEN_ITEM_VARROCK_3
	clearflag FLAG_HIDDEN_ITEM_VARROCK_4
	clearflag FLAG_HIDDEN_ITEM_VARROCK_5
	addobject 1
	fadescreenswapbuffers FADE_FROM_BLACK
	namebox FIND_VARROCK_URI_Text_1
	msgbox FIND_VARROCK_URI_Text_2
	closemessage
	hidenamebox
	playse SE_LEDGE
	applymovement OBJ_EVENT_ID_PLAYER, MOVEMENT_EXCLAMATIONMARK_JUMP_UP
	waitmovement 0
	delay 30
	applymovement 1, Movement_InteractFACEDOWN
	waitmovement 0
	namebox FIND_VARROCK_URI_Text_1
	msgbox FIND_VARROCK_URI_Text_3
	closemessage
	hidenamebox
	giveitem ITEM_ITEMFINDER
	namebox FIND_VARROCK_URI_Text_1
	msgbox FIND_VARROCK_URI_Text_4
	closemessage
	hidenamebox
	fadescreenswapbuffers FADE_TO_BLACK
	removeobject 1
	setflag FLAG_URI_ITEMFINDER
	fadescreenswapbuffers FADE_FROM_BLACK
	release
	end


URI_FEELING_WATCHED_Text_0:
	.string "You feel like you are being watched…$"

FIND_VARROCK_URI_Text_0:
	.string "Drink the tea?$"

FIND_VARROCK_URI_Text_1:
	.string "Uri$"

FIND_VARROCK_URI_Text_2:
	.string "Aaah, nothing like a nice cuppa tea!$"

FIND_VARROCK_URI_Text_3:
	.string "Well done!\p"
	.string "I see you like solving puzzles.\p"
	.string "What about finding unexpected\n"
	.string "goodies?\p"
	.string "Well say no more!\p"
	.string "These items…{PAUSE 32} are…{PAUSE 32} for…{PAUSE 32} you!$"

FIND_VARROCK_URI_Text_4:
	.string "Hidden treasures lay everywhere!\p"
	.string "Until we meet again!$"

FIND_VARROCK_URI_Text_5:
	.string "Nothing interesting happens.$"
