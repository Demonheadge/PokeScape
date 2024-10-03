Route4_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route4_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Route4_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setvar VAR_EVOLUTION_MAP_STATE, 1
	call ROUTE_4_STATE
	call POTTERINGTON_FARM_OUTDOOR_STATE
	goto TryMoveDaycareMan
	return


GOD_FARM_TEST_TRIGGER::
	clearflag FLAG_TEMP_1
	clearflag FLAG_TEMP_2
	clearflag FLAG_TEMP_3
	clearflag FLAG_TEMP_4
	clearflag FLAG_TEMP_5
	clearflag FLAG_TEMP_6
	clearflag FLAG_TEMP_7
	clearflag FLAG_TEMP_8
	clearflag FLAG_TEMP_9
	clearflag FLAG_TEMP_10
	clearflag FLAG_TEMP_11
	clearflag FLAG_TEMP_12
	clearflag FLAG_TEMP_A
	addobject 20
	addobject 21
	addobject 10
	addobject 12
	addobject 25
	addobject 10
	addobject 1
	addobject 2
	addobject 3
	addobject 4
	addobject 5
	addobject 6
	addobject 7
	addobject 8
	addobject 9
	addobject 10
	addobject 11
	addobject 21
	return


ROUTE_4_STATE::
	removeobject 9
	removeobject 11
	setflag FLAG_TEMP_1F
	setflag FLAG_TEMP_4
	removeobject 19
	removeobject 20
	setflag FLAG_TEMP_A
	removeobject 21
	removeobject 10
	setflag FLAG_TEMP_5
	removeobject 12
	setflag FLAG_TEMP_6
	removeobject 25
	setflag FLAG_TEMP_7
	removeobject 10
	setflag FLAG_TEMP_8
	checkitem ITEM_TERRORBIRD_POUCH, 1
	compare VAR_RESULT, 0
	goto_if_ne ROUTE_4_STATE_2
ROUTE_4_STATE_1:
	special Is_InParty_SEREN
	compare VAR_RESULT, TRUE
	goto_if_eq ROUTE_4_STATE_5
	goto_if_set FLAG_RECEIVED_SERELING_EGG, ROUTE_4_STATE_5
ROUTE_4_STATE_4:
	special Is_InParty_ZAROS
	compare VAR_RESULT, TRUE
	goto_if_eq ROUTE_4_STATE_10
	goto_if_set FLAG_RECEIVED_ZAROLING_EGG, ROUTE_4_STATE_10
ROUTE_4_STATE_9:
	special Is_InParty_TUMEKEN
	compare VAR_RESULT, TRUE
	goto_if_eq ROUTE_4_STATE_15
	goto_if_set FLAG_RECEIVED_TUMEKLING_EGG, ROUTE_4_STATE_15
ROUTE_4_STATE_14:
	special Is_InParty_GODLESS
	compare VAR_RESULT, TRUE
	goto_if_eq ROUTE_4_STATE_20
	goto_if_set FLAG_RECEIVED_UNGODLING_EGG, ROUTE_4_STATE_20
ROUTE_4_STATE_19:
	special Is_InParty_ARMADYL
	compare VAR_RESULT, TRUE
	goto_if_eq ROUTE_4_STATE_25
	goto_if_set FLAG_RECEIVED_ARMALING_EGG, ROUTE_4_STATE_25
ROUTE_4_STATE_24:
	compare VAR_POKESCAPE_GAMEMODE_STATE, 0
	goto_if_eq ROUTE_4_STATE_29
	return

ROUTE_4_STATE_2:
	clearflag FLAG_TEMP_4
	addobject 19
	addobject 20
	goto ROUTE_4_STATE_1

ROUTE_4_STATE_5:
	clearflag FLAG_TEMP_A
	addobject 21
	goto ROUTE_4_STATE_4

ROUTE_4_STATE_10:
	clearflag FLAG_TEMP_5
	addobject 10
	goto ROUTE_4_STATE_9

