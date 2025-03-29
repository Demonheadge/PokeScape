Barb_Stronghold_B3F_MapScripts::
	.byte 0


NPC_BARB_STRONGHOLD_B3F_NPC_1::
	lock
	faceplayer
	namebox NPC_BARB_STRONGHOLD_B3F_NPC_1_Text_0
	msgbox NPC_BARB_STRONGHOLD_B3F_NPC_1_Text_1
	hidenamebox
	release
	end


BATTLE_BARB_STRONGHOLD_B3F_TRAINER_1::
	trainerbattle_single TRAINER_BARB_STRONGHOLD_B3F_TRAINER_1, BATTLE_BARB_STRONGHOLD_B3F_TRAINER_1_Text_0, BATTLE_BARB_STRONGHOLD_B3F_TRAINER_1_Text_1
	namebox BATTLE_BARB_STRONGHOLD_B3F_TRAINER_1_Text_2
	msgbox BATTLE_BARB_STRONGHOLD_B3F_TRAINER_1_Text_3
	hidenamebox
	release
	end


BATTLE_BARB_STRONGHOLD_B3F_TRAINER_2::
	trainerbattle_single TRAINER_BARB_STRONGHOLD_B3F_TRAINER_2, BATTLE_BARB_STRONGHOLD_B3F_TRAINER_2_Text_0, BATTLE_BARB_STRONGHOLD_B3F_TRAINER_2_Text_1
	namebox BATTLE_BARB_STRONGHOLD_B3F_TRAINER_2_Text_2
	msgbox BATTLE_BARB_STRONGHOLD_B3F_TRAINER_2_Text_3
	hidenamebox
	release
	end


BATTLE_BARB_STRONGHOLD_B3F_TRAINER_3::
	trainerbattle_single TRAINER_BARB_STRONGHOLD_B3F_TRAINER_3, BATTLE_BARB_STRONGHOLD_B3F_TRAINER_3_Text_0, BATTLE_BARB_STRONGHOLD_B3F_TRAINER_3_Text_1
	namebox BATTLE_BARB_STRONGHOLD_B3F_TRAINER_3_Text_2
	msgbox BATTLE_BARB_STRONGHOLD_B3F_TRAINER_3_Text_3
	hidenamebox
	release
	end


BATTLE_BARB_STRONGHOLD_B4F_TRAINER_4::
	trainerbattle_single TRAINER_BARB_STRONGHOLD_B3F_TRAINER_4, BATTLE_BARB_STRONGHOLD_B4F_TRAINER_4_Text_0, BATTLE_BARB_STRONGHOLD_B4F_TRAINER_4_Text_1
	namebox BATTLE_BARB_STRONGHOLD_B4F_TRAINER_4_Text_2
	msgbox BATTLE_BARB_STRONGHOLD_B4F_TRAINER_4_Text_3
	hidenamebox
	release
	end


BATTLE_BARB_STRONGHOLD_B4F_TRAINER_5::
	trainerbattle_single TRAINER_BARB_STRONGHOLD_B3F_TRAINER_5, BATTLE_BARB_STRONGHOLD_B4F_TRAINER_5_Text_0, BATTLE_BARB_STRONGHOLD_B4F_TRAINER_5_Text_1
	namebox BATTLE_BARB_STRONGHOLD_B4F_TRAINER_5_Text_2
	msgbox BATTLE_BARB_STRONGHOLD_B4F_TRAINER_5_Text_3
	hidenamebox
	release
	end


ITEM_BARB_STRONGHOLD_B3F_1::
	finditem ITEM_CHOCOLATE_CAKE
	end


ITEM_BARB_STRONGHOLD_B3F_2::
	finditem ITEM_CHOCOLATE_CAKE
	end


NPC_BARB_STRONGHOLD_B3F_NPC_1_Text_0:
	.string "Cupholder$"

NPC_BARB_STRONGHOLD_B3F_NPC_1_Text_1:
	.string "I am a Cupholder.$"

BATTLE_BARB_STRONGHOLD_B3F_TRAINER_1_Text_0:
	.string "You there, can you hear the magic\n"
	.string "calling out to you too?$"

BATTLE_BARB_STRONGHOLD_B3F_TRAINER_1_Text_1:
	.string "Sorry, I was distracted by the whispers.$"

BATTLE_BARB_STRONGHOLD_B3F_TRAINER_1_Text_2:
	.string "Thecatra$"

BATTLE_BARB_STRONGHOLD_B3F_TRAINER_1_Text_3:
	.string "You can feel it, can't you?\p"
	.string "There is an incredible amount of chaos\n"
	.string "energy down here.$"

BATTLE_BARB_STRONGHOLD_B3F_TRAINER_2_Text_0:
	.string "I am here in search of rare monsters,\n"
	.string "how about you?$"

BATTLE_BARB_STRONGHOLD_B3F_TRAINER_2_Text_1:
	.string "Looks like you're on a mission of your\n"
	.string "own!$"

BATTLE_BARB_STRONGHOLD_B3F_TRAINER_2_Text_2:
	.string "Lightwind$"

BATTLE_BARB_STRONGHOLD_B3F_TRAINER_2_Text_3:
	.string "I've heard there are unique forms of\n"
	.string "chicken hiding on each floor of this\l"
	.string "place.\p"
	.string "Have you managed to find any of them\n"
	.string "yet?$"

BATTLE_BARB_STRONGHOLD_B3F_TRAINER_3_Text_0:
	.string "Not another trainer!\p"
	.string "I'm running out of supplies...$"

BATTLE_BARB_STRONGHOLD_B3F_TRAINER_3_Text_1:
	.string "I might have won if I could have healed\n"
	.string "my monsters more.$"

BATTLE_BARB_STRONGHOLD_B3F_TRAINER_3_Text_2:
	.string "Shh Llama91$"

BATTLE_BARB_STRONGHOLD_B3F_TRAINER_3_Text_3:
	.string "I keep going round in circles hoping I'll\n"
	.string "find some more healing items, but I\l"
	.string "haven't found any in a long time.$"

BATTLE_BARB_STRONGHOLD_B4F_TRAINER_4_Text_0:
	.string "ERROR: NO GREEN DRAGONS DETECTED.\p"
	.string "ENGAGING NEXT CLOSEST ENEMY.$"

BATTLE_BARB_STRONGHOLD_B4F_TRAINER_4_Text_1:
	.string "ERROR: NO HP LEFT IN PARTY MONSTERS.$"

BATTLE_BARB_STRONGHOLD_B4F_TRAINER_4_Text_2:
	.string "8a4rcfld76$"

BATTLE_BARB_STRONGHOLD_B4F_TRAINER_4_Text_3:
	.string "ERROR: NO HP LEFT IN PARTY MONSTERS.\p"
	.string "USER INPUT REQUIRED TO CONTINUE\n"
	.string "SCRIPT.$"

BATTLE_BARB_STRONGHOLD_B4F_TRAINER_5_Text_0:
	.string "Fishing requires both patience and\n"
	.string "quiet, and thanks to you now I have\l"
	.string "neither!$"

BATTLE_BARB_STRONGHOLD_B4F_TRAINER_5_Text_1:
	.string "Now leave me be.$"

BATTLE_BARB_STRONGHOLD_B4F_TRAINER_5_Text_2:
	.string "ChonkyCorgi$"

BATTLE_BARB_STRONGHOLD_B4F_TRAINER_5_Text_3:
	.string "I just want to try and catch myself\n"
	.string "some new monsters.\p"
	.string "Please don't keep disturbing me...$"
