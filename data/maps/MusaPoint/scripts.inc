MusaPoint_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, MusaPoint_MapScripts_MAP_SCRIPT_ON_LOAD
	map_script MAP_SCRIPT_ON_TRANSITION, MusaPoint_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

MusaPoint_MapScripts_MAP_SCRIPT_ON_LOAD:
	call MUSAPOINT_METATILES
	return

MusaPoint_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setflag FLAG_VISITED_MUSA_POINT
	call MUSAPOINT_STATE
	call WEATHER_CHANGE_AREA_MUSAPOINT
	setvar VAR_EVOLUTION_MAP_STATE, 15
	return


MUSAPOINT_METATILES::
	compare VAR_WISE_OLD_MAN_RIVAL, 15
	goto_if_le MUSAPOINT_METATILES_2
MUSAPOINT_METATILES_1:
	compare VAR_BANANA_BOAT_QUEST, 10
	goto_if_ge MUSAPOINT_METATILES_5
MUSAPOINT_METATILES_4:
	return

MUSAPOINT_METATILES_2:
	setmetatile 12, 35, METATILE_Karamja_SAND_BANANA, 0
	setmetatile 10, 36, METATILE_Karamja_SAND_BANANA, 0
	setmetatile 15, 35, METATILE_Karamja_SAND_BANANA, 0
	goto MUSAPOINT_METATILES_1

MUSAPOINT_METATILES_5:
	setmetatile 27, 27, METATILE_PokeScapeOutdoors_GENERAL_SAND, 0
	setmetatile 28, 27, METATILE_PokeScapeOutdoors_GENERAL_SAND, 0
	setmetatile 29, 27, METATILE_PokeScapeOutdoors_GENERAL_SAND, 0
	setmetatile 27, 28, METATILE_PokeScapeOutdoors_GENERAL_SAND, 0
	setmetatile 28, 28, METATILE_PokeScapeOutdoors_GENERAL_SAND, 0
	setmetatile 29, 28, METATILE_PokeScapeOutdoors_GENERAL_SAND, 0
	goto MUSAPOINT_METATILES_4


MUSAPOINT_STATE::
	compare VAR_POKESCAPE_GAMEMODE_STATE, 0
	goto_if_eq MUSAPOINT_STATE_2
MUSAPOINT_STATE_1:
	return

MUSAPOINT_STATE_2:
	compare VAR_POKESCAPE_STORYMODE_PROGRESS, 155
	goto_if_le MUSAPOINT_STATE_5
	removeobject 21
	setflag FLAG_TEMP_1D
MUSAPOINT_STATE_4:
	compare VAR_WISE_OLD_MAN_RIVAL, 15
	goto_if_le MUSAPOINT_STATE_9
	removeobject 20
	setflag FLAG_TEMP_1F
	removeobject 22
	removeobject 23
	setflag FLAG_TEMP_1E
MUSAPOINT_STATE_8:
	compare VAR_BANANA_BOAT_QUEST, 5
	goto_if_ge MUSAPOINT_STATE_12
	setflag FLAG_TEMP_1C
	setflag FLAG_TEMP_1B
	removeobject 24
	removeobject 25
	goto MUSAPOINT_STATE_1

MUSAPOINT_STATE_5:
	addobject 21
	clearflag FLAG_TEMP_1D
	setobjectxyperm 7, 38, 29
	goto MUSAPOINT_STATE_4

MUSAPOINT_STATE_9:
	setvar VAR_TEMP_F, 1
	addobject 20
	clearflag FLAG_TEMP_1F
	addobject 22
	addobject 23
	clearflag FLAG_TEMP_1E
	goto MUSAPOINT_STATE_8

MUSAPOINT_STATE_12:
	clearflag FLAG_TEMP_1C
	clearflag FLAG_TEMP_1B
	addobject 24
	addobject 25
	goto MUSAPOINT_STATE_1


NPC_MUSAPOINT_SAILOR::
	lock
	namebox NPC_MUSAPOINT_SAILOR_Text_0
	compare VAR_POKESCAPE_STORYMODE_PROGRESS, 155
	goto_if_le NPC_MUSAPOINT_SAILOR_2
	faceplayer
	msgbox NPC_MUSAPOINT_SAILOR_Text_2, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq NPC_MUSAPOINT_SAILOR_5
	msgbox NPC_MUSAPOINT_SAILOR_Text_4
NPC_MUSAPOINT_SAILOR_1:
	closemessage
	hidenamebox
	release
	end

NPC_MUSAPOINT_SAILOR_2:
	msgbox NPC_MUSAPOINT_SAILOR_Text_1
	goto NPC_MUSAPOINT_SAILOR_1

NPC_MUSAPOINT_SAILOR_5:
	msgbox NPC_MUSAPOINT_SAILOR_Text_3
	warp MAP_PORT_SARIM, 8, 0, 0
	waitstate
	goto NPC_MUSAPOINT_SAILOR_1


NPC_LegendArts::
	lock
	faceplayer
	namebox NPC_LegendArts_Text_0
	msgbox NPC_LegendArts_Text_1
	waitmessage
	hidenamebox
	release
	end


SIGNPOST_MUSA_POINT::
	msgbox SIGNPOST_MUSA_POINT_Text_0
	closemessage
	end


SIGNPOST_BOAT_FOR_SALE::
	msgbox SIGNPOST_BOAT_FOR_SALE_Text_0
	closemessage
	end


ITEM_MUSA_POINT_1::
	finditem ITEM_PURPLE_SWEETS
	end


ITEM_MUSA_POINT_2::
	finditem ITEM_STAT_BEER
	end


NPC_MUSA_POINT_1::
	lock
	namebox NPC_MUSA_POINT_1_Text_0
	msgbox NPC_MUSA_POINT_1_Text_1
	closemessage
	hidenamebox
	release
	end


NPC_MUSA_POINT_2::
	lock
	faceplayer
	namebox NPC_MUSA_POINT_2_Text_0
	msgbox NPC_MUSA_POINT_2_Text_1
	closemessage
	hidenamebox
	release
	end


NPC_MUSA_POINT_3::
	lock
	faceplayer
	namebox NPC_MUSA_POINT_2_Text_0
	msgbox NPC_MUSA_POINT_3_Text_0
	closemessage
	hidenamebox
	release
	end


NPC_MUSA_POINT_4::
	lock
	faceplayer
	namebox NPC_MUSA_POINT_4_Text_0
	msgbox NPC_MUSA_POINT_4_Text_1
	closemessage
	hidenamebox
	release
	end


NPC_MUSA_POINT_5::
	lock
	faceplayer
	namebox NPC_MUSA_POINT_2_Text_0
	msgbox NPC_MUSA_POINT_5_Text_0
	closemessage
	hidenamebox
	release
	end


NPC_MUSA_POINT_6::
	lock
	faceplayer
	namebox NPC_MUSA_POINT_6_Text_0
	msgbox NPC_MUSA_POINT_6_Text_1
	closemessage
	hidenamebox
	release
	end


NPC_MUSA_POINT_7::
	lock
	faceplayer
	namebox NPC_MUSA_POINT_6_Text_0
	msgbox NPC_MUSA_POINT_7_Text_0
	closemessage
	hidenamebox
	release
	end


NPC_MUSA_POINT_8::
	lock
	faceplayer
	namebox NPC_MUSAPOINT_SAILOR_Text_0
	compare VAR_POKESCAPE_STORYMODE_PROGRESS, 155
	goto_if_le NPC_MUSA_POINT_8_2
	msgbox NPC_MUSA_POINT_8_Text_1
NPC_MUSA_POINT_8_1:
	closemessage
	hidenamebox
	release
	end

NPC_MUSA_POINT_8_2:
	msgbox NPC_MUSA_POINT_8_Text_0
	goto NPC_MUSA_POINT_8_1


