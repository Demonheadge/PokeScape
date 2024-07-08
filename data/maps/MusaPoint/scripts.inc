MusaPoint_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, MusaPoint_MapScripts_MAP_SCRIPT_ON_LOAD
	map_script MAP_SCRIPT_ON_TRANSITION, MusaPoint_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

MusaPoint_MapScripts_MAP_SCRIPT_ON_LOAD:
	call MUSAPOINT_METATILES
	return

MusaPoint_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	call MUSAPOINT_STATE
	setvar VAR_EVOLUTION_MAP_STATE, 15
	return


MUSAPOINT_METATILES::
	compare VAR_WISE_OLD_MAN_RIVAL, 15
	goto_if_le MUSAPOINT_METATILES_1
	return

MUSAPOINT_METATILES_1:
	setmetatile 12, 35, METATILE_Karamja_SAND_BANANA, 0
	setmetatile 10, 36, METATILE_Karamja_SAND_BANANA, 0
	setmetatile 15, 35, METATILE_Karamja_SAND_BANANA, 0
	special DrawWholeMapView
	return


MUSAPOINT_STATE::
	compare VAR_POKESCAPE_GAMEMODE_STATE, 0
	goto_if_eq MUSAPOINT_STATE_2
MUSAPOINT_STATE_1:
	return

MUSAPOINT_STATE_2:
	compare VAR_POKESCAPE_STORYMODE_PROGRESS, 150
	goto_if_le MUSAPOINT_STATE_5
	removeobject 21
	setflag FLAG_TEMP_1E
MUSAPOINT_STATE_4:
	compare VAR_WISE_OLD_MAN_RIVAL, 15
	goto_if_le MUSAPOINT_STATE_8
	removeobject 20
	setflag FLAG_TEMP_1F
	removeobject 22
	removeobject 23
	setflag FLAG_TEMP_1E
	goto MUSAPOINT_STATE_1

MUSAPOINT_STATE_5:
	addobject 21
	clearflag FLAG_TEMP_1E
	setobjectxyperm 7, 38, 29
	goto MUSAPOINT_STATE_4

MUSAPOINT_STATE_8:
	setvar VAR_TEMP_F, 1
	addobject 20
	clearflag FLAG_TEMP_1F
	addobject 22
	addobject 23
	clearflag FLAG_TEMP_1E
	goto MUSAPOINT_STATE_1


NPC_MUSAPOINT_SAILOR::
	lock
	namebox NPC_MUSAPOINT_SAILOR_Text_0
	compare VAR_POKESCAPE_STORYMODE_PROGRESS, 150
	goto_if_le NPC_MUSAPOINT_SAILOR_2
	faceplayer
	msgbox NPC_MUSAPOINT_SAILOR_Text_2, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq NPC_MUSAPOINT_SAILOR_5
	msgbox NPC_MUSAPOINT_SAILOR_Text_4
NPC_MUSAPOINT_SAILOR_1:
	closemessage
	hidenamebox
	release
	end

NPC_MUSAPOINT_SAILOR_2:
	msgbox NPC_MUSAPOINT_SAILOR_Text_1
	goto NPC_MUSAPOINT_SAILOR_1

NPC_MUSAPOINT_SAILOR_5:
	msgbox NPC_MUSAPOINT_SAILOR_Text_3
	warp MAP_PORT_SARIM, 8, 0, 0
	goto NPC_MUSAPOINT_SAILOR_1


NPC_LegendArts::
	lock
	faceplayer
	namebox NPC_LegendArts_Text_0
	msgbox NPC_LegendArts_Text_1
	waitmessage
	hidenamebox
	release
	end


SIGNPOST_MUSA_POINT::
	msgbox SIGNPOST_MUSA_POINT_Text_0
	closemessage
	end


SIGNPOST_BOAT_FOR_SALE::
	msgbox SIGNPOST_BOAT_FOR_SALE_Text_0
	closemessage
	end


ITEM_MUSA_POINT_1::
	finditem ITEM_PURPLE_SWEETS
	end


ITEM_MUSA_POINT_2::
	finditem ITEM_PURPLE_SWEETS
	end


