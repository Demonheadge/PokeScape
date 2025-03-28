Route12_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route12_MapScripts_MAP_SCRIPT_ON_TRANSITION
	map_script MAP_SCRIPT_ON_LOAD, Route12_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

Route12_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setvar VAR_EVOLUTION_MAP_STATE, 1
	compare VAR_POKESCAPE_GAMEMODE_STATE, 0
	goto_if_eq Route12_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	call OPENWORLD_STATE_ROUTE12
	return

Route12_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	call ROUTE12_STATE
	return

Route12_MapScripts_MAP_SCRIPT_ON_LOAD:
	call PURO_PURO_EVENT
	return


OPENWORLD_STATE_ROUTE12::
	setobjectxyperm 16, 29, 9
	setobjectmovementtype 16, MOVEMENT_TYPE_LOOK_AROUND
	setobjectxyperm 14, 30, 14
	setobjectmovementtype 14, MOVEMENT_TYPE_WANDER_LEFT_AND_RIGHT
	setobjectxyperm 15, 33, 8
	setobjectmovementtype 15, MOVEMENT_TYPE_WANDER_AROUND
	return


ROUTE12_STATE::
	goto_if_set FLAG_BADGE04_GET, ROUTE12_STATE_1
	return

ROUTE12_STATE_1:
	setobjectxyperm 16, 32, 5
	setobjectmovementtype 16, MOVEMENT_TYPE_LOOK_AROUND
	setobjectxyperm 14, 30, 14
	setobjectmovementtype 14, MOVEMENT_TYPE_WANDER_LEFT_AND_RIGHT
	setobjectxyperm 15, 33, 8
	setobjectmovementtype 15, MOVEMENT_TYPE_WANDER_AROUND
	return


Gillie_Groats::
	compare VAR_POKESCAPE_COOKS_ASSISTANT_QUEST_STATE, 1
	goto_if_eq Gillie_Groats_1
	lock
	faceplayer
	namebox Gillie_Groats_Text_0
	msgbox Gillie_Groats_Text_4
	hidenamebox
	pokemart GroatsShop
	release
	end

Gillie_Groats_1:
	checkitem ITEM_TOP_QUALITY_MILK, 1
	compare VAR_RESULT, 0
	goto_if_eq Gillie_Groats_4
	lock
	faceplayer
	namebox Gillie_Groats_Text_0
	msgbox Gillie_Groats_Text_4
	hidenamebox
	pokemart GroatsShop
	release
	end

Gillie_Groats_4:
	lock
	faceplayer
	namebox Gillie_Groats_Text_0
	msgbox Gillie_Groats_Text_1
	applymovement 23, ROUTE12_GILLIEGROATS_1
	waitmovement 0
	msgbox Gillie_Groats_Text_2
	hidenamebox
	closemessage
	giveitem ITEM_TOP_QUALITY_MILK
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_COOKS_ASSISTANT, SUB_QUEST_COOKSASSISTANT_2
	namebox Gillie_Groats_Text_0
	msgbox Gillie_Groats_Text_3
	hidenamebox
	closemessage
	release
	end


ROUTE12_GILLIEGROATS_1:
	emote_question_mark
	step_end



    .align 2
GroatsShop:
	.2byte ITEM_MILK_BUCKET
    .2byte ITEM_EMPTY_BUCKET
	.2byte ITEM_NONE

    release
    end

NPC_DAIRYCOW::
	lock
	faceplayer
	playmoncry SPECIES_MILTANK, 0
	namebox NPC_DAIRYCOW_Text_0
	msgbox NPC_DAIRYCOW_Text_1
	hidenamebox
	msgbox NPC_DAIRYCOW_Text_2, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne NPC_DAIRYCOW_2
	hidenamebox
	release
	end

NPC_DAIRYCOW_2:
	checkitem ITEM_EMPTY_BUCKET, 1
	compare VAR_RESULT, 0
	goto_if_ne NPC_DAIRYCOW_4
	msgbox NPC_DAIRYCOW_Text_4
	release
	end

NPC_DAIRYCOW_4:
	msgbox NPC_DAIRYCOW_Text_3
	removeitem ITEM_EMPTY_BUCKET, 1
	giveitem ITEM_MILK_BUCKET, 1
	release
	end


