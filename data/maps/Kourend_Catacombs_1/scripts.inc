Kourend_Catacombs_1_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Kourend_Catacombs_1_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Kourend_Catacombs_1_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_SLAYER_COMPLETE, 1, SLAYER_TASK_COMPLETE
	.2byte 0


ZEAH_TELEPORT_ENTER::
	checkitem ITEM_PURPLE_SWEETS, 1
	compare VAR_RESULT, 0
	goto_if_ne ZEAH_TELEPORT_ENTER_2
	msgbox ZEAH_TELEPORT_ENTER_Text_2
	closemessage
	release
	end

ZEAH_TELEPORT_ENTER_2:
	msgbox ZEAH_TELEPORT_ENTER_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne ZEAH_TELEPORT_ENTER_5
	closemessage
	release
	end

ZEAH_TELEPORT_ENTER_5:
	msgbox ZEAH_TELEPORT_ENTER_Text_1
	applymovement OBJ_EVENT_ID_PLAYER, movement_TELEPORT_OUT
	removeitem ITEM_PURPLE_SWEETS, 1
	warpteleport MAP_KOUREND_CATACOMBS_7, 0, 0, 0
	closemessage
	release
	end


XERICS_TELEPORT::
	msgbox XERICS_TELEPORT_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne XERICS_TELEPORT_2
	closemessage
	release
	end

XERICS_TELEPORT_2:
	msgbox ZEAH_TELEPORT_ENTER_Text_1
	applymovement OBJ_EVENT_ID_PLAYER, movement_TELEPORT_OUT
	warpteleport MAP_KOUREND_CATACOMBS_1, 0, 0, 0
	closemessage
	release
	end


ANCIENT_SHARD_TELEPORT::
	msgbox ANCIENT_SHARD_TELEPORT_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne ANCIENT_SHARD_TELEPORT_2
	closemessage
	release
	end

ANCIENT_SHARD_TELEPORT_2:
	msgbox ZEAH_TELEPORT_ENTER_Text_1
	playse SE_WARP_IN
	applymovement OBJ_EVENT_ID_PLAYER, movement_TELEPORT_OUT
	waitmovement 0
	closemessage
	release
	random 7
	switch VAR_RESULT
	case 0, ANCIENT_SHARD_TELEPORT_6
	case 1, ANCIENT_SHARD_TELEPORT_7
	case 2, ANCIENT_SHARD_TELEPORT_8
	case 3, ANCIENT_SHARD_TELEPORT_9
	case 4, ANCIENT_SHARD_TELEPORT_10
	case 5, ANCIENT_SHARD_TELEPORT_11
	case 6, ANCIENT_SHARD_TELEPORT_12
ANCIENT_SHARD_TELEPORT_4:
	end

ANCIENT_SHARD_TELEPORT_6:
	warpspinenter MAP_KOUREND_CATACOMBS_1, 28, 20
	goto ANCIENT_SHARD_TELEPORT_4

ANCIENT_SHARD_TELEPORT_7:
	warpspinenter MAP_KOUREND_CATACOMBS_4, 38, 12
	goto ANCIENT_SHARD_TELEPORT_4

ANCIENT_SHARD_TELEPORT_8:
	warpspinenter MAP_KOUREND_CATACOMBS_4, 77, 9
	goto ANCIENT_SHARD_TELEPORT_4

ANCIENT_SHARD_TELEPORT_9:
	warpspinenter MAP_KOUREND_CATACOMBS_5, 4, 14
	goto ANCIENT_SHARD_TELEPORT_4

ANCIENT_SHARD_TELEPORT_10:
	warpspinenter MAP_KOUREND_CATACOMBS_2, 48, 2
	goto ANCIENT_SHARD_TELEPORT_4

ANCIENT_SHARD_TELEPORT_11:
	warpspinenter MAP_KOUREND_CATACOMBS_2, 8, 19
	goto ANCIENT_SHARD_TELEPORT_4

ANCIENT_SHARD_TELEPORT_12:
	warpspinenter MAP_KOUREND_CATACOMBS_6, 5, 6
	goto ANCIENT_SHARD_TELEPORT_4


