Route22_MapScripts::
	.byte 0


BATTLE_ROUTE22_TRAINER_1::
	trainerbattle_single TRAINER_ROUTE22_TRAINER_1, BATTLE_ROUTE22_TRAINER_1_Text_0, BATTLE_ROUTE22_TRAINER_1_Text_1
	namebox BATTLE_ROUTE22_TRAINER_1_Text_2
	msgbox BATTLE_ROUTE22_TRAINER_1_Text_1
	hidenamebox
	release
	end


BATTLE_ROUTE22_TRAINER_2::
	trainerbattle_single TRAINER_ROUTE22_TRAINER_2, BATTLE_ROUTE22_TRAINER_2_Text_0, BATTLE_ROUTE22_TRAINER_2_Text_1
	namebox BATTLE_ROUTE22_TRAINER_2_Text_2
	msgbox BATTLE_ROUTE22_TRAINER_2_Text_3
	hidenamebox
	release
	end


ITEM_ROUTE22::
	finditem ITEM_POUCH_RUNE
	end


BATTLE_ROUTE22_TRAINER_1_Text_0:
	.string "I can squeeze in a quick battle.$"

BATTLE_ROUTE22_TRAINER_1_Text_1:
	.string "Now I'm out of breath.\p"
	.string "My training regimen is ruined.$"

BATTLE_ROUTE22_TRAINER_1_Text_2:
	.string "Point Zero$"

BATTLE_ROUTE22_TRAINER_2_Text_0:
	.string "I flew here on the back of an eagle to\n"
	.string "hunt the local wildlife!$"

BATTLE_ROUTE22_TRAINER_2_Text_1:
	.string "Were you not impressed?$"

BATTLE_ROUTE22_TRAINER_2_Text_2:
	.string "Quaffle8$"

BATTLE_ROUTE22_TRAINER_2_Text_3:
	.string "Now, uh, how do I call the eagle back..?\p"
	.string "It has flown away and I don't know how\n"
	.string "to swim.$"
