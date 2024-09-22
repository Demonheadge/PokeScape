Jatizso_Cave_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Jatizso_Cave_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Jatizso_Cave_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setvar VAR_EVOLUTION_MAP_STATE, 11
	call JATIZSO_CAVE_STATE
	return


JATIZSO_CAVE_STATE::
	goto_if_set FLAG_EVENT_TEAM_JATIZSO, JATIZSO_CAVE_STATE_1
	return

JATIZSO_CAVE_STATE_1:
	compare VAR_POKESCAPE_RAC_QUEST_JAGEXMODS, 25
	goto_if_eq JATIZSO_CAVE_STATE_3
	compare VAR_POKESCAPE_RAC_QUEST_JAGEXMODS, 30
	goto_if_eq JATIZSO_CAVE_STATE_3
	compare VAR_POKESCAPE_RAC_QUEST_JAGEXMODS, 35
	goto_if_eq JATIZSO_CAVE_STATE_3
	compare VAR_POKESCAPE_RAC_QUEST_JAGEXMODS, 40
	goto_if_eq JATIZSO_CAVE_STATE_3
	return

JATIZSO_CAVE_STATE_3:
	addobject 2
	setobjectxy 2, 2, 3
	setobjectxyperm 2, 2, 3
	setobjectmovementtype 2, MOVEMENT_TYPE_FACE_UP
	addobject 1
	setobjectxy 1, 2, 2
	setobjectxyperm 1, 2, 2
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_DOWN
	return


JATIZSO_NPC_Tazim::
	compare VAR_POKESCAPE_RAC_QUEST_JAGEXMODS, 30
	goto_if_eq JATIZSO_NPC_Tazim_2
	compare VAR_POKESCAPE_RAC_QUEST_JAGEXMODS, 35
	goto_if_eq JATIZSO_NPC_Tazim_2
	compare VAR_POKESCAPE_RAC_QUEST_JAGEXMODS, 40
	goto_if_eq JATIZSO_NPC_Tazim_2
JATIZSO_NPC_Tazim_1:
	compare VAR_POKESCAPE_RAC_QUEST_STATE, 20
	goto_if_eq JATIZSO_NPC_Tazim_10
JATIZSO_NPC_Tazim_8:
	lock
	faceplayer
	namebox JATIZSO_NPC_Tazim_Text_0
	msgbox JATIZSO_NPC_Tazim_Text_3
	closemessage
	hidenamebox
	checkitem ITEM_TEA, 1
	compare VAR_RESULT, 0
	goto_if_ne JATIZSO_NPC_Tazim_16
	release
	end

JATIZSO_NPC_Tazim_2:
	lock
	faceplayer
	namebox JATIZSO_NPC_Tazim_Text_0
	msgbox JATIZSO_NPC_Tazim_Text_1
	closemessage
	hidenamebox
	goto JATIZSO_NPC_Tazim_1

JATIZSO_NPC_Tazim_9:
	msgbox JATIZSO_NPC_Tazim_Text_2
	closemessage
	end

JATIZSO_NPC_Tazim_10:
	goto_if_set FLAG_EVENT_TEAM_JATIZSO, JATIZSO_NPC_Tazim_12
	goto JATIZSO_NPC_Tazim_8

JATIZSO_NPC_Tazim_12:
	compare VAR_POKESCAPE_RAC_QUEST_JAGEXMODS, 25
	goto_if_eq JATIZSO_NPC_Tazim_9
	goto JATIZSO_NPC_Tazim_8

JATIZSO_NPC_Tazim_16:
	namebox JATIZSO_NPC_Tazim_Text_0
	msgbox JATIZSO_NPC_Tazim_Text_4
	hidenamebox
	closemessage
	msgbox JATIZSO_NPC_Tazim_Text_5
	closemessage
	namebox JATIZSO_NPC_Tazim_Text_0
	msgbox JATIZSO_NPC_Tazim_Text_6
	hidenamebox
	closemessage
	fadescreenswapbuffers FADE_TO_BLACK
	setvar VAR_POKESCAPE_RAC_QUEST_JAGEXMODS, 25
	addobject 2
	setobjectxy 2, 2, 3
	setobjectxyperm 2, 2, 3
	setobjectmovementtype 2, MOVEMENT_TYPE_FACE_UP
	addobject 1
	setobjectxy 1, 2, 2
	setobjectxyperm 1, 2, 2
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_DOWN
	fadescreenswapbuffers FADE_FROM_BLACK
	release
	end