movement_TELEPORT_OUT:
	fly_up
	step_end

NPC_NIEVE::
	lock
	faceplayer
	namebox NPC_NIEVE_Text_0
	msgbox NPC_NIEVE_Text_1, MSGBOX_YESNO
	hidenamebox
	compare VAR_RESULT, 0
	goto_if_ne NPC_NIEVE_2
NPC_NIEVE_1:
	release
	end

NPC_NIEVE_2:
	call SLAYER_TASK_ASSIGN
	call SLAYER_TASK_CHECK
	hidenamebox
	goto NPC_NIEVE_1


give_SLAYER_GEM::
	finditem ITEM_SLAYER_GEM
	end


SLAYER_TASK_ASSIGN::
	random 4
	addvar VAR_RESULT, 1
	copyvar VAR_SLAYER_LEFT_TO_DEFEAT, VAR_RESULT
	random 10
	switch VAR_RESULT
	case 0, SLAYER_TASK_ASSIGN_3
	case 1, SLAYER_TASK_ASSIGN_4
	case 2, SLAYER_TASK_ASSIGN_5
	case 3, SLAYER_TASK_ASSIGN_6
	case 4, SLAYER_TASK_ASSIGN_6
	case 5, SLAYER_TASK_ASSIGN_7
	case 6, SLAYER_TASK_ASSIGN_7
	case 7, SLAYER_TASK_ASSIGN_7
	case 8, SLAYER_TASK_ASSIGN_7
	case 9, SLAYER_TASK_ASSIGN_8
SLAYER_TASK_ASSIGN_1:
	return

SLAYER_TASK_ASSIGN_3:
	setvar VAR_SLAYER_ASSIGNMENT, 1
	bufferspeciesname STR_VAR_2, SPECIES_BLOODVELD
	buffernumberstring STR_VAR_3, VAR_SLAYER_LEFT_TO_DEFEAT
	goto SLAYER_TASK_ASSIGN_1

SLAYER_TASK_ASSIGN_4:
	setvar VAR_SLAYER_ASSIGNMENT, 2
	bufferspeciesname STR_VAR_2, SPECIES_FROGEEL
	buffernumberstring STR_VAR_3, VAR_SLAYER_LEFT_TO_DEFEAT
	goto SLAYER_TASK_ASSIGN_1

SLAYER_TASK_ASSIGN_5:
	setvar VAR_SLAYER_ASSIGNMENT, 3
	bufferspeciesname STR_VAR_2, SPECIES_GUTHLING
	buffernumberstring STR_VAR_3, VAR_SLAYER_LEFT_TO_DEFEAT
	goto SLAYER_TASK_ASSIGN_1

SLAYER_TASK_ASSIGN_6:
	setvar VAR_SLAYER_ASSIGNMENT, 4
	bufferspeciesname STR_VAR_2, SPECIES_ROC
	buffernumberstring STR_VAR_3, VAR_SLAYER_LEFT_TO_DEFEAT
	goto SLAYER_TASK_ASSIGN_1

SLAYER_TASK_ASSIGN_7:
	msgbox SLAYER_TASK_ASSIGN_Text_0
	closemessage
	call SLAYER_TASK_ASSIGN
	goto SLAYER_TASK_ASSIGN_1

SLAYER_TASK_ASSIGN_8:
	setvar VAR_SLAYER_ASSIGNMENT, 4
	bufferspeciesname STR_VAR_2, SPECIES_ROC
	buffernumberstring STR_VAR_3, VAR_SLAYER_LEFT_TO_DEFEAT
	goto SLAYER_TASK_ASSIGN_1


SLAYER_TASK_CHECK::
	switch VAR_SLAYER_ASSIGNMENT
	case 0, SLAYER_TASK_CHECK_3
	case 1, SLAYER_TASK_CHECK_4
	case 2, SLAYER_TASK_CHECK_5
	case 3, SLAYER_TASK_CHECK_6
