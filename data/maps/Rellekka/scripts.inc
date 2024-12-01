Rellekka_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Rellekka_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Rellekka_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setvar VAR_EVOLUTION_MAP_STATE, 4
	return


RAC_QUEST_SAIL_MAN::
	lock
	compare VAR_POKESCAPE_RAC_QUEST_STATE, 0
	goto_if_eq RAC_QUEST_SAIL_MAN_2
RAC_QUEST_SAIL_MAN_1:
	faceplayer
	namebox RAC_QUEST_SAIL_MAN_Text_0
	goto_if_set FLAG_EVENT_TEAM_NEITIZNOT, RAC_QUEST_SAIL_MAN_5
	msgbox RAC_QUEST_SAIL_MAN_Text_2, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne RAC_QUEST_SAIL_MAN_8
RAC_QUEST_SAIL_MAN_7:
	hidenamebox
	release
	end

RAC_QUEST_SAIL_MAN_2:
	goto RAC_QUEST_START
	goto RAC_QUEST_SAIL_MAN_1

RAC_QUEST_SAIL_MAN_5:
	msgbox RAC_QUEST_SAIL_MAN_Text_1
	hidenamebox
	release
	end

RAC_QUEST_SAIL_MAN_8:
	msgbox RAC_QUEST_SAIL_MAN_Text_3
	closemessage
	hidenamebox
	setvar VAR_TEMP_8, 0
	call RAC_BOAT
	warp MAP_JATIZSO, 0, 0, 0
	waitstate
	goto RAC_QUEST_SAIL_MAN_7


RAC_QUEST_SAIL_WOMAN::
	lock
	compare VAR_POKESCAPE_RAC_QUEST_STATE, 0
	goto_if_eq RAC_QUEST_SAIL_WOMAN_2
RAC_QUEST_SAIL_WOMAN_1:
	faceplayer
	namebox RAC_QUEST_SAIL_WOMAN_Text_0
	goto_if_set FLAG_EVENT_TEAM_JATIZSO, RAC_QUEST_SAIL_WOMAN_5
	msgbox RAC_QUEST_SAIL_WOMAN_Text_2, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne RAC_QUEST_SAIL_WOMAN_8
RAC_QUEST_SAIL_WOMAN_7:
	hidenamebox
	release
	end

RAC_QUEST_SAIL_WOMAN_2:
	goto RAC_QUEST_START
	goto RAC_QUEST_SAIL_WOMAN_1

RAC_QUEST_SAIL_WOMAN_5:
	msgbox RAC_QUEST_SAIL_WOMAN_Text_1
	hidenamebox
	release
	end

RAC_QUEST_SAIL_WOMAN_8:
	msgbox RAC_QUEST_SAIL_MAN_Text_3
	closemessage
	hidenamebox
	setvar VAR_TEMP_8, 1
	call RAC_BOAT
	warp MAP_NEITIZNOT, 0, 0, 0
	waitstate
	goto RAC_QUEST_SAIL_WOMAN_7


RAC_BOAT::
	fadescreenswapbuffers FADE_TO_BLACK
	compare VAR_TEMP_8, 0
	goto_if_eq RAC_BOAT_2
RAC_BOAT_1:
	compare VAR_TEMP_8, 1
	goto_if_eq RAC_BOAT_5
RAC_BOAT_4:
	hideobjectat OBJ_EVENT_ID_PLAYER, MAP_RELLEKKA
	fadescreenswapbuffers FADE_FROM_BLACK
	applymovement 22, MOVEMENT_RAC_BOAT
	waitmovement 0
	return

RAC_BOAT_2:
	hideobjectat 21, MAP_RELLEKKA
	goto RAC_BOAT_1

RAC_BOAT_5:
	hideobjectat 20, MAP_RELLEKKA
	goto RAC_BOAT_4


MOVEMENT_RAC_BOAT:
	walk_slow_left
	walk_slow_left
	walk_slow_left
	walk_slow_left
	walk_slow_left
	walk_slow_left
	walk_slow_left
	walk_slow_left
	step_end

RAC_QUEST_SAIL_MAN_Text_0:
	.string "Mord Gunnars$"

RAC_QUEST_SAIL_MAN_Text_1:
	.string "Go away adventurer.\p"
	.string "I have nothing to say to someone who\n"
	.string "thinks Neitiznot artists are better\l"
	.string "than Jatizso artists.$"

RAC_QUEST_SAIL_MAN_Text_2:
	.string "Ah hello adventurer.\p"
	.string "Would you like to board the boat to\n"
	.string "Jatizso?$"

RAC_QUEST_SAIL_MAN_Text_3:
	.string "Very well, hop in!$"

RAC_QUEST_SAIL_WOMAN_Text_0:
	.string "Maria Gunnars$"

RAC_QUEST_SAIL_WOMAN_Text_1:
	.string "Go away adventurer.\p"
	.string "I have nothing to say to someone who\n"
	.string "thinks Jatizso artists are better than\l"
	.string "Neitiznot artists.$"

RAC_QUEST_SAIL_WOMAN_Text_2:
	.string "Ah hello adventurer.\p"
	.string "Would you like to board the boat to\n"
	.string "Neitiznot?$"