NPC_LUMBRIDGE_CHICKEN::
	compare VAR_POKESCAPE_COOKS_ASSISTANT_QUEST_STATE, 1
	goto_if_eq NPC_LUMBRIDGE_CHICKEN_1
	goto ENCOUNTER_CHICKEN
	return

NPC_LUMBRIDGE_CHICKEN_1:
	checkitem ITEM_SUPER_LARGE_EGG, 1
	compare VAR_RESULT, 0
	goto_if_eq NPC_LUMBRIDGE_CHICKEN_4
	goto ENCOUNTER_CHICKEN
	return

NPC_LUMBRIDGE_CHICKEN_4:
	lock
	faceplayer
	namebox NPC_LUMBRIDGE_CHICKEN_Text_0
	playmoncry SPECIES_CHICKEN_NORMAL_FORM, 0
	msgbox NPC_LUMBRIDGE_CHICKEN_Text_1
	waitmoncry
	hidenamebox
	msgbox NPC_LUMBRIDGE_CHICKEN_Text_2
	msgbox NPC_LUMBRIDGE_CHICKEN_Text_3
	closemessage
	playmoncry SPECIES_CHICKEN_NORMAL_FORM, 0
	waitmoncry
	msgbox NPC_LUMBRIDGE_CHICKEN_Text_4
	giveitem ITEM_SUPER_LARGE_EGG
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_COOKS_ASSISTANT, SUB_QUEST_COOKSASSISTANT_1
	release
	end


SIGN_ROUTE12::
	msgbox SIGN_ROUTE12_Text_0
	closemessage
	end


BLOCK_Route12_Farmer::
	lock
	faceplayer
	namebox BLOCK_Route12_Farmer_Text_0
	compare VAR_POKESCAPE_GAMEMODE_STATE, 0
	goto_if_eq BLOCK_Route12_Farmer_1
	msgbox BLOCK_Route12_Farmer_Text_3
	hidenamebox
	closemessage
	release
	end

BLOCK_Route12_Farmer_1:
	goto_if_unset FLAG_BADGE04_GET, BLOCK_Route12_Farmer_5
	msgbox BLOCK_Route12_Farmer_Text_2
	hidenamebox
	closemessage
	release
	end

	release
	end

BLOCK_Route12_Farmer_5:
	msgbox BLOCK_Route12_Farmer_Text_1
	hidenamebox
	closemessage
	release
	end


Cow_Battle::
	lock
	faceplayer
	msgbox Cow_Battle_Text_0
	setwildbattle SPECIES_COW, 7, ITEM_NONE
	dowildbattle
	removeobject VAR_LAST_TALKED
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq Cow_Battle_1
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq Cow_Battle_1
	lock
	msgbox Cow_Battle_Text_2
	release
	return

Cow_Battle_1:
	checkitem ITEM_EMPTY_BUCKET, 1
	compare VAR_RESULT, 0
	goto_if_ne Cow_Battle_7
	msgbox Cow_Battle_Text_1
Cow_Battle_6:
	release
	return

Cow_Battle_7:
	removeitem ITEM_EMPTY_BUCKET, 1
	giveitem ITEM_MILK_BUCKET, 1
	goto Cow_Battle_6


ChickenBattle::
	lock
	faceplayer
	msgbox ChickenBattle_Text_0
	setwildbattle SPECIES_CHICKEN_NORMAL_FORM, 5, ITEM_NONE
	dowildbattle
	removeobject VAR_LAST_TALKED
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq ChickenBattle_1
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq ChickenBattle_1
	return

ChickenBattle_1:
	giveitem ITEM_EGG
	release
	return


GoblinBattle4::
	trainerbattle_single TRAINER_GOBLIN_4_ROUTE12, GoblinBattle4_Text_0, GoblinBattle4_Text_1
	msgbox GoblinBattle4_Text_2
	hidenamebox
	closemessage
	end


GoblinBattle5::
	trainerbattle_single TRAINER_GOBLIN_5_ROUTE12, GoblinBattle5_Text_0, GoblinBattle5_Text_1
	msgbox GoblinBattle5_Text_1
	hidenamebox
	closemessage
	end


GoblinBattle6::
	trainerbattle_single TRAINER_GOBLIN_6_ROUTE12, GoblinBattle6_Text_0, GoblinBattle6_Text_1
	msgbox GoblinBattle6_Text_1
	hidenamebox
	closemessage
	end


