Route2_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, Route2_MapScripts_MAP_SCRIPT_ON_LOAD
	map_script MAP_SCRIPT_ON_TRANSITION, Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Route2_MapScripts_MAP_SCRIPT_ON_LOAD:
	compare VAR_POKESCAPE_GAMEMODE_STATE, 0
	goto_if_eq Route2_MapScripts_MAP_SCRIPT_ON_LOAD_1
	return

Route2_MapScripts_MAP_SCRIPT_ON_LOAD_1:
	goto QUEST_STATE_WizardsTower_ROUTE2
	return

Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setvar VAR_EVOLUTION_MAP_STATE, 1
	compare VAR_POKESCAPE_GAMEMODE_STATE, 0
	goto_if_eq Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	call OPENWORLD_STATE_ROUTE2
	return

Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	call STORYMODE_STATE_ROUTE2
	return


STORYMODE_STATE_ROUTE2::
	compare VAR_WISE_OLD_MAN_RIVAL, 0
	goto_if_ne STORYMODE_STATE_ROUTE2_1
	return

STORYMODE_STATE_ROUTE2_1:
	removeobject 14
	setflag FLAG_TEMP_1F
	setvar VAR_WISE_OLD_MAN_RIVAL, 1
	return


OPENWORLD_STATE_ROUTE2::
	setflag FLAG_TEMP_1
	setflag FLAG_TEMP_2
	setvar VAR_TEMP_2, 1
	removeobject 1
	removeobject 2
	removeobject 3
	removeobject 14
	setflag FLAG_TEMP_1F
	return


QUEST_STATE_WizardsTower_ROUTE2::
	switch VAR_POKESCAPE_WIZARDS_TOWER_STATE
	case 0, QUEST_STATE_WizardsTower_ROUTE2_2
	case 1, QUEST_STATE_WizardsTower_ROUTE2_3
	case 2, QUEST_STATE_WizardsTower_ROUTE2_3
	case 3, QUEST_STATE_WizardsTower_ROUTE2_4
	case 4, QUEST_STATE_WizardsTower_ROUTE2_5
	case 5, QUEST_STATE_WizardsTower_ROUTE2_5
	case 6, QUEST_STATE_WizardsTower_ROUTE2_5
	case 7, QUEST_STATE_WizardsTower_ROUTE2_5
	case 8, QUEST_STATE_WizardsTower_ROUTE2_5
	case 9, QUEST_STATE_WizardsTower_ROUTE2_5
	case 10, QUEST_STATE_WizardsTower_ROUTE2_6
	case 11, QUEST_STATE_WizardsTower_ROUTE2_6
	return

QUEST_STATE_WizardsTower_ROUTE2_2:
	setflag FLAG_TEMP_1
	setflag FLAG_TEMP_2
	setvar VAR_TEMP_2, 1
	removeobject 1
	removeobject 2
	removeobject 3
	release
	end

QUEST_STATE_WizardsTower_ROUTE2_3:
	setflag FLAG_TEMP_1
	removeobject 2
	removeobject 3
	removeobject 14
	setflag FLAG_TEMP_1F
	release
	end

QUEST_STATE_WizardsTower_ROUTE2_4:
	clearflag FLAG_TEMP_1
	addobject 2
	addobject 3
	removeobject 14
	setflag FLAG_TEMP_1F
	release
	end

QUEST_STATE_WizardsTower_ROUTE2_5:
	setflag FLAG_TEMP_1
	removeobject 2
	removeobject 3
	removeobject 14
	setflag FLAG_TEMP_1F
	release
	end

QUEST_STATE_WizardsTower_ROUTE2_6:
	setflag FLAG_TEMP_1
	setflag FLAG_TEMP_2
	setvar VAR_TEMP_2, 1
	removeobject 1
	removeobject 2
	removeobject 3
	removeobject 14
	setflag FLAG_TEMP_1F
	release
	end


HAM_EVENT_WizardsTower_4::
	lockall
	namebox HAM_EVENT_WizardsTower_4_Text_0
	msgbox HAM_EVENT_WizardsTower_4_Text_1
	closemessage
	hidenamebox
	release
	end


