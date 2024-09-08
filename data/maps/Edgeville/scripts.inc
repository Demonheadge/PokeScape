Edgeville_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Edgeville_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Edgeville_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setflag FLAG_VISITED_EDGEVILLE
	setvar VAR_EVOLUTION_MAP_STATE, 15
	return


ITEM_EDGEVILLE_1::
	finditem ITEM_PURPLE_SWEETS
	end


SIGNPOST_EDGEVILLE_GYM::
	lock
	msgbox SIGNPOST_EDGEVILLE_GYM_Text_0
	closemessage
	hidenamebox
	release
	end


NPC_EDGEVILLE_1::
	lock
	faceplayer
	namebox NPC_EDGEVILLE_1_Text_0
	msgbox NPC_EDGEVILLE_1_Text_1
	closemessage
	hidenamebox
	release
	end


NPC_EDGEVILLE_2::
	lock
	faceplayer
	namebox NPC_EDGEVILLE_2_Text_0
	msgbox NPC_EDGEVILLE_2_Text_1
	closemessage
	hidenamebox
	release
	end


NPC_EDGEVILLE_3::
	lock
	faceplayer
	namebox NPC_EDGEVILLE_3_Text_0
	msgbox NPC_EDGEVILLE_3_Text_1
	closemessage
	hidenamebox
	release
	end


NPC_EDGEVILLE_4::
	lock
	faceplayer
	namebox NPC_EDGEVILLE_4_Text_0
	msgbox NPC_EDGEVILLE_4_Text_1
	closemessage
	hidenamebox
	release
	end


NPC_EDGEVILLE_5::
	lock
	faceplayer
	namebox NPC_EDGEVILLE_5_Text_0
	msgbox NPC_EDGEVILLE_5_Text_1
	closemessage
	hidenamebox
	release
	end


NPC_EDGEVILLE_6::
	lock
	faceplayer
	namebox NPC_EDGEVILLE_6_Text_0
	msgbox NPC_EDGEVILLE_6_Text_1
	closemessage
	hidenamebox
	release
	end


NPC_EDGEVILLE_7::
	lock
	faceplayer
	namebox NPC_EDGEVILLE_4_Text_0
	msgbox NPC_EDGEVILLE_7_Text_0
	closemessage
	hidenamebox
	release
	end


NPC_EDGEVILLE_8::
	lock
	faceplayer
	namebox NPC_EDGEVILLE_8_Text_0
	msgbox NPC_EDGEVILLE_8_Text_1
	closemessage
	hidenamebox
	release
	end


NPC_EDGEVILLE_9::
	lock
	faceplayer
	namebox NPC_EDGEVILLE_9_Text_0
	msgbox NPC_EDGEVILLE_9_Text_1
	closemessage
	hidenamebox
	release
	end


NPC_EDGEVILLE_10::
	lock
	faceplayer
	namebox NPC_EDGEVILLE_9_Text_0
	msgbox NPC_EDGEVILLE_10_Text_0
	closemessage
	hidenamebox
	release
	end


EDGEVILLE_SIGN_1::
	lock
	faceplayer
	msgbox EDGEVILLE_SIGN_1_Text_0
	release
	end


EDGEVILLE_SIGN_2::
	lock
	faceplayer
	msgbox EDGEVILLE_SIGN_2_Text_0
	release
	end


NPC_EDGEVILLE_VANNAKA_SLAYER_MASTER::
	lock
	faceplayer
	namebox NPC_EDGEVILLE_VANNAKA_SLAYER_MASTER_Text_0
	questmenu QUEST_MENU_CHECK_COMPLETE, QUEST_KOUREND_SLAYER
	compare VAR_RESULT, 0
	goto_if_eq NPC_EDGEVILLE_VANNAKA_SLAYER_MASTER_2
	msgbox NPC_EDGEVILLE_VANNAKA_SLAYER_MASTER_Text_1
	closemessage
	hidenamebox
	call FUNCTION_SLAYER_TASK_MASTER
NPC_EDGEVILLE_VANNAKA_SLAYER_MASTER_1:
	closemessage
	hidenamebox
	release
	end

