Tzhaar_1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Tzhaar_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Tzhaar_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Tzhaar_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setvar VAR_EVOLUTION_MAP_STATE, 8
	call TZHAAR_STATE
	return

Tzhaar_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_POKESCAPE_STORYMODE_PROGRESS, 150, STORYMODE_TZHAAR_NPC
	.2byte 0


TZHAAR_STATE::
	setflag FLAG_TEMP_1C
	removeobject 25
	compare VAR_MITHRILMAN_STATE, 10
	goto_if_eq TZHAAR_STATE_2
TZHAAR_STATE_1:
	goto_if_set FLAG_TZHAAR_FOLLOW_GYM_INFO, TZHAAR_STATE_5
TZHAAR_STATE_4:
	compare VAR_POKESCAPE_STORYMODE_PROGRESS, 150
	goto_if_eq TZHAAR_STATE_7
	setflag FLAG_TEMP_1F
	return

TZHAAR_STATE_2:
	clearflag FLAG_TEMP_1C
	addobject 25
	goto TZHAAR_STATE_1

TZHAAR_STATE_5:
	setobjectxyperm 19, 4, 32
	goto TZHAAR_STATE_4

TZHAAR_STATE_7:
	clearflag FLAG_TEMP_1F
	return


TZHAAR_HEAL_ZONE::
	setrespawn HEAL_LOCATION_TZHAAR_1F
	setvar VAR_TEMP_0, 1
	end


STORYMODE_TZHAAR_NPC::
	applymovement OBJ_EVENT_ID_PLAYER, Movement_InteractFACEUP
	waitmovement 0
	namebox STORYMODE_TZHAAR_NPC_Text_0
	msgbox STORYMODE_TZHAAR_NPC_Text_1
	closemessage
	hidenamebox
	applymovement 26, HAM_EVENT_CRANDOR_VOLCANO_31
	waitmovement 0
	setvar VAR_POKESCAPE_STORYMODE_PROGRESS, 155
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_MAIN_STORY, 9
	setflag FLAG_TEMP_1F
	removeobject 26
	setrespawn HEAL_LOCATION_TZHAAR_1F
	release
	end


HAM_EVENT_CRANDOR_VOLCANO_31:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

TZHAAR_GAAL::
	faceplayer
	namebox TZHAAR_GAAL_Text_0
	msgbox TZHAAR_GAAL_Text_1
	closemessage
	hidenamebox
	release
	end


TRIGGER_TZHAAR_GYM_GAAL_1::
	faceplayer
	namebox TZHAAR_GAAL_Text_0
	msgbox TRIGGER_TZHAAR_GYM_GAAL_1_Text_0
	closemessage
	hidenamebox
	release
	end


TZHAAR_FIGHTCAVES_NPC::
	faceplayer
	namebox STORYMODE_TZHAAR_NPC_Text_0
	msgbox TZHAAR_FIGHTCAVES_NPC_Text_0
	goto_if_set FLAG_BADGE03_GET, TZHAAR_FIGHTCAVES_NPC_2
	msgbox TZHAAR_FIGHTCAVES_NPC_Text_6
TZHAAR_FIGHTCAVES_NPC_1:
	closemessage
	hidenamebox
	release
	end

TZHAAR_FIGHTCAVES_NPC_2:
	msgbox TZHAAR_FIGHTCAVES_NPC_Text_1
	multichoicedefault 1, 0, MULTI_TZHAAR_FIGHTCAVES, 0, 0
	switch VAR_RESULT
	case 0, TZHAAR_FIGHTCAVES_NPC_6
	case 1, TZHAAR_FIGHTCAVES_NPC_7
	case 2, TZHAAR_FIGHTCAVES_NPC_8
	goto TZHAAR_FIGHTCAVES_NPC_1

TZHAAR_FIGHTCAVES_NPC_6:
	msgbox TZHAAR_FIGHTCAVES_NPC_Text_2
	msgbox TZHAAR_FIGHTCAVES_NPC_Text_3
	goto TZHAAR_FIGHTCAVES_NPC_1

