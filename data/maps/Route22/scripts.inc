Route22_MapScripts::
	.byte 0


BATTLE_ROUTE22_TRAINER_1::
	trainerbattle_single TRAINER_ROUTE22_TRAINER_1, BATTLE_ROUTE22_TRAINER_1_Text_0, BATTLE_ROUTE22_TRAINER_1_Text_1
	namebox BATTLE_ROUTE22_TRAINER_1_Text_2
	msgbox BATTLE_ROUTE22_TRAINER_1_Text_1
	hidenamebox
	release
	end


BATTLE_ROUTE22_TRAINER_1_Text_0:
	.string "I can squeeze in a quick battle.$"

BATTLE_ROUTE22_TRAINER_1_Text_1:
	.string "Now I'm out of breath.\p"
	.string "My training regimen is ruined.$"

BATTLE_ROUTE22_TRAINER_1_Text_2:
	.string "Point Zero$"
