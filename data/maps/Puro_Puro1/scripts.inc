Puro_Puro1_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Puro_Puro1_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Puro_Puro1_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	call RANDOM_EVENT_IMPLING
	return


RANDOM_EVENT_IMPLING::
	random 20
	compare VAR_RESULT, 1
	goto_if_eq RANDOM_EVENT_IMPLING_2
	setflag FLAG_TEMP_8
	removeobject 16
RANDOM_EVENT_IMPLING_1:
	return

RANDOM_EVENT_IMPLING_2:
	clearflag FLAG_TEMP_8
	addobject 16
	goto RANDOM_EVENT_IMPLING_1


PURO_PURO_EVENT::
	random 20
	compare VAR_RESULT, 1
	goto_if_eq PURO_PURO_EVENT_2
PURO_PURO_EVENT_1:
	return

PURO_PURO_EVENT_2:
	specialvar VAR_RESULT, GetCurrentMap
	compare VAR_RESULT, MAP_ROUTE1
	goto_if_eq PURO_PURO_EVENT_4
	compare VAR_RESULT, MAP_ROUTE24
	goto_if_eq PURO_PURO_EVENT_5
	compare VAR_RESULT, MAP_RIMMINGTON
	goto_if_eq PURO_PURO_EVENT_6
	compare VAR_RESULT, MAP_DRAYNOR
	goto_if_eq PURO_PURO_EVENT_7
	compare VAR_RESULT, MAP_ROUTE13
	goto_if_eq PURO_PURO_EVENT_8
	compare VAR_RESULT, MAP_ROUTE12
	goto_if_eq PURO_PURO_EVENT_9
	compare VAR_RESULT, MAP_MILL_LANE_MILL
	goto_if_eq PURO_PURO_EVENT_10
	goto PURO_PURO_EVENT_1

PURO_PURO_EVENT_4:
	setdynamicwarp MAP_ROUTE1, 3
	call PURO_PURO_EVENT_ROUTE1
	goto PURO_PURO_EVENT_1

PURO_PURO_EVENT_5:
	setdynamicwarp MAP_ROUTE24, 1
	call PURO_PURO_EVENT_ROUTE24
	goto PURO_PURO_EVENT_1

PURO_PURO_EVENT_6:
	setdynamicwarp MAP_RIMMINGTON, 9
	call PURO_PURO_EVENT_RIMMINGTON
	goto PURO_PURO_EVENT_1

PURO_PURO_EVENT_7:
	setdynamicwarp MAP_DRAYNOR, 8
	call PURO_PURO_EVENT_DRAYNOR
	goto PURO_PURO_EVENT_1

PURO_PURO_EVENT_8:
	setdynamicwarp MAP_ROUTE13, 1
	call PURO_PURO_EVENT_ROUTE13
	goto PURO_PURO_EVENT_1

PURO_PURO_EVENT_9:
	setdynamicwarp MAP_ROUTE12, 1
	call PURO_PURO_EVENT_ROUTE12
	goto PURO_PURO_EVENT_1

PURO_PURO_EVENT_10:
	setdynamicwarp MAP_MILL_LANE_MILL, 2
	call PURO_PURO_EVENT_MILL_LANE_MILL
	goto PURO_PURO_EVENT_1


IMMENIZZ::
	lock
	faceplayer
	namebox IMMENIZZ_Text_0
	random 4
	switch VAR_RESULT
	case 0, IMMENIZZ_3
	case 1, IMMENIZZ_4
	case 2, IMMENIZZ_5
	case 3, IMMENIZZ_6
IMMENIZZ_1:
	hidenamebox
	closemessage
	release
	end

IMMENIZZ_3:
	msgbox IMMENIZZ_Text_1
	goto IMMENIZZ_1

IMMENIZZ_4:
	msgbox IMMENIZZ_Text_2
	goto IMMENIZZ_1

IMMENIZZ_5:
	msgbox IMMENIZZ_Text_3
	goto IMMENIZZ_1

IMMENIZZ_6:
	msgbox IMMENIZZ_Text_4
	goto IMMENIZZ_1


ELNOCK_1::
	lock
	faceplayer
	namebox ELNOCK_1_Text_0
	msgbox ELNOCK_1_Text_1
	hidenamebox
	closemessage
	release
	end


PURO_HUNTER_1::
	lock
	faceplayer
	namebox PURO_HUNTER_1_Text_0
	msgbox PURO_HUNTER_1_Text_1
	hidenamebox
	closemessage
	release
	end


