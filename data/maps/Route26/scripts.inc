Route26_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route26_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Route26_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setvar VAR_EVOLUTION_MAP_STATE, 3
	call WEATHER_CHANGE_AREA_ICE_MOUNTAIN
	call ROUTE26_STATE
	call PENGUIN_EVENT
	return


ROUTE26_STATE::
	goto_if_unset FLAG_PARTNER_BATTLE, ROUTE26_STATE_2
ROUTE26_STATE_1:
	setflag FLAG_TEMP_1F
	removeobject 6
	compare VAR_POKESCAPE_STORYMODE_PROGRESS, 175
	goto_if_eq ROUTE26_STATE_5
ROUTE26_STATE_4:
	compare VAR_POKESCAPE_STORYMODE_PROGRESS, 180
	goto_if_eq ROUTE26_STATE_8
ROUTE26_STATE_7:
	return

ROUTE26_STATE_2:
	setflag FLAG_TEMP_1E
	removeobject 13
	goto ROUTE26_STATE_1

ROUTE26_STATE_5:
	goto_if_unset FLAG_PARTNER_BATTLE, ROUTE26_STATE_11
ROUTE26_STATE_10:
	clearflag FLAG_TEMP_1F
	addobject 6
	goto ROUTE26_STATE_4

ROUTE26_STATE_8:
	goto_if_unset FLAG_PARTNER_BATTLE, ROUTE26_STATE_13
	goto ROUTE26_STATE_7

ROUTE26_STATE_11:
	clearflag FLAG_TEMP_1E
	addobject 13
	goto ROUTE26_STATE_10

ROUTE26_STATE_13:
	clearflag FLAG_TEMP_1E
	addobject 13
	setobjectxyperm 13, 8, 7
	goto ROUTE26_STATE_7


TRIGGER_STORYMODE_EVENT_ROUTE26::
	lockall
	applymovement 13, Movement_InteractFACEDOWN
	waitmovement 0
	namebox TRIGGER_STORYMODE_EVENT_ROUTE26_Text_0
	msgbox TRIGGER_STORYMODE_EVENT_ROUTE26_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_eq TRIGGER_STORYMODE_EVENT_ROUTE26_2
	msgbox TRIGGER_STORYMODE_EVENT_ROUTE26_Text_3
	applymovement 13, MOVEMENT_FACE_UP
	setflag FLAG_PARTNER_BATTLE
	setvar VAR_PARTNER_TRAINER, TRAINER_SIR_OWEN_1
	setvar VAR_PARTNER_SPRITE, TRAINER_BACK_PIC_OWEN
	trainerbattle_no_intro TRAINER_ROUTE26_BLACK_KNIGHT, TRIGGER_STORYMODE_EVENT_ROUTE26_Text_4
	applymovement 6, movement_BLACKKNIGHT_1
	waitmovement 0
	setflag FLAG_TEMP_1F
	removeobject 6
	msgbox TRIGGER_STORYMODE_EVENT_ROUTE26_Text_5
	closemessage
	hidenamebox
	playfanfare MUS_OBTAIN_SYMBOL
	msgbox TRIGGER_STORYMODE_EVENT_ROUTE26_Text_6
	waitfanfare
	closemessage
	setflag FLAG_TOGGLE_FORCED_WILD_DOUBLE_BATTLES
	loadword 0, FOLLOWING_SirOwen
	setfollower 13, 0x80
	namebox TRIGGER_STORYMODE_EVENT_ROUTE26_Text_0
	msgbox TRIGGER_STORYMODE_EVENT_ROUTE26_Text_7
	closemessage
	hidenamebox
	applymovement OBJ_EVENT_ID_FOLLOWER, MOVEMENT_WALK_UP
	applymovement OBJ_EVENT_ID_PLAYER, MOVEMENT_WALK_UP
	waitmovement 0
	setvar VAR_POKESCAPE_STORYMODE_PROGRESS, 180
	releaseall
	end

