Barb_Stronghold_B4F_MapScripts::
	.byte 0


NPC_BARB_STRONGHOLD_B4F_NPC_1::
	lock
	msgbox NPC_BARB_STRONGHOLD_B4F_NPC_1_Text_0
	namebox NPC_BARB_STRONGHOLD_B4F_NPC_1_Text_1
	msgbox NPC_BARB_STRONGHOLD_B4F_NPC_1_Text_2
	hidenamebox
	release
	end


NPC_BARB_STRONGHOLD_B4F_NPC_2::
	lock
	faceplayer
	namebox NPC_BARB_STRONGHOLD_B4F_NPC_2_Text_0
	msgbox NPC_BARB_STRONGHOLD_B4F_NPC_2_Text_1
	hidenamebox
	release
	end


BATTLE_BARB_STRONGHOLD_B4F_TRAINER_1::
	trainerbattle_single TRAINER_BARB_STRONGHOLD_B4F_TRAINER_1, BATTLE_BARB_STRONGHOLD_B4F_TRAINER_1_Text_0, BATTLE_BARB_STRONGHOLD_B4F_TRAINER_1_Text_1
	namebox BATTLE_BARB_STRONGHOLD_B4F_TRAINER_1_Text_2
	msgbox BATTLE_BARB_STRONGHOLD_B4F_TRAINER_1_Text_3
	hidenamebox
	release
	end


BATTLE_BARB_STRONGHOLD_B4F_TRAINER_2::
	trainerbattle_single TRAINER_BARB_STRONGHOLD_B4F_TRAINER_2, BATTLE_BARB_STRONGHOLD_B4F_TRAINER_2_Text_0, BATTLE_BARB_STRONGHOLD_B4F_TRAINER_2_Text_1
	namebox BATTLE_BARB_STRONGHOLD_B4F_TRAINER_2_Text_2
	msgbox BATTLE_BARB_STRONGHOLD_B4F_TRAINER_2_Text_1
	hidenamebox
	release
	end


BATTLE_BARB_STRONGHOLD_B4F_TRAINER_3::
	trainerbattle_single TRAINER_BARB_STRONGHOLD_B4F_TRAINER_3, BATTLE_BARB_STRONGHOLD_B4F_TRAINER_3_Text_0, BATTLE_BARB_STRONGHOLD_B4F_TRAINER_3_Text_1
	namebox BATTLE_BARB_STRONGHOLD_B4F_TRAINER_3_Text_2
	msgbox BATTLE_BARB_STRONGHOLD_B4F_TRAINER_3_Text_3
	hidenamebox
	release
	end


BATTLE_BARB_STRONGHOLD_B4F_TRAINER_4::
	trainerbattle_single TRAINER_BARB_STRONGHOLD_B4F_TRAINER_4, BATTLE_BARB_STRONGHOLD_B4F_TRAINER_4_Text_0, BATTLE_BARB_STRONGHOLD_B4F_TRAINER_4_Text_1
	namebox BATTLE_BARB_STRONGHOLD_B4F_TRAINER_4_Text_2
	msgbox BATTLE_BARB_STRONGHOLD_B4F_TRAINER_4_Text_3
	hidenamebox
	release
	end


ITEM_BARB_STRONGHOLD_B4F_1::
	finditem ITEM_CHOCOLATE_CAKE
	end


ITEM_BARB_STRONGHOLD_B4F_2::
	finditem ITEM_CHOCOLATE_CAKE
	end


NPC_BARB_STRONGHOLD_B4F_NPC_1_Text_0:
	.string "The skeleton points down the hallways\n"
	.string "and mutters in a whispering voice...$"

NPC_BARB_STRONGHOLD_B4F_NPC_1_Text_1:
	.string "Skeleton$"

NPC_BARB_STRONGHOLD_B4F_NPC_1_Text_2:
	.string "One...\p"
	.string "Way...$"

NPC_BARB_STRONGHOLD_B4F_NPC_2_Text_0:
	.string "MeGoFace$"

NPC_BARB_STRONGHOLD_B4F_NPC_2_Text_1:
	.string "I hate puzzles like moving boulders.\p"
	.string "To make it worse these boulders go back\n"
	.string "in place when you return to another\l"
	.string "floor.\p"
	.string "GAAAHHH! So frustrating!$"

BATTLE_BARB_STRONGHOLD_B4F_TRAINER_1_Text_0:
	.string "You think your monsters are cool?\p"
	.string "Prepare to face the might of a\n"
	.string "summoner!$"

BATTLE_BARB_STRONGHOLD_B4F_TRAINER_1_Text_1:
	.string "Not mighty enough...$"

BATTLE_BARB_STRONGHOLD_B4F_TRAINER_1_Text_2:
	.string "Salm0n$"

BATTLE_BARB_STRONGHOLD_B4F_TRAINER_1_Text_3:
	.string "Summoning is a good skill.\p"
	.string "Don't let oldschool tell you otherwise.\p"
	.string "We have pets!$"

BATTLE_BARB_STRONGHOLD_B4F_TRAINER_2_Text_0:
	.string "This is the death floor.\p"
	.string "Not enough death here for me\n"
	.string "personally.\p"
	.string "We can fix that.$"

BATTLE_BARB_STRONGHOLD_B4F_TRAINER_2_Text_1:
	.string "My enthusiasm is dead now.$"

BATTLE_BARB_STRONGHOLD_B4F_TRAINER_2_Text_2:
	.string "S0uka$"

BATTLE_BARB_STRONGHOLD_B4F_TRAINER_3_Text_0:
	.string "I have been walking in circles for days.\p"
	.string "When will I get to the end of this\n"
	.string "dungeon?$"

BATTLE_BARB_STRONGHOLD_B4F_TRAINER_3_Text_1:
	.string "Am I at the end now?$"

BATTLE_BARB_STRONGHOLD_B4F_TRAINER_3_Text_2:
	.string "V4At1$"

BATTLE_BARB_STRONGHOLD_B4F_TRAINER_3_Text_3:
	.string "Stop walking in circles?\p"
	.string "Why don't you mind your own business.$"

BATTLE_BARB_STRONGHOLD_B4F_TRAINER_4_Text_0:
	.string "The boots in this place are said to be\n"
	.string "legen-\p"
	.string "Wait for it...\p"
	.string "They are essential for my progress.$"

BATTLE_BARB_STRONGHOLD_B4F_TRAINER_4_Text_1:
	.string "-dary!$"

BATTLE_BARB_STRONGHOLD_B4F_TRAINER_4_Text_2:
	.string "McC0ppin$"

BATTLE_BARB_STRONGHOLD_B4F_TRAINER_4_Text_3:
	.string "I restrict myself to not wear boots\n"
	.string "from now on.\p"
	.string "Restrictions make this game more fun\n"
	.string "anyway.$"