HAM_EVENT_Route2_MAIN_1::
	lockall
	playbgm MUS_PS_ENCOUNTER_HAM, 1
	applymovement 2, HAM_Movement5_1
	namebox HAM_EVENT_Route2_MAIN_1_Text_0
	msgbox HAM_EVENT_Route2_MAIN_1_Text_1
	hidenamebox
	closemessage
	waitmovement 0
	applymovement 1, HAM_Movement5_7
	namebox HAM_EVENT_Route2_MAIN_1_Text_2
	msgbox HAM_EVENT_Route2_MAIN_1_Text_3
	hidenamebox
	closemessage
	waitmovement 0
	playse SE_WALL_HIT
	applymovement 1, HAM_Movement5_2
	applymovement 2, HAM_Movement5_3
	waitmovement 0
	namebox HAM_EVENT_Route2_MAIN_1_Text_0
	msgbox HAM_EVENT_Route2_MAIN_1_Text_4
	hidenamebox
	closemessage
	applymovement 2, HAM_Movement5_4
	delay 16
	applymovement 1, HAM_Movement5_8
	playse SE_PIN
	applymovement 3, HAM_Movement5_5
	waitmovement 0
	return


HAM_EVENT_Route2_MAIN_2::
	removeobject 2
	removeobject 3
	setflag FLAG_TEMP_1
	setvar VAR_POKESCAPE_WIZARDS_TOWER_STATE, 4
	savebgm MUS_DUMMY
	fadedefaultbgm
	release
	end


HAM_EVENT_Route2_TRIGGER_1::
	call HAM_EVENT_Route2_MAIN_1
	namebox HAM_EVENT_WizardsTower_4_Text_0
	msgbox HAM_EVENT_Route2_TRIGGER_1_Text_0
	hidenamebox
	closemessage
	applymovement 3, HAM_Movement5_6
	waitmovement 0
	goto HAM_EVENT_Route2_MAIN_2
	return


HAM_EVENT_Route2_TRIGGER_2::
	call HAM_EVENT_Route2_MAIN_1
	namebox HAM_EVENT_WizardsTower_4_Text_0
	msgbox HAM_EVENT_Route2_TRIGGER_1_Text_0
	hidenamebox
	closemessage
	applymovement 3, HAM_Movement5_9
	waitmovement 0
	goto HAM_EVENT_Route2_MAIN_2
	return


HAM_EVENT_Route2_TRIGGER_3::
	applymovement 3, MOVEMENT_FACE_DOWN
	applymovement OBJ_EVENT_ID_PLAYER, MOVEMENT_FACE_UP
	waitmovement 0
	namebox HAM_EVENT_WizardsTower_4_Text_0
	msgbox HAM_EVENT_Route2_TRIGGER_3_Text_0
	hidenamebox
	closemessage
	applymovement 3, MOVEMENT_FACE_LEFT
	applymovement OBJ_EVENT_ID_PLAYER, movement_WALKRIGHT
	waitmovement 0
	return


movement_WALKRIGHT:
	walk_right
	step_end

HAM_Movement5_1:
	walk_in_place_fast_right
	walk_in_place_fast_right
	walk_in_place_fast_right
	step_end

HAM_Movement5_2:
	walk_fast_left
	step_end

HAM_Movement5_3:
	slide_left
	jump_special_left
	face_right
	step_end

HAM_Movement5_4:
	walk_faster_left
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	step_end

HAM_Movement5_5:
	emote_exclamation_mark
	face_right
	step_end

HAM_Movement5_6:
	walk_fast_right
	walk_fast_right
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	step_end

HAM_Movement5_7:
	walk_in_place_fast_left
	walk_in_place_fast_left
	walk_in_place_fast_left
	step_end

HAM_Movement5_8:
	walk_slow_right
	face_left
	step_end

HAM_Movement5_9:
	walk_fast_right
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	step_end

BLOCK_ROUTE2_Highwayman::
	lock
	namebox HAM_EVENT_Route2_MAIN_1_Text_2
	msgbox HAM_EVENT_Route2_MAIN_1_Text_3
	closemessage
	hidenamebox
	playse SE_WALL_HIT
	applymovement 1, HAM_Movement5_2
	applymovement OBJ_EVENT_ID_PLAYER, HAM_Movement5_3
	waitmovement 0
	applymovement 1, HAM_Movement5_8
	waitmovement 0
	release
	end


NPC_ROUTE2_Wizard::
	faceplayer
	namebox NPC_ROUTE2_Wizard_Text_0
	msgbox NPC_ROUTE2_Wizard_Text_1
	hidenamebox
	release
	end


BATTLE_ROUTE2_Trainer_1::
	trainerbattle_single TRAINER_ROUTE2_TRAINER_1, BATTLE_ROUTE2_Trainer_1_Text_0, BATTLE_ROUTE2_Trainer_1_Text_1
	msgbox BATTLE_ROUTE2_Trainer_1_Text_2
	hidenamebox
	release
	end


