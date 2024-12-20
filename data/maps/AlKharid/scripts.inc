AlKharid_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, AlKharid_MapScripts_MAP_SCRIPT_ON_TRANSITION
	map_script MAP_SCRIPT_ON_LOAD, AlKharid_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

AlKharid_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setflag FLAG_VISITED_AL_KHARID
	setvar VAR_EVOLUTION_MAP_STATE, 11
	return

AlKharid_MapScripts_MAP_SCRIPT_ON_LOAD:
	compare VAR_POKESCAPE_GAMEMODE_STATE, 0
	goto_if_eq AlKharid_MapScripts_MAP_SCRIPT_ON_LOAD_1
	return

AlKharid_MapScripts_MAP_SCRIPT_ON_LOAD_1:
	call ALKHARID_STATE
	return


ALKHARID_STATE::
	setmetatile 13, 16, METATILE_AlKharid_OPENED_DOOR, 0
	return


ALKHARID_GNOMEGLIDER::
	msgbox ALKHARID_GNOMEGLIDER_Text_0
	closemessage
	release
	end


ALKHARID_SIGN::
	lock
	msgbox ALKHARID_SIGN_Text_0
	release
	end


ALKHARID_WATERWELL::
	msgbox ALKHARID_WATERWELL_Text_0
	release
	end


ALKHARID_NPC_1::
	faceplayer
	msgbox ALKHARID_NPC_1_Text_0
	closemessage
	release
	end


ALKHARID_NPC_2::
	faceplayer
	namebox ALKHARID_NPC_2_Text_0
	msgbox ALKHARID_NPC_2_Text_1
	closemessage
	hidenamebox
	release
	end


ALKHARID_NPC_3::
	faceplayer
	msgbox ALKHARID_NPC_3_Text_0
	closemessage
	release
	end


ALKHARID_NPC_4::
	faceplayer
	msgbox ALKHARID_NPC_4_Text_0
	closemessage
	release
	end


ALKHARID_NPC_5::
	faceplayer
	msgbox ALKHARID_NPC_5_Text_0
	closemessage
	release
	end


ALKHARID_NPC_6::
	faceplayer
	msgbox ALKHARID_NPC_6_Text_0
	closemessage
	release
	end


ALKHARID_NPC_7::
	faceplayer
	msgbox ALKHARID_NPC_7_Text_0
	closemessage
	release
	end


ALKHARID_NPC_8::
	faceplayer
	msgbox ALKHARID_NPC_8_Text_0
	closemessage
	release
	end


ALKHARID_NPC_9::
	faceplayer
	msgbox ALKHARID_NPC_9_Text_0
	closemessage
	release
	end


ALKHARID_NPC_10::
	faceplayer
	msgbox ALKHARID_NPC_10_Text_0
	closemessage
	release
	end


ALKHARID_NPC_11::
	faceplayer
	msgbox ALKHARID_NPC_11_Text_0
	closemessage
	release
	end


ALKHARID_NPC_12::
	faceplayer
	msgbox ALKHARID_NPC_12_Text_0
	closemessage
	release
	end


ALKHARID_NPC_13::
	faceplayer
	msgbox ALKHARID_NPC_13_Text_0
	closemessage
	release
	end


ALKHARID_NPC_14::
	faceplayer
	msgbox ALKHARID_NPC_14_Text_0
	closemessage
	release
	end


ALKHARID_NPC_15::
	faceplayer
	msgbox ALKHARID_NPC_14_Text_0
	closemessage
	release
	end


ALKHARID_NPC_16::
	faceplayer
	msgbox ALKHARID_NPC_14_Text_0
	closemessage
	release
	end


SHANTYPASS_NPC_1::
	faceplayer
	msgbox SHANTYPASS_NPC_1_Text_0
	closemessage
	release
	end


SHANTYPASS_NPC_2::
	faceplayer
	msgbox SHANTYPASS_NPC_2_Text_0
	closemessage
	release
	end


SHANTYPASS_NPC_3::
	faceplayer
	msgbox SHANTYPASS_NPC_3_Text_0
	closemessage
	release
	end


ITEM_ALKHARID_INDOOR_1::
	finditem ITEM_NONE
	end


ITEM_ALKHARID_INDOOR_2::
	finditem ITEM_NONE
	end