TZHAAR_FIGHTCAVES_NPC_7:
	msgbox TZHAAR_FIGHTCAVES_NPC_Text_4
	goto TZHAAR_FIGHTCAVES_NPC_1

TZHAAR_FIGHTCAVES_NPC_8:
	msgbox TZHAAR_FIGHTCAVES_NPC_Text_5
	goto TZHAAR_FIGHTCAVES_NPC_1


TZHAAR_GYM_NPC::
	lock
	faceplayer
	namebox TZHAAR_GYM_NPC_Text_0
	msgbox TZHAAR_GYM_NPC_Text_1
	closemessage
	hidenamebox
	release
	end


TZHAAR_NPC_1::
	faceplayer
	namebox STORYMODE_TZHAAR_NPC_Text_0
	goto_if_unset FLAG_TZHAAR_FOLLOW_GYM_INFO, TZHAAR_NPC_1_2
	random 3
	switch VAR_RESULT
	case 0, TZHAAR_NPC_1_9
	case 1, TZHAAR_NPC_1_10
	case 2, TZHAAR_NPC_1_11
TZHAAR_NPC_1_7:
	closemessage
	hidenamebox
TZHAAR_NPC_1_1:
	release
	end

TZHAAR_NPC_1_2:
	msgbox TZHAAR_NPC_1_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne TZHAAR_NPC_1_5
	goto TZHAAR_NPC_1_1

TZHAAR_NPC_1_5:
	msgbox TZHAAR_NPC_1_Text_1
	closemessage
	hidenamebox
	applymovement 19, MOVEMENT_TZHAAR_GYMWALK_1
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
	compare VAR_TEMP_1, 14
	goto_if_eq TZHAAR_NPC_1_13
	compare VAR_TEMP_1, 16
	goto_if_eq TZHAAR_NPC_1_14
	compare VAR_TEMP_2, 25
	goto_if_eq TZHAAR_NPC_1_15
TZHAAR_NPC_1_12:
	waitmovement 0
	msgbox TZHAAR_NPC_1_Text_2
	closemessage
	hidenamebox
	applymovement 19, MOVEMENT_TZHAAR_GYMWALK_6
	waitmovement 0
	setflag FLAG_TZHAAR_FOLLOW_GYM_INFO
	goto TZHAAR_NPC_1_1

TZHAAR_NPC_1_9:
	msgbox TZHAAR_NPC_1_Text_3
	goto TZHAAR_NPC_1_7

TZHAAR_NPC_1_10:
	msgbox TZHAAR_NPC_1_Text_4
	goto TZHAAR_NPC_1_7

TZHAAR_NPC_1_11:
	msgbox TZHAAR_NPC_1_Text_5
	goto TZHAAR_NPC_1_7

TZHAAR_NPC_1_13:
	applymovement OBJ_EVENT_ID_PLAYER, MOVEMENT_TZHAAR_GYMWALK_3
	waitmovement OBJ_EVENT_ID_PLAYER
	applymovement OBJ_EVENT_ID_PLAYER, MOVEMENT_TZHAAR_GYMWALK_5
	goto TZHAAR_NPC_1_12

TZHAAR_NPC_1_14:
	applymovement OBJ_EVENT_ID_PLAYER, MOVEMENT_TZHAAR_GYMWALK_2
	waitmovement OBJ_EVENT_ID_PLAYER
	applymovement OBJ_EVENT_ID_PLAYER, MOVEMENT_TZHAAR_GYMWALK_5
	goto TZHAAR_NPC_1_12

TZHAAR_NPC_1_15:
	applymovement OBJ_EVENT_ID_PLAYER, MOVEMENT_TZHAAR_GYMWALK_4
	goto TZHAAR_NPC_1_12


MOVEMENT_TZHAAR_GYMWALK_1:
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	walk_down
	walk_left
	walk_down
	walk_left
	walk_down
	walk_left
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	face_right
	step_end

MOVEMENT_TZHAAR_GYMWALK_2:
	walk_left
	step_end

MOVEMENT_TZHAAR_GYMWALK_3:
	walk_right
	step_end

