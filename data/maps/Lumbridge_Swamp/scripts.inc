Lumbridge_Swamp_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Lumbridge_Swamp_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Lumbridge_Swamp_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setvar VAR_EVOLUTION_MAP_STATE, 1
	call WEATHER_CHANGE_AREA_DRAYNOR
	compare VAR_POKESCAPE_GAMEMODE_STATE, 0
	goto_if_eq Lumbridge_Swamp_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	call LUMBRIDGE_SWAMP_STATE
	return

Lumbridge_Swamp_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	goto_if_set FLAG_BADGE01_GET, Lumbridge_Swamp_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
	return

Lumbridge_Swamp_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
	call LUMBRIDGE_SWAMP_STATE
	return


LUMBRIDGE_SWAMP_STATE::
	removeobject 4
	setflag FLAG_TEMP_5
	removeobject 8
	setflag FLAG_TEMP_5
	return


BLOCK_LumbridgeSwamp_HAM::
	lock
	applymovement 9, MOVEMENT_LUMBRIDGESWAMP_PINKMAN
	namebox BLOCK_LumbridgeSwamp_HAM_Text_0
	msgbox BLOCK_LumbridgeSwamp_HAM_Text_1
	hidenamebox
	waitmovement 0
	applymovement 4, MOVEMENT_LUMBRIDGESWAMP_PINKGIRL_1
	namebox BLOCK_LumbridgeSwamp_HAM_Text_2
	msgbox BLOCK_LumbridgeSwamp_HAM_Text_3
	waitmovement 0
	hidenamebox
	namebox BLOCK_LumbridgeSwamp_HAM_Text_0
	msgbox BLOCK_LumbridgeSwamp_HAM_Text_4
	hidenamebox
	applymovement 4, MOVEMENT_LUMBRIDGESWAMP_PINKGIRL_2
	waitmovement 0
	release
	end


MOVEMENT_LUMBRIDGESWAMP_PINKMAN:
	walk_in_place_fast_up
	walk_in_place_fast_up
	walk_in_place_fast_up
	step_end

MOVEMENT_LUMBRIDGESWAMP_PINKGIRL_1:
	face_right
	step_end

MOVEMENT_LUMBRIDGESWAMP_PINKGIRL_2:
	face_up
	step_end

BATTLE_LumbridgeSwamp_TRAINER_1::
	trainerbattle_single TRAINER_RSN_LUM_SWAMP, BATTLE_LumbridgeSwamp_TRAINER_1_Text_0, BATTLE_LumbridgeSwamp_TRAINER_1_Text_1
	msgbox BATTLE_LumbridgeSwamp_TRAINER_1_Text_2
	hidenamebox
	closemessage
	end


BATTLE_LumbridgeSwamp_TRAINER_2::
	trainerbattle_single TRAINER_SKELETON_LUM_SWAMP, BATTLE_LumbridgeSwamp_TRAINER_2_Text_0, BATTLE_LumbridgeSwamp_TRAINER_2_Text_1
	msgbox BATTLE_LumbridgeSwamp_TRAINER_2_Text_1
	hidenamebox
	closemessage
	end


BATTLE_LumbridgeSwamp_TRAINER_3::
	trainerbattle_single TRAINER_MUGGER_LUM_SWAMP, BATTLE_LumbridgeSwamp_TRAINER_3_Text_0, BATTLE_LumbridgeSwamp_TRAINER_3_Text_1
	msgbox BATTLE_LumbridgeSwamp_TRAINER_3_Text_1
	hidenamebox
	closemessage
	end


BATTLE_LumbridgeSwamp_TRAINER_4::
	trainerbattle_single TRAINER_LUM_SWAMP_GRASSTEETH, BATTLE_LumbridgeSwamp_TRAINER_4_Text_0, BATTLE_LumbridgeSwamp_TRAINER_4_Text_1
	msgbox BATTLE_LumbridgeSwamp_TRAINER_4_Text_1
	hidenamebox
	closemessage
	end


BATTLE_LumbridgeSwamp_TRAINER_5::
	trainerbattle_single TRAINER_LUM_SWAMP_TRAINER_5, BATTLE_LumbridgeSwamp_TRAINER_5_Text_0, BATTLE_LumbridgeSwamp_TRAINER_5_Text_1
	msgbox BATTLE_LumbridgeSwamp_TRAINER_5_Text_2
	hidenamebox
	closemessage
	end


LumSwampSign::
	msgbox LumSwampSign_Text_0, MSGBOX_SIGN
	closemessage
	end


ITEM_LUMBRIDGESWAMP_ITEM_2::
	finditem ITEM_MITHRIL_POUCH
	end