NPC_EDGEVILLE_VANNAKA_SLAYER_MASTER_2:
	call EDGEVILLE_GYM_START
	goto NPC_EDGEVILLE_VANNAKA_SLAYER_MASTER_1


EDGEVILLE_GYM_START::
	compare VAR_POKESCAPE_EDGEVILLE_GYM_QUEST, 0
	goto_if_eq EDGEVILLE_GYM_START_2
	compare VAR_POKESCAPE_EDGEVILLE_GYM_QUEST, 5
	goto_if_eq EDGEVILLE_GYM_START_5
	compare VAR_POKESCAPE_EDGEVILLE_GYM_QUEST, 10
	goto_if_eq EDGEVILLE_GYM_START_12
	compare VAR_POKESCAPE_EDGEVILLE_GYM_QUEST, 15
	goto_if_eq EDGEVILLE_GYM_START_15
	compare VAR_POKESCAPE_EDGEVILLE_GYM_QUEST, 20
	goto_if_eq EDGEVILLE_GYM_START_17
	return

EDGEVILLE_GYM_START_2:
	msgbox EDGEVILLE_GYM_START_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne EDGEVILLE_GYM_START_8
	msgbox EDGEVILLE_GYM_START_Text_2
EDGEVILLE_GYM_START_7:
	return

EDGEVILLE_GYM_START_5:
	msgbox EDGEVILLE_GYM_START_Text_3
	return

EDGEVILLE_GYM_START_8:
	msgbox EDGEVILLE_GYM_START_Text_1
	startquest QUEST_KOUREND_SLAYER
	setvar VAR_POKESCAPE_EDGEVILLE_GYM_QUEST, 5
	goto EDGEVILLE_GYM_START_7

EDGEVILLE_GYM_START_12:
	msgbox EDGEVILLE_GYM_START_Text_4
	return

EDGEVILLE_GYM_START_15:
	msgbox EDGEVILLE_GYM_START_Text_5
	call EDGEVILLE_GYM_BATTLE_VANNAKA
	return

EDGEVILLE_GYM_START_17:
	msgbox EDGEVILLE_GYM_START_Text_6
	call EDGEVILLE_GYM_BATTLE_VANNAKA
	return


EDGEVILLE_GYM_BATTLE_VANNAKA::
	call GYM_BATTLE_VANNAKA
	compare VAR_RESULT, B_OUTCOME_LOST
	goto_if_eq EDGEVILLE_GYM_BATTLE_VANNAKA_2
	namebox NPC_EDGEVILLE_VANNAKA_SLAYER_MASTER_Text_0
	msgbox EDGEVILLE_GYM_BATTLE_VANNAKA_Text_0
	hidenamebox
	playfanfare MUS_PS_QUEST_COMPLETE
	msgbox EDGEVILLE_GYM_BATTLE_VANNAKA_Text_1
	waitfanfare
	waitmessage
	namebox NPC_EDGEVILLE_VANNAKA_SLAYER_MASTER_Text_0
	msgbox EDGEVILLE_GYM_BATTLE_VANNAKA_Text_2
	hidenamebox
	giveitem ITEM_TM48, 1
	compare VAR_RESULT, FALSE
	goto_if_eq Common_EventScript_ShowBagIsFull
	playfanfare MUS_PS_QUEST_COMPLETE
	setvar VAR_0x8004, 12
	special GiveFrontierBattlePoints
	msgbox EDGEVILLE_GYM_BATTLE_VANNAKA_Text_3
	waitmessage
	waitfanfare
	closemessage
	namebox NPC_EDGEVILLE_VANNAKA_SLAYER_MASTER_Text_0
	msgbox EDGEVILLE_GYM_BATTLE_VANNAKA_Text_4
	setvar VAR_POKESCAPE_EDGEVILLE_GYM_QUEST, 25
	setflag FLAG_BADGE07_GET
	addvar VAR_GAMEMODE_LEVEL_SCALING, 1
	msgbox EDGEVILLE_GYM_BATTLE_VANNAKA_Text_5
	msgbox EDGEVILLE_GYM_BATTLE_VANNAKA_Text_6
	closemessage
	hidenamebox
	questmenu QUEST_MENU_COMPLETE_QUEST, QUEST_KOUREND_SLAYER
	release
	return

