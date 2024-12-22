Route24_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route24_MapScripts_MAP_SCRIPT_ON_TRANSITION
	map_script MAP_SCRIPT_ON_LOAD, Route24_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

Route24_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setvar VAR_EVOLUTION_MAP_STATE, 3
	call RANDOM_EVENT_IMPLING
	return

Route24_MapScripts_MAP_SCRIPT_ON_LOAD:
	call PURO_PURO_EVENT
	return


ROUTE24_SIGNPOST::
	msgbox ROUTE24_SIGNPOST_Text_0
	closemessage
	end


ROUTE24_GOBLIN_SIGNPOST::
	msgbox ROUTE24_GOBLIN_SIGNPOST_Text_0
	closemessage
	end


NPC_ROUTE24_BLOCKADE_1::
	lock
	faceplayer
	namebox NPC_ROUTE24_BLOCKADE_1_Text_0
	msgbox NPC_ROUTE24_BLOCKADE_1_Text_1
	hidenamebox
	release
	end


BLOCK_ROUTE24_BLOCKADE_WHITEKNIGHT::
	lock
	namebox NPC_ROUTE24_BLOCKADE_1_Text_0
	msgbox NPC_ROUTE24_BLOCKADE_1_Text_1
	closemessage
	hidenamebox
	applymovement OBJ_EVENT_ID_PLAYER, Blockmovement_WhiteKnight
	waitmovement 0
	release
	end


Blockmovement_WhiteKnight:
	slide_right
	step_end

BATTLE_ROUTE24_MUGGER::
	trainerbattle_single TRAINER_ROUTE24_MUGGER, BATTLE_ROUTE24_MUGGER_Text_0, BATTLE_ROUTE24_MUGGER_Text_1
	namebox BATTLE_ROUTE24_MUGGER_Text_2
	msgbox BATTLE_ROUTE24_MUGGER_Text_1
	hidenamebox
	release
	end


BATTLE_ROUTE24_WOODCUTTER_1::
	trainerbattle_single TRAINER_NYCHANNEL, BATTLE_ROUTE24_WOODCUTTER_1_Text_0, BATTLE_ROUTE24_WOODCUTTER_1_Text_1
	namebox BATTLE_ROUTE24_WOODCUTTER_1_Text_2
	msgbox BATTLE_ROUTE24_WOODCUTTER_1_Text_1
	hidenamebox
	release
	end


BATTLE_ROUTE24_WOODCUTTER_2::
	trainerbattle_single TRAINER_ROUTE24_WOODCUTTER_2, BATTLE_ROUTE24_WOODCUTTER_2_Text_0, BATTLE_ROUTE24_WOODCUTTER_2_Text_1
	namebox BATTLE_ROUTE24_WOODCUTTER_2_Text_2
	msgbox BATTLE_ROUTE24_WOODCUTTER_2_Text_1
	hidenamebox
	release
	end


BATTLE_ROUTE24_GOBLIN_1::
	trainerbattle_single TRAINER_ROUTE24_GOBLIN_1, BATTLE_ROUTE24_GOBLIN_1_Text_0, BATTLE_ROUTE24_GOBLIN_1_Text_1
	namebox BATTLE_ROUTE24_GOBLIN_1_Text_2
	msgbox BATTLE_ROUTE24_GOBLIN_1_Text_1
	hidenamebox
	release
	end


BATTLE_ROUTE24_GOBLIN_2::
	trainerbattle_single TRAINER_ROUTE24_GOBLIN_2, BATTLE_ROUTE24_GOBLIN_2_Text_0, BATTLE_ROUTE24_GOBLIN_2_Text_1
	namebox BATTLE_ROUTE24_GOBLIN_2_Text_2
	msgbox BATTLE_ROUTE24_GOBLIN_2_Text_1
	hidenamebox
	release
	end


BATTLE_ROUTE24_GOBLIN_3::
	trainerbattle_single TRAINER_ROUTE24_GOBLIN_3, BATTLE_ROUTE24_GOBLIN_3_Text_0, BATTLE_ROUTE24_GOBLIN_3_Text_1
	namebox BATTLE_ROUTE24_GOBLIN_3_Text_2
	msgbox BATTLE_ROUTE24_GOBLIN_3_Text_1
	hidenamebox
	release
	end


