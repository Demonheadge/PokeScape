Mill_Lane_Mill_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Mill_Lane_Mill_MapScripts_MAP_SCRIPT_ON_TRANSITION
	map_script MAP_SCRIPT_ON_LOAD, Mill_Lane_Mill_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

Mill_Lane_Mill_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	clearflag FLAG_ITEM_REPEATABLE_ITEM_1
	clearflag FLAG_ITEM_REPEATABLE_ITEM_2
	clearflag FLAG_ITEM_REPEATABLE_ITEM_3
	clearflag FLAG_ITEM_REPEATABLE_ITEM_4
	clearflag FLAG_ITEM_REPEATABLE_ITEM_5
	clearflag FLAG_ITEM_REPEATABLE_ITEM_6
	clearflag FLAG_ITEM_REPEATABLE_ITEM_7
	clearflag FLAG_ITEM_REPEATABLE_ITEM_8
	clearflag FLAG_ITEM_REPEATABLE_ITEM_9
	setvar VAR_EVOLUTION_MAP_STATE, 1
	return

Mill_Lane_Mill_MapScripts_MAP_SCRIPT_ON_LOAD:
	call PURO_PURO_EVENT
	return


SIGN_MILL_LANE_MILL::
	lock
	msgbox SIGN_MILL_LANE_MILL_Text_0
	release
	end


NPC1_MILL_LANE_MILL::
	lock
	faceplayer
	namebox NPC1_MILL_LANE_MILL_Text_0
	msgbox NPC1_MILL_LANE_MILL_Text_1
	release
	end


NPC2_MILL_LANE_MILL::
	lock
	faceplayer
	namebox NPC2_MILL_LANE_MILL_Text_0
	msgbox NPC2_MILL_LANE_MILL_Text_1
	hidenamebox
	closemessage
	release
	end


BEEFY_BILL_MILL_LANE_MILL::
	lock
	faceplayer
	namebox BEEFY_BILL_MILL_LANE_MILL_Text_0
	msgbox BEEFY_BILL_MILL_LANE_MILL_Text_1
	waitmessage
	hidenamebox
	pokemart GeneralStoreBeefyBill
	msgbox BEEFY_BILL_MILL_LANE_MILL_Text_2
	release
	end



    .align 2
GeneralStoreBeefyBill:
    .2byte ITEM_CADAVABERRY
    .2byte ITEM_DWELLBERRY
    .2byte ITEM_JANGERBERRY
    .2byte ITEM_WHITEBERRY
    .2byte ITEM_REDBERRY
    .2byte ITEM_EMPTY_BUCKET
    .2byte ITEM_NONE
    release
    end


    .align 2
StoreFarmingFoods:
    .2byte ITEM_POTATO
    .2byte ITEM_ONION
    .2byte ITEM_TOMATO
    .2byte ITEM_CORN
    .2byte ITEM_WATERMELON
    .2byte ITEM_TURNIP
    .2byte ITEM_NONE
    release
    end

GNOME_MILL_LANE_MILL::
	lock
	faceplayer
	namebox GNOME_MILL_LANE_MILL_Text_0
	msgbox GNOME_MILL_LANE_MILL_Text_1
	msgbox GNOME_MILL_LANE_MILL_Text_2
	hidenamebox
	release
	end


Trainer1_MillLaneMill_Battle::
	trainerbattle_double TRAINER_TRAINER1_MILLLANEMILL, Trainer1_MillLaneMill_Battle_Text_0, Trainer1_MillLaneMill_Battle_Text_1, Trainer1_MillLaneMill_Battle_Text_2
	namebox Trainer1_MillLaneMill_Battle_Text_3
	msgbox Trainer1_MillLaneMill_Battle_Text_4
	hidenamebox
	release
	end


MillLaneMill_Item_PURPLE_SWEETS::
	finditem ITEM_PURPLE_SWEETS
	end


MillLaneMill_Item_WHEAT1::
	msgbox MillLaneMill_Item_WHEAT1_Text_0
	goto_if_unset FLAG_ITEM_REPEATABLE_ITEM_1, MillLaneMill_Item_WHEAT1_1
	msgbox MillLaneMill_Item_WHEAT1_Text_1
	release
	end