BATTLE_ROUTE12_SMELLYBACK::
	trainerbattle_single TRAINER_GOBLIN_7_ROUTE12, BATTLE_ROUTE12_SMELLYBACK_Text_0, BATTLE_ROUTE12_SMELLYBACK_Text_1
	msgbox BATTLE_ROUTE12_SMELLYBACK_Text_1
	hidenamebox
	closemessage
	end


BATTLE_ROUTE12_TRAINER_1::
	trainerbattle_single TRAINER_RSN_ROUTE12, BATTLE_ROUTE12_TRAINER_1_Text_0, BATTLE_ROUTE12_TRAINER_1_Text_1
	msgbox BATTLE_ROUTE12_TRAINER_1_Text_2
	hidenamebox
	closemessage
	end


NPC_ROUTE12_Goblin_1::
	lock
	faceplayer
	namebox NPC_ROUTE12_Goblin_1_Text_0
	msgbox NPC_ROUTE12_Goblin_1_Text_1
	hidenamebox
	closemessage
	applymovement 6, MOVEMENT_FACE_DOWN
	waitmovement 0
	release
	end


NPC_ROUTE12_Farmer::
	lock
	faceplayer
	namebox BLOCK_Route12_Farmer_Text_0
	msgbox NPC_ROUTE12_Farmer_Text_0
	hidenamebox
	closemessage
	release
	end


NPC_ROUTE12_Seth_Groats::
	lock
	faceplayer
	namebox NPC_ROUTE12_Seth_Groats_Text_0
	msgbox NPC_ROUTE12_Seth_Groats_Text_1
	hidenamebox
	closemessage
	release
	end


NPC_LASSIE::
	lock
	namebox NPC_LASSIE_Text_0
	playmoncry SPECIES_BORDER_COLLIE, 0
	msgbox NPC_LASSIE_Text_1
	waitmoncry
	release
	end


NPC_ROUTE12_Fisherman::
	lock
	faceplayer
	namebox NPC_ROUTE12_Fisherman_Text_0
	msgbox NPC_ROUTE12_Fisherman_Text_1
	hidenamebox
	closemessage
	release
	end


NPC_ROUTE12_Goblin_2::
	lock
	faceplayer
	namebox NPC_ROUTE12_Goblin_1_Text_0
	msgbox NPC_ROUTE12_Goblin_2_Text_0
	hidenamebox
	closemessage
	release
	end


BROKEN_DOOR::
	msgbox BROKEN_DOOR_Text_0
	closemessage
	end


BLOCK_Alkharid_Guards::
	lock
	faceplayer
	goto_if_unset FLAG_BADGE04_GET, BLOCK_Alkharid_Guards_2
BLOCK_Alkharid_Guards_1:
	namebox BLOCK_Alkharid_Guards_Text_0
	msgbox BLOCK_Alkharid_Guards_Text_1
	closemessage
	release
	end

BLOCK_Alkharid_Guards_2:
	goto BLOCK_ALKHARID_GATE
	goto BLOCK_Alkharid_Guards_1


TRIGGER_ALKHARID_GATE::
	applymovement 27, Movement_InteractFACEDOWN
	applymovement 28, Movement_InteractFACEUP
	waitmovement 0
	goto_if_unset FLAG_BADGE04_GET, TRIGGER_ALKHARID_GATE_2
TRIGGER_ALKHARID_GATE_1:
	release
	end

TRIGGER_ALKHARID_GATE_2:
	call BLOCK_ALKHARID_GATE
	goto TRIGGER_ALKHARID_GATE_1


BLOCK_ALKHARID_GATE::
	lockall
	namebox BLOCK_Alkharid_Guards_Text_0
	applymovement 27, movement_BLOCK_ALKHARID_GATE_1
	applymovement 28, movement_BLOCK_ALKHARID_GATE_2
	waitmovement 0
	msgbox BLOCK_ALKHARID_GATE_Text_0
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, movement_BLOCK_ALKHARID_GATE_3
	applymovement 27, MOVEMENT_FACE_LEFT
	applymovement 28, MOVEMENT_FACE_LEFT
	waitmovement 0
	return


movement_BLOCK_ALKHARID_GATE_1:
	face_down
	step_end

movement_BLOCK_ALKHARID_GATE_2:
	face_up
	step_end