LUMBRIDGESWAMP_CANDLESELLER::
	lock
	faceplayer
	namebox LUMBRIDGESWAMP_CANDLESELLER_Text_0
	msgbox LUMBRIDGESWAMP_CANDLESELLER_Text_1
	checkitem ITEM_FLASH_TOOL, 1
	compare VAR_RESULT, 0
	goto_if_eq LUMBRIDGESWAMP_CANDLESELLER_2
	closemessage
	release
	end

	closemessage
	release
	end

LUMBRIDGESWAMP_CANDLESELLER_2:
	msgbox LUMBRIDGESWAMP_CANDLESELLER_Text_2
	giveitem ITEM_FLASH_TOOL
	msgbox LUMBRIDGESWAMP_CANDLESELLER_Text_3
	closemessage
	release
	end


LUMBRIDGESWAMP_FAIRY::
	lock
	faceplayer
	namebox LUMBRIDGESWAMP_FAIRY_Text_0
	msgbox LUMBRIDGESWAMP_FAIRY_Text_1
	hidenamebox
	closemessage
	release
	end


LUMBRIDGESWAMP_Urhney::
	lock
	faceplayer
	checkitem ITEM_GHOSTSPEAK_AMULET, 1
	compare VAR_RESULT, 0
	goto_if_eq LUMBRIDGESWAMP_Urhney_2
	namebox LUMBRIDGESWAMP_Urhney_Text_0
	msgbox LUMBRIDGESWAMP_Urhney_Text_3
	closemessage
	hidenamebox
	release
	end

	closemessage
	release
	end

LUMBRIDGESWAMP_Urhney_2:
	namebox LUMBRIDGESWAMP_Urhney_Text_0
	msgbox LUMBRIDGESWAMP_Urhney_Text_1
	hidenamebox
	closemessage
	giveitem ITEM_GHOSTSPEAK_AMULET
	namebox LUMBRIDGESWAMP_Urhney_Text_0
	msgbox LUMBRIDGESWAMP_Urhney_Text_2
	hidenamebox
	closemessage
	release
	end


LUMBRIDGESWAMP_BOOK::
	msgbox LUMBRIDGESWAMP_BOOK_Text_0
	hidenamebox
	closemessage
	release
	end


EventScript_RestBed::
	lock
	msgbox EventScript_RestBed_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne EventScript_RestBed_2
EventScript_RestBed_1:
	release
	end

EventScript_RestBed_2:
	fadescreenswapbuffers FADE_TO_BLACK
	closemessage
	playfanfare MUS_HEAL
	waitfanfare
	special HealPlayerParty
	fadescreenswapbuffers FADE_FROM_BLACK
	goto EventScript_RestBed_1


EventScript_Locked_Door::
	lock
	msgbox EventScript_Locked_Door_Text_0
	closemessage
	release
	end


Friendship_Checker_Pikkupstix::
	lock
	faceplayer
	namebox Friendship_Checker_Pikkupstix_Text_0
	msgbox Friendship_Checker_Pikkupstix_Text_1
	specialvar VAR_RESULT, GetLeadMonFriendshipScore
	switch VAR_RESULT
	case 0, Friendship_Checker_Pikkupstix_3
	case 1, Friendship_Checker_Pikkupstix_4
	case 2, Friendship_Checker_Pikkupstix_5
	case 3, Friendship_Checker_Pikkupstix_6
	case 4, Friendship_Checker_Pikkupstix_7
	case 5, Friendship_Checker_Pikkupstix_8
	case 6, Friendship_Checker_Pikkupstix_9
Friendship_Checker_Pikkupstix_1:
	closemessage
	release
	end

Friendship_Checker_Pikkupstix_3:
	msgbox Friendship_Checker_Pikkupstix_Text_2
	msgbox Friendship_Checker_Pikkupstix_Text_3
	goto Friendship_Checker_Pikkupstix_1

Friendship_Checker_Pikkupstix_4:
	msgbox Friendship_Checker_Pikkupstix_Text_4
	msgbox Friendship_Checker_Pikkupstix_Text_5
	goto Friendship_Checker_Pikkupstix_1

Friendship_Checker_Pikkupstix_5:
	msgbox Friendship_Checker_Pikkupstix_Text_6
	msgbox Friendship_Checker_Pikkupstix_Text_7
	goto Friendship_Checker_Pikkupstix_1

Friendship_Checker_Pikkupstix_6:
	msgbox Friendship_Checker_Pikkupstix_Text_8
	msgbox Friendship_Checker_Pikkupstix_Text_9
	goto Friendship_Checker_Pikkupstix_1

