Route15_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route15_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Route15_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setvar VAR_EVOLUTION_MAP_STATE, 16
	return


ROUTE15_SIGNPOST::
	msgbox ROUTE15_SIGNPOST_Text_0
	closemessage
	release
	end


ROUTE15_NPC_UNICORN::
	lock
	faceplayer
	namebox ROUTE15_NPC_UNICORN_Text_0
	msgbox ROUTE15_NPC_UNICORN_Text_1
	closemessage
	hidenamebox
	release
	end


ROUTE15_NPC_MINER::
	lock
	faceplayer
	namebox ROUTE15_NPC_MINER_Text_0
	msgbox ROUTE15_NPC_MINER_Text_1
	closemessage
	hidenamebox
	release
	end


ROUTE15_NPC_NOOB::
	lock
	faceplayer
	namebox ROUTE15_NPC_NOOB_Text_0
	msgbox ROUTE15_NPC_NOOB_Text_1
	closemessage
	hidenamebox
	release
	end


BATTLE_ROUTE15_TRAINER_1::
	trainerbattle_single TRAINER_ROUTE15_TRAINER_1, BATTLE_ROUTE15_TRAINER_1_Text_0, BATTLE_ROUTE15_TRAINER_1_Text_1
	namebox ROUTE15_NPC_MINER_Text_0
	msgbox BATTLE_ROUTE15_TRAINER_1_Text_1
	hidenamebox
	release
	end


BATTLE_ROUTE15_TRAINER_2::
	trainerbattle_single TRAINER_ROUTE15_TRAINER_2, BATTLE_ROUTE15_TRAINER_2_Text_0, BATTLE_ROUTE15_TRAINER_2_Text_1
	namebox ROUTE15_NPC_MINER_Text_0
	msgbox BATTLE_ROUTE15_TRAINER_2_Text_1
	hidenamebox
	release
	end


BATTLE_ROUTE15_TRAINER_3::
	trainerbattle_single TRAINER_ROUTE15_TRAINER_3, BATTLE_ROUTE15_TRAINER_3_Text_0, BATTLE_ROUTE15_TRAINER_3_Text_1
	namebox ROUTE15_NPC_MINER_Text_0
	msgbox BATTLE_ROUTE15_TRAINER_3_Text_1
	hidenamebox
	release
	end


BATTLE_ROUTE15_TRAINER_4::
	trainerbattle_single TRAINER_ROUTE15_TRAINER_4, BATTLE_ROUTE15_TRAINER_4_Text_0, BATTLE_ROUTE15_TRAINER_4_Text_1
	namebox BATTLE_ROUTE15_TRAINER_4_Text_2
	msgbox BATTLE_ROUTE15_TRAINER_4_Text_3
	hidenamebox
	release
	end


BATTLE_ROUTE15_TRAINER_5::
	trainerbattle_single TRAINER_ROUTE15_TRAINER_5, BATTLE_ROUTE15_TRAINER_5_Text_0, BATTLE_ROUTE15_TRAINER_5_Text_1
	namebox ROUTE15_NPC_NOOB_Text_0
	msgbox BATTLE_ROUTE15_TRAINER_5_Text_2
	hidenamebox
	release
	end


BATTLE_ROUTE15_TRAINER_6::
	trainerbattle_single TRAINER_ROUTE15_TRAINER_6, BATTLE_ROUTE15_TRAINER_6_Text_0, BATTLE_ROUTE15_TRAINER_6_Text_1
	namebox BATTLE_ROUTE15_TRAINER_4_Text_2
	msgbox BATTLE_ROUTE15_TRAINER_6_Text_1
	hidenamebox
	release
	end


ROUTE15_SIGNPOST_Text_0:
	.string "NORTH - VARROCK.\l"
	.string "SOUTH - AL KHARID.\l"
	.string "EAST - DIGSITE.$"

ROUTE15_NPC_UNICORN_Text_0:
	.string "Unicorn$"

ROUTE15_NPC_UNICORN_Text_1:
	.string "NEEEIGGH!$"

ROUTE15_NPC_MINER_Text_0:
	.string "Miner$"

ROUTE15_NPC_MINER_Text_1:
	.string "I am going to craft so many Pouches\n"
	.string "with these ores!$"

ROUTE15_NPC_NOOB_Text_0:
	.string "Noob$"

ROUTE15_NPC_NOOB_Text_1:
	.string "My Pickaxe head just flew off.\p"
	.string "Have you seen it anywhere?$"

BATTLE_ROUTE15_TRAINER_1_Text_0:
	.string "We mine all day, time for a break.$"

BATTLE_ROUTE15_TRAINER_1_Text_1:
	.string "I lost a lot of exp on that break.\p"
	.string "I may never recover from this loss.$"

BATTLE_ROUTE15_TRAINER_2_Text_0:
	.string "You better be worth my time\n"
	.string "interrupting me like this.$"

BATTLE_ROUTE15_TRAINER_2_Text_1:
	.string "I guess you were partly worth it.$"

BATTLE_ROUTE15_TRAINER_3_Text_0:
	.string "It might not be ambitious, but I'd really\n"
	.string "like to reach mining level 9 by the\l"
	.string "week.$"

BATTLE_ROUTE15_TRAINER_3_Text_1:
	.string "I am never going to make it…$"

BATTLE_ROUTE15_TRAINER_4_Text_0:
	.string "I chop down trees, I eat my lunch, I like\n"
	.string "to battle strangers!$"

BATTLE_ROUTE15_TRAINER_4_Text_1:
	.string "On wednesday I go shopping, just like\n"
	.string "my dear papa!$"

BATTLE_ROUTE15_TRAINER_4_Text_2:
	.string "Woodcutter$"

BATTLE_ROUTE15_TRAINER_4_Text_3:
	.string "On Wednesday I go shopping, just like\n"
	.string "my dear papa!$"

BATTLE_ROUTE15_TRAINER_5_Text_0:
	.string "I tried Mining but everyone kept\n"
	.string "stealing my ore so I am going to try\l"
	.string "some MvM battles instead!$"

BATTLE_ROUTE15_TRAINER_5_Text_1:
	.string "Looks like I am no good at this either…$"

BATTLE_ROUTE15_TRAINER_5_Text_2:
	.string "Seems like I am no good at Mining or MvM\n"
	.string "battles.\p"
	.string "Maybe I'll try Questing, I doubt I could\n"
	.string "go wrong with that.$"

BATTLE_ROUTE15_TRAINER_6_Text_0:
	.string "My Woodcutting level is 14.\p"
	.string "What is yours?$"

BATTLE_ROUTE15_TRAINER_6_Text_1:
	.string "My Beaver?\p"
	.string "I found him was level 3.$"