movement_BLOCK_ALKHARID_GATE_3:
	walk_left
	step_end

ALKHARID_GATE_GUARD::
	lockall
	faceplayer
	namebox ALKHARID_GATE_GUARD_Text_0
	msgbox BLOCK_ALKHARID_GATE_Text_0
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, movement_BLOCK_ALKHARID_GATE_3
	applymovement 27, MOVEMENT_FACE_LEFT
	applymovement 28, MOVEMENT_FACE_LEFT
	waitmovement 0
	release
	end


PURO_PURO_EVENT_ROUTE12::
	setmetatile 29, 9, METATILE_PokeScapeOutdoors_SHAKING_WHEAT, 0
	setmetatile 29, 10, METATILE_PokeScapeOutdoors_SHAKING_WHEAT, 0
	setmetatile 29, 11, METATILE_PokeScapeOutdoors_SHAKING_WHEAT, 0
	setmetatile 29, 12, METATILE_PokeScapeOutdoors_SHAKING_WHEAT, 0
	setmetatile 29, 13, METATILE_PokeScapeOutdoors_SHAKING_WHEAT, 0
	setmetatile 30, 9, METATILE_PokeScapeOutdoors_SHAKING_WHEAT, 0
	setmetatile 30, 10, METATILE_PokeScapeOutdoors_SHAKING_WHEAT, 0
	setmetatile 30, 11, METATILE_PokeScapeOutdoors_SHAKING_WHEAT, 0
	setmetatile 30, 12, METATILE_PokeScapeOutdoors_SHAKING_WHEAT, 0
	setmetatile 30, 13, METATILE_PokeScapeOutdoors_SHAKING_WHEAT, 0
	setmetatile 31, 9, METATILE_PokeScapeOutdoors_SHAKING_WHEAT, 0
	setmetatile 31, 13, METATILE_PokeScapeOutdoors_SHAKING_WHEAT, 0
	setmetatile 32, 9, METATILE_PokeScapeOutdoors_SHAKING_WHEAT, 0
	setmetatile 32, 10, METATILE_PokeScapeOutdoors_SHAKING_WHEAT, 0
	setmetatile 32, 11, METATILE_PokeScapeOutdoors_SHAKING_WHEAT, 0
	setmetatile 32, 12, METATILE_PokeScapeOutdoors_SHAKING_WHEAT, 0
	setmetatile 32, 13, METATILE_PokeScapeOutdoors_SHAKING_WHEAT, 0
	setmetatile 33, 9, METATILE_PokeScapeOutdoors_SHAKING_WHEAT, 0
	setmetatile 33, 10, METATILE_PokeScapeOutdoors_SHAKING_WHEAT, 0
	setmetatile 33, 11, METATILE_PokeScapeOutdoors_SHAKING_WHEAT, 0
	setmetatile 33, 12, METATILE_PokeScapeOutdoors_SHAKING_WHEAT, 0
	setmetatile 33, 13, METATILE_PokeScapeOutdoors_SHAKING_WHEAT, 0
	setmetatile 31, 10, METATILE_PokeScapeOutdoors_TELEPORT_WHEAT_1, 0
	setmetatile 31, 11, METATILE_PokeScapeOutdoors_TELEPORT_WHEAT_2, 0
	setmetatile 31, 12, METATILE_PokeScapeOutdoors_TELEPORT_WHEAT_3, 0
	return


NPC_ROUTE12_IRONMAN::
	lock
	faceplayer
	namebox NPC_ROUTE12_IRONMAN_Text_0
	random 7
	switch VAR_RESULT
	case 0, NPC_ROUTE12_IRONMAN_3
	case 1, NPC_ROUTE12_IRONMAN_4
	case 2, NPC_ROUTE12_IRONMAN_5
	case 3, NPC_ROUTE12_IRONMAN_6
	case 4, NPC_ROUTE12_IRONMAN_7
	case 5, NPC_ROUTE12_IRONMAN_8
	case 6, NPC_ROUTE12_IRONMAN_9
NPC_ROUTE12_IRONMAN_1:
	hidenamebox
	closemessage
	release
	end

NPC_ROUTE12_IRONMAN_3:
	msgbox NPC_ROUTE12_IRONMAN_Text_1
	goto NPC_ROUTE12_IRONMAN_1