TRIGGER_STORYMODE_EVENT_ROUTE26_2:
	msgbox TRIGGER_STORYMODE_EVENT_ROUTE26_Text_2
	closemessage
	hidenamebox
	applymovement 13, Movement_InteractFACEUP
	applymovement OBJ_EVENT_ID_PLAYER, MOVEMENT_WALK_DOWN
	waitmovement 0
	releaseall
	end


movement_BLACKKNIGHT_1:
	emote_exclamation_mark
	walk_slow_up
	walk_fast_right
	walk_fast_up
	walk_fast_up
	step_end

ENCOUNTER_PENGUIN_BOX_ROUTE26::
	lock
	faceplayer
	namebox ENCOUNTER_PENGUIN_BOX_ROUTE26_Text_0
	playmoncry SPECIES_PENGUIN_DISGUISE_BOX_FORM, 0
	msgbox ENCOUNTER_PENGUIN_BOX_ROUTE26_Text_1
	waitmoncry
	hidenamebox
	closemessage
	delay 1
	setwildbattle SPECIES_PENGUIN_DISGUISE_BOX_FORM, 15, ITEM_NONE
	dowildbattle
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq ENCOUNTER_PENGUIN_BOX_ROUTE26_2
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq ENCOUNTER_PENGUIN_BOX_ROUTE26_2
ENCOUNTER_PENGUIN_BOX_ROUTE26_1:
	end

ENCOUNTER_PENGUIN_BOX_ROUTE26_2:
	fadescreenswapbuffers FADE_TO_BLACK
	setflag FLAG_PENGUIN_HUNT_ON_ROUTE
	removeobject 11
	removeobject 12
	savebgm MUS_DUMMY
	fadedefaultbgm
	fadescreenswapbuffers FADE_FROM_BLACK
	closemessage
	goto ENCOUNTER_PENGUIN_BOX_ROUTE26_1


SIGN_ROUTE26::
	lock
	msgbox SIGN_ROUTE26_Text_0
	release
	end


BATTLE_ROUTE26_TRAINER_1::
	trainerbattle_single TRAINER_ROUTE26_TRAINER_1, BATTLE_ROUTE26_TRAINER_1_Text_0, BATTLE_ROUTE26_TRAINER_1_Text_1
	namebox BATTLE_ROUTE26_TRAINER_1_Text_2
	msgbox BATTLE_ROUTE26_TRAINER_1_Text_3
	hidenamebox
	release
	end


BATTLE_ROUTE26_TRAINER_2::
	trainerbattle_single TRAINER_ROUTE26_TRAINER_2, BATTLE_ROUTE26_TRAINER_2_Text_0, BATTLE_ROUTE26_TRAINER_2_Text_1
	namebox BATTLE_ROUTE26_TRAINER_2_Text_2
	msgbox BATTLE_ROUTE26_TRAINER_2_Text_3
	hidenamebox
	release
	end


BATTLE_ROUTE26_TRAINER_3::
	trainerbattle_single TRAINER_ROUTE26_TRAINER_3, BATTLE_ROUTE26_TRAINER_3_Text_0, BATTLE_ROUTE26_TRAINER_3_Text_1
	namebox BATTLE_ROUTE26_TRAINER_3_Text_2
	msgbox BATTLE_ROUTE26_TRAINER_3_Text_1
	hidenamebox
	release
	end


BATTLE_ROUTE26_TRAINER_4::
	trainerbattle_single TRAINER_ROUTE26_TRAINER_4, BATTLE_ROUTE26_TRAINER_4_Text_0, BATTLE_ROUTE26_TRAINER_4_Text_1
	namebox BATTLE_ROUTE26_TRAINER_4_Text_2
	msgbox BATTLE_ROUTE26_TRAINER_4_Text_3
	hidenamebox
	release
	end


ROUTE26_SUPER_PRAYER_POTION::
	finditem ITEM_SUPER_PRAYER_POTION
	end


ROUTE26_ADAMANT_POUCH::
	finditem ITEM_POUCH_ADAMANT
	end


TRIGGER_STORYMODE_EVENT_ROUTE26_Text_0:
	.string "Sir Owen$"

