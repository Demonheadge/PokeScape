Puro_Puro1_MapScripts::
	.byte 0


IMMENIZZ::
	random 4
	switch VAR_RESULT
	case 0, IMMENIZZ_3
	case 1, IMMENIZZ_4
	case 2, IMMENIZZ_5
	case 3, IMMENIZZ_6
	release
	end

IMMENIZZ_3:
	lock
	faceplayer
	namebox IMMENIZZ_Text_0
	msgbox IMMENIZZ_Text_1
	hidenamebox
	closemessage
	release
	end

IMMENIZZ_4:
	lock
	faceplayer
	namebox IMMENIZZ_Text_0
	msgbox IMMENIZZ_Text_2
	hidenamebox
	closemessage
	release
	end

IMMENIZZ_5:
	lock
	faceplayer
	namebox IMMENIZZ_Text_0
	msgbox IMMENIZZ_Text_3
	hidenamebox
	closemessage
	release
	end

IMMENIZZ_6:
	lock
	faceplayer
	namebox IMMENIZZ_Text_0
	msgbox IMMENIZZ_Text_4
	hidenamebox
	closemessage
	release
	end


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


ENCOUNTER_PURO_PURO_1::
	lock
	faceplayer
	namebox ENCOUNTER_PURO_PURO_1_Text_0
	playmoncry SPECIES_IMPIDIMP, 0
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


ITEM_PURO_PURO_1::
	finditem ITEM_MITHRIL_POUCH
	end


IMMENIZZ_Text_0:
	.string "Immenizz$"

IMMENIZZ_Text_1:
	.string "The aetheric thread connecting you to\n"
	.string "your own plane leads back to the wheat\l"
	.string "field where you came from.\p"
	.string "So you will always go back to where you\n"
	.string "came from!$"

IMMENIZZ_Text_2:
	.string "Here, solve this.{PAUSE 15}\p"
	.string "What, I thought all you humans loved\n"
	.string "these things!$"

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

ENCOUNTER_PURO_PURO_1_Text_0:
	.string "Imp$"

ENCOUNTER_PURO_PURO_1_Text_1:
	.string "Teehee!$"