BATTLE_ROUTE2_Trainer_2::
	trainerbattle_single TRAINER_ROUTE2_TRAINER_2, BATTLE_ROUTE2_Trainer_2_Text_0, BATTLE_ROUTE2_Trainer_2_Text_1
	msgbox BATTLE_ROUTE2_Trainer_2_Text_2
	hidenamebox
	release
	end


BATTLE_ROUTE2_Trainer_3::
	trainerbattle_single TRAINER_ROUTE2_TRAINER_3, BATTLE_ROUTE2_Trainer_3_Text_0, BATTLE_ROUTE2_Trainer_3_Text_1
	msgbox BATTLE_ROUTE2_Trainer_3_Text_1
	hidenamebox
	release
	end


BATTLE_ROUTE2_Trainer_4::
	trainerbattle_single TRAINER_ROUTE2_TRAINER_4, BATTLE_ROUTE2_Trainer_4_Text_0, BATTLE_ROUTE2_Trainer_4_Text_1
	msgbox BATTLE_ROUTE2_Trainer_4_Text_1
	hidenamebox
	release
	end


BATTLE_ROUTE2_Trainer_5::
	trainerbattle_single TRAINER_ROUTE2_TRAINER_5, BATTLE_ROUTE2_Trainer_5_Text_0, BATTLE_ROUTE2_Trainer_5_Text_1
	namebox BATTLE_ROUTE2_Trainer_5_Text_2
	msgbox BATTLE_ROUTE2_Trainer_5_Text_3
	hidenamebox
	release
	end


BATTLE_ROUTE2_Trainer_6::
	trainerbattle_single TRAINER_ROUTE2_TRAINER_6, BATTLE_ROUTE2_Trainer_6_Text_0, BATTLE_ROUTE2_Trainer_6_Text_1
	namebox BATTLE_ROUTE2_Trainer_5_Text_2
	msgbox BATTLE_ROUTE2_Trainer_6_Text_2
	hidenamebox
	release
	end


BATTLE_ROUTE2_Trainer_7::
	trainerbattle_single TRAINER_ROUTE2_TRAINER_7, BATTLE_ROUTE2_Trainer_7_Text_0, BATTLE_ROUTE2_Trainer_7_Text_0
	msgbox BATTLE_ROUTE2_Trainer_7_Text_0
	hidenamebox
	closemessage
	release
	end


NPC_ROUTE2_BLACK_KNIGHT::
	lock
	faceplayer
	namebox NPC_ROUTE2_BLACK_KNIGHT_Text_0
	msgbox NPC_ROUTE2_BLACK_KNIGHT_Text_1
	closemessage
	hidenamebox
	release
	end


TRIGGER_WISEOLDMAN_RIVAL_1::
	lock
	playse SE_PIN
	applymovement 14, movement_wom_route2_0
	waitmovement 0
	delay 60
	playbgm MUS_PS_WISE_OLD_MAN_THEME, 1
	getplayerxy VAR_TEMP_A, VAR_TEMP_B
	compare VAR_TEMP_B, 14
	goto_if_eq TRIGGER_WISEOLDMAN_RIVAL_1_2
	compare VAR_TEMP_B, 15
	goto_if_eq TRIGGER_WISEOLDMAN_RIVAL_1_3
TRIGGER_WISEOLDMAN_RIVAL_1_1:
	waitmovement 0
	namebox TRIGGER_WISEOLDMAN_RIVAL_1_Text_0
	msgbox TRIGGER_WISEOLDMAN_RIVAL_1_Text_1
	hidenamebox
	closemessage
	trainerbattle_no_intro TRAINER_RIVAL_WISE_OLD_MAN_1, TRIGGER_WISEOLDMAN_RIVAL_1_Text_2
	namebox TRIGGER_WISEOLDMAN_RIVAL_1_Text_0
	msgbox TRIGGER_WISEOLDMAN_RIVAL_1_Text_3
	hidenamebox
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, MOVEMENT_INTERACT_LEFT
	waitmovement 0
	namebox TRIGGER_WISEOLDMAN_RIVAL_1_Text_0
	msgbox TRIGGER_WISEOLDMAN_RIVAL_1_Text_4
	namebox TRIGGER_WISEOLDMAN_RIVAL_1_Text_5
	msgbox TRIGGER_WISEOLDMAN_RIVAL_1_Text_6
	hidenamebox
	closemessage
	savebgm MUS_DUMMY
	fadedefaultbgm
	applymovement 14, movement_wom_route2_3
	waitmovement 0
	removeobject 14
	setflag FLAG_TEMP_1F
	setvar VAR_WISE_OLD_MAN_RIVAL, 5
	release
	end

