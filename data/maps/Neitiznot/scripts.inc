Neitiznot_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Neitiznot_MapScripts_MAP_SCRIPT_ON_TRANSITION
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Neitiznot_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Neitiznot_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setvar VAR_EVOLUTION_MAP_STATE, 11
	call NEITIZNOT_STATE
	return

Neitiznot_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_POKESCAPE_RAC_QUEST_STATE, 5, RAC_QUEST_START_P2_NEITIZNOT
	map_script_2 VAR_POKESCAPE_RAC_QUEST_JAGEXMODS, 25, RAC_QUEST_NEITIZNOT_ENTRY
	.2byte 0


NEITIZNOT_STATE::
	goto_if_set FLAG_EVENT_TEAM_JATIZSO, NEITIZNOT_STATE_2
NEITIZNOT_STATE_1:
	return

NEITIZNOT_STATE_2:
	compare VAR_POKESCAPE_RAC_QUEST_JAGEXMODS, 30
	goto_if_eq NEITIZNOT_STATE_4
	goto NEITIZNOT_STATE_1

NEITIZNOT_STATE_4:
	removeobject 11
	setflag VAR_TEMP_E
	goto NEITIZNOT_STATE_1


RAC_QUEST_NEITIZNOT_ENTRY::
	lock
	applymovement 11, MOVEMENT_WALKLEFT
	waitmovement 0
	namebox RAC_QUEST_NEITIZNOT_ENTRY_Text_0
	msgbox RAC_QUEST_NEITIZNOT_ENTRY_Text_1
	trainerbattle_no_intro TRAINER_MITHRILMAN1, RAC_QUEST_NEITIZNOT_ENTRY_Text_2
	namebox RAC_QUEST_NEITIZNOT_ENTRY_Text_0
	msgbox RAC_QUEST_NEITIZNOT_ENTRY_Text_3
	hidenamebox
	closemessage
	applymovement 11, MOVEMENT_NELLE_RUNTOBANK
	waitmovement 0
	removeobject 11
	setflag VAR_TEMP_E
	setvar VAR_POKESCAPE_RAC_QUEST_JAGEXMODS, 30
	release
	end


MOVEMENT_WALKLEFT:
	walk_left
	step_end

MOVEMENT_NELLE_RUNTOBANK:
	walk_faster_down
	walk_faster_down
	walk_faster_left
	walk_faster_left
	walk_faster_down
	walk_faster_down
	walk_faster_down
	walk_faster_down
	walk_faster_down
	step_end

JATIZSO_NPC_ModBlkWitch::
	compare VAR_POKESCAPE_RAC_QUEST_STATE, 20
	goto_if_eq JATIZSO_NPC_ModBlkWitch_3
JATIZSO_NPC_ModBlkWitch_1:
	lock
	namebox JATIZSO_NPC_ModBlkWitch_Text_0
	msgbox JATIZSO_NPC_ModBlkWitch_Text_1
	closemessage
	hidenamebox
	release
	end

JATIZSO_NPC_ModBlkWitch_2:
	goto RAC_QUEST_JATIZSO_JAGEX_P4
	goto JATIZSO_NPC_ModBlkWitch_1

JATIZSO_NPC_ModBlkWitch_3:
	goto_if_set FLAG_EVENT_TEAM_JATIZSO, JATIZSO_NPC_ModBlkWitch_2
	goto JATIZSO_NPC_ModBlkWitch_1


RAC_QUEST_JATIZSO_JAGEX_P4::
	compare VAR_POKESCAPE_RAC_QUEST_JAGEXMODS, 35
	goto_if_eq RAC_QUEST_JATIZSO_JAGEX_P4_2
RAC_QUEST_JATIZSO_JAGEX_P4_1:
	compare VAR_POKESCAPE_RAC_QUEST_JAGEXMODS, 30
	goto_if_eq RAC_QUEST_JATIZSO_JAGEX_P4_5
RAC_QUEST_JATIZSO_JAGEX_P4_4:
	end

RAC_QUEST_JATIZSO_JAGEX_P4_2:
	namebox JATIZSO_NPC_ModBlkWitch_Text_0
	msgbox RAC_QUEST_JATIZSO_JAGEX_P4_Text_0
	hidenamebox
	closemessage
	goto RAC_QUEST_JATIZSO_JAGEX_P4_1

RAC_QUEST_JATIZSO_JAGEX_P4_5:
	checkitem ITEM_TEA, 1
	compare VAR_RESULT, 0
	goto_if_ne RAC_QUEST_JATIZSO_JAGEX_P4_7
	goto RAC_QUEST_JATIZSO_JAGEX_P4_4

