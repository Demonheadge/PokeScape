Route33_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route33_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Route33_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setvar VAR_EVOLUTION_MAP_STATE, 14
	return


ITEM_ROUTE33_1::
	finditem ITEM_LINZAHAMMER
	end


NPC_ROUTE33_NPC1::
	lock
	faceplayer
	msgbox NPC_ROUTE33_NPC1_Text_0
	hidenamebox
	release
	end


BATTLE_ROUTE33_ZAMORAK1::
	trainerbattle_single TRAINER_ROUTE33_ZAMORAK1, BATTLE_ROUTE33_ZAMORAK1_Text_0, BATTLE_ROUTE33_ZAMORAK1_Text_1
	msgbox BATTLE_ROUTE33_ZAMORAK1_Text_1
	hidenamebox
	release
	end


BATTLE_ROUTE33_GOBLIN1::
	trainerbattle_single TRAINER_ROUTE33_GOBLIN1, BATTLE_ROUTE33_GOBLIN1_Text_0, BATTLE_ROUTE33_GOBLIN1_Text_1
	msgbox BATTLE_ROUTE33_GOBLIN1_Text_2
	hidenamebox
	release
	end


BATTLE_ROUTE33_GOBLIN2::
	trainerbattle_single TRAINER_ROUTE33_GOBLIN2, BATTLE_ROUTE33_GOBLIN2_Text_0, BATTLE_ROUTE33_GOBLIN2_Text_1
	msgbox BATTLE_ROUTE33_GOBLIN2_Text_2
	hidenamebox
	release
	end


NPC_ROUTE33_NPC1_Text_0:
	.string "Begone!\p"
	.string "Stay away unless you worship Zamorak.$"

BATTLE_ROUTE33_ZAMORAK1_Text_0:
	.string "A curse be upon you!$"

BATTLE_ROUTE33_ZAMORAK1_Text_1:
	.string "I may have lost but I have still cursed\n"
	.string "you.\p"
	.string "Now begone!$"

BATTLE_ROUTE33_GOBLIN1_Text_0:
	.string "Hooman, why are you out here?!$"

BATTLE_ROUTE33_GOBLIN1_Text_1:
	.string "Hooman no answer question.$"

BATTLE_ROUTE33_GOBLIN1_Text_2:
	.string "Hooman no answer question.\p"
	.string "Why is hooman out here?!$"

BATTLE_ROUTE33_GOBLIN2_Text_0:
	.string "Stupid red hoomans they so noisy!$"

BATTLE_ROUTE33_GOBLIN2_Text_1:
	.string "Red hoomans make lots of noise.$"

BATTLE_ROUTE33_GOBLIN2_Text_2:
	.string "Red hoomans make lots of noise.\p"
	.string "Me want to get rid of them.$"