NPC_MUSA_POINT_9::
	lock
	faceplayer
	namebox NPC_MUSA_POINT_9_Text_0
	msgbox NPC_MUSA_POINT_9_Text_1
	closemessage
	hidenamebox
	release
	end


NPC_MUSA_POINT_10::
	lock
	faceplayer
	namebox NPC_MUSA_POINT_10_Text_0
	msgbox NPC_MUSA_POINT_10_Text_1
	closemessage
	hidenamebox
	release
	end


NPC_MUSA_POINT_Luthas::
	lock
	faceplayer
	namebox NPC_MUSA_POINT_Luthas_Text_0
	msgbox NPC_MUSA_POINT_Luthas_Text_1
	closemessage
	hidenamebox
	release
	end


NPC_MONKEY_BLOCK::
	lock
	faceplayer
	namebox NPC_MONKEY_BLOCK_Text_0
	playmoncry SPECIES_MONKEY_NORMAL_FORM, 0
	msgbox NPC_MONKEY_BLOCK_Text_1
	waitmoncry
	hidenamebox
	msgbox NPC_MONKEY_BLOCK_Text_2
	release
	end


BATTLE_MUSA_POINT_TRAINER_1::
	trainerbattle_single TRAINER_MUSA_POINT_TRAINER_1, BATTLE_MUSA_POINT_TRAINER_1_Text_0, BATTLE_MUSA_POINT_TRAINER_1_Text_1
	namebox BATTLE_MUSA_POINT_TRAINER_1_Text_2
	msgbox BATTLE_MUSA_POINT_TRAINER_1_Text_1
	hidenamebox
	release
	end


BATTLE_MUSA_POINT_TRAINER_2::
	trainerbattle_single TRAINER_MUSA_POINT_TRAINER_2, BATTLE_MUSA_POINT_TRAINER_2_Text_0, BATTLE_MUSA_POINT_TRAINER_2_Text_1
	namebox BATTLE_MUSA_POINT_TRAINER_2_Text_2
	msgbox BATTLE_MUSA_POINT_TRAINER_2_Text_1
	hidenamebox
	release
	end


BATTLE_MUSA_POINT_TRAINER_3::
	trainerbattle_single TRAINER_MUSA_POINT_TRAINER_3, BATTLE_MUSA_POINT_TRAINER_3_Text_0, BATTLE_MUSA_POINT_TRAINER_3_Text_1
	namebox BATTLE_MUSA_POINT_TRAINER_3_Text_2
	msgbox BATTLE_MUSA_POINT_TRAINER_3_Text_1
	hidenamebox
	release
	end


BATTLE_MUSA_POINT_TRAINER_4::
	trainerbattle_single TRAINER_MUSA_POINT_TRAINER_4, BATTLE_MUSA_POINT_TRAINER_4_Text_0, BATTLE_MUSA_POINT_TRAINER_4_Text_1
	namebox BATTLE_MUSA_POINT_TRAINER_4_Text_2
	msgbox BATTLE_MUSA_POINT_TRAINER_4_Text_3
	hidenamebox
	release
	end


NPC_MUSA_POINT_SHOP_1::
	lock
	faceplayer
	namebox NPC_MUSA_POINT_4_Text_0
	msgbox NPC_MUSA_POINT_SHOP_1_Text_0
	closemessage
	hidenamebox
	release
	end


NEWSLETTER_1::
	lock
	faceplayer
	msgbox NEWSLETTER_1_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne NEWSLETTER_1_2
NEWSLETTER_1_1:
	closemessage
	release
	end

NEWSLETTER_1_2:
	msgbox NEWSLETTER_1_Text_1
	goto NEWSLETTER_1_1


NEWSLETTER_2::
	lock
	faceplayer
	msgbox NEWSLETTER_2_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne NEWSLETTER_2_2
NEWSLETTER_2_1:
	closemessage
	release
	end

NEWSLETTER_2_2:
	msgbox NEWSLETTER_2_Text_1
	goto NEWSLETTER_2_1


NEWSLETTER_3::
	lock
	faceplayer
	msgbox NEWSLETTER_3_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne NEWSLETTER_3_2
NEWSLETTER_3_1:
	closemessage
	release
	end

NEWSLETTER_3_2:
	msgbox NEWSLETTER_3_Text_1
	goto NEWSLETTER_3_1


NEWSLETTER_4::
	lock
	faceplayer
	msgbox NEWSLETTER_4_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne NEWSLETTER_4_2
NEWSLETTER_4_1:
	closemessage
	release
	end

NEWSLETTER_4_2:
	msgbox NEWSLETTER_4_Text_1
	goto NEWSLETTER_4_1


NEWSLETTER_5::
	lock
	faceplayer
	msgbox NEWSLETTER_5_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne NEWSLETTER_5_2
NEWSLETTER_5_1:
	closemessage
	release
	end

NEWSLETTER_5_2:
	msgbox NEWSLETTER_5_Text_1
	goto NEWSLETTER_5_1


NEWSLETTER_6::
	lock
	faceplayer
	msgbox NEWSLETTER_6_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne NEWSLETTER_6_2
NEWSLETTER_6_1:
	closemessage
	release
	end

NEWSLETTER_6_2:
	msgbox NEWSLETTER_6_Text_1
	goto NEWSLETTER_6_1


NEWSLETTER_7::
	lock
	faceplayer
	msgbox NEWSLETTER_7_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne NEWSLETTER_7_2
NEWSLETTER_7_1:
	closemessage
	release
	end

NEWSLETTER_7_2:
	msgbox NEWSLETTER_7_Text_1
	goto NEWSLETTER_7_1


NEWSLETTER_8::
	lock
	faceplayer
	msgbox NEWSLETTER_8_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne NEWSLETTER_8_2
NEWSLETTER_8_1:
	closemessage
	release
	end

NEWSLETTER_8_2:
	msgbox NEWSLETTER_8_Text_1
	goto NEWSLETTER_8_1


NEWSLETTER_9::
	lock
	faceplayer
	msgbox NEWSLETTER_9_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne NEWSLETTER_9_2
NEWSLETTER_9_1:
	closemessage
	release
	end

NEWSLETTER_9_2:
	msgbox NEWSLETTER_9_Text_1
	goto NEWSLETTER_9_1


NEWSLETTER_13::
	lock
	faceplayer
	msgbox NEWSLETTER_13_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne NEWSLETTER_13_2
NEWSLETTER_13_1:
	closemessage
	release
	end

NEWSLETTER_13_2:
	msgbox NEWSLETTER_13_Text_1
	goto NEWSLETTER_13_1


EventScript_BananaTree::
	msgbox EventScript_BananaTree_Text_0
	random 3
	compare VAR_RESULT, 0
	goto_if_eq EventScript_BananaTree_2
	msgbox EventScript_BananaTree_Text_2
	giveitem ITEM_BANANA, 1
EventScript_BananaTree_1:
	closemessage
	end

EventScript_BananaTree_2:
	msgbox EventScript_BananaTree_Text_1
	goto EventScript_BananaTree_1


EventScript_BananaGround::
	random 8
	switch VAR_RESULT
	case 1, EventScript_BananaGround_3
	case 2, EventScript_BananaGround_4
	case 3, EventScript_BananaGround_5
	case 4, EventScript_BananaGround_6
	case 5, EventScript_BananaGround_7
	giveitem ITEM_BANANA, 1
EventScript_BananaGround_1:
	closemessage
	end

EventScript_BananaGround_3:
	msgbox EventScript_BananaGround_Text_0
	goto EventScript_BananaGround_1

EventScript_BananaGround_4:
	msgbox EventScript_BananaGround_Text_1
	goto EventScript_BananaGround_1

