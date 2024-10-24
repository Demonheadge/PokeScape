Draynor_House_Ned_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Draynor_House_Ned_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Draynor_House_Ned_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	compare VAR_POKESCAPE_GAMEMODE_STATE, 0
	goto_if_eq Draynor_House_Ned_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

Draynor_House_Ned_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	call NEDS_HOUSE_STATE
	return


NEDS_HOUSE_STATE::
	compare VAR_POKESCAPE_STORYMODE_PROGRESS, 130
	goto_if_eq NEDS_HOUSE_STATE_1
	removeobject 2
	setflag FLAG_TEMP_1F
	return

NEDS_HOUSE_STATE_1:
	addobject 2
	clearflag FLAG_TEMP_1F
	setobjectxyperm 2, 2, 4
	setobjectmovementtype 2, MOVEMENT_TYPE_LOOK_AROUND
	return


Ned_Draynor::
	lock
	faceplayer
	namebox Ned_Draynor_Text_0
	compare VAR_POKESCAPE_STORYMODE_PROGRESS, 125
	goto_if_eq Ned_Draynor_2
Ned_Draynor_1:
	compare VAR_POKESCAPE_STORYMODE_PROGRESS, 130
	goto_if_eq Ned_Draynor_5
	msgbox Ned_Draynor_Text_2, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne Ned_Draynor_8
	release
	end

Ned_Draynor_2:
	goto Story_Ned_Draynor
	goto Ned_Draynor_1

Ned_Draynor_5:
	msgbox Ned_Draynor_Text_1
	closemessage
	hidenamebox
	release
	end

Ned_Draynor_8:
	checkmoney 500, 0
	compare VAR_RESULT, 0
	goto_if_eq Ned_Draynor_11
	msgbox Ned_Draynor_Text_5
	removemoney 500
	hidenamebox
	giveitem ITEM_ROPE
	namebox Ned_Draynor_Text_0
	closemessage
	hidenamebox
	release
	end

Ned_Draynor_11:
	checkplayergender
	compare VAR_RESULT, MALE
	goto_if_eq Ned_Draynor_14
	msgbox Ned_Draynor_Text_4
Ned_Draynor_13:
	closemessage
	hidenamebox
	release
	end

Ned_Draynor_14:
	msgbox Ned_Draynor_Text_3
	goto Ned_Draynor_13


DRAYNOR_NED_EVENT_WHITE_KNIGHT::
	lock
	faceplayer
	namebox DRAYNOR_NED_EVENT_WHITE_KNIGHT_Text_0
	msgbox DRAYNOR_NED_EVENT_WHITE_KNIGHT_Text_1
	hidenamebox
	release
	end


Story_Ned_Draynor::
	namebox Ned_Draynor_Text_0
	msgbox Story_Ned_Draynor_Text_0
	hidenamebox
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, MOVEMENT_INTERACT_UP
	waitmovement 0
	namebox Ned_Draynor_Text_0
	msgbox Story_Ned_Draynor_Text_1
	hidenamebox
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, MOVEMENT_INTERACT_UP
	waitmovement 0
	namebox Ned_Draynor_Text_0
	msgbox Story_Ned_Draynor_Text_2
	hidenamebox
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, MOVEMENT_INTERACT_UP
	waitmovement 0
	namebox Ned_Draynor_Text_0
	msgbox Story_Ned_Draynor_Text_3
	hidenamebox
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, MOVEMENT_INTERACT_UP
	waitmovement 0
	playse SE_PIN
	applymovement 1, MOVEMENT_EXCLAMATIONMARK_FACEPLAYER
	namebox Ned_Draynor_Text_0
	msgbox Story_Ned_Draynor_Text_4
	hidenamebox
	closemessage
	applymovement 1, MOVEMENT_INTERACT_DOWN
	waitmovement 0
	namebox Ned_Draynor_Text_0
	hidenamebox
	closemessage
	applymovement 1, Movement_InteractFACERIGHT
	waitmovement 0
	delay 60
	namebox Ned_Draynor_Text_0
	msgbox Story_Ned_Draynor_Text_5
	hidenamebox
	closemessage
	applymovement 1, Movement_InteractFACEDOWN
	waitmovement 0
	namebox Ned_Draynor_Text_0
	msgbox Story_Ned_Draynor_Text_6
	hidenamebox
	closemessage
	playse SE_DOOR
	addobject 2
	clearflag FLAG_TEMP_1F
	waitse
	delay 30
	applymovement 1, Movement_InteractFACEDOWN
	applymovement OBJ_EVENT_ID_PLAYER, Movement_InteractFACEDOWN
	waitmovement 0
	hidenamebox
	closemessage
	applymovement 2, Movement_NedsHouse_1
	waitmovement 0
	namebox DRAYNOR_NED_EVENT_WHITE_KNIGHT_Text_0
	msgbox Story_Ned_Draynor_Text_7
	hidenamebox
	closemessage
	namebox Ned_Draynor_Text_0
	msgbox Story_Ned_Draynor_Text_8
	hidenamebox
	closemessage
	namebox DRAYNOR_NED_EVENT_WHITE_KNIGHT_Text_0
	msgbox Story_Ned_Draynor_Text_9
	hidenamebox
	closemessage
	namebox Ned_Draynor_Text_0
	msgbox Story_Ned_Draynor_Text_10
	hidenamebox
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Movement_InteractFACEUP
	waitmovement 0
	namebox Ned_Draynor_Text_0
	msgbox Story_Ned_Draynor_Text_11
	hidenamebox
	closemessage
	setvar VAR_POKESCAPE_STORYMODE_PROGRESS, 130
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_MAIN_STORY, 8
	release
	end