TRIGGER_WISEOLDMAN_RIVAL_1_2:
	applymovement 14, movement_wom_route2_1
	goto TRIGGER_WISEOLDMAN_RIVAL_1_1

TRIGGER_WISEOLDMAN_RIVAL_1_3:
	applymovement 14, movement_wom_route2_2
	goto TRIGGER_WISEOLDMAN_RIVAL_1_1


movement_wom_route2_0:
	face_right
	emote_exclamation_mark
	delay_16
	step_end

movement_wom_route2_1:
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

movement_wom_route2_2:
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

movement_wom_route2_3:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

nowhiteout_test_1::
	cleartrainerflag TRAINER_RIVAL_WISE_OLD_MAN_1
	trainerbattle_no_intro_no_whiteout TRAINER_RIVAL_WISE_OLD_MAN_1, nowhiteout_test_1_Text_0
	specialvar VAR_RESULT, GetBattleOutcome
	compare VAR_RESULT, B_OUTCOME_LOST
	goto_if_eq nowhiteout_test_1_2
	msgbox nowhiteout_test_1_Text_2
nowhiteout_test_1_1:
	closemessage
	end

nowhiteout_test_1_2:
	special HealPlayerParty
	msgbox nowhiteout_test_1_Text_1
	goto nowhiteout_test_1_1


nowhiteout_test_2::
	specialvar VAR_RESULT, GetBattleOutcome
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq nowhiteout_test_3
	special HealPlayerParty
	msgbox nowhiteout_test_2_Text_0
	closemessage
	end


nowhiteout_test_3::
	msgbox nowhiteout_test_3_Text_0
	closemessage
	end


BATTLE_BOT_1::
	trainerbattle_single TRAINER_ROUTE2_TRAINER_1, BATTLE_BOT_1_Text_0, BATTLE_ROUTE2_Trainer_1_Text_1
	msgbox BATTLE_BOT_1_Text_1
	hidenamebox
	release
	end


HAM_EVENT_WizardsTower_4_Text_0:
	.string "Ariane$"

HAM_EVENT_WizardsTower_4_Text_1:
	.string "I wonder if he went this way?$"

HAM_EVENT_Route2_MAIN_1_Text_0:
	.string "H.A.M. member$"

HAM_EVENT_Route2_MAIN_1_Text_1:
	.string "Move!\n"
	.string "Get out of my way!$"

HAM_EVENT_Route2_MAIN_1_Text_2:
	.string "Highwayman$"

HAM_EVENT_Route2_MAIN_1_Text_3:
	.string "Stand and deliver!$"

HAM_EVENT_Route2_MAIN_1_Text_4:
	.string "Ayyyyeeeeek!$"

HAM_EVENT_Route2_TRIGGER_1_Text_0:
	.string "There you are!$"

HAM_EVENT_Route2_TRIGGER_3_Text_0:
	.string "Have you seen a man in pink?\p"
	.string "I don't know which way he went…$"

NPC_ROUTE2_Wizard_Text_0:
	.string "Cordelia$"

NPC_ROUTE2_Wizard_Text_1:
	.string "They say that there are hidden floors\n"
	.string "within the Wizards' Tower.\p"
	.string "I've never found them though.$"

BATTLE_ROUTE2_Trainer_1_Text_0:
	.string "Please no!\p"
	.string "I'm so close to the Bank I don't want to\n"
	.string "be sent back to Lumbridge!$"

BATTLE_ROUTE2_Trainer_1_Text_1:
	.string "Nooo!\p"
	.string "Back to Lumbridge I go!$"

BATTLE_ROUTE2_Trainer_1_Text_2:
	.string "If the swamp wasn't hard enough, there\n"
	.string "was also a forest to pass through!?\p"
	.string "This is too much for a skiller…$"

BATTLE_ROUTE2_Trainer_2_Text_0:
	.string "Passing this bridge gets you to the\n"
	.string "Wizards' Tower.$"

BATTLE_ROUTE2_Trainer_2_Text_1:
	.string "Wizards use runes to conjure magic.$"