EventScript_BananaGround_5:
	msgbox EventScript_BananaGround_Text_2
	goto EventScript_BananaGround_1

EventScript_BananaGround_6:
	msgbox EventScript_BananaGround_Text_3
	goto EventScript_BananaGround_1

EventScript_BananaGround_7:
	msgbox EventScript_BananaGround_Text_4
	goto EventScript_BananaGround_1


QUEST_BOAT_MUSA_POINT_Smuggler::
	lock
	namebox QUEST_BOAT_MUSA_POINT_Smuggler_Text_0
	msgbox QUEST_BOAT_MUSA_POINT_Smuggler_Text_1
	closemessage
	hidenamebox
	release
	end


TRIGGER_WISEOLDMAN_RIVAL_MUSAPOINT::
	lock
	playse SE_PIN
	applymovement 20, movement_wom_musapoint_noticeplayer
	waitmovement 0
	delay 60
	playbgm MUS_PS_WISE_OLD_MAN_THEME, 1
	getplayerxy VAR_TEMP_A, VAR_TEMP_B
	compare VAR_TEMP_B, 26
	goto_if_eq TRIGGER_WISEOLDMAN_RIVAL_MUSAPOINT_2
	compare VAR_TEMP_B, 27
	goto_if_eq TRIGGER_WISEOLDMAN_RIVAL_MUSAPOINT_3
	compare VAR_TEMP_B, 28
	goto_if_eq TRIGGER_WISEOLDMAN_RIVAL_MUSAPOINT_4
TRIGGER_WISEOLDMAN_RIVAL_MUSAPOINT_1:
	waitmovement 0
	namebox TRIGGER_WISEOLDMAN_RIVAL_MUSAPOINT_Text_0
	msgbox TRIGGER_WISEOLDMAN_RIVAL_MUSAPOINT_Text_1
	switch VAR_WISE_OLD_MAN_RIVAL
	case 10, TRIGGER_WISEOLDMAN_RIVAL_MUSAPOINT_10
	case 15, TRIGGER_WISEOLDMAN_RIVAL_MUSAPOINT_11
TRIGGER_WISEOLDMAN_RIVAL_MUSAPOINT_8:
	hidenamebox
	closemessage
	trainerbattle_no_intro TRAINER_RIVAL_WISE_OLD_MAN_3, TRIGGER_WISEOLDMAN_RIVAL_MUSAPOINT_Text_4
	namebox TRIGGER_WISEOLDMAN_RIVAL_MUSAPOINT_Text_0
	msgbox TRIGGER_WISEOLDMAN_RIVAL_MUSAPOINT_Text_5
	hidenamebox
	closemessage
	applymovement 20, movement_wom_musapoint_1
	waitmovement 0
	namebox TRIGGER_WISEOLDMAN_RIVAL_MUSAPOINT_Text_0
	msgbox TRIGGER_WISEOLDMAN_RIVAL_MUSAPOINT_Text_6
	applymovement 20, MOVEMENT_FACE_UP
	waitmovement 0
	msgbox TRIGGER_WISEOLDMAN_RIVAL_MUSAPOINT_Text_7
	applymovement 20, Common_Movement_FacePlayer
	waitmovement 0
	msgbox TRIGGER_WISEOLDMAN_RIVAL_MUSAPOINT_Text_8
	hidenamebox
	closemessage
	getplayerxy VAR_TEMP_A, VAR_TEMP_B
	compare VAR_TEMP_B, 26
	goto_if_eq TRIGGER_WISEOLDMAN_RIVAL_MUSAPOINT_13
	compare VAR_TEMP_B, 27
	goto_if_eq TRIGGER_WISEOLDMAN_RIVAL_MUSAPOINT_14
	compare VAR_TEMP_B, 28
	goto_if_eq TRIGGER_WISEOLDMAN_RIVAL_MUSAPOINT_15
TRIGGER_WISEOLDMAN_RIVAL_MUSAPOINT_12:
	waitmovement 0
	opendoor 18, 32
	waitdooranim
	applymovement 20, movement_ENTER_DOOR
	waitmovement 0
	removeobject 20
	setflag FLAG_TEMP_1F
	closedoor 18, 32
	setvar VAR_WISE_OLD_MAN_RIVAL, 20
	setvar VAR_TEMP_F, 0
	savebgm MUS_DUMMY
	fadedefaultbgm
	release
	end

TRIGGER_WISEOLDMAN_RIVAL_MUSAPOINT_2:
	applymovement 20, movement_wom_musapoint_01
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, MOVEMENT_FACE_DOWN
	goto TRIGGER_WISEOLDMAN_RIVAL_MUSAPOINT_1

TRIGGER_WISEOLDMAN_RIVAL_MUSAPOINT_3:
	applymovement 20, movement_wom_musapoint_02
	goto TRIGGER_WISEOLDMAN_RIVAL_MUSAPOINT_1

TRIGGER_WISEOLDMAN_RIVAL_MUSAPOINT_4:
	applymovement 20, movement_wom_musapoint_03
	goto TRIGGER_WISEOLDMAN_RIVAL_MUSAPOINT_1

TRIGGER_WISEOLDMAN_RIVAL_MUSAPOINT_10:
	msgbox TRIGGER_WISEOLDMAN_RIVAL_MUSAPOINT_Text_2
	goto TRIGGER_WISEOLDMAN_RIVAL_MUSAPOINT_8

TRIGGER_WISEOLDMAN_RIVAL_MUSAPOINT_11:
	msgbox TRIGGER_WISEOLDMAN_RIVAL_MUSAPOINT_Text_3
	goto TRIGGER_WISEOLDMAN_RIVAL_MUSAPOINT_8

TRIGGER_WISEOLDMAN_RIVAL_MUSAPOINT_13:
	applymovement 20, movement_wom_musapoint_04
	goto TRIGGER_WISEOLDMAN_RIVAL_MUSAPOINT_12

TRIGGER_WISEOLDMAN_RIVAL_MUSAPOINT_14:
	applymovement 20, movement_wom_musapoint_05
	goto TRIGGER_WISEOLDMAN_RIVAL_MUSAPOINT_12

TRIGGER_WISEOLDMAN_RIVAL_MUSAPOINT_15:
	applymovement 20, movement_wom_musapoint_06
	goto TRIGGER_WISEOLDMAN_RIVAL_MUSAPOINT_12


movement_wom_musapoint_noticeplayer:
	face_player
	emote_exclamation_mark
	delay_16
	step_end

movement_wom_musapoint_01:
	walk_left
	walk_up
	walk_left
	walk_up
	walk_left
	face_up
	step_end

movement_wom_musapoint_02:
	walk_left
	walk_up
	walk_up
	walk_left
	step_end

movement_wom_musapoint_03:
	walk_left
	walk_up
	walk_left
	step_end

movement_wom_musapoint_1:
	face_right
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	face_player
	step_end

movement_wom_musapoint_04:
	walk_right
	walk_down
	walk_down
	walk_right
	walk_down
	walk_down
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	face_up
	step_end

movement_wom_musapoint_05:
	walk_down
	walk_down
	walk_right
	walk_down
	walk_down
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	face_up
	step_end

movement_wom_musapoint_06:
	walk_down
	walk_right
	walk_down
	walk_down
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	face_up
	step_end

movement_ENTER_DOOR:
	walk_up
	set_invisible
	step_end

NPC_WISEOLDMAN_RIVAL_MUSAPOINT_PUB::
	lock
	faceplayer
	namebox TRIGGER_WISEOLDMAN_RIVAL_MUSAPOINT_Text_0
	checkitem ITEM_SURF_TOOL, 1
	compare VAR_RESULT, 0
	goto_if_ne NPC_WISEOLDMAN_RIVAL_MUSAPOINT_PUB_2
	msgbox NPC_WISEOLDMAN_RIVAL_MUSAPOINT_PUB_Text_1