MOVEMENT_TZHAAR_GYMWALK_4:
	lock_facing_direction
	walk_left
	unlock_facing_direction
	walk_right
	walk_down
	walk_left
	walk_left
	walk_left
	walk_down
	walk_left
	walk_down
	walk_left
	walk_down
	walk_left
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

MOVEMENT_TZHAAR_GYMWALK_5:
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	walk_down
	walk_left
	walk_down
	walk_left
	walk_down
	walk_left
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

MOVEMENT_TZHAAR_GYMWALK_6:
	walk_down
	walk_down
	face_up
	step_end

TZHAAR_NPC_2::
	lock
	faceplayer
	namebox STORYMODE_TZHAAR_NPC_Text_0
	msgbox TZHAAR_NPC_2_Text_0
	closemessage
	hidenamebox
	release
	end


TZHAAR_NPC_3::
	faceplayer
	namebox STORYMODE_TZHAAR_NPC_Text_0
	msgbox TZHAAR_NPC_3_Text_0
	closemessage
	hidenamebox
	release
	end


TZHAAR_NPC_4::
	faceplayer
	namebox STORYMODE_TZHAAR_NPC_Text_0
	msgbox TZHAAR_NPC_4_Text_0
	closemessage
	hidenamebox
	release
	end


TZHAAR_NPC_5::
	faceplayer
	namebox STORYMODE_TZHAAR_NPC_Text_0
	msgbox TZHAAR_NPC_5_Text_0
	closemessage
	hidenamebox
	release
	end


TZHAAR_NPC_6::
	faceplayer
	namebox STORYMODE_TZHAAR_NPC_Text_0
	msgbox TZHAAR_NPC_6_Text_0
	closemessage
	hidenamebox
	release
	end


TZHAAR_NPC_7::
	faceplayer
	namebox STORYMODE_TZHAAR_NPC_Text_0
	msgbox TZHAAR_NPC_7_Text_0
	closemessage
	hidenamebox
	release
	end


TZHAAR_NPC_8::
	faceplayer
	namebox STORYMODE_TZHAAR_NPC_Text_0
	msgbox TZHAAR_NPC_8_Text_0
	closemessage
	hidenamebox
	release
	end


TZHAAR_NPC_9::
	lock
	faceplayer
	namebox STORYMODE_TZHAAR_NPC_Text_0
	msgbox TZHAAR_NPC_9_Text_0
	closemessage
	hidenamebox
	release
	end


TZHAAR_NPC_10::
	lock
	faceplayer
	namebox STORYMODE_TZHAAR_NPC_Text_0
	msgbox TZHAAR_NPC_10_Text_0
	closemessage
	hidenamebox
	release
	end


TZHAAR_NPC_11::
	lock
	faceplayer
	namebox STORYMODE_TZHAAR_NPC_Text_0
	msgbox TZHAAR_NPC_11_Text_0
	closemessage
	hidenamebox
	release
	end


TZHAAR_NPC_RUNE_ARMOUR::
	lock
	faceplayer
	namebox TZHAAR_NPC_RUNE_ARMOUR_Text_0
	msgbox TZHAAR_NPC_RUNE_ARMOUR_Text_1
	closemessage
	hidenamebox
	release
	end


TZHAAR_NPC_12::
	lock
	faceplayer
	namebox STORYMODE_TZHAAR_NPC_Text_0
	msgbox TZHAAR_NPC_12_Text_0
	closemessage
	hidenamebox
	release
	end


TZHAAR_NPC_BANKER::
	lock
	faceplayer
	namebox STORYMODE_TZHAAR_NPC_Text_0
	msgbox TZHAAR_NPC_BANKER_Text_0
	closemessage
	hidenamebox
	goto BANK_OPTIONS
	release
	end


TZHAAR_NPC_13::
	faceplayer
	namebox TZHAAR_NPC_13_Text_0
	msgbox TZHAAR_NPC_13_Text_1
	closemessage
	hidenamebox
	release
	end


TZHAAR_NPC_14::
	faceplayer
	namebox STORYMODE_TZHAAR_NPC_Text_0
	msgbox TZHAAR_NPC_14_Text_0
	closemessage
	hidenamebox
	release
	end


