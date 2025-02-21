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
	.string "Since you beat me, I'll tell you a little\n"
	.string "about what I've read about Kebbits.\p"
	.string "The ones around here apparently evolve\n"
	.string "at level 15.\p"
	.string "If they have higher speed than\n"
	.string "defence, then they'll evolve into Wild\l"
	.string "Kebbits.\p"
	.string "If they have higher speed than\n"
	.string "defence, then they'll evolve into\l"
	.string "Spotted Kebbits.\p"
	.string "And if both of those stats are the\n"
	.string "same, they'll evolve into Polar Kebbits.\p"
	.string "I need to train Hunter more to learn\n"
	.string "about how they evolve from there,\l"
	.string "though.$"

MillLaneMill_Item_WHEAT1_Text_0:
	.string "You search the sack…\p"
	.string "…$"

MillLaneMill_Item_WHEAT1_Text_1:
	.string "The sack is empty.$"