NPC_ROUTE12_IRONMAN_4:
	msgbox NPC_ROUTE12_IRONMAN_Text_2
	goto NPC_ROUTE12_IRONMAN_1

NPC_ROUTE12_IRONMAN_5:
	msgbox NPC_ROUTE12_IRONMAN_Text_3
	goto NPC_ROUTE12_IRONMAN_1

NPC_ROUTE12_IRONMAN_6:
	msgbox NPC_ROUTE12_IRONMAN_Text_4
	goto NPC_ROUTE12_IRONMAN_1

NPC_ROUTE12_IRONMAN_7:
	msgbox NPC_ROUTE12_IRONMAN_Text_5
	goto NPC_ROUTE12_IRONMAN_1

NPC_ROUTE12_IRONMAN_8:
	msgbox NPC_ROUTE12_IRONMAN_Text_6
	goto NPC_ROUTE12_IRONMAN_1

NPC_ROUTE12_IRONMAN_9:
	msgbox NPC_ROUTE12_IRONMAN_Text_7
	goto NPC_ROUTE12_IRONMAN_1


NPC_ROUTE12_BRONZEMAN::
	lock
	faceplayer
	namebox NPC_ROUTE12_BRONZEMAN_Text_0
	msgbox NPC_ROUTE12_BRONZEMAN_Text_1
	hidenamebox
	closemessage
	release
	end


NPC_ROUTE12_NOOB::
	lock
	faceplayer
	namebox NPC_ROUTE12_NOOB_Text_0
	msgbox NPC_ROUTE12_NOOB_Text_1
	hidenamebox
	closemessage
	release
	end


NPC_ROUTE12_SAILING::
	lock
	faceplayer
	namebox NPC_ROUTE12_SAILING_Text_0
	msgbox NPC_ROUTE12_SAILING_Text_1
	hidenamebox
	closemessage
	release
	end


NPC_ROUTE12_BOAT_1::
	lock
	faceplayer
	namebox NPC_ROUTE12_BOAT_1_Text_0
	msgbox NPC_ROUTE12_BOAT_1_Text_1
	hidenamebox
	closemessage
	release
	end


NPC_ROUTE12_BOAT_2::
	lock
	faceplayer
	namebox NPC_ROUTE12_BOAT_2_Text_0
	msgbox NPC_ROUTE12_BOAT_2_Text_1
	hidenamebox
	closemessage
	release
	end


Gillie_Groats_Text_0:
	.string "Gillie Groats$"

Gillie_Groats_Text_1:
	.string "Hello and welcome to the Groat's Milk\n"
	.string "Farm!\p"
	.string "What can I do for you?$"

Gillie_Groats_Text_2:
	.string "What's that?\n"
	.string "The cook needs some milk?\p"
	.string "I'll give you some for free this time but\n"
	.string "next time you'll have to buy some.$"

Gillie_Groats_Text_3:
	.string "Say hello to the cook for me!$"

Gillie_Groats_Text_4:
	.string "Hello and welcome to the Groat's Milk\n"
	.string "Farm!\p"
	.string "Would you like to buy some Milk?$"

NPC_DAIRYCOW_Text_0:
	.string "Dairy Cow$"

NPC_DAIRYCOW_Text_1:
	.string "Mooo!$"

NPC_DAIRYCOW_Text_2:
	.string "Would you like to milk the cow?$"

NPC_DAIRYCOW_Text_3:
	.string "You squeeze some milk into your empty\n"
	.string "bucket.$"

NPC_DAIRYCOW_Text_4:
	.string "You squeeze the milk into your\n"
	.string "imaginary bucket.\p"
	.string "…\p"
	.string "Nothing interesting happened.$"

NPC_LUMBRIDGE_CHICKEN_Text_0:
	.string "Chicken$"

NPC_LUMBRIDGE_CHICKEN_Text_1:
	.string "Bwak Bwak!$"

NPC_LUMBRIDGE_CHICKEN_Text_2:
	.string "You get into a staring contest with the\n"
	.string "chicken…$"

NPC_LUMBRIDGE_CHICKEN_Text_3:
	.string "{PAUSE 15}… {PAUSE 15}… {PAUSE 15}… {PAUSE 15}{PLAY_SE SE_PIN}!$"

NPC_LUMBRIDGE_CHICKEN_Text_4:
	.string "The chicken laid an egg!$"