EDGEVILLE_GYM_BATTLE_VANNAKA_2:
	setvar VAR_POKESCAPE_EDGEVILLE_GYM_QUEST, 20
	end


BATTLE_BASILISK_GYM::
	lock
	faceplayer
	namebox BATTLE_BASILISK_GYM_Text_0
	playmoncry SPECIES_BASILISK, 0
	msgbox BATTLE_BASILISK_GYM_Text_1
	waitmoncry
	hidenamebox
	closemessage
	delay 1
	setwildbattle SPECIES_BASILISK, 45, ITEM_NONE
	dowildbattleNoCatch
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq BATTLE_BASILISK_GYM_2
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq BATTLE_BASILISK_GYM_3
	compare VAR_RESULT, B_OUTCOME_LOST
	goto_if_eq BATTLE_BASILISK_GYM_4
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq BATTLE_BASILISK_GYM_5
BATTLE_BASILISK_GYM_1:
	end

BATTLE_BASILISK_GYM_2:
	fadescreen FADE_TO_BLACK
	setvar VAR_POKESCAPE_EDGEVILLE_GYM_QUEST, 15
	removeobject VAR_LAST_TALKED
	fadescreen FADE_FROM_BLACK
	call EDGEVILLE_GYM_GIVE_SLAYER_POINTS
	goto BATTLE_BASILISK_GYM_1

BATTLE_BASILISK_GYM_3:
	fadescreen FADE_TO_BLACK
	setvar VAR_POKESCAPE_EDGEVILLE_GYM_QUEST, 15
	removeobject VAR_LAST_TALKED
	fadescreen FADE_FROM_BLACK
	call EDGEVILLE_GYM_GIVE_SLAYER_POINTS
	goto BATTLE_BASILISK_GYM_1

BATTLE_BASILISK_GYM_4:
	setvar VAR_POKESCAPE_EDGEVILLE_GYM_QUEST, 10
	closemessage
	end

BATTLE_BASILISK_GYM_5:
	namebox BATTLE_BASILISK_GYM_Text_0
	playmoncry SPECIES_BASILISK, 0
	msgbox BATTLE_BASILISK_GYM_Text_2
	closemessage
	hidenamebox
	msgbox BATTLE_BASILISK_GYM_Text_3
	closemessage
	goto BATTLE_BASILISK_GYM_1


EDGEVILLE_GYM_GIVE_SLAYER_POINTS::
	playfanfare MUS_PS_QUEST_COMPLETE
	setvar VAR_0x8004, 12
	special GiveFrontierBattlePoints
	msgbox EDGEVILLE_GYM_GIVE_SLAYER_POINTS_Text_0
	waitmessage
	waitfanfare
	closemessage
	msgbox EDGEVILLE_GYM_GIVE_SLAYER_POINTS_Text_1
	closemessage
	return


NPC_EDGEVILLE_GYM_LADDER::
	msgbox NPC_EDGEVILLE_GYM_LADDER_Text_0
	closemessage
	end


ITEM_BRASS_HOUSE::
	finditem ITEM_EFFIGY
	end


TRIGGER_BRASS_KEY_DOOR::
	lock
	goto_if_unset FLAG_BRASS_KEY, TRIGGER_BRASS_KEY_DOOR_2
	setvar VAR_TEMP_1, 1
	release
	end

TRIGGER_BRASS_KEY_DOOR_2:
	msgbox TRIGGER_BRASS_KEY_DOOR_Text_0
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, MOVEMENT_WALK_DOWN
	waitmovement 0
	release
	end


FIND_BRASS_KEY::
	lock
	setflag FLAG_BRASS_KEY
	removeobject VAR_LAST_TALKED
	playfanfare MUS_OBTAIN_ITEM
	msgbox FIND_BRASS_KEY_Text_0
	waitfanfare
	closemessage
	release
	end