NPC_MUSA_POINT_1::
	lock
	faceplayer
	namebox NPC_MUSA_POINT_1_Text_0
	msgbox NPC_MUSA_POINT_1_Text_1
	closemessage
	hidenamebox
	release
	end


NPC_MUSA_POINT_2::
	lock
	faceplayer
	msgbox NPC_MUSA_POINT_2_Text_0
	closemessage
	hidenamebox
	release
	end


NPC_MUSA_POINT_3::
	lock
	faceplayer
	msgbox NPC_MUSA_POINT_3_Text_0
	closemessage
	hidenamebox
	release
	end


NPC_MUSA_POINT_4::
	lock
	faceplayer
	msgbox NPC_MUSA_POINT_4_Text_0
	closemessage
	hidenamebox
	release
	end


NPC_MUSA_POINT_5::
	lock
	faceplayer
	msgbox NPC_MUSA_POINT_5_Text_0
	closemessage
	hidenamebox
	release
	end


NPC_MUSA_POINT_6::
	lock
	faceplayer
	msgbox NPC_MUSA_POINT_6_Text_0
	closemessage
	hidenamebox
	release
	end


NPC_MUSA_POINT_7::
	lock
	faceplayer
	msgbox NPC_MUSA_POINT_7_Text_0
	closemessage
	hidenamebox
	release
	end


NPC_MUSA_POINT_8::
	lock
	faceplayer
	namebox NPC_MUSA_POINT_8_Text_0
	compare VAR_POKESCAPE_STORYMODE_PROGRESS, 150
	goto_if_le NPC_MUSA_POINT_8_2
	msgbox NPC_MUSA_POINT_8_Text_2
NPC_MUSA_POINT_8_1:
	closemessage
	hidenamebox
	release
	end

NPC_MUSA_POINT_8_2:
	msgbox NPC_MUSA_POINT_8_Text_1
	goto NPC_MUSA_POINT_8_1


NPC_MUSA_POINT_9::
	lock
	faceplayer
	msgbox NPC_MUSA_POINT_9_Text_0
	closemessage
	hidenamebox
	release
	end


NPC_MUSA_POINT_10::
	lock
	faceplayer
	msgbox NPC_MUSA_POINT_10_Text_0
	closemessage
	hidenamebox
	release
	end


NPC_MUSA_POINT_Luthas::
	lock
	faceplayer
	namebox NPC_MUSA_POINT_Luthas_Text_0
	msgbox NPC_MUSA_POINT_Luthas_Text_1
	closemessage
	hidenamebox
	release
	end


NPC_MONKEY_BLOCK::
	lock
	faceplayer
	namebox NPC_MONKEY_BLOCK_Text_0
	playmoncry SPECIES_MONKEY_NORMAL_FORM, 0
	msgbox NPC_MONKEY_BLOCK_Text_1
	waitmoncry
	hidenamebox
	msgbox NPC_MONKEY_BLOCK_Text_2
	release
	end


NPC_MUSA_POINT_PubOwner::
	lock
	faceplayer
	msgbox NPC_MUSA_POINT_PubOwner_Text_0
	closemessage
	hidenamebox
	release
	end


NPC_MUSA_POINT_Pub_Sailer::
	lock
	faceplayer
	msgbox NPC_MUSA_POINT_1_Text_1
	closemessage
	hidenamebox
	release
	end


NPC_MUSA_POINT_Pub_BarCrawl::
	lock
	faceplayer
	msgbox NPC_MUSA_POINT_1_Text_1
	closemessage
	hidenamebox
	release
	end


BATTLE_MUSA_POINT_TRAINER_1::
	trainerbattle_single TRAINER_MUSA_POINT_TRAINER_1, BATTLE_MUSA_POINT_TRAINER_1_Text_0, BATTLE_MUSA_POINT_TRAINER_1_Text_1
	msgbox BATTLE_MUSA_POINT_TRAINER_1_Text_1
	hidenamebox
	release
	end


