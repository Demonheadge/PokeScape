WizardsTowerB1F_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, WizardsTowerB1F_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

WizardsTowerB1F_MapScripts_MAP_SCRIPT_ON_LOAD:
	call WizardsTower_B1F_STATE
	return


WizardsTower_B1F_STATE::
	switch VAR_POKESCAPE_WIZARDS_TOWER_STATE
	case 0, WizardsTower_B1F_STATE_2
	case 1, WizardsTower_B1F_STATE_2
	case 2, WizardsTower_B1F_STATE_2
	case 3, WizardsTower_B1F_STATE_2
	case 4, WizardsTower_B1F_STATE_2
	case 5, WizardsTower_B1F_STATE_2
	case 6, WizardsTower_B1F_STATE_2
	case 7, WizardsTower_B1F_STATE_2
	case 8, WizardsTower_B1F_STATE_2
	case 9, WizardsTower_B1F_STATE_2
	case 10, WizardsTower_B1F_STATE_3
	case 11, WizardsTower_B1F_STATE_3
	return

WizardsTower_B1F_STATE_2:
	setflag FLAG_TEMP_1
	setflag FLAG_TEMP_2
	removeobject 1
	removeobject 6
	release
	return

WizardsTower_B1F_STATE_3:
	clearflag FLAG_TEMP_1
	clearflag FLAG_TEMP_2
	addobject 1
	addobject 6
	release
	return


NPC_WizardsTowerB1F_Ariane::
	faceplayer
	namebox NPC_WizardsTowerB1F_Ariane_Text_0
	msgbox NPC_WizardsTowerB1F_Ariane_Text_1
	closemessage
	hidenamebox
	release
	end


NPC_WizardsTowerB1F_Sedridor::
	lock
	faceplayer
	namebox NPC_WizardsTowerB1F_Sedridor_Text_0
	compare VAR_POKESCAPE_WIZARDS_TOWER_STATE, 10
	goto_if_eq NPC_WizardsTowerB1F_Sedridor_2
	checkitem ITEM_TALISMAN_MYSTERY, 1
	compare VAR_RESULT, 0
	goto_if_ne NPC_WizardsTowerB1F_Sedridor_5
	subquestmenu QUEST_MENU_CHECK_COMPLETE, QUEST_RUNE_MYSTERIES, 2
	compare VAR_RESULT, FALSE
	goto_if_eq NPC_WizardsTowerB1F_Sedridor_8
	compare VAR_RESULT, TRUE
	goto_if_eq NPC_WizardsTowerB1F_Sedridor_9
NPC_WizardsTowerB1F_Sedridor_7:
	hidenamebox
	closemessage
	release
	end

NPC_WizardsTowerB1F_Sedridor_2:
	msgbox NPC_WizardsTowerB1F_Sedridor_Text_1
	hidenamebox
	closemessage
	giveitem ITEM_SPIRIT_SHARD, 5
	setvar VAR_POKESCAPE_WIZARDS_TOWER_STATE, 11
	release
	end

NPC_WizardsTowerB1F_Sedridor_5:
	msgbox NPC_WizardsTowerB1F_Sedridor_Text_2
	msgbox NPC_WizardsTowerB1F_Sedridor_Text_3
	msgbox NPC_WizardsTowerB1F_Sedridor_Text_4
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_RUNE_MYSTERIES, 0
	hidenamebox
	closemessage
	giveitem ITEM_TALISMAN_AIR, 1
	removeitem ITEM_TALISMAN_MYSTERY, 1
	msgbox NPC_WizardsTowerB1F_Sedridor_Text_5
	release
	end

NPC_WizardsTowerB1F_Sedridor_8:
	subquestmenu QUEST_MENU_CHECK_COMPLETE, QUEST_RUNE_MYSTERIES, 1
	compare VAR_RESULT, FALSE
	goto_if_eq NPC_WizardsTowerB1F_Sedridor_12
	compare VAR_RESULT, TRUE
	goto_if_eq NPC_WizardsTowerB1F_Sedridor_13
	goto NPC_WizardsTowerB1F_Sedridor_7

NPC_WizardsTowerB1F_Sedridor_9:
	msgbox NPC_WizardsTowerB1F_Sedridor_Text_8
	subquestmenu QUEST_MENU_CHECK_COMPLETE, QUEST_RUNE_MYSTERIES, 3
	compare VAR_RESULT, FALSE
	goto_if_eq NPC_WizardsTowerB1F_Sedridor_16
	goto NPC_WizardsTowerB1F_Sedridor_7

NPC_WizardsTowerB1F_Sedridor_12:
	msgbox NPC_WizardsTowerB1F_Sedridor_Text_6
	goto NPC_WizardsTowerB1F_Sedridor_7

NPC_WizardsTowerB1F_Sedridor_13:
	msgbox NPC_WizardsTowerB1F_Sedridor_Text_7
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_RUNE_MYSTERIES, 2
	goto NPC_WizardsTowerB1F_Sedridor_7

NPC_WizardsTowerB1F_Sedridor_16:
	msgbox NPC_WizardsTowerB1F_Sedridor_Text_9
	goto NPC_WizardsTowerB1F_Sedridor_7


BOOK_ALTAR_LOCATIONS::
	random 6
	switch VAR_RESULT
	case 0, BOOK_ALTAR_LOCATIONS_3
	case 1, BOOK_ALTAR_LOCATIONS_4
	case 2, BOOK_ALTAR_LOCATIONS_5
	case 3, BOOK_ALTAR_LOCATIONS_6
	case 4, BOOK_ALTAR_LOCATIONS_7
	case 5, BOOK_ALTAR_LOCATIONS_8
