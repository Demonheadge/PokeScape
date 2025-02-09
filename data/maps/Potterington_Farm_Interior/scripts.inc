Potterington_Farm_Interior_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Potterington_Farm_Interior_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Potterington_Farm_Interior_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	call POTTERINGTON_FARM_STATE
	return


POTTERINGTON_FARM_STATE::
	setflag FLAG_TEMP_1
	setflag FLAG_TEMP_2
	setflag FLAG_TEMP_3
	setflag FLAG_TEMP_6
	setflag FLAG_TEMP_8
	setflag FLAG_TEMP_9
	removeobject 5
	removeobject 4
	removeobject 2
	removeobject 6
	removeobject 7
	removeobject 8
	special Is_InParty_CABBAGE
	compare VAR_RESULT, TRUE
	goto_if_eq POTTERINGTON_FARM_STATE_2
	goto_if_set FLAG_RECEIVED_GUTHIX_EGG, POTTERINGTON_FARM_STATE_2
	special Is_InParty_GUTHIX
	compare VAR_RESULT, TRUE
	goto_if_eq POTTERINGTON_FARM_STATE_12
	goto_if_set FLAG_RECEIVED_GUTHIX_EGG, POTTERINGTON_FARM_STATE_12
POTTERINGTON_FARM_STATE_1:
	special Is_InParty_SARADOMIN
	compare VAR_RESULT, TRUE
	goto_if_eq POTTERINGTON_FARM_STATE_8
	goto_if_set FLAG_RECEIVED_SARADOMIN_EGG, POTTERINGTON_FARM_STATE_8
POTTERINGTON_FARM_STATE_7:
	special Is_InParty_ZAMORAK
	compare VAR_RESULT, TRUE
	goto_if_eq POTTERINGTON_FARM_STATE_17
	goto_if_set FLAG_RECEIVED_ZAMORAK_EGG, POTTERINGTON_FARM_STATE_17
POTTERINGTON_FARM_STATE_16:
	special Is_InParty_BANDOS
	compare VAR_RESULT, TRUE
	goto_if_eq POTTERINGTON_FARM_STATE_22
	goto_if_set FLAG_RECEIVED_BANDLING_EGG, POTTERINGTON_FARM_STATE_22
POTTERINGTON_FARM_STATE_21:
	special Is_InParty_hasHAT
	compare VAR_RESULT, TRUE
	goto_if_eq POTTERINGTON_FARM_STATE_27
	goto_if_set FLAG_RECEIVED_RAVENLING_EGG, POTTERINGTON_FARM_STATE_27
POTTERINGTON_FARM_STATE_26:
	special Is_InParty_TZHAAR
	compare VAR_RESULT, TRUE
	goto_if_eq POTTERINGTON_FARM_STATE_32
	goto_if_set FLAG_RECEIVED_BASILISK_EGG, POTTERINGTON_FARM_STATE_32
POTTERINGTON_FARM_STATE_31:
	release
	end

POTTERINGTON_FARM_STATE_2:
	clearflag FLAG_TEMP_1
	addobject 5
	goto POTTERINGTON_FARM_STATE_1

POTTERINGTON_FARM_STATE_8:
	clearflag FLAG_TEMP_2
	addobject 4
	goto POTTERINGTON_FARM_STATE_7

POTTERINGTON_FARM_STATE_12:
	clearflag FLAG_TEMP_1
	addobject 5
	goto POTTERINGTON_FARM_STATE_1

POTTERINGTON_FARM_STATE_17:
	clearflag FLAG_TEMP_3
	addobject 2
	goto POTTERINGTON_FARM_STATE_16

POTTERINGTON_FARM_STATE_22:
	clearflag FLAG_TEMP_6
	addobject 6
	goto POTTERINGTON_FARM_STATE_21

POTTERINGTON_FARM_STATE_27:
	clearflag FLAG_TEMP_8
	addobject 7
	goto POTTERINGTON_FARM_STATE_26

