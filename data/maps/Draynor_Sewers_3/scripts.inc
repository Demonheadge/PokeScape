Draynor_Sewers_3_MapScripts::
	.byte 0


NPC_DRAYNOR_SEWERS_3_NPC_1::
	lock
	faceplayer
	namebox NPC_DRAYNOR_SEWERS_3_NPC_1_Text_0
	msgbox NPC_DRAYNOR_SEWERS_3_NPC_1_Text_1
	hidenamebox
	closemessage
	release
	end


NPC_DRAYNOR_SEWERS_3_NPC_2::
	lock
	faceplayer
	namebox NPC_DRAYNOR_SEWERS_3_NPC_2_Text_0
	msgbox NPC_DRAYNOR_SEWERS_3_NPC_2_Text_1
	hidenamebox
	closemessage
	release
	end


NPC_DRAYNOR_SEWERS_3_NPC_3::
	lock
	faceplayer
	applymovement 5, movement_BKF_Questionmarks
	waitmovement 0
	namebox NPC_DRAYNOR_SEWERS_3_NPC_3_Text_0
	msgbox NPC_DRAYNOR_SEWERS_3_NPC_3_Text_1
	hidenamebox
	closemessage
	release
	end


BATTLE_DRAYNOR_SEWERS3_1::
	trainerbattle_single TRAINER_DRAYNOR_SEWERS3_TRAINER_1, BATTLE_DRAYNOR_SEWERS3_1_Text_0, BATTLE_DRAYNOR_SEWERS3_1_Text_1
	namebox BATTLE_DRAYNOR_SEWERS3_1_Text_2
	msgbox BATTLE_DRAYNOR_SEWERS3_1_Text_3
	hidenamebox
	release
	end


BATTLE_DRAYNOR_SEWERS3_2::
	trainerbattle_single TRAINER_DRAYNOR_SEWERS3_TRAINER_2, BATTLE_DRAYNOR_SEWERS3_2_Text_0, BATTLE_DRAYNOR_SEWERS3_2_Text_1
	namebox BATTLE_DRAYNOR_SEWERS3_2_Text_2
	msgbox BATTLE_DRAYNOR_SEWERS3_2_Text_3
	hidenamebox
	release
	end


BATTLE_DRAYNOR_SEWERS3_3::
	trainerbattle_single TRAINER_DRAYNOR_SEWERS3_TRAINER_3, BATTLE_DRAYNOR_SEWERS3_3_Text_0, BATTLE_DRAYNOR_SEWERS3_3_Text_1
	namebox BATTLE_DRAYNOR_SEWERS3_3_Text_2
	msgbox BATTLE_DRAYNOR_SEWERS3_3_Text_3
	hidenamebox
	release
	end


ITEM_DRAYNOR_SEWERS3_1::
	finditem ITEM_CAKE
	end


TEMP_ITEM_DRAYNOR_SEWERS3_1::
	lock
	msgbox TEMP_ITEM_DRAYNOR_SEWERS3_1_Text_0
	closemessage
	release
	end


ENCOUNTER_WALL_DRAYNOR_SEWERS::
	lockall
	applymovement OBJ_EVENT_ID_PLAYER, Movement_WallBeast
	playSE SE_LEDGE
	msgbox ENCOUNTER_WALL_DRAYNOR_SEWERS_Text_0
	waitmovement 0
	call DRAYNOR_SEWERS_ENCOUNTERS
	dowildbattle
	switch VAR_RESULT
	case B_OUTCOME_WON, ENCOUNTER_WALL_DRAYNOR_SEWERS_3
	case B_OUTCOME_CAUGHT, ENCOUNTER_WALL_DRAYNOR_SEWERS_3
ENCOUNTER_WALL_DRAYNOR_SEWERS_1:
	release
	end

ENCOUNTER_WALL_DRAYNOR_SEWERS_3:
	fadescreenswapbuffers FADE_TO_BLACK
	setmetatile 8, 5, 556, 1
	setmetatile 9, 5, 556, 1
	setvar VAR_TEMP_0, 1
	special DrawWholeMapView
	return
	fadescreenswapbuffers FADE_FROM_BLACK
	goto ENCOUNTER_WALL_DRAYNOR_SEWERS_1


DRAYNOR_SEWERS_ENCOUNTERS::
	call HIDDEN_GROTTO_LEVELS
	random 20
	switch VAR_RESULT
	case 5, DRAYNOR_SEWERS_ENCOUNTERS_3
	case 6, DRAYNOR_SEWERS_ENCOUNTERS_4
	case 7, DRAYNOR_SEWERS_ENCOUNTERS_4
	case 8, DRAYNOR_SEWERS_ENCOUNTERS_4
	case 9, DRAYNOR_SEWERS_ENCOUNTERS_5
	case 10, DRAYNOR_SEWERS_ENCOUNTERS_5
	case 11, DRAYNOR_SEWERS_ENCOUNTERS_6
	case 12, DRAYNOR_SEWERS_ENCOUNTERS_6
	case 13, DRAYNOR_SEWERS_ENCOUNTERS_6
	case 14, DRAYNOR_SEWERS_ENCOUNTERS_7
	case 15, DRAYNOR_SEWERS_ENCOUNTERS_7
	case 16, DRAYNOR_SEWERS_ENCOUNTERS_7
	setwildbattle SPECIES_RAT_NORMAL_FORM, VAR_TEMP_E, ITEM_NONE