NPC_WISEOLDMAN_RIVAL_MUSAPOINT_PUB_1:
	hidenamebox
	closemessage
	release
	end

NPC_WISEOLDMAN_RIVAL_MUSAPOINT_PUB_2:
	msgbox NPC_WISEOLDMAN_RIVAL_MUSAPOINT_PUB_Text_0
	goto NPC_WISEOLDMAN_RIVAL_MUSAPOINT_PUB_1


LUTHAS_QUEST::
	lock
	faceplayer
	namebox NPC_MUSA_POINT_Luthas_Text_0
	compare VAR_BANANA_BOAT_QUEST, 25
	goto_if_eq LUTHAS_QUEST_2
LUTHAS_QUEST_1:
	compare VAR_BANANA_BOAT_QUEST, 20
	goto_if_eq LUTHAS_QUEST_5
LUTHAS_QUEST_4:
	compare VAR_BANANA_BOAT_QUEST, 15
	goto_if_eq LUTHAS_QUEST_8
LUTHAS_QUEST_7:
	compare VAR_BANANA_BOAT_QUEST, 10
	goto_if_eq LUTHAS_QUEST_11
LUTHAS_QUEST_10:
	compare VAR_BANANA_BOAT_QUEST, 5
	goto_if_eq LUTHAS_QUEST_14
LUTHAS_QUEST_13:
	compare VAR_BANANA_BOAT_QUEST, 0
	goto_if_eq LUTHAS_QUEST_17
LUTHAS_QUEST_16:
	msgbox LUTHAS_QUEST_Text_0
	return

LUTHAS_QUEST_2:
	goto LUTHAS_QUEST_PART_6
	goto LUTHAS_QUEST_1

LUTHAS_QUEST_5:
	goto LUTHAS_QUEST_PART_5
	goto LUTHAS_QUEST_4

LUTHAS_QUEST_8:
	goto LUTHAS_QUEST_PART_4
	goto LUTHAS_QUEST_7

LUTHAS_QUEST_11:
	goto LUTHAS_QUEST_PART_3
	goto LUTHAS_QUEST_10

LUTHAS_QUEST_14:
	goto LUTHAS_QUEST_PART_2
	goto LUTHAS_QUEST_13

LUTHAS_QUEST_17:
	goto LUTHAS_QUEST_PART_1
	goto LUTHAS_QUEST_16


LUTHAS_QUEST_PART_1::
	msgbox LUTHAS_QUEST_PART_1_Text_0
	checkitem ITEM_SURF_TOOL, 1
	compare VAR_RESULT, 0
	goto_if_ne LUTHAS_QUEST_PART_1_2
	msgbox LUTHAS_QUEST_PART_1_Text_3
	msgbox LUTHAS_QUEST_PART_1_Text_4
LUTHAS_QUEST_PART_1_1:
	msgbox LUTHAS_QUEST_PART_1_Text_5, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne LUTHAS_QUEST_PART_1_6
	msgbox LUTHAS_QUEST_PART_1_Text_7
LUTHAS_QUEST_PART_1_5:
	hidenamebox
	closemessage
	release
	end

LUTHAS_QUEST_PART_1_2:
	msgbox LUTHAS_QUEST_PART_1_Text_1
	msgbox LUTHAS_QUEST_PART_1_Text_2
	goto LUTHAS_QUEST_PART_1_1

LUTHAS_QUEST_PART_1_6:
	closemessage
	hidenamebox
	startquest QUEST_BANANA_BOAT
	setvar VAR_BANANA_BOAT_QUEST, 5
	namebox NPC_MUSA_POINT_Luthas_Text_0
	msgbox LUTHAS_QUEST_PART_1_Text_6
	goto LUTHAS_QUEST_PART_1_5


LUTHAS_QUEST_PART_2::
	checkitem ITEM_BANANA, 10
	compare VAR_RESULT, 0
	goto_if_eq LUTHAS_QUEST_PART_2_2
	msgbox LUTHAS_QUEST_PART_2_Text_2, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_eq LUTHAS_QUEST_PART_2_5
	removeitem ITEM_BANANA, 10
	addvar VAR_BANANA_COUNT, 10
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_BANANA_BOAT, 0
	msgbox LUTHAS_QUEST_PART_2_Text_4
	closemessage
	hidenamebox
	checkitem ITEM_SURF_TOOL, 1
	compare VAR_RESULT, 0
	goto_if_eq LUTHAS_QUEST_PART_2_11
LUTHAS_QUEST_PART_2_10:
	giveitem ITEM_PURPLE_SWEETS, 5
	giveitem ITEM_PINEAPPLE, 1
	questmenu QUEST_MENU_COMPLETE_QUEST, QUEST_BANANA_BOAT
	setvar VAR_BANANA_BOAT_QUEST, 10
	closemessage
	hidenamebox
	release
	end

LUTHAS_QUEST_PART_2_2:
	checkitem ITEM_BANANA, 1
	compare VAR_RESULT, 0
	goto_if_ne LUTHAS_QUEST_PART_2_8
LUTHAS_QUEST_PART_2_7:
	msgbox LUTHAS_QUEST_PART_2_Text_1
	closemessage
	hidenamebox
	release
	end

LUTHAS_QUEST_PART_2_5:
	msgbox LUTHAS_QUEST_PART_2_Text_3
	closemessage
	hidenamebox
	release
	end

LUTHAS_QUEST_PART_2_8:
	msgbox LUTHAS_QUEST_PART_2_Text_0
	goto LUTHAS_QUEST_PART_2_7

LUTHAS_QUEST_PART_2_11:
	giveitem ITEM_SURF_TOOL, 1
	namebox NPC_MUSA_POINT_Luthas_Text_0
	msgbox LUTHAS_QUEST_PART_2_Text_5
	closemessage
	hidenamebox
	goto LUTHAS_QUEST_PART_2_10


LUTHAS_QUEST_PART_3::
	msgbox LUTHAS_QUEST_PART_3_Text_0
	checkitem ITEM_BANANA, 20
	compare VAR_RESULT, 0
	goto_if_ne LUTHAS_QUEST_PART_3_2
LUTHAS_QUEST_PART_3_1:
	hidenamebox
	closemessage
	release
	end

LUTHAS_QUEST_PART_3_2:
	msgbox LUTHAS_QUEST_PART_2_Text_2, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_eq LUTHAS_QUEST_PART_3_5
	removeitem ITEM_BANANA, 20
	addvar VAR_BANANA_COUNT, 20
	setvar VAR_BANANA_BOAT_QUEST, 15
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_BANANA_BOAT, 1
	msgbox LUTHAS_QUEST_PART_3_Text_2
	hidenamebox
	closemessage
	giveitem ITEM_TM12_MISTY_TERRAIN, 1
	goto LUTHAS_QUEST_PART_3_1

LUTHAS_QUEST_PART_3_5:
	msgbox LUTHAS_QUEST_PART_3_Text_1
	hidenamebox
	closemessage
	release
	end


LUTHAS_QUEST_PART_4::
	msgbox LUTHAS_QUEST_PART_4_Text_0
	setvar VAR_BANANA_BOAT_QUEST, 20
	hidenamebox
	closemessage
	release
	end


LUTHAS_QUEST_PART_5::
	msgbox LUTHAS_QUEST_PART_5_Text_0
	checkitem ITEM_BANANA, 30
	compare VAR_RESULT, 0
	goto_if_ne LUTHAS_QUEST_PART_5_2
LUTHAS_QUEST_PART_5_1:
	hidenamebox
	closemessage
	release
	end