POTTERINGTON_FARM_STATE_32:
	clearflag FLAG_TEMP_9
	addobject 8
	goto POTTERINGTON_FARM_STATE_31


EventScript_DaycareMan::
	lock
	faceplayer
	special GetDaycareMonNicknames
	specialvar VAR_RESULT, GetDaycareState
	compare VAR_RESULT, DAYCARE_EGG_WAITING
	goto_if_eq Route117_EventScript_DaycareEggWaiting
	compare VAR_RESULT, DAYCARE_ONE_MON
	goto_if_eq Route117_EventScript_CheckOnOneMon
	compare VAR_RESULT, DAYCARE_TWO_MONS
	goto_if_eq Route117_EventScript_CheckOnTwoMons
	namebox EventScript_DaycareMan_Text_0
	msgbox EventScript_DaycareMan_Text_1
	closemessage
	hidenamebox
	release
	end


EventScript_DaycareLady::
	lock
	faceplayer
	namebox EventScript_DaycareLady_Text_0
	compare VAR_POTTERINGTON_FARM, 0
	goto_if_eq EventScript_DaycareLady_2
EventScript_DaycareLady_1:
	specialvar VAR_RESULT, GetDaycareState
	compare VAR_RESULT, DAYCARE_EGG_WAITING
	goto_if_eq Route117_PokemonDayCare_EventScript_EggWaiting
	compare VAR_RESULT, DAYCARE_ONE_MON
	goto_if_eq Route117_PokemonDayCare_EventScript_OneMonInDaycare
	compare VAR_RESULT, DAYCARE_TWO_MONS
	goto_if_eq Route117_PokemonDayCare_EventScript_TwoMonsInDaycare
	namebox EventScript_DaycareLady_Text_0
	msgbox EventScript_DaycareLady_Text_2, MSGBOX_YESNO
	hidenamebox
	compare VAR_RESULT, YES
	goto_if_eq Route117_PokemonDayCare_EventScript_GiveMonToRaise
	namebox EventScript_DaycareLady_Text_0
	msgbox Route117_PokemonDayCare_Text_FineThenComeAgain, MSGBOX_DEFAULT
	hidenamebox
	release
	end

EventScript_DaycareLady_2:
	msgbox EventScript_DaycareLady_Text_1
	setvar VAR_POTTERINGTON_FARM, 5
	goto EventScript_DaycareLady_1


POTTERINGTON_FARM_BOOK::
	lock
	msgbox POTTERINGTON_FARM_BOOK_Text_0
	closemessage
	end


POTTERINGTON_FARM_BOOK_2::
	lock
	msgbox POTTERINGTON_FARM_BOOK_2_Text_0
	closemessage
	end


POTTERINGTON_FARM_Banker::
	faceplayer
	namebox POTTERINGTON_FARM_Banker_Text_0
	msgbox POTTERINGTON_FARM_Banker_Text_1
	waitmessage
	goto BANK_OPTIONS
	return


POTTERINGTON_FARM_Lassy::
	namebox POTTERINGTON_FARM_Lassy_Text_0
	msgbox POTTERINGTON_FARM_Lassy_Text_1
	closemessage
	hidenamebox
	release
	end


SCRIPT_EGG_NOROOM::
	msgbox SCRIPT_EGG_NOROOM_Text_0
	closemessage
	hidenamebox
	release
	end


POTTERINGTON_FARM_Zamorak::
	lock
	faceplayer
	goto_if_unset FLAG_RECEIVED_ZAMORAK_EGG, POTTERINGTON_FARM_Zamorak_2
	namebox POTTERINGTON_FARM_Zamorak_Text_4
	msgbox POTTERINGTON_FARM_Zamorak_Text_5
POTTERINGTON_FARM_Zamorak_1:
	hidenamebox
	closemessage
	release
	end