ROUTE_4_STATE_15:
	clearflag FLAG_TEMP_6
	addobject 12
	goto ROUTE_4_STATE_14

ROUTE_4_STATE_20:
	clearflag FLAG_TEMP_7
	addobject 25
	goto ROUTE_4_STATE_19

ROUTE_4_STATE_25:
	clearflag FLAG_TEMP_8
	addobject 10
	goto ROUTE_4_STATE_24

ROUTE_4_STATE_29:
	switch VAR_POKESCAPE_STORYMODE_PROGRESS
	case 100, ROUTE_4_STATE_32
	case 101, ROUTE_4_STATE_32
	return

ROUTE_4_STATE_32:
	addobject 9
	addobject 11
	clearflag FLAG_TEMP_1F
	return


POTTERINGTON_FARM_OUTDOOR_STATE::
	switch VAR_POKESCAPE_POTTERINGTON_FARM_STATE
	case 0, POTTERINGTON_FARM_OUTDOOR_STATE_2
	case 1, POTTERINGTON_FARM_OUTDOOR_STATE_3
	return

POTTERINGTON_FARM_OUTDOOR_STATE_2:
	return

POTTERINGTON_FARM_OUTDOOR_STATE_3:
	setobjectxyperm 2, 8, 23
	return


MuggerBattleRoute4::
	trainerbattle_single TRAINER_MUGGER_ROUTE4, MuggerBattleRoute4_Text_0, MuggerBattleRoute4_Text_1
	namebox MuggerBattleRoute4_Text_2
	msgbox MuggerBattleRoute4_Text_1
	release
	return


ScammerBattleRoute4::
	trainerbattle_single TRAINER_SCAMMER_ROUTE4, ScammerBattleRoute4_Text_0, ScammerBattleRoute4_Text_1
	namebox ScammerBattleRoute4_Text_2
	msgbox ScammerBattleRoute4_Text_3
	release
	return


FarmerBattleRoute4::
	trainerbattle_single TRAINER_FARMER_ROUTE4, FarmerBattleRoute4_Text_0, FarmerBattleRoute4_Text_1
	namebox FarmerBattleRoute4_Text_2
	msgbox FarmerBattleRoute4_Text_3
	release
	return


Route4Sign::
	msgbox Route4Sign_Text_0, MSGBOX_SIGN
	release
	return


TryMoveDaycareMan::
	goto_if_set FLAG_PENDING_DAYCARE_EGG, TryMoveDaycareMan_1
	setobjectxyperm 1, 19, 22
	return

TryMoveDaycareMan_1:
	setobjectxyperm 1, 19, 23
	return


ROUTE4_TRIGGER1_DaycareWatcher::
	playse SE_PIN
	applymovement 2, MOVEMENT_ROUTE4_NIECE_1
	waitmovement 0
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
	compare VAR_TEMP_2, 33
	goto_if_eq ROUTE4_TRIGGER1_DaycareWatcher_2
ROUTE4_TRIGGER1_DaycareWatcher_1:
	applymovement OBJ_EVENT_ID_PLAYER, MOVEMENT_FACE_UP
	waitmovement 0
	namebox ROUTE4_TRIGGER1_DaycareWatcher_Text_0
	msgbox ROUTE4_TRIGGER1_DaycareWatcher_Text_1
	closemessage
	hidenamebox
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
	compare VAR_TEMP_2, 33
	goto_if_eq ROUTE4_TRIGGER1_DaycareWatcher_5
ROUTE4_TRIGGER1_DaycareWatcher_4:
	applymovement OBJ_EVENT_ID_PLAYER, MOVEMENT_ROUTE4_NIECE_4
	applymovement 2, MOVEMENT_ROUTE4_NIECE_5
	waitmovement 0
	delay 8
	namebox ROUTE4_TRIGGER1_DaycareWatcher_Text_0
	msgbox ROUTE4_TRIGGER1_DaycareWatcher_Text_2
	closemessage
	hidenamebox
	applymovement 2, MOVEMENT_ROUTE4_NIECE_6
	waitmovement 0
	setobjectxyperm 2, 8, 23
	setvar VAR_POKESCAPE_POTTERINGTON_FARM_STATE, 1
	release
	end

