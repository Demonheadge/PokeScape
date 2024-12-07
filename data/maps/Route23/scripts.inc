Route23_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, Route23_MapScripts_MAP_SCRIPT_ON_LOAD
	map_script MAP_SCRIPT_ON_TRANSITION, Route23_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Route23_MapScripts_MAP_SCRIPT_ON_LOAD:
	call ROUTE23_METATILES
	return

Route23_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setvar VAR_EVOLUTION_MAP_STATE, 3
	call ROUTE23_STATE
	call PENGUIN_EVENT
	return


ENCOUNTER_PENGUIN_ROCK_ROUTE23::
	lock
	faceplayer
	namebox ENCOUNTER_PENGUIN_ROCK_ROUTE23_Text_0
	playmoncry SPECIES_PENGUIN_DISGUISE_ROCK_FORM, 0
	msgbox ENCOUNTER_PENGUIN_ROCK_ROUTE23_Text_1
	waitmoncry
	hidenamebox
	closemessage
	delay 1
	setwildbattle SPECIES_PENGUIN_DISGUISE_ROCK_FORM, 30, ITEM_NONE
	dowildbattle
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq ENCOUNTER_PENGUIN_ROCK_ROUTE23_2
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq ENCOUNTER_PENGUIN_ROCK_ROUTE23_2
ENCOUNTER_PENGUIN_ROCK_ROUTE23_1:
	end

ENCOUNTER_PENGUIN_ROCK_ROUTE23_2:
	fadescreenswapbuffers FADE_TO_BLACK
	setflag FLAG_TEMP_8
	setflag FLAG_TEMP_9
	removeobject 14
	removeobject 13
	savebgm MUS_DUMMY
	fadedefaultbgm
	fadescreenswapbuffers FADE_FROM_BLACK
	closemessage
	goto ENCOUNTER_PENGUIN_ROCK_ROUTE23_1


ROUTE23_METATILES::
	goto_if_set FLAG_ROCKS_ROUTE23, ROUTE23_METATILES_2
ROUTE23_METATILES_1:
	compare VAR_POKESCAPE_STORYMODE_PROGRESS, 200
	goto_if_ge ROUTE23_METATILES_5
ROUTE23_METATILES_4:
	return

ROUTE23_METATILES_2:
	setmetatile 8, 10, METATILE_PokeScapeOutdoors_DIRT_PATH_MIDDLE, 0
	setmetatile 10, 10, METATILE_PokeScapeOutdoors_DIRT_PATH_MIDDLE, 0
	goto ROUTE23_METATILES_1

ROUTE23_METATILES_5:
	setmetatile 30, 7, METATILE_PokeScapeOutdoors_NORMAL_GRASS_TILE, 0
	setmetatile 31, 7, METATILE_PokeScapeOutdoors_NORMAL_GRASS_TILE, 0
	setmetatile 32, 7, METATILE_PokeScapeOutdoors_NORMAL_GRASS_TILE, 0
	setmetatile 33, 7, METATILE_PokeScapeOutdoors_NORMAL_GRASS_TILE, 0
	setmetatile 32, 8, METATILE_PokeScapeOutdoors_NORMAL_GRASS_TILE, 0
	setmetatile 33, 8, METATILE_PokeScapeOutdoors_NORMAL_GRASS_TILE, 0
	goto ROUTE23_METATILES_4


ROUTE23_STATE::
	compare VAR_POKESCAPE_STORYMODE_PROGRESS, 200
	goto_if_ge ROUTE23_STATE_2
ROUTE23_STATE_1:
	goto_if_set FLAG_ROCKS_ROUTE23, ROUTE23_STATE_4
	return

ROUTE23_STATE_2:
	removeobject 11
	removeobject 10
	setflag FLAG_TEMP_1E
	goto ROUTE23_STATE_1

ROUTE23_STATE_4:
	setflag FLAG_TEMP_1
	removeobject 8
	setobjectmovementtype 5, MOVEMENT_TYPE_WANDER_LEFT_AND_RIGHT
	setobjectxyperm 5, 12, 10
	return


NPC_ROUTE23_DWARF_ROCKS::
	lock
	faceplayer
	namebox NPC_ROUTE23_DWARF_ROCKS_Text_0
	goto_if_unset FLAG_ROCKS_ROUTE23, NPC_ROUTE23_DWARF_ROCKS_2
	msgbox NPC_ROUTE23_DWARF_ROCKS_Text_2
