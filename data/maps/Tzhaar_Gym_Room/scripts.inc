Tzhaar_Gym_Room_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Tzhaar_Gym_Room_MapScripts_MAP_SCRIPT_ON_TRANSITION
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Tzhaar_Gym_Room_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Tzhaar_Gym_Room_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	return

Tzhaar_Gym_Room_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_POKESCAPE_TZHAAR_GYM_QUEST, 10, TZHAAR_GYM_ROOM_LOST
	map_script_2 VAR_POKESCAPE_TZHAAR_GYM_QUEST, 30, TZHAAR_GYM_ROOM_POST_WIN
	.2byte 0


GIVE_TOKKUL::
	buffernumberstring 0, VAR_TEMP_E
	playfanfare MUS_OBTAIN_B_POINTS
	msgbox GIVE_TOKKUL_Text_0
	waitfanfare
	closemessage
	return


TZHAAR_GYM_ROOM_POST_WIN::
	namebox TZHAAR_GYM_ROOM_POST_WIN_Text_0
	msgbox TZHAAR_GYM_ROOM_POST_WIN_Text_1
	closemessage
	hidenamebox
	setvar VAR_TEMP_E, 5000
	call GIVE_TOKKUL
	namebox TZHAAR_GYM_ROOM_POST_WIN_Text_0
	msgbox TZHAAR_GYM_ROOM_POST_WIN_Text_2
	closemessage
	hidenamebox
	setvar VAR_POKESCAPE_TZHAAR_GYM_QUEST, 35
	release
	end


TZHAAR_GYM_ROOM_LOST::
	applymovement OBJ_EVENT_ID_PLAYER, Movement_InteractFACEUP
	waitmovement 0
	namebox TZHAAR_GYM_ROOM_POST_WIN_Text_0
	msgbox TZHAAR_GYM_ROOM_LOST_Text_0
	setvar VAR_POKESCAPE_TZHAAR_GYM_QUEST, 1
	hidenamebox
	closemessage
	release
	end


NPC_TZHAAR_GYM_TOKHAAR::
	lock
	faceplayer
	namebox NPC_TZHAAR_GYM_TOKHAAR_Text_0
	switch VAR_POKESCAPE_TZHAAR_GYM_QUEST
	case 0, NPC_TZHAAR_GYM_TOKHAAR_3
	case 1, NPC_TZHAAR_GYM_TOKHAAR_4
	case 18, NPC_TZHAAR_GYM_TOKHAAR_5
	case 19, NPC_TZHAAR_GYM_TOKHAAR_6
	case 20, NPC_TZHAAR_GYM_TOKHAAR_7
	case 30, NPC_TZHAAR_GYM_TOKHAAR_8
NPC_TZHAAR_GYM_TOKHAAR_1:
	hidenamebox
	closemessage
	release
	end

NPC_TZHAAR_GYM_TOKHAAR_3:
	msgbox NPC_TZHAAR_GYM_TOKHAAR_Text_1
	goto NPC_TZHAAR_GYM_TOKHAAR_1

NPC_TZHAAR_GYM_TOKHAAR_4:
	msgbox NPC_TZHAAR_GYM_TOKHAAR_Text_2, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne NPC_TZHAAR_GYM_TOKHAAR_9
	goto NPC_TZHAAR_GYM_TOKHAAR_1

NPC_TZHAAR_GYM_TOKHAAR_5:
	msgbox NPC_TZHAAR_GYM_TOKHAAR_Text_4
	goto NPC_TZHAAR_GYM_TOKHAAR_1

NPC_TZHAAR_GYM_TOKHAAR_6:
	msgbox NPC_TZHAAR_GYM_TOKHAAR_Text_5
	goto NPC_TZHAAR_GYM_TOKHAAR_1

NPC_TZHAAR_GYM_TOKHAAR_7:
	msgbox NPC_TZHAAR_GYM_TOKHAAR_Text_6, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne NPC_TZHAAR_GYM_TOKHAAR_11
	goto NPC_TZHAAR_GYM_TOKHAAR_1

NPC_TZHAAR_GYM_TOKHAAR_8:
	msgbox NPC_TZHAAR_GYM_TOKHAAR_Text_12
	goto NPC_TZHAAR_GYM_TOKHAAR_1