SIGN_ROUTE12_Text_0:
	.string "NORTH to Varrock\p"
	.string "WEST to Lumbridge\p"
	.string "EAST to Al Kharid$"

BLOCK_Route12_Farmer_Text_0:
	.string "Farmer$"

BLOCK_Route12_Farmer_Text_1:
	.string "Urgh, I wish the goblins would stop\n"
	.string "messing with my sheep!$"

BLOCK_Route12_Farmer_Text_2:
	.string "I finally got my Sheep out of the way.$"

BLOCK_Route12_Farmer_Text_3:
	.string "Goblins are very annoying.\p"
	.string "I can see them looking at my sheep.$"

Cow_Battle_Text_0:
	.string "MOOOO$"

Cow_Battle_Text_1:
	.string "If I had an empty bucket I could milk\n"
	.string "this cow.$"

Cow_Battle_Text_2:
	.string "MOOOO!$"

ChickenBattle_Text_0:
	.string "BAWK!$"

GoblinBattle4_Text_0:
	.string "This place goblin place.\nHuman go home.$"

GoblinBattle4_Text_1:
	.string "Human strong.\n"
	.string "This now Goblin and human home.$"

GoblinBattle4_Text_2:
	.string "Human strong.\n"
	.string "This now goblin and human home.$"

GoblinBattle5_Text_0:
	.string "Human weak.\n"
	.string "Feethands show why.$"

GoblinBattle5_Text_1:
	.string "Feethands weak.\n"
	.string "Human show Feethands why.$"

GoblinBattle6_Text_0:
	.string "Human homes makes for weak monster.\p"
	.string "See strong monster here.$"

GoblinBattle6_Text_1:
	.string "Strong monsters in human homes it\n"
	.string "seems.$"

BATTLE_ROUTE12_SMELLYBACK_Text_0:
	.string "Big high war god say human go home.$"

BATTLE_ROUTE12_SMELLYBACK_Text_1:
	.string "Big high war god calls for rematch.\p"
	.string "Later…\n"
	.string "Much later…$"

BATTLE_ROUTE12_TRAINER_1_Text_0:
	.string "You look like a noob, even I could beat\n"
	.string "you!$"

BATTLE_ROUTE12_TRAINER_1_Text_1:
	.string "I will have you know I went easy on you.\n"
	.string "Just wait until you see my main.$"

BATTLE_ROUTE12_TRAINER_1_Text_2:
	.string "I will have you know I went easy on you.\p"
	.string "Just wait until you see my main.$"

NPC_ROUTE12_Goblin_1_Text_0:
	.string "Goblin$"

NPC_ROUTE12_Goblin_1_Text_1:
	.string "Go away human.\p"
	.string "Goblin cooking.$"

NPC_ROUTE12_Farmer_Text_0:
	.string "Did you know that you can plant crops\n"
	.string "and harvest them later.$"

NPC_ROUTE12_Seth_Groats_Text_0:
	.string "Seth Groats$"

NPC_ROUTE12_Seth_Groats_Text_1:
	.string "Who are you and what are you doing in my\n"
	.string "house!?\p"
	.string "Get out and take those disgusting\n"
	.string "monsters with you!$"

NPC_LASSIE_Text_0:
	.string "Lassie$"

NPC_LASSIE_Text_1:
	.string "WOOF!$"

NPC_ROUTE12_Fisherman_Text_0:
	.string "Fisherman$"

NPC_ROUTE12_Fisherman_Text_1:
	.string "We once had a wooden bridge here, but\n"
	.string "some firemakers burnt it down…$"

NPC_ROUTE12_Goblin_2_Text_0:
	.string "Me fishing.$"

BROKEN_DOOR_Text_0:
	.string "This door is broken beyond repair.\p"
	.string "There's no way you could get it open.$"

BLOCK_Alkharid_Guards_Text_0:
	.string "Guards$"

BLOCK_Alkharid_Guards_Text_1:
	.string "That is the Al-Kharid Badge!\p"
	.string "You may pass.$"

BLOCK_ALKHARID_GATE_Text_0:
	.string "Halt!\p"
	.string "Only those whom possess the Al-Kharid\n"
	.string "Badge may enter!$"

ALKHARID_GATE_GUARD_Text_0:
	.string "Guard$"

NPC_ROUTE12_IRONMAN_Text_0:
	.string "Limpwurt$"

