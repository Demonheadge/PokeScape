Bay_of_Sarim_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Bay_of_Sarim_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Bay_of_Sarim_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setvar VAR_EVOLUTION_MAP_STATE, 15
	call WEATHER_CHANGE_SEA_ROUTES_CALM
	return


BATTLE_SARIM_BAY_PIRATE_1::
	trainerbattle_single TRAINER_SARIM_BAY_PIRATE_1, BATTLE_SARIM_BAY_PIRATE_1_Text_0, BATTLE_SARIM_BAY_PIRATE_1_Text_1
	namebox BATTLE_SARIM_BAY_PIRATE_1_Text_2
	msgbox BATTLE_SARIM_BAY_PIRATE_1_Text_3
	hidenamebox
	release
	end


BATTLE_SARIM_BAY_PIRATE_2::
	trainerbattle_single TRAINER_SARIM_BAY_PIRATE_2, BATTLE_SARIM_BAY_PIRATE_2_Text_0, BATTLE_SARIM_BAY_PIRATE_2_Text_1
	namebox BATTLE_SARIM_BAY_PIRATE_2_Text_2
	msgbox BATTLE_SARIM_BAY_PIRATE_2_Text_3
	hidenamebox
	release
	end


BATTLE_SARIM_BAY_PIRATE_3::
	trainerbattle_single TRAINER_SARIM_BAY_PIRATE_3, BATTLE_SARIM_BAY_PIRATE_3_Text_0, BATTLE_SARIM_BAY_PIRATE_3_Text_1
	namebox BATTLE_SARIM_BAY_PIRATE_3_Text_2
	msgbox BATTLE_SARIM_BAY_PIRATE_3_Text_3
	hidenamebox
	release
	end


BATTLE_SARIM_BAY_PIRATE_4::
	trainerbattle_single TRAINER_SARIM_BAY_PIRATE_4, BATTLE_SARIM_BAY_PIRATE_4_Text_0, BATTLE_SARIM_BAY_PIRATE_4_Text_1
	namebox BATTLE_SARIM_BAY_PIRATE_4_Text_2
	msgbox BATTLE_SARIM_BAY_PIRATE_4_Text_3
	hidenamebox
	release
	end


BATTLE_SARIM_BAY_PIRATE_5::
	trainerbattle_single TRAINER_SARIM_BAY_PIRATE_5, BATTLE_SARIM_BAY_PIRATE_5_Text_0, BATTLE_SARIM_BAY_PIRATE_5_Text_1
	namebox BATTLE_SARIM_BAY_PIRATE_5_Text_2
	msgbox BATTLE_SARIM_BAY_PIRATE_5_Text_3
	hidenamebox
	release
	end


BATTLE_SARIM_BAY_PIRATE_6::
	trainerbattle_single TRAINER_SARIM_BAY_PIRATE_6, BATTLE_SARIM_BAY_PIRATE_6_Text_0, BATTLE_SARIM_BAY_PIRATE_6_Text_1
	namebox BATTLE_SARIM_BAY_PIRATE_6_Text_2
	msgbox BATTLE_SARIM_BAY_PIRATE_6_Text_3
	hidenamebox
	release
	end


BATTLE_SARIM_BAY_PIRATE_7::
	trainerbattle_single TRAINER_SARIM_BAY_PIRATE_7, BATTLE_SARIM_BAY_PIRATE_7_Text_0, BATTLE_SARIM_BAY_PIRATE_7_Text_1
	namebox BATTLE_SARIM_BAY_PIRATE_7_Text_2
	msgbox BATTLE_SARIM_BAY_PIRATE_7_Text_1
	hidenamebox
	release
	end


BATTLE_SARIM_BAY_SAILOR_1::
	trainerbattle_single TRAINER_SARIM_BAY_SAILOR_1, BATTLE_SARIM_BAY_SAILOR_1_Text_0, BATTLE_SARIM_BAY_SAILOR_1_Text_1
	namebox BATTLE_SARIM_BAY_SAILOR_1_Text_2
	msgbox BATTLE_SARIM_BAY_SAILOR_1_Text_3
	hidenamebox
	release
	end


BATTLE_SARIM_BAY_SAILOR_2::
	trainerbattle_single TRAINER_SARIM_BAY_SAILOR_2, BATTLE_SARIM_BAY_SAILOR_2_Text_0, BATTLE_SARIM_BAY_SAILOR_2_Text_1
	namebox BATTLE_SARIM_BAY_SAILOR_2_Text_2
	msgbox BATTLE_SARIM_BAY_SAILOR_2_Text_3
	hidenamebox
	release
	end


BATTLE_SARIM_BAY_PIRATE_1_Text_0:
	.string "I've sailed through some of the\n"
	.string "harshest seas you can imagine.\p"
	.string "You're no match for me!$"

BATTLE_SARIM_BAY_PIRATE_1_Text_1:
	.string "I might be able to sail a ship better\n"
	.string "than most, but my battling skills need\l"
	.string "work.$"

BATTLE_SARIM_BAY_PIRATE_1_Text_2:
	.string "Stormbreaker$"

BATTLE_SARIM_BAY_PIRATE_1_Text_3:
	.string "There's talk of a Kraken living\n"
	.string "somewhere out in the lands to the west.\p"
	.string "What I'd do to be able to catch one of\n"
	.string "those..$"

