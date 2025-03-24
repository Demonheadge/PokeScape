Route27_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route27_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Route27_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	call ROUTE27_STATE
	return


ROUTE27_STATE::
	setflag FLAG_TEMP_1E
	setflag FLAG_TEMP_1F
	removeobject 7
	removeobject 8
	removeobject 9
	compare VAR_POKESCAPE_STORYMODE_PROGRESS, 170
	goto_if_eq ROUTE27_STATE_2
ROUTE27_STATE_1:
	compare VAR_POKESCAPE_STORYMODE_PROGRESS, 175
	goto_if_eq ROUTE27_STATE_4
	return

ROUTE27_STATE_2:
	clearflag FLAG_TEMP_1E
	clearflag FLAG_TEMP_1F
	addobject 7
	addobject 8
	addobject 9
	goto ROUTE27_STATE_1

ROUTE27_STATE_4:
	clearflag FLAG_TEMP_1F
	addobject 8
	addobject 9
	return


TRIGGER_STORYMODE_EVENT_ROUTE27::
	lockall
	namebox TRIGGER_STORYMODE_EVENT_ROUTE27_Text_0
	msgbox TRIGGER_STORYMODE_EVENT_ROUTE27_Text_1
	closemessage
	hidenamebox
	applymovement 7, movement_SIR_OWEN_1
	waitmovement 0
	namebox TRIGGER_STORYMODE_EVENT_ROUTE27_Text_0
	msgbox TRIGGER_STORYMODE_EVENT_ROUTE27_Text_2
	closemessage
	hidenamebox
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
	compare VAR_TEMP_2, 30
	goto_if_eq TRIGGER_STORYMODE_EVENT_ROUTE27_2
	compare VAR_TEMP_2, 31
	goto_if_eq TRIGGER_STORYMODE_EVENT_ROUTE27_3
TRIGGER_STORYMODE_EVENT_ROUTE27_1:
	waitmovement 0
	namebox TRIGGER_STORYMODE_EVENT_ROUTE27_Text_0
	msgbox TRIGGER_STORYMODE_EVENT_ROUTE27_Text_3
	closemessage
	hidenamebox
	applymovement 7, movement_SIR_OWEN_3
	waitmovement 0
	namebox TRIGGER_STORYMODE_EVENT_ROUTE27_Text_0
	msgbox TRIGGER_STORYMODE_EVENT_ROUTE27_Text_4
	closemessage
	applymovement 7, movement_SIR_OWEN_4
	waitmovement 0
	setflag FLAG_TEMP_1E
	removeobject 7
	setvar VAR_POKESCAPE_STORYMODE_PROGRESS, 175
	releaseall
	end

TRIGGER_STORYMODE_EVENT_ROUTE27_2:
	applymovement 7, movement_SIR_OWEN_2_up
	goto TRIGGER_STORYMODE_EVENT_ROUTE27_1

TRIGGER_STORYMODE_EVENT_ROUTE27_3:
	applymovement 7, movement_SIR_OWEN_2_down
	goto TRIGGER_STORYMODE_EVENT_ROUTE27_1


movement_SIR_OWEN_1:
	face_left
	step_end

movement_SIR_OWEN_2_up:
	walk_left
	step_end

movement_SIR_OWEN_2_down:
	walk_down
	walk_left
	step_end

movement_SIR_OWEN_3:
	face_up
	step_end

movement_SIR_OWEN_4:
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	step_end

NPC_ROUTE27_1::
	lock
	faceplayer
	namebox NPC_ROUTE27_1_Text_0
	msgbox NPC_ROUTE27_1_Text_1
	closemessage
	hidenamebox
	release
	end


NPC_ROUTE27_2::
	lock
	faceplayer
	namebox NPC_ROUTE27_1_Text_0
	msgbox NPC_ROUTE27_2_Text_0
	closemessage
	hidenamebox
	release
	end


NPC_TEMPLE_KNIGHT_1::
	lock
	faceplayer
	namebox NPC_TEMPLE_KNIGHT_1_Text_0
	msgbox NPC_TEMPLE_KNIGHT_1_Text_1
	closemessage
	hidenamebox
	release
	end


NPC_TEMPLE_KNIGHT_2::
	lock
	faceplayer
	namebox NPC_TEMPLE_KNIGHT_1_Text_0
	msgbox NPC_TEMPLE_KNIGHT_2_Text_0
	closemessage
	hidenamebox
	release
	end


BATTLE_ROUTE27_TRAINER_1::
	trainerbattle_single TRAINER_ROUTE27_TRAINER_1, BATTLE_ROUTE27_TRAINER_1_Text_0, BATTLE_ROUTE27_TRAINER_1_Text_1
	namebox BATTLE_ROUTE27_TRAINER_1_Text_2
	msgbox BATTLE_ROUTE27_TRAINER_1_Text_1
	hidenamebox
	release
	end