JATIZSO_NPC_Snail::
	compare VAR_POKESCAPE_RAC_QUEST_JAGEXMODS, 30
	goto_if_eq JATIZSO_NPC_Snail_2
	compare VAR_POKESCAPE_RAC_QUEST_JAGEXMODS, 35
	goto_if_eq JATIZSO_NPC_Snail_2
	compare VAR_POKESCAPE_RAC_QUEST_JAGEXMODS, 40
	goto_if_eq JATIZSO_NPC_Snail_2
	compare VAR_POKESCAPE_RAC_QUEST_STATE, 20
	goto_if_eq JATIZSO_NPC_Snail_10
JATIZSO_NPC_Snail_8:
	lock
	faceplayer
	namebox JATIZSO_NPC_Snail_Text_0
	playmoncry SPECIES_SHELLDER, 0
	msgbox JATIZSO_NPC_Snail_Text_4
	waitmoncry
	hidenamebox
	msgbox JATIZSO_NPC_Snail_Text_5
	closemessage
	hidenamebox
	release
	end

JATIZSO_NPC_Snail_2:
	lock
	faceplayer
	namebox JATIZSO_NPC_Snail_Text_0
	playmoncry SPECIES_SHELLDER, 0
	msgbox JATIZSO_NPC_Snail_Text_1
	waitmoncry
	hidenamebox
	msgbox JATIZSO_NPC_Snail_Text_2
	closemessage
	hidenamebox
	release
	end

JATIZSO_NPC_Snail_9:
	msgbox JATIZSO_NPC_Snail_Text_3
	closemessage
	end

JATIZSO_NPC_Snail_10:
	goto_if_set FLAG_EVENT_TEAM_JATIZSO, JATIZSO_NPC_Snail_12
	goto JATIZSO_NPC_Snail_8

JATIZSO_NPC_Snail_12:
	compare VAR_POKESCAPE_RAC_QUEST_JAGEXMODS, 25
	goto_if_eq JATIZSO_NPC_Snail_9
	goto JATIZSO_NPC_Snail_8


NPC_STAN_FROGEEL_BURGER::
	lock
	faceplayer
	namebox NPC_STAN_FROGEEL_BURGER_Text_0
	msgbox NPC_STAN_FROGEEL_BURGER_Text_1
	hidenamebox
	closemessage
	giveitem ITEM_FROGEEL_BURGER, 1
	release
	end


JATIZSO_NPC_Tazim_Text_0:
	.string "Elizabeth$"

JATIZSO_NPC_Tazim_Text_1:
	.string "Thank you for the Tea.$"

JATIZSO_NPC_Tazim_Text_2:
	.string "Elizabeth seems too distracted.$"

JATIZSO_NPC_Tazim_Text_3:
	.string "Stay back!\p"
	.string "I want no part of this, my adventuring\n"
	.string "days are over!\p"
	.string "Just leave me and Snaily alone!$"

JATIZSO_NPC_Tazim_Text_4:
	.string "…{PAUSE 15}…{PAUSE 15}…\p"
	.string "Sniff, Sniff…\p"
	.string "What is that smell.\p"
	.string "GIVE IT TO ME!$"

JATIZSO_NPC_Tazim_Text_5:
	.string "Elizabeth snatches the Tea from your\n"
	.string "backpack.$"

JATIZSO_NPC_Tazim_Text_6:
	.string "This!\p"
	.string "This PLEASES ME!\p"
	.string "Here Snaily try some!$"

JATIZSO_NPC_Snail_Text_0:
	.string "Snaily$"

JATIZSO_NPC_Snail_Text_1:
	.string "SLURRPY SLURP!!$"

JATIZSO_NPC_Snail_Text_2:
	.string "It seems to be thankful for the drink.$"

JATIZSO_NPC_Snail_Text_3:
	.string "Snaily seems too distracted.$"

JATIZSO_NPC_Snail_Text_4:
	.string "SLURRP!$"

JATIZSO_NPC_Snail_Text_5:
	.string "It seems to be very defensive of\n"
	.string "Elizabeth.$"

NPC_STAN_FROGEEL_BURGER_Text_0:
	.string "Hyper Stan$"

NPC_STAN_FROGEEL_BURGER_Text_1:
	.string "Fresh Frogeel burgers!\p"
	.string "Get your fresh Frogeel burgers!\p"
	.string "Here take one, it is on the house.\n"
	.string "Demonheadge did it.$"
