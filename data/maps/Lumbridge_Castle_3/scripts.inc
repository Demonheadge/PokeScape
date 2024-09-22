Lumbridge_Castle_3_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, Lumbridge_Castle_3_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

Lumbridge_Castle_3_MapScripts_MAP_SCRIPT_ON_LOAD:
	call LUMBRIDGE_GYM_MUSIC
	call LUMBRIDGE_GYM_STATE
	return


LUMBRIDGE_GYM_MUSIC::
	switch VAR_POKESCAPE_LUMBRIDGE_GYM_QUEST
	case 1, LUMBRIDGE_GYM_MUSIC_2
	case 2, LUMBRIDGE_GYM_MUSIC_3
	return

LUMBRIDGE_GYM_MUSIC_2:
	playbgm MUS_PS_GYM, 1
	savebgm MUS_PS_GYM
	return

LUMBRIDGE_GYM_MUSIC_3:
	return


LUMBRIDGE_GYM_STATE::
	switch VAR_POKESCAPE_LUMBRIDGE_GYM_QUEST
	case 0, LUMBRIDGE_GYM_STATE_3
	case 1, LUMBRIDGE_GYM_STATE_4
	case 2, LUMBRIDGE_GYM_STATE_5
	return

LUMBRIDGE_GYM_STATE_3:
	setobjectxyperm 4, 5, 6
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_DOWN
	setmetatile 4, 6, 17, 1
	setmetatile 5, 7, 17, 1
	setmetatile 6, 6, 26, 1
	setmetatile 6, 7, 17, 1
	setobjectxyperm 2, 31, 5
	setobjectmovementtype 2, MOVEMENT_TYPE_FACE_RIGHT
	setmetatile 32, 5, 17, 1
	setmetatile 31, 6, 17, 1
	setmetatile 32, 6, 17, 1
	special DrawWholeMapView
	setvar VAR_TEMP_A, 1
	return

LUMBRIDGE_GYM_STATE_4:
	removeobject 1
	setflag FLAG_TEMP_1
	setobjectxyperm 4, 6, 4
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_DOWN
	setmetatile 4, 6, 1, 0
	setmetatile 5, 7, 1, 0
	setmetatile 6, 6, 1, 0
	setmetatile 6, 7, 1, 0
	setobjectxyperm 2, 31, 5
	setobjectmovementtype 2, MOVEMENT_TYPE_FACE_RIGHT
	setmetatile 32, 5, 17, 1
	setmetatile 31, 6, 17, 1
	setmetatile 32, 6, 17, 1
	special DrawWholeMapView
	return

LUMBRIDGE_GYM_STATE_5:
	return


TRIGGER_GYM_DUKE::
	lock
	playse SE_PIN
	applymovement 1, Movement_Gym_Duke_1
	waitmovement 0
	namebox TRIGGER_GYM_DUKE_Text_0
	msgbox TRIGGER_GYM_DUKE_Text_1
	closemessage
	hidenamebox
	savebgm MUS_PS_GYM
	applymovement 1, Movement_Gym_Duke_2
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Gym_Duke_3
	waitmovement 1
	removeobject 1
	setflag FLAG_TEMP_1
	setvar VAR_POKESCAPE_LUMBRIDGE_GYM_QUEST, 1
	setvar VAR_TEMP_A, 0
	call LUMBRIDGE_GYM_MUSIC
	goto LUMBRIDGE_GYM_STATE
	release
	end


Movement_Gym_Duke_1:
	emote_question_mark
	face_up
	delay_16
	delay_16
	walk_up
	walk_right
	walk_right
	walk_right
	walk_up
	step_end

Movement_Gym_Duke_2:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

Movement_Gym_Duke_3:
	face_left
	lock_facing_direction
	walk_right
	unlock_facing_direction
	step_end

NPC_DUKE_1::
	lock
	faceplayer
	namebox TRIGGER_GYM_DUKE_Text_0
	goto_if_unset FLAG_BADGE01_GET, NPC_DUKE_1_2
	checkitem ITEM_TALISMAN_MYSTERY, 1
	compare VAR_RESULT, 0
	goto_if_ne NPC_DUKE_1_6
	msgbox NPC_DUKE_1_Text_3
NPC_DUKE_1_5:
	closemessage
	hidenamebox
	release
	end

NPC_DUKE_1_2:
	msgbox NPC_DUKE_1_Text_0
	closemessage
	hidenamebox
	fadescreenswapbuffers FADE_TO_BLACK
	removeobject 1
	setflag FLAG_TEMP_1
	setvar VAR_POKESCAPE_LUMBRIDGE_GYM_QUEST, 1
	fadescreenswapbuffers FADE_FROM_BLACK
	savebgm MUS_PS_GYM
	call LUMBRIDGE_GYM_MUSIC
	goto LUMBRIDGE_GYM_STATE
	release
	end

