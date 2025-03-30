Route36_MapScripts::
	.byte 0


ROUTE36_BOAT_NPC::
	lock
	faceplayer
	namebox ROUTE36_BOAT_NPC_Text_0
	random 6
	switch VAR_RESULT
	case 0, ROUTE36_BOAT_NPC_3
	case 1, ROUTE36_BOAT_NPC_4
	case 2, ROUTE36_BOAT_NPC_5
	case 3, ROUTE36_BOAT_NPC_6
	case 4, ROUTE36_BOAT_NPC_7
	case 5, ROUTE36_BOAT_NPC_8
ROUTE36_BOAT_NPC_1:
	hidenamebox
	closemessage
	release
	end

ROUTE36_BOAT_NPC_3:
	msgbox ROUTE36_BOAT_NPC_Text_1
	goto ROUTE36_BOAT_NPC_1

ROUTE36_BOAT_NPC_4:
	msgbox ROUTE36_BOAT_NPC_Text_2
	goto ROUTE36_BOAT_NPC_1

ROUTE36_BOAT_NPC_5:
	msgbox ROUTE36_BOAT_NPC_Text_3
	goto ROUTE36_BOAT_NPC_1

ROUTE36_BOAT_NPC_6:
	msgbox ROUTE36_BOAT_NPC_Text_4
	goto ROUTE36_BOAT_NPC_1

ROUTE36_BOAT_NPC_7:
	msgbox ROUTE36_BOAT_NPC_Text_5
	goto ROUTE36_BOAT_NPC_1

ROUTE36_BOAT_NPC_8:
	msgbox ROUTE36_BOAT_NPC_Text_6
	goto ROUTE36_BOAT_NPC_1


ROUTE36_BOAT_NPC_Text_0:
	.string "CygnetRing$"

ROUTE36_BOAT_NPC_Text_1:
	.string "Did you come here because you like\n"
	.string "ducks too?\p"
	.string "If you teach one GROWTH it'll evolve\n"
	.string "into something SUPER cool.$"

ROUTE36_BOAT_NPC_Text_2:
	.string "Did you come here because you like\n"
	.string "ducks too?\p"
	.string "If you use a BODY RUNE on one it'll\n"
	.string "evolve into something SUPER cool.$"

ROUTE36_BOAT_NPC_Text_3:
	.string "Did you come here because you like\n"
	.string "ducks too?\p"
	.string "If you level one up underground, it'll\n"
	.string "start riding a cart.\p"
	.string "{PAUSE 15}Don't ask me where it gets one from\n"
	.string "though.\p"
	.string "Does it steal it?$"

ROUTE36_BOAT_NPC_Text_4:
	.string "Did you come here because you like\n"
	.string "ducks too?\p"
	.string "If you level one up while also having an\n"
	.string "EXORAXE in your party, it'll start riding\l"
	.string "a cart.\p"
	.string "{PAUSE 15}Don't ask me where it gets one from\n"
	.string "though.\p"
	.string "Is it possessed like the EXORAXE?$"

ROUTE36_BOAT_NPC_Text_5:
	.string "Did you come here because you like\n"
	.string "ducks too?\p"
	.string "If you use a LAW RUNE on one, it'll start\n"
	.string "riding a cart.\p"
	.string "{PAUSE 15}Don't ask me where it gets one from\n"
	.string "though.\p"
	.string "Must be the magic from the rune!$"

ROUTE36_BOAT_NPC_Text_6:
	.string "Did you come here because you like\n"
	.string "ducks too?\p"
	.string "Be careful not to wait to evolve your\n"
	.string "DUCKLING until it really loves you, else\l"
	.string "it'll turn into a blasted SWAN!\p"
	.string "Vicious things!\p"
	.string "They're not birds, they're demons in\n"
	.string "disguise!\p"
	.string "{PAUSE 15}Don't believe me?\p"
	.string "Try having a SWAN and an IMP in your\n"
	.string "party and see what happens...\p"
	.string "Don't say I didn't warn you!!$"