MillLaneMill_Item_WHEAT1_1:
	lock
	giveitem ITEM_WHEAT
	setflag FLAG_ITEM_REPEATABLE_ITEM_1
	release
	end


MillLaneMill_Item_WHEAT2::
	msgbox MillLaneMill_Item_WHEAT1_Text_0
	goto_if_unset FLAG_ITEM_REPEATABLE_ITEM_2, MillLaneMill_Item_WHEAT2_1
	msgbox MillLaneMill_Item_WHEAT1_Text_1
	release
	end

MillLaneMill_Item_WHEAT2_1:
	lock
	giveitem ITEM_WHEAT
	setflag FLAG_ITEM_REPEATABLE_ITEM_2
	release
	end


MillLaneMill_Item_WHEAT3::
	msgbox MillLaneMill_Item_WHEAT1_Text_0
	goto_if_unset FLAG_ITEM_REPEATABLE_ITEM_3, MillLaneMill_Item_WHEAT3_1
	msgbox MillLaneMill_Item_WHEAT1_Text_1
	release
	end

MillLaneMill_Item_WHEAT3_1:
	lock
	giveitem ITEM_WHEAT
	setflag FLAG_ITEM_REPEATABLE_ITEM_3
	release
	end


MillLaneMill_Item_WHEAT4::
	msgbox MillLaneMill_Item_WHEAT1_Text_0
	goto_if_unset FLAG_ITEM_REPEATABLE_ITEM_4, MillLaneMill_Item_WHEAT4_1
	msgbox MillLaneMill_Item_WHEAT1_Text_1
	release
	end

MillLaneMill_Item_WHEAT4_1:
	lock
	giveitem ITEM_WHEAT
	setflag FLAG_ITEM_REPEATABLE_ITEM_4
	release
	end


MillLaneMill_Item_WHEAT5::
	msgbox MillLaneMill_Item_WHEAT1_Text_0
	goto_if_unset FLAG_ITEM_REPEATABLE_ITEM_5, MillLaneMill_Item_WHEAT5_1
	msgbox MillLaneMill_Item_WHEAT1_Text_1
	release
	end

MillLaneMill_Item_WHEAT5_1:
	lock
	giveitem ITEM_WHEAT
	setflag FLAG_ITEM_REPEATABLE_ITEM_5
	release
	end


PURO_PURO_EVENT_MILL_LANE_MILL::
	setmetatile 5, 19, METATILE_PokeScapeOutdoors_SHAKING_WHEAT, 0
	setmetatile 5, 20, METATILE_PokeScapeOutdoors_SHAKING_WHEAT, 0
	setmetatile 5, 21, METATILE_PokeScapeOutdoors_SHAKING_WHEAT, 0
	setmetatile 5, 22, METATILE_PokeScapeOutdoors_SHAKING_WHEAT, 0
	setmetatile 6, 22, METATILE_PokeScapeOutdoors_SHAKING_WHEAT, 0
	setmetatile 7, 19, METATILE_PokeScapeOutdoors_SHAKING_WHEAT, 0
	setmetatile 7, 20, METATILE_PokeScapeOutdoors_SHAKING_WHEAT, 0
	setmetatile 7, 21, METATILE_PokeScapeOutdoors_SHAKING_WHEAT, 0
	setmetatile 7, 22, METATILE_PokeScapeOutdoors_SHAKING_WHEAT, 0
	setmetatile 6, 19, METATILE_PokeScapeOutdoors_TELEPORT_WHEAT_1, 0
	setmetatile 6, 20, METATILE_PokeScapeOutdoors_TELEPORT_WHEAT_2, 0
	setmetatile 6, 21, METATILE_PokeScapeOutdoors_TELEPORT_WHEAT_3, 0
	return


MODEST_SAMUEL_Battle::
	trainerbattle_single TRAINER_MODESTSAMUEL, MODEST_SAMUEL_Battle_Text_0, MODEST_SAMUEL_Battle_Text_1
	namebox MODEST_SAMUEL_Battle_Text_2
	msgbox MODEST_SAMUEL_Battle_Text_3
	hidenamebox
	release
	end