ITEM_EDGEVILLE_INDOOR_1::
	finditem ITEM_NONE
	end


ITEM_EDGEVILLE_INDOOR_2::
	finditem ITEM_FIRE_RUNE
	end


NPC_EDGEVILLE_HOUSE_NPC_1::
	lock
	faceplayer
	msgbox NPC_EDGEVILLE_HOUSE_NPC_1_Text_0
	closemessage
	hidenamebox
	release
	end


NPC_EDGEVILLE_HOUSE_NPC_2::
	lock
	faceplayer
	msgbox NPC_EDGEVILLE_HOUSE_NPC_1_Text_0
	closemessage
	hidenamebox
	release
	end


NPC_EDGEVILLE_HOUSE_NPC_3::
	lock
	faceplayer
	msgbox NPC_EDGEVILLE_HOUSE_NPC_1_Text_0
	closemessage
	hidenamebox
	release
	end


NPC_EDGEVILLE_HOUSE_NPC_4::
	lock
	faceplayer
	msgbox NPC_EDGEVILLE_HOUSE_NPC_1_Text_0
	closemessage
	hidenamebox
	release
	end


NPC_EDGEVILLE_HOUSE_NPC_5::
	lock
	faceplayer
	msgbox NPC_EDGEVILLE_HOUSE_NPC_1_Text_0
	closemessage
	hidenamebox
	release
	end


NPC_EDGEVILLE_HOUSE_NPC_6::
	lock
	faceplayer
	namebox NPC_EDGEVILLE_HOUSE_NPC_6_Text_0
	msgbox NPC_EDGEVILLE_HOUSE_NPC_6_Text_1
	closemessage
	hidenamebox
	release
	end


NPC_EDGEVILLE_HOUSE_NPC_7::
	lock
	faceplayer
	namebox NPC_EDGEVILLE_HOUSE_NPC_7_Text_0
	msgbox NPC_EDGEVILLE_HOUSE_NPC_7_Text_1
	closemessage
	hidenamebox
	release
	end


NPC_EDGEVILLE_HOUSE_NPC_8::
	lock
	faceplayer
	namebox NPC_EDGEVILLE_HOUSE_NPC_8_Text_0
	msgbox NPC_EDGEVILLE_HOUSE_NPC_8_Text_1
	closemessage
	hidenamebox
	release
	end


NPC_EDGEVILLE_HOUSE_NPC_9::
	lock
	faceplayer
	msgbox NPC_EDGEVILLE_HOUSE_NPC_1_Text_0
	closemessage
	hidenamebox
	release
	end


NPC_EDGEVILLE_HOUSE_NPC_10::
	lock
	faceplayer
	msgbox NPC_EDGEVILLE_HOUSE_NPC_1_Text_0
	closemessage
	hidenamebox
	release
	end


BATTLE_EDGEVILLE_GYM_1::
	trainerbattle_single TRAINER_EDGEVILLE_GYM_1, BATTLE_EDGEVILLE_GYM_1_Text_0, BATTLE_EDGEVILLE_GYM_1_Text_1
	msgbox BATTLE_EDGEVILLE_GYM_1_Text_2
	hidenamebox
	release
	end


BATTLE_EDGEVILLE_GYM_2::
	trainerbattle_single TRAINER_EDGEVILLE_GYM_2, BATTLE_EDGEVILLE_GYM_2_Text_0, BATTLE_EDGEVILLE_GYM_2_Text_1
	msgbox BATTLE_EDGEVILLE_GYM_2_Text_2
	hidenamebox
	release
	end


BATTLE_EDGEVILLE_GYM_3::
	trainerbattle_single TRAINER_EDGEVILLE_GYM_3, BATTLE_EDGEVILLE_GYM_3_Text_0, BATTLE_EDGEVILLE_GYM_3_Text_1
	hidenamebox
	msgbox BATTLE_EDGEVILLE_GYM_3_Text_2
	hidenamebox
	release
	end


