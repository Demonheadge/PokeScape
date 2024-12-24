Ice_Mountain_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Ice_Mountain_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Ice_Mountain_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setvar VAR_EVOLUTION_MAP_STATE, 3
	call WEATHER_CHANGE_AREA_ICE_MOUNTAIN
	return


NPC_ORACLE::
	random 16
	switch VAR_RESULT
	case 0, NPC_ORACLE_3
	case 1, NPC_ORACLE_4
	case 2, NPC_ORACLE_5
	case 3, NPC_ORACLE_6
	case 4, NPC_ORACLE_7
	case 5, NPC_ORACLE_8
	case 6, NPC_ORACLE_9
	case 7, NPC_ORACLE_10
	case 8, NPC_ORACLE_11
	case 9, NPC_ORACLE_12
	case 10, NPC_ORACLE_13
	case 11, NPC_ORACLE_14
	case 12, NPC_ORACLE_15
	case 13, NPC_ORACLE_16
	case 14, NPC_ORACLE_17
	case 15, NPC_ORACLE_18
	release
	end

NPC_ORACLE_3:
	lock
	faceplayer
	namebox NPC_ORACLE_Text_0
	msgbox NPC_ORACLE_Text_1
	hidenamebox
	release
	end

NPC_ORACLE_4:
	lock
	faceplayer
	namebox NPC_ORACLE_Text_0
	msgbox NPC_ORACLE_Text_2
	hidenamebox
	release
	end

NPC_ORACLE_5:
	lock
	faceplayer
	namebox NPC_ORACLE_Text_0
	msgbox NPC_ORACLE_Text_3
	hidenamebox
	release
	end

NPC_ORACLE_6:
	lock
	faceplayer
	namebox NPC_ORACLE_Text_0
	goto_if_unset FLAG_RECEIVED_TM51, NPC_ORACLE_20
	msgbox NPC_ORACLE_Text_4
	hidenamebox
	release
	end

NPC_ORACLE_7:
	lock
	faceplayer
	namebox NPC_ORACLE_Text_0
	msgbox NPC_ORACLE_Text_6
	hidenamebox
	release
	end

NPC_ORACLE_8:
	lock
	faceplayer
	namebox NPC_ORACLE_Text_0
	msgbox NPC_ORACLE_Text_7
	hidenamebox
	release
	end

NPC_ORACLE_9:
	lock
	faceplayer
	namebox NPC_ORACLE_Text_0
	msgbox NPC_ORACLE_Text_8
	hidenamebox
	release
	end

NPC_ORACLE_10:
	lock
	faceplayer
	namebox NPC_ORACLE_Text_0
	msgbox NPC_ORACLE_Text_9
	hidenamebox
	release
	end

NPC_ORACLE_11:
	lock
	faceplayer
	namebox NPC_ORACLE_Text_0
	msgbox NPC_ORACLE_Text_10
	hidenamebox
	release
	end

NPC_ORACLE_12:
	lock
	faceplayer
	namebox NPC_ORACLE_Text_0
	msgbox NPC_ORACLE_Text_11
	hidenamebox
	release
	end

NPC_ORACLE_13:
	lock
	faceplayer
	namebox NPC_ORACLE_Text_0
	msgbox NPC_ORACLE_Text_12
	hidenamebox
	release
	end

NPC_ORACLE_14:
	lock
	faceplayer
	namebox NPC_ORACLE_Text_0
	msgbox NPC_ORACLE_Text_13
	hidenamebox
	release
	end

NPC_ORACLE_15:
	lock
	faceplayer
	namebox NPC_ORACLE_Text_0
	msgbox NPC_ORACLE_Text_14
	hidenamebox
	release
	end

NPC_ORACLE_16:
	lock
	faceplayer
	namebox NPC_ORACLE_Text_0
	msgbox NPC_ORACLE_Text_15
	hidenamebox
	release
	end

NPC_ORACLE_17:
	lock
	faceplayer
	namebox NPC_ORACLE_Text_0
	msgbox NPC_ORACLE_Text_16
	hidenamebox
	release
	end

NPC_ORACLE_18:
	lock
	faceplayer
	namebox NPC_ORACLE_Text_0
	msgbox NPC_ORACLE_Text_17
	hidenamebox
	release
	end

NPC_ORACLE_20:
	msgbox NPC_ORACLE_Text_4
	hidenamebox
	giveitem ITEM_TM51, 1
	namebox NPC_ORACLE_Text_0
	msgbox NPC_ORACLE_Text_5
	setflag FLAG_RECEIVED_TM51
	hidenamebox
	release
	end


BATTLE_ICE_MOUNTAIN_HUNTER::
	trainerbattle_single TRAINER_ICE_MOUNTAIN_HUNTER, BATTLE_ICE_MOUNTAIN_HUNTER_Text_0, BATTLE_ICE_MOUNTAIN_HUNTER_Text_1
	namebox BATTLE_ICE_MOUNTAIN_HUNTER_Text_2
	msgbox BATTLE_ICE_MOUNTAIN_HUNTER_Text_3
	hidenamebox
	release
	end