NPC_TZHAAR_GYM_TOKHAAR_9:
	msgbox NPC_TZHAAR_GYM_TOKHAAR_Text_3
	goto NPC_TZHAAR_GYM_TOKHAAR_1

NPC_TZHAAR_GYM_TOKHAAR_11:
	msgbox NPC_TZHAAR_GYM_TOKHAAR_Text_7
	hidenamebox
	CALL GYM_BATTLE_TZHAAR_CHAMPION
	namebox NPC_TZHAAR_GYM_TOKHAAR_Text_0
	msgbox NPC_TZHAAR_GYM_TOKHAAR_Text_8
	hidenamebox
	playfanfare MUS_PS_QUEST_COMPLETE
	msgbox NPC_TZHAAR_GYM_TOKHAAR_Text_9
	waitfanfare
	waitmessage
	namebox NPC_TZHAAR_GYM_TOKHAAR_Text_0
	msgbox NPC_TZHAAR_GYM_TOKHAAR_Text_10
	hidenamebox
	giveitem ITEM_TM48, 1
	compare VAR_RESULT, FALSE
	goto_if_eq Common_EventScript_ShowBagIsFull
	namebox NPC_TZHAAR_GYM_TOKHAAR_Text_0
	msgbox NPC_TZHAAR_GYM_TOKHAAR_Text_11
	setflag FLAG_BADGE05_GET
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_MVM_CHAMPIONSHIPS, 4
	call HIDDEN_GROTTO_RESET
	addvar VAR_GAMEMODE_LEVEL_SCALING, 1
	goto NPC_TZHAAR_GYM_TOKHAAR_1


NPC_TZHAAR_GYM_WAVE_1::
	lock
	msgbox NPC_TZHAAR_GYM_WAVE_1_Text_0
	closemessage
	warp MAP_TZHAAR_CAVES_1, 3, 0, 0
	waitstate
	end


NPC_TZHAAR_GYM_WAVE_2::
	lock
	msgbox NPC_TZHAAR_GYM_WAVE_2_Text_0
	closemessage
	warp MAP_TZHAAR_CAVES_1, 4, 0, 0
	waitstate
	end


NPC_TZHAAR_GYM_WAVE_3::
	lock
	msgbox NPC_TZHAAR_GYM_WAVE_3_Text_0
	closemessage
	warp MAP_TZHAAR_CAVES_1, 0, 0, 0
	waitstate
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
	fadescreenswapbuffers FADE_TO_BLACK
	setflag FLAG_TEMP_1
	removeobject 11
	fadescreenswapbuffers FADE_FROM_BLACK
	goto NPC_TZHAAR_GYM_WAVE_3
	closemessage
	end

ENCOUNTER_JAD_GYM_3:
	fadescreenswapbuffers FADE_TO_BLACK
	setflag FLAG_TEMP_1
	removeobject 11
	fadescreenswapbuffers FADE_FROM_BLACK
	closemessage
	end

ENCOUNTER_JAD_GYM_4:
	fadescreenswapbuffers FADE_TO_BLACK
	fadescreenswapbuffers FADE_FROM_BLACK
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
	warp MAP_TZHAAR_CAVES_1, 0, 0, 0
	waitstate
	end


BATTLE_MOD_SARNIE::
	trainerbattle_single TRAINER_MOD_SARNIE, BATTLE_MOD_SARNIE_Text_0, BATTLE_MOD_SARNIE_Text_1
	namebox BATTLE_MOD_SARNIE_Text_2
	msgbox BATTLE_MOD_SARNIE_Text_3
	hidenamebox
	release
	end


NPC_TZHAAR_GYM_LEADER::
	lock
	faceplayer
	namebox TZHAAR_GYM_ROOM_POST_WIN_Text_0
	compare VAR_POKESCAPE_TZHAAR_GYM_QUEST, 0
	goto_if_eq NPC_TZHAAR_GYM_LEADER_2
NPC_TZHAAR_GYM_LEADER_1:
	compare VAR_POKESCAPE_TZHAAR_GYM_QUEST, 1
	goto_if_eq NPC_TZHAAR_GYM_LEADER_5