MOVEMENT_EXCLAMATIONMARK_FACEPLAYER:
	emote_exclamation_mark
	face_player
	step_end

Movement_NedsHouse_1:
	walk_up
	walk_up
	walk_up
	step_end

Ned_Draynor_Text_0:
	.string "Ned$"

Ned_Draynor_Text_1:
	.string "After you {PLAYER}.\p"
	.string "To Crandor!$"

Ned_Draynor_Text_2:
	.string "Would you like to buy some of my world\n"
	.string "famous rope?\p"
	.string "It is 500gp each.$"

Ned_Draynor_Text_3:
	.string "Ah my boy, you seem to be short on\n"
	.string "funds.$"

Ned_Draynor_Text_4:
	.string "Ah my girl, you seem to be short on\n"
	.string "funds.$"

Ned_Draynor_Text_5:
	.string "Here you go, one of my finest!$"

DRAYNOR_NED_EVENT_WHITE_KNIGHT_Text_0:
	.string "Sir Owen$"

DRAYNOR_NED_EVENT_WHITE_KNIGHT_Text_1:
	.string "The white knights have been able to\n"
	.string "secure a ship for transport.\p"
	.string "It is called Lady Falador located south\n"
	.string "of the docks in Port Sarim.\p"
	.string "The name of the ship was originally\n"
	.string "called Lady Lumbridge but considering\l"
	.string "Falador is purchasing it and paying for\l"
	.string "transport it was fitting to rename it.$"

Story_Ned_Draynor_Text_0:
	.string "Hello, is there something I can help you\n"
	.string "with?\p"
	.string "Want to buy some rope perhaps?$"

Story_Ned_Draynor_Text_1:
	.string "…{PAUSE 15}…\p"
	.string "You need to charter a ship to an island?\p"
	.string "Well, I was a sailor but I've retired.\n"
	.string "They say I'm too old now.\p"
	.string "But…{PAUSE 32} It would be a chance to sail a ship\n"
	.string "again.\p"
	.string "Where do you need to sail to?$"

Story_Ned_Draynor_Text_2:
	.string "…{PAUSE 15}…\p"
	.string "Sorry, I must be starting to go deaf.\p"
	.string "For a second it sounded like you said\n"
	.string "Crandor.$"

Story_Ned_Draynor_Text_3:
	.string "Seriously?!\n"
	.string "Crandor!?\p"
	.string "No captain in their right mind would sail\n"
	.string "there, it's too dangerous!\p"
	.string "Plus we'd need a map and nobody has\n"
	.string "chartered a map there for decades.\p"
	.string "Not since, well…$"

Story_Ned_Draynor_Text_4:
	.string "Wait, you have a map?!$"

Story_Ned_Draynor_Text_5:
	.string "Hmm… wow.\p"
	.string "This is the real deal alright…\p"
	.string "I guess I did say that I'd sail anywhere\n"
	.string "if it was a chance to sail again.$"

Story_Ned_Draynor_Text_6:
	.string "Alright you've convinced me.$"

Story_Ned_Draynor_Text_7:
	.string "Ah, there you are and you must be\n"
	.string "Captain Ned.$"

Story_Ned_Draynor_Text_8:
	.string "Aye that is me.\p"
	.string "What business do you have?$"

Story_Ned_Draynor_Text_9:
	.string "I've come to inform you that a small\n"
	.string "crew and ship has been acquired, it is\l"
	.string "located south of the docks in Port\l"
	.string "Sarim.$"

Story_Ned_Draynor_Text_10:
	.string "Well, I suppose that answers that\n"
	.string "question.$"

Story_Ned_Draynor_Text_11:
	.string "Alright then, {PLAYER} was it.\p"
	.string "Lead the way.\p"
	.string "To Crandor we shall sail!$"