NPC_ROUTE12_IRONMAN_Text_1:
	.string "I got 99 Woodcutting with a steel axe\n"
	.string "without ever leaving Lumbridge!\p"
	.string "I think I'm the reason Bob is out of\n"
	.string "axes.\p"
	.string "Now where is that Woodcutting Tutor\n"
	.string "with my cape...$"

NPC_ROUTE12_IRONMAN_Text_2:
	.string "With how my routes rolled, it took me 2\n"
	.string "years to finish Cook's Assistant.$"

NPC_ROUTE12_IRONMAN_Text_3:
	.string "I rolled Al Kharid as my next route, but\n"
	.string "since then the guards have blocked\l"
	.string "access to anybody without the badge.\p"
	.string "I probably should have done that\n"
	.string "before I left, but I came back here to\l"
	.string "train!$"

NPC_ROUTE12_IRONMAN_Text_4:
	.string "I'm an extreme one route ironman.\p"
	.string "That means before I can leave this\n"
	.string "route, I must complete all of the\l"
	.string "highest level skilling challenges,\p"
	.string "do all available achievement diary\n"
	.string "tasks,\p"
	.string "obtain all unique monster drops,\p"
	.string "and obtain all unique items on a route.\p"
	.string "{PAUSE 15}What do you mean there are no\n"
	.string "achievement diaries?!$"

NPC_ROUTE12_IRONMAN_Text_5:
	.string "The extreme part of a extreme one\n"
	.string "route ironman means absolutely no\l"
	.string "exceptions to my rules!$"

NPC_ROUTE12_IRONMAN_Text_6:
	.string "I smelted so many bronze bars in the\n"
	.string "Lumbridge Furnace that I think I broke\l"
	.string "it...\p"
	.string "Apparently they've had to send a dwarf\n"
	.string "all the way from near Falador to fix it.$"

NPC_ROUTE12_IRONMAN_Text_7:
	.string "There's a gnome near the windmill that\n"
	.string "is looking for an item.\p"
	.string "Do you have any idea where it could be?\p"
	.string "I can't roll my next route until I find\n"
	.string "it.\p"
	.string "{PAUSE 15}...\p"
	.string "{PAUSE 15}I... must... find... it!$"

NPC_ROUTE12_BRONZEMAN_Text_0:
	.string "Br0nzem4n$"

NPC_ROUTE12_BRONZEMAN_Text_1:
	.string "Everyone kept saying that to battle, I\n"
	.string "had to catch a monster.\p"
	.string "But no matter how much I run after it, I\n"
	.string "can't seem to keep this cow still long\l"
	.string "enough!{PAUSE 15}Wait, what's a pouch..?$"

NPC_ROUTE12_NOOB_Text_0:
	.string "Big Nub56$"

NPC_ROUTE12_NOOB_Text_1:
	.string "Where is varok?$"

NPC_ROUTE12_SAILING_Text_0:
	.string "MonKeeDLoof$"

NPC_ROUTE12_SAILING_Text_1:
	.string "Once I've saved up enough coins to buy\n"
	.string "myself a boat, I'm going to set sail and\l"
	.string "never look back.\p"
	.string "One day my crew and I will be known as\n"
	.string "the Straw Boater Pirates!$"

NPC_ROUTE12_BOAT_1_Text_0:
	.string "L0st2theS3a$"

NPC_ROUTE12_BOAT_1_Text_1:
	.string "I picked up a courier task to deliver\n"
	.string "from lobsters from Musa Point to\l"
	.string "Catherby.\p"
	.string "I have absolutely no idea how I ended\n"
	.string "up here, though.\p"
	.string "I just got caught up in the currents...\p"
	.string "I'm just continuing to follow them and\n"
	.string "hoping for the best.$"

NPC_ROUTE12_BOAT_2_Text_0:
	.string "DaveyJay5$"

NPC_ROUTE12_BOAT_2_Text_1:
	.string "I heard rumours of an unusual sea\n"
	.string "creature causing a disturbance north\l"
	.string "of Musa Point.\p"
	.string "It has churned up the sea so much that\n"
	.string "the currents there are out of control\l"
	.string "and causing boats to veer wildly off\l"
	.string "course.\p"
	.string "Be careful if you do ever venture out\n"
	.string "that way.$"