BATTLE_MUSA_POINT_TRAINER_2::
	trainerbattle_single TRAINER_MUSA_POINT_TRAINER_2, BATTLE_MUSA_POINT_TRAINER_2_Text_0, BATTLE_MUSA_POINT_TRAINER_2_Text_1
	msgbox BATTLE_MUSA_POINT_TRAINER_2_Text_1
	hidenamebox
	release
	end


BATTLE_MUSA_POINT_TRAINER_3::
	trainerbattle_single TRAINER_MUSA_POINT_TRAINER_3, BATTLE_MUSA_POINT_TRAINER_3_Text_0, BATTLE_MUSA_POINT_TRAINER_3_Text_1
	msgbox BATTLE_MUSA_POINT_TRAINER_3_Text_1
	hidenamebox
	release
	end


BATTLE_MUSA_POINT_TRAINER_4::
	trainerbattle_single TRAINER_MUSA_POINT_TRAINER_4, BATTLE_MUSA_POINT_TRAINER_4_Text_0, BATTLE_MUSA_POINT_TRAINER_4_Text_1
	msgbox BATTLE_MUSA_POINT_TRAINER_4_Text_2
	hidenamebox
	release
	end


EventScript_BananaTree::
	msgbox EventScript_BananaTree_Text_0
	random 2
	compare VAR_RESULT, 0
	goto_if_eq EventScript_BananaTree_2
	msgbox EventScript_BananaTree_Text_2
EventScript_BananaTree_1:
	closemessage
	end

EventScript_BananaTree_2:
	msgbox EventScript_BananaTree_Text_1
	giveitem ITEM_BANANA, 1
	goto EventScript_BananaTree_1


EventScript_BananaGround::
	random 6
	switch VAR_RESULT
	case 0, EventScript_BananaGround_3
	case 1, EventScript_BananaGround_4
	case 2, EventScript_BananaGround_5
	case 3, EventScript_BananaGround_6
	case 4, EventScript_BananaGround_7
	case 5, EventScript_BananaGround_8
EventScript_BananaGround_1:
	closemessage
	end

EventScript_BananaGround_3:
	giveitem ITEM_BANANA, 1
	goto EventScript_BananaGround_1

EventScript_BananaGround_4:
	msgbox EventScript_BananaGround_Text_0
	goto EventScript_BananaGround_1

EventScript_BananaGround_5:
	msgbox EventScript_BananaGround_Text_1
	goto EventScript_BananaGround_1

EventScript_BananaGround_6:
	msgbox EventScript_BananaGround_Text_2
	goto EventScript_BananaGround_1

EventScript_BananaGround_7:
	msgbox EventScript_BananaGround_Text_3
	goto EventScript_BananaGround_1

EventScript_BananaGround_8:
	msgbox EventScript_BananaGround_Text_4
	goto EventScript_BananaGround_1


QUEST_BOAT_MUSA_POINT_Smuggler::
	lock
	namebox QUEST_BOAT_MUSA_POINT_Smuggler_Text_0
	msgbox QUEST_BOAT_MUSA_POINT_Smuggler_Text_1
	closemessage
	hidenamebox
	release
	end


TRIGGER_WISEOLDMAN_RIVAL_MUSAPOINT::
	lock
	playse SE_PIN
	applymovement 20, movement_wom_musapoint_noticeplayer
	waitmovement 0
	delay 60
	playbgm MUS_PS_WISE_OLD_MAN_THEME, 1
	getplayerxy VAR_TEMP_A, VAR_TEMP_B
	compare VAR_TEMP_B, 26
	goto_if_eq TRIGGER_WISEOLDMAN_RIVAL_MUSAPOINT_2
	compare VAR_TEMP_B, 27
	goto_if_eq TRIGGER_WISEOLDMAN_RIVAL_MUSAPOINT_3
	compare VAR_TEMP_B, 28
	goto_if_eq TRIGGER_WISEOLDMAN_RIVAL_MUSAPOINT_4
TRIGGER_WISEOLDMAN_RIVAL_MUSAPOINT_1:
	waitmovement 0
	namebox TRIGGER_WISEOLDMAN_RIVAL_MUSAPOINT_Text_0
	msgbox TRIGGER_WISEOLDMAN_RIVAL_MUSAPOINT_Text_1
	switch VAR_WISE_OLD_MAN_RIVAL
	case 10, TRIGGER_WISEOLDMAN_RIVAL_MUSAPOINT_10
	case 15, TRIGGER_WISEOLDMAN_RIVAL_MUSAPOINT_11
