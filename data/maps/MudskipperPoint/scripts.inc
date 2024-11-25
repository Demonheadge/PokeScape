MudskipperPoint_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, MudskipperPoint_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

MudskipperPoint_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	call MUDSKIPPER_POINT_STATE
	call PENGUIN_EVENT
	return


MUDSKIPPER_POINT_STATE::
	setflag FLAG_TEMP_F
	removeobject 9
	compare VAR_POKESCAPE_STORYMODE_PROGRESS, 155
	goto_if_eq MUDSKIPPER_POINT_STATE_2
MUDSKIPPER_POINT_STATE_1:
	return

MUDSKIPPER_POINT_STATE_2:
	clearflag FLAG_TEMP_F
	addobject 9
	goto MUDSKIPPER_POINT_STATE_1


STORY_NPC_MUDSKIPPER_POINT_SIRTHEODORE::
	lockall
	faceplayer
	namebox STORY_NPC_MUDSKIPPER_POINT_SIRTHEODORE_Text_0
	msgbox STORY_NPC_MUDSKIPPER_POINT_SIRTHEODORE_Text_1
	hidenamebox
	closemessage
	delay 30
	msgbox STORY_NPC_MUDSKIPPER_POINT_SIRTHEODORE_Text_2
	hidenamebox
	closemessage
	playse SE_LEDGE
	applymovement 9, MOVEMENT_EXCLAMATIONMARK_JUMP_LOCK
	namebox STORY_NPC_MUDSKIPPER_POINT_SIRTHEODORE_Text_0
	msgbox STORY_NPC_MUDSKIPPER_POINT_SIRTHEODORE_Text_3
	waitmovement 0
	msgbox STORY_NPC_MUDSKIPPER_POINT_SIRTHEODORE_Text_4
	hidenamebox
	closemessage
	namebox STORY_NPC_MUDSKIPPER_POINT_SIRTHEODORE_Text_0
	msgbox STORY_NPC_MUDSKIPPER_POINT_SIRTHEODORE_Text_5, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne STORY_NPC_MUDSKIPPER_POINT_SIRTHEODORE_2
STORY_NPC_MUDSKIPPER_POINT_SIRTHEODORE_1:
	closemessage
	hidenamebox
	releaseall
	end

STORY_NPC_MUDSKIPPER_POINT_SIRTHEODORE_2:
	msgbox STORY_NPC_MUDSKIPPER_POINT_SIRTHEODORE_Text_6
	closemessage
	hidenamebox
	msgbox STORY_NPC_MUDSKIPPER_POINT_SIRTHEODORE_Text_7
	warp MAP_FALADOR_CASTLE_3F, 3
	waitstate
	goto STORY_NPC_MUDSKIPPER_POINT_SIRTHEODORE_1


MOVEMENT_EXCLAMATIONMARK_JUMP_LOCK:
	emote_exclamation_mark
	lock_facing_direction
	jump_in_place_down
	unlock_facing_direction
	step_end

ENCOUNTER_PENGUIN_BARREL_MUDSKIPPER_POINT::
	lock
	faceplayer
	namebox ENCOUNTER_PENGUIN_BARREL_MUDSKIPPER_POINT_Text_0
	playmoncry SPECIES_PENGUIN_DISGUISE_BOX_FORM, 0
	msgbox ENCOUNTER_PENGUIN_BARREL_MUDSKIPPER_POINT_Text_1
	waitmoncry
	hidenamebox
	closemessage
	delay 1
	setwildbattle SPECIES_PENGUIN_DISGUISE_BOX_FORM, 30, ITEM_NONE
	dowildbattle
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq ENCOUNTER_PENGUIN_BARREL_MUDSKIPPER_POINT_2
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq ENCOUNTER_PENGUIN_BARREL_MUDSKIPPER_POINT_2
ENCOUNTER_PENGUIN_BARREL_MUDSKIPPER_POINT_1:
	end

ENCOUNTER_PENGUIN_BARREL_MUDSKIPPER_POINT_2:
	fadescreenswapbuffers FADE_TO_BLACK
	setflag FLAG_TEMP_8
	setflag FLAG_TEMP_9
	removeobject 7
	removeobject 8
	savebgm MUS_DUMMY
	fadedefaultbgm
	fadescreenswapbuffers FADE_FROM_BLACK
	closemessage
	goto ENCOUNTER_PENGUIN_BARREL_MUDSKIPPER_POINT_1


SIGN_MudskipperPoint::
	msgbox SIGN_MudskipperPoint_Text_0
	closemessage
	end


STORY_NPC_MUDSKIPPER_POINT_SIRTHEODORE_Text_0:
	.string "Sir Theodore$"

STORY_NPC_MUDSKIPPER_POINT_SIRTHEODORE_Text_1:
	.string "{PLAYER}?!\p"
	.string "Wow is that really you?!\p"
	.string "We were worried when we lost contact\n"
	.string "with you and Ned.\p"
	.string "Speaking of which, where is Ned?$"

STORY_NPC_MUDSKIPPER_POINT_SIRTHEODORE_Text_2:
	.string "…{PAUSE 15}…{PAUSE 15}…{PAUSE 15}…{PAUSE 15}…{PAUSE 15}…{PAUSE 15}$"

STORY_NPC_MUDSKIPPER_POINT_SIRTHEODORE_Text_3:
	.string "WHAT!?\p"
	.string "YOU JUST LEFT HIM ON CRANDOR?!$"

STORY_NPC_MUDSKIPPER_POINT_SIRTHEODORE_Text_4:
	.string "We must report back to Sir Amik Varze in\n"
	.string "Falador right away and organise a\l"
	.string "resuce mission!!$"

STORY_NPC_MUDSKIPPER_POINT_SIRTHEODORE_Text_5:
	.string "Would you like to travel to Falador with\n"
	.string "me?$"

STORY_NPC_MUDSKIPPER_POINT_SIRTHEODORE_Text_6:
	.string "Alright, to Falador with great haste!$"

STORY_NPC_MUDSKIPPER_POINT_SIRTHEODORE_Text_7:
	.string "NOTE: THIS IS THE END OF THE POKESCAPE\n"
	.string "DEMO, FROM HERE ON OUT YOU ARE WELCOME\l"
	.string "TO EXPLORE UNTIL THE NEXT UPDATE!\p"
	.string "THANK YOU FOR PLAYING!$"

ENCOUNTER_PENGUIN_BARREL_MUDSKIPPER_POINT_Text_0:
	.string "Penguin$"

ENCOUNTER_PENGUIN_BARREL_MUDSKIPPER_POINT_Text_1:
	.string "Noot! Noot!$"

SIGN_MudskipperPoint_Text_0:
	.string "Mudskipper Point.\n"
	.string "Beware of Mudskippers.$"