PURO_IRONMAN_1::
	lock
	faceplayer
	namebox PURO_IRONMAN_1_Text_0
	msgbox PURO_IRONMAN_1_Text_1
	hidenamebox
	closemessage
	release
	end


IMP_DEFENDER::
	lock
	faceplayer
	namebox IMP_DEFENDER_Text_0
	msgbox IMP_DEFENDER_Text_1
	hidenamebox
	closemessage
	release
	end


NPC_IMPLING::
	lock
	faceplayer
	namebox NPC_IMPLING_Text_0
	playmoncry SPECIES_IMPLING_BABY_FORM, 0
	msgbox NPC_IMPLING_Text_1
	waitmoncry
	hidenamebox
	release
	end


ENCOUNTER_PURO_PURO_1::
	lock
	faceplayer
	namebox ENCOUNTER_PURO_PURO_1_Text_0
	playmoncry SPECIES_IMP, 0
	msgbox ENCOUNTER_PURO_PURO_1_Text_1
	waitmoncry
	hidenamebox
	closemessage
	delay 1
	setwildbattle SPECIES_IMP, 3, ITEM_NONE
	dowildbattle
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq ENCOUNTER_PURO_PURO_1_2
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq ENCOUNTER_PURO_PURO_1_2
ENCOUNTER_PURO_PURO_1_1:
	release
	end

ENCOUNTER_PURO_PURO_1_2:
	fadescreenswapbuffers FADE_TO_BLACK
	removeobject VAR_LAST_TALKED
	fadescreenswapbuffers FADE_FROM_BLACK
	goto ENCOUNTER_PURO_PURO_1_1


ENCOUNTER_IMPLING_BABY::
	lock
	faceplayer
	namebox NPC_IMPLING_Text_0
	playmoncry SPECIES_IMPLING_BABY_FORM, 0
	msgbox ENCOUNTER_IMPLING_BABY_Text_0
	waitmoncry
	hidenamebox
	closemessage
	delay 1
	setwildbattle SPECIES_IMPLING_BABY_FORM, 5, ITEM_NONE
	dowildbattle
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq ENCOUNTER_IMPLING_BABY_2
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq ENCOUNTER_IMPLING_BABY_2
ENCOUNTER_IMPLING_BABY_1:
	release
	end

ENCOUNTER_IMPLING_BABY_2:
	fadescreenswapbuffers FADE_TO_BLACK
	removeobject VAR_LAST_TALKED
	fadescreenswapbuffers FADE_FROM_BLACK
	goto ENCOUNTER_IMPLING_BABY_1


ENCOUNTER_IMPLING_EARTH::
	lock
	faceplayer
	namebox NPC_IMPLING_Text_0
	playmoncry SPECIES_IMPLING_EARTH_FORM, 0
	msgbox ENCOUNTER_IMPLING_BABY_Text_0
	waitmoncry
	hidenamebox
	closemessage
	delay 1
	setwildbattle SPECIES_IMPLING_EARTH_FORM, 3, ITEM_NONE
	dowildbattle
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq ENCOUNTER_IMPLING_EARTH_2
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq ENCOUNTER_IMPLING_EARTH_2
ENCOUNTER_IMPLING_EARTH_1:
	release
	end

ENCOUNTER_IMPLING_EARTH_2:
	fadescreenswapbuffers FADE_TO_BLACK
	removeobject VAR_LAST_TALKED
	fadescreenswapbuffers FADE_FROM_BLACK
	goto ENCOUNTER_IMPLING_EARTH_1


ITEM_PURO_PURO_1::
	finditem ITEM_POUCH_MITHRIL
	end


ENCOUNTER_LUCKY_IMPLING::
	lock
	faceplayer
	namebox NPC_IMPLING_Text_0
	playmoncry SPECIES_IMPLING_LUCKY_FORM, 0
	msgbox ENCOUNTER_IMPLING_BABY_Text_0
	waitmoncry
	hidenamebox
	closemessage
	delay 1
	setwildbattle SPECIES_IMPLING_LUCKY_FORM, 20, ITEM_NONE
	dowildbattleNoCatch
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq ENCOUNTER_LUCKY_IMPLING_2
	compare VAR_RESULT, B_OUTCOME_LOST
	goto_if_eq ENCOUNTER_LUCKY_IMPLING_3
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq ENCOUNTER_LUCKY_IMPLING_4
ENCOUNTER_LUCKY_IMPLING_1:
	hidenamebox
	closemessage
	release
	end

