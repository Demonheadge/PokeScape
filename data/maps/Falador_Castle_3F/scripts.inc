Falador_Castle_3F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Falador_Castle_3F_MapScripts_MAP_SCRIPT_ON_TRANSITION
	map_script MAP_SCRIPT_ON_LOAD, Falador_Castle_3F_MapScripts_MAP_SCRIPT_ON_LOAD
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Falador_Castle_3F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Falador_Castle_3F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	compare VAR_POKESCAPE_GAMEMODE_STATE, 0
	goto_if_eq Falador_Castle_3F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

Falador_Castle_3F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	goto FALADORCASTLE_3F_STATE
	return

Falador_Castle_3F_MapScripts_MAP_SCRIPT_ON_LOAD:
	call FALADOR_GYM_MUSIC
	return

Falador_Castle_3F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_TEMP_B, 1, QUEST_FALADORCASTLE_EVENT_AFTER_GYM
	.2byte 0


FALADOR_GYM_MUSIC::
	goto_if_unset FLAG_BADGE02_GET, FALADOR_GYM_MUSIC_1
	return

FALADOR_GYM_MUSIC_1:
	return


FALADORCASTLE_3F_STATE::
	compare VAR_POKESCAPE_STORYMODE_PROGRESS, 120
	goto_if_eq FALADORCASTLE_3F_STATE_2
	compare VAR_POKESCAPE_STORYMODE_PROGRESS, 125
	goto_if_eq FALADORCASTLE_3F_STATE_3
	removeobject 4
	removeobject 5
	removeobject 6
	removeobject 7
	removeobject 8
	removeobject 9
	removeobject 10
	setflag FLAG_TEMP_1F
	setobjectxyperm 1, 3, 2
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_DOWN
FALADORCASTLE_3F_STATE_1:
	return

FALADORCASTLE_3F_STATE_2:
	clearflag FLAG_TEMP_1F
	addobject 4
	addobject 5
	addobject 6
	addobject 7
	addobject 8
	addobject 9
	addobject 10
	setvar VAR_TEMP_B, 1
	setobjectxyperm 4, 19, 8
	setobjectxyperm 1, 19, 9
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_UP
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_UP
	removeobject 2
	removeobject 3
	setflag FLAG_TEMP_1E
	goto FALADORCASTLE_3F_STATE_1

FALADORCASTLE_3F_STATE_3:
	clearflag FLAG_TEMP_1F
	addobject 4
	addobject 5
	addobject 6
	addobject 7
	addobject 8
	addobject 9
	addobject 10
	setvar VAR_TEMP_B, 0
	setobjectxyperm 4, 18, 5
	setobjectxyperm 1, 19, 5
	setobjectxyperm 10, 20, 4
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_RIGHT
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_UP_AND_LEFT
	setobjectmovementtype 10, MOVEMENT_TYPE_FACE_LEFT
	setobjectmovementtype 5, MOVEMENT_TYPE_FACE_DOWN_AND_RIGHT
	removeobject 2
	removeobject 3
	setflag FLAG_TEMP_1E
	goto FALADORCASTLE_3F_STATE_1


movement_falador_postgym_1:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

movement_falador_postgym_2:
	walk_up
	walk_up
	walk_up
	walk_left
	face_right
	step_end

movement_falador_postgym_3:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_right
	face_up
	step_end

movement_falador_postgym_4:
	set_invisible
	step_end

movement_falador_postgym_5:
	face_down
	walk_down
	walk_down
	face_right
	walk_right
	walk_right
	step_end

movement_falador_postgym_6:
	face_left
	walk_left
	walk_left
	face_up
	walk_up
	walk_up
	step_end

movement_falador_postgym_7:
	lock_facing_direction
	walk_down
	unlock_facing_direction
	step_end

movement_falador_postgym_8:
	walk_down
	face_left
	step_end

movement_falador_postgym_9:
	face_up
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	face_down
	step_end

MOVEMENT_EXCLAMATIONMARK:
	emote_exclamation_mark
	step_end

MOVEMENT_QUESTIONMARK:
	emote_question_mark
	step_end

