Mudskipper_Sound_2_MapScripts::
	.byte 0


BATTLE_SAILING_PIRATE_1::
	trainerbattle_single TRAINER_SAILING_PIRATE_1, BATTLE_SAILING_PIRATE_1_Text_0, BATTLE_SAILING_PIRATE_1_Text_1
	msgbox BATTLE_SAILING_PIRATE_1_Text_2
	release
	return


TRIGGER_ROUGH_SEAS::
	lock
	playse SE_M_GRASSWHISTLE
	applymovement 1, MOVEMENT_EXCLAMATIONMARK_FACEPLAYER
	waitmovement 0
	waitse
	applymovement OBJ_EVENT_ID_PLAYER, Movement_InteractFACELEFT
	waitmovement 0
	namebox TRIGGER_ROUGH_SEAS_Text_0
	msgbox TRIGGER_ROUGH_SEAS_Text_1
	hidenamebox
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, MOVEMENT_WALK_UP
	waitmovement 0
	release
	end


BATTLE_AJAMJAM::
	trainerbattle_single TRAINER_AJAMJAM, BATTLE_AJAMJAM_Text_0, BATTLE_AJAMJAM_Text_1
	msgbox BATTLE_AJAMJAM_Text_1
	release
	return


BATTLE_SAILING_PIRATE_1_Text_0:
	.string "ARRRR!!\p"
	.string "Do you know what you just did?!\p"
	.string "…{PAUSE 32}…{PAUSE 32}…{PAUSE 32}\p"
	.string "Ye entered me line of sight!$"

BATTLE_SAILING_PIRATE_1_Text_1:
	.string "Ayee…\n"
	.string "Was a jolly good fight.$"

BATTLE_SAILING_PIRATE_1_Text_2:
	.string "Ye thought I was going to say\n"
	.string "something else didn't ye.$"

TRIGGER_ROUGH_SEAS_Text_0:
	.string "Officer$"

TRIGGER_ROUGH_SEAS_Text_1:
	.string "Go no further, the seas in this area are\n"
	.string "too rough for your little dinghy boat.$"

BATTLE_AJAMJAM_Text_0:
	.string "Oh dear, it looks like you're in a bit of a\n"
	.string "jam.$"

BATTLE_AJAMJAM_Text_1:
	.string "I think I need a hug now…$"