BATTLE_ROUTE27_TRAINER_2::
	trainerbattle_single TRAINER_ROUTE27_TRAINER_2, BATTLE_ROUTE27_TRAINER_2_Text_0, BATTLE_ROUTE27_TRAINER_2_Text_1
	namebox BATTLE_ROUTE27_TRAINER_2_Text_2
	msgbox BATTLE_ROUTE27_TRAINER_2_Text_3
	hidenamebox
	release
	end


BATTLE_ROUTE27_TRAINER_3::
	trainerbattle_single TRAINER_ROUTE27_TRAINER_3, BATTLE_ROUTE27_TRAINER_3_Text_0, BATTLE_ROUTE27_TRAINER_3_Text_1
	namebox BATTLE_ROUTE27_TRAINER_3_Text_2
	msgbox BATTLE_ROUTE27_TRAINER_3_Text_3
	hidenamebox
	release
	end


BATTLE_ROUTE27_TRAINER_4::
	trainerbattle_single TRAINER_ROUTE27_TRAINER_4, BATTLE_ROUTE27_TRAINER_4_Text_0, BATTLE_ROUTE27_TRAINER_4_Text_1
	namebox BATTLE_ROUTE27_TRAINER_4_Text_2
	msgbox BATTLE_ROUTE27_TRAINER_4_Text_3
	hidenamebox
	release
	end


TRIGGER_STORYMODE_EVENT_ROUTE27_Text_0:
	.string "Sir Owen$"

TRIGGER_STORYMODE_EVENT_ROUTE27_Text_1:
	.string "I need you both to stay here in case of\n"
	.string "a flank.$"

TRIGGER_STORYMODE_EVENT_ROUTE27_Text_2:
	.string "Oh {PLAYER}, that was quick.\p"
	.string "Sir Tiffy Cashien just informed me by\n"
	.string "Commorb that you were tagging along on\l"
	.string "this mission.$"

TRIGGER_STORYMODE_EVENT_ROUTE27_Text_3:
	.string "Let's go, we must make haste to Ice\n"
	.string "Mountain.$"

TRIGGER_STORYMODE_EVENT_ROUTE27_Text_4:
	.string "I shall scout ahead and make sure\n"
	.string "there's not an ambush waiting for us.\p"
	.string "Don't keep me waiting too long!$"

NPC_ROUTE27_1_Text_0:
	.string "Monk$"

NPC_ROUTE27_1_Text_1:
	.string "Sorry the chapel is off limits.$"

NPC_ROUTE27_2_Text_0:
	.string "Take your monsters and leave.\p"
	.string "You may not enter.$"

NPC_TEMPLE_KNIGHT_1_Text_0:
	.string "Temple Knight$"

NPC_TEMPLE_KNIGHT_1_Text_1:
	.string "Don't worry {PLAYER}, we'll make sure\n"
	.string "no Black Knights get through.$"

NPC_TEMPLE_KNIGHT_2_Text_0:
	.string "We are protected by the Gaze of\n"
	.string "Saradomin.\p"
	.string "We will not let evil prevail here.$"

BATTLE_ROUTE27_TRAINER_1_Text_0:
	.string "Stan and deliver!$"

BATTLE_ROUTE27_TRAINER_1_Text_1:
	.string "Wait it is stand?\p"
	.string "Sorry, I am new at this.$"

BATTLE_ROUTE27_TRAINER_1_Text_2:
	.string "Stan$"

BATTLE_ROUTE27_TRAINER_2_Text_0:
	.string "Waiting for an Evil Tree to spawn, it will\n"
	.string "show up soon.$"

BATTLE_ROUTE27_TRAINER_2_Text_1:
	.string "Hmm… Maybe I got the wrong location.$"

BATTLE_ROUTE27_TRAINER_2_Text_2:
	.string "Lumb3rJake$"

BATTLE_ROUTE27_TRAINER_2_Text_3:
	.string "You've not seen any Evil Trees around\n"
	.string "here, have you?\p"
	.string "Hmm… Maybe I got the wrong location.$"

BATTLE_ROUTE27_TRAINER_3_Text_0:
	.string "It's mostly dwarves around here, not\n"
	.string "many humans brave the cold of Ice\l"
	.string "Mountain.$"

BATTLE_ROUTE27_TRAINER_3_Text_1:
	.string "You're tough, just like us dwarves!$"

BATTLE_ROUTE27_TRAINER_3_Text_2:
	.string "Kifric$"

BATTLE_ROUTE27_TRAINER_3_Text_3:
	.string "If you keep following this path north,\n"
	.string "you'll get to Ice Mountain.\p"
	.string "You're much better off going south\n"
	.string "though.\p"
	.string "The Dwarven Mines are there.\p"
	.string "You'll get a much more friendly welcome.$"

BATTLE_ROUTE27_TRAINER_4_Text_0:
	.string "You stay away from Ice Mountain, you\n"
	.string "hear me?!$"

BATTLE_ROUTE27_TRAINER_4_Text_1:
	.string "Stay away!$"

BATTLE_ROUTE27_TRAINER_4_Text_2:
	.string "Black Knight$"

BATTLE_ROUTE27_TRAINER_4_Text_3:
	.string "If you know what is best then you\n"
	.string "should stay away from Ice Mountain.$"