LUTHAS_QUEST_PART_5_2:
	msgbox LUTHAS_QUEST_PART_2_Text_2, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_eq LUTHAS_QUEST_PART_5_5
	removeitem ITEM_BANANA, 30
	addvar VAR_BANANA_COUNT, 30
	msgbox LUTHAS_QUEST_PART_3_Text_2
	hidenamebox
	closemessage
	call GIVE_RANDOM_ITEM_28
	compare VAR_BANANA_COUNT, 120
	goto_if_ge LUTHAS_QUEST_PART_5_7
	goto LUTHAS_QUEST_PART_5_1

LUTHAS_QUEST_PART_5_5:
	msgbox LUTHAS_QUEST_PART_5_Text_1
	hidenamebox
	closemessage
	release
	end

LUTHAS_QUEST_PART_5_7:
	namebox NPC_MUSA_POINT_Luthas_Text_0
	msgbox LUTHAS_QUEST_PART_5_Text_2
	closemessage
	hidenamebox
	call EventScript_GiftMonster_Banana
	msgbox LUTHAS_QUEST_PART_5_Text_3
	setvar VAR_BANANA_BOAT_QUEST, 25
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_BANANA_BOAT, 3
	goto LUTHAS_QUEST_PART_5_1


LUTHAS_QUEST_PART_6::
	msgbox LUTHAS_QUEST_PART_5_Text_0
	checkitem ITEM_BANANA, 30
	compare VAR_RESULT, 0
	goto_if_ne LUTHAS_QUEST_PART_6_2
LUTHAS_QUEST_PART_6_1:
	hidenamebox
	closemessage
	release
	end

LUTHAS_QUEST_PART_6_2:
	msgbox LUTHAS_QUEST_PART_2_Text_2, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_eq LUTHAS_QUEST_PART_6_5
	removeitem ITEM_BANANA, 30
	addvar VAR_BANANA_COUNT, 30
	msgbox LUTHAS_QUEST_PART_3_Text_2
	hidenamebox
	closemessage
	call GIVE_RANDOM_ITEM_28
	compare VAR_BANANA_COUNT, 1000
	goto_if_ge LUTHAS_QUEST_PART_6_7
	goto LUTHAS_QUEST_PART_6_1

LUTHAS_QUEST_PART_6_5:
	msgbox LUTHAS_QUEST_PART_5_Text_1
	hidenamebox
	closemessage
	release
	end

LUTHAS_QUEST_PART_6_7:
	namebox NPC_MUSA_POINT_Luthas_Text_0
	msgbox LUTHAS_QUEST_PART_5_Text_2
	closemessage
	hidenamebox
	msgbox LUTHAS_QUEST_PART_5_Text_3
	goto LUTHAS_QUEST_PART_6_1


SIGN_BANANA_COUNT::
	buffernumberstring 0, VAR_BANANA_COUNT
	msgbox SIGN_BANANA_COUNT_Text_0
	closemessage
	end


TOGGLE_INVERSE_BATTLE::
	setflag FLAG_TOGGLE_INVERSE_BATTLE
	msgbox TOGGLE_INVERSE_BATTLE_Text_0
	closemessage
	end


BATTLE_scorp::
	setwildbattle SPECIES_PET_ROCK, 50, ITEM_NONE
	dowildbattle
	end


QUEST_TESTER::
	msgbox QUEST_TESTER_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne QUEST_TESTER_2
QUEST_TESTER_1:
	msgbox QUEST_TESTER_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne QUEST_TESTER_5
QUEST_TESTER_4:
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_MVM_CHAMPIONSHIPS, 1
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_MVM_CHAMPIONSHIPS, 2
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_MVM_CHAMPIONSHIPS, 3
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_MVM_CHAMPIONSHIPS, 4
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_MVM_CHAMPIONSHIPS, 5
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_MVM_CHAMPIONSHIPS, 6
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_MVM_CHAMPIONSHIPS, 7
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_MVM_CHAMPIONSHIPS, 8
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_MVM_CHAMPIONSHIPS, 9
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_MVM_CHAMPIONSHIPS, 10
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_MVM_CHAMPIONSHIPS, 11
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_MVM_CHAMPIONSHIPS, 12
	startquest QUEST_MAIN_STORY
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_MAIN_STORY, 0
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_MAIN_STORY, 1
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_MAIN_STORY, 2
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_MAIN_STORY, 3
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_MAIN_STORY, 4
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_MAIN_STORY, 5
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_MAIN_STORY, 6
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_MAIN_STORY, 7
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_MAIN_STORY, 8
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_MAIN_STORY, 9
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_MAIN_STORY, 10
	startquest QUEST_MITHRILMAN_QUEST
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_MITHRILMAN_QUEST, 0
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_MITHRILMAN_QUEST, 1
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_MITHRILMAN_QUEST, 2
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_MITHRILMAN_QUEST, 3
	closemessage
	end

QUEST_TESTER_2:
	startquest QUEST_MVM_CHAMPIONSHIPS
	goto QUEST_TESTER_1

QUEST_TESTER_5:
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_MVM_CHAMPIONSHIPS, 0
	goto QUEST_TESTER_4


EventScript_GiftMonster_Banana::
	setvar VAR_TEMP_1, SPECIES_AGRITHNANA
	givemon SPECIES_AGRITHNANA, 30, ITEM_NONE
	goto EventScript_GiftMonster_Start
	return


EventScript_GiftMonster_Start::
	compare VAR_RESULT, 0
	goto_if_eq EventScript_GiftMonster_SendParty
	compare VAR_RESULT, 1
	goto_if_eq EventScript_GiftMonster_SendPC
	goto Common_EventScript_NoMoreRoomForPokemon
	end


EventScript_GiftMonster_SendParty::
	call EventScript_GiftMonster_ReceivedFanfare
	msgbox EventScript_GiftMonster_SendParty_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq EventScript_GiftMonster_Received
	call Common_EventScript_GetGiftMonPartySlot
	call Common_EventScript_NameReceivedPartyMon
	goto EventScript_GiftMonster_Received
	end


EventScript_GiftMonster_SendPC::
	call EventScript_GiftMonster_ReceivedFanfare
	msgbox EventScript_GiftMonster_SendParty_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq EventScript_GiftMonster_TransferredToPC
	call Common_EventScript_NameReceivedBoxMon
	goto EventScript_GiftMonster_TransferredToPC
	end


EventScript_GiftMonster_TransferredToPC::
	call Common_EventScript_TransferredToPC
	goto EventScript_GiftMonster_Received
	end


EventScript_GiftMonster_ReceivedFanfare::
	bufferspeciesname 1, VAR_TEMP_1
	playfanfare MUS_OBTAIN_ITEM
	msgbox EventScript_GiftMonster_ReceivedFanfare_Text_0
	waitmessage
	waitfanfare
	bufferspeciesname 0, VAR_TEMP_1
	return


EventScript_GiftMonster_Received::
	releaseall
	return


multipartnerBattle_Zanik::
	lock
	faceplayer
	namebox multipartnerBattle_Zanik_Text_0
	msgbox multipartnerBattle_Zanik_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne multipartnerBattle_Zanik_2
	msgbox multipartnerBattle_Zanik_Text_3
	hidenamebox
	closemessage
	release
	end

multipartnerBattle_Zanik_2:
	loadword 0, Following_Zanik
	setfollower 25, 0x100
	closemessage
	hidenamebox
	playfanfare MUS_OBTAIN_SYMBOL
	msgbox multipartnerBattle_Zanik_Text_2
	waitfanfare
	closemessage
	hidenamebox
	setflag FLAG_PARTNER_BATTLE
	setvar VAR_PARTNER_TRAINER, TRAINER_ZANIK_HAM
	setvar VAR_PARTNER_SPRITE, TRAINER_BACK_PIC_ZANIK
	release
	end


