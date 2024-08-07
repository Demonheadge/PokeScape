Route3_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route3_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Route3_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setvar VAR_EVOLUTION_MAP_STATE, 1
	return


ITEM_ROUTE3_BREAD::
	finditem ITEM_BREAD
	end


BATTLE_ROUTE3_Trainer_1::
	trainerbattle_single TRAINER_ROUTE3_TRAINER_1, BATTLE_ROUTE3_Trainer_1_Text_0, BATTLE_ROUTE3_Trainer_1_Text_1
	namebox BATTLE_ROUTE3_Trainer_1_Text_2
	msgbox BATTLE_ROUTE3_Trainer_1_Text_3
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


NPC_SKELETAL_OX::
	lock
	namebox NPC_SKELETAL_OX_Text_0
	playmoncry SPECIES_SKELETALOX_MALE_FORM, 0
	msgbox NPC_SKELETAL_OX_Text_1
	waitmoncry
	hidenamebox
	release
	end


BATTLE_ROUTE3_Trainer_1_Text_0:
	.string "I am not really a fan of MvM but I will\n"
	.string "give it a shot!$"

BATTLE_ROUTE3_Trainer_1_Text_1:
	.string "Yeah, I still don't like MvM.$"

BATTLE_ROUTE3_Trainer_1_Text_2:
	.string "IPWNSKILLS$"

BATTLE_ROUTE3_Trainer_1_Text_3:
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
	.string "Sweet, sweet victory.$"

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

NPC_SKELETAL_OX_Text_0:
	.string "Skeletal Ox$"

NPC_SKELETAL_OX_Text_1:
	.string "Waaroo!$"