BATTLE_SARIM_BAY_PIRATE_2_Text_0:
	.string "There be something breathing under the\n"
	.string "ship. Might be a sea serpent...\p"
	.string "Ready yer weapons!$"

BATTLE_SARIM_BAY_PIRATE_2_Text_1:
	.string "You're no sea serpent.\p"
	.string "You're much more dangerous.$"

BATTLE_SARIM_BAY_PIRATE_2_Text_2:
	.string "Dreadnought$"

BATTLE_SARIM_BAY_PIRATE_2_Text_3:
	.string "I heard from a crew that sailed out\n"
	.string "towards Rellekka that someone there\l"
	.string "caught a sea snake!$"

BATTLE_SARIM_BAY_PIRATE_3_Text_0:
	.string "What shall we do with the drunken\n"
	.string "sailor?$"

BATTLE_SARIM_BAY_PIRATE_3_Text_1:
	.string "Not battling, that's for sure.$"

BATTLE_SARIM_BAY_PIRATE_3_Text_2:
	.string "Rumrunner$"

BATTLE_SARIM_BAY_PIRATE_3_Text_3:
	.string "I probably shouldn't be drinking some\n"
	.string "of the cargo, but piracy is thirsty\l"
	.string "work.$"

BATTLE_SARIM_BAY_PIRATE_4_Text_0:
	.string "I swear I saw eyes glowing in the mist...$"

BATTLE_SARIM_BAY_PIRATE_4_Text_1:
	.string "Turns out all I saw was the look of\n"
	.string "determination in your eyes.$"

BATTLE_SARIM_BAY_PIRATE_4_Text_2:
	.string "Calypso$"

BATTLE_SARIM_BAY_PIRATE_4_Text_3:
	.string "Have you ever considered becoming a\n"
	.string "pirate?\p"
	.string "With you on our crew we'd be\n"
	.string "unstoppable!$"

BATTLE_SARIM_BAY_PIRATE_5_Text_0:
	.string "The map says there's an island cursed\n"
	.string "by creatures of the night.\p"
	.string "Maybe we should stay clear...\p"
	.string "Or not!$"

BATTLE_SARIM_BAY_PIRATE_5_Text_1:
	.string "You might have beaten me, but you'll\n"
	.string "never make it inside our fortress.$"

BATTLE_SARIM_BAY_PIRATE_5_Text_2:
	.string "Ravenwood$"

BATTLE_SARIM_BAY_PIRATE_5_Text_3:
	.string "Have you heard of Morytania?\p"
	.string "If the rumours are true and those\n"
	.string "cursed creatures do walk that land...\p"
	.string "Imagine all the treasures they'll have\n"
	.string "hoarded over the years just waiting to\l"
	.string "be...\p"
	.string "Rehomed!$"

BATTLE_SARIM_BAY_PIRATE_6_Text_0:
	.string "I’ll sail the seas until the stars fall,\n"
	.string "but no storm's takin’ me down!$"

BATTLE_SARIM_BAY_PIRATE_6_Text_1:
	.string "Seems like it wasn't a storm I needed to\n"
	.string "worry about..$"

BATTLE_SARIM_BAY_PIRATE_6_Text_2:
	.string "Whisperwind$"

BATTLE_SARIM_BAY_PIRATE_6_Text_3:
	.string "With monsters like that, you'll be able\n"
	.string "to weather any storm.$"

BATTLE_SARIM_BAY_PIRATE_7_Text_0:
	.string "There’s something in the water...\p"
	.string "Best keep your eyes sharp, matey.$"

BATTLE_SARIM_BAY_PIRATE_7_Text_1:
	.string "Looks like you're fierce enough for\n"
	.string "anything the sea might throw at you.$"

BATTLE_SARIM_BAY_PIRATE_7_Text_2:
	.string "Patchwork$"

BATTLE_SARIM_BAY_SAILOR_1_Text_0:
	.string "Aaarrgh, not another pirate!$"

BATTLE_SARIM_BAY_SAILOR_1_Text_1:
	.string "Oh, you aren't a pirate?\p"
	.string "Maybe I should have asked for help\n"
	.string "instead of a battle..$"

BATTLE_SARIM_BAY_SAILOR_1_Text_2:
	.string "Caspian$"

BATTLE_SARIM_BAY_SAILOR_1_Text_3:
	.string "Unfortunately, this bay is full of\n"
	.string "pirates.\p"
	.string "We can't go anywhere for fear of being\n"
	.string "robbed, but now all my monsters have\l"
	.string "fainted I can't battle my way out\l"
	.string "either.\p"
	.string "I'm just... stuck here.$"

BATTLE_SARIM_BAY_SAILOR_2_Text_0:
	.string "It has been my dream since I was a child\n"
	.string "to sail the high seas!$"

BATTLE_SARIM_BAY_SAILOR_2_Text_1:
	.string "My dreams never involved me losing like\n"
	.string "this though..$"

BATTLE_SARIM_BAY_SAILOR_2_Text_2:
	.string "Erasmus$"

BATTLE_SARIM_BAY_SAILOR_2_Text_3:
	.string "With all the adventurers roaming around\n"
	.string "the mainland, there's nowhere near as\l"
	.string "much crime there as there used to be.\p"
	.string "Looks like all the criminals took to the\n"
	.string "ocean instead.\p"
	.string "If only more adventurers were able to\n"
	.string "start sailing..$"