Following_Zanik::
	lock
	facefollower
	namebox multipartnerBattle_Zanik_Text_0
	msgbox Following_Zanik_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne Following_Zanik_2
	msgbox Following_Zanik_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne Following_Zanik_5
Following_Zanik_4:
	hidenamebox
	closemessage
	release
	end

Following_Zanik_2:
	setflag FLAG_TOGGLE_FORCED_WILD_DOUBLE_BATTLES
	hidenamebox
	closemessage
	release
	end

Following_Zanik_5:
	msgbox Following_Zanik_Text_2
	clearflag FLAG_PARTNER_BATTLE
	clearflag FLAG_TOGGLE_FORCED_WILD_DOUBLE_BATTLES
	destroyfollower
	goto Following_Zanik_4


NPC_MUSAPOINT_SAILOR_Text_0:
	.string "Officer$"

NPC_MUSAPOINT_SAILOR_Text_1:
	.string "I've confiscated your Karamja Rum.\p"
	.string "You're in for da cage now.$"

NPC_MUSAPOINT_SAILOR_Text_2:
	.string "Hi, there would you like to board the\n"
	.string "boat to Port Sarim?$"

NPC_MUSAPOINT_SAILOR_Text_3:
	.string "All aboard!\l"
	.string "We set sail for Port Sarim!$"

NPC_MUSAPOINT_SAILOR_Text_4:
	.string "Suit yourself.$"

NPC_LegendArts_Text_0:
	.string "LEGEND ARTS$"

NPC_LegendArts_Text_1:
	.string "What…{PAUSE 15}{PAUSE 15}…{PAUSE 15}{PAUSE 15}…\n"
	.string "How did I get here?$"

SIGNPOST_MUSA_POINT_Text_0:
	.string "Musa Point - The best bananas in all of\n"
	.string "Karamja!$"

SIGNPOST_BOAT_FOR_SALE_Text_0:
	.string "Boat for Sale!\p"
	.string "See Luthas inside for more details.$"

NPC_MUSA_POINT_1_Text_0:
	.string "Sad Pirate$"

NPC_MUSA_POINT_1_Text_1:
	.string "Arr…{PAUSE 32}…\n"
	.string "{PAUSE 32}Sailing…{PAUSE 32}…\p"
	.string "One day…{PAUSE 32}…{PAUSE 32}\n"
	.string "One…{PAUSE 32} day…{PAUSE 32}…$"

NPC_MUSA_POINT_2_Text_0:
	.string "Pirate$"

NPC_MUSA_POINT_2_Text_1:
	.string "30 years ago I buried me treasure here.\p"
	.string "Now I've spent 5 years digging on the\n"
	.string "beach to find it only to realize that\l"
	.string "maybe I buried it in Brimhaven?$"

NPC_MUSA_POINT_3_Text_0:
	.string "The Customs Officers constantly keep\n"
	.string "us under supervision, apparently they\l"
	.string "don't want Karamjan Rum to reach the\l"
	.string "mainland.\p"
	.string "It's all a conspiracy to keep the White\n"
	.string "Knights in power I tell you!$"

NPC_MUSA_POINT_4_Text_0:
	.string "Hunter$"

NPC_MUSA_POINT_4_Text_1:
	.string "Up north is a fishing spot, you might\n"
	.string "find yourself a battle there with the\l"
	.string "local fishers.$"

NPC_MUSA_POINT_5_Text_0:
	.string "I once saw a Polar Bear in this well, but\n"
	.string "no one believes me.\p"
	.string "They all just think I was drunk.\p"
	.string "But I wasn't!\p"
	.string "… Or was I…$"

NPC_MUSA_POINT_6_Text_0:
	.string "Man$"

NPC_MUSA_POINT_6_Text_1:
	.string "The banana farm is the pride and joy of\n"
	.string "Musa Point.\p"
	.string "That or the bar is the only thing\n"
	.string "keeping us a landmark really.$"

NPC_MUSA_POINT_7_Text_0:
	.string "Welcome to Karamja.\p"
	.string "Make sure to prepare some anti-poisons\n"
	.string "and some choc-sunday's for your\l"
	.string "monsters.$"

NPC_MUSA_POINT_8_Text_0:
	.string "Sorry we've had an incident of someone\n"
	.string "trying to smuggle some Rum to the\l"
	.string "mainland.\p"
	.string "Our ships won't be sailing for some time\n"
	.string "while we check the cargo.$"

NPC_MUSA_POINT_8_Text_1:
	.string "This ship sails all over the land.\p"
	.string "That was true until all of the ports\n"
	.string "were closed off, now we sail all around\l"
	.string "Musa Point.$"

NPC_MUSA_POINT_9_Text_0:
	.string "Fisherman$"

NPC_MUSA_POINT_9_Text_1:
	.string "Fishing Levels?$"

NPC_MUSA_POINT_10_Text_0:
	.string "Firemaker$"

NPC_MUSA_POINT_10_Text_1:
	.string "Fire, anyone?$"

NPC_MUSA_POINT_Luthas_Text_0:
	.string "Luthas$"

NPC_MUSA_POINT_Luthas_Text_1:
	.string "Bananas make the world go round.\p"
	.string "Would you like to buy one?$"

NPC_MONKEY_BLOCK_Text_0:
	.string "Monkey$"

NPC_MONKEY_BLOCK_Text_1:
	.string "Oook, Ook!$"

NPC_MONKEY_BLOCK_Text_2:
	.string "This monkey is bananas!$"

BATTLE_MUSA_POINT_TRAINER_1_Text_0:
	.string "My Fishing level is 62.$"

BATTLE_MUSA_POINT_TRAINER_1_Text_1:
	.string "I can only use quick chat.$"

BATTLE_MUSA_POINT_TRAINER_1_Text_2:
	.string "HelpImMuted$"

BATTLE_MUSA_POINT_TRAINER_2_Text_0:
	.string "Why am I here?\p"
	.string "Fight me to find out!$"

BATTLE_MUSA_POINT_TRAINER_2_Text_1:
	.string "I love fishing but I cannot afford\n"
	.string "membership.\p"
	.string "That is why I am here.$"

BATTLE_MUSA_POINT_TRAINER_2_Text_2:
	.string "Fishin4Bond$"

BATTLE_MUSA_POINT_TRAINER_3_Text_0:
	.string "Noob fishing spot tells me I need a\n"
	.string "higher fishing level to be here.\p"
	.string "Now I am angry!$"

BATTLE_MUSA_POINT_TRAINER_3_Text_1:
	.string "My fishing level is 14.$"

BATTLE_MUSA_POINT_TRAINER_3_Text_2:
	.string "New2this$"

BATTLE_MUSA_POINT_TRAINER_4_Text_0:
	.string "Life is like a fishing spot, you never\n"
	.string "know what you are going to get.$"

BATTLE_MUSA_POINT_TRAINER_4_Text_1:
	.string "Unless you fish for lobsters, you only\n"
	.string "get lobsters like this.$"

BATTLE_MUSA_POINT_TRAINER_4_Text_2:
	.string "Lobs4Sale$"

BATTLE_MUSA_POINT_TRAINER_4_Text_3:
	.string "Life is like a fishing spot, you never\n"
	.string "know what you are going to get.\p"
	.string "Unless you fish for lobsters, you only\n"
	.string "get lobsters like this.$"

NPC_MUSA_POINT_SHOP_1_Text_0:
	.string "That Tzhaar Gym was something else, I\n"
	.string "had to stock up on Drunk Dragon's just\l"
	.string "to make it through the waves.$"

NEWSLETTER_1_Text_0:
	.string "Newsletter Volume 1.\n"
	.string "Penguins, love, music!\p"
	.string "Would you like to read it?$"

