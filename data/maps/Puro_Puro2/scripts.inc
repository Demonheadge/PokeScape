Puro_Puro2_MapScripts::
	.byte 0


ELNOCK_2::
	lock
	faceplayer
	namebox ELNOCK_2_Text_0
	msgbox ELNOCK_2_Text_1
	hidenamebox
	closemessage
	release
	end


PURO_HUNTER_2::
	lock
	faceplayer
	namebox PURO_HUNTER_2_Text_0
	msgbox PURO_HUNTER_2_Text_1
	hidenamebox
	closemessage
	release
	end


PURO_SKILLER_2::
	lock
	faceplayer
	namebox PURO_SKILLER_2_Text_0
	msgbox PURO_SKILLER_2_Text_1
	hidenamebox
	closemessage
	release
	end


ENCOUNTER_PURO_PURO_2::
	lock
	faceplayer
	namebox ENCOUNTER_PURO_PURO_2_Text_0
	playmoncry SPECIES_IMPIDIMP, 0
	msgbox ENCOUNTER_PURO_PURO_2_Text_1
	waitmoncry
	hidenamebox
	closemessage
	delay 1
	setwildbattle SPECIES_IMP, 18, ITEM_NONE
	dowildbattle
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq ENCOUNTER_PURO_PURO_2_2
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq ENCOUNTER_PURO_PURO_2_2
ENCOUNTER_PURO_PURO_2_1:
	release
	end

ENCOUNTER_PURO_PURO_2_2:
	fadescreenswapbuffers FADE_TO_BLACK
	removeobject VAR_LAST_TALKED
	fadescreenswapbuffers FADE_FROM_BLACK
	goto ENCOUNTER_PURO_PURO_2_1


ITEM_PURO_PURO_2::
	finditem ITEM_ADAMANT_POUCH
	end


ELNOCK_2_Text_0:
	.string "Elnock$"

ELNOCK_2_Text_1:
	.string "I got here the same way you did, I\n"
	.string "suspect.\p"
	.string "Through a portal in a wheat field.\p"
	.string "I followed an impling back.\p"
	.string "I think they're related to imps, which is\n"
	.string "why imps are here too.$"

PURO_HUNTER_2_Text_0:
	.string "Hunter$"

PURO_HUNTER_2_Text_1:
	.string "I brought plenty of nets and jars to\n"
	.string "catch myself some implings.\p"
	.string "{PAUSE 15}What do you mean I have to use\n"
	.string "pouches?\p"
	.string "How on Gielinor would it fit in there??$"

PURO_SKILLER_2_Text_0:
	.string "Skiller$"

PURO_SKILLER_2_Text_1:
	.string "I rely on catching implings who might be\n"
	.string "holding Rings of Recoil to help me in\l"
	.string "battle.\p"
	.string "As a skiller, I can't do magic and\n"
	.string "enchant my own..$"

ENCOUNTER_PURO_PURO_2_Text_0:
	.string "Imp$"

ENCOUNTER_PURO_PURO_2_Text_1:
	.string "Teehee!$"