TRIGGER_WISEOLDMAN_RIVAL_MUSAPOINT_8:
	hidenamebox
	closemessage
	namebox TRIGGER_WISEOLDMAN_RIVAL_MUSAPOINT_Text_0
	msgbox TRIGGER_WISEOLDMAN_RIVAL_MUSAPOINT_Text_4
	hidenamebox
	closemessage
	applymovement 20, movement_wom_musapoint_1
	waitmovement 0
	namebox TRIGGER_WISEOLDMAN_RIVAL_MUSAPOINT_Text_0
	msgbox TRIGGER_WISEOLDMAN_RIVAL_MUSAPOINT_Text_5
	applymovement 20, MOVEMENT_FACE_UP
	waitmovement 0
	msgbox TRIGGER_WISEOLDMAN_RIVAL_MUSAPOINT_Text_6
	applymovement 20, Common_Movement_FacePlayer
	waitmovement 0
	msgbox TRIGGER_WISEOLDMAN_RIVAL_MUSAPOINT_Text_7
	hidenamebox
	closemessage
	getplayerxy VAR_TEMP_A, VAR_TEMP_B
	compare VAR_TEMP_B, 26
	goto_if_eq TRIGGER_WISEOLDMAN_RIVAL_MUSAPOINT_13
	compare VAR_TEMP_B, 27
	goto_if_eq TRIGGER_WISEOLDMAN_RIVAL_MUSAPOINT_14
	compare VAR_TEMP_B, 28
	goto_if_eq TRIGGER_WISEOLDMAN_RIVAL_MUSAPOINT_15
TRIGGER_WISEOLDMAN_RIVAL_MUSAPOINT_12:
	waitmovement 0
	opendoor 18, 32
	waitdooranim
	applymovement 20, movement_ENTER_DOOR
	waitmovement 0
	removeobject 20
	setflag FLAG_TEMP_1F
	closedoor 18, 32
	setvar VAR_WISE_OLD_MAN_RIVAL, 20
	setvar VAR_TEMP_F, 0
	savebgm MUS_DUMMY
	fadedefaultbgm
	release
	end

TRIGGER_WISEOLDMAN_RIVAL_MUSAPOINT_2:
	applymovement 20, movement_wom_musapoint_01
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, MOVEMENT_FACE_DOWN
	goto TRIGGER_WISEOLDMAN_RIVAL_MUSAPOINT_1

TRIGGER_WISEOLDMAN_RIVAL_MUSAPOINT_3:
	applymovement 20, movement_wom_musapoint_02
	goto TRIGGER_WISEOLDMAN_RIVAL_MUSAPOINT_1

TRIGGER_WISEOLDMAN_RIVAL_MUSAPOINT_4:
	applymovement 20, movement_wom_musapoint_03
	goto TRIGGER_WISEOLDMAN_RIVAL_MUSAPOINT_1

TRIGGER_WISEOLDMAN_RIVAL_MUSAPOINT_10:
	msgbox TRIGGER_WISEOLDMAN_RIVAL_MUSAPOINT_Text_2
	goto TRIGGER_WISEOLDMAN_RIVAL_MUSAPOINT_8

TRIGGER_WISEOLDMAN_RIVAL_MUSAPOINT_11:
	msgbox TRIGGER_WISEOLDMAN_RIVAL_MUSAPOINT_Text_3
	goto TRIGGER_WISEOLDMAN_RIVAL_MUSAPOINT_8

TRIGGER_WISEOLDMAN_RIVAL_MUSAPOINT_13:
	applymovement 20, movement_wom_musapoint_04
	goto TRIGGER_WISEOLDMAN_RIVAL_MUSAPOINT_12

TRIGGER_WISEOLDMAN_RIVAL_MUSAPOINT_14:
	applymovement 20, movement_wom_musapoint_05
	goto TRIGGER_WISEOLDMAN_RIVAL_MUSAPOINT_12