BATTLE_EDGEVILLE_GYM_4::
	trainerbattle_single TRAINER_EDGEVILLE_GYM_4, BATTLE_EDGEVILLE_GYM_4_Text_0, BATTLE_EDGEVILLE_GYM_4_Text_1
	hidenamebox
	msgbox BATTLE_EDGEVILLE_GYM_4_Text_2
	hidenamebox
	release
	end


BATTLE_EDGEVILLE_GYM_5::
	trainerbattle_single TRAINER_EDGEVILLE_GYM_5, BATTLE_EDGEVILLE_GYM_5_Text_0, BATTLE_EDGEVILLE_GYM_5_Text_1
	namebox BATTLE_EDGEVILLE_GYM_5_Text_2
	msgbox BATTLE_EDGEVILLE_GYM_5_Text_3
	hidenamebox
	release
	end


BATTLE_EDGEVILLE_GYM_6::
	trainerbattle_single TRAINER_EDGEVILLE_GYM_6, BATTLE_EDGEVILLE_GYM_6_Text_0, BATTLE_EDGEVILLE_GYM_6_Text_1
	hidenamebox
	msgbox BATTLE_EDGEVILLE_GYM_6_Text_2
	hidenamebox
	release
	end


BATTLE_EDGEVILLE_GYM_7::
	trainerbattle_single TRAINER_EDGEVILLE_GYM_7, BATTLE_EDGEVILLE_GYM_7_Text_0, BATTLE_EDGEVILLE_GYM_7_Text_1
	namebox BATTLE_EDGEVILLE_GYM_7_Text_2
	msgbox BATTLE_EDGEVILLE_GYM_7_Text_3
	hidenamebox
	release
	end


BATTLE_EDGEVILLE_GYM_8::
	trainerbattle_single TRAINER_EDGEVILLE_GYM_8, BATTLE_EDGEVILLE_GYM_8_Text_0, BATTLE_EDGEVILLE_GYM_8_Text_1
	namebox BATTLE_EDGEVILLE_GYM_7_Text_2
	msgbox BATTLE_EDGEVILLE_GYM_8_Text_2
	hidenamebox
	release
	end


BATTLE_EDGEVILLE_GYM_9::
	trainerbattle_single TRAINER_EDGEVILLE_GYM_9, BATTLE_EDGEVILLE_GYM_9_Text_0, BATTLE_EDGEVILLE_GYM_9_Text_1
	namebox BATTLE_EDGEVILLE_GYM_7_Text_2
	msgbox BATTLE_EDGEVILLE_GYM_9_Text_1
	hidenamebox
	release
	end


GOBLIN_EDGEVILLE_GYM::
	lock
	faceplayer
	namebox GOBLIN_EDGEVILLE_GYM_Text_0
	msgbox GOBLIN_EDGEVILLE_GYM_Text_1
	closemessage
	hidenamebox
	release
	end


SIGNPOST_EDGEVILLE_GYM_Text_0:
	.string "Edgeville Gym, located beneath the\n"
	.string "graveyard.$"

NPC_EDGEVILLE_1_Text_0:
	.string "Mugger$"

NPC_EDGEVILLE_1_Text_1:
	.string "Beyond here is the Wilderness.\p"
	.string "I'd suggest steering clear of it if I\n"
	.string "were you.\p"
	.string "Someone might mug you and take your\n"
	.string "stuff..$"

NPC_EDGEVILLE_2_Text_0:
	.string "Fisherman$"

NPC_EDGEVILLE_2_Text_1:
	.string "There's this crazy person in that house\n"
	.string "who lives with his mum.\p"
	.string "If you listen really carefully,\n"
	.string "sometimes you can hear his mum shout\l"
	.string "that he needs a bath, and you can hear\l"
	.string "him yell 'BUT I SMELL POSITIVELY\l"
	.string "EEEVIIILLLL'$"

NPC_EDGEVILLE_3_Text_0:
	.string "Choob$"

NPC_EDGEVILLE_3_Text_1:
	.string "Welcome to Edgeville.\p"
	.string "Are you looking for Vannaka? He's just\n"
	.string "south of here.. in that creepy dungeon!$"

NPC_EDGEVILLE_4_Text_0:
	.string "PVMer$"

