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


NPC_ICE_MOUNTAIN_GUARD::
	msgbox NPC_ICE_MOUNTAIN_GUARD_Text_0
	release
	end


SIGN_ICE_MOUNTAIN_DOOR::
	msgbox SIGN_ICE_MOUNTAIN_DOOR_Text_0
	release
	end


TRIGGER_BLACK_KNIGHTS_FORTRESS_ENTRY::
	lockall
	compare VAR_POKESCAPE_STORYMODE_PROGRESS, 186
	goto_if_le TRIGGER_BLACK_KNIGHTS_FORTRESS_ENTRY_1
	namebox TRIGGER_BLACK_KNIGHTS_FORTRESS_ENTRY_Text_0
	msgbox TRIGGER_BLACK_KNIGHTS_FORTRESS_ENTRY_Text_8
	closemessage
	hidenamebox
	namebox TRIGGER_BLACK_KNIGHTS_FORTRESS_ENTRY_Text_2
	msgbox TRIGGER_BLACK_KNIGHTS_FORTRESS_ENTRY_Text_9
	closemessage
	hidenamebox
	releaseall
	end

TRIGGER_BLACK_KNIGHTS_FORTRESS_ENTRY_1:
	applymovement 4, movement_BK_FORT_GUARD
	applymovement 5, movement_BK_FORT_GUARD
	applymovement OBJ_EVENT_ID_FOLLOWER, MOVEMENT_LOCKFACING_JUMP_SPECIAL_DOWN
	applymovement OBJ_EVENT_ID_PLAYER, MOVEMENT_LOCKFACING_JUMP_SPECIAL_DOWN
	waitmovement 0
	namebox TRIGGER_BLACK_KNIGHTS_FORTRESS_ENTRY_Text_0
	msgbox TRIGGER_BLACK_KNIGHTS_FORTRESS_ENTRY_Text_1
	closemessage
	hidenamebox
	namebox TRIGGER_BLACK_KNIGHTS_FORTRESS_ENTRY_Text_2
	msgbox TRIGGER_BLACK_KNIGHTS_FORTRESS_ENTRY_Text_3
	closemessage
	hidenamebox
	namebox TRIGGER_BLACK_KNIGHTS_FORTRESS_ENTRY_Text_0
	msgbox TRIGGER_BLACK_KNIGHTS_FORTRESS_ENTRY_Text_4
	closemessage
	hidenamebox
	namebox TRIGGER_BLACK_KNIGHTS_FORTRESS_ENTRY_Text_2
	msgbox TRIGGER_BLACK_KNIGHTS_FORTRESS_ENTRY_Text_5
	closemessage
	hidenamebox
	applymovement OBJ_EVENT_ID_FOLLOWER, MOVEMENT_LOCKFACING_WALK_DOWN
	applymovement OBJ_EVENT_ID_PLAYER, MOVEMENT_WALK_DOWN
	waitmovement 0
	namebox TRIGGER_BLACK_KNIGHTS_FORTRESS_ENTRY_Text_6
	msgbox TRIGGER_BLACK_KNIGHTS_FORTRESS_ENTRY_Text_7
	closemessage
	hidenamebox
	setvar VAR_POKESCAPE_STORYMODE_PROGRESS, 185
	releaseall
	end


MOVEMENT_LOCKFACING_WALK_DOWN:
	lock_facing_direction
	walk_down
	unlock_facing_direction
	step_end

MOVEMENT_LOCKFACING_JUMP_SPECIAL_DOWN:
	lock_facing_direction
	jump_special_down
	unlock_facing_direction
	step_end

movement_BK_FORT_GUARD:
	emote_exclamation_mark
	step_end

TRIGGER_STORYMODE_EVENT_ICE_MOUNTAIN_BKF::
	lockall
	facefollower
	namebox TRIGGER_BLACK_KNIGHTS_FORTRESS_ENTRY_Text_6
	msgbox TRIGGER_STORYMODE_EVENT_ICE_MOUNTAIN_BKF_Text_0
	closemessage
	hidenamebox
	applymovement OBJ_EVENT_ID_FOLLOWER, MOVEMENT_FACE_UP
	applymovement OBJ_EVENT_ID_PLAYER, MOVEMENT_FACE_UP
	waitmovement 0
	setvar VAR_POKESCAPE_STORYMODE_PROGRESS, 181
	releaseall
	end


