Route21_MapScripts::
	.byte 0


BATTLE_ROUTE21_TRAINER_1::
	trainerbattle_single TRAINER_ROUTE21_TRAINER_1, BATTLE_ROUTE21_TRAINER_1_Text_0, BATTLE_ROUTE21_TRAINER_1_Text_1
	namebox BATTLE_ROUTE21_TRAINER_1_Text_2
	msgbox BATTLE_ROUTE21_TRAINER_1_Text_3
	hidenamebox
	release
	end


BATTLE_ROUTE21_TRAINER_2::
	trainerbattle_single TRAINER_ROUTE21_TRAINER_2, BATTLE_ROUTE21_TRAINER_2_Text_0, BATTLE_ROUTE21_TRAINER_2_Text_1
	namebox BATTLE_ROUTE21_TRAINER_2_Text_2
	msgbox BATTLE_ROUTE21_TRAINER_2_Text_3
	hidenamebox
	release
	end


ITEM_ROUTE21_ITEM1::
	finditem ITEM_POUCH_MITHRIL
	end


BATTLE_ROUTE21_TRAINER_1_Text_0:
	.string "Well then, looks like someone is about\n"
	.string "to get the axe!$"

BATTLE_ROUTE21_TRAINER_1_Text_1:
	.string "Looks like that someone was me...$"

BATTLE_ROUTE21_TRAINER_1_Text_2:
	.string "Ax3edSeries$"

BATTLE_ROUTE21_TRAINER_1_Text_3:
	.string "My favourite series is getting the axe.\p"
	.string "I'm trying to vent my anger at this\n"
	.string "game.\p"
	.string "You are making it really hard to process\n"
	.string "my anger!$"

BATTLE_ROUTE21_TRAINER_2_Text_0:
	.string "I have a dream.\p"
	.string "To chop down every single tree in\n"
	.string "Gielinor.$"

BATTLE_ROUTE21_TRAINER_2_Text_1:
	.string "Alas, it is I who was felled!$"

BATTLE_ROUTE21_TRAINER_2_Text_2:
	.string "W00dFeller$"

BATTLE_ROUTE21_TRAINER_2_Text_3:
	.string "Don't you think it's weird how it takes\n"
	.string "ages to farm trees, but that they grow\l"
	.string "back so quickly once you've chopped\l"
	.string "them down?$"
