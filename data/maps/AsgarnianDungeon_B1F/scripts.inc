AsgarnianDungeon_B1F_MapScripts::
	.byte 0


NPC_AsgarnianDungeon_RAPTOR::
	lock
	faceplayer
	namebox NPC_AsgarnianDungeon_RAPTOR_Text_0
	msgbox NPC_AsgarnianDungeon_RAPTOR_Text_1
	closemessage
	hidenamebox
	release
	end


ITEM_AsgarnianDungeon_1::
	finditem ITEM_LAMP_SPATT
	end


ITEM_AsgarnianDungeon_2::
	finditem ITEM_LAMP_SPDEF
	end


ITEM_AsgarnianDungeon_3::
	finditem ITEM_PRAYER_POTION
	end


ITEM_AsgarnianDungeon_4::
	finditem ITEM_ELEMENTAL_POUCH
	end


ITEM_AsgarnianDungeon_5::
	finditem ITEM_SPIRIT_CHARM
	end


BATTLE_AsgarnianDungeon_MUGGER_1::
	trainerbattle_single TRAINER_AsgarnianDungeon_MUGGER_1, BATTLE_AsgarnianDungeon_MUGGER_1_Text_0, BATTLE_AsgarnianDungeon_MUGGER_1_Text_1
	namebox BATTLE_AsgarnianDungeon_MUGGER_1_Text_2
	msgbox BATTLE_AsgarnianDungeon_MUGGER_1_Text_3
	hidenamebox
	release
	end


BATTLE_AsgarnianDungeon_PIRATE_1::
	trainerbattle_single TRAINER_AsgarnianDungeon_PIRATE_1, BATTLE_AsgarnianDungeon_PIRATE_1_Text_0, BATTLE_AsgarnianDungeon_PIRATE_1_Text_1
	namebox BATTLE_AsgarnianDungeon_PIRATE_1_Text_2
	msgbox BATTLE_AsgarnianDungeon_PIRATE_1_Text_1
	hidenamebox
	release
	end


BATTLE_AsgarnianDungeon_PIRATE_2::
	trainerbattle_single TRAINER_AsgarnianDungeon_PIRATE_2, BATTLE_AsgarnianDungeon_PIRATE_2_Text_0, BATTLE_AsgarnianDungeon_PIRATE_2_Text_1
	namebox BATTLE_AsgarnianDungeon_PIRATE_2_Text_2
	msgbox BATTLE_AsgarnianDungeon_PIRATE_2_Text_1
	hidenamebox
	release
	end


BATTLE_AsgarnianDungeon_PIRATE_3::
	trainerbattle_single TRAINER_AsgarnianDungeon_PIRATE_3, BATTLE_AsgarnianDungeon_PIRATE_3_Text_0, BATTLE_AsgarnianDungeon_PIRATE_3_Text_1
	namebox BATTLE_AsgarnianDungeon_PIRATE_3_Text_2
	msgbox BATTLE_AsgarnianDungeon_PIRATE_3_Text_1
	hidenamebox
	release
	end


BATTLE_AsgarnianDungeon_PIRATE_4::
	trainerbattle_single TRAINER_AsgarnianDungeon_PIRATE_4, BATTLE_AsgarnianDungeon_PIRATE_4_Text_0, BATTLE_AsgarnianDungeon_PIRATE_4_Text_1
	namebox BATTLE_AsgarnianDungeon_PIRATE_4_Text_2
	msgbox BATTLE_AsgarnianDungeon_PIRATE_4_Text_1
	hidenamebox
	release
	end


BATTLE_AsgarnianDungeon_GOBLIN_1::
	trainerbattle_single TRAINER_AsgarnianDungeon_GOBLIN_1, BATTLE_AsgarnianDungeon_GOBLIN_1_Text_0, BATTLE_AsgarnianDungeon_GOBLIN_1_Text_1
	namebox BATTLE_AsgarnianDungeon_GOBLIN_1_Text_2
	msgbox BATTLE_AsgarnianDungeon_GOBLIN_1_Text_1
	hidenamebox
	release
	end


BATTLE_AsgarnianDungeon_GOBLIN_2::
	trainerbattle_single TRAINER_AsgarnianDungeon_GOBLIN_2, BATTLE_AsgarnianDungeon_GOBLIN_2_Text_0, BATTLE_AsgarnianDungeon_GOBLIN_2_Text_1
	namebox BATTLE_AsgarnianDungeon_GOBLIN_2_Text_2
	msgbox BATTLE_AsgarnianDungeon_GOBLIN_2_Text_1
	hidenamebox
	release
	end


BATTLE_AsgarnianDungeon_QUESTER::
	trainerbattle_single TRAINER_AsgarnianDungeon_QUESTER, BATTLE_AsgarnianDungeon_QUESTER_Text_0, BATTLE_AsgarnianDungeon_QUESTER_Text_1
	namebox BATTLE_AsgarnianDungeon_QUESTER_Text_2
	msgbox BATTLE_AsgarnianDungeon_QUESTER_Text_1
	hidenamebox
	release
	end


BATTLE_AsgarnianDungeon_PVM_1::
	trainerbattle_single TRAINER_AsgarnianDungeon_PVM_1, BATTLE_AsgarnianDungeon_PVM_1_Text_0, BATTLE_AsgarnianDungeon_PVM_1_Text_1
	namebox BATTLE_AsgarnianDungeon_PVM_1_Text_2
	msgbox BATTLE_AsgarnianDungeon_PVM_1_Text_1
	hidenamebox
	release
	end


