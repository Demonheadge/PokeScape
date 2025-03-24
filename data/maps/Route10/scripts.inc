Route10_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route10_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Route10_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setvar VAR_EVOLUTION_MAP_STATE, 3
	call ROUTE_10_STATE
	return


ROUTE_10_STATE::
	compare VAR_POKESCAPE_GAMEMODE_STATE, 0
	goto_if_eq ROUTE_10_STATE_1
	removeobject 11
	removeobject 12
	setflag FLAG_TEMP_1F
	return

ROUTE_10_STATE_1:
	switch VAR_POKESCAPE_STORYMODE_PROGRESS
	case 100, ROUTE_10_STATE_6
	case 101, ROUTE_10_STATE_6
	removeobject 11
	removeobject 12
	setflag FLAG_TEMP_1F
	return

ROUTE_10_STATE_6:
	addobject 11
	addobject 12
	clearflag FLAG_TEMP_1F
	return


ROUTE10_Pirate::
	lock
	faceplayer
	namebox ROUTE10_Pirate_Text_0
	msgbox ROUTE10_Pirate_Text_1
	closemessage
	hidenamebox
	release
	end


ROUTE10_DragonBot::
	lock
	faceplayer
	namebox ROUTE10_DragonBot_Text_0
	msgbox ROUTE10_DragonBot_Text_1
	closemessage
	hidenamebox
	release
	end


ROUTE10_SirRebrum::
	lock
	faceplayer
	namebox ROUTE10_SirRebrum_Text_0
	msgbox ROUTE10_SirRebrum_Text_1
	closemessage
	hidenamebox
	release
	end


ROUTE10_WhiteKnight_1::
	lock
	faceplayer
	namebox ROUTE10_WhiteKnight_1_Text_0
	msgbox ROUTE10_WhiteKnight_1_Text_1
	closemessage
	hidenamebox
	release
	end


ROUTE10_WhiteKnight_2::
	lock
	faceplayer
	namebox ROUTE10_WhiteKnight_1_Text_0
	msgbox ROUTE10_WhiteKnight_2_Text_0
	closemessage
	hidenamebox
	release
	end


ROUTE10_WhiteKnight_3::
	lock
	faceplayer
	namebox ROUTE10_WhiteKnight_3_Text_0
	msgbox ROUTE10_SirRebrum_Text_1
	closemessage
	hidenamebox
	release
	end


ROUTE10_SirAcknis::
	lock
	faceplayer
	namebox ROUTE10_WhiteKnight_3_Text_0
	random 7
	switch VAR_RESULT
	case 0, ROUTE10_SirAcknis_3
	case 1, ROUTE10_SirAcknis_4
	case 2, ROUTE10_SirAcknis_5
	case 3, ROUTE10_SirAcknis_6
	case 4, ROUTE10_SirAcknis_7
	case 5, ROUTE10_SirAcknis_8
	case 6, ROUTE10_SirAcknis_9
ROUTE10_SirAcknis_1:
	hidenamebox
	closemessage
	release
	end

ROUTE10_SirAcknis_3:
	msgbox ROUTE10_SirAcknis_Text_0
	goto ROUTE10_SirAcknis_1

ROUTE10_SirAcknis_4:
	msgbox ROUTE10_SirAcknis_Text_1
	goto ROUTE10_SirAcknis_1

ROUTE10_SirAcknis_5:
	msgbox ROUTE10_SirAcknis_Text_2
	goto ROUTE10_SirAcknis_1

ROUTE10_SirAcknis_6:
	msgbox ROUTE10_SirAcknis_Text_3
	goto ROUTE10_SirAcknis_1

ROUTE10_SirAcknis_7:
	msgbox ROUTE10_SirAcknis_Text_4
	goto ROUTE10_SirAcknis_1

ROUTE10_SirAcknis_8:
	msgbox ROUTE10_SirAcknis_Text_5
	goto ROUTE10_SirAcknis_1

ROUTE10_SirAcknis_9:
	msgbox ROUTE10_SirAcknis_Text_6
	goto ROUTE10_SirAcknis_1


BATTLE_ROUTE10_MONK::
	trainerbattle_single TRAINER_ROUTE10_MONK, BATTLE_ROUTE10_MONK_Text_0, BATTLE_ROUTE10_MONK_Text_1
	namebox BATTLE_ROUTE10_MONK_Text_2
	msgbox BATTLE_ROUTE10_MONK_Text_3
	release
	return


