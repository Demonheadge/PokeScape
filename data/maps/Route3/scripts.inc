Route3_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route3_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Route3_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setvar VAR_EVOLUTION_MAP_STATE, 1
	return


ITEM_ROUTE3_BREAD::
	finditem ITEM_BREAD
	end


ITEM_ROUTE3_REPEL_TEA::
	finditem ITEM_REPEL_TEA_1
	end


ITEM_BARBARIAN_VILLAGE_1::
	finditem ITEM_BODY_RUNE
	end


ITEM_BARBARIAN_VILLAGE_2::
	finditem ITEM_POUCH_ANCIENT
	end


ITEM_BARBARIAN_VILLAGE_3::
	finditem ITEM_REPEL_TEA_2
	end


ITEM_MUDSKIPPER_SOUND_1::
	finditem ITEM_SPIRIT_CHARM
	end


BATTLE_ROUTE3_Trainer_2::
	trainerbattle_single TRAINER_ROUTE3_TRAINER_2, BATTLE_ROUTE3_Trainer_2_Text_0, BATTLE_ROUTE3_Trainer_2_Text_1
	msgbox BATTLE_ROUTE3_Trainer_2_Text_2
	hidenamebox
	release
	end


BATTLE_ROUTE3_Trainer_1::
	trainerbattle_single TRAINER_ROUTE3_TRAINER_1, BATTLE_ROUTE3_Trainer_1_Text_0, BATTLE_ROUTE3_Trainer_1_Text_1
	msgbox BATTLE_ROUTE3_Trainer_1_Text_2
	hidenamebox
	release
	end


Script_Cauldron::
	msgbox Script_Cauldron_Text_0
	closemessage
	release
	end


Script_Maggie_1::
	lock
	faceplayer
	namebox Script_Maggie_1_Text_0
	goto_if_defeated TRAINER_MAGGIE, Script_Maggie_2
	msgbox Script_Maggie_1_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_eq Script_Maggie_1_2
	msgbox Script_Maggie_1_Text_3
	trainerbattle_no_intro TRAINER_MAGGIE, Script_Maggie_1_Text_4
	msgbox Script_Maggie_1_Text_5
	hidenamebox
	giveitem ITEM_PURPLE_SWEETS, 1
	namebox Script_Maggie_1_Text_0
	msgbox Script_Maggie_1_Text_6
	closemessage
	release
	end

Script_Maggie_1_2:
	msgbox Script_Maggie_1_Text_2
	release
	end


Script_Maggie_2::
	msgbox Script_Maggie_2_Text_0
	closemessage
	release
	end


Script_Wendy_1::
	lock
	faceplayer
	namebox Script_Wendy_1_Text_0
	checktrainerflag TRAINER_MAGGIE
	goto_if 0, Script_Wendy_1_2
	msgbox Script_Wendy_1_Text_2
	release
	end

Script_Wendy_1_2:
	msgbox Script_Wendy_1_Text_1
	release
	end


NPC_SKELETAL_OX_NORMAN::
	lock
	namebox NPC_SKELETAL_OX_NORMAN_Text_0
	playmoncry SPECIES_SKELETALOX_MALE_FORM, 0
	msgbox NPC_SKELETAL_OX_NORMAN_Text_1
	waitmoncry
	hidenamebox
	release
	end


NPC_SKELETAL_OX_BABE::
	lock
	namebox NPC_SKELETAL_OX_BABE_Text_0
	playmoncry SPECIES_SKELETALOX_FEMALE_FORM, 0
	msgbox NPC_SKELETAL_OX_BABE_Text_1
	waitmoncry
	hidenamebox
	release
	end


NPC_CAT_TROGS::
	lock
	faceplayer
	namebox NPC_CAT_TROGS_Text_0
	playmoncry SPECIES_CAT_PURPLE_FORM, 0
	msgbox NPC_CAT_TROGS_Text_1
	waitmoncry
	hidenamebox
	release
	end


BATTLE_MUDSKIPPERSOUND2_TRAINER_1::
	trainerbattle_single TRAINER_MUDSKIPPERSOUND2_TRAINER_1, BATTLE_MUDSKIPPERSOUND2_TRAINER_1_Text_0, BATTLE_MUDSKIPPERSOUND2_TRAINER_1_Text_1
	msgbox BATTLE_MUDSKIPPERSOUND2_TRAINER_1_Text_2
	hidenamebox
	closemessage
	release
	end


BATTLE_MUDSKIPPERSOUND2_TRAINER_2::
	trainerbattle_single TRAINER_MUDSKIPPERSOUND2_TRAINER_2, BATTLE_MUDSKIPPERSOUND2_TRAINER_2_Text_0, BATTLE_MUDSKIPPERSOUND2_TRAINER_2_Text_1
	msgbox BATTLE_MUDSKIPPERSOUND2_TRAINER_2_Text_2
	hidenamebox
	closemessage
	release
	end


