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
	msgbox TRIGGER_STORYMODE_EVENT_ROUTE27_Text_0
	msgbox TRIGGER_STORYMODE_EVENT_ROUTE27_Text_1
	setflag FLAG_TEMP_1E
	removeobject 7
	setvar VAR_POKESCAPE_STORYMODE_PROGRESS, 175
	releaseall
	end


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


BATTLE_ROUTE27_TRAINER_1::
	trainerbattle_single TRAINER_ROUTE27_TRAINER_1, BATTLE_ROUTE27_TRAINER_1_Text_0, BATTLE_ROUTE27_TRAINER_1_Text_1
	namebox BATTLE_ROUTE27_TRAINER_1_Text_2
	msgbox BATTLE_ROUTE27_TRAINER_1_Text_1
	hidenamebox
	release
	end


BATTLE_ROUTE27_TRAINER_2::
	trainerbattle_single TRAINER_ROUTE27_TRAINER_2, BATTLE_ROUTE27_TRAINER_2_Text_0, BATTLE_ROUTE27_TRAINER_2_Text_1
	msgbox BATTLE_ROUTE27_TRAINER_2_Text_1
	hidenamebox
	release
	end


BATTLE_ROUTE27_TRAINER_3::
	trainerbattle_single TRAINER_ROUTE27_TRAINER_3, BATTLE_ROUTE27_TRAINER_3_Text_0, BATTLE_ROUTE27_TRAINER_3_Text_0
	msgbox BATTLE_ROUTE27_TRAINER_3_Text_0
	hidenamebox
	release
	end


BATTLE_ROUTE27_TRAINER_4::
	trainerbattle_single TRAINER_ROUTE27_TRAINER_4, BATTLE_ROUTE27_TRAINER_4_Text_0, BATTLE_ROUTE27_TRAINER_4_Text_1
	msgbox BATTLE_ROUTE27_TRAINER_4_Text_2
	hidenamebox
	release
	end


TRIGGER_STORYMODE_EVENT_ROUTE27_Text_0:
	.string "Look it's {PLAYER}!$"

TRIGGER_STORYMODE_EVENT_ROUTE27_Text_1:
	.string "Im going to ice mountain, you stay here!$"

NPC_ROUTE27_1_Text_0:
	.string "Monk$"

NPC_ROUTE27_1_Text_1:
	.string "Sorry the chapel is off limits.$"

NPC_ROUTE27_2_Text_0:
	.string "Take your monsters and leave.\p"
	.string "You may not enter.$"

BATTLE_ROUTE27_TRAINER_1_Text_0:
	.string "Stan and deliver!$"

BATTLE_ROUTE27_TRAINER_1_Text_1:
	.string "Wait it is stand?\p"
	.string "Sorry, I am new at this.$"

BATTLE_ROUTE27_TRAINER_1_Text_2:
	.string "Stan the Mugger$"

BATTLE_ROUTE27_TRAINER_2_Text_0:
	.string "Waiting for an Evil Tree to spawn, it will\n"
	.string "show up soon.$"

BATTLE_ROUTE27_TRAINER_2_Text_1:
	.string "Hmm… Maybe I got the wrong location.$"

BATTLE_ROUTE27_TRAINER_3_Text_0:
	.string "This is Ice Mountain, the path to the\n"
	.string "Dwarven Mines.$"

BATTLE_ROUTE27_TRAINER_4_Text_0:
	.string "You stay away from Ice Mountain, you\n"
	.string "hear me?!$"

BATTLE_ROUTE27_TRAINER_4_Text_1:
	.string "Stay away!$"

BATTLE_ROUTE27_TRAINER_4_Text_2:
	.string "If you know what is best then you\n"
	.string "should stay away from Ice Mountain.$"
