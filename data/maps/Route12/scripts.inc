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
	goto_if_set FLAG_BADGE02_GET, ROUTE12_STATE_1
	return

ROUTE12_STATE_1:
	setobjectxyperm 16, 29, 9
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
	lock
	faceplayer
	namebox NPC_LUMBRIDGE_CHICKEN_Text_0
	playmoncry SPECIES_TORCHIC, 0
	msgbox NPC_LUMBRIDGE_CHICKEN_Text_5
	waitmoncry
	hidenamebox
	release
	end

NPC_LUMBRIDGE_CHICKEN_1:
	checkitem ITEM_SUPER_LARGE_EGG, 1
	compare VAR_RESULT, 0
	goto_if_eq NPC_LUMBRIDGE_CHICKEN_4
	lock
	faceplayer
	namebox NPC_LUMBRIDGE_CHICKEN_Text_0
	playmoncry SPECIES_CHICKEN_NORMAL_FORM, 0
	msgbox NPC_LUMBRIDGE_CHICKEN_Text_5
	waitmoncry
	hidenamebox
	release
	end

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
	goto_if_unset FLAG_BADGE02_GET, BLOCK_Route12_Farmer_5
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


ENCOUNTER_COW::
	lock
	faceplayer
	namebox ENCOUNTER_COW_Text_0
	playmoncry SPECIES_MILTANK, 0
	msgbox ENCOUNTER_COW_Text_1
	waitmoncry
	hidenamebox
	closemessage
	delay 1
	goto_if_set FLAG_BADGE01_GET, ENCOUNTER_COW_2
	setwildbattle SPECIES_CALF, 3, ITEM_NONE
ENCOUNTER_COW_1:
	dowildbattle
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq ENCOUNTER_COW_6
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq ENCOUNTER_COW_6
ENCOUNTER_COW_5:
	release
	end

ENCOUNTER_COW_2:
	setwildbattle SPECIES_COW, 8, ITEM_NONE
	goto ENCOUNTER_COW_1

ENCOUNTER_COW_6:
	fadescreenswapbuffers FADE_TO_BLACK
	removeobject VAR_LAST_TALKED
	fadescreenswapbuffers FADE_FROM_BLACK
	goto ENCOUNTER_COW_5


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
	setmetatile 31, 10, METATILE_PokeScapeOutdoors_TELEPORT_WHEAT_1, 0
	setmetatile 31, 11, METATILE_PokeScapeOutdoors_TELEPORT_WHEAT_2, 0
	setmetatile 31, 12, METATILE_PokeScapeOutdoors_TELEPORT_WHEAT_3, 0
	return


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

NPC_LUMBRIDGE_CHICKEN_Text_5:
	.string "Bwwaak!$"

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

ENCOUNTER_COW_Text_0:
	.string "Cow$"

ENCOUNTER_COW_Text_1:
	.string "MOOOOOOOO!!$"

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