TRIGGER_STORYMODE_EVENT_ROUTE26_Text_1:
	.string "{PLAYER}! Mind lending me a hand?\p"
	.string "This guy is not playing fair!$"

TRIGGER_STORYMODE_EVENT_ROUTE26_Text_2:
	.string "Call for backup while I hold them off!$"

TRIGGER_STORYMODE_EVENT_ROUTE26_Text_3:
	.string "Let us fight him fairly then!$"

TRIGGER_STORYMODE_EVENT_ROUTE26_Text_4:
	.string "Urgh, I could have stopped one of you\n"
	.string "but not both...$"

TRIGGER_STORYMODE_EVENT_ROUTE26_Text_5:
	.string "Thank you {PLAYER}.\p"
	.string "I think it would be wise for us to\n"
	.string "continue on foot together in case we\l"
	.string "encounter any more enemy resistance.$"

TRIGGER_STORYMODE_EVENT_ROUTE26_Text_6:
	.string "Lead the charge!\n"
	.string "Sir Owen Sonde is on your side!$"

TRIGGER_STORYMODE_EVENT_ROUTE26_Text_7:
	.string "May Saradomin guide us!$"

ENCOUNTER_PENGUIN_BOX_ROUTE26_Text_0:
	.string "Penguin$"

ENCOUNTER_PENGUIN_BOX_ROUTE26_Text_1:
	.string "Noot! Noot!$"

SIGN_ROUTE26_Text_0:
	.string "NORTH to ICE MOUNTAIN\p"
	.string "SOUTH to the DWARVEN MINES$"

BATTLE_ROUTE26_TRAINER_1_Text_0:
	.string "Hey!\p"
	.string "Too many humans have been coming here\n"
	.string "and disturbing us when are just trying\l"
	.string "to earn a living!\p"
	.string "I won't let you do the same!$"

BATTLE_ROUTE26_TRAINER_1_Text_1:
	.string "Eek! You're strong.$"

BATTLE_ROUTE26_TRAINER_1_Text_2:
	.string "Omril$"

BATTLE_ROUTE26_TRAINER_1_Text_3:
	.string "Please don't disturb our village.$"

BATTLE_ROUTE26_TRAINER_2_Text_0:
	.string "Beware of landslides!\p"
	.string "But for now you should beware of me!$"

BATTLE_ROUTE26_TRAINER_2_Text_1:
	.string "You came crashing down on me like a\n"
	.string "landslide.$"

BATTLE_ROUTE26_TRAINER_2_Text_2:
	.string "Elkot$"

BATTLE_ROUTE26_TRAINER_2_Text_3:
	.string "We've had no many earthquakes and\n"
	.string "landslides lately we're not sure what\l"
	.string "are actually causing them.\p"
	.string "Maybe something deep within the mines?$"

BATTLE_ROUTE26_TRAINER_3_Text_0:
	.string "Out of my way, I am on a quest for the\n"
	.string "Guildmaster of the Champions Guild!$"

BATTLE_ROUTE26_TRAINER_3_Text_1:
	.string "Maybe I need a stronger team before\n"
	.string "trying to take on this quest…$"

BATTLE_ROUTE26_TRAINER_3_Text_2:
	.string "4TheL0re$"

BATTLE_ROUTE26_TRAINER_4_Text_0:
	.string "I was told that there are the ruins of\n"
	.string "an ancient civilisation buried around\l"
	.string "here.\p"
	.string "It will be my discovery, not yours!$"

BATTLE_ROUTE26_TRAINER_4_Text_1:
	.string "Oh.. Well maybe we could share the\n"
	.string "credit instead if we find it?$"

BATTLE_ROUTE26_TRAINER_4_Text_2:
	.string "Gerald$"

BATTLE_ROUTE26_TRAINER_4_Text_3:
	.string "Supposedly the cavern I am searching\n"
	.string "for was one the hall of the Imcando\l"
	.string "dwarves.\p"
	.string "I don't think there are any of them left\n"
	.string "alive now.$"