TRIGGER_WISEOLDMAN_RIVAL_MUSAPOINT_15:
	applymovement 20, movement_wom_musapoint_06
	goto TRIGGER_WISEOLDMAN_RIVAL_MUSAPOINT_12


movement_wom_musapoint_noticeplayer:
	face_player
	emote_exclamation_mark
	delay_16
	step_end

movement_wom_musapoint_01:
	walk_left
	walk_up
	walk_left
	walk_up
	walk_left
	face_up
	step_end

movement_wom_musapoint_02:
	walk_left
	walk_up
	walk_up
	walk_left
	step_end

movement_wom_musapoint_03:
	walk_left
	walk_up
	walk_left
	step_end

movement_wom_musapoint_1:
	face_right
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	face_player
	step_end

movement_wom_musapoint_04:
	walk_right
	walk_down
	walk_down
	walk_right
	walk_down
	walk_down
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	face_up
	step_end

movement_wom_musapoint_05:
	walk_down
	walk_down
	walk_right
	walk_down
	walk_down
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	face_up
	step_end

movement_wom_musapoint_06:
	walk_down
	walk_right
	walk_down
	walk_down
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	face_up
	step_end

movement_ENTER_DOOR:
	walk_up
	set_invisible
	step_end

NPC_WISEOLDMAN_RIVAL_MUSAPOINT_PUB::
	lock
	faceplayer
	namebox TRIGGER_WISEOLDMAN_RIVAL_MUSAPOINT_Text_0
	checkitem ITEM_SURF_TOOL, 1
	compare VAR_RESULT, 0
	goto_if_ne NPC_WISEOLDMAN_RIVAL_MUSAPOINT_PUB_2
	msgbox NPC_WISEOLDMAN_RIVAL_MUSAPOINT_PUB_Text_1
NPC_WISEOLDMAN_RIVAL_MUSAPOINT_PUB_1:
	hidenamebox
	closemessage
	release
	end

NPC_WISEOLDMAN_RIVAL_MUSAPOINT_PUB_2:
	msgbox NPC_WISEOLDMAN_RIVAL_MUSAPOINT_PUB_Text_0
	goto NPC_WISEOLDMAN_RIVAL_MUSAPOINT_PUB_1


NPC_MUSAPOINT_SAILOR_Text_0:
	.string "SAILOR$"

NPC_MUSAPOINT_SAILOR_Text_1:
	.string "I've confiscated your Karamja Rum.\p"
	.string "You're in for da cage now.$"

NPC_MUSAPOINT_SAILOR_Text_2:
	.string "Hi, there would you like to board the\n"
	.string "boat to Port Sarim?$"

NPC_MUSAPOINT_SAILOR_Text_3:
	.string "All aboard!\l"
	.string "We set sail for Port Sarim!$"

NPC_MUSAPOINT_SAILOR_Text_4:
	.string "Suit yourself.$"

NPC_LegendArts_Text_0:
	.string "LEGEND ARTS$"

NPC_LegendArts_Text_1:
	.string "What…{PAUSE 15}{PAUSE 15}…{PAUSE 15}{PAUSE 15}…\n"
	.string "How did I get here?$"

SIGNPOST_MUSA_POINT_Text_0:
	.string "Musa Point - The best bannanas in all of\n"
	.string "Karamaja!$"

SIGNPOST_BOAT_FOR_SALE_Text_0:
	.string "Boat for Sale!\p"
	.string "See Luthas inside for more details.$"

NPC_MUSA_POINT_1_Text_0:
	.string "Cupholder$"

NPC_MUSA_POINT_1_Text_1:
	.string "Hello, I am a Cupholder.$"

NPC_MUSA_POINT_2_Text_0:
	.string "30 years ago I buried me treasure here.\p"
	.string "Now I've spent 5 years digging on the\n"
	.string "beach to find it only to realize that\l"
	.string "maybe I buried it in Brimhaven?$"

NPC_MUSA_POINT_3_Text_0:
	.string "The Customs Officers constantly keep\n"
	.string "us under supervision, apparently they\l"
	.string "dont want Karamja Rum to reach the\l"
	.string "mainland.\p"
	.string "Its all a conspiracy to keep the White\n"
	.string "knights in power I tell you!$"