NEWSLETTER_1_Text_1:
	.string "While adventurering you may\n"
	.string "occasionally hear some unusual music\l"
	.string "playing far off in the distance.\p"
	.string "You may think to yourself, what is this?\p"
	.string "Why, it is none other than penguins!\p"
	.string "Ever since Ping & Pong started up their\n"
	.string "music band, all penguins have joined in\l"
	.string "on the fun.\p"
	.string "Keep your eyes peeled, follow the\n"
	.string "source of the music and you will find\l"
	.string "penguins!\p"
	.string "- Canada Girll$"

NEWSLETTER_2_Text_0:
	.string "Newsletter Volume 2.\n"
	.string "Penguins and how to spot them!\p"
	.string "Would you like to read it?$"

NEWSLETTER_2_Text_1:
	.string "Penguins are sneaky, they disgusise\n"
	.string "themselves in plain sight and blend in\l"
	.string "with their surroundings.\p"
	.string "Some say they have seen them\n"
	.string "disgusised as barrels or bushes and\l"
	.string "some say they have even been spotted\l"
	.string "as toadstools!\p"
	.string "One farmer in Lumbridge is adamant that\n"
	.string "they disgusised themselves as one of\l"
	.string "his sheep in the herd.\p"
	.string "But could this be true?\p"
	.string "- Canada Girll$"

NEWSLETTER_3_Text_0:
	.string "Newsletter Volume 3.\n"
	.string "Cupholders.\p"
	.string "Would you like to read it?$"

NEWSLETTER_3_Text_1:
	.string "Cupholders. They hold your cups while\n"
	.string "you do other things.\p"
	.string "- Demonheadge$"

NEWSLETTER_4_Text_0:
	.string "Newsletter Volume 4.\n"
	.string "Mysterious Mounds.\p"
	.string "Would you like to read it?$"

NEWSLETTER_4_Text_1:
	.string "Shh, the ground.\n"
	.string "It moves ever so slightly.\p"
	.string "Be careful as Wyrms are buried deep\n"
	.string "within the sands!\p"
	.string "They change type depending on their\n"
	.string "enviorment.\p"
	.string "Some say you can force these changes\n"
	.string "to happen with magic.\p"
	.string "I shall continue to track them.\n"
	.string "And you should too.\p"
	.string "- Strykewyrm Jim.$"

NEWSLETTER_5_Text_0:
	.string "Newsletter Volume 5.\n"
	.string "Gotta go fast!\p"
	.string "Would you like to read it?$"

NEWSLETTER_5_Text_1:
	.string "Got sore feet?\n"
	.string "{PAUSE 15}Run energy drained?\p"
	.string "Agility level too low?\n"
	.string "{PAUSE 15}Well be exhausted no more!\p"
	.string "My Terrorbird can fix that in a jiffy!\n"
	.string "Come see them in Rimmington.\p"
	.string "- Gnome boi Kevin$"

NEWSLETTER_6_Text_0:
	.string "Newsletter Volume 6.\n"
	.string "A Button.\p"
	.string "Would you like to read it?$"

NEWSLETTER_6_Text_1:
	.string "Hello, need help?\p"
	.string "Where do I go next?\p"
	.string "Are you stuck?\p"
	.string "Does that door not open?\p"
	.string "Just try pressing the A button!\p"
	.string "What is the A button?\p"
	.string "Tehehe, aren't you silly.\p"
	.string "You know what the A button is.\p"
	.string "The A button can even help you find\n"
	.string "hidden items.\p"
	.string "Just remember, when in doubt.\n"
	.string "Just press the A button.\p"
	.string "- Anubtot.$"

NEWSLETTER_7_Text_0:
	.string "Newsletter Volume 7.\n"
	.string "To be a slayer master.\p"
	.string "Would you like to read it?$"

NEWSLETTER_7_Text_1:
	.string "To become the best like no one ever was,\n"
	.string "you must do 4 simple things.\p"
	.string "Step 1, Get your task from a slayer\n"
	.string "master.\n"
	.string "Step 2, Complete your task.\p"
	.string "Step 3, ???.\n"
	.string "Step 4, Profit.\p"
	.string "- Wannabe Slayer Master, Erskine$"

NEWSLETTER_8_Text_0:
	.string "Newsletter Volume 8.\n"
	.string "Sparkle, sparkle.\p"
	.string "Would you like to read it?$"

NEWSLETTER_8_Text_1:
	.string "HIDDEN ITEMS!\p"
	.string "You want them, don't you?\p"
	.string "They are hidden everywhere.\p"
	.string "But how do you find them?\p"
	.string "Solve this and information shall be\n"
	.string "yours:\p"
	.string "In the town, 'A KROC RV'\n"
	.string "I am found.\p"
	.string "Crests of royality are where, I dwell.\n"
	.string "Sit with me and drink tea, times 3.\p"
	.string "All will be revealed.\n"
	.string "- ???$"

NEWSLETTER_9_Text_0:
	.string "Newsletter Volume 9.\n"
	.string "???.\p"
	.string "Would you like to read it?$"

NEWSLETTER_9_Text_1:
	.string "?\p"
	.string "- ???$"

NEWSLETTER_13_Text_0:
	.string "Newsletter Volume 13.\p"
	.string "The end is neigh.\p"
	.string "Would you like to read it?$"

NEWSLETTER_13_Text_1:
	.string "Sadly the time as come to end..\p"
	.string "This will be the last newsletter in this\n"
	.string "series that I will be publishing.\p"
	.string "I thank you for reading.\p"
	.string "- Baraek$"

EventScript_BananaTree_Text_0:
	.string "There are a bunch of Bananas on this\n"
	.string "tree!$"

EventScript_BananaTree_Text_1:
	.string "You failed to pick a Banana…$"

EventScript_BananaTree_Text_2:
	.string "You picked a Banana!$"

EventScript_BananaGround_Text_0:
	.string "This banana smells.$"

EventScript_BananaGround_Text_1:
	.string "There are fresher bananas in the trees.$"

EventScript_BananaGround_Text_2:
	.string "I've heard of potassium but this isn't\n"
	.string "it.$"

EventScript_BananaGround_Text_3:
	.string "As you reach for the banana you sense\n"
	.string "the gaze a monkey in the distance.\p"
	.string "You decide to leave it.$"

EventScript_BananaGround_Text_4:
	.string "Ew, looks like someone stepped on this\n"
	.string "banana.$"

QUEST_BOAT_MUSA_POINT_Smuggler_Text_0:
	.string "Quester$"

QUEST_BOAT_MUSA_POINT_Smuggler_Text_1:
	.string "Awh man, Frank set me up…$"

TRIGGER_WISEOLDMAN_RIVAL_MUSAPOINT_Text_0:
	.string "Wise Old Man$"

TRIGGER_WISEOLDMAN_RIVAL_MUSAPOINT_Text_1:
	.string "Well then, it truly has been awhile.\n"
	.string "You look quite different since we last\l"
	.string "met.$"

TRIGGER_WISEOLDMAN_RIVAL_MUSAPOINT_Text_2:
	.string "It was a shame you didn't take me up on\n"
	.string "the offer to meet within Asgarnia\l"
	.string "Dungeon.\p"
	.string "It cannot be helped I suppose.\p"
	.string "How about we check just how much you\n"
	.string "have truly grown.$"

TRIGGER_WISEOLDMAN_RIVAL_MUSAPOINT_Text_3:
	.string "By the way, did you end up meeting with\n"
	.string "Melzar?\p"
	.string "How did that go, did he put up a good\n"
	.string "fight?\p"
	.string "That man loves his cabbages.\p"
	.string "Enough chit chat, this old man wants to\n"
	.string "see how much you've grown since our\l"
	.string "last encounter!$"

TRIGGER_WISEOLDMAN_RIVAL_MUSAPOINT_Text_4:
	.string "You are really getting this old man riled\n"
	.string "up.$"