ENCOUNTER_LUCKY_IMPLING_2:
	fadescreenswapbuffers FADE_TO_BLACK
	removeobject VAR_LAST_TALKED
	fadescreenswapbuffers FADE_FROM_BLACK
	msgbox ENCOUNTER_LUCKY_IMPLING_Text_0
	call GIVE_RANDOM_ITEM_IMPLING
	goto ENCOUNTER_LUCKY_IMPLING_1

ENCOUNTER_LUCKY_IMPLING_3:
	fadescreenswapbuffers FADE_TO_BLACK
	removeobject VAR_LAST_TALKED
	fadescreenswapbuffers FADE_FROM_BLACK
	goto ENCOUNTER_LUCKY_IMPLING_1

ENCOUNTER_LUCKY_IMPLING_4:
	namebox NPC_IMPLING_Text_0
	playmoncry SPECIES_IMPLING_LUCKY_FORM, 0
	msgbox ENCOUNTER_LUCKY_IMPLING_Text_1
	waitmoncry
	hidenamebox
	closemessage
	fadescreenswapbuffers FADE_TO_BLACK
	removeobject VAR_LAST_TALKED
	fadescreenswapbuffers FADE_FROM_BLACK
	msgbox ENCOUNTER_LUCKY_IMPLING_Text_2
	goto ENCOUNTER_LUCKY_IMPLING_1


GIVE_RANDOM_ITEM_IMPLING::
	random 17
	switch VAR_RESULT
	case 0, GIVE_RANDOM_ITEM_IMPLING_3
	case 1, GIVE_RANDOM_ITEM_IMPLING_4
	case 2, GIVE_RANDOM_ITEM_IMPLING_5
	case 3, GIVE_RANDOM_ITEM_IMPLING_6
	case 4, GIVE_RANDOM_ITEM_IMPLING_7
	case 5, GIVE_RANDOM_ITEM_IMPLING_8
	case 6, GIVE_RANDOM_ITEM_IMPLING_9
	case 7, GIVE_RANDOM_ITEM_IMPLING_10
	case 8, GIVE_RANDOM_ITEM_IMPLING_11
	case 9, GIVE_RANDOM_ITEM_IMPLING_12
	case 10, GIVE_RANDOM_ITEM_IMPLING_13
	case 11, GIVE_RANDOM_ITEM_IMPLING_14
	case 12, GIVE_RANDOM_ITEM_IMPLING_15
	case 13, GIVE_RANDOM_ITEM_IMPLING_16
	case 14, GIVE_RANDOM_ITEM_IMPLING_17
	case 15, GIVE_RANDOM_ITEM_IMPLING_18
	case 16, GIVE_RANDOM_ITEM_IMPLING_19
GIVE_RANDOM_ITEM_IMPLING_1:
	return

GIVE_RANDOM_ITEM_IMPLING_3:
	giveitem ITEM_FLAX, 10
	goto GIVE_RANDOM_ITEM_IMPLING_1

GIVE_RANDOM_ITEM_IMPLING_4:
	giveitem ITEM_SPIRIT_SHARD, 5
	goto GIVE_RANDOM_ITEM_IMPLING_1

GIVE_RANDOM_ITEM_IMPLING_5:
	giveitem ITEM_POUCH_RUNE, 5
	goto GIVE_RANDOM_ITEM_IMPLING_1

GIVE_RANDOM_ITEM_IMPLING_6:
	giveitem ITEM_POUCH_BLACK, 5
	goto GIVE_RANDOM_ITEM_IMPLING_1

GIVE_RANDOM_ITEM_IMPLING_7:
	giveitem ITEM_POUCH_BRONZE, 20
	goto GIVE_RANDOM_ITEM_IMPLING_1

GIVE_RANDOM_ITEM_IMPLING_8:
	giveitem ITEM_POUCH_MYSTIC, 3
	goto GIVE_RANDOM_ITEM_IMPLING_1

GIVE_RANDOM_ITEM_IMPLING_9:
	giveitem ITEM_PURPLE_SWEETS, 5
	goto GIVE_RANDOM_ITEM_IMPLING_1

GIVE_RANDOM_ITEM_IMPLING_10:
	giveitem ITEM_POUCH_ADAMANT, 5
	goto GIVE_RANDOM_ITEM_IMPLING_1

GIVE_RANDOM_ITEM_IMPLING_11:
	giveitem ITEM_MINT_CAKE, 4
	goto GIVE_RANDOM_ITEM_IMPLING_1