NPC_DUKE_1_6:
	msgbox NPC_DUKE_1_Text_1
	msgbox NPC_DUKE_1_Text_2
	goto NPC_DUKE_1_5


LUMBRIDGE_GYM_GUARD_1::
	lock
	faceplayer
	namebox LUMBRIDGE_GYM_GUARD_1_Text_0
	switch VAR_POKESCAPE_LUMBRIDGE_GYM_QUEST
	case 0, LUMBRIDGE_GYM_GUARD_1_3
	case 1, LUMBRIDGE_GYM_GUARD_1_4
	case 2, LUMBRIDGE_GYM_GUARD_1_5
	hidenamebox
	closemessage
	release
	end

LUMBRIDGE_GYM_GUARD_1_3:
	msgbox LUMBRIDGE_GYM_GUARD_1_Text_1
	hidenamebox
	closemessage
	release
	end

LUMBRIDGE_GYM_GUARD_1_4:
	msgbox LUMBRIDGE_GYM_GUARD_1_Text_2
	hidenamebox
	closemessage
	release
	end

LUMBRIDGE_GYM_GUARD_1_5:
	msgbox LUMBRIDGE_GYM_GUARD_1_Text_3
	hidenamebox
	closemessage
	release
	end


LUMBRIDGE_GYM_GUARD_2::
	lock
	faceplayer
	namebox LUMBRIDGE_GYM_GUARD_1_Text_0
	switch VAR_POKESCAPE_LUMBRIDGE_GYM_QUEST
	case 0, LUMBRIDGE_GYM_GUARD_2_3
	case 1, LUMBRIDGE_GYM_GUARD_2_3
	case 2, LUMBRIDGE_GYM_GUARD_2_4
	hidenamebox
	release
	end

LUMBRIDGE_GYM_GUARD_2_3:
	msgbox LUMBRIDGE_GYM_GUARD_2_Text_0
	hidenamebox
	release
	end

LUMBRIDGE_GYM_GUARD_2_4:
	msgbox LUMBRIDGE_GYM_GUARD_2_Text_1
	hidenamebox
	release
	end


EVENTSCRIPT_LUMBRIDGECASTLE_DIARY::
	msgbox EVENTSCRIPT_LUMBRIDGECASTLE_DIARY_Text_0
	closemessage
	end


EVENTSCRIPT_LUMBRIDGECASTLE_SPINNINGWHEEL::
	msgbox EVENTSCRIPT_LUMBRIDGECASTLE_SPINNINGWHEEL_Text_0
	random 5
	compare VAR_RESULT, 0
	goto_if_eq EVENTSCRIPT_LUMBRIDGECASTLE_SPINNINGWHEEL_2
EVENTSCRIPT_LUMBRIDGECASTLE_SPINNINGWHEEL_1:
	closemessage
	end

EVENTSCRIPT_LUMBRIDGECASTLE_SPINNINGWHEEL_2:
	msgbox EVENTSCRIPT_LUMBRIDGECASTLE_SPINNINGWHEEL_Text_1
	giveitem ITEM_FLAX, 1
	goto EVENTSCRIPT_LUMBRIDGECASTLE_SPINNINGWHEEL_1


LUMBRIDGE_GYM_SIGMUND::
	lock
	faceplayer
	namebox LUMBRIDGE_GYM_SIGMUND_Text_0
	switch VAR_POKESCAPE_LUMBRIDGE_GYM_QUEST
	case 0, LUMBRIDGE_GYM_SIGMUND_3
	case 1, LUMBRIDGE_GYM_SIGMUND_4
	case 2, LUMBRIDGE_GYM_SIGMUND_5
	msgbox LUMBRIDGE_GYM_SIGMUND_Text_3
	hidenamebox
	release
	end

LUMBRIDGE_GYM_SIGMUND_3:
	msgbox LUMBRIDGE_GYM_SIGMUND_Text_1
	hidenamebox
	closemessage
	release
	end

LUMBRIDGE_GYM_SIGMUND_4:
	msgbox LUMBRIDGE_GYM_SIGMUND_Text_2
	hidenamebox
	closemessage
	release
	end

LUMBRIDGE_GYM_SIGMUND_5:
	msgbox LUMBRIDGE_GYM_SIGMUND_Text_3
	hidenamebox
	closemessage
	release
	end


HANS_GYM_LUMBRIDGE::
	lock
	faceplayer
	namebox HANS_GYM_LUMBRIDGE_Text_0
	goto_if_unset FLAG_BADGE01_GET, HANS_GYM_LUMBRIDGE_2
	msgbox HANS_GYM_LUMBRIDGE_Text_2