BATTLE_AsgarnianDungeon_PVM_2::
	trainerbattle_single TRAINER_AsgarnianDungeon_PVM_2, BATTLE_AsgarnianDungeon_PVM_2_Text_0, BATTLE_AsgarnianDungeon_PVM_2_Text_1
	namebox BATTLE_AsgarnianDungeon_PVM_2_Text_2
	msgbox BATTLE_AsgarnianDungeon_PVM_2_Text_1
	hidenamebox
	release
	end


NPC_AsgarnianDungeon_RAPTOR_Text_0:
	.string "RAPTOR$"

NPC_AsgarnianDungeon_RAPTOR_Text_1:
	.string "It is too dangerous for you to enter.\p"
	.string "Leave these wyverns to me.$"

BATTLE_AsgarnianDungeon_MUGGER_1_Text_0:
	.string "No I will not return the gp I just\n"
	.string "pickpocketed from you.$"

BATTLE_AsgarnianDungeon_MUGGER_1_Text_1:
	.string "Fine here, have your gp back.$"

BATTLE_AsgarnianDungeon_MUGGER_1_Text_2:
	.string "IWill4StealU$"

BATTLE_AsgarnianDungeon_MUGGER_1_Text_3:
	.string "Not many people come down here due the\n"
	.string "dangerous monsters further in.$"

BATTLE_AsgarnianDungeon_PIRATE_1_Text_0:
	.string "They say treasures be deep within this\n"
	.string "cave mate.\p"
	.string "Yer not getting to it.$"

BATTLE_AsgarnianDungeon_PIRATE_1_Text_1:
	.string "Maybe the real treasure be me\n"
	.string "encounter with ye.$"

BATTLE_AsgarnianDungeon_PIRATE_1_Text_2:
	.string "Flynt$"

BATTLE_AsgarnianDungeon_PIRATE_2_Text_0:
	.string "This is our supply depot, get out!$"

BATTLE_AsgarnianDungeon_PIRATE_2_Text_1:
	.string "Since I can no longer use force I would\n"
	.string "like to strongly and politely request\l"
	.string "you to get out.$"

BATTLE_AsgarnianDungeon_PIRATE_2_Text_2:
	.string "Bluepearl$"

BATTLE_AsgarnianDungeon_PIRATE_3_Text_0:
	.string "Ye got a lot of cahoonies coming up to\n"
	.string "face me.\p"
	.string "Very well I shall swab the floor with\n"
	.string "you, en garde!$"

BATTLE_AsgarnianDungeon_PIRATE_3_Text_1:
	.string "Please don't go telling the authorities\n"
	.string "about our petty squable, aye?$"

BATTLE_AsgarnianDungeon_PIRATE_3_Text_2:
	.string "Grub$"

BATTLE_AsgarnianDungeon_PIRATE_4_Text_0:
	.string "Ye adventurers always pass us by\n"
	.string "without a word.\p"
	.string "Yer a rude kind aint cha?$"

BATTLE_AsgarnianDungeon_PIRATE_4_Text_1:
	.string "Maybe challenging ye up front like that\n"
	.string "was rude as well aye?$"

BATTLE_AsgarnianDungeon_PIRATE_4_Text_2:
	.string "Tugg$"

BATTLE_AsgarnianDungeon_GOBLIN_1_Text_0:
	.string "Big High War God command Gruntknee\n"
	.string "recruit dragon from this cave.$"

BATTLE_AsgarnianDungeon_GOBLIN_1_Text_1:
	.string "Gruntknee not really up for this task.\p"
	.string "Gruntknee wants to go home.$"

BATTLE_AsgarnianDungeon_GOBLIN_1_Text_2:
	.string "Gruntknee$"

BATTLE_AsgarnianDungeon_GOBLIN_2_Text_0:
	.string "Cold wind blows here, Shiverknees\n"
	.string "prefers pirate cave.\p"
	.string "You better stay out too.$"

BATTLE_AsgarnianDungeon_GOBLIN_2_Text_1:
	.string "Go ahead then.\p"
	.string "Spoil Shiverknees good gesture.$"

BATTLE_AsgarnianDungeon_GOBLIN_2_Text_2:
	.string "Shiverknees$"

BATTLE_AsgarnianDungeon_QUESTER_Text_0:
	.string "Urgh, every time I try to mine Blurite\n"
	.string "ore I keep getting inturpted!$"

BATTLE_AsgarnianDungeon_QUESTER_Text_1:
	.string "I am having to keep fending off these\n"
	.string "monsters!\p"
	.string "All I want to do is mine the Blurite ore.$"

BATTLE_AsgarnianDungeon_QUESTER_Text_2:
	.string "QPCSpdRun$"

BATTLE_AsgarnianDungeon_PVM_1_Text_0:
	.string "I'm on an Ice Warrior slayer task, don't\n"
	.string "bother me noob.$"

BATTLE_AsgarnianDungeon_PVM_1_Text_1:
	.string "Maybe it was overkill.\p"
	.string "All the Ice Warriors are gone now.$"

BATTLE_AsgarnianDungeon_PVM_1_Text_2:
	.string "ImAn807$"

BATTLE_AsgarnianDungeon_PVM_2_Text_0:
	.string "This right here is a safespot.\p"
	.string "For me that is.$"

BATTLE_AsgarnianDungeon_PVM_2_Text_1:
	.string "Maybe I was never safe right here to\n"
	.string "begin with.$"

BATTLE_AsgarnianDungeon_PVM_2_Text_2:
	.string "Geralt94$"
