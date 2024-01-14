Mill_Lane_Mill_1_MapScripts::
	.byte 0


MillLaneGreeter::
	lock
	faceplayer
	msgbox MillLaneGreeter_Text_0
	release
	end


Trainer2_MillLaneMill_Battle::
	trainerbattle_single TRAINER_TRAINER2_MILLLANEMILL, Trainer2_MillLaneMill_Battle_Text_0, Trainer2_MillLaneMill_Battle_Text_1
	namebox Trainer2_MillLaneMill_Battle_Text_2
	msgbox Trainer2_MillLaneMill_Battle_Text_3
	hidenamebox
	release
	end


MillLaneGreeter_Text_0:
	.string "Welcome to Mill Lane Mill!\p"
	.string "We have the best flour this side of the\n"
	.string "River Lum!$"

Trainer2_MillLaneMill_Battle_Text_0:
	.string "If you want to get to the top you will\n"
	.string "need to get past the mill three!\p"
	.string "Be warned I'm the second strongest of\n"
	.string "us!$"

Trainer2_MillLaneMill_Battle_Text_1:
	.string "You will never reach the top!$"

Trainer2_MillLaneMill_Battle_Text_2:
	.string "HOPS$"

Trainer2_MillLaneMill_Battle_Text_3:
	.string "You may have beaten me but you'll never\n"
	.string "make it to the top!$"
