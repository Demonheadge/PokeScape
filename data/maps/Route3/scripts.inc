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
    goto_if_defeated TRAINER_MAGGIE, Script_Maggie_2
    msgbox Text_DIALOG_1_Maggie, MSGBOX_YESNO
    compare VAR_RESULT, NO
    goto_if_eq Script_Maggie_PlayerAnsweredNo
    trainerbattle_single TRAINER_MAGGIE, Text_INTRO_Maggie, Text_DEFEAT_Maggie, Scripts_DEFEATED_Maggie
    release
    end

Text_DIALOG_1_Maggie:
	.string "Hi!\n"
	.string "My name is Maggie.\p"
	.string "Say cha looks pretty strong,\n"
	.string "care for a battle?$"

Script_Maggie_PlayerAnsweredNo:
	msgbox Text_DIALOG_4_Maggie, MSGBOX_NPC
	release
	end

Text_INTRO_Maggie:
	.string "I hope you prepared chaself!$"

Text_DEFEAT_Maggie:
	.string "Sweet, sweet victory.$"

Scripts_DEFEATED_Maggie:
	msgbox Text_DIALOG_2_Maggie, MSGBOX_NPC
	giveitem ITEM_PURPLE_SWEETS, 1
	msgbox Text_DIALOG_3_Maggie, MSGBOX_NPC	
	release
	end

Text_DIALOG_2_Maggie:
	.string "That was quite amusing don'tcha know.\p"
	.string "I have had far too many sweets, here.$"
	
Text_DIALOG_3_Maggie:
	.string "Come back to visit whenever!$"

Text_DIALOG_4_Maggie:
	.string "Thats anything but sweet of cha.$"	
	
	
	
Script_Maggie_2:	
	msgbox Text_DIALOG_5_Maggie, MSGBOX_NPC
	release
	end
	
Text_DIALOG_5_Maggie:
	.string "Oh hi!\n"
	.string "It's cha again!$"		
	
	
	
	
	
	
Script_Wendy_1::
	lock
	faceplayer
	goto_if_defeated TRAINER_MAGGIE, Script_Wendy_2
	msgbox Text_Wendy_1, MSGBOX_NPC
	release
	end
	
Text_Wendy_1:
	.string "Seems like Maggie over there is urging\n"
	.string "for a battle.\p"
	.string "Stop by once in awhile for a quick fix\n"
	.string "won't you?$"


Script_Wendy_2:	
	msgbox Text_Wendy_2, MSGBOX_NPC
	release
	end
	
Text_Wendy_2:
	.string "Hey how's it going?\n"
	.string "Maggie has been in a better mood since\l"
	.string "your last battle.\p"
	.string "She usually becomes to irritating to be\n"
	.string "around without her battle fix.$"
	

	

	
Script_SkeletalOx::
	lock
	msgbox Text_SkeletalOx, MSGBOX_DEFAULT
	release
	end

Text_SkeletalOx:
	.string "Baroo!$"

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