NPC_TZHAAR_GYM_LEADER_4:
	compare VAR_POKESCAPE_TZHAAR_GYM_QUEST, 10
	goto_if_eq NPC_TZHAAR_GYM_LEADER_11
NPC_TZHAAR_GYM_LEADER_10:
	compare VAR_POKESCAPE_TZHAAR_GYM_QUEST, 30
	goto_if_eq NPC_TZHAAR_GYM_LEADER_16
	compare VAR_POKESCAPE_TZHAAR_GYM_QUEST, 35
	goto_if_eq NPC_TZHAAR_GYM_LEADER_16
NPC_TZHAAR_GYM_LEADER_15:
	hidenamebox
	closemessage
	release
	end

NPC_TZHAAR_GYM_LEADER_2:
	msgbox NPC_TZHAAR_GYM_LEADER_Text_0
	setvar VAR_POKESCAPE_TZHAAR_GYM_QUEST, 1
	msgbox NPC_TZHAAR_GYM_LEADER_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne NPC_TZHAAR_GYM_LEADER_7
	hidenamebox
	closemessage
	release
	end

NPC_TZHAAR_GYM_LEADER_5:
	msgbox NPC_TZHAAR_GYM_LEADER_Text_2, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne NPC_TZHAAR_GYM_LEADER_13
	goto NPC_TZHAAR_GYM_LEADER_4

NPC_TZHAAR_GYM_LEADER_7:
	call TZHAAR_GYMCHALLENGE_START
	goto NPC_TZHAAR_GYM_LEADER_1

NPC_TZHAAR_GYM_LEADER_11:
	msgbox NPC_TZHAAR_GYM_LEADER_Text_3
	setvar VAR_POKESCAPE_TZHAAR_GYM_QUEST, 1
	goto NPC_TZHAAR_GYM_LEADER_10

NPC_TZHAAR_GYM_LEADER_13:
	call TZHAAR_GYMCHALLENGE_START
	goto NPC_TZHAAR_GYM_LEADER_4

NPC_TZHAAR_GYM_LEADER_16:
	msgbox NPC_TZHAAR_GYM_LEADER_Text_4
	goto NPC_TZHAAR_GYM_LEADER_15


TZHAAR_GYMCHALLENGE_START::
	msgbox NPC_TZHAAR_GYM_TOKHAAR_Text_3
	closemessage
	hidenamebox
	setvar VAR_POKESCAPE_TZHAAR_GYM_QUEST, 10
	applymovement 2, Movement_TZHAAR_ESCORT_1
	applymovement 3, Movement_TZHAAR_ESCORT_2
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Movement_InteractFACEDOWN
	waitmovement 0
	namebox TZHAAR_GYMCHALLENGE_START_Text_0
	msgbox TZHAAR_GYMCHALLENGE_START_Text_1
	hidenamebox
	closemessage
	applymovement 3, Movement_TZHAAR_ESCORT_3
	applymovement OBJ_EVENT_ID_PLAYER, Movement_TZHAAR_ESCORT_4
	applymovement 2, Movement_TZHAAR_ESCORT_5
	waitmovement 0
	waitmovement 0
	call FIGHT_CAVES_START
	return


Movement_TZHAAR_ESCORT_1:
	walk_left
	delay_16
	face_up
	step_end

Movement_TZHAAR_ESCORT_2:
	walk_right
	walk_right
	face_up
	step_end

Movement_TZHAAR_ESCORT_3:
	walk_left
	face_right
	delay_16
	walk_left
	walk_left
	walk_up
	walk_up
	walk_up
	walk_right
	walk_right
	walk_right
	walk_up
	walk_up
	set_invisible
	step_end

Movement_TZHAAR_ESCORT_4:
	delay_16
	walk_down
	walk_left
	walk_left
	walk_left
	walk_up
	walk_up
	walk_up
	walk_right
	walk_right
	walk_right
	walk_up
	walk_up
	set_invisible
	step_end

Movement_TZHAAR_ESCORT_5:
	delay_16
	delay_16
	walk_left
	walk_left
	walk_left
	walk_left
	walk_up
	walk_up
	walk_up
	walk_right
	walk_right
	walk_right
	walk_up
	walk_up
	set_invisible
	step_end