POTTERINGTON_FARM_Zamorak_2:
	namebox POTTERINGTON_FARM_Zamorak_Text_0
	msgbox POTTERINGTON_FARM_Zamorak_Text_1
	closemessage
	hidenamebox
	getpartysize
	compare VAR_RESULT, PARTY_SIZE
	goto_if_eq SCRIPT_EGG_NOROOM
	setflag FLAG_RECEIVED_ZAMORAK_EGG
	playfanfare MUS_OBTAIN_ITEM
	msgbox POTTERINGTON_FARM_Zamorak_Text_2
	waitfanfare
	giveegg SPECIES_ZAMLING
	namebox POTTERINGTON_FARM_Zamorak_Text_0
	msgbox POTTERINGTON_FARM_Zamorak_Text_3
	goto POTTERINGTON_FARM_Zamorak_1


POTTERINGTON_FARM_Saradomin::
	lock
	faceplayer
	goto_if_unset FLAG_RECEIVED_SARADOMIN_EGG, POTTERINGTON_FARM_Saradomin_2
	namebox POTTERINGTON_FARM_Saradomin_Text_4
	msgbox POTTERINGTON_FARM_Saradomin_Text_5
POTTERINGTON_FARM_Saradomin_1:
	hidenamebox
	closemessage
	release
	end

POTTERINGTON_FARM_Saradomin_2:
	namebox POTTERINGTON_FARM_Saradomin_Text_0
	msgbox POTTERINGTON_FARM_Saradomin_Text_1
	closemessage
	hidenamebox
	getpartysize
	compare VAR_RESULT, PARTY_SIZE
	goto_if_eq SCRIPT_EGG_NOROOM
	setflag FLAG_RECEIVED_SARADOMIN_EGG
	playfanfare MUS_OBTAIN_ITEM
	msgbox POTTERINGTON_FARM_Saradomin_Text_2
	waitfanfare
	giveegg SPECIES_SARALING
	namebox POTTERINGTON_FARM_Saradomin_Text_0
	msgbox POTTERINGTON_FARM_Saradomin_Text_3
	goto POTTERINGTON_FARM_Saradomin_1


POTTERINGTON_FARM_Guthix::
	lock
	faceplayer
	goto_if_unset FLAG_RECEIVED_GUTHIX_EGG, POTTERINGTON_FARM_Guthix_2
	namebox POTTERINGTON_FARM_Guthix_Text_0
	msgbox POTTERINGTON_FARM_Guthix_Text_4
POTTERINGTON_FARM_Guthix_1:
	hidenamebox
	closemessage
	release
	end

POTTERINGTON_FARM_Guthix_2:
	namebox POTTERINGTON_FARM_Guthix_Text_0
	msgbox POTTERINGTON_FARM_Guthix_Text_1
	closemessage
	hidenamebox
	getpartysize
	compare VAR_RESULT, PARTY_SIZE
	goto_if_eq SCRIPT_EGG_NOROOM
	setflag FLAG_RECEIVED_GUTHIX_EGG
	playfanfare MUS_OBTAIN_ITEM
	msgbox POTTERINGTON_FARM_Guthix_Text_2
	waitfanfare
	giveegg SPECIES_GUTHLING
	namebox POTTERINGTON_FARM_Guthix_Text_0
	msgbox POTTERINGTON_FARM_Guthix_Text_3
	goto POTTERINGTON_FARM_Guthix_1


POTTERINGTON_FARM_Gonthorian::
	lock
	faceplayer
	goto_if_unset FLAG_RECEIVED_BANDLING_EGG, POTTERINGTON_FARM_Gonthorian_1
	random 6
	switch VAR_RESULT
	case 0, POTTERINGTON_FARM_Gonthorian_6
	case 1, POTTERINGTON_FARM_Gonthorian_7
	case 2, POTTERINGTON_FARM_Gonthorian_8
	case 3, POTTERINGTON_FARM_Gonthorian_9
	case 4, POTTERINGTON_FARM_Gonthorian_10
	case 5, POTTERINGTON_FARM_Gonthorian_11
	release
	end