Friendship_Checker_Pikkupstix_7:
	msgbox Friendship_Checker_Pikkupstix_Text_10
	msgbox Friendship_Checker_Pikkupstix_Text_11
	goto Friendship_Checker_Pikkupstix_1

Friendship_Checker_Pikkupstix_8:
	msgbox Friendship_Checker_Pikkupstix_Text_12
	msgbox Friendship_Checker_Pikkupstix_Text_13
	goto Friendship_Checker_Pikkupstix_1

Friendship_Checker_Pikkupstix_9:
	msgbox Friendship_Checker_Pikkupstix_Text_14
	msgbox Friendship_Checker_Pikkupstix_Text_15
	goto Friendship_Checker_Pikkupstix_1


NPC_JITTERBUG::
	lock
	faceplayer
	namebox NPC_JITTERBUG_Text_0
	msgbox NPC_JITTERBUG_Text_1
	hidenamebox
	closemessage
	release
	end


NPC_SUDOBASH::
	lock
	faceplayer
	namebox NPC_SUDOBASH_Text_0
	msgbox NPC_SUDOBASH_Text_1
	hidenamebox
	closemessage
	release
	end


BLOCK_LumbridgeSwamp_HAM_Text_0:
	.string "Pink Man$"

BLOCK_LumbridgeSwamp_HAM_Text_1:
	.string "Oh come on!\p"
	.string "Newcomer map, more like trash map!$"

BLOCK_LumbridgeSwamp_HAM_Text_2:
	.string "Pink Girl$"

BLOCK_LumbridgeSwamp_HAM_Text_3:
	.string "You are looking at it upside down.\p"
	.string "See the hideout should be right through\n"
	.string "here.$"

BLOCK_LumbridgeSwamp_HAM_Text_4:
	.string "…$"

BATTLE_LumbridgeSwamp_TRAINER_1_Text_0:
	.string "This is me swamp!$"

BATTLE_LumbridgeSwamp_TRAINER_1_Text_1:
	.string "Get out of me swamp!$"

BATTLE_LumbridgeSwamp_TRAINER_1_Text_2:
	.string "Me do not like you.$"

BATTLE_LumbridgeSwamp_TRAINER_2_Text_0:
	.string "Rattle, rattle!$"

BATTLE_LumbridgeSwamp_TRAINER_2_Text_1:
	.string "Rattle…$"

BATTLE_LumbridgeSwamp_TRAINER_3_Text_0:
	.string "Stay still and nobody gets hurt!$"

BATTLE_LumbridgeSwamp_TRAINER_3_Text_1:
	.string "My feelings got hurt by your victory.$"

BATTLE_LumbridgeSwamp_TRAINER_4_Text_0:
	.string "Did pink humans say to find me?$"

BATTLE_LumbridgeSwamp_TRAINER_4_Text_1:
	.string "Pink humans chase relentless.\p"
	.string "Me scared.$"

BATTLE_LumbridgeSwamp_TRAINER_5_Text_0:
	.string "My pickaxe head just flew right off!\p"
	.string "Woah, you think you can just take it?\p"
	.string "Yeah I don't think so buddy.$"

BATTLE_LumbridgeSwamp_TRAINER_5_Text_1:
	.string "Take this reward money in exchange for\n"
	.string "my pickaxe head back.$"

BATTLE_LumbridgeSwamp_TRAINER_5_Text_2:
	.string "I guess I need to visit Bob's Axes to\n"
	.string "get my pickaxe fixed now.$"

LumSwampSign_Text_0:
	.string "WARNING: Monsters below!$"

LUMBRIDGESWAMP_CANDLESELLER_Text_0:
	.string "Candle Seller$"

LUMBRIDGESWAMP_CANDLESELLER_Text_1:
	.string "I wouldn't go down there without a light\n"
	.string "source.\p"
	.string "It's dangerous!$"

LUMBRIDGESWAMP_CANDLESELLER_Text_2:
	.string "But…{PAUSE 15}…{PAUSE 15}…\p"
	.string "If you are serious about going down\n"
	.string "there, take this.$"

LUMBRIDGESWAMP_CANDLESELLER_Text_3:
	.string "Be careful down there.$"

LUMBRIDGESWAMP_FAIRY_Text_0:
	.string "Fairy$"

LUMBRIDGESWAMP_FAIRY_Text_1:
	.string "Wh-what!?\p"
	.string "There is no secret passage to Zanaris\n"
	.string "here, no way!$"

LUMBRIDGESWAMP_Urhney_Text_0:
	.string "Father Urhney$"

LUMBRIDGESWAMP_Urhney_Text_1:
	.string "Urgh, I wish you adventurers would stop\n"
	.string "barging into my house like this all the\l"
	.string "time.\p"
	.string "Say no more, this is what you want isn't\n"
	.string "it?$"

