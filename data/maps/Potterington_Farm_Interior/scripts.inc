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
	setflag FLAG_TEMP_5
	setflag FLAG_TEMP_6
	setflag FLAG_TEMP_7
	setflag FLAG_TEMP_8
	setflag FLAG_TEMP_9
	removeobject 5
	removeobject 4
	removeobject 2
	removeobject 10
	removeobject 6
	removeobject 9
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
	special Is_InParty_ZAROS
	compare VAR_RESULT, TRUE
	goto_if_eq POTTERINGTON_FARM_STATE_27
	goto_if_set FLAG_RECEIVED_ZAROLING_EGG, POTTERINGTON_FARM_STATE_27
POTTERINGTON_FARM_STATE_26:
	special Is_InParty_hasHAT
	compare VAR_RESULT, TRUE
	goto_if_eq POTTERINGTON_FARM_STATE_32
	goto_if_set FLAG_RECEIVED_RAVENLING_EGG, POTTERINGTON_FARM_STATE_32
POTTERINGTON_FARM_STATE_31:
	special Is_InParty_TZHAAR
	compare VAR_RESULT, TRUE
	goto_if_eq POTTERINGTON_FARM_STATE_37
	goto_if_set FLAG_RECEIVED_BASILISK_EGG, POTTERINGTON_FARM_STATE_37
POTTERINGTON_FARM_STATE_36:
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
	clearflag FLAG_TEMP_5
	addobject 10
	goto POTTERINGTON_FARM_STATE_26

POTTERINGTON_FARM_STATE_32:
	clearflag FLAG_TEMP_8
	addobject 7
	goto POTTERINGTON_FARM_STATE_31

POTTERINGTON_FARM_STATE_37:
	clearflag FLAG_TEMP_9
	addobject 8
	goto POTTERINGTON_FARM_STATE_36


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
	msgbox POTTERINGTON_FARM_Zamorak_Text_5
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
	goto_if_unset FLAG_RECEIVED_BANDLING_EGG, POTTERINGTON_FARM_Gonthorian_2
	namebox POTTERINGTON_FARM_Gonthorian_Text_0
	msgbox POTTERINGTON_FARM_Gonthorian_Text_4
POTTERINGTON_FARM_Gonthorian_1:
	hidenamebox
	closemessage
	release
	end

POTTERINGTON_FARM_Gonthorian_2:
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
	goto POTTERINGTON_FARM_Gonthorian_1


POTTERINGTON_FARM_MysteriousFigure::
	lock
	faceplayer
	goto_if_unset FLAG_RECEIVED_ZAROLING_EGG, POTTERINGTON_FARM_MysteriousFigure_2
	namebox POTTERINGTON_FARM_MysteriousFigure_Text_0
	msgbox POTTERINGTON_FARM_MysteriousFigure_Text_3
POTTERINGTON_FARM_MysteriousFigure_1:
	hidenamebox
	closemessage
	release
	end

POTTERINGTON_FARM_MysteriousFigure_2:
	namebox POTTERINGTON_FARM_MysteriousFigure_Text_0
	msgbox POTTERINGTON_FARM_MysteriousFigure_Text_1
	closemessage
	hidenamebox
	getpartysize
	compare VAR_RESULT, PARTY_SIZE
	goto_if_eq SCRIPT_EGG_NOROOM
	setflag FLAG_RECEIVED_ZAROLING_EGG
	playfanfare MUS_OBTAIN_ITEM
	msgbox POTTERINGTON_FARM_MysteriousFigure_Text_2
	waitfanfare
	giveegg SPECIES_ZAROLING
	namebox POTTERINGTON_FARM_MysteriousFigure_Text_0
	msgbox POTTERINGTON_FARM_MysteriousFigure_Text_3
	goto POTTERINGTON_FARM_MysteriousFigure_1


POTTERINGTON_FARM_Barbarian::
	lock
	faceplayer
	goto_if_unset FLAG_RECEIVED_UNGODLING_EGG, POTTERINGTON_FARM_Barbarian_2
	namebox POTTERINGTON_FARM_MysteriousFigure_Text_0
	msgbox POTTERINGTON_FARM_Barbarian_Text_2
POTTERINGTON_FARM_Barbarian_1:
	hidenamebox
	closemessage
	release
	end

POTTERINGTON_FARM_Barbarian_2:
	namebox POTTERINGTON_FARM_MysteriousFigure_Text_0
	msgbox POTTERINGTON_FARM_Barbarian_Text_0
	closemessage
	hidenamebox
	getpartysize
	compare VAR_RESULT, PARTY_SIZE
	goto_if_eq SCRIPT_EGG_NOROOM
	setflag FLAG_RECEIVED_UNGODLING_EGG
	playfanfare MUS_OBTAIN_ITEM
	msgbox POTTERINGTON_FARM_Barbarian_Text_1
	waitfanfare
	giveegg SPECIES_UNGODLING
	namebox POTTERINGTON_FARM_MysteriousFigure_Text_0
	msgbox POTTERINGTON_FARM_Barbarian_Text_2
	goto POTTERINGTON_FARM_Barbarian_1


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
	.string "Cupholder$"

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
	.string "CUPHOLDER$"

POTTERINGTON_FARM_MysteriousFigure_Text_0:
	.string "???$"

POTTERINGTON_FARM_MysteriousFigure_Text_1:
	.string "Greetings, I've come from the otherside\n"
	.string "of Gilenor.\p"
	.string "Along my travels my dark lord asked me\n"
	.string "to pass this on to a person would I\l"
	.string "would meet here at this time and this\l"
	.string "date.\p"
	.string "Here take it.$"

POTTERINGTON_FARM_MysteriousFigure_Text_2:
	.string "Obtained an EGG from the Mysterious\n"
	.string "Figure!$"

POTTERINGTON_FARM_MysteriousFigure_Text_3:
	.string "The dark lord works in mysterious ways.$"

POTTERINGTON_FARM_Barbarian_Text_0:
	.string "What is with all of these gods?!\p"
	.string "Disguesting.\p"
	.string "Here take this.$"

POTTERINGTON_FARM_Barbarian_Text_1:
	.string "Obtained an EGG from ???!$"

POTTERINGTON_FARM_Barbarian_Text_2:
	.string "REBEL WITH ME!$"

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