NPC_ROUTE23_DWARF_ROCKS_1:
	closemessage
	hidenamebox
	release
	end

NPC_ROUTE23_DWARF_ROCKS_2:
	msgbox NPC_ROUTE23_DWARF_ROCKS_Text_1
	goto NPC_ROUTE23_DWARF_ROCKS_1


NPC_ROUTE23_BLOCKADE_DWARVES::
	lock
	faceplayer
	namebox NPC_ROUTE23_DWARF_ROCKS_Text_0
	msgbox NPC_ROUTE23_BLOCKADE_DWARVES_Text_0
	closemessage
	hidenamebox
	applymovement 11, Movement_InteractFACEUP
	applymovement 10, Movement_InteractFACEUP
	waitmovement 0
	release
	end


BATTLE_ROUTE23_TRAINER_1::
	trainerbattle_single TRAINER_ROUTE23_TRAINER_1, BATTLE_ROUTE23_TRAINER_1_Text_0, BATTLE_ROUTE23_TRAINER_1_Text_1
	msgbox BATTLE_ROUTE23_TRAINER_1_Text_2
	hidenamebox
	release
	end


BATTLE_ROUTE23_TRAINER_2::
	trainerbattle_single TRAINER_ROUTE23_TRAINER_2, BATTLE_ROUTE23_TRAINER_2_Text_0, BATTLE_ROUTE23_TRAINER_2_Text_1
	msgbox BATTLE_ROUTE23_TRAINER_2_Text_2
	hidenamebox
	release
	end


BATTLE_ROUTE23_TRAINER_BARB_COUPLE_1::
	trainerbattle_double TRAINER_ROUTE23_TRAINER_COUPLE, BATTLE_ROUTE23_TRAINER_BARB_COUPLE_1_Text_0, BATTLE_ROUTE23_TRAINER_BARB_COUPLE_1_Text_1, BATTLE_ROUTE23_TRAINER_BARB_COUPLE_1_Text_2
	namebox BATTLE_ROUTE23_TRAINER_BARB_COUPLE_1_Text_3
	msgbox BATTLE_ROUTE23_TRAINER_BARB_COUPLE_1_Text_4
	hidenamebox
	release
	end


BATTLE_ROUTE23_TRAINER_BARB_COUPLE_2::
	trainerbattle_double TRAINER_ROUTE23_TRAINER_COUPLE, BATTLE_ROUTE23_TRAINER_BARB_COUPLE_2_Text_0, BATTLE_ROUTE23_TRAINER_BARB_COUPLE_1_Text_1, BATTLE_ROUTE23_TRAINER_BARB_COUPLE_1_Text_2
	namebox BATTLE_ROUTE23_TRAINER_BARB_COUPLE_2_Text_1
	msgbox BATTLE_ROUTE23_TRAINER_BARB_COUPLE_2_Text_2
	hidenamebox
	release
	end


BATTLE_ROUTE23_TRAINER_3::
	trainerbattle_single TRAINER_ROUTE23_TRAINER_3, BATTLE_ROUTE23_TRAINER_3_Text_0, BATTLE_ROUTE23_TRAINER_3_Text_1
	msgbox BATTLE_ROUTE23_TRAINER_3_Text_1
	hidenamebox
	release
	end


BATTLE_ROUTE23_TRAINER_4::
	trainerbattle_single TRAINER_ROUTE23_TRAINER_4, BATTLE_ROUTE23_TRAINER_4_Text_0, BATTLE_ROUTE23_TRAINER_4_Text_1
	msgbox BATTLE_ROUTE23_TRAINER_4_Text_1
	hidenamebox
	release
	end


SCRIPT_PHEONIX_EGG::
	lock
	msgbox SCRIPT_PHEONIX_EGG_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_eq SCRIPT_PHEONIX_EGG_2
	msgbox SCRIPT_PHEONIX_EGG_Text_2
	multichoicedefault 1, 0, MULTI_PHEONIXEGG, 0, 1
	switch VAR_RESULT
	case 0, SCRIPT_PHEONIX_EGG_5
	case 1, SCRIPT_PHEONIX_EGG_6
	return

