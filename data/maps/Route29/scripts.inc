Route29_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route29_MapScripts_MAP_SCRIPT_ON_TRANSITION
	map_script MAP_SCRIPT_ON_LOAD, Route29_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

Route29_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setvar VAR_EVOLUTION_MAP_STATE, 11
	call WEATHER_CHANGE_AREA_DESERT_CALM
	return

Route29_MapScripts_MAP_SCRIPT_ON_LOAD:
	call ROUTE29_DOOR
	return


ROUTE29_DOOR::
	goto_if_set FLAG_DUNGEONEERING_DOOR_ROUTE29, ROUTE29_DOOR_1
	return

ROUTE29_DOOR_1:
	setmetatile 24, 11, 121, 0
	special DrawWholeMapView
	return


DUNGEONEERING_DOOR_ROUTE29::
	goto_if_unset FLAG_DUNGEONEERING_DOOR_ROUTE29, DUNGEONEERING_DOOR_ROUTE29_2
	msgbox DUNGEONEERING_DOOR_ROUTE29_Text_2
	closemessage
DUNGEONEERING_DOOR_ROUTE29_1:
	release
	end

DUNGEONEERING_DOOR_ROUTE29_2:
	msgbox DUNGEONEERING_DOOR_ROUTE29_Text_0, MSGBOX_YESNO
	closemessage
	compare VAR_RESULT, 0
	goto_if_ne DUNGEONEERING_DOOR_ROUTE29_5
	goto DUNGEONEERING_DOOR_ROUTE29_1

DUNGEONEERING_DOOR_ROUTE29_5:
	playse SE_SWITCH
	waitse
	delay 30
	setmetatile 24, 11, 121, 0
	special DrawWholeMapView
	playse SE_ICE_BREAK
	setflag FLAG_DUNGEONEERING_DOOR_ROUTE29
	msgbox DUNGEONEERING_DOOR_ROUTE29_Text_1
	closemessage
	goto DUNGEONEERING_DOOR_ROUTE29_1


BATTLE_ROUTE29_TRAINER_1::
	trainerbattle_single TRAINER_ROUTE29_TRAINER_1, BATTLE_ROUTE29_TRAINER_1_Text_0, BATTLE_ROUTE29_TRAINER_1_Text_1
	msgbox BATTLE_ROUTE29_TRAINER_1_Text_2
	release
	end


BATTLE_ROUTE29_TRAINER_2::
	trainerbattle_single TRAINER_ROUTE29_TRAINER_2, BATTLE_ROUTE29_TRAINER_2_Text_0, BATTLE_ROUTE29_TRAINER_2_Text_1
	msgbox BATTLE_ROUTE29_TRAINER_2_Text_1
	release
	end


BATTLE_ROUTE29_TRAINER_3::
	trainerbattle_single TRAINER_ROUTE29_TRAINER_3, BATTLE_ROUTE29_TRAINER_3_Text_0, BATTLE_ROUTE29_TRAINER_3_Text_1
	msgbox BATTLE_ROUTE29_TRAINER_3_Text_1
	release
	end


BATTLE_ROUTE29_TRAINER_4::
	trainerbattle_single TRAINER_ROUTE29_TRAINER_4, BATTLE_ROUTE29_TRAINER_4_Text_0, BATTLE_ROUTE29_TRAINER_4_Text_1
	msgbox BATTLE_ROUTE29_TRAINER_4_Text_1
	release
	end


BATTLE_ROUTE29_TRAINER_5::
	trainerbattle_single TRAINER_ROUTE29_TRAINER_5, BATTLE_ROUTE29_TRAINER_5_Text_0, BATTLE_ROUTE29_TRAINER_5_Text_1
	namebox BATTLE_ROUTE29_TRAINER_5_Text_2
	msgbox BATTLE_ROUTE29_TRAINER_5_Text_3
	hidenamebox
	namebox BATTLE_ROUTE29_TRAINER_5_Text_4
	msgbox BATTLE_ROUTE29_TRAINER_5_Text_5
	hidenamebox
	release
	end


DUNGEONEERING_DOOR_ROUTE29_Text_0:
	.string "It appears to be a mysterious door.\p"
	.string "Would you like to try and pry it open?$"

DUNGEONEERING_DOOR_ROUTE29_Text_1:
	.string "The door opens.$"

DUNGEONEERING_DOOR_ROUTE29_Text_2:
	.string "The door is already open.$"

BATTLE_ROUTE29_TRAINER_1_Text_0:
	.string "Tell me where the Strykewyrms are!\p"
	.string "Now!$"

BATTLE_ROUTE29_TRAINER_1_Text_1:
	.string "Keep your secrets then, noob.$"

BATTLE_ROUTE29_TRAINER_1_Text_2:
	.string "I've been looking for the Strykewyrms\n"
	.string "for hours.\p"
	.string "I was told they were found in the caves\n"
	.string "and desert but I have yet to come\l"
	.string "across any.$"

BATTLE_ROUTE29_TRAINER_2_Text_0:
	.string "Minerals are truly fascinating don't\n"
	.string "you think?$"

BATTLE_ROUTE29_TRAINER_2_Text_1:
	.string "Keep your strong monsters.\p"
	.string "I will keep to my minerals.$"

BATTLE_ROUTE29_TRAINER_3_Text_0:
	.string "I am examining this place for ancient\n"
	.string "relics.\p"
	.string "Do not disturb me!$"

BATTLE_ROUTE29_TRAINER_3_Text_1:
	.string "What do you mean the Digsite is north?$"

BATTLE_ROUTE29_TRAINER_4_Text_0:
	.string "I am getting real close to Falador.\p"
	.string "Get out of my way!$"

BATTLE_ROUTE29_TRAINER_4_Text_1:
	.string "I will keep going south.\p"
	.string "Eventually I will find Falador.$"

BATTLE_ROUTE29_TRAINER_5_Text_0:
	.string "Brother there is an enemy opposing us.\p"
	.string "Brother we must approach this enemy!\p"
	.string "No brother it is opposing us, Attack!$"

BATTLE_ROUTE29_TRAINER_5_Text_1:
	.string "Bro: Brother we lost! How could this\n"
	.string "be?!\p"
	.string "Brother: Shut up.$"

BATTLE_ROUTE29_TRAINER_5_Text_2:
	.string "Bro$"

BATTLE_ROUTE29_TRAINER_5_Text_3:
	.string "Brother we lost! How could this be?!$"

BATTLE_ROUTE29_TRAINER_5_Text_4:
	.string "Brother$"

BATTLE_ROUTE29_TRAINER_5_Text_5:
	.string "Shut up Bro.$"