TRIGGER_STORYMODE_EVENT_ICE_MOUNTAIN_GUARDS::
	lockall
	facefollower
	namebox TRIGGER_BLACK_KNIGHTS_FORTRESS_ENTRY_Text_6
	msgbox TRIGGER_STORYMODE_EVENT_ICE_MOUNTAIN_GUARDS_Text_0
	closemessage
	hidenamebox
	applymovement OBJ_EVENT_ID_FOLLOWER, MOVEMENT_FACE_LEFT
	applymovement OBJ_EVENT_ID_PLAYER, MOVEMENT_FACE_LEFT
	waitmovement 0
	delay 60
	facefollower
	namebox TRIGGER_BLACK_KNIGHTS_FORTRESS_ENTRY_Text_6
	msgbox TRIGGER_STORYMODE_EVENT_ICE_MOUNTAIN_GUARDS_Text_1
	closemessage
	hidenamebox
	setvar VAR_POKESCAPE_STORYMODE_PROGRESS, 186
	releaseall
	end


EVENT_ICE_MOUNTAIN_GUARDS::
	namebox EVENT_ICE_MOUNTAIN_GUARDS_Text_0
	msgbox EVENT_ICE_MOUNTAIN_GUARDS_Text_1
	closemessage
	hidenamebox
	namebox EVENT_ICE_MOUNTAIN_GUARDS_Text_2
	msgbox EVENT_ICE_MOUNTAIN_GUARDS_Text_3
	closemessage
	hidenamebox
	trainerbattle_two_trainers TRAINER_ICE_MOUNTAIN_GUARD_1, EVENT_ICE_MOUNTAIN_GUARDS_Text_4, TRAINER_ICE_MOUNTAIN_GUARD_2, EVENT_ICE_MOUNTAIN_GUARDS_Text_5
	namebox TRIGGER_BLACK_KNIGHTS_FORTRESS_ENTRY_Text_6
	msgbox EVENT_ICE_MOUNTAIN_GUARDS_Text_6
	closemessage
	hidenamebox
	fadescreenswapbuffers FADE_TO_BLACK
	setmetatile 34, 14, METATILE_Ice_Mountain_SNOW_LOGFIRE_OUT, TRUE
	fadescreenswapbuffers FADE_FROM_BLACK
	namebox TRIGGER_BLACK_KNIGHTS_FORTRESS_ENTRY_Text_6
	msgbox EVENT_ICE_MOUNTAIN_GUARDS_Text_7
	closemessage
	hidenamebox
	setvar VAR_POKESCAPE_STORYMODE_PROGRESS, 187
	releaseall
	end


GUARD_M::
	lock
	faceplayer
	compare VAR_POKESCAPE_STORYMODE_PROGRESS, 186
	goto_if_eq GUARD_M_2
	compare VAR_POKESCAPE_STORYMODE_PROGRESS, 187
	goto_if_ge GUARD_M_3
	namebox EVENT_ICE_MOUNTAIN_GUARDS_Text_2
	msgbox GUARD_M_Text_1
	closemessage
	hidenamebox
GUARD_M_1:
	release
	end

GUARD_M_2:
	goto EVENT_ICE_MOUNTAIN_GUARDS
	goto GUARD_M_1

GUARD_M_3:
	msgbox GUARD_M_Text_0
	goto GUARD_M_1


GUARD_F::
	lock
	faceplayer
	compare VAR_POKESCAPE_STORYMODE_PROGRESS, 186
	goto_if_eq GUARD_F_2
	compare VAR_POKESCAPE_STORYMODE_PROGRESS, 187
	goto_if_ge GUARD_F_3
	namebox EVENT_ICE_MOUNTAIN_GUARDS_Text_2
	msgbox GUARD_F_Text_1
	closemessage
	hidenamebox
GUARD_F_1:
	release
	end

GUARD_F_2:
	goto EVENT_ICE_MOUNTAIN_GUARDS
	goto GUARD_F_1

GUARD_F_3:
	msgbox GUARD_F_Text_0
	goto GUARD_F_1


CAMDOZAAL_BLOCK::
	msgbox CAMDOZAAL_BLOCK_Text_0
	closemessage
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

NPC_ICE_MOUNTAIN_GUARD_Text_0:
	.string "The guard stares off into the distance\n"
	.string "as if you're not even there.$"

SIGN_ICE_MOUNTAIN_DOOR_Text_0:
	.string "The door is sealed shut.$"

TRIGGER_BLACK_KNIGHTS_FORTRESS_ENTRY_Text_0:
	.string "Guard B$"