MILL_LANE_MILL_HUNTER_NPC::
	lock
	faceplayer
	namebox MILL_LANE_MILL_HUNTER_NPC_Text_0
	random 7
	switch VAR_RESULT
	case 0, MILL_LANE_MILL_HUNTER_NPC_3
	case 1, MILL_LANE_MILL_HUNTER_NPC_4
	case 2, MILL_LANE_MILL_HUNTER_NPC_5
	case 3, MILL_LANE_MILL_HUNTER_NPC_6
	case 4, MILL_LANE_MILL_HUNTER_NPC_7
	case 5, MILL_LANE_MILL_HUNTER_NPC_8
	case 6, MILL_LANE_MILL_HUNTER_NPC_9
MILL_LANE_MILL_HUNTER_NPC_1:
	hidenamebox
	closemessage
	release
	end

MILL_LANE_MILL_HUNTER_NPC_3:
	msgbox MILL_LANE_MILL_HUNTER_NPC_Text_1
	goto MILL_LANE_MILL_HUNTER_NPC_1

MILL_LANE_MILL_HUNTER_NPC_4:
	msgbox MILL_LANE_MILL_HUNTER_NPC_Text_2
	goto MILL_LANE_MILL_HUNTER_NPC_1

MILL_LANE_MILL_HUNTER_NPC_5:
	msgbox MILL_LANE_MILL_HUNTER_NPC_Text_3
	goto MILL_LANE_MILL_HUNTER_NPC_1

MILL_LANE_MILL_HUNTER_NPC_6:
	msgbox MILL_LANE_MILL_HUNTER_NPC_Text_4
	goto MILL_LANE_MILL_HUNTER_NPC_1

MILL_LANE_MILL_HUNTER_NPC_7:
	msgbox MILL_LANE_MILL_HUNTER_NPC_Text_5
	goto MILL_LANE_MILL_HUNTER_NPC_1

MILL_LANE_MILL_HUNTER_NPC_8:
	msgbox MILL_LANE_MILL_HUNTER_NPC_Text_6
	goto MILL_LANE_MILL_HUNTER_NPC_1

MILL_LANE_MILL_HUNTER_NPC_9:
	msgbox MILL_LANE_MILL_HUNTER_NPC_Text_7
	goto MILL_LANE_MILL_HUNTER_NPC_1


SIGN_MILL_LANE_MILL_Text_0:
	.string "Mill Lane Mill.\p"
	.string "The finest flour in all of Gielinor.$"

NPC1_MILL_LANE_MILL_Text_0:
	.string "Farmer$"

NPC1_MILL_LANE_MILL_Text_1:
	.string "This is the Mill Lane Mill.\p"
	.string "The Miller family has produced flour for\n"
	.string "generations!$"

NPC2_MILL_LANE_MILL_Text_0:
	.string "Farmer Jake$"

NPC2_MILL_LANE_MILL_Text_1:
	.string "These implings keep taunting me!\p"
	.string "All I want to do is have a chill day\n"
	.string "slacking off after losing to the Duke.$"

BEEFY_BILL_MILL_LANE_MILL_Text_0:
	.string "W. Whitebred$"

BEEFY_BILL_MILL_LANE_MILL_Text_1:
	.string "Welcome to Beefy Bill's Supplies!\p"
	.string "Care to take a look at my stock?$"

BEEFY_BILL_MILL_LANE_MILL_Text_2:
	.string "Thank you, come again!$"

GNOME_MILL_LANE_MILL_Text_0:
	.string "Avlafrim$"

GNOME_MILL_LANE_MILL_Text_1:
	.string "Have you ever wish to fly off to the\n"
	.string "faroff locations of Pokescape?\p"
	.string "Meet new challenges and Monsters?\p"
	.string "Here is where I put my gnomecopter, but\n"
	.string "it needs repair.\p"
	.string "I need T.R.A.S.H. and then I can bring\n"
	.string "you to some places where I can land\l"
	.string "with my copter.$"