SCRIPT_PHEONIX_EGG_2:
	msgbox SCRIPT_PHEONIX_EGG_Text_1
	release
	end

SCRIPT_PHEONIX_EGG_5:
	goto SCRIPT_PHEONIX_EGG_CLAP
	return

SCRIPT_PHEONIX_EGG_6:
	goto SCRIPT_PHEONIX_EGG_KICK
	return


SCRIPT_PHEONIX_EGG_CLAP::
	msgbox SCRIPT_PHEONIX_EGG_CLAP_Text_0
	getpartysize
	compare VAR_RESULT, PARTY_SIZE
	msgbox SCRIPT_PHEONIX_EGG_CLAP_Text_1
	goto_if_eq SCRIPT_PHEONIX_EGG_NOROOM
	setflag FLAG_RECEIVED_PHOENIX_EGG
	removeobject 3
	playfanfare MUS_OBTAIN_ITEM
	msgbox SCRIPT_PHEONIX_EGG_CLAP_Text_2
	waitfanfare
	giveegg SPECIES_PHOENLING_REBIRTH_FORM
	release
	end


SCRIPT_PHEONIX_EGG_KICK::
	msgbox SCRIPT_PHEONIX_EGG_KICK_Text_0
	playse SE_WALL_HIT
	msgbox SCRIPT_PHEONIX_EGG_KICK_Text_1
	getpartysize
	compare VAR_RESULT, PARTY_SIZE
	msgbox SCRIPT_PHEONIX_EGG_CLAP_Text_1
	goto_if_eq SCRIPT_PHEONIX_EGG_NOROOM
	setflag FLAG_RECEIVED_PHOENIX_EGG
	removeobject 3
	playfanfare MUS_OBTAIN_ITEM
	msgbox SCRIPT_PHEONIX_EGG_KICK_Text_2
	waitfanfare
	giveegg SPECIES_PHOENLING_REBORN_FORM
	release
	end


SCRIPT_PHEONIX_EGG_NOROOM::
	msgbox SCRIPT_PHEONIX_EGG_NOROOM_Text_0
	release
	end


ROUTE23_RockSmash::
	lockall
	checkitem ITEM_ROCKSMASH_TOOL, 1
	compare VAR_RESULT, 0
	goto_if_eq ROUTE23_RockSmash_2
ROUTE23_RockSmash_1:
	setfieldeffectargument 0, VAR_RESULT
	msgbox ROUTE23_RockSmash_Text_0, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_CancelSmash
	closemessage
	dofieldeffect FLDEFF_USE_ROCK_SMASH
	waitstate
	applymovement VAR_LAST_TALKED, Movement_SmashRock
	waitmovement 0
	removeobject VAR_LAST_TALKED
	releaseall
	playse SE_PIN
	applymovement 5, MOVEMENT_EXCLAMATIONMARK_FACEPLAYER
	waitmovement 0
	msgbox ROUTE23_RockSmash_Text_1
	closemessage
	applymovement 5, Movement_InteractFACERIGHT
	setobjectmovementtype 5, MOVEMENT_TYPE_FACE_RIGHT
	waitmovement 0
	setflag FLAG_ROCKS_ROUTE23
	releaseall
	end

ROUTE23_RockSmash_2:
	checkitem ITEM_BRONZEPICKAXE, 1
	compare VAR_RESULT, 0
	goto_if_eq ROUTE23_RockSmash_4
	goto ROUTE23_RockSmash_1

ROUTE23_RockSmash_4:
	checkitem ITEM_IRONPICKAXE, 1
	compare VAR_RESULT, 0
	goto_if_eq ROUTE23_RockSmash_6
	goto ROUTE23_RockSmash_1

ROUTE23_RockSmash_6:
	checkitem ITEM_STEELPICKAXE, 1
	compare VAR_RESULT, 0
	goto_if_eq ROUTE23_RockSmash_8
	goto ROUTE23_RockSmash_1

ROUTE23_RockSmash_8:
	checkitem ITEM_BLACKPICKAXE, 1
	compare VAR_RESULT, 0
	goto_if_eq ROUTE23_RockSmash_10
	goto ROUTE23_RockSmash_1

ROUTE23_RockSmash_10:
	checkitem ITEM_MITHRILPICKAXE, 1
	compare VAR_RESULT, 0
	goto_if_eq ROUTE23_RockSmash_12
	goto ROUTE23_RockSmash_1