SLAYER_TASK_CHECK_1:
	msgbox SLAYER_TASK_CHECK_Text_1
	closemessage
	return

SLAYER_TASK_CHECK_3:
	msgbox SLAYER_TASK_CHECK_Text_0
	closemessage
	return

SLAYER_TASK_CHECK_4:
	bufferspeciesname STR_VAR_2, SPECIES_BLOODVELD
	buffernumberstring STR_VAR_3, VAR_SLAYER_LEFT_TO_DEFEAT
	goto SLAYER_TASK_CHECK_1

SLAYER_TASK_CHECK_5:
	bufferspeciesname STR_VAR_2, SPECIES_DEMON_LESSER_OSRS_FORM
	buffernumberstring STR_VAR_3, VAR_SLAYER_LEFT_TO_DEFEAT
	goto SLAYER_TASK_CHECK_1

SLAYER_TASK_CHECK_6:
	bufferspeciesname STR_VAR_2, SPECIES_ZAMLING
	buffernumberstring STR_VAR_3, VAR_SLAYER_LEFT_TO_DEFEAT
	goto SLAYER_TASK_CHECK_1


SLAYER_TASK_COMPLETE::
	lock
	playfanfare MUS_PS_QUEST_COMPLETE
	random 12
	addvar VAR_RESULT, 1
	copyvar VAR_SLAYER_LEFT_TO_DEFEAT, VAR_RESULT
	setvar VAR_0x8004, 12
	special GiveFrontierBattlePoints
	buffernumberstring STR_VAR_1, VAR_0x8004
	msgbox SLAYER_TASK_COMPLETE_Text_0
	waitmessage
	waitfanfare
	closemessage
	setvar VAR_SLAYER_ASSIGNMENT, 0
	setvar VAR_SLAYER_COMPLETE, 0
	release
	return


ROTTEN_POTATO_TELEPORT::
	msgbox ROTTEN_POTATO_TELEPORT_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne ROTTEN_POTATO_TELEPORT_2
	closemessage
	release
	end

ROTTEN_POTATO_TELEPORT_2:
	msgbox ROTTEN_POTATO_TELEPORT_Text_1
	goto EventScript_FieldWhiteOut
	release
	end


ZEAH_TELEPORT_ENTER_Text_0:
	.string "The totem in your backpack reacts to\n"
	.string "the Altar.\p"
	.string "Would you like to use it?$"

ZEAH_TELEPORT_ENTER_Text_1:
	.string "Suddenly the world starts to warp\n"
	.string "around you.$"

ZEAH_TELEPORT_ENTER_Text_2:
	.string "There seems to be a slot in the Altar\n"
	.string "for something.$"

XERICS_TELEPORT_Text_0:
	.string "Would you like to teleport to the\n"
	.string "Kourend?$"

ANCIENT_SHARD_TELEPORT_Text_0:
	.string "Would you like to teleport to the\n"
	.string "Catacombs of Kourend?$"

NPC_NIEVE_Text_0:
	.string "Nieve$"

NPC_NIEVE_Text_1:
	.string "Would you like a Slayer Assignment?$"

SLAYER_TASK_ASSIGN_Text_0:
	.string "Rerolled$"

SLAYER_TASK_CHECK_Text_0:
	.string "You currently do not have an\n"
	.string "assignment.$"

SLAYER_TASK_CHECK_Text_1:
	.string "Your current assignment is to slay\n"
	.string "{STR_VAR_3} {STR_VAR_2}$"

SLAYER_TASK_COMPLETE_Text_0:
	.string "Slayer Assignment complete!\n"
	.string "{PLAYER} obtained {STR_VAR_1}\l"
	.string "Slayer Point(s).$"

ROTTEN_POTATO_TELEPORT_Text_0:
	.string "Only use this if you are stuck.\p"
	.string "This will cause you to whiteout.$"

ROTTEN_POTATO_TELEPORT_Text_1:
	.string "As you bite into the rotten potato you\n"
	.string "and your team feel the touch of the\l"
	.string "PokeScape gods.\p"
	.string "It was too much for you.$"