BATTLE_ROUTE24_GOBLIN_4::
	trainerbattle_single TRAINER_ROUTE24_GOBLIN_4, BATTLE_ROUTE24_GOBLIN_4_Text_0, BATTLE_ROUTE24_GOBLIN_4_Text_1
	namebox BATTLE_ROUTE24_GOBLIN_4_Text_2
	msgbox BATTLE_ROUTE24_GOBLIN_4_Text_1
	hidenamebox
	release
	end


NPC_ROUTE24_NPC_1::
	lock
	faceplayer
	namebox NPC_ROUTE24_NPC_1_Text_0
	msgbox NPC_ROUTE24_NPC_1_Text_1
	hidenamebox
	release
	end


NPC_ROUTE24_NPC_2::
	lock
	faceplayer
	namebox NPC_ROUTE24_NPC_2_Text_0
	msgbox NPC_ROUTE24_NPC_2_Text_1
	hidenamebox
	release
	end


BATTLE_ROUTE40_DIVINER::
	trainerbattle_single TRAINER_ROUTE40_DIVINER, BATTLE_ROUTE40_DIVINER_Text_0, BATTLE_ROUTE40_DIVINER_Text_1
	namebox BATTLE_ROUTE40_DIVINER_Text_2
	msgbox BATTLE_ROUTE40_DIVINER_Text_3
	hidenamebox
	release
	end


PURO_PURO_EVENT_ROUTE24::
	setmetatile 15, 27, METATILE_PokeScapeOutdoors_SHAKING_WHEAT, 0
	setmetatile 14, 28, METATILE_PokeScapeOutdoors_SHAKING_WHEAT, 0
	setmetatile 15, 28, METATILE_PokeScapeOutdoors_SHAKING_WHEAT, 0
	setmetatile 16, 28, METATILE_PokeScapeOutdoors_SHAKING_WHEAT, 0
	setmetatile 17, 28, METATILE_PokeScapeOutdoors_SHAKING_WHEAT, 0
	setmetatile 14, 29, METATILE_PokeScapeOutdoors_SHAKING_WHEAT, 0
	setmetatile 15, 29, METATILE_PokeScapeOutdoors_SHAKING_WHEAT, 0
	setmetatile 16, 29, METATILE_PokeScapeOutdoors_SHAKING_WHEAT, 0
	setmetatile 17, 29, METATILE_PokeScapeOutdoors_SHAKING_WHEAT, 0
	setmetatile 15, 30, METATILE_PokeScapeOutdoors_SHAKING_WHEAT, 0
	setmetatile 16, 30, METATILE_PokeScapeOutdoors_SHAKING_WHEAT, 0
	setmetatile 17, 30, METATILE_PokeScapeOutdoors_SHAKING_WHEAT, 0
	setmetatile 18, 30, METATILE_PokeScapeOutdoors_SHAKING_WHEAT, 0
	setmetatile 16, 28, METATILE_PokeScapeOutdoors_TELEPORT_WHEAT_1, 0
	setmetatile 16, 29, METATILE_PokeScapeOutdoors_TELEPORT_WHEAT_2, 0
	setmetatile 16, 30, METATILE_PokeScapeOutdoors_TELEPORT_WHEAT_3, 0
	return


ROUTE24_SIGNPOST_Text_0:
	.string "East to Taverley.\p"
	.string "North to Goblin Village\p"
	.string "South to Falador.$"

ROUTE24_GOBLIN_SIGNPOST_Text_0:
	.string "Goblin Village.\p"
	.string "Red Armour best!$"

NPC_ROUTE24_BLOCKADE_1_Text_0:
	.string "White Knight$"

NPC_ROUTE24_BLOCKADE_1_Text_1:
	.string "Beyond here is too dangerous due to\n"
	.string "the Trolls invading Burthorpe.\p"
	.string "Only members of the White Knights may\n"
	.string "pass.$"