POTTERINGTON_FARM_Gonthorian_1:
	namebox POTTERINGTON_FARM_Gonthorian_Text_0
	msgbox POTTERINGTON_FARM_Gonthorian_Text_1
	closemessage
	hidenamebox
	getpartysize
	compare VAR_RESULT, PARTY_SIZE
	goto_if_eq SCRIPT_EGG_NOROOM
	setflag FLAG_RECEIVED_BANDLING_EGG
	playfanfare MUS_OBTAIN_ITEM
	msgbox POTTERINGTON_FARM_Gonthorian_Text_2
	waitfanfare
	giveegg SPECIES_BANDLING
	namebox POTTERINGTON_FARM_Gonthorian_Text_0
	msgbox POTTERINGTON_FARM_Gonthorian_Text_3
	return

POTTERINGTON_FARM_Gonthorian_6:
	lock
	faceplayer
	namebox POTTERINGTON_FARM_Gonthorian_Text_0
	msgbox POTTERINGTON_FARM_Gonthorian_Text_4
	hidenamebox
	release
	end

POTTERINGTON_FARM_Gonthorian_7:
	lock
	faceplayer
	namebox POTTERINGTON_FARM_Gonthorian_Text_0
	msgbox POTTERINGTON_FARM_Gonthorian_Text_5
	hidenamebox
	release
	end

POTTERINGTON_FARM_Gonthorian_8:
	lock
	faceplayer
	namebox POTTERINGTON_FARM_Gonthorian_Text_0
	msgbox POTTERINGTON_FARM_Gonthorian_Text_6
	hidenamebox
	release
	end

POTTERINGTON_FARM_Gonthorian_9:
	lock
	faceplayer
	namebox POTTERINGTON_FARM_Gonthorian_Text_0
	msgbox POTTERINGTON_FARM_Gonthorian_Text_7
	hidenamebox
	release
	end

POTTERINGTON_FARM_Gonthorian_10:
	lock
	faceplayer
	namebox POTTERINGTON_FARM_Gonthorian_Text_0
	msgbox POTTERINGTON_FARM_Gonthorian_Text_8
	hidenamebox
	release
	end

POTTERINGTON_FARM_Gonthorian_11:
	lock
	faceplayer
	namebox POTTERINGTON_FARM_Gonthorian_Text_0
	msgbox POTTERINGTON_FARM_Gonthorian_Text_9
	hidenamebox
	release
	end


POTTERINGTON_FARM_Seren_Spirit::
	lock
	faceplayer
	goto_if_unset FLAG_RECEIVED_SERELING_EGG, POTTERINGTON_FARM_Seren_Spirit_2
	msgbox POTTERINGTON_FARM_Seren_Spirit_Text_3
POTTERINGTON_FARM_Seren_Spirit_1:
	hidenamebox
	closemessage
	release
	end

POTTERINGTON_FARM_Seren_Spirit_2:
	msgbox POTTERINGTON_FARM_Seren_Spirit_Text_0
	closemessage
	hidenamebox
	getpartysize
	compare VAR_RESULT, PARTY_SIZE
	goto_if_eq SCRIPT_EGG_NOROOM
	setflag FLAG_RECEIVED_SERELING_EGG
	playfanfare MUS_OBTAIN_ITEM
	msgbox POTTERINGTON_FARM_Seren_Spirit_Text_1
	waitfanfare
	giveegg SPECIES_SERELING
	msgbox POTTERINGTON_FARM_Seren_Spirit_Text_2
	goto POTTERINGTON_FARM_Seren_Spirit_1


POTTERINGTON_FARM_Demonheadge::
	lock
	faceplayer
	goto_if_unset FLAG_RECEIVED_RAVENLING_EGG, POTTERINGTON_FARM_Demonheadge_2
	namebox POTTERINGTON_FARM_Demonheadge_Text_0
	msgbox POTTERINGTON_FARM_Demonheadge_Text_4
POTTERINGTON_FARM_Demonheadge_1:
	hidenamebox
	closemessage
	release
	end

