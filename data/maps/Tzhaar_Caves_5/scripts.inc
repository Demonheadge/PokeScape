Tzhaar_Caves_5_MapScripts::
	.byte 0


BATTLE_TZHAAR_CAVES_TRAINER_1::
	trainerbattle_single TRAINER_TZHAAR_CAVES_TRAINER_1, BATTLE_TZHAAR_CAVES_TRAINER_1_Text_0, BATTLE_TZHAAR_CAVES_TRAINER_1_Text_1
	msgbox BATTLE_TZHAAR_CAVES_TRAINER_1_Text_2
	hidenamebox
	release
	end


BATTLE_TZHAAR_CAVES_TRAINER_2::
	trainerbattle_single TRAINER_TZHAAR_CAVES_TRAINER_2, BATTLE_TZHAAR_CAVES_TRAINER_2_Text_0, BATTLE_TZHAAR_CAVES_TRAINER_2_Text_1
	msgbox BATTLE_TZHAAR_CAVES_TRAINER_2_Text_2
	hidenamebox
	release
	end


BATTLE_TZHAAR_CAVES_TRAINER_3::
	trainerbattle_single TRAINER_TZHAAR_CAVES_TRAINER_3, BATTLE_TZHAAR_CAVES_TRAINER_3_Text_0, BATTLE_TZHAAR_CAVES_TRAINER_3_Text_1
	msgbox BATTLE_TZHAAR_CAVES_TRAINER_3_Text_2
	hidenamebox
	release
	end


BATTLE_TZHAAR_CAVES_TRAINER_1_Text_0:
	.string "Deep inside these caves lie the Elder\n"
	.string "Kiln.\p"
	.string "It is no place for JalYt like you.$"

BATTLE_TZHAAR_CAVES_TRAINER_1_Text_1:
	.string "Perhaps JalYt like you are just right to\n"
	.string "help us out.$"

BATTLE_TZHAAR_CAVES_TRAINER_1_Text_2:
	.string "Eggs are hatching without memories.\p"
	.string "We need these to find our place in\n"
	.string "society, otherwise we just endlessly\l"
	.string "wander these halls or die in the Fight\l"
	.string "Pits.$"

BATTLE_TZHAAR_CAVES_TRAINER_2_Text_0:
	.string "It is not safe for JalYt down here.\p"
	.string "You must leave now.$"

BATTLE_TZHAAR_CAVES_TRAINER_2_Text_1:
	.string "You may have beaten me, but you should\n"
	.string "still turn back while you can..$"

BATTLE_TZHAAR_CAVES_TRAINER_2_Text_2:
	.string "I've heard rumours that there is an\n"
	.string "ancient hivemind living in the lava down\l"
	.string "here somewhere.\p"
	.string "Could that really be true?$"

BATTLE_TZHAAR_CAVES_TRAINER_3_Text_0:
	.string "I think the caves down here are too\n"
	.string "hot, which is why our eggs aren't\l"
	.string "hatching properly.\p"
	.string "It's far too hot for a JalYt like you!$"

BATTLE_TZHAAR_CAVES_TRAINER_3_Text_1:
	.string "Oh, maybe it's too cold and that's why\n"
	.string "the eggs aren't hatching..$"

BATTLE_TZHAAR_CAVES_TRAINER_3_Text_2:
	.string "We TzHaar have no way of teaching new\n"
	.string "skills, so the Ga'al that hatch are no\l"
	.string "good for society other than for\l"
	.string "battling..$"
