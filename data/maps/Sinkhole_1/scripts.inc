Sinkhole_1_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Sinkhole_1_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Sinkhole_1_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setvar VAR_EVOLUTION_MAP_STATE, 43
	return


ITEM_SINKHOLE_1::
	finditem ITEM_STAT_MOONLIGHT_MEAD
	end


ITEM_SINKHOLE_2::
	finditem ITEM_HWEEN_MASK
	end


ITEM_SINKHOLE_3::
	finditem ITEM_SPIRIT_SHARD
	end


SINKHOLE_NPC_FORGOTTENWARRIOR_1::
	faceplayer
	msgbox SINKHOLE_NPC_FORGOTTENWARRIOR_1_Text_0
	closemessage
	hidenamebox
	release
	end


SINKHOLE_NPC_TRADER::
	faceplayer
	msgbox SINKHOLE_NPC_TRADER_Text_0
	closemessage
	hidenamebox
	release
	end


SINKHOLE_NPC_FORGOTTENWARRIOR_2::
	faceplayer
	msgbox SINKHOLE_NPC_FORGOTTENWARRIOR_2_Text_0
	closemessage
	hidenamebox
	release
	end


BATTLE_SINKHOLE_NPC_FORGOTTENWARRIOR_1::
	trainerbattle_single TRAINER_SINKHOLE_NPC_FORGOTTENWARRIOR_1, BATTLE_SINKHOLE_NPC_FORGOTTENWARRIOR_1_Text_0, BATTLE_SINKHOLE_NPC_FORGOTTENWARRIOR_1_Text_1
	msgbox BATTLE_SINKHOLE_NPC_FORGOTTENWARRIOR_1_Text_2
	hidenamebox
	release
	end


SINKHOLE_NPC_FORGOTTENWARRIOR_1_Text_0:
	.string "How did you find this place?$"

SINKHOLE_NPC_TRADER_Text_0:
	.string "I have been down here for years.\p"
	.string "It is surprising to see a surface\n"
	.string "dweller here.$"

SINKHOLE_NPC_FORGOTTENWARRIOR_2_Text_0:
	.string "Have you tried fishing?\p"
	.string "There are many monsters only exclusive\n"
	.string "to these dungeons.$"

BATTLE_SINKHOLE_NPC_FORGOTTENWARRIOR_1_Text_0:
	.string "Halt!\p"
	.string "Who are you and how did you get here?!$"

BATTLE_SINKHOLE_NPC_FORGOTTENWARRIOR_1_Text_1:
	.string "You have bested me.$"

BATTLE_SINKHOLE_NPC_FORGOTTENWARRIOR_1_Text_2:
	.string "You came from the surface?\p"
	.string "What is that?$"