TZHAAR_NPC_15::
	faceplayer
	namebox STORYMODE_TZHAAR_NPC_Text_0
	msgbox TZHAAR_NPC_15_Text_0
	closemessage
	hidenamebox
	release
	end


TZHAAR_OZAN::
	faceplayer
	namebox TZHAAR_OZAN_Text_0
	msgbox TZHAAR_OZAN_Text_1
	closemessage
	hidenamebox
	release
	end


TZHAAR_ZANIK::
	faceplayer
	namebox TZHAAR_ZANIK_Text_0
	msgbox TZHAAR_ZANIK_Text_1
	closemessage
	hidenamebox
	release
	end


TZHAAR_OUTSIDE_1::
	faceplayer
	namebox STORYMODE_TZHAAR_NPC_Text_0
	msgbox TZHAAR_OUTSIDE_1_Text_0
	closemessage
	hidenamebox
	release
	end


TZHAAR_OUTSIDE_2::
	faceplayer
	namebox STORYMODE_TZHAAR_NPC_Text_0
	msgbox TZHAAR_OUTSIDE_2_Text_0
	closemessage
	hidenamebox
	release
	end


TZHAAR_SUMMONER::
	faceplayer
	namebox TZHAAR_SUMMONER_Text_0
	msgbox TZHAAR_SUMMONER_Text_1
	closemessage
	hidenamebox
	release
	end


TZHAAR_IRONMAN::
	faceplayer
	namebox TZHAAR_IRONMAN_Text_0
	msgbox TZHAAR_IRONMAN_Text_1
	closemessage
	hidenamebox
	release
	end


TZHAAR_ARCHAEOLOGIST::
	faceplayer
	namebox TZHAAR_ARCHAEOLOGIST_Text_0
	msgbox TZHAAR_ARCHAEOLOGIST_Text_1
	closemessage
	hidenamebox
	release
	end


TZHAAR_LANGUAGE_BOOK::
	msgbox TZHAAR_LANGUAGE_BOOK_Text_0
	closemessage
	hidenamebox
	release
	end


TZHAAR_SIGNPOST_1::
	msgbox TZHAAR_SIGNPOST_1_Text_0
	closemessage
	hidenamebox
	release
	end


TZHAAR_SIGNPOST_2::
	msgbox TZHAAR_SIGNPOST_2_Text_0
	closemessage
	hidenamebox
	release
	end


TRIGGER_Mithrilman_TZHAAR::
	lockall
	playse SE_PIN
	applymovement 25, Movement_Tzhaar_Mithrilman_1
	waitmovement 0
	waitse
	applymovement 25, Movement_Tzhaar_Mithrilman_2
	waitmovement 0
	goto Mithrilman_TZHAAR1
	end


Movement_Tzhaar_Mithrilman_1:
	emote_exclamation_mark
	face_left
	step_end

Movement_Tzhaar_Mithrilman_2:
	walk_down
	walk_left
	step_end

Mithrilman_TZHAAR1::
	playbgm MUS_ENCOUNTER_MAY, 1
	namebox Mithrilman_TZHAAR1_Text_0
	msgbox Mithrilman_TZHAAR1_Text_1
	trainerbattle_no_intro TRAINER_MITHRILMAN3, Mithrilman_TZHAAR1_Text_2
	namebox Mithrilman_TZHAAR1_Text_0
	msgbox Mithrilman_TZHAAR1_Text_3
	waitmessage
	closemessage
	hidenamebox
	fadescreenswapbuffers FADE_TO_BLACK
	removeobject 2
	setvar VAR_MITHRILMAN_STATE, 15
	setflag FLAG_TEMP_1C
	removeobject 25
	fadescreenswapbuffers FADE_FROM_BLACK
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_MITHRILMAN_QUEST, 2
	playse SE_PIN
	applymovement OBJ_EVENT_ID_PLAYER, MOVEMENT_QUESTIONMARK
	waitmovement 0
	waitse
	msgbox Mithrilman_TZHAAR1_Text_4
	finditem ITEM_CHAOS_RUNE, 1
	savebgm MUS_DUMMY
	fadedefaultbgm
	release
	end