BATTLE_ROUTE2_Trainer_2_Text_2:
	.string "Runes are marvellous.\p"
	.string "Using them on monsters might make them\n"
	.string "evolve!$"

BATTLE_ROUTE2_Trainer_3_Text_0:
	.string "A game is not a good game without a\n"
	.string "fishing minigame.$"

BATTLE_ROUTE2_Trainer_3_Text_1:
	.string "Now you too can enjoy the joy of\n"
	.string "fishing.$"

BATTLE_ROUTE2_Trainer_4_Text_0:
	.string "Noobs fear me, fish fear me, pkers turns\n"
	.string "their eyes away from me as I walk.$"

BATTLE_ROUTE2_Trainer_4_Text_1:
	.string "No fish dare make a sound in my\n"
	.string "presence.\p"
	.string "I walk alone on this barren earth.$"

BATTLE_ROUTE2_Trainer_5_Text_0:
	.string "You don't look very strong, this battle\n"
	.string "will be over in an instant!$"

BATTLE_ROUTE2_Trainer_5_Text_1:
	.string "Impossible!\p"
	.string "I was sure you were weak…\p"
	.string "Wait, does this mean I'm weaker than\n"
	.string "you?!$"

BATTLE_ROUTE2_Trainer_5_Text_2:
	.string "Dark Wizard$"

BATTLE_ROUTE2_Trainer_5_Text_3:
	.string "Ugh… how!?\p"
	.string "Was my foresight wrong…?\p"
	.string "No, it can't be…$"

BATTLE_ROUTE2_Trainer_6_Text_0:
	.string "Let's just get this over with…$"

BATTLE_ROUTE2_Trainer_6_Text_1:
	.string "What a surprise, I lost.\p"
	.string "Who would have guessed…$"

BATTLE_ROUTE2_Trainer_6_Text_2:
	.string "I suppose it's not all bad.\p"
	.string "At least you must feel better about\n"
	.string "yourself… right?$"

BATTLE_ROUTE2_Trainer_7_Text_0:
	.string "…$"

NPC_ROUTE2_BLACK_KNIGHT_Text_0:
	.string "Black Knight$"

NPC_ROUTE2_BLACK_KNIGHT_Text_1:
	.string "For the Kinshra!$"

TRIGGER_WISEOLDMAN_RIVAL_1_Text_0:
	.string "???$"

TRIGGER_WISEOLDMAN_RIVAL_1_Text_1:
	.string "My, a new face it seems.\p"
	.string "You beat the Duke?\n"
	.string "Impressive.\p"
	.string "How about you and me do a little battle?\p"
	.string "Now don't be shy, surely you can beat an\n"
	.string "old man.$"

TRIGGER_WISEOLDMAN_RIVAL_1_Text_2:
	.string "Seems like you might just have what it\n"
	.string "takes.$"

TRIGGER_WISEOLDMAN_RIVAL_1_Text_3:
	.string "Impressive.\p"
	.string "Might I ask your name?$"

TRIGGER_WISEOLDMAN_RIVAL_1_Text_4:
	.string "Nice to meet you {PLAYER}.$"

TRIGGER_WISEOLDMAN_RIVAL_1_Text_5:
	.string "Wise Old Man$"

TRIGGER_WISEOLDMAN_RIVAL_1_Text_6:
	.string "I'm Dionysius but everyone just calls\n"
	.string "me the Wise old man.\p"
	.string "I used to be one of the biggest\n"
	.string "adventurers in the world, but now im\l"
	.string "just an old man looking back on his\l"
	.string "glory days.\p"
	.string "Maybe you will become something of a\n"
	.string "legend yourself?\p"
	.string "I hope to see you around on your\n"
	.string "adventures, try not to get lost in the\l"
	.string "Wizards' Tower.\p"
	.string "Until next time.$"

nowhiteout_test_1_Text_0:
	.string "I lost, you win.$"

nowhiteout_test_1_Text_1:
	.string "You lost! Suck it!$"

nowhiteout_test_1_Text_2:
	.string "You defeated me.$"

nowhiteout_test_2_Text_0:
	.string "You lost. Oh no.$"

nowhiteout_test_3_Text_0:
	.string "You won.$"

BATTLE_BOT_1_Text_0:
	.string "RESPONSE ACTIVATED: Hi, my name is\n"
	.string "01000010 01001111 01000010.$"

BATTLE_BOT_1_Text_1:
	.string "RESPONSE ACTIVATED: Hi, my name is 01000010 01001111 01000010.$"