QUEST_FALADORCASTLE_EVENT_AFTER_GYM::
	applymovement 4, movement_falador_postgym_2
	applymovement 1, movement_falador_postgym_3
	applymovement OBJ_EVENT_ID_PLAYER, movement_falador_postgym_1
	waitmovement 0
	delay 30
	applymovement 1, Movement_InteractFACELEFT
	delay 20
	applymovement OBJ_EVENT_ID_PLAYER, Movement_InteractFACERIGHT
	delay 20
	applymovement 4, Movement_InteractFACEUP
	delay 20
	applymovement OBJ_EVENT_ID_PLAYER, Movement_InteractFACEUP
	delay 20
	applymovement 1, Movement_InteractFACEUP
	waitmovement 0
	namebox QUEST_FALADORCASTLE_EVENT_AFTER_GYM_Text_0
	msgbox QUEST_FALADORCASTLE_EVENT_AFTER_GYM_Text_1
	closemessage
	hidenamebox
	applymovement OBJ_EVENT_ID_PLAYER, MOVEMENT_INTERACT_UP
	waitmovement 0
	playse SE_PIN
	applymovement 5, MOVEMENT_QUESTIONMARK
	namebox QUEST_FALADORCASTLE_EVENT_AFTER_GYM_Text_0
	msgbox QUEST_FALADORCASTLE_EVENT_AFTER_GYM_Text_2
	closemessage
	hidenamebox
	waitmovement 0
	applymovement 10, movement_falador_postgym_8
	waitmovement 0
	namebox QUEST_FALADORCASTLE_EVENT_AFTER_GYM_Text_3
	msgbox QUEST_FALADORCASTLE_EVENT_AFTER_GYM_Text_4
	closemessage
	hidenamebox
	playse SE_PIN
	applymovement 10, MOVEMENT_EXCLAMATIONMARK
	applymovement 5, Movement_InteractFACERIGHT
	namebox QUEST_FALADORCASTLE_EVENT_AFTER_GYM_Text_3
	msgbox QUEST_FALADORCASTLE_EVENT_AFTER_GYM_Text_5
	closemessage
	hidenamebox
	waitmovement 0
	applymovement 1, MOVEMENT_INTERACT_UP
	namebox QUEST_FALADORCASTLE_EVENT_AFTER_GYM_Text_6
	msgbox QUEST_FALADORCASTLE_EVENT_AFTER_GYM_Text_7
	closemessage
	hidenamebox
	waitmovement 0
	applymovement 10, Movement_InteractFACEDOWN
	namebox QUEST_FALADORCASTLE_EVENT_AFTER_GYM_Text_3
	msgbox QUEST_FALADORCASTLE_EVENT_AFTER_GYM_Text_8
	closemessage
	hidenamebox
	waitmovement 0
	applymovement 1, MOVEMENT_INTERACT_UP
	namebox QUEST_FALADORCASTLE_EVENT_AFTER_GYM_Text_6
	msgbox QUEST_FALADORCASTLE_EVENT_AFTER_GYM_Text_9
	closemessage
	hidenamebox
	waitmovement 0
	applymovement 5, MOVEMENT_INTERACT_DOWN
	namebox QUEST_FALADORCASTLE_EVENT_AFTER_GYM_Text_0
	msgbox QUEST_FALADORCASTLE_EVENT_AFTER_GYM_Text_10
	closemessage
	hidenamebox
	waitmovement 0
	applymovement 10, movement_falador_postgym_9
	waitmovement 0
	namebox QUEST_FALADORCASTLE_EVENT_AFTER_GYM_Text_3
	msgbox QUEST_FALADORCASTLE_EVENT_AFTER_GYM_Text_11
	closemessage
	hidenamebox
	applymovement 10, MOVEMENT_INTERACT_DOWN
	waitmovement 0
	namebox QUEST_FALADORCASTLE_EVENT_AFTER_GYM_Text_3
	msgbox QUEST_FALADORCASTLE_EVENT_AFTER_GYM_Text_12
	closemessage
	hidenamebox
	removeitem ITEM_CRANDOR_MAP_PIECE1, 1
	removeitem ITEM_CRANDOR_MAP_PIECE2, 1
	removeitem ITEM_CRANDOR_MAP_PIECE3, 1
	giveitem ITEM_CRANDOR_MAP_FULL, 1
	applymovement 1, Movement_InteractFACELEFT
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Movement_InteractFACERIGHT
	namebox QUEST_FALADORCASTLE_EVENT_AFTER_GYM_Text_6
	msgbox QUEST_FALADORCASTLE_EVENT_AFTER_GYM_Text_13
	closemessage
	hidenamebox
	waitmovement 0
	setvar VAR_TEMP_B, 0
	setvar VAR_POKESCAPE_STORYMODE_PROGRESS, 125
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_MAIN_STORY, 7
	release
	end


FALADORCASTLE_3F_SIRTHEO::
	lock
	faceplayer
	namebox FALADORCASTLE_3F_SIRTHEO_Text_0
	msgbox FALADORCASTLE_3F_SIRTHEO_Text_1
	hidenamebox
	closemessage
	release
	end


FALADORCASTLE_3F_SIRTIFFY::
	lock
	faceplayer
	namebox FALADORCASTLE_3F_SIRTIFFY_Text_0
	msgbox FALADORCASTLE_3F_SIRTIFFY_Text_1
	hidenamebox
	closemessage
	release
	end


FALADORCASTLE_3F_SIROWEN::
	lock
	faceplayer
	namebox QUEST_FALADORCASTLE_EVENT_AFTER_GYM_Text_0
	msgbox FALADORCASTLE_3F_SIROWEN_Text_0
	hidenamebox
	closemessage
	release
	end


FALADORCASTLE_3F_SIRAMIKVARZE::
	lock
	faceplayer
	namebox QUEST_FALADORCASTLE_EVENT_AFTER_GYM_Text_6
	msgbox FALADORCASTLE_3F_SIRAMIKVARZE_Text_0
	hidenamebox
	closemessage
	release
	end