NPC_EDGEVILLE_4_Text_1:
	.string "If you go south into the dungeon you\n"
	.string "can face a bunch of monsters.\p"
	.string "Adventurers come from all over Gielinor\n"
	.string "to murder hill giants there for their\l"
	.string "bones.\p"
	.string "It's quite fun actually.$"

NPC_EDGEVILLE_5_Text_0:
	.string "SkillSpecs$"

NPC_EDGEVILLE_5_Text_1:
	.string "Argh! I nearly smited an AGS but the guy\n"
	.string "I was fighting tele'd away..\p"
	.string "I'm going to restock and then head\n"
	.string "north again.\p"
	.string "I better not find you up in the\n"
	.string "Wilderness without your most expensive\l"
	.string "items..$"

NPC_EDGEVILLE_6_Text_0:
	.string "Hanannie$"

NPC_EDGEVILLE_6_Text_1:
	.string "Hey, this is my yew tree! Go get your\n"
	.string "own!$"

NPC_EDGEVILLE_7_Text_0:
	.string "I hear some monsters only evolve in\n"
	.string "certain areas.\p"
	.string "For instance, one of my chickens\n"
	.string "evolved differently while I was on\l"
	.string "Karamja!$"

NPC_EDGEVILLE_8_Text_0:
	.string "Man$"

NPC_EDGEVILLE_8_Text_1:
	.string "Edgeville was recently rebuilt.\p"
	.string "But with all these adventurers\n"
	.string "constantly using the place it almost\l"
	.string "feels well lived.$"

NPC_EDGEVILLE_9_Text_0:
	.string "Jailer$"

NPC_EDGEVILLE_9_Text_1:
	.string "Edgeville doesn't really have a monarch\n"
	.string "of its own, so we abide by the King of\l"
	.string "Misthalin.\p"
	.string "It makes things easier when you can\n"
	.string "just follow orders without thinking too\l"
	.string "much about it.$"

NPC_EDGEVILLE_10_Text_0:
	.string "Let this be a fair warning. If you cause\n"
	.string "any trouble, we will lock you up and only\l"
	.string "feed you bread and water.$"

EDGEVILLE_SIGN_1_Text_0:
	.string "North to Edgeville.\p"
	.string "West to the Monastery and Dwarven\n"
	.string "Mountain.$"

EDGEVILLE_SIGN_2_Text_0:
	.string "COMING SOON: a route to the Grand\n"
	.string "Exchange.\p"
	.string "Courtesy of King Roald III of Varrock.$"

NPC_EDGEVILLE_VANNAKA_SLAYER_MASTER_Text_0:
	.string "Vannaka$"

NPC_EDGEVILLE_VANNAKA_SLAYER_MASTER_Text_1:
	.string "Hello {PLAYER}, what can I do for you?$"

EDGEVILLE_GYM_START_Text_0:
	.string "Welcome to the Edgeville Gym.\p"
	.string "I am Vannaka, I suppose you want this\n"
	.string "badge.\p"
	.string "Before I give it to you I you will have\n"
	.string "to complete my gym challenge.\p"
	.string "The challenge is complete a Slayer task\n"
	.string "within this dungeon.\p"
	.string "Are you up for the challenge?$"

EDGEVILLE_GYM_START_Text_1:
	.string "Excellent, I shall open the gate for\n"
	.string "you.\p"
	.string "You current Slayer Assignment is to\n"
	.string "slay 1 Basilisk within this Dungeon.$"

EDGEVILLE_GYM_START_Text_2:
	.string "Come back if you wish to challenge me.$"

EDGEVILLE_GYM_START_Text_3:
	.string "You can find a Basilisk deep within this\n"
	.string "dungeon.\p"
	.string "Feel free to show off to those pesky\n"
	.string "hill giants.$"

EDGEVILLE_GYM_START_Text_4:
	.string "You lost to the Basilisk?\p"
	.string "Maybe you're not as strong as I thought\n"
	.string "you were.\p"
	.string "Go give it another try.$"