TRIGGER_WISEOLDMAN_RIVAL_MUSAPOINT_Text_5:
	.string "So you got stranded on Crandor, passed\n"
	.string "through a volcano passage underneath\l"
	.string "Karamja Volcano, met with the Tzhaar\l"
	.string "and now you are here?\p"
	.string "You certainly have been busy haven't\n"
	.string "you.\p"
	.string "You should really take the MvM\n"
	.string "championship seriously, I think you\l"
	.string "might just make it to the end.$"

TRIGGER_WISEOLDMAN_RIVAL_MUSAPOINT_Text_6:
	.string "Although that might have to be put on\n"
	.string "hold for a bit as it seems someone was\l"
	.string "caught smuggling Karmajan Rum.\p"
	.string "All of the boats are in lockdown until\n"
	.string "the matter is resolved.\p"
	.string "If you don't want to wait around with\n"
	.string "me, I heard Luthas was selling a boat.$"

TRIGGER_WISEOLDMAN_RIVAL_MUSAPOINT_Text_7:
	.string "He lives in that shack just over there.\p"
	.string "Go give him a visit if you're interested.$"

TRIGGER_WISEOLDMAN_RIVAL_MUSAPOINT_Text_8:
	.string "Me?\p"
	.string "I think I might go visit the pub for a\n"
	.string "drink.\p"
	.string "I truly am looking forward to seeing\n"
	.string "your MvM championship progress.\p"
	.string "Until next time {PLAYER}.$"

NPC_WISEOLDMAN_RIVAL_MUSAPOINT_PUB_Text_0:
	.string "Oh, I see you have the brought the\n"
	.string "boat.\p"
	.string "You go on ahead and sail back to the\n"
	.string "mainland, this old man will wait for the\l"
	.string "matter at the docks to resolve.$"

NPC_WISEOLDMAN_RIVAL_MUSAPOINT_PUB_Text_1:
	.string "Hello again {PLAYER}.\p"
	.string "Did you end up going to see Luthas\n"
	.string "about that boat?$"

LUTHAS_QUEST_Text_0:
	.string "Hello, I run the banana plantation. How\n"
	.string "many I help you today?$"

LUTHAS_QUEST_PART_1_Text_0:
	.string "Hello, I run the banana plantation.\p"
	.string "How many I help you today?\p"
	.string "Ah, you interested in the boat that is\n"
	.string "for sale?$"

LUTHAS_QUEST_PART_1_Text_1:
	.string "Oh, I see you already have a boat.\p"
	.string "Maybe you could help me with a little\n"
	.string "job then.$"

LUTHAS_QUEST_PART_1_Text_2:
	.string "You see I've injured my back and now am\n"
	.string "running behind on the shipment of\l"
	.string "bananas.\p"
	.string "If you could go into the plantation and\n"
	.string "pick 10 bananas for me.\p"
	.string "I've got some nicknacks you can have if\n"
	.string "you help me with this job.$"

LUTHAS_QUEST_PART_1_Text_3:
	.string "How much?\p"
	.string "You are very eager aren't you.\p"
	.string "I can sell it to you but not for gold\n"
	.string "pieces.\p"
	.string "What I need is an employee.$"

LUTHAS_QUEST_PART_1_Text_4:
	.string "You see I've injured my back and now am\n"
	.string "running behind on the shipment of\l"
	.string "bananas.\p"
	.string "If you could go into the plantation and\n"
	.string "pick 10 bananas for me then you can\l"
	.string "have this boat.$"

LUTHAS_QUEST_PART_1_Text_5:
	.string "Is that a deal?$"

LUTHAS_QUEST_PART_1_Text_6:
	.string "Great!\p"
	.string "Remember I need 10 bananas from the\n"
	.string "plantation.\p"
	.string "Bring them back to me when you have\n"
	.string "them.$"

LUTHAS_QUEST_PART_1_Text_7:
	.string "…\p"
	.string "Well if you change your mind you know\n"
	.string "where I am.$"

LUTHAS_QUEST_PART_2_Text_0:
	.string "Great it looks like you have at least 1\n"
	.string "Banana.\p"
	.string "But I need 10 in total.\p"
	.string "If you could bring them to me in bulk\n"
	.string "that would be helpful.$"

LUTHAS_QUEST_PART_2_Text_1:
	.string "Remember I need 10 bananas from the\n"
	.string "plantation.\p"
	.string "You can find the plantation next door.\p"
	.string "There should be some bananas on the\n"
	.string "trees.$"

LUTHAS_QUEST_PART_2_Text_2:
	.string "Can I have those bananas to fill the\n"
	.string "order?$"

LUTHAS_QUEST_PART_2_Text_3:
	.string "Oh…$"

LUTHAS_QUEST_PART_2_Text_4:
	.string "Thank you, as promised here is your\n"
	.string "reward.$"

LUTHAS_QUEST_PART_2_Text_5:
	.string "As an extra thanks for helping me have\n"
	.string "these.$"

LUTHAS_QUEST_PART_3_Text_0:
	.string "Thank you for helping me earlier.\p"
	.string "If you bring me another 20 Bananas I\n"
	.string "can reward you with this neat Scroll.$"

LUTHAS_QUEST_PART_3_Text_1:
	.string "What a shame, I'll hang onto this Scroll\n"
	.string "incase you change your mind.$"

LUTHAS_QUEST_PART_3_Text_2:
	.string "My order is filled, thank you!\p"
	.string "Have this as a reward.$"

LUTHAS_QUEST_PART_4_Text_0:
	.string "Back again?\p"
	.string "I always have more work if you are\n"
	.string "interested.\p"
	.string "Could you please get me another 30\n"
	.string "bananas.\p"
	.string "In terms of a reward I'm sure I can find\n"
	.string "something for you.$"

LUTHAS_QUEST_PART_5_Text_0:
	.string "Could you bring me another 30 bananas?$"

LUTHAS_QUEST_PART_5_Text_1:
	.string "What a shame, come see me if you change\n"
	.string "your mind.$"

LUTHAS_QUEST_PART_5_Text_2:
	.string "Hang on a minute.\p"
	.string "I found this the other day I would like\n"
	.string "you to have it for helping me out so\l"
	.string "much.$"

LUTHAS_QUEST_PART_5_Text_3:
	.string "I hope you will keep assisting me in the\n"
	.string "future.$"

SIGN_BANANA_COUNT_Text_0:
	.string "{PLAYER}'s Banana Count:\n"
	.string "{STR_VAR_1}.$"

TOGGLE_INVERSE_BATTLE_Text_0:
	.string "Inverse battle - ENABLED$"

QUEST_TESTER_Text_0:
	.string "Start MVM CHAMPIONSHIPS quest?$"

QUEST_TESTER_Text_1:
	.string "Obtain Lumbridge Badge?$"

EventScript_GiftMonster_SendParty_Text_0:
	.string "Would you like to give your monster a\n"
	.string "nickname?$"

EventScript_GiftMonster_ReceivedFanfare_Text_0:
	.string "{PLAYER} obtained {STR_VAR_2}.$"

multipartnerBattle_Zanik_Text_0:
	.string "Zanik$"

multipartnerBattle_Zanik_Text_1:
	.string "May we adventure together?$"

multipartnerBattle_Zanik_Text_2:
	.string "ZANIK JOINS THE PARTY!$"

multipartnerBattle_Zanik_Text_3:
	.string "Maybe some other time then…$"

Following_Zanik_Text_0:
	.string "Did you want to encounter two wild\n"
	.string "monsters at once?$"

Following_Zanik_Text_1:
	.string "What's wrong {PLAYER}?\p"
	.string "Did you want to stop our adventure?$"

Following_Zanik_Text_2:
	.string "Oh, that's a shame I was having so much\n"
	.string "fun…\p"
	.string "See you around…$"