BATTLE_ICE_MOUNTAIN_BLACK_KNIGHT_1::
	trainerbattle_single TRAINER_ICE_MOUNTAIN_BLACK_KNIGHT_1, BATTLE_ICE_MOUNTAIN_BLACK_KNIGHT_1_Text_0, BATTLE_ICE_MOUNTAIN_BLACK_KNIGHT_1_Text_1
	namebox BATTLE_ICE_MOUNTAIN_BLACK_KNIGHT_1_Text_2
	msgbox BATTLE_ICE_MOUNTAIN_BLACK_KNIGHT_1_Text_3
	hidenamebox
	release
	end


NPC_ICE_MOUNTAIN_BLACK_KNIGHT::
	msgbox NPC_ICE_MOUNTAIN_BLACK_KNIGHT_Text_0
	release
	end


SIGN_ICE_MOUNTAIN_DOOR::
	msgbox SIGN_ICE_MOUNTAIN_DOOR_Text_0
	release
	end


NPC_ORACLE_Text_0:
	.string "Oracle$"

NPC_ORACLE_Text_1:
	.string "Beware the cabbage.\p"
	.string "It is both green AND leafy.$"

NPC_ORACLE_Text_2:
	.string "The light at the end of the tunnel is\n"
	.string "the demon-infested lava pit.$"

NPC_ORACLE_Text_3:
	.string "Who guards the guardsmen?$"

NPC_ORACLE_Text_4:
	.string "Sometimes you get lucky, sometimes you\n"
	.string "don't.$"

NPC_ORACLE_Text_5:
	.string "A monster using this move harshly drops\n"
	.string "icicles on their target.\p"
	.string "If you're lucky, it can even cause\n"
	.string "flinching.$"

NPC_ORACLE_Text_6:
	.string "Many secrets are buried under this\n"
	.string "land.$"

NPC_ORACLE_Text_7:
	.string "They say that ham does not mix well with\n"
	.string "other kinds of meat.$"

NPC_ORACLE_Text_8:
	.string "Is it time to wake up? I am not sure..$"

NPC_ORACLE_Text_9:
	.string "The great snake of Guthix guards more\n"
	.string "than she knows.$"

NPC_ORACLE_Text_10:
	.string "A woodchuck does not chuck wood.$"

NPC_ORACLE_Text_11:
	.string "Do not fear the chaos.\p"
	.string "Embrace it.$"

NPC_ORACLE_Text_12:
	.string "Too many cooks spoil the anchovy pizza.$"

NPC_ORACLE_Text_13:
	.string "He who uses the power of custard mixes\n"
	.string "it with his tears.$"

NPC_ORACLE_Text_14:
	.string "The final dream will reach its full\n"
	.string "potential.$"

NPC_ORACLE_Text_15:
	.string "The last shall become the first.$"

NPC_ORACLE_Text_16:
	.string "Pies...they're great, aren't they?$"

NPC_ORACLE_Text_17:
	.string "I'm not in the mood.$"

BATTLE_ICE_MOUNTAIN_HUNTER_Text_0:
	.string "I've travelled for hundreds of miles to\n"
	.string "find some rare hunter monsters in the\l"
	.string "frozen mountains, but you're the most\l"
	.string "exciting thing I've seen up here.$"

BATTLE_ICE_MOUNTAIN_HUNTER_Text_1:
	.string "Brr, what a frosty reception..$"

BATTLE_ICE_MOUNTAIN_HUNTER_Text_2:
	.string "0nTheHunt$"

BATTLE_ICE_MOUNTAIN_HUNTER_Text_3:
	.string "Oh well, there are no hunter monsters up\n"
	.string "here but at least our battle has warmed\l"
	.string "me up!$"

BATTLE_ICE_MOUNTAIN_BLACK_KNIGHT_1_Text_0:
	.string "That's far enough.$"

BATTLE_ICE_MOUNTAIN_BLACK_KNIGHT_1_Text_1:
	.string "You might have beaten me, but you'll\n"
	.string "never make it inside our fortress.$"

BATTLE_ICE_MOUNTAIN_BLACK_KNIGHT_1_Text_2:
	.string "Black Knight$"

BATTLE_ICE_MOUNTAIN_BLACK_KNIGHT_1_Text_3:
	.string "Nobody without a set of our armour gets\n"
	.string "inside our fortress!$"

NPC_ICE_MOUNTAIN_BLACK_KNIGHT_Text_0:
	.string "The Black Knight stares off into the\n"
	.string "distance as if you're not even there.$"

SIGN_ICE_MOUNTAIN_DOOR_Text_0:
	.string "The door is sealed shut.$"