STORYMODE_TZHAAR_NPC_Text_0:
	.string "Tzhaar$"

STORYMODE_TZHAAR_NPC_Text_1:
	.string "JalYt, are you well?\p"
	.string "We wanted to thank you for chasing off\n"
	.string "those pink-coloured JalYt's.\p"
	.string "They have been very destructive to the\n"
	.string "area and attacking our kind.\p"
	.string "Feel free to use our facilities, and if\n"
	.string "you are an MvM challenger we have a gym\l"
	.string "located to the west of here.\p"
	.string "We thank you again.\p"
	.string "Goodbye.$"

TZHAAR_GAAL_Text_0:
	.string "Ga'al$"

TZHAAR_GAAL_Text_1:
	.string "Guh?\p"
	.string "TzHaar?$"

TRIGGER_TZHAAR_GYM_GAAL_1_Text_0:
	.string "Allow us to escort you back to the\n"
	.string "Tzhaar City.$"

TZHAAR_FIGHTCAVES_NPC_Text_0:
	.string "Welcome to the Tzhaar Fight Caves!$"

TZHAAR_FIGHTCAVES_NPC_Text_1:
	.string "What would you like to do?$"

TZHAAR_FIGHTCAVES_NPC_Text_2:
	.string "Good luck JalYt!$"

TZHAAR_FIGHTCAVES_NPC_Text_3:
	.string "SORRY THIS FEATURE IS CURRENTLY WIP.$"

TZHAAR_FIGHTCAVES_NPC_Text_4:
	.string "Our Fight Caves consist of 63 rounds of\n"
	.string "constant battles with our brethern,\l"
	.string "getting harder the higher the wave.\p"
	.string "Your goal is to make it to the end of\n"
	.string "the waves.\p"
	.string "If you lose, you must start again from\n"
	.string "the beginning.\p"
	.string "If you do you will be rewarded and known\n"
	.string "as a champion amoung us Tzhaar.$"

TZHAAR_FIGHTCAVES_NPC_Text_5:
	.string "Very well.$"

TZHAAR_FIGHTCAVES_NPC_Text_6:
	.string "Only those with the Tzhaar Badge may\n"
	.string "enter.$"

TZHAAR_GYM_NPC_Text_0:
	.string "Ga'Al$"

TZHAAR_GYM_NPC_Text_1:
	.string "Welcome to the Tzhaar Gym.$"

TZHAAR_NPC_1_Text_0:
	.string "We Tzhaar are strong.\p"
	.string "Our strongest participate in what you\n"
	.string "call MvM Championships.\p"
	.string "We even have a gym located down this\n"
	.string "corridor.\p"
	.string "Would you like me to show you?$"

TZHAAR_NPC_1_Text_1:
	.string "Okay Jalyt, follow me.$"

TZHAAR_NPC_1_Text_2:
	.string "Here we are, this is the Tzhaar Gym. Our\n"
	.string "champion is one of the strongest\l"
	.string "Tzhaar!\p"
	.string "I will be over here if you have anymore\n"
	.string "questions about the gym.$"

TZHAAR_NPC_1_Text_3:
	.string "The Tzhaar Gym challenge has 5 waves\n"
	.string "you must battle through before you can\l"
	.string "battle our champion.$"

TZHAAR_NPC_1_Text_4:
	.string "Our champion knows a move that will do\n"
	.string "double damage if your monsters are\l"
	.string "burnt.\p"
	.string "So watch out for that!$"

TZHAAR_NPC_1_Text_5:
	.string "Our Fight Caves are basically just a\n"
	.string "harder version of the gym challenge.\p"
	.string "But in order to participate in them you\n"
	.string "must first have our gym badge.$"

TZHAAR_NPC_2_Text_0:
	.string "Through here is the Elder Kiln.\p"
	.string "This is for Tzhaar only.\p"
	.string "You are not Tzhaar.$"

TZHAAR_NPC_3_Text_0:
	.string "Ever since we have participated in the\n"
	.string "MvM championships there have been many\l"
	.string "of your kind passing through our city.\p"
	.string "We have had to reinforce our tunnels\n"
	.string "for safety.$"