NPC_MUSA_POINT_4_Text_0:
	.string "Up north is a fishing spot, you might\n"
	.string "find yourself a battle there with the\l"
	.string "local fishers.$"

NPC_MUSA_POINT_5_Text_0:
	.string "I once saw a Polar Bear in this well, but\n"
	.string "no one believes me.\p"
	.string "They all just think I was drunk.\p"
	.string "But I wasn't!\p"
	.string "… Or was I…$"

NPC_MUSA_POINT_6_Text_0:
	.string "The banana farm is the pride and joy of\n"
	.string "Musa Point.\p"
	.string "That or the bar is the only thing\n"
	.string "keeping us a landmark really.$"

NPC_MUSA_POINT_7_Text_0:
	.string "Welcome to Karamja.\p"
	.string "Make sure to prepare some antipoisons.$"

NPC_MUSA_POINT_8_Text_0:
	.string "Customs Officer$"

NPC_MUSA_POINT_8_Text_1:
	.string "Sorry we've had an incident of someone\n"
	.string "trying to smuggle some Rum to the\l"
	.string "mainland.\p"
	.string "Our ships won't be sailing for some time\n"
	.string "while we check the cargo.$"

NPC_MUSA_POINT_8_Text_2:
	.string "This ship sails all over the land.\p"
	.string "That was true until all of the ports\n"
	.string "were closed off, now we sail all around\l"
	.string "Musa Point.\p"
	.string "Would you like to sail to Musa Point?$"

NPC_MUSA_POINT_9_Text_0:
	.string "Fishing Levels?$"

NPC_MUSA_POINT_10_Text_0:
	.string "Fire, anyone?$"

NPC_MUSA_POINT_Luthas_Text_0:
	.string "Luthas$"

NPC_MUSA_POINT_Luthas_Text_1:
	.string "Bananas make the world go round.\p"
	.string "Would you like to buy one?$"

NPC_MONKEY_BLOCK_Text_0:
	.string "MONKEY$"

NPC_MONKEY_BLOCK_Text_1:
	.string "Oook, Ook!$"

NPC_MONKEY_BLOCK_Text_2:
	.string "This monkey is bananas!$"

NPC_MUSA_POINT_PubOwner_Text_0:
	.string "Can I interest you in some of our\n"
	.string "famous Karamjan Rum?\p"
	.string "Or perhaps you would like some of our\n"
	.string "wines, spirits or beers?$"

BATTLE_MUSA_POINT_TRAINER_1_Text_0:
	.string "My Fishing level is 62.$"

BATTLE_MUSA_POINT_TRAINER_1_Text_1:
	.string "I can only use quick chat.$"

BATTLE_MUSA_POINT_TRAINER_2_Text_0:
	.string "Why am I here?\p"
	.string "Fight me to find out!$"

BATTLE_MUSA_POINT_TRAINER_2_Text_1:
	.string "I love fishing but I cannot afford\n"
	.string "membership.\p"
	.string "That is why I am here.$"

BATTLE_MUSA_POINT_TRAINER_3_Text_0:
	.string "Noob fishing spot tells me I need a\n"
	.string "higher fishing level to be here.\p"
	.string "Now I am angry!$"

BATTLE_MUSA_POINT_TRAINER_3_Text_1:
	.string "My fishing level is 14.$"

BATTLE_MUSA_POINT_TRAINER_4_Text_0:
	.string "Life is like a fishing spot, you never\n"
	.string "know what you are going to get.$"

BATTLE_MUSA_POINT_TRAINER_4_Text_1:
	.string "Unless you fish for lobsters, you only\n"
	.string "get lobsters like this.$"

BATTLE_MUSA_POINT_TRAINER_4_Text_2:
	.string "Life is like a fishing spot, you never\n"
	.string "know what you are going to get.\p"
	.string "Unless you fish for lobsters, you only\n"
	.string "get lobsters like this.$"

EventScript_BananaTree_Text_0:
	.string "There are a bunch of Bananas on this\n"
	.string "tree!$"

