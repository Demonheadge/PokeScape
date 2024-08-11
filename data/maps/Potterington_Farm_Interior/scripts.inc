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
	setflag FLAG_TEMP_4
	setflag FLAG_TEMP_5
	setflag FLAG_TEMP_6
	setflag FLAG_TEMP_7
	setflag FLAG_TEMP_8
	setflag FLAG_TEMP_9
	setflag FLAG_TEMP_A
	removeobject 5
	removeobject 4
	removeobject 2
	removeobject 10
	removeobject 9
	removeobject 12
	removeobject 6
	removeobject 11
	removeobject 7
	removeobject 8
	removeobject 14
	goto_if_set FLAG_EVILCHICKEN_DEFEATED, POTTERINGTON_FARM_STATE_2
POTTERINGTON_FARM_STATE_1:
	goto_if_set FLAG_EVILCHICKEN_DEFEATED, POTTERINGTON_FARM_STATE_5
POTTERINGTON_FARM_STATE_4:
	goto_if_set FLAG_EVILCHICKEN_DEFEATED, POTTERINGTON_FARM_STATE_8
POTTERINGTON_FARM_STATE_7:
	checkitem ITEM_TERRORBIRD_POUCH, 1
	compare VAR_RESULT, 0
	goto_if_ne POTTERINGTON_FARM_STATE_11
POTTERINGTON_FARM_STATE_10:
	goto_if_set FLAG_EVILCHICKEN_DEFEATED, POTTERINGTON_FARM_STATE_14
POTTERINGTON_FARM_STATE_13:
	goto_if_set FLAG_EVILCHICKEN_DEFEATED, POTTERINGTON_FARM_STATE_17
POTTERINGTON_FARM_STATE_16:
	goto_if_set FLAG_EVILCHICKEN_DEFEATED, POTTERINGTON_FARM_STATE_20
POTTERINGTON_FARM_STATE_19:
	goto_if_set FLAG_EVILCHICKEN_DEFEATED, POTTERINGTON_FARM_STATE_23
POTTERINGTON_FARM_STATE_22:
	goto_if_set FLAG_EVILCHICKEN_DEFEATED, POTTERINGTON_FARM_STATE_26
POTTERINGTON_FARM_STATE_25:
	goto_if_set FLAG_EVILCHICKEN_DEFEATED, POTTERINGTON_FARM_STATE_29
POTTERINGTON_FARM_STATE_28:
	release
	end

POTTERINGTON_FARM_STATE_2:
	clearflag FLAG_TEMP_1
	addobject 5
	goto POTTERINGTON_FARM_STATE_1

POTTERINGTON_FARM_STATE_5:
	clearflag FLAG_TEMP_2
	addobject 4
	goto POTTERINGTON_FARM_STATE_4

POTTERINGTON_FARM_STATE_8:
	clearflag FLAG_TEMP_3
	addobject 2
	goto POTTERINGTON_FARM_STATE_7

POTTERINGTON_FARM_STATE_11:
	clearflag FLAG_TEMP_4
	addobject 10
	addobject 9
	goto POTTERINGTON_FARM_STATE_10

POTTERINGTON_FARM_STATE_14:
	clearflag FLAG_TEMP_5
	addobject 12
	goto POTTERINGTON_FARM_STATE_13

POTTERINGTON_FARM_STATE_17:
	clearflag FLAG_TEMP_6
	addobject 6
	goto POTTERINGTON_FARM_STATE_16

POTTERINGTON_FARM_STATE_20:
	clearflag FLAG_TEMP_7
	addobject 11
	goto POTTERINGTON_FARM_STATE_19

POTTERINGTON_FARM_STATE_23:
	clearflag FLAG_TEMP_8
	addobject 7
	goto POTTERINGTON_FARM_STATE_22

POTTERINGTON_FARM_STATE_26:
	clearflag FLAG_TEMP_9
	addobject 8
	goto POTTERINGTON_FARM_STATE_25