BATTLE_ROUTE10_GOBLIN_1::
	trainerbattle_single TRAINER_ROUTE10_GOBLIN_1, BATTLE_ROUTE10_GOBLIN_1_Text_0, BATTLE_ROUTE10_GOBLIN_1_Text_1
	namebox BATTLE_ROUTE10_GOBLIN_1_Text_2
	msgbox BATTLE_ROUTE10_GOBLIN_1_Text_3
	release
	return


BATTLE_ROUTE10_GOBLIN_2::
	trainerbattle_single TRAINER_ROUTE10_GOBLIN_2, BATTLE_ROUTE10_GOBLIN_2_Text_0, BATTLE_ROUTE10_GOBLIN_2_Text_1
	namebox BATTLE_ROUTE10_GOBLIN_2_Text_2
	msgbox BATTLE_ROUTE10_GOBLIN_2_Text_3
	release
	return


ITEM_ROUTE10_TM38_ROCKTOMB::
	finditem ITEM_TM38
	end


ITEM_ROUTE10_PINEAPPLE_PUNCH::
	finditem ITEM_SQUARE_SANDWICH
	end


ROUTE10_Gravestone_1::
	msgbox ROUTE10_Gravestone_1_Text_0
	closemessage
	end


ROUTE10_Gravestone_2::
	msgbox ROUTE10_Gravestone_2_Text_0
	closemessage
	end


ROUTE10_Gravestone_3::
	msgbox ROUTE10_Gravestone_3_Text_0
	closemessage
	end


ROUTE10_Gravestone_4::
	msgbox ROUTE10_Gravestone_4_Text_0
	closemessage
	end


ROUTE10_Gravestone_5::
	msgbox ROUTE10_Gravestone_5_Text_0
	closemessage
	end


ROUTE10_Signpost::
	msgbox ROUTE10_Signpost_Text_0
	closemessage
	end


ROUTE10_Pirate_Text_0:
	.string "PIRATE$"

ROUTE10_Pirate_Text_1:
	.string "Arrrr…\p"
	.string "Me best matey Polly past away a few\n"
	.string "yeeyarrs ago…\p"
	.string "It feels like only yeesterrdey.$"

ROUTE10_DragonBot_Text_0:
	.string "L337AFK3R69$"

ROUTE10_DragonBot_Text_1:
	.string "Urgh I went afk for 5 minutes!\p"
	.string "When I came back a Goblin had PKed me!$"

ROUTE10_SirRebrum_Text_0:
	.string "Sir Rebrum$"

ROUTE10_SirRebrum_Text_1:
	.string "Go no further adventurer!\p"
	.string "Ghastly, smelly worm monsters have been\n"
	.string "attacking folks around this area.\p"
	.string "We have been dispatched here to secure\n"
	.string "the area for the time being.$"

ROUTE10_WhiteKnight_1_Text_0:
	.string "White Knight$"

ROUTE10_WhiteKnight_1_Text_1:
	.string "Disgusting!\p"
	.string "I have worm juice all over my shiny new\n"
	.string "armour!$"

ROUTE10_WhiteKnight_2_Text_0:
	.string "All of my monsters fainted…\p"
	.string "I need to recover for a bit.$"

ROUTE10_WhiteKnight_3_Text_0:
	.string "Sir Acknis$"

ROUTE10_SirAcknis_Text_0:
	.string "Have you heard of Sir Owen Sonde?\p"
	.string "When he was young, his mother was\n"
	.string "captured by a Kinshra raiding party.\p"
	.string "Despite being so young, he tried to\n"
	.string "protect her and got a scar in the\l"
	.string "process..\p"
	.string "His bravery inspired me to become a\n"
	.string "White Knight myself!$"

ROUTE10_SirAcknis_Text_1:
	.string "Our leader, Sir Amik Varze, also manages\n"
	.string "the Kingdom of Asgarnia.\p"
	.string "How he has time to run the Falador gym\n"
	.string "too is beyond me!$"

ROUTE10_SirAcknis_Text_2:
	.string "There was a White Knight called Sir\n"
	.string "Theodore who grew up south-west of\l"
	.string "here in Rimmington.\p"
	.string "Nobody is quite sure what happened to\n"
	.string "him though.$"

