Tzhaar_FightCaves_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Tzhaar_FightCaves_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Tzhaar_FightCaves_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	return


NPC_TZHAAR_GYM_TOKHAAR::
	lock
	faceplayer
	namebox NPC_TZHAAR_GYM_TOKHAAR_Text_0
	compare VAR_POKESCAPE_TZHAAR_GYM_QUEST, 1
	goto_if_eq NPC_TZHAAR_GYM_TOKHAAR_2
NPC_TZHAAR_GYM_TOKHAAR_1:
	compare VAR_POKESCAPE_TZHAAR_GYM_QUEST, 18
	goto_if_eq NPC_TZHAAR_GYM_TOKHAAR_5
NPC_TZHAAR_GYM_TOKHAAR_4:
	compare VAR_POKESCAPE_TZHAAR_GYM_QUEST, 19
	goto_if_eq NPC_TZHAAR_GYM_TOKHAAR_8
NPC_TZHAAR_GYM_TOKHAAR_7:
	compare VAR_POKESCAPE_TZHAAR_GYM_QUEST, 20
	goto_if_eq NPC_TZHAAR_GYM_TOKHAAR_11
NPC_TZHAAR_GYM_TOKHAAR_10:
	compare VAR_POKESCAPE_TZHAAR_GYM_QUEST, 0
	goto_if_eq NPC_TZHAAR_GYM_TOKHAAR_14
NPC_TZHAAR_GYM_TOKHAAR_13:
	hidenamebox
	closemessage
	release
	end

NPC_TZHAAR_GYM_TOKHAAR_2:
	msgbox NPC_TZHAAR_GYM_TOKHAAR_Text_1
	goto NPC_TZHAAR_GYM_TOKHAAR_1

NPC_TZHAAR_GYM_TOKHAAR_5:
	msgbox NPC_TZHAAR_GYM_TOKHAAR_Text_2
	setvar VAR_POKESCAPE_TZHAAR_GYM_QUEST, 1
	goto NPC_TZHAAR_GYM_TOKHAAR_4

NPC_TZHAAR_GYM_TOKHAAR_8:
	msgbox NPC_TZHAAR_GYM_TOKHAAR_Text_3
	goto NPC_TZHAAR_GYM_TOKHAAR_7

NPC_TZHAAR_GYM_TOKHAAR_11:
	msgbox NPC_TZHAAR_GYM_TOKHAAR_Text_4
	goto NPC_TZHAAR_GYM_TOKHAAR_10

NPC_TZHAAR_GYM_TOKHAAR_14:
	msgbox NPC_TZHAAR_GYM_TOKHAAR_Text_5
	setvar VAR_POKESCAPE_TZHAAR_GYM_QUEST, 1
	goto NPC_TZHAAR_GYM_TOKHAAR_13


NPC_TZHAAR_GYM_WAVE_1::
	lock
	msgbox NPC_TZHAAR_GYM_WAVE_1_Text_0
	closemessage
	warp MAP_TZHAAR_CAVES_1, 3, 0, 0
	end


NPC_TZHAAR_GYM_WAVE_2::
	lock
	msgbox NPC_TZHAAR_GYM_WAVE_2_Text_0
	closemessage
	warp MAP_TZHAAR_CAVES_1, 4, 0, 0
	end


NPC_TZHAAR_GYM_WAVE_3::
	lock
	msgbox NPC_TZHAAR_GYM_WAVE_3_Text_0
	closemessage
	warp MAP_TZHAAR_CAVES_1, 0, 0, 0
	end


ENCOUNTER_JAD_GYM::
	lock
	namebox ENCOUNTER_JAD_GYM_Text_0
	playmoncry SPECIES_EKANS, 0
	msgbox ENCOUNTER_JAD_GYM_Text_1
	waitmoncry
	hidenamebox
	closemessage
	delay 1
	setwildbattle SPECIES_TZTOK_JAD, 5, ITEM_FRAGMENT_OF_JAS
	dowildbattleNoCatch
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq ENCOUNTER_JAD_GYM_2
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq ENCOUNTER_JAD_GYM_3
	compare VAR_RESULT, B_OUTCOME_LOST
	goto_if_eq ENCOUNTER_JAD_GYM_4
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq ENCOUNTER_JAD_GYM_5
	end

ENCOUNTER_JAD_GYM_2:
	fadescreen FADE_TO_BLACK
	setvar VAR_POKESCAPE_TZHAAR_GYM_QUEST, 19
	setflag FLAG_TEMP_1
	removeobject 11
	fadescreen FADE_FROM_BLACK
	goto NPC_TZHAAR_GYM_WAVE_3
	closemessage
	end