ROUTE4_TRIGGER1_DaycareWatcher_2:
	applymovement 2, MOVEMENT_ROUTE4_NIECE_2
	waitmovement 0
	goto ROUTE4_TRIGGER1_DaycareWatcher_1

ROUTE4_TRIGGER1_DaycareWatcher_5:
	applymovement 2, MOVEMENT_ROUTE4_NIECE_3
	applymovement OBJ_EVENT_ID_PLAYER, MOVEMENT_ROUTE4_NIECE_3
	waitmovement 0
	goto ROUTE4_TRIGGER1_DaycareWatcher_4


MOVEMENT_ROUTE4_NIECE_1:
	emote_exclamation_mark
	delay_16
	step_end

MOVEMENT_ROUTE4_NIECE_2:
	walk_down
	step_end

MOVEMENT_ROUTE4_NIECE_3:
	walk_up
	step_end

MOVEMENT_ROUTE4_NIECE_4:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_left
	step_end

MOVEMENT_ROUTE4_NIECE_5:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_left
	walk_left
	face_player
	step_end

MOVEMENT_ROUTE4_NIECE_6:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_up
	walk_left
	walk_left
	walk_up
	delay_8
	face_down
	step_end

ROUTE4_DaycareWatcher::
	faceplayer
	namebox ROUTE4_TRIGGER1_DaycareWatcher_Text_0
	random 5
	switch VAR_RESULT
	case 0, ROUTE4_DaycareWatcher_3
	case 1, ROUTE4_DaycareWatcher_4
	case 2, ROUTE4_DaycareWatcher_5
	case 3, ROUTE4_DaycareWatcher_6
	case 4, ROUTE4_DaycareWatcher_7
ROUTE4_DaycareWatcher_1:
	closemessage
	hidenamebox
	release
	end

ROUTE4_DaycareWatcher_3:
	msgbox ROUTE4_DaycareWatcher_Text_0
	goto ROUTE4_DaycareWatcher_1

ROUTE4_DaycareWatcher_4:
	msgbox ROUTE4_DaycareWatcher_Text_1
	goto ROUTE4_DaycareWatcher_1

ROUTE4_DaycareWatcher_5:
	msgbox ROUTE4_DaycareWatcher_Text_2
	goto ROUTE4_DaycareWatcher_1

ROUTE4_DaycareWatcher_6:
	msgbox ROUTE4_DaycareWatcher_Text_3
	goto ROUTE4_DaycareWatcher_1

ROUTE4_DaycareWatcher_7:
	msgbox ROUTE4_DaycareWatcher_Text_4
	goto ROUTE4_DaycareWatcher_1


ROUTE4_PatchFarmer::
	faceplayer
	namebox ROUTE4_PatchFarmer_Text_0
	msgbox ROUTE4_PatchFarmer_Text_1
	closemessage
	hidenamebox
	release
	end


ROUTE4_Summoner::
	faceplayer
	namebox ROUTE4_Summoner_Text_0
	msgbox ROUTE4_Summoner_Text_1
	closemessage
	hidenamebox
	release
	end


ROUTE4_Diviner::
	faceplayer
	namebox ROUTE4_Diviner_Text_0
	msgbox ROUTE4_Diviner_Text_1
	closemessage
	hidenamebox
	release
	end


POTTERINGTON_FARM_Prezleek::
	lockall
	faceplayer
	checkitem ITEM_YAK_POUCH, 1
	compare VAR_RESULT, 0
	goto_if_eq POTTERINGTON_FARM_Prezleek_2
POTTERINGTON_FARM_Prezleek_1:
	namebox POTTERINGTON_FARM_Prezleek_Text_0
	msgbox POTTERINGTON_FARM_Prezleek_Text_6
	closemessage
	hidenamebox
	release
	end

