Barb_Stronghold_B1F_MapScripts::
	.byte 0


BATTLE_BARB_STRONGHOLD_B1F_TRAINER_1::
	trainerbattle_single TRAINER_BARB_STRONGHOLD_B1F_TRAINER_1, BATTLE_BARB_STRONGHOLD_B1F_TRAINER_1_Text_0, BATTLE_BARB_STRONGHOLD_B1F_TRAINER_1_Text_1
	namebox BATTLE_BARB_STRONGHOLD_B1F_TRAINER_1_Text_2
	msgbox BATTLE_BARB_STRONGHOLD_B1F_TRAINER_1_Text_3
	hidenamebox
	release
	end


BATTLE_BARB_STRONGHOLD_B1F_TRAINER_2::
	trainerbattle_single TRAINER_BARB_STRONGHOLD_B1F_TRAINER_2, BATTLE_BARB_STRONGHOLD_B1F_TRAINER_2_Text_0, BATTLE_BARB_STRONGHOLD_B1F_TRAINER_2_Text_1
	namebox BATTLE_BARB_STRONGHOLD_B1F_TRAINER_2_Text_2
	msgbox BATTLE_BARB_STRONGHOLD_B1F_TRAINER_2_Text_3
	hidenamebox
	release
	end


BATTLE_BARB_STRONGHOLD_B1F_TRAINER_3::
	trainerbattle_single TRAINER_BARB_STRONGHOLD_B1F_TRAINER_3, BATTLE_BARB_STRONGHOLD_B1F_TRAINER_3_Text_0, BATTLE_BARB_STRONGHOLD_B1F_TRAINER_3_Text_1
	namebox BATTLE_BARB_STRONGHOLD_B1F_TRAINER_3_Text_2
	msgbox BATTLE_BARB_STRONGHOLD_B1F_TRAINER_3_Text_3
	hidenamebox
	release
	end


ITEM_BARB_STRONGHOLD_B1F_1::
	finditem ITEM_CHOCOLATE_CAKE
	end


BATTLE_BARB_STRONGHOLD_B1F_TRAINER_1_Text_0:
	.string "This place is brimming with runic\n"
	.string "energy!$"

BATTLE_BARB_STRONGHOLD_B1F_TRAINER_1_Text_1:
	.string "Blast it!$"

BATTLE_BARB_STRONGHOLD_B1F_TRAINER_1_Text_2:
	.string "Equinox$"

BATTLE_BARB_STRONGHOLD_B1F_TRAINER_1_Text_3:
	.string "There is a strong magical presence\n"
	.string "emanating from deep within these\l"
	.string "caves.\p"
	.string "Proceed with caution.$"

BATTLE_BARB_STRONGHOLD_B1F_TRAINER_2_Text_0:
	.string "I came here to practice my archery\n"
	.string "skills.\p"
	.string "I guess you can be my next target.$"

BATTLE_BARB_STRONGHOLD_B1F_TRAINER_2_Text_1:
	.string "How'd I miss from this distance??$"

BATTLE_BARB_STRONGHOLD_B1F_TRAINER_2_Text_2:
	.string "Is Ranged$"

BATTLE_BARB_STRONGHOLD_B1F_TRAINER_2_Text_3:
	.string "It's hard when the only skill you have in\n"
	.string "life is ranged.$"

BATTLE_BARB_STRONGHOLD_B1F_TRAINER_3_Text_0:
	.string "Hey, you attacked that monster so now\n"
	.string "I won't get the kill credit!$"

BATTLE_BARB_STRONGHOLD_B1F_TRAINER_3_Text_1:
	.string "Yikes, fine, I'll find another monster.$"

BATTLE_BARB_STRONGHOLD_B1F_TRAINER_3_Text_2:
	.string "GIM Shibby$"

BATTLE_BARB_STRONGHOLD_B1F_TRAINER_3_Text_3:
	.string "I keep defeating the minotaurs here\n"
	.string "over and over, but I haven't had a\l"
	.string "single beginner or easy clue scroll yet.\p"
	.string "Am I just unlucky?$"