DRAYNOR_SEWERS_ENCOUNTERS_1:
	return

DRAYNOR_SEWERS_ENCOUNTERS_3:
	setwildbattle SPECIES_CAVE_SLIME, VAR_TEMP_E, ITEM_NONE
	goto DRAYNOR_SEWERS_ENCOUNTERS_1

DRAYNOR_SEWERS_ENCOUNTERS_4:
	setwildbattle SPECIES_BAT, VAR_TEMP_E, ITEM_NONE
	goto DRAYNOR_SEWERS_ENCOUNTERS_1

DRAYNOR_SEWERS_ENCOUNTERS_5:
	setwildbattle SPECIES_RAT_CRYPT_FORM, VAR_TEMP_E, ITEM_NONE
	goto DRAYNOR_SEWERS_ENCOUNTERS_1

DRAYNOR_SEWERS_ENCOUNTERS_6:
	setwildbattle SPECIES_SPIDER_GIANT_FORM, VAR_TEMP_E, ITEM_NONE
	goto DRAYNOR_SEWERS_ENCOUNTERS_1

DRAYNOR_SEWERS_ENCOUNTERS_7:
	setwildbattle SPECIES_HAND_CREEPING_FORM, VAR_TEMP_E, ITEM_NONE
	goto DRAYNOR_SEWERS_ENCOUNTERS_1


NPC_DRAYNOR_SEWERS_3_NPC_1_Text_0:
	.string "Fadeddemons$"

NPC_DRAYNOR_SEWERS_3_NPC_1_Text_1:
	.string "Be careful not to get too close to that\n"
	.string "wall...\p"
	.string "Something just tried attacking me!$"

NPC_DRAYNOR_SEWERS_3_NPC_2_Text_0:
	.string "PurpleDog6$"

NPC_DRAYNOR_SEWERS_3_NPC_2_Text_1:
	.string "Where do I get a pickaxe so I can break\n"
	.string "these rocks?\p"
	.string "And how do I move that heavy one up\n"
	.string "there!\p"
	.string "There's no way I could push it on my\n"
	.string "own...$"

NPC_DRAYNOR_SEWERS_3_NPC_3_Text_0:
	.string "Qwesty$"

NPC_DRAYNOR_SEWERS_3_NPC_3_Text_1:
	.string "I could have sworn the quest guide\n"
	.string "mentioned a vampyre around here...$"

BATTLE_DRAYNOR_SEWERS3_1_Text_0:
	.string "Your money, or your wife!$"

BATTLE_DRAYNOR_SEWERS3_1_Text_1:
	.string "Oh, it's supposed to be 'life'?$"

BATTLE_DRAYNOR_SEWERS3_1_Text_2:
	.string "Colten$"

BATTLE_DRAYNOR_SEWERS3_1_Text_3:
	.string "I used to be a highwayman, you know.\p"
	.string "Posted at the crossroads just north of\n"
	.string "here.\p"
	.string "Unfortunately, people didn't take too\n"
	.string "kindly to that and drove me to flee\l"
	.string "down here instead.\p"
	.string "I can't believe people would intimidate\n"
	.string "someone like that...$"

BATTLE_DRAYNOR_SEWERS3_2_Text_0:
	.string "These sewers used to scare me as a\n"
	.string "child, but look at me now.\p"
	.string "I'm fearless!$"

BATTLE_DRAYNOR_SEWERS3_2_Text_1:
	.string "Perhaps there are some things I should\n"
	.string "still be scared of - like you!$"

BATTLE_DRAYNOR_SEWERS3_2_Text_2:
	.string "Draven$"

BATTLE_DRAYNOR_SEWERS3_2_Text_3:
	.string "I can see some light from up there.\p"
	.string "I wonder where that ladder leads to?$"

BATTLE_DRAYNOR_SEWERS3_3_Text_0:
	.string "I grew tired of the limitations imposed\n"
	.string "by those in the Wizards' Tower.\p"
	.string "Behold the true power of a mystic!$"

BATTLE_DRAYNOR_SEWERS3_3_Text_1:
	.string "Ugh, maybe I do still have some stuff to\n"
	.string "learn...$"

BATTLE_DRAYNOR_SEWERS3_3_Text_2:
	.string "Transcended$"

BATTLE_DRAYNOR_SEWERS3_3_Text_3:
	.string "Maybe regular magic just isn't that\n"
	.string "strong.\p"
	.string "Perhaps I should give necromancy a\n"
	.string "try...$"

TEMP_ITEM_DRAYNOR_SEWERS3_1_Text_0:
	.string "It's empty!\p"
	.string "Unfortunately, it looks like rats have\n"
	.string "eaten the pouch's contents.$"

ENCOUNTER_WALL_DRAYNOR_SEWERS_Text_0:
	.string "Something jumps out of the wall towards\n"
	.string "you!$"
