Route25_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route25_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Route25_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	return


BATTLE_ROUTE25_TRAINER_1::
	trainerbattle_single TRAINER_ROUTE25_TRAINER_1, BATTLE_ROUTE25_TRAINER_1_Text_0, BATTLE_ROUTE25_TRAINER_1_Text_1
	msgbox BATTLE_ROUTE25_TRAINER_1_Text_1
	hidenamebox
	release
	end


BATTLE_ROUTE25_TRAINER_2::
	trainerbattle_single TRAINER_ROUTE25_TRAINER_2, BATTLE_ROUTE25_TRAINER_2_Text_0, BATTLE_ROUTE25_TRAINER_2_Text_1
	msgbox BATTLE_ROUTE25_TRAINER_2_Text_1
	hidenamebox
	release
	end


BATTLE_ROUTE25_TRAINER_3::
	trainerbattle_single TRAINER_ROUTE25_TRAINER_3, BATTLE_ROUTE25_TRAINER_3_Text_0, BATTLE_ROUTE25_TRAINER_3_Text_1
	msgbox BATTLE_ROUTE25_TRAINER_3_Text_2
	hidenamebox
	release
	end


BATTLE_ROUTE25_TRAINER_1_Text_0:
	.string "I hate birds so much.\p"
	.string "Do you have some?$"

BATTLE_ROUTE25_TRAINER_1_Text_1:
	.string "I want this bird out of my party, how do\n"
	.string "I release it?$"

BATTLE_ROUTE25_TRAINER_2_Text_0:
	.string "How many treasure hunter keys do you\n"
	.string "have noob?!$"

BATTLE_ROUTE25_TRAINER_2_Text_1:
	.string "I brought all my levels with p2w and I\n"
	.string "still do not have all the best in slot\l"
	.string "mons.$"

BATTLE_ROUTE25_TRAINER_3_Text_0:
	.string "I was on my way to do some\n"
	.string "Runecrafting, have you seen the Altar?$"

BATTLE_ROUTE25_TRAINER_3_Text_1:
	.string "Even if I find the Altar I don't have\n"
	.string "the correct Talisman for it.$"

BATTLE_ROUTE25_TRAINER_3_Text_2:
	.string "Even if I find the Altar I don't have\n"
	.string "the correct Talisman for it.\p"
	.string "I wonder where I can find it.$"