GNOME_MILL_LANE_MILL_Text_2:
	.string "T.R.A.S.H. is the next generation of\n"
	.string "lightweight ropes.\p"
	.string "Triple Redundant Aero Super Hawser.\p"
	.string "However I am unsure where to get these.\p"
	.string "I am unused to Human Lands and as my\n"
	.string "Terrorbird broke a leg going back to the\l"
	.string "Grand Tree would take me forever!\p"
	.string "Continue your adventure and you might\n"
	.string "find T.R.A.S.H. on your path.$"

Trainer1_MillLaneMill_Battle_Text_0:
	.string "Have you seen any Kebbits around here?$"

Trainer1_MillLaneMill_Battle_Text_1:
	.string "I need to get a higher hunting level…$"

Trainer1_MillLaneMill_Battle_Text_2:
	.string "I would love to have a double battle\n"
	.string "with you.$"

Trainer1_MillLaneMill_Battle_Text_3:
	.string "Kebbie$"

Trainer1_MillLaneMill_Battle_Text_4:
	.string "If you want to know more about Kebbits,\n"
	.string "try speaking to my mentor.\p"
	.string "He should be around here somewhere.$"

MillLaneMill_Item_WHEAT1_Text_0:
	.string "You search the sack…\p"
	.string "…$"

MillLaneMill_Item_WHEAT1_Text_1:
	.string "The sack is empty.$"

MODEST_SAMUEL_Battle_Text_0:
	.string "Oh, sorry, I was looking around here for\n"
	.string "a new friend to add to my party.\p"
	.string "Did you want to battle?$"

MODEST_SAMUEL_Battle_Text_1:
	.string "It doesn't matter that we lost.\p"
	.string "My monsters did their best!$"

MODEST_SAMUEL_Battle_Text_2:
	.string "Samuel$"

MODEST_SAMUEL_Battle_Text_3:
	.string "Win or lose, I'll always battle with my\n"
	.string "favourite monsters.$"

MILL_LANE_MILL_HUNTER_NPC_Text_0:
	.string "Chymp$"

MILL_LANE_MILL_HUNTER_NPC_Text_1:
	.string "The kebbits you can catch around here\n"
	.string "evolve at level 15.\p"
	.string "If they have higher speed than\n"
	.string "defence, then they'll evolve into Wild\l"
	.string "Kebbits.\p"
	.string "If they have higher speed than\n"
	.string "defence, then they'll evolve into\l"
	.string "Spotted Kebbits.\p"
	.string "And if both of those stats are the\n"
	.string "same, they'll evolve into Polar Kebbits.\p"
	.string "$"

MILL_LANE_MILL_HUNTER_NPC_Text_2:
	.string "I really, really love Kebbits!\p"
	.string "I'm happy to share my knowledge with\n"
	.string "you if you want to keep talking.$"

MILL_LANE_MILL_HUNTER_NPC_Text_3:
	.string "Did you know that there are 15\n"
	.string "different types of kebbits?\p"
	.string "They're all NORMAL type, but sometimes\n"
	.string "when they evolve they gain a secondary\l"
	.string "typing.\p"
	.string "You'll have to discover those for\n"
	.string "yourself!$"

MILL_LANE_MILL_HUNTER_NPC_Text_4:
	.string "If you teach a Barbed Kebbit a POISON\n"
	.string "move, it starts to look very ill.\p"
	.string "I love Kebbits too much to do it myself.$"

MILL_LANE_MILL_HUNTER_NPC_Text_5:
	.string "Desert Devil Kebbits LOVE chocolate.\p"
	.string "If you feed them something chocolatey,\n"
	.string "they'll evolve into a very unique type\l"
	.string "of Kebbit.$"

MILL_LANE_MILL_HUNTER_NPC_Text_6:
	.string "Prickly Kebbits have different\n"
	.string "evolutions depending on whether you\l"
	.string "level them up during the day or at\l"
	.string "night.\p"
	.string "Try it out and see which type you\n"
	.string "prefer.$"

MILL_LANE_MILL_HUNTER_NPC_Text_7:
	.string "Spotted and Wild Kebbits evolve more\n"
	.string "quickly than Polar Kebbits.\p"
	.string "Keep this in mind when training yours\n"
	.string "up.$"