POTTERINGTON_FARM_Prezleek_2:
	checkitem ITEM_TERRORBIRD_POUCH, 1
	compare VAR_RESULT, 0
	goto_if_ne POTTERINGTON_FARM_Prezleek_4
	goto POTTERINGTON_FARM_Prezleek_1

POTTERINGTON_FARM_Prezleek_4:
	namebox POTTERINGTON_FARM_Prezleek_Text_0
	msgbox POTTERINGTON_FARM_Prezleek_Text_1
	applymovement 19, MOVEMENT_INTERACT_RIGHT
	waitmovement 0
	msgbox POTTERINGTON_FARM_Prezleek_Text_2
	closemessage
	hidenamebox
	namebox POTTERINGTON_FARM_Prezleek_Text_3
	msgbox POTTERINGTON_FARM_Prezleek_Text_4
	closemessage
	hidenamebox
	applymovement 19, Movement_InteractFACEPLAYER
	waitmovement 0
	namebox POTTERINGTON_FARM_Prezleek_Text_0
	msgbox POTTERINGTON_FARM_Prezleek_Text_5
	closemessage
	hidenamebox
	giveitem ITEM_YAK_POUCH, 1
	goto POTTERINGTON_FARM_Prezleek_1


POTTERINGTON_FARM_Baroo::
	faceplayer
	namebox POTTERINGTON_FARM_Prezleek_Text_3
	msgbox POTTERINGTON_FARM_Baroo_Text_0
	closemessage
	hidenamebox
	release
	end


POTTERINGTON_FARM_MysteriousFigure::
	lock
	faceplayer
	goto_if_unset FLAG_RECEIVED_ZAROLING_EGG, POTTERINGTON_FARM_MysteriousFigure_2
	namebox POTTERINGTON_FARM_MysteriousFigure_Text_0
	msgbox POTTERINGTON_FARM_MysteriousFigure_Text_3
POTTERINGTON_FARM_MysteriousFigure_1:
	hidenamebox
	closemessage
	release
	end

POTTERINGTON_FARM_MysteriousFigure_2:
	namebox POTTERINGTON_FARM_MysteriousFigure_Text_0
	msgbox POTTERINGTON_FARM_MysteriousFigure_Text_1
	closemessage
	hidenamebox
	getpartysize
	compare VAR_RESULT, PARTY_SIZE
	goto_if_eq SCRIPT_EGG_NOROOM
	setflag FLAG_RECEIVED_ZAROLING_EGG
	playfanfare MUS_OBTAIN_ITEM
	msgbox POTTERINGTON_FARM_MysteriousFigure_Text_2
	waitfanfare
	giveegg SPECIES_ZAROLING
	namebox POTTERINGTON_FARM_MysteriousFigure_Text_0
	msgbox POTTERINGTON_FARM_MysteriousFigure_Text_3
	goto POTTERINGTON_FARM_MysteriousFigure_1


POTTERINGTON_FARM_Camel::
	lock
	faceplayer
	goto_if_unset FLAG_RECEIVED_TUMEKLING_EGG, POTTERINGTON_FARM_Camel_2
	namebox POTTERINGTON_FARM_Camel_Text_0
	msgbox POTTERINGTON_FARM_Camel_Text_4
	closemessage
	hidenamebox
	msgbox POTTERINGTON_FARM_Camel_Text_6
POTTERINGTON_FARM_Camel_1:
	hidenamebox
	closemessage
	release
	end

POTTERINGTON_FARM_Camel_2:
	namebox POTTERINGTON_FARM_Camel_Text_0
	msgbox POTTERINGTON_FARM_Camel_Text_1
	closemessage
	hidenamebox
	msgbox POTTERINGTON_FARM_Camel_Text_2
	closemessage
	hidenamebox
	getpartysize
	compare VAR_RESULT, PARTY_SIZE
	goto_if_eq SCRIPT_EGG_NOROOM
	setflag FLAG_RECEIVED_TUMEKLING_EGG
	playfanfare MUS_OBTAIN_ITEM
	msgbox POTTERINGTON_FARM_Camel_Text_3
	waitfanfare
	giveegg SPECIES_TUMEKLING
	namebox POTTERINGTON_FARM_Camel_Text_0
	msgbox POTTERINGTON_FARM_Camel_Text_4
	closemessage
	hidenamebox
	msgbox POTTERINGTON_FARM_Camel_Text_5
	goto POTTERINGTON_FARM_Camel_1


