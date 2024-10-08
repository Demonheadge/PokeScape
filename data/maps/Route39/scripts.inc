Route39_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route39_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Route39_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setvar VAR_EVOLUTION_MAP_STATE, 15
	call PENGUIN_EVENT
	call WEATHER_CHANGE_AREA_MUSAPOINT
	return


ENCOUNTER_PENGUIN_BARREL_ROUTE39::
	lock
	faceplayer
	namebox ENCOUNTER_PENGUIN_BARREL_ROUTE39_Text_0
	playmoncry SPECIES_PENGUIN_DISGUISE_BOX_FORM, 0
	msgbox ENCOUNTER_PENGUIN_BARREL_ROUTE39_Text_1
	waitmoncry
	hidenamebox
	closemessage
	delay 1
	setwildbattle SPECIES_PENGUIN_DISGUISE_BOX_FORM, 30, ITEM_NONE
	dowildbattle
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq ENCOUNTER_PENGUIN_BARREL_ROUTE39_2
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq ENCOUNTER_PENGUIN_BARREL_ROUTE39_2
ENCOUNTER_PENGUIN_BARREL_ROUTE39_1:
	end

ENCOUNTER_PENGUIN_BARREL_ROUTE39_2:
	fadescreenswapbuffers FADE_TO_BLACK
	setflag FLAG_TEMP_8
	setflag FLAG_TEMP_9
	removeobject 10
	removeobject 9
	savebgm MUS_DUMMY
	fadedefaultbgm
	fadescreenswapbuffers FADE_FROM_BLACK
	closemessage
	goto ENCOUNTER_PENGUIN_BARREL_ROUTE39_1


ITEM_ROUTE39_1::
	finditem ITEM_CHOCOLATE_CAKE
	end


ITEM_ROUTE39_2::
	finditem ITEM_CHOCOLATE_SUNDAY
	end


ITEM_ROUTE39_3::
	finditem ITEM_PURPLE_SWEETS
	end


ITEM_ROUTE39_4::
	finditem ITEM_STAT_BEER
	end


BATTLE_ROUTE39_TRAINER_1::
	trainerbattle_single TRAINER_ROUTE39_TRAINER_1, BATTLE_ROUTE39_TRAINER_1_Text_0, BATTLE_ROUTE39_TRAINER_1_Text_1
	namebox BATTLE_ROUTE39_TRAINER_1_Text_2
	msgbox BATTLE_ROUTE39_TRAINER_1_Text_1
	hidenamebox
	release
	end


BATTLE_ROUTE39_TRAINER_2::
	trainerbattle_single TRAINER_ROUTE39_TRAINER_2, BATTLE_ROUTE39_TRAINER_2_Text_0, BATTLE_ROUTE39_TRAINER_2_Text_1
	namebox BATTLE_ROUTE39_TRAINER_2_Text_2
	msgbox BATTLE_ROUTE39_TRAINER_2_Text_1
	hidenamebox
	release
	end


BATTLE_ROUTE39_TRAINER_3::
	trainerbattle_single TRAINER_ROUTE39_TRAINER_3, BATTLE_ROUTE39_TRAINER_3_Text_0, BATTLE_ROUTE39_TRAINER_3_Text_1
	namebox BATTLE_ROUTE39_TRAINER_3_Text_2
	msgbox BATTLE_ROUTE39_TRAINER_3_Text_1
	hidenamebox
	release
	end


BATTLE_ROUTE39_TRAINER_4::
	trainerbattle_single TRAINER_ROUTE39_TRAINER_4, BATTLE_ROUTE39_TRAINER_4_Text_0, BATTLE_ROUTE39_TRAINER_4_Text_1
	namebox BATTLE_ROUTE39_TRAINER_4_Text_2
	msgbox BATTLE_ROUTE39_TRAINER_4_Text_3
	hidenamebox
	release
	end


BATTLE_ROUTE39_TRAINER_5::
	trainerbattle_single TRAINER_ROUTE39_TRAINER_5, BATTLE_ROUTE39_TRAINER_5_Text_0, BATTLE_ROUTE39_TRAINER_5_Text_1
	namebox BATTLE_ROUTE39_TRAINER_5_Text_2
	msgbox BATTLE_ROUTE39_TRAINER_5_Text_3
	hidenamebox
	release
	end


