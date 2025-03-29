Barb_Stronghold_B2F_MapScripts::
	.byte 0


NPC_BARB_STRONGHOLD_B2F_NPC_1::
	lock
	faceplayer
	namebox NPC_BARB_STRONGHOLD_B2F_NPC_1_Text_0
	msgbox NPC_BARB_STRONGHOLD_B2F_NPC_1_Text_1
	closemessage
	hidenamebox
	release
	end


NPC_BARB_STRONGHOLD_B2F_NPC_2::
	lock
	msgbox NPC_BARB_STRONGHOLD_B2F_NPC_2_Text_0
	closemessage
	release
	end


BATTLE_BARB_STRONGHOLD_B2F_TRAINER_1::
	trainerbattle_single TRAINER_BARB_STRONGHOLD_B2F_TRAINER_1, BATTLE_BARB_STRONGHOLD_B2F_TRAINER_1_Text_0, BATTLE_BARB_STRONGHOLD_B2F_TRAINER_1_Text_1
	namebox BATTLE_BARB_STRONGHOLD_B2F_TRAINER_1_Text_2
	msgbox BATTLE_BARB_STRONGHOLD_B2F_TRAINER_1_Text_3
	hidenamebox
	release
	end


BATTLE_BARB_STRONGHOLD_B2F_TRAINER_2::
	trainerbattle_single TRAINER_BARB_STRONGHOLD_B2F_TRAINER_2, BATTLE_BARB_STRONGHOLD_B2F_TRAINER_2_Text_0, BATTLE_BARB_STRONGHOLD_B2F_TRAINER_2_Text_1
	namebox BATTLE_BARB_STRONGHOLD_B2F_TRAINER_2_Text_2
	msgbox BATTLE_BARB_STRONGHOLD_B2F_TRAINER_2_Text_3
	hidenamebox
	release
	end


BATTLE_BARB_STRONGHOLD_B2F_TRAINER_3::
	trainerbattle_single TRAINER_BARB_STRONGHOLD_B2F_TRAINER_3, BATTLE_BARB_STRONGHOLD_B2F_TRAINER_3_Text_0, BATTLE_BARB_STRONGHOLD_B2F_TRAINER_3_Text_1
	namebox BATTLE_BARB_STRONGHOLD_B2F_TRAINER_3_Text_2
	msgbox BATTLE_BARB_STRONGHOLD_B2F_TRAINER_3_Text_3
	hidenamebox
	release
	end


ITEM_BARB_STRONGHOLD_B2F_1::
	finditem ITEM_CHOCOLATE_CAKE
	end


ITEM_BARB_STRONGHOLD_B2F_2::
	finditem ITEM_CHOCOLATE_CAKE
	end


ENCOUNTER_FLESH_CRAWLER::
	lock
	faceplayer
	namebox ENCOUNTER_FLESH_CRAWLER_Text_0
	playmoncry SPECIES_FLESH_CRAWLER, 0
	msgbox ENCOUNTER_FLESH_CRAWLER_Text_1
	waitmoncry
	hidenamebox
	closemessage
	delay 1
	random 13
	switch VAR_RESULT
	case 0, ENCOUNTER_FLESH_CRAWLER_3
	case 1, ENCOUNTER_FLESH_CRAWLER_4
	case 2, ENCOUNTER_FLESH_CRAWLER_5
	case 3, ENCOUNTER_FLESH_CRAWLER_6
	case 6, ENCOUNTER_FLESH_CRAWLER_7
	case 7, ENCOUNTER_FLESH_CRAWLER_8
	case 9, ENCOUNTER_FLESH_CRAWLER_9
	case 10, ENCOUNTER_FLESH_CRAWLER_10
	setwildbattle SPECIES_FLESH_CRAWLER, 25, ITEM_NONE
ENCOUNTER_FLESH_CRAWLER_1:
	dowildbattle
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq ENCOUNTER_FLESH_CRAWLER_13
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq ENCOUNTER_FLESH_CRAWLER_13
ENCOUNTER_FLESH_CRAWLER_12:
	release
	end

ENCOUNTER_FLESH_CRAWLER_3:
	setwildbattle SPECIES_FLESH_CRAWLER, 26, ITEM_NONE
	goto ENCOUNTER_FLESH_CRAWLER_1

ENCOUNTER_FLESH_CRAWLER_4:
	setwildbattle SPECIES_FLESH_CRAWLER, 27, ITEM_NONE
	goto ENCOUNTER_FLESH_CRAWLER_1

ENCOUNTER_FLESH_CRAWLER_5:
	setwildbattle SPECIES_FLESH_CRAWLER, 28, ITEM_NONE
	goto ENCOUNTER_FLESH_CRAWLER_1