QUEST_FALADORCASTLE_EVENT_AFTER_GYM_Text_0:
	.string "Sir Owen$"

QUEST_FALADORCASTLE_EVENT_AFTER_GYM_Text_1:
	.string "Thank you all for coming.\p"
	.string "We have been hard at work\n"
	.string "interrograting the prisoners.\p"
	.string "It appears that H.A.M and the Black\n"
	.string "Knights have been working together,\l"
	.string "but despite our best efforts they\l"
	.string "refuse to tell us their plans.\p"
	.string "{PLAYER} do you know anything that\n"
	.string "might be of help in our investigation?$"

QUEST_FALADORCASTLE_EVENT_AFTER_GYM_Text_2:
	.string "What!?\p"
	.string "You have already encountered two other\n"
	.string "H.A.M squads around Asgarnia!\p"
	.string "They were trying to obtain these map\n"
	.string "pieces?$"

QUEST_FALADORCASTLE_EVENT_AFTER_GYM_Text_3:
	.string "Tiffy Cashien$"

QUEST_FALADORCASTLE_EVENT_AFTER_GYM_Text_4:
	.string "May I take a look at those?\p"
	.string "Hmm…{PAUSE 15}\n"
	.string "This is…$"

QUEST_FALADORCASTLE_EVENT_AFTER_GYM_Text_5:
	.string "You must be pulling my leg!\p"
	.string "This is a map to the lost island Crandor!$"

QUEST_FALADORCASTLE_EVENT_AFTER_GYM_Text_6:
	.string "Sir Amik Varze$"

QUEST_FALADORCASTLE_EVENT_AFTER_GYM_Text_7:
	.string "What would H.A.M and the Black Knights\n"
	.string "want with Crandor?$"

QUEST_FALADORCASTLE_EVENT_AFTER_GYM_Text_8:
	.string "30 years ago, Crandor used to be a\n"
	.string "thriving city full of adventurers and\l"
	.string "mages but one day we lost all contact\l"
	.string "with them.\p"
	.string "There must be something on the Island\n"
	.string "they want.$"

QUEST_FALADORCASTLE_EVENT_AFTER_GYM_Text_9:
	.string "We will need to investigate this\n"
	.string "immediately and neutralise the H.A.M\l"
	.string "threat!\p"
	.string "I will organise the funds for a ship to\n"
	.string "set sail from Port Sarim to Crandor.$"

QUEST_FALADORCASTLE_EVENT_AFTER_GYM_Text_10:
	.string "That is easier said than done.\p"
	.string "Sailing to the island has been next to\n"
	.string "impossible due to the harsh seas!$"

QUEST_FALADORCASTLE_EVENT_AFTER_GYM_Text_11:
	.string "Actually there may be someone who can\n"
	.string "help.\p"
	.string "Captain Ned.\p"
	.string "He used to be one of the best sailors\n"
	.string "back in the day but has since retired in\l"
	.string "Draynor Village.\p"
	.string "If anyone has the knowledge and\n"
	.string "experience to get there, it'll be him.$"

QUEST_FALADORCASTLE_EVENT_AFTER_GYM_Text_12:
	.string "Here {PLAYER} I assembled the map\n"
	.string "pieces for you.\p"
	.string "You'll be needing the map if you want to\n"
	.string "convince Ned to sail again.$"

QUEST_FALADORCASTLE_EVENT_AFTER_GYM_Text_13:
	.string "Very well, {PLAYER} I wouldn't\n"
	.string "normally do this but since you have the\l"
	.string "map and have proven your strength\l"
	.string "against the White Knights, I wish to ask\l"
	.string "for your assistance.\p"
	.string "Please give Ned a visit over in Draynor\n"
	.string "and convice him to sail to Crandor.\p"
	.string "We will be in contact once we have\n"
	.string "organised a vessel.$"

FALADORCASTLE_3F_SIRTHEO_Text_0:
	.string "Sir Theodore$"

FALADORCASTLE_3F_SIRTHEO_Text_1:
	.string "Roger that sir, I shall go and procure a\n"
	.string "ship at the Port Sarim docks.$"

FALADORCASTLE_3F_SIRTIFFY_Text_0:
	.string "Sir Tiffy$"

FALADORCASTLE_3F_SIRTIFFY_Text_1:
	.string "I will start filling the paper work.$"

FALADORCASTLE_3F_SIROWEN_Text_0:
	.string "Good luck trying to convince Ned to sail\n"
	.string "to Crandor.\p"
	.string "While you do that I shall be dealing with\n"
	.string "these prisoners.$"

FALADORCASTLE_3F_SIRAMIKVARZE_Text_0:
	.string "{PLAYER} please give Ned a visit over\n"
	.string "in Draynor and convice him to sail to\l"
	.string "Crandor.\p"
	.string "We will be in contact once we have\n"
	.string "organised a vessel.$"