ROUTE10_SirAcknis_Text_3:
	.string "If you're ever in Falador, please visit\n"
	.string "the park.\p"
	.string "Our head of recruitment can be found\n"
	.string "sitting on a bench there, drinking cups\l"
	.string "of tea.\p"
	.string "I've never seen anybody refill his cup\n"
	.string "though...\p"
	.string "I wonder if it's enchanted...$"

ROUTE10_SirAcknis_Text_4:
	.string "You can tell what rank a White Knight is\n"
	.string "by the colour cloth on our armour.\p"
	.string "For example, mine is blue because I am a\n"
	.string "Partisan.\p"
	.string "We also have some Proselytes with us\n"
	.string "today for training and their cloth is\l"
	.string "yellow.$"

ROUTE10_SirAcknis_Text_5:
	.string "Our armourer, Sir Vyvin, lost his eye to\n"
	.string "some lunatic that lived in the\l"
	.string "Wilderness while defending Falador!\p"
	.string "Supposedly they fought with sharp\n"
	.string "teeth and nails rather than monsters!$"

ROUTE10_SirAcknis_Text_6:
	.string "The Herald, Sir Renitee, focuses more on\n"
	.string "people's family heritage and painting\l"
	.string "now than anything combat related.\p"
	.string "Now that I think about it, I'm not even\n"
	.string "sure how that makes him qualified to be\l"
	.string "a White Knight...$"

BATTLE_ROUTE10_MONK_Text_0:
	.string "You don't seem to be dead…\p"
	.string "We might be able arrange something to\n"
	.string "fix that.$"

BATTLE_ROUTE10_MONK_Text_1:
	.string "Oh you prefer to live?\p"
	.string "That too is an option.$"

BATTLE_ROUTE10_MONK_Text_2:
	.string "Hoenheim$"

BATTLE_ROUTE10_MONK_Text_3:
	.string "Did you know Death Runes make certain\n"
	.string "monsters evolve?\p"
	.string "Do you think there are Life Runes too?\p"
	.string "It really makes you think.$"

BATTLE_ROUTE10_GOBLIN_1_Text_0:
	.string "HUMAN!\p"
	.string "Me not let you pass!\p"
	.string "This is goblin road!$"

BATTLE_ROUTE10_GOBLIN_1_Text_1:
	.string "Ok human can pass!$"

BATTLE_ROUTE10_GOBLIN_1_Text_2:
	.string "Feetstomper$"

BATTLE_ROUTE10_GOBLIN_1_Text_3:
	.string "Me sorry for causing trouble for human!\p"
	.string "Don't hurt goblin!$"

BATTLE_ROUTE10_GOBLIN_2_Text_0:
	.string "Me want to visit graves but stupid\n"
	.string "humans won't let me!$"

BATTLE_ROUTE10_GOBLIN_2_Text_1:
	.string "Me just want to see friend…$"

BATTLE_ROUTE10_GOBLIN_2_Text_2:
	.string "Dirthead$"

BATTLE_ROUTE10_GOBLIN_2_Text_3:
	.string "Me friend is spider.\p"
	.string "Me accidently sat on him.\p"
	.string "Me want to visit grave and say sorry…$"

ROUTE10_Gravestone_1_Text_0:
	.string "The gravestone reads…\p"
	.string "Here lies my hopes and Dreams…$"

ROUTE10_Gravestone_2_Text_0:
	.string "The gravestone reads…\p"
	.string "Died to seafood.$"

ROUTE10_Gravestone_3_Text_0:
	.string "The gravestone reads…\p"
	.string "PokeScapes initial ETA$"

ROUTE10_Gravestone_4_Text_0:
	.string "The grave is really old and is hard to\n"
	.string "read…\p"
	.string "R…Sca…e For…ms\p"
	.string "You wonder what it could mean.$"

ROUTE10_Gravestone_5_Text_0:
	.string "The gravestone reads…\p"
	.string "Died by thinking it was a good idea to\n"
	.string "throw fishing explosives at a Mogre.$"

ROUTE10_Signpost_Text_0:
	.string "Port Sarim Church.\p"
	.string "North to Port Sarim Graveyard.$"