POTTERINGTON_FARM_Demonheadge_2:
	namebox POTTERINGTON_FARM_Demonheadge_Text_0
	msgbox POTTERINGTON_FARM_Demonheadge_Text_1
	closemessage
	hidenamebox
	getpartysize
	compare VAR_RESULT, PARTY_SIZE
	goto_if_eq SCRIPT_EGG_NOROOM
	setflag FLAG_RECEIVED_RAVENLING_EGG
	playfanfare MUS_OBTAIN_ITEM
	msgbox POTTERINGTON_FARM_Demonheadge_Text_2
	waitfanfare
	giveegg SPECIES_RAVENLING
	namebox POTTERINGTON_FARM_Demonheadge_Text_0
	msgbox POTTERINGTON_FARM_Demonheadge_Text_3
	goto POTTERINGTON_FARM_Demonheadge_1


POTTERINGTON_FARM_HyperStan::
	lock
	faceplayer
	goto_if_unset FLAG_RECEIVED_BASILISK_EGG, POTTERINGTON_FARM_HyperStan_2
	namebox POTTERINGTON_FARM_HyperStan_Text_0
	msgbox POTTERINGTON_FARM_HyperStan_Text_4
POTTERINGTON_FARM_HyperStan_1:
	hidenamebox
	closemessage
	release
	end

POTTERINGTON_FARM_HyperStan_2:
	namebox POTTERINGTON_FARM_HyperStan_Text_0
	msgbox POTTERINGTON_FARM_HyperStan_Text_1
	closemessage
	hidenamebox
	getpartysize
	compare VAR_RESULT, PARTY_SIZE
	goto_if_eq SCRIPT_EGG_NOROOM
	setflag FLAG_RECEIVED_BASILISK_EGG
	playfanfare MUS_OBTAIN_ITEM
	msgbox POTTERINGTON_FARM_HyperStan_Text_2
	waitfanfare
	giveegg SPECIES_BASILISK_BABY_FORM
	namebox POTTERINGTON_FARM_HyperStan_Text_0
	msgbox POTTERINGTON_FARM_HyperStan_Text_3
	goto POTTERINGTON_FARM_HyperStan_1


POTTERINGTON_FARM_JagexMod::
	faceplayer
	namebox POTTERINGTON_FARM_JagexMod_Text_0
	msgbox POTTERINGTON_FARM_JagexMod_Text_1
	closemessage
	hidenamebox
	release
	end


POTTERINGTON_FARM_test::
	faceplayer
	namebox POTTERINGTON_FARM_Demonheadge_Text_0
	special Is_InParty_hasHAT
	compare VAR_RESULT, TRUE
	goto_if_eq POTTERINGTON_FARM_test_2
	msgbox POTTERINGTON_FARM_test_Text_1
POTTERINGTON_FARM_test_1:
	closemessage
	hidenamebox
	release
	end

POTTERINGTON_FARM_test_2:
	msgbox POTTERINGTON_FARM_test_Text_0
	goto POTTERINGTON_FARM_test_1


EventScript_DaycareMan_Text_0:
	.string "Father Pott.$"

EventScript_DaycareMan_Text_1:
	.string "Hello, I am Father Potterington.\n"
	.string "We help take care of the precious\l"
	.string "MONSTERS of Adventurers.\p"
	.string "If you'd like us to raise your MONSTER,\n"
	.string "have a word with my wife.$"

EventScript_DaycareLady_Text_0:
	.string "Mother Pott.$"

EventScript_DaycareLady_Text_1:
	.string "Hi honey, I am Mother Potterington.\p"
	.string "Is this your first time here?\p"
	.string "We can raise and breed MONSTERS for\n"
	.string "you.\p"
	.string "All we ask in return is that you pay for\n"
	.string "our services.\p"
	.string "Beans?\p"
	.string "No sweety, you don't pay with beans.\p"
	.string "Just regular old Gold pieces.\p"
	.string "Now, what can I do for you?$"

EventScript_DaycareLady_Text_2:
	.string "We can raise and breed MONSTERS for\n"
	.string "you.\p"
	.string "Would you like us to raise one?$"