ALKHARID_INDOOR_NPC_1::
	faceplayer
	msgbox ALKHARID_INDOOR_NPC_1_Text_0
	closemessage
	release
	end


ALKHARID_INDOOR_NPC_2::
	faceplayer
	msgbox ALKHARID_INDOOR_NPC_1_Text_0
	closemessage
	release
	end


ALKHARID_INDOOR_NPC_3::
	faceplayer
	msgbox ALKHARID_INDOOR_NPC_1_Text_0
	closemessage
	release
	end


NPC_ALKHARID_GENERALSTORE_1::
	faceplayer
	namebox NPC_ALKHARID_GENERALSTORE_1_Text_0
	msgbox NPC_ALKHARID_GENERALSTORE_1_Text_1
	closemessage
	hidenamebox
	release
	end


NPC_ALKHARID_GENERALSTORE_2::
	faceplayer
	msgbox NPC_ALKHARID_GENERALSTORE_2_Text_0
	closemessage
	release
	end


BATTLE_TEST_CUPHOLDER::
	lock
	faceplayer
	msgbox BATTLE_TEST_CUPHOLDER_Text_0
	playbgm MUS_ENCOUNTER_ELITE_FOUR, FALSE
	msgbox BATTLE_TEST_CUPHOLDER_Text_1
	trainerbattle_no_intro TRAINER_LEADER_DUKE_1, BATTLE_TEST_CUPHOLDER_Text_2
	msgbox BATTLE_TEST_CUPHOLDER_Text_3
	end


GYM_BATTLE_DUKE_HORACIO::
	trainerbattle_no_intro TRAINER_LEADER_DUKE_1, GYM_BATTLE_DUKE_HORACIO_Text_0
	return


GYM_BATTLE_SIR_AMIK_VARZE::
	trainerbattle_no_intro TRAINER_FALADOR_GYM_AMIKVARZE, GYM_BATTLE_SIR_AMIK_VARZE_Text_0
	return


GYM_BATTLE_PRINCE_ALI::
	trainerbattle_no_intro TRAINER_ALKHARID_GYM_PRINCE_ALI, BATTLE_TEST_CUPHOLDER_Text_2
	return


GYM_BATTLE_KING_ROALD::
	trainerbattle_no_intro TRAINER_VARROCK_GYM_KINGROALD, GYM_BATTLE_KING_ROALD_Text_0
	return


GYM_BATTLE_THOK::
	trainerbattle_no_intro TRAINER_DAEMONHEIM_GYM_THOK, BATTLE_TEST_CUPHOLDER_Text_2
	return


GYM_BATTLE_GUNTHOR::
	trainerbattle_no_intro TRAINER_BARBARIAN_GYM_GUNTHOR, GYM_BATTLE_GUNTHOR_Text_0
	return


GYM_BATTLE_VANNAKA::
	trainerbattle_no_intro TRAINER_GYM_LEADER_VANNAKA_1, GYM_BATTLE_VANNAKA_Text_0
	return


GYM_BATTLE_TZHAAR_CHAMPION::
	trainerbattle_no_intro TRAINER_GYM_LEADER_TZHAAR_CHAMPION_1, BATTLE_TEST_CUPHOLDER_Text_2
	return


ELITE4_BATTLE_ZANIK::
	trainerbattle_no_intro TRAINER_ELITE4_ZANIK_1, BATTLE_TEST_CUPHOLDER_Text_2
	return


ELITE4_BATTLE_HANS::
	trainerbattle_no_intro TRAINER_ELITE4_HANS_1, BATTLE_TEST_CUPHOLDER_Text_2
	return


ELITE4_BATTLE_HAZELMERE::
	trainerbattle_no_intro TRAINER_ELITE4_HAZELMERE_1, BATTLE_TEST_CUPHOLDER_Text_2
	return


ELITE4_BATTLE_SIR_TIFFY_CASHIEN::
	trainerbattle_no_intro TRAINER_ELITE4_SIR_TIFFY_1, BATTLE_TEST_CUPHOLDER_Text_2
	return


CHAMPION_BATTLE_WISE_OLD_MAN::
	trainerbattle_no_intro TRAINER_CHAMPION_WISE_OLD_MAN_1, BATTLE_TEST_CUPHOLDER_Text_2
	return