GIVE_RANDOM_ITEM_IMPLING_12:
	giveitem ITEM_HWEEN_MASK, 1
	goto GIVE_RANDOM_ITEM_IMPLING_1

GIVE_RANDOM_ITEM_IMPLING_13:
	giveitem ITEM_POUCH_MITHRIL, 5
	goto GIVE_RANDOM_ITEM_IMPLING_1

GIVE_RANDOM_ITEM_IMPLING_14:
	giveitem ITEM_POUCH, 30
	goto GIVE_RANDOM_ITEM_IMPLING_1

GIVE_RANDOM_ITEM_IMPLING_15:
	giveitem ITEM_POUCH_GRANITE, 5
	goto GIVE_RANDOM_ITEM_IMPLING_1

GIVE_RANDOM_ITEM_IMPLING_16:
	giveitem ITEM_POUCH_BANE, 5
	goto GIVE_RANDOM_ITEM_IMPLING_1

GIVE_RANDOM_ITEM_IMPLING_17:
	giveitem ITEM_POUCH_DRAGON, 1
	goto GIVE_RANDOM_ITEM_IMPLING_1

GIVE_RANDOM_ITEM_IMPLING_18:
	giveitem ITEM_SPIRIT_CHARM, 1
	goto GIVE_RANDOM_ITEM_IMPLING_1

GIVE_RANDOM_ITEM_IMPLING_19:
	giveitem ITEM_POUCH_IRON, 20
deafult:
	giveitem ITEM_EXP_CANDY_XS, 10
	goto GIVE_RANDOM_ITEM_IMPLING_1


IMMENIZZ_Text_0:
	.string "Immenizz$"

IMMENIZZ_Text_1:
	.string "The aetheric thread connecting you to\n"
	.string "your own plane leads back to the wheat\l"
	.string "field where you came from.\p"
	.string "So you will always go back to where you\n"
	.string "came from!$"

IMMENIZZ_Text_2:
	.string "Our realm occasionally shifts around.\p"
	.string "If you see crop circles in other routes\n"
	.string "or towns be sure to investigate them.$"

IMMENIZZ_Text_3:
	.string "This is my home, human!\p"
	.string "What do you have in your pockets?\p"
	.string "Is it something tasty?$"

IMMENIZZ_Text_4:
	.string "We implings want things you people\n"
	.string "want.\p"
	.string "They are so tasty to us!\p"
	.string "The more you want them, the tastier\n"
	.string "they are!$"

ELNOCK_1_Text_0:
	.string "Elnock$"

ELNOCK_1_Text_1:
	.string "I bet you're wondering what a gnome is\n"
	.string "doing here.\p"
	.string "I'm an investigator.\p"
	.string "I'm watching the implings.\p"
	.string "{PAUSE 15}I'm not at liberty to say why.$"

PURO_HUNTER_1_Text_0:
	.string "Hunter$"

PURO_HUNTER_1_Text_1:
	.string "I was told that this was a good place to\n"
	.string "train Hunter!\p"
	.string "But there's no birds or kebbits here to\n"
	.string "snare!$"

PURO_IRONMAN_1_Text_0:
	.string "Ironman$"

PURO_IRONMAN_1_Text_1:
	.string "I need to try and catch thousands of\n"
	.string "eclectic implings to stack medium clue\l"
	.string "scrolls and get myself a pair of Ranger\l"
	.string "boots!\p"
	.string "{PAUSE 15}But I've been here for hours and not\n"
	.string "seen a single eclectic impling...$"

IMP_DEFENDER_Text_0:
	.string "Defender$"

IMP_DEFENDER_Text_1:
	.string "Be free little implings!$"

NPC_IMPLING_Text_0:
	.string "Impling$"

NPC_IMPLING_Text_1:
	.string "Teehehe!$"

ENCOUNTER_PURO_PURO_1_Text_0:
	.string "Imp$"

ENCOUNTER_PURO_PURO_1_Text_1:
	.string "Kekeke!$"

ENCOUNTER_IMPLING_BABY_Text_0:
	.string "Teehee!$"

ENCOUNTER_LUCKY_IMPLING_Text_0:
	.string "The impling dropped something…$"

ENCOUNTER_LUCKY_IMPLING_Text_1:
	.string "Teehee teehee!$"

ENCOUNTER_LUCKY_IMPLING_Text_2:
	.string "The impling teleported away…$"