POTTERINGTON_FARM_BOOK_Text_0:
	.string "This book seems to be warning\n"
	.string "adventurers to not leave monsters of\l"
	.string "different species in the breeding pens.$"

POTTERINGTON_FARM_BOOK_2_Text_0:
	.string "There is a book with information on\n"
	.string "Cows, Frogs, Unicorns, Sardines, Wolves,\l"
	.string "Chickens, Roosters and Spiders.\p"
	.string "The list goes on…$"

POTTERINGTON_FARM_Banker_Text_0:
	.string "Nephew Pott.$"

POTTERINGTON_FARM_Banker_Text_1:
	.string "I handle the finances for our family.\p"
	.string "But I also help adventurers access\n"
	.string "their banks.\p"
	.string "How may I help you today?$"

POTTERINGTON_FARM_Lassy_Text_0:
	.string "Lassy$"

POTTERINGTON_FARM_Lassy_Text_1:
	.string "Zzz… {PAUSE 16}Zzz… {PAUSE 16}\n"
	.string "Zzz… {PAUSE 16}Zzz…$"

SCRIPT_EGG_NOROOM_Text_0:
	.string "You have no space for this.$"

POTTERINGTON_FARM_Zamorak_Text_0:
	.string "Zamorak$"

POTTERINGTON_FARM_Zamorak_Text_1:
	.string "Take this and use it to beat up that\n"
	.string "pesky Saradomin worshipers.$"

POTTERINGTON_FARM_Zamorak_Text_2:
	.string "Obtained an EGG from Zamorak!$"

POTTERINGTON_FARM_Zamorak_Text_3:
	.string "Destroy them all!$"

POTTERINGTON_FARM_Zamorak_Text_4:
	.string "Zamorak.$"

POTTERINGTON_FARM_Zamorak_Text_5:
	.string "I hope you find strength through\n"
	.string "chaos.$"

POTTERINGTON_FARM_Saradomin_Text_0:
	.string "Saradomin$"

POTTERINGTON_FARM_Saradomin_Text_1:
	.string "I heard you were training monsters.\p"
	.string "These might be useful for you.$"

POTTERINGTON_FARM_Saradomin_Text_2:
	.string "Obtained an EGG from Saradomin!$"

POTTERINGTON_FARM_Saradomin_Text_3:
	.string "Train it well.$"

POTTERINGTON_FARM_Saradomin_Text_4:
	.string "Saradomin.$"

POTTERINGTON_FARM_Saradomin_Text_5:
	.string "May that egg help guide you on your\n"
	.string "path.$"

POTTERINGTON_FARM_Guthix_Text_0:
	.string "Guthix$"

POTTERINGTON_FARM_Guthix_Text_1:
	.string "My name is GUTTTHHHIIXX!!!\p"
	.string "Your monsters know about\n"
	.string "BALLAANNCCEE!\p"
	.string "So you can have THHHISSS!$"

POTTERINGTON_FARM_Guthix_Text_2:
	.string "Obtained an EGG from Guthix!$"

POTTERINGTON_FARM_Guthix_Text_3:
	.string "EGGS ARE COOOOL!$"

POTTERINGTON_FARM_Guthix_Text_4:
	.string "Did you know grass is blue!?$"

POTTERINGTON_FARM_Gonthorian_Text_0:
	.string "Gonthorian$"

POTTERINGTON_FARM_Gonthorian_Text_1:
	.string "Fish crackers!$"

POTTERINGTON_FARM_Gonthorian_Text_2:
	.string "Obtained an EGG from Gonthorian!$"

POTTERINGTON_FARM_Gonthorian_Text_3:
	.string "Look after it!$"

POTTERINGTON_FARM_Gonthorian_Text_4:
	.string "It is I, Gonthorian!\p"
	.string "I'm the slayer of dragons!\p"
	.string "The caster of ancient magic!\p"
	.string "Seducer of woman!\p"
	.string "And eater of goldfish crackers.$"

