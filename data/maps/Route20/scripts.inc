Route20_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route20_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Route20_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	goto ROUTE20_STATE
	return


ROUTE20_STATE::
	setflag FLAG_TEMP_1F
	setflag FLAG_TEMP_1E
	removeobject 9
	removeobject 10
	removeobject 11
	removeobject 12
	removeobject 13
	compare VAR_POKESCAPE_STORYMODE_PROGRESS, 160
	goto_if_eq ROUTE20_STATE_2
ROUTE20_STATE_1:
	compare VAR_POKESCAPE_STORYMODE_PROGRESS, 165
	goto_if_eq ROUTE20_STATE_4
	return

ROUTE20_STATE_2:
	clearflag FLAG_TEMP_1F
	clearflag FLAG_TEMP_1E
	addobject 9
	addobject 10
	addobject 11
	addobject 12
	addobject 13
	goto ROUTE20_STATE_1

ROUTE20_STATE_4:
	clearflag FLAG_TEMP_1E
	addobject 11
	addobject 12
	return


BATTLE_ROUTE20_TRAINER_1::
	trainerbattle_single TRAINER_ROUTE20_TRAINER_1, BATTLE_ROUTE20_TRAINER_1_Text_0, BATTLE_ROUTE20_TRAINER_1_Text_1
	namebox BATTLE_ROUTE20_TRAINER_1_Text_2
	msgbox BATTLE_ROUTE20_TRAINER_1_Text_1
	hidenamebox
	release
	end


BATTLE_ROUTE20_TRAINER_2::
	trainerbattle_single TRAINER_ROUTE20_TRAINER_2, BATTLE_ROUTE20_TRAINER_2_Text_0, BATTLE_ROUTE20_TRAINER_2_Text_1
	namebox BATTLE_ROUTE20_TRAINER_2_Text_2
	msgbox BATTLE_ROUTE20_TRAINER_2_Text_1
	hidenamebox
	release
	end


BATTLE_ROUTE20_TRAINER_3::
	trainerbattle_single TRAINER_ROUTE20_TRAINER_3, BATTLE_ROUTE20_TRAINER_3_Text_0, BATTLE_ROUTE20_TRAINER_3_Text_1
	namebox BATTLE_ROUTE20_TRAINER_3_Text_2
	msgbox BATTLE_ROUTE20_TRAINER_3_Text_3
	hidenamebox
	release
	end


ROUTE20_BLOCKADE::
	faceplayer
	namebox ROUTE20_BLOCKADE_Text_0
	msgbox ROUTE20_BLOCKADE_Text_1
	closemessage
	hidenamebox
	release
	end


ITEM_ROUTE20::
	finditem ITEM_WOOLBALL
	end


BATTLE_ROUTE20_TRAINER_1_Text_0:
	.string "Hey, does this canoe lead to a\n"
	.string "runecrafting altar?$"

BATTLE_ROUTE20_TRAINER_1_Text_1:
	.string "It leads to Al Kharid?\p"
	.string "Fire runes it is then.$"

BATTLE_ROUTE20_TRAINER_1_Text_2:
	.string "NatsW40$"

BATTLE_ROUTE20_TRAINER_2_Text_0:
	.string "Fishing in a canoe is awesome!$"

BATTLE_ROUTE20_TRAINER_2_Text_1:
	.string "Sailing will revolutionise fishing\n"
	.string "forever dude.$"

BATTLE_ROUTE20_TRAINER_2_Text_2:
	.string "BaitNSwitch$"

BATTLE_ROUTE20_TRAINER_3_Text_0:
	.string "I summoned this canoe.$"

BATTLE_ROUTE20_TRAINER_3_Text_1:
	.string "You don't seem to be that impressed...$"

BATTLE_ROUTE20_TRAINER_3_Text_2:
	.string "Srift$"

BATTLE_ROUTE20_TRAINER_3_Text_3:
	.string "I don't know where this canoe is going.\p"
	.string "I don't know how to steer.\p"
	.string "I'm running out of food.\p"
	.string "How do I summon this canoe to shore?\p"
	.string "Please dont leave me, I am dying!$"

ROUTE20_BLOCKADE_Text_0:
	.string "Sailor$"

ROUTE20_BLOCKADE_Text_1:
	.string "Woah sorry, I lost my contact lens in\n"
	.string "the water.\p"
	.string "Move along and I will let you pass once\n"
	.string "I find it.$"
