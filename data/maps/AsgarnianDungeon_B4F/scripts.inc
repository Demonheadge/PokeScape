AsgarnianDungeon_B4F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, AsgarnianDungeon_B4F_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

AsgarnianDungeon_B4F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	call AsgarnianDungeon_B4F_STATE
	return


AsgarnianDungeon_B4F_STATE::
	compare VAR_WISE_OLD_MAN_RIVAL, 10
	goto_if_eq AsgarnianDungeon_B4F_STATE_4
AsgarnianDungeon_B4F_STATE_3:
	removeobject 1
	setflag FLAG_TEMP_1F
AsgarnianDungeon_B4F_STATE_1:
	return

AsgarnianDungeon_B4F_STATE_2:
	addobject 1
	clearflag FLAG_TEMP_1F
	goto AsgarnianDungeon_B4F_STATE_1

AsgarnianDungeon_B4F_STATE_4:
	compare VAR_POKESCAPE_GAMEMODE_STATE, 0
	goto_if_eq AsgarnianDungeon_B4F_STATE_2
	goto AsgarnianDungeon_B4F_STATE_3


TRIGGER_WISEOLDMAN_RIVAL_2::
	lock
	playse SE_PIN
	applymovement 1, movement_wom_asgDung_0
	waitmovement 0
	delay 60
	applymovement 1, MOVEMENT_WALK_DOWN
	waitmovement 0
	playbgm MUS_PS_WISE_OLD_MAN_THEME, 1
	waitmovement 0
	namebox TRIGGER_WISEOLDMAN_RIVAL_2_Text_0
	msgbox TRIGGER_WISEOLDMAN_RIVAL_2_Text_1
	hidenamebox
	closemessage
	trainerbattle_no_intro TRAINER_RIVAL_WISE_OLD_MAN_2, TRIGGER_WISEOLDMAN_RIVAL_2_Text_2
	namebox TRIGGER_WISEOLDMAN_RIVAL_2_Text_0
	msgbox TRIGGER_WISEOLDMAN_RIVAL_2_Text_3
	hidenamebox
	closemessage
	fadescreenswapbuffers FADE_TO_BLACK
	savebgm MUS_DUMMY
	fadedefaultbgm
	removeobject 1
	setflag FLAG_TEMP_1F
	setvar VAR_WISE_OLD_MAN_RIVAL, 15
	fadescreenswapbuffers FADE_FROM_BLACK
	release
	end


movement_wom_asgDung_0:
	face_down
	emote_exclamation_mark
	delay_16
	step_end

STRANGE_MURAL_FROST::
	lock
	msgbox STRANGE_MURAL_FROST_Text_0
	closemessage
	release
	end


TRIGGER_WISEOLDMAN_RIVAL_2_Text_0:
	.string "Wise Old Man$"

TRIGGER_WISEOLDMAN_RIVAL_2_Text_1:
	.string "Aah {PLAYER}, so you decided to\n"
	.string "humour this old man after all.\p"
	.string "This place makes for a fine setpiece\n"
	.string "doesn't it?\p"
	.string "Really makes you tingle for a battle.\p"
	.string "You have come this far, it is a bit late\n"
	.string "to turn back now.$"

TRIGGER_WISEOLDMAN_RIVAL_2_Text_2:
	.string "You are looking more promising by the\n"
	.string "minute.$"

TRIGGER_WISEOLDMAN_RIVAL_2_Text_3:
	.string "This really is becoming a habit at this\n"
	.string "point huh?\p"
	.string "You are growing stronger every battle.\p"
	.string "By the way, have you seen Melzar the\n"
	.string "Mad at Rimmington?\p"
	.string "A strong trainer like you could probably\n"
	.string "learn a thing or two from that place.\p"
	.string "I hope to see you again in the future,\n"
	.string "it has been fun.$"

STRANGE_MURAL_FROST_Text_0:
	.string "It appears to be a mural, but it is too\n"
	.string "damaged to decipher.$"