TZHAAR_NPC_4_Text_0:
	.string "If you wish to heal check out our bank\n"
	.string "by the Fight Caves to the south east.$"

TZHAAR_NPC_5_Text_0:
	.string "Be careful, many of your kind get lost\n"
	.string "in city.\p"
	.string "If you get lost try talking to us.$"

TZHAAR_NPC_6_Text_0:
	.string "To the north are our sacred Kilns.\p"
	.string "To the west leads deep into the\n"
	.string "volcano's inferno.\p"
	.string "To the south-east leads to the Fight\n"
	.string "Caves.\p"
	.string "To the south leads to the island.\p"
	.string "So many ways to go, which way will you\n"
	.string "take?$"

TZHAAR_NPC_7_Text_0:
	.string "I have to constantly clear this\n"
	.string "corridor as we get cave-in's quite\l"
	.string "often.$"

TZHAAR_NPC_8_Text_0:
	.string "While we like to fight, we also like to\n"
	.string "make friends.\p"
	.string "Will you be our friend?$"

TZHAAR_NPC_9_Text_0:
	.string "When defeated we Tzhaar turn into\n"
	.string "TokKul.\p"
	.string "Which is what we use for currency\n"
	.string "around here.\p"
	.string "But for all of your MvM supplies we\n"
	.string "charge you the regular GP.$"

TZHAAR_NPC_10_Text_0:
	.string "I could have swore I heard this TokKul\n"
	.string "talking to me.\p"
	.string "Eh, probably nothing.$"

TZHAAR_NPC_11_Text_0:
	.string "There are 3 different races.\p"
	.string "TokHaar, Jal and Tzhaar.\p"
	.string "There are also the Ga'al, they are new.\p"
	.string "So I suppose there are 4 now.$"

TZHAAR_NPC_RUNE_ARMOUR_Text_0:
	.string "Choob$"

TZHAAR_NPC_RUNE_ARMOUR_Text_1:
	.string "These Fight Caves are so hard.\p"
	.string "I keep getting 1-hit…$"

TZHAAR_NPC_12_Text_0:
	.string "These tunnels lead to deep into the\n"
	.string "heart of the volcano.\p"
	.string "You are not ready to enter yet.$"

TZHAAR_NPC_BANKER_Text_0:
	.string "Greetings, welcome to the Bank of\n"
	.string "Tzhaar!\p"
	.string "We are learning new things from this\n"
	.string "JalYt.\p"
	.string "What can I help you with today?$"

TZHAAR_NPC_13_Text_0:
	.string "Tzhaar-Ket$"

TZHAAR_NPC_13_Text_1:
	.string "JalYt, beyond here the tunnels are\n"
	.string "unstable and our kind may attack you.\p"
	.string "Proceed at your own risk.$"

TZHAAR_NPC_14_Text_0:
	.string "There are rumours of TzHaar who left\n"
	.string "our city centuries ago and settled in a\l"
	.string "volcano somewhere to the west.\p"
	.string "I wonder what life is like for them\n"
	.string "compared to here.$"

TZHAAR_NPC_15_Text_0:
	.string "We TzHaar place our eggs in the lava to\n"
	.string "uncover our ancestors' memories.\p"
	.string "But some TzHaar placed eggs too deep\n"
	.string "and what hatched from the eggs were\l"
	.string "feral monsters who fought each other.\p"
	.string "I think they've now been locked away in\n"
	.string "separate tunnels for adventurers to\l"
	.string "try and tame.$"

TZHAAR_OZAN_Text_0:
	.string "Ozan$"

TZHAAR_OZAN_Text_1:
	.string "I've been adventuring with a goblin\n"
	.string "friend called Zanik lately.\p"
	.string "She says a brave adventurer saved her\n"
	.string "city and defeated an evil god, and when\l"
	.string "I look into those big eyes I can't\l"
	.string "believe she's exaggerating.\p"
	.string "I am sure she's around here somewhere.$"

TZHAAR_ZANIK_Text_0:
	.string "Zanik$"