ENCOUNTER_JAD_GYM_3:
	fadescreen FADE_TO_BLACK
	setvar VAR_POKESCAPE_TZHAAR_GYM_QUEST, 20
	setflag FLAG_TEMP_1
	removeobject 11
	fadescreen FADE_FROM_BLACK
	closemessage
	end

ENCOUNTER_JAD_GYM_4:
	fadescreen FADE_TO_BLACK
	setvar VAR_POKESCAPE_TZHAAR_GYM_QUEST, 1
	fadescreen FADE_FROM_BLACK
	closemessage
	end

ENCOUNTER_JAD_GYM_5:
	namebox ENCOUNTER_JAD_GYM_Text_0
	playmoncry SPECIES_EKANS, 0
	msgbox ENCOUNTER_JAD_GYM_Text_2
	closemessage
	hidenamebox
	msgbox ENCOUNTER_JAD_GYM_Text_3
	msgbox ENCOUNTER_JAD_GYM_Text_4
	msgbox ENCOUNTER_JAD_GYM_Text_5
	closemessage
	setvar VAR_POKESCAPE_TZHAAR_GYM_QUEST, 18
	warp MAP_TZHAAR_CAVES_1, 0, 0, 0
	end


BATTLE_MOD_SARNIE::
	trainerbattle_single TRAINER_MOD_SARNIE, BATTLE_MOD_SARNIE_Text_0, BATTLE_MOD_SARNIE_Text_1
	namebox BATTLE_MOD_SARNIE_Text_2
	msgbox BATTLE_MOD_SARNIE_Text_3
	hidenamebox
	release
	end


NPC_TZHAAR_GYM_TOKHAAR_Text_0:
	.string "TokHaar$"

NPC_TZHAAR_GYM_TOKHAAR_Text_1:
	.string "Go to the Fight Caves.$"

NPC_TZHAAR_GYM_TOKHAAR_Text_2:
	.string "Pathetic, to think you would panic and\n"
	.string "run from the fight caves!\p"
	.string "Try again but next time don't run away\n"
	.string "like a coward.$"

NPC_TZHAAR_GYM_TOKHAAR_Text_3:
	.string "You defeated TzTok Jad!$"

NPC_TZHAAR_GYM_TOKHAAR_Text_4:
	.string "You caught TzTok Jad!$"

NPC_TZHAAR_GYM_TOKHAAR_Text_5:
	.string "Welcome to the Tzhaar Gym.\p"
	.string "If you wish to battle me you must show\n"
	.string "your strength in the Fight Caves.$"

NPC_TZHAAR_GYM_WAVE_1_Text_0:
	.string "All Tzhaar have been defeated.\p"
	.string "WAVE 1 COMPLETE, MOVING TO NEXT WAVE.$"

NPC_TZHAAR_GYM_WAVE_2_Text_0:
	.string "All Tzhaar have been defeated.\p"
	.string "WAVE 2 COMPLETE, MOVING TO NEXT WAVE.$"

NPC_TZHAAR_GYM_WAVE_3_Text_0:
	.string "TzTok Jad has been defeated.\p"
	.string "WAVE 3 COMPLETE, Exiting Caves.$"

ENCOUNTER_JAD_GYM_Text_0:
	.string "JAD$"

ENCOUNTER_JAD_GYM_Text_1:
	.string "TOKTOK RAAWOORR!$"

ENCOUNTER_JAD_GYM_Text_2:
	.string "TOKKRAAWOORR!$"

ENCOUNTER_JAD_GYM_Text_3:
	.string "TzTok Jad does not seem pleased with\n"
	.string "your attempt to escape.$"

ENCOUNTER_JAD_GYM_Text_4:
	.string "The cave begins to shake.$"

ENCOUNTER_JAD_GYM_Text_5:
	.string "The cave has caved in.$"

BATTLE_MOD_SARNIE_Text_0:
	.string "I just got the Fire Cape!\p"
	.string "Let me try it out on you!$"

BATTLE_MOD_SARNIE_Text_1:
	.string "Wow.$"

BATTLE_MOD_SARNIE_Text_2:
	.string "Mod Sarnie$"

BATTLE_MOD_SARNIE_Text_3:
	.string "You should try the special fight wave\n"
	.string "challenges.\p"
	.string "You could get a Fire Cape like me.$"