testbattle_tzhaar::
	setflag FLAG_TZHAAR_RANDOM
	trainerbattle_no_intro TRAINER_FIGHT_CAVES_POOL_1_TRAINER_1, BATTLE_TEST_CUPHOLDER_Text_2
	clearflag FLAG_TZHAAR_RANDOM
	return


reset_tzhaar::
	setvar VAR_POKESCAPE_TZHAAR_GYM_QUEST, 0
	clearflag FLAG_BADGE03_GET
	return


RANDOM_PARTY_SIZE::
	random 128
	copyvar VAR_SEED, VAR_RESULT
	setvar VAR_TEMP_9, 6
	specialvar VAR_STORE_SEED_RESULT, GetSeededResultLessRandom
	switch VAR_STORE_SEED_RESULT
	case 0, RANDOM_PARTY_SIZE_3
	case 1, RANDOM_PARTY_SIZE_4
	case 2, RANDOM_PARTY_SIZE_5
	case 3, RANDOM_PARTY_SIZE_6
	case 4, RANDOM_PARTY_SIZE_7
	case 5, RANDOM_PARTY_SIZE_8
RANDOM_PARTY_SIZE_1:
	buffernumberstring STR_VAR_3, VAR_STORE_SEED_RESULT
	msgbox RANDOM_PARTY_SIZE_Text_0
	closemessage
	return

RANDOM_PARTY_SIZE_3:
	setvar VAR_POKESCAPE_TZHAAR_PARTY_SIZE, 1
	goto RANDOM_PARTY_SIZE_1

RANDOM_PARTY_SIZE_4:
	setvar VAR_POKESCAPE_TZHAAR_PARTY_SIZE, 2
	goto RANDOM_PARTY_SIZE_1

RANDOM_PARTY_SIZE_5:
	setvar VAR_POKESCAPE_TZHAAR_PARTY_SIZE, 3
	goto RANDOM_PARTY_SIZE_1

RANDOM_PARTY_SIZE_6:
	setvar VAR_POKESCAPE_TZHAAR_PARTY_SIZE, 4
	goto RANDOM_PARTY_SIZE_1

RANDOM_PARTY_SIZE_7:
	setvar VAR_POKESCAPE_TZHAAR_PARTY_SIZE, 5
	goto RANDOM_PARTY_SIZE_1

RANDOM_PARTY_SIZE_8:
	setvar VAR_POKESCAPE_TZHAAR_PARTY_SIZE, 6
	goto RANDOM_PARTY_SIZE_1


ALKHARID_GNOMEGLIDER_Text_0:
	.string "It is a Gnome Glider.$"

ALKHARID_SIGN_Text_0:
	.string "Welcome to Al Kharid.\p"
	.string "The jewel of the Kharidian Desert.$"

ALKHARID_WATERWELL_Text_0:
	.string "No matter how hard you look, you can't\n"
	.string "see any polar bears down there.$"

ALKHARID_NPC_1_Text_0:
	.string "The Gnome Glider is currently\n"
	.string "undergoing maintenance.\p"
	.string "Please come back later.$"

ALKHARID_NPC_2_Text_0:
	.string "Ali$"

ALKHARID_NPC_2_Text_1:
	.string "Browse my Wares.$"

ALKHARID_NPC_3_Text_0:
	.string "Welcome to Al Kharid, NOOB!$"

ALKHARID_NPC_4_Text_0:
	.string "Don't cause trouble here in the city,\n"
	.string "law enforcement has a tendency to call\l"
	.string "upon several more guards unnecessarily\l"
	.string "for the smallest of cases.$"

ALKHARID_NPC_5_Text_0:
	.string "Up North is the desert, you can find\n"
	.string "both sunny weather and sandstorms\l"
	.string "there.\p"
	.string "Some monsters seems to evolve only\n"
	.string "under those conditions.$"

ALKHARID_NPC_6_Text_0:
	.string "Did you know there's a ban on magic\n"
	.string "carpets in Al Kharid?\p"
	.string "Apparently their leader died using one\n"
	.string "at one point.$"

ALKHARID_NPC_7_Text_0:
	.string "This is Al Kharid castle, would you like\n"
	.string "to lose to the prince?$"

ALKHARID_NPC_8_Text_0:
	.string "This is Al Kharid castle, would you like\n"
	.string "to challenge the prince?$"