TZHAAR_ZANIK_Text_1:
	.string "I have been fighting in the Fight Caves.\p"
	.string "I haven't gotten to the end yet though.\p"
	.string "They say there's some huge creature\n"
	.string "called TzTok-Jad.$"

TZHAAR_OUTSIDE_1_Text_0:
	.string "JalYt, are you here to visit our city?\p"
	.string "We put up a sign so your kind can find\n"
	.string "it.$"

TZHAAR_OUTSIDE_2_Text_0:
	.string "Is the lava too hot for you?\p"
	.string "We find that it is too cold out here.\p"
	.string "We think we might go back into the city\n"
	.string "instead.$"

TZHAAR_SUMMONER_Text_0:
	.string "Summoner$"

TZHAAR_SUMMONER_Text_1:
	.string "They said there was a gym in the\n"
	.string "Volcano on Karamja.\p"
	.string "But I don't see any gym!\p"
	.string "All I see are rocks and monsters.$"

TZHAAR_IRONMAN_Text_0:
	.string "Ironman$"

TZHAAR_IRONMAN_Text_1:
	.string "I am currently restricted from entering\n"
	.string "the Tzhaar city.\p"
	.string "Oh, it's not because they aren't\n"
	.string "inviting.\p"
	.string "It's just the rules I have imposed on\n"
	.string "myself.\p"
	.string "Makes me feel more accomplished if I\n"
	.string "survive on my own instead of relying on\l"
	.string "others, ya know?$"

TZHAAR_ARCHAEOLOGIST_Text_0:
	.string "Archaeologist$"

TZHAAR_ARCHAEOLOGIST_Text_1:
	.string "I've had to translate the signposts the\n"
	.string "Tzhaar have been putting up.\p"
	.string "As they are writing it in their own\n"
	.string "language and confusing all the MvM\l"
	.string "challengers.$"

TZHAAR_LANGUAGE_BOOK_Text_0:
	.string "It is a book containing a list of\n"
	.string "commonly used words for the Tzhaar\l"
	.string "language.\p"
	.string "JalYt - Human.\n"
	.string "Mor Ul Rek - Tzhaar City.\p"
	.string "Kimit-zil - Familiar.\p"
	.string "The book seems unfinished.$"

TZHAAR_SIGNPOST_1_Text_0:
	.string "Mor Ul Rek.$"

TZHAAR_SIGNPOST_2_Text_0:
	.string "The signpost is scribbled out and\n"
	.string "replaced with:\p"
	.string "Tzhaar City, located inside this\n"
	.string "volcano.$"

Mithrilman_TZHAAR1_Text_0:
	.string "Mithrilman$"

Mithrilman_TZHAAR1_Text_1:
	.string "Fromst the scorching heats of the\n"
	.string "dunes to a pleasant vaction I see\l"
	.string "knave.\p"
	.string "Greetings.\p"
	.string "Thoust must be here to battle the\n"
	.string "Tzhaar?\p"
	.string "Allow thine to grant yee some knowledge\n"
	.string "as thoust superior in battle provesst.\p"
	.string "First of thoust shouldn't use iron\n"
	.string "inside a volcano.\p"
	.string "It would smelts and yee would end in\n"
	.string "malfigured armour.\p"
	.string "Not for the goodst of thoust body,\n"
	.string "mayhaps a battle helps thoust?\p"
	.string "Well yee should show thine your provess\n"
	.string "then, beware, for the heat of this\l"
	.string "battle will be nothing like the volcano!$"

Mithrilman_TZHAAR1_Text_2:
	.string "…$"

Mithrilman_TZHAAR1_Text_3:
	.string "Thoust battle fair?\p"
	.string "Jokest thine not, the heat from the\n"
	.string "volcano has malfigured mine gracious\l"
	.string "Mithril armour.\p"
	.string "We shalt call this a draw for now, whilst\n"
	.string "thine seek a smith to fix thine armour.\p"
	.string "Fare thoust less than well,\p"
	.string "Knave!$"

Mithrilman_TZHAAR1_Text_4:
	.string "Oh?\p"
	.string "Mithrilman dropped something while in a\n"
	.string "hurry.$"
