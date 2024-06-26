MusaPoint_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, MusaPoint_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

MusaPoint_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	call MUSAPOINT_STATE
	setvar VAR_EVOLUTION_MAP_STATE, 15
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
	compare VAR_WISE_OLD_MAN_RIVAL, 30
	goto_if_le MUSAPOINT_STATE_8
	removeobject 20
	setflag FLAG_TEMP_1F
	goto MUSAPOINT_STATE_1

MUSAPOINT_STATE_5:
	addobject 21
	clearflag FLAG_TEMP_1E
	setobjectxyperm 7, 38, 29
	goto MUSAPOINT_STATE_4

MUSAPOINT_STATE_8:
	addobject 20
	clearflag FLAG_TEMP_1F
	goto MUSAPOINT_STATE_1


NPC_MUSAPOINT_SAILOR::
	lock
	faceplayer
	namebox NPC_MUSAPOINT_SAILOR_Text_0
	compare VAR_POKESCAPE_STORYMODE_PROGRESS, 150
	goto_if_le NPC_MUSAPOINT_SAILOR_2
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


NPC_Monkey::
	lock
	faceplayer
	namebox NPC_Monkey_Text_0
	msgbox NPC_Monkey_Text_1
	closemessage
	hidenamebox
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
	faceplayer
	namebox QUEST_BOAT_MUSA_POINT_Smuggler_Text_0
	msgbox QUEST_BOAT_MUSA_POINT_Smuggler_Text_1
	closemessage
	hidenamebox
	release
	end


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

NPC_Monkey_Text_0:
	.string "Monkey$"

NPC_Monkey_Text_1:
	.string "Oook, Ook!$"

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