BATTLE_ROUTE39_TRAINER_6::
	trainerbattle_single TRAINER_ROUTE39_TRAINER_6, BATTLE_ROUTE39_TRAINER_6_Text_0, BATTLE_ROUTE39_TRAINER_6_Text_1
	namebox BATTLE_ROUTE39_TRAINER_6_Text_2
	msgbox BATTLE_ROUTE39_TRAINER_6_Text_1
	hidenamebox
	release
	end


BATTLE_ROUTE39_TRAINER_7::
	trainerbattle_single TRAINER_ROUTE39_TRAINER_7, BATTLE_ROUTE39_TRAINER_7_Text_0, BATTLE_ROUTE39_TRAINER_7_Text_1
	namebox BATTLE_ROUTE39_TRAINER_7_Text_2
	msgbox BATTLE_ROUTE39_TRAINER_7_Text_1
	hidenamebox
	release
	end


BATTLE_ROUTE39_TRAINER_8::
	trainerbattle_single TRAINER_ROUTE39_TRAINER_8, BATTLE_ROUTE39_TRAINER_8_Text_0, BATTLE_ROUTE39_TRAINER_8_Text_1
	namebox BATTLE_ROUTE39_TRAINER_8_Text_2
	msgbox BATTLE_ROUTE39_TRAINER_8_Text_1
	hidenamebox
	release
	end


NPC_Route39_1::
	lock
	faceplayer
	namebox NPC_Route39_1_Text_0
	msgbox NPC_Route39_1_Text_1
	closemessage
	hidenamebox
	release
	end


NPC_Route39_2::
	lock
	faceplayer
	namebox NPC_Route39_1_Text_0
	msgbox NPC_Route39_2_Text_0
	closemessage
	hidenamebox
	release
	end


NPC_Route39_3::
	lock
	faceplayer
	namebox NPC_Route39_3_Text_0
	msgbox NPC_Route39_3_Text_1
	closemessage
	hidenamebox
	release
	end


BLOCK_ROUTE_39::
	lockall
	namebox NPC_Route39_3_Text_0
	applymovement 16, MOVEMENT_EXCLAMATIONMARK
	waitmovement 0
	msgbox BLOCK_ROUTE_39_Text_0
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, movement_BLOCK_ROUTE_39
	waitmovement 0
	return


TRIGGER_ROUTE_39_BLOCK::
	goto_if_unset FLAG_BADGE04_GET, TRIGGER_ROUTE_39_BLOCK_2
TRIGGER_ROUTE_39_BLOCK_1:
	release
	end

TRIGGER_ROUTE_39_BLOCK_2:
	call BLOCK_ROUTE_39
	goto TRIGGER_ROUTE_39_BLOCK_1


movement_BLOCK_ROUTE_39:
	walk_down
	step_end

ENCOUNTER_PENGUIN_BARREL_ROUTE39_Text_0:
	.string "Penguin$"

ENCOUNTER_PENGUIN_BARREL_ROUTE39_Text_1:
	.string "Noot! Noot!$"

BATTLE_ROUTE39_TRAINER_1_Text_0:
	.string "Stop right there! I be looking for me\n"
	.string "treasure.$"

BATTLE_ROUTE39_TRAINER_1_Text_1:
	.string "The real treasure be this marvelleous\n"
	.string "bonding we be having.$"

BATTLE_ROUTE39_TRAINER_1_Text_2:
	.string "Gullstream$"

BATTLE_ROUTE39_TRAINER_2_Text_0:
	.string "If you want to get to Brimhaven, you\n"
	.string "will need to get through me stranger.$"

BATTLE_ROUTE39_TRAINER_2_Text_1:
	.string "Right this way sir, follow the path and\n"
	.string "keep going west.\p"
	.string "Have a nice trip.$"

BATTLE_ROUTE39_TRAINER_2_Text_2:
	.string "Atimaar$"