POTTERINGTON_FARM_Barbarian::
	lock
	faceplayer
	goto_if_unset FLAG_RECEIVED_UNGODLING_EGG, POTTERINGTON_FARM_Barbarian_2
	namebox POTTERINGTON_FARM_Barbarian_Text_0
	msgbox POTTERINGTON_FARM_Barbarian_Text_4
POTTERINGTON_FARM_Barbarian_1:
	hidenamebox
	closemessage
	release
	end

POTTERINGTON_FARM_Barbarian_2:
	namebox POTTERINGTON_FARM_Barbarian_Text_0
	msgbox POTTERINGTON_FARM_Barbarian_Text_1
	closemessage
	hidenamebox
	getpartysize
	compare VAR_RESULT, PARTY_SIZE
	goto_if_eq SCRIPT_EGG_NOROOM
	setflag FLAG_RECEIVED_UNGODLING_EGG
	playfanfare MUS_OBTAIN_ITEM
	msgbox POTTERINGTON_FARM_Barbarian_Text_2
	waitfanfare
	giveegg SPECIES_UNGODLING
	namebox POTTERINGTON_FARM_Barbarian_Text_0
	msgbox POTTERINGTON_FARM_Barbarian_Text_3
	goto POTTERINGTON_FARM_Barbarian_1


POTTERINGTON_FARM_ARMADYL::
	lock
	faceplayer
	goto_if_unset FLAG_RECEIVED_ARMALING_EGG, POTTERINGTON_FARM_ARMADYL_2
	playmoncry SPECIES_PIGEON, 1
	namebox POTTERINGTON_FARM_ARMADYL_Text_3
	msgbox POTTERINGTON_FARM_ARMADYL_Text_4
	waitmoncry
	closemessage
	hidenamebox
	msgbox POTTERINGTON_FARM_ARMADYL_Text_5
	closemessage
	hidenamebox
POTTERINGTON_FARM_ARMADYL_1:
	hidenamebox
	closemessage
	release
	end

POTTERINGTON_FARM_ARMADYL_2:
	msgbox POTTERINGTON_FARM_ARMADYL_Text_0
	closemessage
	hidenamebox
	getpartysize
	compare VAR_RESULT, PARTY_SIZE
	goto_if_eq SCRIPT_EGG_NOROOM
	setflag FLAG_RECEIVED_ARMALING_EGG
	playfanfare MUS_OBTAIN_ITEM
	msgbox POTTERINGTON_FARM_ARMADYL_Text_1
	waitfanfare
	giveegg SPECIES_UNGODLING
	msgbox POTTERINGTON_FARM_ARMADYL_Text_2
	goto POTTERINGTON_FARM_ARMADYL_1


MuggerBattleRoute4_Text_0:
	.string "Stand and deliver!$"

MuggerBattleRoute4_Text_1:
	.string "People seem very afraid of me.\p"
	.string "Maybe it's the way I say hello?$"

MuggerBattleRoute4_Text_2:
	.string "Miles$"

ScammerBattleRoute4_Text_0:
	.string "Psst… Want to buy some cabbage?$"

ScammerBattleRoute4_Text_1:
	.string "A no would have been fine…$"

ScammerBattleRoute4_Text_2:
	.string "Fr33Trims$"

ScammerBattleRoute4_Text_3:
	.string "Selling rare black lobster!$"

FarmerBattleRoute4_Text_0:
	.string "I breed all my animals here at\n"
	.string "Potterington farm.$"

FarmerBattleRoute4_Text_1:
	.string "Guess I need to breed stronger\n"
	.string "monsters!$"