HANS_GYM_LUMBRIDGE_1:
	release
	end

HANS_GYM_LUMBRIDGE_2:
	msgbox HANS_GYM_LUMBRIDGE_Text_1
	goto HANS_GYM_LUMBRIDGE_1


TRIGGER_GYM_DUKE_Text_0:
	.string "Duke Horacio$"

TRIGGER_GYM_DUKE_Text_1:
	.string "Hi there!\p"
	.string "I'm Horacio, the Duke of Lumbridge.\p"
	.string "I heard that you wish to challenge me\n"
	.string "to a battle!\p"
	.string "Very well, you will have to reach the top\n"
	.string "of the castle.\p"
	.string "I shall be waiting!$"

NPC_DUKE_1_Text_0:
	.string "Hi there!\p"
	.string "I'm Duke Horacio, lord of castle\n"
	.string "Lumbridge.\p"
	.string "I heard from my cook that you wish to\n"
	.string "challenge me to a battle!\p"
	.string "Very well, you will have to reach the top\n"
	.string "of the castle.\p"
	.string "I shall be waiting!$"

NPC_DUKE_1_Text_1:
	.string "Have you been to see the Archmage\n"
	.string "about that Talisman yet?$"

NPC_DUKE_1_Text_2:
	.string "Wizards' Tower is located south of\n"
	.string "Draynor Village.\p"
	.string "You can get there through Lumbridge\n"
	.string "Swamp to the south of here.\p"
	.string "Return to me once you've delivered the\n"
	.string "Talisman and I'll give you something for\l"
	.string "your troubles.$"

NPC_DUKE_1_Text_3:
	.string "You fought well earlier!\n"
	.string "I look forward to a rematch.$"

LUMBRIDGE_GYM_GUARD_1_Text_0:
	.string "Guard$"

LUMBRIDGE_GYM_GUARD_1_Text_1:
	.string "You're a gym challenger?\p"
	.string "The Duke can be found in his room down\n"
	.string "this hallway.$"

LUMBRIDGE_GYM_GUARD_1_Text_2:
	.string "Good luck with your gym challenge!$"

LUMBRIDGE_GYM_GUARD_1_Text_3:
	.string "Welcome to Lumbridge Castle.\p"
	.string "Mind yourself.$"

LUMBRIDGE_GYM_GUARD_2_Text_0:
	.string "Sorry, this hallway is off limits until I\n"
	.string "sort out this mess.$"

LUMBRIDGE_GYM_GUARD_2_Text_1:
	.string "Welcome to Lumbridge Castle.$"

EVENTSCRIPT_LUMBRIDGECASTLE_DIARY_Text_0:
	.string "It's the Duke's Diary.\p"
	.string "Better not read it.$"

EVENTSCRIPT_LUMBRIDGECASTLE_SPINNINGWHEEL_Text_0:
	.string "This spinning wheel is broken.\p"
	.string "It looks like there is a bunch of flax\n"
	.string "jammed in it.$"

EVENTSCRIPT_LUMBRIDGECASTLE_SPINNINGWHEEL_Text_1:
	.string "Some of the flax came loose.$"

LUMBRIDGE_GYM_SIGMUND_Text_0:
	.string "Sigmund$"

LUMBRIDGE_GYM_SIGMUND_Text_1:
	.string "You gym challengers disgust me.\p"
	.string "Now get out of my room, the Duke is in\n"
	.string "the next room!$"

LUMBRIDGE_GYM_SIGMUND_Text_2:
	.string "You gym challengers disgust me.$"

LUMBRIDGE_GYM_SIGMUND_Text_3:
	.string "Go away.\p"
	.string "I'm busy.$"

HANS_GYM_LUMBRIDGE_Text_0:
	.string "Hans$"

HANS_GYM_LUMBRIDGE_Text_1:
	.string "Oh you are taking up the challenge?\p"
	.string "That is great!\p"
	.string "I guess I should call you a\n"
	.string "Completionist in the makings then.\p"
	.string "To clear this challenge you have to\n"
	.string "beat the Duke.\p"
	.string "He specializes in NORMAL-TYPE\n"
	.string "monsters.\p"
	.string "NORMAL-TYPE's aren't weak to anything\n"
	.string "except FIGHTING-TYPE, however if a\l"
	.string "monster is dual typed you can work\l"
	.string "around that.\p"
	.string "Good luck fighting the Duke!$"

HANS_GYM_LUMBRIDGE_Text_2:
	.string "You truly are a Completionist in the\n"
	.string "making, good job!$"
