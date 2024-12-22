Puro_Puro3_MapScripts::
	.byte 0


ELNOCK_3::
	lock
	faceplayer
	namebox ELNOCK_3_Text_0
	msgbox ELNOCK_3_Text_1
	hidenamebox
	closemessage
	release
	end


PURO_HUNTER_3::
	lock
	faceplayer
	namebox PURO_HUNTER_3_Text_0
	msgbox PURO_HUNTER_3_Text_1
	hidenamebox
	closemessage
	release
	end


PURO_FAIRY_3::
	lock
	faceplayer
	namebox PURO_FAIRY_3_Text_0
	msgbox PURO_FAIRY_3_Text_1
	hidenamebox
	closemessage
	release
	end


PURO_IRONMAN_3::
	lock
	faceplayer
	namebox PURO_IRONMAN_3_Text_0
	msgbox PURO_IRONMAN_3_Text_1
	hidenamebox
	closemessage
	release
	end


ENCOUNTER_PURO_PURO_3::
	lock
	faceplayer
	namebox ENCOUNTER_PURO_PURO_3_Text_0
	playmoncry SPECIES_IMPIDIMP, 0
	msgbox ENCOUNTER_PURO_PURO_3_Text_1
	waitmoncry
	hidenamebox
	closemessage
	delay 1
	setwildbattle SPECIES_IMP, 26, ITEM_NONE
	dowildbattle
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq ENCOUNTER_PURO_PURO_3_2
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq ENCOUNTER_PURO_PURO_3_2
ENCOUNTER_PURO_PURO_3_1:
	release
	end

ENCOUNTER_PURO_PURO_3_2:
	fadescreenswapbuffers FADE_TO_BLACK
	removeobject VAR_LAST_TALKED
	fadescreenswapbuffers FADE_FROM_BLACK
	goto ENCOUNTER_PURO_PURO_3_1


ITEM_PURO_PURO_3::
	finditem ITEM_POUCH_RUNE
	end


ELNOCK_3_Text_0:
	.string "Elnock$"

ELNOCK_3_Text_1:
	.string "The implings feed off our desire for\n"
	.string "things.\p"
	.string "They collect what other creatures\n"
	.string "want, and somehow this feeds them.\p"
	.string "I wonder if this means that certain\n"
	.string "items make certain implings evolve..?$"

PURO_HUNTER_3_Text_0:
	.string "Hunter$"

PURO_HUNTER_3_Text_1:
	.string "I tried smuggling in some imp boxes to\n"
	.string "help me catch myself some of the\l"
	.string "wandering imps.\p"
	.string "I heard they have magic powers and can\n"
	.string "send things to your bank!\p"
	.string "But they didn't take too kindly to it\n"
	.string "and confiscated them when I got here...$"

PURO_FAIRY_3_Text_0:
	.string "Fairy$"

PURO_FAIRY_3_Text_1:
	.string "Don't look so confused.\p"
	.string "We fairies need these implings and the\n"
	.string "items they've stolen just as much as\l"
	.string "you humans do!$"

PURO_IRONMAN_3_Text_0:
	.string "CanifisChump$"

PURO_IRONMAN_3_Text_1:
	.string "Sssh, don't tell anyone but I secretly\n"
	.string "found a way for Ironmen to trade Lucky\l"
	.string "Implings!{PAUSE 15}What do you mean it has\l"
	.string "already been patched?\p"
	.string "Are you saying I have to..\p"
	.string "Train Hunter normally\n"
	.string "now?{PAUSE 15}NOOOOOOOOOOOOOOOOO!!!$"

ENCOUNTER_PURO_PURO_3_Text_0:
	.string "Imp$"

ENCOUNTER_PURO_PURO_3_Text_1:
	.string "Teehee!$"