POTTERINGTON_FARM_STATE_29:
	clearflag FLAG_TEMP_A
	addobject 14
	goto POTTERINGTON_FARM_STATE_28


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
	specialvar VAR_RESULT, GetDaycareState
	compare VAR_RESULT, DAYCARE_EGG_WAITING
	goto_if_eq Route117_PokemonDayCare_EventScript_EggWaiting
	compare VAR_RESULT, DAYCARE_ONE_MON
	goto_if_eq Route117_PokemonDayCare_EventScript_OneMonInDaycare
	compare VAR_RESULT, DAYCARE_TWO_MONS
	goto_if_eq Route117_PokemonDayCare_EventScript_TwoMonsInDaycare
	namebox EventScript_DaycareLady_Text_0
	msgbox EventScript_DaycareLady_Text_1, MSGBOX_YESNO
	hidenamebox
	compare VAR_RESULT, YES
	goto_if_eq Route117_PokemonDayCare_EventScript_GiveMonToRaise
	namebox EventScript_DaycareLady_Text_0
	msgbox Route117_PokemonDayCare_Text_FineThenComeAgain, MSGBOX_DEFAULT
	hidenamebox
	release
	end


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
	faceplayer
	namebox POTTERINGTON_FARM_Zamorak_Text_0
	msgbox POTTERINGTON_FARM_Zamorak_Text_1
	closemessage
	hidenamebox
	release
	end


POTTERINGTON_FARM_Saradomin::
	faceplayer
	namebox POTTERINGTON_FARM_Saradomin_Text_0
	msgbox POTTERINGTON_FARM_Zamorak_Text_1
	closemessage
	hidenamebox
	release
	end


POTTERINGTON_FARM_Guthix::
	goto_if_unset FLAG_RECEIVED_GUTHIX_EGG, POTTERINGTON_FARM_Guthix_2
	namebox POTTERINGTON_FARM_Guthix_Text_0
	msgbox POTTERINGTON_FARM_Guthix_Text_4
POTTERINGTON_FARM_Guthix_1:
	hidenamebox
	closemessage
	release
	end

POTTERINGTON_FARM_Guthix_2:
	lock
	faceplayer
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
	faceplayer
	namebox POTTERINGTON_FARM_Gonthorian_Text_0
	msgbox POTTERINGTON_FARM_Zamorak_Text_1
	closemessage
	hidenamebox
	release
	end


POTTERINGTON_FARM_Zezima::
	faceplayer
	namebox POTTERINGTON_FARM_Zezima_Text_0
	msgbox POTTERINGTON_FARM_Zamorak_Text_1
	closemessage
	hidenamebox
	release
	end


POTTERINGTON_FARM_Prezleek::
	lockall
	faceplayer
	checkitem ITEM_YAK_POUCH, 1
	compare VAR_RESULT, 0
	goto_if_eq POTTERINGTON_FARM_Prezleek_2
POTTERINGTON_FARM_Prezleek_1:
	namebox POTTERINGTON_FARM_Prezleek_Text_0
	msgbox POTTERINGTON_FARM_Prezleek_Text_6
	closemessage
	hidenamebox
	release
	end

POTTERINGTON_FARM_Prezleek_2:
	checkitem ITEM_TERRORBIRD_POUCH, 1
	compare VAR_RESULT, 0
	goto_if_ne POTTERINGTON_FARM_Prezleek_4
	goto POTTERINGTON_FARM_Prezleek_1

POTTERINGTON_FARM_Prezleek_4:
	namebox POTTERINGTON_FARM_Prezleek_Text_0
	msgbox POTTERINGTON_FARM_Prezleek_Text_1
	applymovement 10, Movement_InteractFACELEFT
	waitmovement 0
	msgbox POTTERINGTON_FARM_Prezleek_Text_2
	closemessage
	hidenamebox
	applymovement 9, Movement_InteractFACERIGHT
	waitmovement 0
	namebox POTTERINGTON_FARM_Prezleek_Text_3
	msgbox POTTERINGTON_FARM_Prezleek_Text_4
	closemessage
	hidenamebox
	applymovement 10, Movement_InteractFACEPLAYER
	waitmovement 0
	namebox POTTERINGTON_FARM_Prezleek_Text_0
	msgbox POTTERINGTON_FARM_Prezleek_Text_5
	closemessage
	hidenamebox
	giveitem ITEM_YAK_POUCH, 1
	goto POTTERINGTON_FARM_Prezleek_1