TRIGGER_BLACK_KNIGHTS_FORTRESS_ENTRY_Text_1:
	.string "Hey, you are not a guard!$"

TRIGGER_BLACK_KNIGHTS_FORTRESS_ENTRY_Text_2:
	.string "Guard D$"

TRIGGER_BLACK_KNIGHTS_FORTRESS_ENTRY_Text_3:
	.string "Yeah, neither of you are guards.$"

TRIGGER_BLACK_KNIGHTS_FORTRESS_ENTRY_Text_4:
	.string "Sorry, but you've got to at least be a\n"
	.string "guard to pass through here.\p"
	.string "Otherwise if we let you in we would be in\n"
	.string "trouble!$"

TRIGGER_BLACK_KNIGHTS_FORTRESS_ENTRY_Text_5:
	.string "Yeah, so don't go off around the corner\n"
	.string "and dress up as guard now.\p"
	.string "We would see right through you if you\n"
	.string "did.$"

TRIGGER_BLACK_KNIGHTS_FORTRESS_ENTRY_Text_6:
	.string "Sir Owen$"

TRIGGER_BLACK_KNIGHTS_FORTRESS_ENTRY_Text_7:
	.string "Hmm... We are going to have to get a\n"
	.string "guard uniform from somewhere.\p"
	.string "Let us retreat momentarily while we\n"
	.string "think of something.$"

TRIGGER_BLACK_KNIGHTS_FORTRESS_ENTRY_Text_8:
	.string "Be careful in there!\p"
	.string "There's an important guest inside.$"

TRIGGER_BLACK_KNIGHTS_FORTRESS_ENTRY_Text_9:
	.string "Security inside has been increased.\p"
	.string "Remember your Black Knight history and\n"
	.string "you'll be fine, though.$"

TRIGGER_STORYMODE_EVENT_ICE_MOUNTAIN_BKF_Text_0:
	.string "{PLAYER} look!\p"
	.string "That's a fortress!\p"
	.string "Let's take a closer look!$"

TRIGGER_STORYMODE_EVENT_ICE_MOUNTAIN_GUARDS_Text_0:
	.string "Psst {PLAYER}, look up there.$"

TRIGGER_STORYMODE_EVENT_ICE_MOUNTAIN_GUARDS_Text_1:
	.string "Are you thinking what I am?\p"
	.string "Let's go pay our little friends a visit.$"

EVENT_ICE_MOUNTAIN_GUARDS_Text_0:
	.string "Guard M$"

EVENT_ICE_MOUNTAIN_GUARDS_Text_1:
	.string "Hey, who are you two?\p"
	.string "Wait you're a White Knight!$"

EVENT_ICE_MOUNTAIN_GUARDS_Text_2:
	.string "Guard F$"

EVENT_ICE_MOUNTAIN_GUARDS_Text_3:
	.string "AAAAH!\p"
	.string "What are you doing!?$"

EVENT_ICE_MOUNTAIN_GUARDS_Text_4:
	.string "Guard: W-what are you doing with that\n"
	.string "sword?$"

EVENT_ICE_MOUNTAIN_GUARDS_Text_5:
	.string "Guard: OW! My head!$"

EVENT_ICE_MOUNTAIN_GUARDS_Text_6:
	.string "Quick let's take their gear before they\n"
	.string "wake up.$"

EVENT_ICE_MOUNTAIN_GUARDS_Text_7:
	.string "Right, this should get us through the\n"
	.string "gate.\p"
	.string "Although I do feel a bit bad for leaving\n"
	.string "them out in the cold...$"

GUARD_M_Text_0:
	.string "There is no response as they're\n"
	.string "unconscious.$"

GUARD_M_Text_1:
	.string "We are on the lookout for passing White\n"
	.string "Knights.\p"
	.string "You over there seem to be a Temple\n"
	.string "Knight.\p"
	.string "I don't think that goes under my\n"
	.string "jurisdiction.$"

GUARD_F_Text_0:
	.string "You wonder why they are in their\n"
	.string "underwear.\p"
	.string "But then you remember why.$"

GUARD_F_Text_1:
	.string "It's freezing.\p"
	.string "Being stuck on this guard shift out in\n"
	.string "the cold is killing me.$"

CAMDOZAAL_BLOCK_Text_0:
	.string "There is a solid chunk of ice blocking\n"
	.string "the cave entrance.\p"
	.string "You see no way to climb over or around\n"
	.string "it, and it's too tough for your pickaxe\l"
	.string "to break it.$"