RAC_QUEST_JATIZSO_JAGEX_P4_7:
	applymovement 16, Movement_QuestionMark
	waitmovement 0
	namebox JATIZSO_NPC_ModBlkWitch_Text_0
	msgbox RAC_QUEST_JATIZSO_JAGEX_P4_Text_1
	hidenamebox
	closemessage
	removeitem ITEM_TEA, 1
	namebox JATIZSO_NPC_ModBlkWitch_Text_0
	msgbox RAC_QUEST_JATIZSO_JAGEX_P4_Text_0
	hidenamebox
	closemessage
	setvar VAR_POKESCAPE_RAC_QUEST_JAGEXMODS, 35
	release
	end


BATTLE_RAC_RABBIT::
	lock
	namebox BATTLE_RAC_RABBIT_Text_0
	playmoncry SPECIES_EKANS, 0
	msgbox BATTLE_RAC_RABBIT_Text_1
	waitmoncry
	hidenamebox
	closemessage
	delay 1
	setwildbattle SPECIES_RABBIT, 30, ITEM_NONE
	dowildbattle
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq BATTLE_RAC_RABBIT_2
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq BATTLE_RAC_RABBIT_3
	compare VAR_RESULT, B_OUTCOME_LOST
	goto_if_eq BATTLE_RAC_RABBIT_4
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq BATTLE_RAC_RABBIT_5
BATTLE_RAC_RABBIT_1:
	end

BATTLE_RAC_RABBIT_2:
	fadescreen FADE_TO_BLACK
	addvar VAR_POKESCAPE_RAC_QUEST_RABBITS, 1
	removeobject VAR_LAST_TALKED
	fadescreen FADE_FROM_BLACK
	goto BATTLE_RAC_RABBIT_1

BATTLE_RAC_RABBIT_3:
	fadescreen FADE_TO_BLACK
	addvar VAR_POKESCAPE_RAC_QUEST_RABBITS, 1
	removeobject VAR_LAST_TALKED
	fadescreen FADE_FROM_BLACK
	goto BATTLE_RAC_RABBIT_1

BATTLE_RAC_RABBIT_4:
	fadescreen FADE_TO_BLACK
	fadescreen FADE_FROM_BLACK
	closemessage
	end

BATTLE_RAC_RABBIT_5:
	namebox BATTLE_RAC_RABBIT_Text_0
	playmoncry SPECIES_EKANS, 0
	msgbox BATTLE_RAC_RABBIT_Text_2
	closemessage
	hidenamebox
	msgbox BATTLE_RAC_RABBIT_Text_3
	closemessage
	setwildbattle SPECIES_RABBIT, 100, ITEM_NONE
	dowildbattleNoCatch
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq BATTLE_RAC_RABBIT_10
	goto BATTLE_RAC_RABBIT_1

BATTLE_RAC_RABBIT_10:
	fadescreen FADE_TO_BLACK
	addvar VAR_POKESCAPE_RAC_QUEST_RABBITS, 1
	removeobject VAR_LAST_TALKED
	fadescreen FADE_FROM_BLACK
	msgbox BATTLE_RAC_RABBIT_Text_4
	closemessage
	hidenamebox
	goto BATTLE_RAC_RABBIT_1


RAC_QUEST_NEITIZNOT_ENTRY_Text_0:
	.string "Nelle$"

RAC_QUEST_NEITIZNOT_ENTRY_Text_1:
	.string "Do you know what you just did?!\p"
	.string "You entered Neitiznot from Jatizso!\p"
	.string "But more importantly you interupted my\n"
	.string "Woodcutting!\p"
	.string "And that is something I will not stand\n"
	.string "for!$"

RAC_QUEST_NEITIZNOT_ENTRY_Text_2:
	.string "…$"

RAC_QUEST_NEITIZNOT_ENTRY_Text_3:
	.string "Nooo!\p"
	.string "Not George!\p"
	.string "I must need to heal him quick!$"

JATIZSO_NPC_ModBlkWitch_Text_0:
	.string "Eterna$"

JATIZSO_NPC_ModBlkWitch_Text_1:
	.string "This is so tasteful!$"

RAC_QUEST_JATIZSO_JAGEX_P4_Text_0:
	.string "Thank you!\p"
	.string "Tell the others I also said thank you.$"

RAC_QUEST_JATIZSO_JAGEX_P4_Text_1:
	.string "Who are you?$"

BATTLE_RAC_RABBIT_Text_0:
	.string "Rabbit$"

BATTLE_RAC_RABBIT_Text_1:
	.string "BUNNNIEEE!$"

BATTLE_RAC_RABBIT_Text_2:
	.string "BOOONNNEEEEYYY!!!!$"

BATTLE_RAC_RABBIT_Text_3:
	.string "The Rabbit seems to have become more\n"
	.string "confident at it's skills.\p"
	.string "It attacks again!$"

BATTLE_RAC_RABBIT_Text_4:
	.string "You somehow overcame that horrorfying\n"
	.string "experience.\p"
	.string "You now understand why Jackson\n"
	.string "dislikes Rabbits.$"