LUMBRIDGESWAMP_Urhney_Text_2:
	.string "Now go away and let me meditate in\n"
	.string "peace!$"

LUMBRIDGESWAMP_Urhney_Text_3:
	.string "Go away I already gave you that\n"
	.string "Ghostspeak amulet!\p"
	.string "Let me meditate in peace!$"

LUMBRIDGESWAMP_BOOK_Text_0:
	.string "The book is titled,\n"
	.string "101 Ways to successfully Meditate.\p"
	.string "Step 1, Live far away from civilisation.\p"
	.string "Step 2, make sure it is far enough away\n"
	.string "that adventurers don't light fires at\l"
	.string "your windows.$"

EventScript_RestBed_Text_0:
	.string "Would you like to take a rest?$"

EventScript_Locked_Door_Text_0:
	.string "It is locked.$"

Friendship_Checker_Pikkupstix_Text_0:
	.string "Pikkupstix$"

Friendship_Checker_Pikkupstix_Text_1:
	.string "I can speak with monsters.\p"
	.string "Hmm…$"

Friendship_Checker_Pikkupstix_Text_2:
	.string "It says that it hates you and\n"
	.string "everything you stand for.\p"
	.string "It doesnt want to be your friend and\n"
	.string "that you're bad and should feel bad.\p"
	.string "Theres also a lot about your mother I\n"
	.string "left out.\p"
	.string "Overall im not sure if this monster likes\n"
	.string "you at all.$"

Friendship_Checker_Pikkupstix_Text_3:
	.string "FRIENDSHIP is: FRIENDSHIP NONE.$"

Friendship_Checker_Pikkupstix_Text_4:
	.string "This monster says it doesn't trust you\n"
	.string "and that if you wanted to be it's\l"
	.string "friend, why do you hardly bond with it?\p"
	.string "Maybe it thinks it would be better put\n"
	.string "in the wild like this?$"

Friendship_Checker_Pikkupstix_Text_5:
	.string "FRIENDSHIP is: FRIENDSHIP 1 TO 49.$"

Friendship_Checker_Pikkupstix_Text_6:
	.string "I'm picking up that this monster is\n"
	.string "trying to give you a chance but doesnt\l"
	.string "quite trust you just yet.\p"
	.string "Maybe the two of you should bond a\n"
	.string "little more?$"

Friendship_Checker_Pikkupstix_Text_7:
	.string "FRIENDSHIP is: FRIENDSHIP 50 TO 99.$"

Friendship_Checker_Pikkupstix_Text_8:
	.string "The monster doesnt really mention you.\p"
	.string "It had a lot to say, just not about you.\p"
	.string "I guess you could say your relationship\n"
	.string "is very neutral and lukewarm?$"

Friendship_Checker_Pikkupstix_Text_9:
	.string "FRIENDSHIP is: FRIENDSHIP 100 TO 149.$"

Friendship_Checker_Pikkupstix_Text_10:
	.string "It seems like this monster is quite fond\n"
	.string "of you.\p"
	.string "You must have made a good impression on\n"
	.string "it.\p"
	.string "It wishes to get to know you even\n"
	.string "better though.$"

Friendship_Checker_Pikkupstix_Text_11:
	.string "FRIENDSHIP is: FRIENDSHIP 150 TO 199.$"

Friendship_Checker_Pikkupstix_Text_12:
	.string "This monster has a lot to say about you.\p"
	.string "Quite a lot in fact, it seems positivly\n"
	.string "enchanted by you.\p"
	.string "Surely no other word than best of\n"
	.string "friends could describe the bond the two\l"
	.string "of you share.\p"
	.string "It makes me happy to see how well the\n"
	.string "two of you are faring.$"

Friendship_Checker_Pikkupstix_Text_13:
	.string "FRIENDSHIP is: FRIENDSHIP 200 TO 254.$"

Friendship_Checker_Pikkupstix_Text_14:
	.string "AdoresYou$"

Friendship_Checker_Pikkupstix_Text_15:
	.string "FRIENDSHIP is: FRIENDSHIP MAX.$"

NPC_JITTERBUG_Text_0:
	.string "Jitterbug$"

NPC_JITTERBUG_Text_1:
	.string "Hey, don't mind me.\p"
	.string "I'm just waiting for Demonheadge to\n"
	.string "start the Ruby Ring quest.$"

NPC_SUDOBASH_Text_0:
	.string "Sudo Bash$"

NPC_SUDOBASH_Text_1:
	.string "AUHWH12319VNISNVJNJ010101001 RUBY\n"
	.string "101021 RING.\p"
	.string "Hurry up and make our quest.$"