FarmerBattleRoute4_Text_2:
	.string "Leeroy$"

FarmerBattleRoute4_Text_3:
	.string "Have you checked out the farm?\p"
	.string "It's a great place to raise monsters of\n"
	.string "your own!$"

Route4Sign_Text_0:
	.string "Potterington Farm$"

ROUTE4_TRIGGER1_DaycareWatcher_Text_0:
	.string "Niece Pott.$"

ROUTE4_TRIGGER1_DaycareWatcher_Text_1:
	.string "Hey!\n"
	.string "Those monsters…\p"
	.string "Let me see them!\p"
	.string "…{PAUSE 15}…{PAUSE 15}…\p"
	.string "Amazing, I can see that your monsters\n"
	.string "trust you quite a lot!\p"
	.string "Follow me adventurer, I wish to show you\n"
	.string "something.$"

ROUTE4_TRIGGER1_DaycareWatcher_Text_2:
	.string "This place is called Potterington Farm!\p"
	.string "Here we can look after your Monsters\n"
	.string "and help them grow while you are away.\p"
	.string "We have also set up breeding pens for\n"
	.string "the monsters.\p"
	.string "You should talk to my mother inside, if\n"
	.string "that is something that interests you.\p"
	.string "Anyway, that is all I wanted to show\n"
	.string "you.\p"
	.string "Stop by anytime, take care!$"

ROUTE4_DaycareWatcher_Text_0:
	.string "Some people have been reporting\n"
	.string "different coloured monsters hatching\l"
	.string "from their eggs which are different\l"
	.string "from the parents.$"

ROUTE4_DaycareWatcher_Text_1:
	.string "There have been rumours that multiple\n"
	.string "monsters have been breeding together\l"
	.string "and creating hybrids.\p"
	.string "But I've yet to see any of these so\n"
	.string "called hybrids.$"

ROUTE4_DaycareWatcher_Text_2:
	.string "I really enjoy just sitting here and\n"
	.string "seeing what type of Monsters the next\l"
	.string "adventurer will bring.$"

ROUTE4_DaycareWatcher_Text_3:
	.string "Over time high achieving adventurers\n"
	.string "visit our little farm and hand out gifts.\p"
	.string "I wonder what makes them decide to\n"
	.string "visit our little farm.$"

ROUTE4_DaycareWatcher_Text_4:
	.string "Did you know that Potterington Farm is\n"
	.string "a family run buisness?\p"
	.string "My mother and father run this farm and\n"
	.string "my grandma runs the farm over near\l"
	.string "Ardougne!$"

ROUTE4_PatchFarmer_Text_0:
	.string "Farmer$"

ROUTE4_PatchFarmer_Text_1:
	.string "Did you know you can plant crops in\n"
	.string "farming patches?$"

ROUTE4_Summoner_Text_0:
	.string "Summoner$"

ROUTE4_Summoner_Text_1:
	.string "These farmers told me that they would\n"
	.string "raise my monsters, but when I came back\l"
	.string "they dumped an egg on me…\p"
	.string "I'm not ready to be a parent…$"

ROUTE4_Diviner_Text_0:
	.string "Diviner$"

ROUTE4_Diviner_Text_1:
	.string "I'm about to go on holiday and I need\n"
	.string "someone look after my Sheep and Wolf\l"
	.string "while I am away.\p"
	.string "Thankfully Potterington farm offered\n"
	.string "to look after them while I am away.$"

POTTERINGTON_FARM_Prezleek_Text_0:
	.string "Prezleek$"

POTTERINGTON_FARM_Prezleek_Text_1:
	.string "Hello.\p"
	.string "Wait…{PAUSE 16} What is that…?{PAUSE 16}\n"
	.string "A rideable Terrorbird?!\p"
	.string "Unbelieveable everyone knows Yaks are\n"
	.string "the best source of transportation.$"

POTTERINGTON_FARM_Prezleek_Text_2:
	.string "Baroo, you agree with me right?$"