BATTLE_ROUTE39_TRAINER_3_Text_0:
	.string "My prey shows itself before me!\p"
	.string "I shall feast on you tonight!$"

BATTLE_ROUTE39_TRAINER_3_Text_1:
	.string "Hold on, you are not a monster.\p"
	.string "You do not even look tasty.$"

BATTLE_ROUTE39_TRAINER_3_Text_2:
	.string "Deerora$"

BATTLE_ROUTE39_TRAINER_4_Text_0:
	.string "Stop! You are not taking my lesser\n"
	.string "demon spot!$"

BATTLE_ROUTE39_TRAINER_4_Text_1:
	.string "Oh you are not on a task?\p"
	.string "Never mind then$"

BATTLE_ROUTE39_TRAINER_4_Text_2:
	.string "E z Life$"

BATTLE_ROUTE39_TRAINER_4_Text_3:
	.string "Oh you are not on a task?\p"
	.string "Never mind then.$"

BATTLE_ROUTE39_TRAINER_5_Text_0:
	.string "The guide said, attack any enemies you\n"
	.string "may encounter.\p"
	.string "You are going down!$"

BATTLE_ROUTE39_TRAINER_5_Text_1:
	.string "It didn't say anything about losing in\n"
	.string "the quest guide…$"

BATTLE_ROUTE39_TRAINER_5_Text_2:
	.string "GuideTheWay$"

BATTLE_ROUTE39_TRAINER_5_Text_3:
	.string "I can not do anything without the\n"
	.string "quest guide.\p"
	.string "I am a quester, so I'm incapable of\n"
	.string "independent thoughts.$"

BATTLE_ROUTE39_TRAINER_6_Text_0:
	.string "A true hunter never reveals themselves.$"

BATTLE_ROUTE39_TRAINER_6_Text_1:
	.string "By revealing myself, I left myself\n"
	.string "weakened.\p"
	.string "My bad…$"

BATTLE_ROUTE39_TRAINER_6_Text_2:
	.string "Bearisa$"

BATTLE_ROUTE39_TRAINER_7_Text_0:
	.string "You will not pass.$"

BATTLE_ROUTE39_TRAINER_7_Text_1:
	.string "You may pass.$"

BATTLE_ROUTE39_TRAINER_7_Text_2:
	.string "Humoyo$"

BATTLE_ROUTE39_TRAINER_8_Text_0:
	.string "You got a lot of guts coming into the\n"
	.string "jungle like this kid.$"

BATTLE_ROUTE39_TRAINER_8_Text_1:
	.string "I had a lot of guts challenging a kid\n"
	.string "like you it seems.$"

BATTLE_ROUTE39_TRAINER_8_Text_2:
	.string "Trapelle$"

NPC_Route39_1_Text_0:
	.string "Pirate$"

NPC_Route39_1_Text_1:
	.string "Yarr, there was a brawl at the Dead\n"
	.string "Man's Chest.\p"
	.string "We've had to close off Brimhaven to all\n"
	.string "outsiders until we've cleaned up the\l"
	.string "bodi-\p"
	.string "uh, I mean mess!$"

NPC_Route39_2_Text_0:
	.string "Some silly landlubber came through and\n"
	.string "ordered a glass of the Supergrog..\p"
	.string "Picked a fight with one of the patrons,\n"
	.string "then started going crazy lashing out at\l"
	.string "anyone nearby!\p"
	.string "He claimed the grog gave him double\n"
	.string "vision and couldn't see who he was\l"
	.string "attacking..\p"
	.string "We've had to put a stop on other\n"
	.string "outsiders coming in for the time being.$"

NPC_Route39_3_Text_0:
	.string "Captain$"

NPC_Route39_3_Text_1:
	.string "It's my job to guard the shores to make\n"
	.string "sure nobody tries to sail off with any\l"
	.string "illegal rum.\p"
	.string "I'm watching you, so don't even think\n"
	.string "about trying anything!$"

BLOCK_ROUTE_39_Text_0:
	.string "There's a deadly storm brewing beyond\n"
	.string "here!\p"
	.string "It's far too dangerous to sail beyond\n"
	.string "this point!\p"
	.string "Come back once it has subsided.$"