BOOK_ALTAR_LOCATIONS_1:
	closemessage
	end

BOOK_ALTAR_LOCATIONS_3:
	msgbox BOOK_ALTAR_LOCATIONS_Text_0
	goto BOOK_ALTAR_LOCATIONS_1

BOOK_ALTAR_LOCATIONS_4:
	msgbox BOOK_ALTAR_LOCATIONS_Text_1
	goto BOOK_ALTAR_LOCATIONS_1

BOOK_ALTAR_LOCATIONS_5:
	msgbox BOOK_ALTAR_LOCATIONS_Text_2
	goto BOOK_ALTAR_LOCATIONS_1

BOOK_ALTAR_LOCATIONS_6:
	msgbox BOOK_ALTAR_LOCATIONS_Text_3
	goto BOOK_ALTAR_LOCATIONS_1

BOOK_ALTAR_LOCATIONS_7:
	msgbox BOOK_ALTAR_LOCATIONS_Text_4
	goto BOOK_ALTAR_LOCATIONS_1

BOOK_ALTAR_LOCATIONS_8:
	msgbox BOOK_ALTAR_LOCATIONS_Text_5
	goto BOOK_ALTAR_LOCATIONS_1


NPC_WizardsTowerB1F_Ariane_Text_0:
	.string "Ariane$"

NPC_WizardsTowerB1F_Ariane_Text_1:
	.string "I cannot believe that guy got away…$"

NPC_WizardsTowerB1F_Sedridor_Text_0:
	.string "Sedridor$"

NPC_WizardsTowerB1F_Sedridor_Text_1:
	.string "Hello {PLAYER}, I heard from Ariane\n"
	.string "that you gave chase into Draynor Manor.\p"
	.string "It's a shame that they got away but it\n"
	.string "cannot be helped.\p"
	.string "Here I would like you to have this for\n"
	.string "your troubles.$"

NPC_WizardsTowerB1F_Sedridor_Text_2:
	.string "You have something for me from the\n"
	.string "Duke of Lumbridge?\p"
	.string "May I take a look at it for a moment?$"

NPC_WizardsTowerB1F_Sedridor_Text_3:
	.string "Aha!\p"
	.string "So that's what this is!$"

NPC_WizardsTowerB1F_Sedridor_Text_4:
	.string "{PLAYER}, have you seen any of those\n"
	.string "mysterious altars in your travels?\p"
	.string "These talismans grant you access to\n"
	.string "the realm within the altar.\p"
	.string "Actually could you do me one small\n"
	.string "favour?\p"
	.string "Take this talisman to the Air Altar and\n"
	.string "report your findings back to me.\p"
	.string "It will be beneficial for your travels.$"

NPC_WizardsTowerB1F_Sedridor_Text_5:
	.string "The Air altar is located south of\n"
	.string "Falador on Route 7.\p"
	.string "Good luck.$"

NPC_WizardsTowerB1F_Sedridor_Text_6:
	.string "Hello {PLAYER}, have you visited\n"
	.string "those mysterious altars?\p"
	.string "The Air altar is located south of\n"
	.string "Falador on Route 7.$"

NPC_WizardsTowerB1F_Sedridor_Text_7:
	.string "So {PLAYER}, have you visited an\n"
	.string "altar?\p"
	.string "What did you discover?\p"
	.string "Ooh ho ho! So monsters that regularly\n"
	.string "evolve using Runes can evolve on the\l"
	.string "Altars without requiring the Runes?\p"
	.string "How interesting!\p"
	.string "I wonder if the other altars are like\n"
	.string "that…\p"
	.string "If its not too much trouble would you\n"
	.string "be able to go and investigate the other\l"
	.string "altars for me?\p"
	.string "There is information on their locations\n"
	.string "in some of the books around the tower.\p"
	.string "Report back to me once you have\n"
	.string "discovered some more!$"

NPC_WizardsTowerB1F_Sedridor_Text_8:
	.string "Hello {PLAYER}, have you found\n"
	.string "anymore of those mysterious altars?\p"
	.string "I believe there is a book around the\n"
	.string "tower somewhere detailing their\l"
	.string "locations.\p"
	.string "But you'll have to find the Talismans on\n"
	.string "your own.$"

NPC_WizardsTowerB1F_Sedridor_Text_9:
	.string "By the way, have you reported back to\n"
	.string "the Duke?\p"
	.string "I'm sure he is eager to know about\n"
	.string "these Talismans and Altars.$"

BOOK_ALTAR_LOCATIONS_Text_0:
	.string "It has been discovered that a\n"
	.string "mysterious altar is south of Falador.$"

BOOK_ALTAR_LOCATIONS_Text_1:
	.string "Rumour has it there is a mysterious\n"
	.string "altar in the Lumbridge Swamp.$"

BOOK_ALTAR_LOCATIONS_Text_2:
	.string "West of Varrock there appears to be\n"
	.string "many stone ruins, could an altar be\l"
	.string "nearby?$"

BOOK_ALTAR_LOCATIONS_Text_3:
	.string "An adventurer once mentioned some sort\n"
	.string "of ruins north of Goblin Village, could\l"
	.string "this be an altar?$"

BOOK_ALTAR_LOCATIONS_Text_4:
	.string "The barbarians in Gunnars Ground often\n"
	.string "appear to be using rune stone as\l"
	.string "wheatstones to polish their swords.\p"
	.string "Where are they getting these from?$"

BOOK_ALTAR_LOCATIONS_Text_5:
	.string "It would make sense that with the\n"
	.string "amount of stones in the Alkharidian\l"
	.string "desert there may be an altar located\l"
	.string "within this region.$"