ROUTE23_RockSmash_12:
	checkitem ITEM_ADAMANTPICKAXE, 1
	compare VAR_RESULT, 0
	goto_if_eq ROUTE23_RockSmash_14
	goto ROUTE23_RockSmash_1

ROUTE23_RockSmash_14:
	checkitem ITEM_RUNEPICKAXE, 1
	compare VAR_RESULT, 0
	goto_if_eq ROUTE23_RockSmash_16
	goto ROUTE23_RockSmash_1

ROUTE23_RockSmash_16:
	checkitem ITEM_DRAGON_PICKAXE, 1
	compare VAR_RESULT, 0
	goto_if_eq ROUTE23_RockSmash_18
	goto ROUTE23_RockSmash_1

ROUTE23_RockSmash_18:
	goto_if_eq EventScript_CantSmashRock
	goto ROUTE23_RockSmash_1


NPC_ROUTE20_SIR_TIFFY::
	lock
	applymovement 10, MOVEMENT_INTERACT_RIGHT
	namebox NPC_ROUTE20_SIR_TIFFY_Text_0
	msgbox NPC_ROUTE20_SIR_TIFFY_Text_1
	waitmovement 0
	closemessage
	hidenamebox
	release
	end


NPC_ROUTE20_TEMPLE_KNIGHT::
	lock
	faceplayer
	namebox NPC_ROUTE20_TEMPLE_KNIGHT_Text_0
	msgbox NPC_ROUTE20_TEMPLE_KNIGHT_Text_1
	closemessage
	hidenamebox
	release
	end


ENCOUNTER_PENGUIN_ROCK_ROUTE23_Text_0:
	.string "Penguin$"

ENCOUNTER_PENGUIN_ROCK_ROUTE23_Text_1:
	.string "Noot! Noot!$"

NPC_ROUTE23_DWARF_ROCKS_Text_0:
	.string "Dwarf$"

NPC_ROUTE23_DWARF_ROCKS_Text_1:
	.string "If only those goblins did not steal our\n"
	.string "pickaxe supplies.\p"
	.string "Then I could easily clear this\n"
	.string "rockslide.$"

NPC_ROUTE23_DWARF_ROCKS_Text_2:
	.string "This pathway is now completely clear\n"
	.string "from the rockslide.\p"
	.string "Adventurers like yourself can now\n"
	.string "travel freely through these mountains.$"

NPC_ROUTE23_BLOCKADE_DWARVES_Text_0:
	.string "There has been a landslide on Ice\n"
	.string "Mountain, we are currently cleaning up.\p"
	.string "Come back later.$"

BATTLE_ROUTE23_TRAINER_1_Text_0:
	.string "My cart just broke down, I've sent an\n"
	.string "adventurer off to fix it.\p"
	.string "While I wait lets have a battle!$"

BATTLE_ROUTE23_TRAINER_1_Text_1:
	.string "Thanks for passing the time with me.$"

BATTLE_ROUTE23_TRAINER_1_Text_2:
	.string "There have been lots of landslides\n"
	.string "around Ice Mountain lately, I am not\l"
	.string "sure what has been causing them.$"

BATTLE_ROUTE23_TRAINER_2_Text_0:
	.string "YARRRRR!\p"
	.string "Hear my war cry it is battle time!$"

BATTLE_ROUTE23_TRAINER_2_Text_1:
	.string "YAWWOOOOOCH!$"

BATTLE_ROUTE23_TRAINER_2_Text_2:
	.string "RRAAAAUUUUGGGHH!\p"
	.string "That was a good battle!\p"
	.string "RAAAUUUUUGH!$"

BATTLE_ROUTE23_TRAINER_BARB_COUPLE_1_Text_0:
	.string "We battle together as a team, do you\n"
	.string "think you can handle us?$"

BATTLE_ROUTE23_TRAINER_BARB_COUPLE_1_Text_1:
	.string "We lost but we will work stronger\n"
	.string "together to win next time!$"

BATTLE_ROUTE23_TRAINER_BARB_COUPLE_1_Text_2:
	.string "We would love to have a double battle\n"
	.string "with you, but you don't have enough\l"
	.string "monsters.$"

BATTLE_ROUTE23_TRAINER_BARB_COUPLE_1_Text_3:
	.string "Sarah$"

