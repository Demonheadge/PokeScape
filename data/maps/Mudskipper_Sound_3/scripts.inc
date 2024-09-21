Mudskipper_Sound_3_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Mudskipper_Sound_3_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Mudskipper_Sound_3_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setvar VAR_EVOLUTION_MAP_STATE, 15
	call WEATHER_CHANGE_SEA_ROUTES_ROUGH
	return


BATTLE_MUDSKIPPER_MUGGER::
	trainerbattle_single TRAINER_MUDSKIPPER_MUGGER, BATTLE_MUDSKIPPER_MUGGER_Text_0, BATTLE_MUDSKIPPER_MUGGER_Text_1
	namebox BATTLE_MUDSKIPPER_MUGGER_Text_2
	msgbox BATTLE_MUDSKIPPER_MUGGER_Text_3
	hidenamebox
	release
	end


ITEM_MUDSKIPPER_1::
	finditem ITEM_BREAD
	end


ITEM_MUDSKIPPER_2::
	finditem ITEM_CAKE
	end


ITEM_MUDSKIPPER_3::
	finditem ITEM_WATERSKIN
	end


BATTLE_MUDSKIPPER_MUGGER_Text_0:
	.string "Stand and deliver!$"

BATTLE_MUDSKIPPER_MUGGER_Text_1:
	.string "Deliver me a way home!$"

BATTLE_MUDSKIPPER_MUGGER_Text_2:
	.string "Strandy$"

BATTLE_MUDSKIPPER_MUGGER_Text_3:
	.string "Please send for help.{PAUSE 15}\p"
	.string "Don't leave me.{PAUSE 15}\p"
	.string "I have been here for a year.{PAUSE 15}\p"
	.string "I miss my family...$"