POTTERINGTON_FARM_Prezleek_Text_3:
	.string "Baroo$"

POTTERINGTON_FARM_Prezleek_Text_4:
	.string "Baroooo, Baroo!$"

POTTERINGTON_FARM_Prezleek_Text_5:
	.string "See even Baroo agrees.\p"
	.string "Here have this.$"

POTTERINGTON_FARM_Prezleek_Text_6:
	.string "See aren't Yaks so much better than\n"
	.string "Terrorbirds?$"

POTTERINGTON_FARM_Baroo_Text_0:
	.string "Baroo, baroo!$"

POTTERINGTON_FARM_MysteriousFigure_Text_0:
	.string "???$"

POTTERINGTON_FARM_MysteriousFigure_Text_1:
	.string "Greetings, I've come from the otherside\n"
	.string "of Gilenor.\p"
	.string "Along my travels my dark lord asked me\n"
	.string "to pass this on to a person would I\l"
	.string "would meet here at this time and this\l"
	.string "date.\p"
	.string "Here take it.$"

POTTERINGTON_FARM_MysteriousFigure_Text_2:
	.string "Obtained an EGG from the Mysterious\n"
	.string "Figure!$"

POTTERINGTON_FARM_MysteriousFigure_Text_3:
	.string "The dark lord works in mysterious ways.$"

POTTERINGTON_FARM_Camel_Text_0:
	.string "Camel$"

POTTERINGTON_FARM_Camel_Text_1:
	.string "Urrragghhh!!\p"
	.string "Hawk tuah!$"

POTTERINGTON_FARM_Camel_Text_2:
	.string "The camel spits something at you.$"

POTTERINGTON_FARM_Camel_Text_3:
	.string "Obtained an EGG from ???!$"

POTTERINGTON_FARM_Camel_Text_4:
	.string "Hawwwwwwk-{PAUSE 30}\n"
	.string "…{PAUSE 15}Puah…{PAUSE 15}…$"

POTTERINGTON_FARM_Camel_Text_5:
	.string "The camel seems to have gotten a dry\n"
	.string "mouth now.$"

POTTERINGTON_FARM_Camel_Text_6:
	.string "The camel tries to spit at you!\p"
	.string "…{PAUSE 15}…{PAUSE 15} But it's mouth is too dry.$"

POTTERINGTON_FARM_Barbarian_Text_0:
	.string "Holstein$"

POTTERINGTON_FARM_Barbarian_Text_1:
	.string "What is with all of these gods at this\n"
	.string "farm?!\p"
	.string "Disguesting.\p"
	.string "Here take this.$"

POTTERINGTON_FARM_Barbarian_Text_2:
	.string "Obtained an EGG from Holstein!$"

POTTERINGTON_FARM_Barbarian_Text_3:
	.string "REBEL WITH ME!$"

POTTERINGTON_FARM_Barbarian_Text_4:
	.string "REBEL WITH ME!\p"
	.string "DOWN WITH ALL THE GODS!$"

POTTERINGTON_FARM_ARMADYL_Text_0:
	.string "It's a carrier pigeon!\p"
	.string "It appears to have something for you.$"

POTTERINGTON_FARM_ARMADYL_Text_1:
	.string "Obtained an EGG from the pigeon!$"

POTTERINGTON_FARM_ARMADYL_Text_2:
	.string "It came with a note attached.\p"
	.string "{PLAYER} I entr…st you w…th this egg.\n"
	.string "R…ise it well.\p"
	.string "- Fr…m Arm…d-\p"
	.string "The rest of the words are too covered\n"
	.string "in bird poop to make out.$"

POTTERINGTON_FARM_ARMADYL_Text_3:
	.string "Pigeon$"

POTTERINGTON_FARM_ARMADYL_Text_4:
	.string "Berr… Berrr…$"

POTTERINGTON_FARM_ARMADYL_Text_5:
	.string "The pigeon is too focused on eating the\n"
	.string "seeds on the ground.$"