POTTERINGTON_FARM_Gonthorian_Text_5:
	.string "It is I, Gonthorian!\p"
	.string "Killer of demons!\p"
	.string "Completer of really hard quests!\p"
	.string "Lover of Will Smith movies!$"

POTTERINGTON_FARM_Gonthorian_Text_6:
	.string "It is I, Gonthorian!\p"
	.string "Destroyer of beasts!\p"
	.string "Fisher of trout!\p"
	.string "Cooker of...$"

POTTERINGTON_FARM_Gonthorian_Text_7:
	.string "It is I, Gonthorian!\p"
	.string "Annihilator of all that is evil!\p"
	.string "Surfer of really rad waves at the\n"
	.string "beach!\p"
	.string "Fixer of unanimous household\n"
	.string "appliances!$"

POTTERINGTON_FARM_Gonthorian_Text_8:
	.string "It is I, Gonthorian!\p"
	.string "Conqueror of kingdoms!\p"
	.string "Tweeter of what I am doing!\p"
	.string "Enjoyer of the show King of Queens.$"

POTTERINGTON_FARM_Gonthorian_Text_9:
	.string "It is I, Gonthorian!\p"
	.string "Protector of Falador!!\p"
	.string "Keeper of wisdom!\p"
	.string "Creator of Kraft Dinner\p"
	.string "...On a regular basis$"

POTTERINGTON_FARM_Seren_Spirit_Text_0:
	.string "The crystal shines brightly.\p"
	.string "A gift has appeared for you!$"

POTTERINGTON_FARM_Seren_Spirit_Text_1:
	.string "Obtained an EGG from the Seren Spirit!$"

POTTERINGTON_FARM_Seren_Spirit_Text_2:
	.string "The crystal goes back to roaming.$"

POTTERINGTON_FARM_Seren_Spirit_Text_3:
	.string "You attempt to capture the floating\n"
	.string "crystal but it gets away.$"

POTTERINGTON_FARM_Demonheadge_Text_0:
	.string "Demonheadge$"

POTTERINGTON_FARM_Demonheadge_Text_1:
	.string "That…{PAUSE 15}\n"
	.string "That……\p"
	.string "THAT HAT IS ABSOLUTLEY AMAZING!\p"
	.string "Your monster looks so cool just wearing\n"
	.string "it!\p"
	.string "Here I want you to have this!$"

POTTERINGTON_FARM_Demonheadge_Text_2:
	.string "Obtained an EGG from the Demonheadge!$"

POTTERINGTON_FARM_Demonheadge_Text_3:
	.string "Raven's are also pretty damn cool.\p"
	.string "Look after that egg!$"

POTTERINGTON_FARM_Demonheadge_Text_4:
	.string "Hats are cool, but Raven's are pretty\n"
	.string "damn cool too.$"

POTTERINGTON_FARM_HyperStan_Text_0:
	.string "HyperStan$"

POTTERINGTON_FARM_HyperStan_Text_1:
	.string "Ew what is that monster you have with\n"
	.string "you in your party!\p"
	.string "Get rid of it and take use this instead.$"

POTTERINGTON_FARM_HyperStan_Text_2:
	.string "Obtained an EGG from the HyperStan!$"

POTTERINGTON_FARM_HyperStan_Text_3:
	.string "You'll have to hatch it first.\p"
	.string "But already as an egg it surpasses\n"
	.string "those monsters you have with you…$"

POTTERINGTON_FARM_HyperStan_Text_4:
	.string "I hope you decided to get rid of those\n"
	.string "monsters you had.$"

POTTERINGTON_FARM_JagexMod_Text_0:
	.string "Mod ???$"

POTTERINGTON_FARM_JagexMod_Text_1:
	.string "I am a cupholder.$"

POTTERINGTON_FARM_test_Text_0:
	.string "Your monsters are balanced in attack\n"
	.string "and defense.$"

POTTERINGTON_FARM_test_Text_1:
	.string "You do not have a baby yak.$"