BATTLE_ROUTE23_TRAINER_BARB_COUPLE_1_Text_4:
	.string "Teamwork makes the dream work!$"

BATTLE_ROUTE23_TRAINER_BARB_COUPLE_2_Text_0:
	.string "You stand no chance against the two of\n"
	.string "us!$"

BATTLE_ROUTE23_TRAINER_BARB_COUPLE_2_Text_1:
	.string "Trevor$"

BATTLE_ROUTE23_TRAINER_BARB_COUPLE_2_Text_2:
	.string "Working alone is great and all, but\n"
	.string "working together you can achieve so\l"
	.string "much more!$"

BATTLE_ROUTE23_TRAINER_3_Text_0:
	.string "You think you have what it takes to\n"
	.string "enter our village?\p"
	.string "I think not.$"

BATTLE_ROUTE23_TRAINER_3_Text_1:
	.string "That sparkle in your eye!\p"
	.string "You know the true ways of the\n"
	.string "barbarians.$"

BATTLE_ROUTE23_TRAINER_4_Text_0:
	.string "You want to go to Edgeville?\p"
	.string "Ha don't make me laugh, you couldn't\n"
	.string "even hold your own against me!$"

BATTLE_ROUTE23_TRAINER_4_Text_1:
	.string "Edgeville is full of many strong\n"
	.string "trainers.\p"
	.string "You have guts if you think you can take\n"
	.string "them on.$"

SCRIPT_PHEONIX_EGG_Text_0:
	.string "There is an egg, would you like to\n"
	.string "interact with it?$"

SCRIPT_PHEONIX_EGG_Text_1:
	.string "You decide to leave it alone incase its\n"
	.string "mumma comes back.$"

SCRIPT_PHEONIX_EGG_Text_2:
	.string "The egg wiggles as you approach it.\p"
	.string "What do you do?$"

SCRIPT_PHEONIX_EGG_CLAP_Text_0:
	.string "You clap at the egg.\p"
	.string "…{PAUSE 16}…{PAUSE 16}…{PAUSE 16}…\p"
	.string "The egg begins bouncing up and down in\n"
	.string "what appears to be joy?$"

SCRIPT_PHEONIX_EGG_CLAP_Text_1:
	.string "The egg rolls towards you appearing to\n"
	.string "want to follow you.$"

SCRIPT_PHEONIX_EGG_CLAP_Text_2:
	.string "Obtained the HAPPY LITTLE EGG!$"

SCRIPT_PHEONIX_EGG_KICK_Text_0:
	.string "With all your might you kick the egg like\n"
	.string "a football!$"

SCRIPT_PHEONIX_EGG_KICK_Text_1:
	.string "…{PAUSE 16}…{PAUSE 16}…{PAUSE 16}…\p"
	.string "What appears to be steam seems to be\n"
	.string "coming from the egg?$"

SCRIPT_PHEONIX_EGG_KICK_Text_2:
	.string "Obtained the ANGRY LITTLE EGG!$"

SCRIPT_PHEONIX_EGG_NOROOM_Text_0:
	.string "But sadly you have no room in your\n"
	.string "party for the egg.$"

ROUTE23_RockSmash_Text_0:
	.string "This rock appears to be breakable.\n"
	.string "Would you like to use the PICKAXE?$"

ROUTE23_RockSmash_Text_1:
	.string "Hey you cleared the rockslide!\p"
	.string "Now travellers can get through.\p"
	.string "Thank you for that!$"

NPC_ROUTE20_SIR_TIFFY_Text_0:
	.string "Tiffy Cashin$"

NPC_ROUTE20_SIR_TIFFY_Text_1:
	.string "Be on the look out for the H.A.M and the\n"
	.string "Black Knights.\p"
	.string "There have been reports that they have\n"
	.string "been spotted in this area.$"

NPC_ROUTE20_TEMPLE_KNIGHT_Text_0:
	.string "Temple Knight$"

NPC_ROUTE20_TEMPLE_KNIGHT_Text_1:
	.string "Sorry adventurer, but you'll have to\n"
	.string "turn around and go back.\p"
	.string "We Temple Knights are currently in the\n"
	.string "middle of an operation.\p"
	.string "Why not go battle the gym in Barbarian\n"
	.string "Village while you wait for us to finish.$"