TRIGGER_TZHAAR_GYM_LEADER::
	lockall
	applymovement 1, Movement_InteractFACEUP
	applymovement OBJ_EVENT_ID_PLAYER, Movement_InteractFACEDOWN
	waitmovement 0
	namebox TZHAAR_GYM_ROOM_POST_WIN_Text_0
	msgbox TRIGGER_TZHAAR_GYM_LEADER_Text_0
	closemessage
	hidenamebox
	applymovement OBJ_EVENT_ID_PLAYER, Movement_LOCK_WALK_DOWN
	applymovement 1, Movement_InteractFACEDOWN
	waitmovement 0
	releaseall
	end


Movement_LOCK_WALK_DOWN:
	lock_facing_direction
	walk_down
	unlock_facing_direction
	step_end

NPC_TZHAAR_GYM_GAAL_1::
	lock
	faceplayer
	namebox TZHAAR_GYMCHALLENGE_START_Text_0
	goto_if_set FLAG_BADGE03_GET, NPC_TZHAAR_GYM_GAAL_1_2
	msgbox NPC_TZHAAR_GYM_GAAL_1_Text_1
NPC_TZHAAR_GYM_GAAL_1_1:
	closemessage
	hidenamebox
	release
	end

NPC_TZHAAR_GYM_GAAL_1_2:
	msgbox NPC_TZHAAR_GYM_GAAL_1_Text_0
	goto NPC_TZHAAR_GYM_GAAL_1_1


NPC_TZHAAR_GYM_GAAL_2::
	lock
	faceplayer
	namebox TZHAAR_GYMCHALLENGE_START_Text_0
	goto_if_set FLAG_BADGE03_GET, NPC_TZHAAR_GYM_GAAL_2_2
	msgbox NPC_TZHAAR_GYM_GAAL_2_Text_1
NPC_TZHAAR_GYM_GAAL_2_1:
	closemessage
	hidenamebox
	release
	end

NPC_TZHAAR_GYM_GAAL_2_2:
	msgbox NPC_TZHAAR_GYM_GAAL_2_Text_0
	goto NPC_TZHAAR_GYM_GAAL_2_1


GIVE_TOKKUL_Text_0:
	.string "{PLAYER} obtained\n"
	.string "{STR_VAR_1} TOKKUL.$"

TZHAAR_GYM_ROOM_POST_WIN_Text_0:
	.string "Kimit-Kal$"

TZHAAR_GYM_ROOM_POST_WIN_Text_1:
	.string "Congratulations on your victory JalYt.\p"
	.string "Please accept before you go please\n"
	.string "accept this Tokkul as an extra reward\l"
	.string "for defeating our gym.$"

TZHAAR_GYM_ROOM_POST_WIN_Text_2:
	.string "If you wish to prove yourself even more\n"
	.string "you should visit our Fight Caves in the\l"
	.string "westside of our city.\p"
	.string "Otherwise we wish you to have glorious\n"
	.string "battles in your future MvM Challenges.$"

TZHAAR_GYM_ROOM_LOST_Text_0:
	.string "Us Tzhaar have proven Victorious this\n"
	.string "time.\p"
	.string "Come back and challenge us again when\n"
	.string "you are ready.$"

NPC_TZHAAR_GYM_TOKHAAR_Text_0:
	.string "TokHaar-Hok$"

NPC_TZHAAR_GYM_TOKHAAR_Text_1:
	.string "Welcome to the Elder Kiln, MvM\n"
	.string "Challenger.\p"
	.string "I am TokHaar-Hok.\p"
	.string "If you want the Tzhaar Gym badge you\n"
	.string "must defeat me.\p"
	.string "But before that you must prove\n"
	.string "yourself against TzTok-Jad within the\l"
	.string "Fight Caves.$"

NPC_TZHAAR_GYM_TOKHAAR_Text_2:
	.string "Would you like to start your Fight\n"
	.string "Caves gym challenge?$"

NPC_TZHAAR_GYM_TOKHAAR_Text_3:
	.string "Very well, Ga'al will escort you to the\n"
	.string "caves.$"