EDGEVILLE_GYM_START_Text_5:
	.string "Well done in defeating that Basilisk.\p"
	.string "It looks like you even got slayer points\n"
	.string "from defeating it!\p"
	.string "You can buy items from my slayer shop\n"
	.string "with those points.\p"
	.string "But I am getting ahead of myself, you\n"
	.string "have proven yourself worth of a battle\l"
	.string "with the mighty slayer master Vannaka.\p"
	.string "It is my duty of the Gym Leader of\n"
	.string "Edgeville to accept your challenge.\p"
	.string "Very well, show me what you've got!$"

EDGEVILLE_GYM_START_Text_6:
	.string "Back for more?\p"
	.string "Lets go!$"

EDGEVILLE_GYM_BATTLE_VANNAKA_Text_0:
	.string "Here, you deserve this Badge.$"

EDGEVILLE_GYM_BATTLE_VANNAKA_Text_1:
	.string "{PLAYER} received the EDGEVILLE\n"
	.string "BADGE from Vannaka.$"

EDGEVILLE_GYM_BATTLE_VANNAKA_Text_2:
	.string "Also have this Scroll and some Slayer\n"
	.string "Point(s).$"

EDGEVILLE_GYM_BATTLE_VANNAKA_Text_3:
	.string "{PLAYER} obtained 12 Slayer Point(s).$"

EDGEVILLE_GYM_BATTLE_VANNAKA_Text_4:
	.string "That move is called Power Gem.\p"
	.string "It sparkles just as all our precious\n"
	.string "Gems around the palace do.$"

EDGEVILLE_GYM_BATTLE_VANNAKA_Text_5:
	.string "Now that you've bested me you are\n"
	.string "eligible to take Slayer Tasks from me.\p"
	.string "Talk to me again if you'd like to\n"
	.string "particpate.$"

EDGEVILLE_GYM_BATTLE_VANNAKA_Text_6:
	.string "Also you should make your way to\n"
	.string "Daemonheim in the Wilderness for your\l"
	.string "next badge.$"

BATTLE_BASILISK_GYM_Text_0:
	.string "Basilisk$"

BATTLE_BASILISK_GYM_Text_1:
	.string "ZREOWWRAH!$"

BATTLE_BASILISK_GYM_Text_2:
	.string "ZGREOUWWRAHH!!!$"

BATTLE_BASILISK_GYM_Text_3:
	.string "The Basilisk seems to be angry with you.$"

EDGEVILLE_GYM_GIVE_SLAYER_POINTS_Text_0:
	.string "Slayer Assignment complete!\n"
	.string "{PLAYER} obtained 12 Slayer Point(s).$"

EDGEVILLE_GYM_GIVE_SLAYER_POINTS_Text_1:
	.string "You should return to Vannaka.$"

NPC_EDGEVILLE_GYM_LADDER_Text_0:
	.string "The ladder appears to be broken.$"

TRIGGER_BRASS_KEY_DOOR_Text_0:
	.string "The door is locked with what looks like\n"
	.string "a brass padlock.$"

FIND_BRASS_KEY_Text_0:
	.string "{PLAYER} obtained the BRASS KEY.$"

NPC_EDGEVILLE_HOUSE_NPC_1_Text_0:
	.string "Hello, I am a Cupholder.$"

NPC_EDGEVILLE_HOUSE_NPC_6_Text_0:
	.string "Oziach$"

NPC_EDGEVILLE_HOUSE_NPC_6_Text_1:
	.string "Aye, 'tis a fair day my friend.\p"
	.string "May the gods walk by yer side.\p"
	.string "Now leave me alone, I'm all outta rune\n"
	.string "platebodies.$"

NPC_EDGEVILLE_HOUSE_NPC_7_Text_0:
	.string "RUMadBr0$"

NPC_EDGEVILLE_HOUSE_NPC_7_Text_1:
	.string "What do you mean you don't sell PK\n"
	.string "supplies!?\p"
	.string "We are right next to the Wilderness!\p"
	.string "Who on Gielinor is going to come in here\n"
	.string "wanting to buy shears or a cake tin!$"

NPC_EDGEVILLE_HOUSE_NPC_8_Text_0:
	.string "DHBOMB99$"