ALKHARID_NPC_9_Text_0:
	.string "I heard rumours of archaeologists\n"
	.string "carrying out an excavation on some\l"
	.string "ruins nearby.\p"
	.string "I wonder what magical artifacts might\n"
	.string "be sealed inside.$"

ALKHARID_NPC_10_Text_0:
	.string "I'm glad I managed to get assigned as a\n"
	.string "guard outside the palace.\p"
	.string "Therer were too many adventurers\n"
	.string "coming into the palace and trapping my\l"
	.string "brothers behind furniture to kill them.$"

ALKHARID_NPC_11_Text_0:
	.string "We deal with a lot of thieves and\n"
	.string "cutthroats here.\p"
	.string "Al Kharid does not welcome them, yet\n"
	.string "they keep coming back.$"

ALKHARID_NPC_12_Text_0:
	.string "The Spirit of the Sea has awoken and is\n"
	.string "creating intense storms for sailors.\p"
	.string "I wonder if there are any adventurers\n"
	.string "brave enough to defeat it.$"

ALKHARID_NPC_13_Text_0:
	.string "Who am I?\p"
	.string "Only the most famous hero ever born in\n"
	.string "Al Kharid!\p"
	.string "I helped aid in the defence of\n"
	.string "Burthorpe from the troll invasion.\p"
	.string "I helped rescue the druid master\n"
	.string "Pikkupstix from the depths of\l"
	.string "Daemonheim!\p"
	.string "…{PAUSE 32}\p"
	.string "What do you mean you've never heard of\n"
	.string "me?$"

ALKHARID_NPC_14_Text_0:
	.string "$"

SHANTYPASS_NPC_1_Text_0:
	.string "This is the pass of Shantay. I guard\n"
	.string "this area with my men. I am responsible\l"
	.string "for keeping this pass open.\p"
	.string "Unfortunately it is currently\n"
	.string "undergoing some repairs. Please come\l"
	.string "back again later.$"

SHANTYPASS_NPC_2_Text_0:
	.string "I help Shantay prevent outlaws from\n"
	.string "getting out of the desert. And we stop\l"
	.string "the inexperienced from a dry death in\l"
	.string "the sands.$"

SHANTYPASS_NPC_3_Text_0:
	.string "Go talk to Shantay. I'm on duty and I\n"
	.string "don't have time to talk to the likes of\l"
	.string "you!$"

ALKHARID_INDOOR_NPC_1_Text_0:
	.string "Hello, I am a Cupholder.$"

NPC_ALKHARID_GENERALSTORE_1_Text_0:
	.string "Kathaar$"

NPC_ALKHARID_GENERALSTORE_1_Text_1:
	.string "Greetings effendi.\p"
	.string "Remember, if you venture into the\n"
	.string "desert often you will need waterskins\l"
	.string "to prevent dehydration for both you\l"
	.string "and your monsters.$"

NPC_ALKHARID_GENERALSTORE_2_Text_0:
	.string "During sandstorms you may find\n"
	.string "stronger monsters in the desert.\p"
	.string "I'd suggest you be careful and run away\n"
	.string "if you see a Strykewyrm.$"

BATTLE_TEST_CUPHOLDER_Text_0:
	.string "Hello I am Cupholder.$"

BATTLE_TEST_CUPHOLDER_Text_1:
	.string "Let's battle!$"

BATTLE_TEST_CUPHOLDER_Text_2:
	.string "I lost.$"

BATTLE_TEST_CUPHOLDER_Text_3:
	.string "You win…$"

GYM_BATTLE_DUKE_HORACIO_Text_0:
	.string "You beat me…\p"
	.string "…Congratulations!$"

GYM_BATTLE_SIR_AMIK_VARZE_Text_0:
	.string "Count me impressed, have you\n"
	.string "considered joining the White Knights?$"

GYM_BATTLE_KING_ROALD_Text_0:
	.string "That was a very enjoyable battle!$"

GYM_BATTLE_GUNTHOR_Text_0:
	.string "ARAGGHHHARH!\p"
	.string "Battles like this is what I live for and\n"
	.string "why I decided to become a Gym Leader!$"

GYM_BATTLE_VANNAKA_Text_0:
	.string "Haha, congratulations! You have\n"
	.string "completed your slayer task.$"

RANDOM_PARTY_SIZE_Text_0:
	.string "VAR SEEDEDRESULT is {STR_VAR_3} .$"
