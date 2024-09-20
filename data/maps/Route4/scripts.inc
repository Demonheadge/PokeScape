Route4_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route4_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Route4_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setvar VAR_EVOLUTION_MAP_STATE, 1
	call ROUTE_4_STATE
	call POTTERINGTON_FARM_OUTDOOR_STATE
	goto TryMoveDaycareMan
	return


ROUTE_4_STATE::
	compare VAR_POKESCAPE_GAMEMODE_STATE, 0
	goto_if_eq ROUTE_4_STATE_1
	removeobject 9
	removeobject 11
	setflag FLAG_TEMP_1F
	return

ROUTE_4_STATE_1:
	switch VAR_POKESCAPE_STORYMODE_PROGRESS
	case 100, ROUTE_4_STATE_6
	case 101, ROUTE_4_STATE_6
	removeobject 9
	removeobject 11
	setflag FLAG_TEMP_1F
	return

ROUTE_4_STATE_6:
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
	setobjectxyperm 2, 8, 17
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
	compare VAR_TEMP_2, 27
	goto_if_eq ROUTE4_TRIGGER1_DaycareWatcher_2
ROUTE4_TRIGGER1_DaycareWatcher_1:
	applymovement OBJ_EVENT_ID_PLAYER, MOVEMENT_FACE_UP
	waitmovement 0
	namebox ROUTE4_TRIGGER1_DaycareWatcher_Text_0
	msgbox ROUTE4_TRIGGER1_DaycareWatcher_Text_1
	closemessage
	hidenamebox
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
	compare VAR_TEMP_2, 27
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
	setobjectxyperm 2, 8, 17
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