NPC_EDGEVILLE_HOUSE_NPC_8_Text_1:
	.string "I'm waiting on my friend buying some\n"
	.string "supplies, then we are going to the\l"
	.string "Wilderness to PK and get filthy rich!$"

BATTLE_EDGEVILLE_GYM_1_Text_0:
	.string "My current slayer task is Skeletons.\p"
	.string "You're one of those right?!$"

BATTLE_EDGEVILLE_GYM_1_Text_1:
	.string "Woah, calm down it was a joke.$"

BATTLE_EDGEVILLE_GYM_1_Text_2:
	.string "I got a task from Vannaka, did you?$"

BATTLE_EDGEVILLE_GYM_2_Text_0:
	.string "Brrraaaiiinnnsss…$"

BATTLE_EDGEVILLE_GYM_2_Text_1:
	.string "Guh?$"

BATTLE_EDGEVILLE_GYM_2_Text_2:
	.string "Heh, sorry I just needed some brains so\n"
	.string "I can summon more conjures.$"

BATTLE_EDGEVILLE_GYM_3_Text_0:
	.string "The skeleton stumbles to life ready to\n"
	.string "slay you!$"

BATTLE_EDGEVILLE_GYM_3_Text_1:
	.string "crumble… crumble…$"

BATTLE_EDGEVILLE_GYM_3_Text_2:
	.string "The skeleton seems disapointed to have\n"
	.string "been slayed by you.$"

BATTLE_EDGEVILLE_GYM_4_Text_0:
	.string "The skeleton shudders a loud bone\n"
	.string "rattling screech.$"

BATTLE_EDGEVILLE_GYM_4_Text_1:
	.string "Sreeeee…$"

BATTLE_EDGEVILLE_GYM_4_Text_2:
	.string "The skeleton ignores you.$"

BATTLE_EDGEVILLE_GYM_5_Text_0:
	.string "Wooosh!$"

BATTLE_EDGEVILLE_GYM_5_Text_1:
	.string "Wooo…sh…$"

BATTLE_EDGEVILLE_GYM_5_Text_2:
	.string "MOSS GIANT$"

BATTLE_EDGEVILLE_GYM_5_Text_3:
	.string "wooshing sounds$"

BATTLE_EDGEVILLE_GYM_6_Text_0:
	.string "You attack the skeleton!$"

BATTLE_EDGEVILLE_GYM_6_Text_1:
	.string "Rattle…rattle…$"

BATTLE_EDGEVILLE_GYM_6_Text_2:
	.string "The skeleton is upset that you\n"
	.string "attacked it out of nowhere.$"

BATTLE_EDGEVILLE_GYM_7_Text_0:
	.string "LITTLE HUMAN.\l"
	.string "WHAT ARE YOU DOING HERE?!$"

BATTLE_EDGEVILLE_GYM_7_Text_1:
	.string "OW! WHY…$"

BATTLE_EDGEVILLE_GYM_7_Text_2:
	.string "HILL GIANT$"

BATTLE_EDGEVILLE_GYM_7_Text_3:
	.string "WHY IS LITTLE HUMAN HERE?$"

BATTLE_EDGEVILLE_GYM_8_Text_0:
	.string "OH! SECOND DINNER!$"

BATTLE_EDGEVILLE_GYM_8_Text_1:
	.string "ARGH REFLUX!$"

BATTLE_EDGEVILLE_GYM_8_Text_2:
	.string "ME WAS HUNGRY. HUMAN NOT GOOD DINNER.$"

BATTLE_EDGEVILLE_GYM_9_Text_0:
	.string "OI WHAT ARE YOU DOING IN ME CAVE?!$"

BATTLE_EDGEVILLE_GYM_9_Text_1:
	.string "GET OUT OF ME CAVE…$"

GOBLIN_EDGEVILLE_GYM_Text_0:
	.string "Hobgoblin$"

GOBLIN_EDGEVILLE_GYM_Text_1:
	.string "Aye human.\p"
	.string "Don't get any bright ideas.\p"
	.string "I'm just minding my own business, you\n"
	.string "should too.$"