NPC_TZHAAR_GYM_TOKHAAR_Text_4:
	.string "Pathetic, to think you would panic and\n"
	.string "run from the fight caves!\p"
	.string "Try again but next time don't run away\n"
	.string "like a coward.$"

NPC_TZHAAR_GYM_TOKHAAR_Text_5:
	.string "Impressive, well done MvM Challenger.\p"
	.string "You defeated TzTok-Jad and the Fight\n"
	.string "Caves.\p"
	.string "You may now challenge me, I will give you\n"
	.string "time to prepare.\p"
	.string "Come back when you are ready to face\n"
	.string "me.$"

NPC_TZHAAR_GYM_TOKHAAR_Text_6:
	.string "Are you ready for your battle against\n"
	.string "me?$"

NPC_TZHAAR_GYM_TOKHAAR_Text_7:
	.string "Very well. Show me what you got.$"

NPC_TZHAAR_GYM_TOKHAAR_Text_8:
	.string "You have done very well.\p"
	.string "To mark your triumph, accept a gym\n"
	.string "badge.$"

NPC_TZHAAR_GYM_TOKHAAR_Text_9:
	.string "{PLAYER} received the TZHAAR BADGE\n"
	.string "from TokHaar-Hok.$"

NPC_TZHAAR_GYM_TOKHAAR_Text_10:
	.string "Also have this Scroll.$"

NPC_TZHAAR_GYM_TOKHAAR_Text_11:
	.string "That move is called Power Gem.\p"
	.string "It sparkles just as all our precious\n"
	.string "Gems around the palace do.$"

NPC_TZHAAR_GYM_TOKHAAR_Text_12:
	.string "Hello again.$"

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

NPC_TZHAAR_GYM_LEADER_Text_0:
	.string "Welcome to the Mor-Ul-Rek Gym.\n"
	.string "I am Kimit-Kal.\p"
	.string "If the Tzhaar Badge is what you seek,\n"
	.string "then you must participate in our Gym\l"
	.string "Challenge.\p"
	.string "Battle your way through 5 Waves of my\n"
	.string "brethren then defeat me in battle.$"

NPC_TZHAAR_GYM_LEADER_Text_1:
	.string "Would you like to start your Gym\n"
	.string "challenge?$"

NPC_TZHAAR_GYM_LEADER_Text_2:
	.string "You return JalYt, would you like to\n"
	.string "start your Gym challenge?$"

NPC_TZHAAR_GYM_LEADER_Text_3:
	.string "It seems us Tzhaar have proven\n"
	.string "victorious this time.\p"
	.string "Come back and challenge us again when\n"
	.string "you are ready.$"

NPC_TZHAAR_GYM_LEADER_Text_4:
	.string "Congratulations on your victory JalYt.\p"
	.string "If you wish to prove yourself even more\n"
	.string "you should visit our Fight Caves in the\l"
	.string "westside of our city.\p"
	.string "Otherwise we wish you to have glorious\n"
	.string "battles in your future MvM Challenges.$"

TZHAAR_GYMCHALLENGE_START_Text_0:
	.string "Ga'al$"

TZHAAR_GYMCHALLENGE_START_Text_1:
	.string "Guh, follow us.$"

TRIGGER_TZHAAR_GYM_LEADER_Text_0:
	.string "JalYt, you may not enter.\p"
	.string "Only those who are participating in the\n"
	.string "Gym Challenge may enter that cave.$"

NPC_TZHAAR_GYM_GAAL_1_Text_0:
	.string "The Fight Caves have the same rules as\n"
	.string "this gym challenge.\p"
	.string "It's just a lot harder.$"

NPC_TZHAAR_GYM_GAAL_1_Text_1:
	.string "In this gym challenge you may not use\n"
	.string "any items from your bag during battle.\p"
	.string "You are also not allow to capture our\n"
	.string "brethern.$"

NPC_TZHAAR_GYM_GAAL_2_Text_0:
	.string "Congratulations on your victory JalYt.\p"
	.string "You should try out the Fight Caves!$"

NPC_TZHAAR_GYM_GAAL_2_Text_1:
	.string "In this gym challenge you must battle\n"
	.string "through 5 waves and defeat our\l"
	.string "champion, Kimit-Kal.$"