ENCOUNTER_FLESH_CRAWLER_6:
	setwildbattle SPECIES_FLESH_CRAWLER, 29, ITEM_NONE
	goto ENCOUNTER_FLESH_CRAWLER_1

ENCOUNTER_FLESH_CRAWLER_7:
	setwildbattle SPECIES_FLESH_CRAWLER, 30, ITEM_NONE
	goto ENCOUNTER_FLESH_CRAWLER_1

ENCOUNTER_FLESH_CRAWLER_8:
	setwildbattle SPECIES_FLESH_CRAWLER, 31, ITEM_NONE
	goto ENCOUNTER_FLESH_CRAWLER_1

ENCOUNTER_FLESH_CRAWLER_9:
	setwildbattle SPECIES_FLESH_CRAWLER, 32, ITEM_NONE
	goto ENCOUNTER_FLESH_CRAWLER_1

ENCOUNTER_FLESH_CRAWLER_10:
	setwildbattle SPECIES_FLESH_CRAWLER, 33, ITEM_NONE
	goto ENCOUNTER_FLESH_CRAWLER_1

ENCOUNTER_FLESH_CRAWLER_13:
	fadescreenswapbuffers FADE_TO_BLACK
	removeobject VAR_LAST_TALKED
	fadescreenswapbuffers FADE_FROM_BLACK
	goto ENCOUNTER_FLESH_CRAWLER_12


NPC_BARB_STRONGHOLD_B2F_NPC_1_Text_0:
	.string "Run Laps$"

NPC_BARB_STRONGHOLD_B2F_NPC_1_Text_1:
	.string "I heard that there's a continent to the\n"
	.string "west where adventurers can run around\l"
	.string "the bones of a colossal monster!\p"
	.string "I came down here to see if there was\n"
	.string "anything similar, but none of the bones\l"
	.string "are big enough to run on.\p"
	.string "What a disappointment!$"

NPC_BARB_STRONGHOLD_B2F_NPC_2_Text_0:
	.string "The skeleton looks at peace.\p"
	.string "You decide not to disturb it.$"

BATTLE_BARB_STRONGHOLD_B2F_TRAINER_1_Text_0:
	.string "Ah, here we have an extraordinary\n"
	.string "creature with imposing, jaw-like\l"
	.string "pincers...\p"
	.string "Ugh, you scared it off!$"

BATTLE_BARB_STRONGHOLD_B2F_TRAINER_1_Text_1:
	.string "Fascinating, perhaps the real discovery\n"
	.string "here is you..$"

BATTLE_BARB_STRONGHOLD_B2F_TRAINER_1_Text_2:
	.string "D Attenbr0$"

BATTLE_BARB_STRONGHOLD_B2F_TRAINER_1_Text_3:
	.string "I was hiding to surreptitiously study\n"
	.string "the flesh crawlers.\p"
	.string "Did you know that their mandibles,\n"
	.string "although strong enough to lift and\l"
	.string "carry, are used primarily for combat?\p"
	.string "They could be used so much more\n"
	.string "effectively if we didn't just treat\l"
	.string "them like monsters.$"

BATTLE_BARB_STRONGHOLD_B2F_TRAINER_2_Text_0:
	.string "Barbarians like myself train our entire\n"
	.string "lives for the honour of entering this\l"
	.string "dungeon.$"

BATTLE_BARB_STRONGHOLD_B2F_TRAINER_2_Text_1:
	.string "I see why you were also given that\n"
	.string "honour.$"

BATTLE_BARB_STRONGHOLD_B2F_TRAINER_2_Text_2:
	.string "Ragnar$"

BATTLE_BARB_STRONGHOLD_B2F_TRAINER_2_Text_3:
	.string "If you've been allowed to enter this\n"
	.string "dungeon, I suppose that makes you an\l"
	.string "honorary barbarian.$"

BATTLE_BARB_STRONGHOLD_B2F_TRAINER_3_Text_0:
	.string "AAAAHHHH, DON'T LET IT GET ME!$"

BATTLE_BARB_STRONGHOLD_B2F_TRAINER_3_Text_1:
	.string "NOOOOOOOOOOO!$"

BATTLE_BARB_STRONGHOLD_B2F_TRAINER_3_Text_2:
	.string "Sanic91$"

BATTLE_BARB_STRONGHOLD_B2F_TRAINER_3_Text_3:
	.string "You made me lose all my momentum.\p"
	.string "Now that stupid flesh crawler is going\n"
	.string "to get me, and I'll lose all my coins...$"

ENCOUNTER_FLESH_CRAWLER_Text_0:
	.string "Flesh Crawler$"

ENCOUNTER_FLESH_CRAWLER_Text_1:
	.string "Hisssssss!$"