BATTLE_ROUTE24_MUGGER_Text_0:
	.string "Deliver and stand!$"

BATTLE_ROUTE24_MUGGER_Text_1:
	.string "Sorry I mixed that up, could you please\n"
	.string "be robbed again?\p"
	.string "No?\p"
	.string "Ok then…$"

BATTLE_ROUTE24_MUGGER_Text_2:
	.string "Mugger$"

BATTLE_ROUTE24_WOODCUTTER_1_Text_0:
	.string "Woodcutting is more than just cutting\n"
	.string "trees, here let me show you.$"

BATTLE_ROUTE24_WOODCUTTER_1_Text_1:
	.string "If I lose a battle and nobody is here.\p"
	.string "Do I still get xp?$"

BATTLE_ROUTE24_WOODCUTTER_1_Text_2:
	.string "NyChannel$"

BATTLE_ROUTE24_WOODCUTTER_2_Text_0:
	.string "To chop down trees you need a hatchet\n"
	.string "like mine.$"

BATTLE_ROUTE24_WOODCUTTER_2_Text_1:
	.string "I bet you don't even have over 20\n"
	.string "Woodcutting.$"

BATTLE_ROUTE24_WOODCUTTER_2_Text_2:
	.string "L0ggerh3ad$"

BATTLE_ROUTE24_GOBLIN_1_Text_0:
	.string "Prepare for battle human!$"

BATTLE_ROUTE24_GOBLIN_1_Text_1:
	.string "Human prepare well.$"

BATTLE_ROUTE24_GOBLIN_1_Text_2:
	.string "Cleansbane$"

BATTLE_ROUTE24_GOBLIN_2_Text_0:
	.string "Stay out of village smelly human!$"

BATTLE_ROUTE24_GOBLIN_2_Text_1:
	.string "Goblin Village not take kindly to your\n"
	.string "kind.$"

BATTLE_ROUTE24_GOBLIN_2_Text_2:
	.string "Smellygob$"

BATTLE_ROUTE24_GOBLIN_3_Text_0:
	.string "Guard duty serious task given by\n"
	.string "General Bentnose.\p"
	.string "Stay gone human!$"

BATTLE_ROUTE24_GOBLIN_3_Text_1:
	.string "Bootlicker is considering changing to\n"
	.string "green faction.\p"
	.string "Wartface is better leader.$"

BATTLE_ROUTE24_GOBLIN_3_Text_2:
	.string "Bootlicker$"

BATTLE_ROUTE24_GOBLIN_4_Text_0:
	.string "Red or green, humans stay out.$"

BATTLE_ROUTE24_GOBLIN_4_Text_1:
	.string "Conflict of colours eternal.$"

BATTLE_ROUTE24_GOBLIN_4_Text_2:
	.string "Bentwart$"

NPC_ROUTE24_NPC_1_Text_0:
	.string "MAN$"

NPC_ROUTE24_NPC_1_Text_1:
	.string "Due east is Varrock, the capital of\n"
	.string "Misthalin.\p"
	.string "On the way there you can meet some\n"
	.string "unfriendly dwarves and barbarians but\l"
	.string "don't let them ruin your day.$"

NPC_ROUTE24_NPC_2_Text_0:
	.string "WOMAN$"

NPC_ROUTE24_NPC_2_Text_1:
	.string "Up north is the Goblin Village.\p"
	.string "They do not enjoy the company of\n"
	.string "humans and seem to be under some civil\l"
	.string "war over differing opinions.\p"
	.string "I suggest you go east instead\n"
	.string "adventurer.$"

BATTLE_ROUTE40_DIVINER_Text_0:
	.string "I feel a strange power emanating from\n"
	.string "these rock formations.$"

BATTLE_ROUTE40_DIVINER_Text_1:
	.string "I feel it!\n"
	.string "It makes me feel all tingly!$"

BATTLE_ROUTE40_DIVINER_Text_2:
	.string "Nyx$"

BATTLE_ROUTE40_DIVINER_Text_3:
	.string "You feel it too don't you?\p"
	.string "The strange power emanating from these\n"
	.string "rocks.$"