BATTLE_MUDSKIPPERSOUND2_TRAINER_3::
	trainerbattle_single TRAINER_MUDSKIPPERSOUND2_TRAINER_3, BATTLE_MUDSKIPPERSOUND2_TRAINER_3_Text_0, BATTLE_MUDSKIPPERSOUND2_TRAINER_3_Text_1
	msgbox BATTLE_MUDSKIPPERSOUND2_TRAINER_3_Text_2
	hidenamebox
	closemessage
	release
	end


BATTLE_ROUTE3_Trainer_2_Text_0:
	.string "I'm going to give this whole battle with\n"
	.string "a monster thing a try!$"

BATTLE_ROUTE3_Trainer_2_Text_1:
	.string "Yeah, this isn't for me.$"

BATTLE_ROUTE3_Trainer_2_Text_2:
	.string "I think I'll stick to doing things on my\n"
	.string "own rather than with monsters.$"

BATTLE_ROUTE3_Trainer_1_Text_0:
	.string "I am not really a fan of MvM but I will\n"
	.string "give it a shot!$"

BATTLE_ROUTE3_Trainer_1_Text_1:
	.string "Yeah, I still don't like MvM.$"

BATTLE_ROUTE3_Trainer_1_Text_2:
	.string "I think I'll stick to skilling with my\n"
	.string "partners instead of trying out for the\l"
	.string "MvM championships.$"

Script_Cauldron_Text_0:
	.string "Something smells…{PAUSE 15}{PAUSE 15}{PAUSE 15}\n"
	.string "Interesting.$"

Script_Maggie_1_Text_0:
	.string "Maggie$"

Script_Maggie_1_Text_1:
	.string "Hiya!\n"
	.string "My name is Maggie.\p"
	.string "Say cha looks pretty strong, care for a\n"
	.string "battle?$"

Script_Maggie_1_Text_2:
	.string "That's anything but sweet of cha…$"

Script_Maggie_1_Text_3:
	.string "I hope you prepared chaself!$"

Script_Maggie_1_Text_4:
	.string "What?! How couldcha!$"

Script_Maggie_1_Text_5:
	.string "That was quite amusing don'tcha know.\p"
	.string "I have had far too many sweets, here.$"

Script_Maggie_1_Text_6:
	.string "Come back to visit whenever!$"

Script_Maggie_2_Text_0:
	.string "Oh, Hi!\n"
	.string "It's cha again!$"

Script_Wendy_1_Text_0:
	.string "Wendy$"

Script_Wendy_1_Text_1:
	.string "Seems like Maggie over there is urging\n"
	.string "for a battle.\p"
	.string "Stop by once in awhile for a quick fix\n"
	.string "won't you?$"

Script_Wendy_1_Text_2:
	.string "Hey how's it going?\n"
	.string "Maggie has been in a better mood since\l"
	.string "your last battle.\p"
	.string "She usually becomes to irritating to be\n"
	.string "around without her battle fix.$"

NPC_SKELETAL_OX_NORMAN_Text_0:
	.string "Norman$"

NPC_SKELETAL_OX_NORMAN_Text_1:
	.string "Waaroo!$"

NPC_SKELETAL_OX_BABE_Text_0:
	.string "Babe$"

NPC_SKELETAL_OX_BABE_Text_1:
	.string "Weeroo!$"

NPC_CAT_TROGS_Text_0:
	.string "Trogs$"

NPC_CAT_TROGS_Text_1:
	.string "Meeoow…$"

BATTLE_MUDSKIPPERSOUND2_TRAINER_1_Text_0:
	.string "Where am I?\p"
	.string "I don't remember logging out here.\p"
	.string "Also what am I wearing?!$"

BATTLE_MUDSKIPPERSOUND2_TRAINER_1_Text_1:
	.string "Why is all my money gone!?!!?$"

BATTLE_MUDSKIPPERSOUND2_TRAINER_1_Text_2:
	.string "I think… I've been hacked…$"

BATTLE_MUDSKIPPERSOUND2_TRAINER_2_Text_0:
	.string "This area is flowing with spiritual\n"
	.string "power! Can you feel it!?$"

BATTLE_MUDSKIPPERSOUND2_TRAINER_2_Text_1:
	.string "Oooom…$"

BATTLE_MUDSKIPPERSOUND2_TRAINER_2_Text_2:
	.string "I wonder how to get into the dungeon.\p"
	.string "I think that's where I'm feeling the\n"
	.string "spiritual power coming from.$"

BATTLE_MUDSKIPPERSOUND2_TRAINER_3_Text_0:
	.string "My boat crashed and now I'm stranded!$"

BATTLE_MUDSKIPPERSOUND2_TRAINER_3_Text_1:
	.string "I'm going to be stuck here forever…$"

BATTLE_MUDSKIPPERSOUND2_TRAINER_3_Text_2:
	.string "I would send for help but as you know\n"
	.string "I'm an Ironman.\p"
	.string "Which means… Urgh… I might as well call\n"
	.string "myself 'LittleIsle locked Ironman' from\l"
	.string "now on…$"