EventScript_BananaTree_Text_1:
	.string "You picked a Banana!$"

EventScript_BananaTree_Text_2:
	.string "You failed to pick a Banana…$"

EventScript_BananaGround_Text_0:
	.string "This banana smells.$"

EventScript_BananaGround_Text_1:
	.string "There are fresher bananas in the trees.$"

EventScript_BananaGround_Text_2:
	.string "I've heard of potassium but this isn't\n"
	.string "it.$"

EventScript_BananaGround_Text_3:
	.string "As you reach for the banana you sense\n"
	.string "the gaze a monkey in the distance.\p"
	.string "You decide to leave it.$"

EventScript_BananaGround_Text_4:
	.string "Ew, looks like someone stepped on this\n"
	.string "banana.$"

QUEST_BOAT_MUSA_POINT_Smuggler_Text_0:
	.string "Quester$"

QUEST_BOAT_MUSA_POINT_Smuggler_Text_1:
	.string "Awh man, Frank set me up…$"

TRIGGER_WISEOLDMAN_RIVAL_MUSAPOINT_Text_0:
	.string "Wise Old Man$"

TRIGGER_WISEOLDMAN_RIVAL_MUSAPOINT_Text_1:
	.string "Well then, it truly has been awhile.\n"
	.string "You look quite different since we last\l"
	.string "met.$"

TRIGGER_WISEOLDMAN_RIVAL_MUSAPOINT_Text_2:
	.string "It was a shame you didn't take me up on\n"
	.string "the offer to meet within Asganria\l"
	.string "Dungeon.\p"
	.string "It cannot be helped I suppose.\p"
	.string "How about we check just how much you\n"
	.string "have truly grown.$"

TRIGGER_WISEOLDMAN_RIVAL_MUSAPOINT_Text_3:
	.string "By the way, did you end up meeting with\n"
	.string "Melzar?\p"
	.string "How did that go, did he put up a good\n"
	.string "fight?\p"
	.string "That man loves his cabbages.\p"
	.string "Enough, chit chat, this old man wants to\n"
	.string "see how much you've grown since our\l"
	.string "last enocunter!$"

TRIGGER_WISEOLDMAN_RIVAL_MUSAPOINT_Text_4:
	.string "So you got stranded on Crandor, passed\n"
	.string "through volcano passage undereath\l"
	.string "Karamja Volcano, met with the Tzhaar\l"
	.string "and now you are here?\p"
	.string "You certainly have been busy haven't\n"
	.string "you.\p"
	.string "You should really take the MvM\n"
	.string "championship seriously, I think you\l"
	.string "might just make it to the end.$"

TRIGGER_WISEOLDMAN_RIVAL_MUSAPOINT_Text_5:
	.string "Although that might have to be put on\n"
	.string "hold for a bit as it seems someone was\l"
	.string "caught smuggling Karmaja Rum.\p"
	.string "All of the boats are in lockdown until\n"
	.string "the matter is resolved.\p"
	.string "If you don't want to wait around with\n"
	.string "me, I heard Luthas was selling a boat.$"

TRIGGER_WISEOLDMAN_RIVAL_MUSAPOINT_Text_6:
	.string "He lives in that shack just over there.\p"
	.string "Go give him a visit if your interested.$"

TRIGGER_WISEOLDMAN_RIVAL_MUSAPOINT_Text_7:
	.string "Me?\p"
	.string "I think I might go visit the pub for a\n"
	.string "drink.\p"
	.string "I truly am looking forward to seeing\n"
	.string "your MvM championship progress.\p"
	.string "Until next time {PLAYER}.$"

NPC_WISEOLDMAN_RIVAL_MUSAPOINT_PUB_Text_0:
	.string "Oh, I see you have the brought the\n"
	.string "boat.\p"
	.string "You go on ahead and sail back to the\n"
	.string "mainland, this old man will wait for the\l"
	.string "matter at the docks to resolve.$"

NPC_WISEOLDMAN_RIVAL_MUSAPOINT_PUB_Text_1:
	.string "Hello again {PLAYER}.\p"
	.string "Did you end up going to see Luthas\n"
	.string "about that boat?$"