POTTERINGTON_FARM_Baroo::
	faceplayer
	namebox POTTERINGTON_FARM_Prezleek_Text_3
	msgbox POTTERINGTON_FARM_Baroo_Text_0
	closemessage
	hidenamebox
	release
	end


POTTERINGTON_FARM_Demonheadge::
	faceplayer
	namebox POTTERINGTON_FARM_Demonheadge_Text_0
	msgbox POTTERINGTON_FARM_Zamorak_Text_1
	closemessage
	hidenamebox
	release
	end


POTTERINGTON_FARM_HyperStan::
	faceplayer
	namebox POTTERINGTON_FARM_HyperStan_Text_0
	msgbox POTTERINGTON_FARM_Zamorak_Text_1
	closemessage
	hidenamebox
	release
	end


POTTERINGTON_FARM_JagexMod::
	faceplayer
	namebox POTTERINGTON_FARM_JagexMod_Text_0
	msgbox POTTERINGTON_FARM_Zamorak_Text_1
	closemessage
	hidenamebox
	release
	end


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
	.string "Hey there, I am Mother Potterington.\p"
	.string "We can raise and breed MONSTERS for\n"
	.string "you.\p"
	.string "Would you like us to raise one?$"

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
	.string "I am a cupholder.$"

POTTERINGTON_FARM_Saradomin_Text_0:
	.string "Saradomin$"

POTTERINGTON_FARM_Guthix_Text_0:
	.string "Guthix$"

POTTERINGTON_FARM_Guthix_Text_1:
	.string "Hello my name is GUTTTHHHIIXX!!!\p"
	.string "You can have THHHISSS!$"

POTTERINGTON_FARM_Guthix_Text_2:
	.string "Obtained an EGG from Guthix!$"

POTTERINGTON_FARM_Guthix_Text_3:
	.string "Look after it!$"

POTTERINGTON_FARM_Guthix_Text_4:
	.string "Did you know grass is blue!!$"

POTTERINGTON_FARM_Gonthorian_Text_0:
	.string "Gonthorian$"

POTTERINGTON_FARM_Zezima_Text_0:
	.string "Zezima$"

POTTERINGTON_FARM_Prezleek_Text_0:
	.string "Prezleek$"

POTTERINGTON_FARM_Prezleek_Text_1:
	.string "Hello.\p"
	.string "Wait…{PAUSE 16} What is that…?{PAUSE 16}\n"
	.string "A rideable Terrorbird?!\p"
	.string "Unbelieveable everyone knows Yaks are\n"
	.string "the best source of transportation.$"

POTTERINGTON_FARM_Prezleek_Text_2:
	.string "Baroo, you agree with me right?$"

POTTERINGTON_FARM_Prezleek_Text_3:
	.string "Baroo$"

POTTERINGTON_FARM_Prezleek_Text_4:
	.string "Baroooo, Baroo!$"

POTTERINGTON_FARM_Prezleek_Text_5:
	.string "See even Baroo agrees.\p"
	.string "Here have this.$"

POTTERINGTON_FARM_Prezleek_Text_6:
	.string "See aren't Yaks so much better than\n"
	.string "Terrorbirds?$"

POTTERINGTON_FARM_Baroo_Text_0:
	.string "Baroo, baroo!$"

POTTERINGTON_FARM_Demonheadge_Text_0:
	.string "Demonheadge$"

POTTERINGTON_FARM_HyperStan_Text_0:
	.string "Hyper Stan$"

POTTERINGTON_FARM_JagexMod_Text_0:
	.string "Mod ???$"
