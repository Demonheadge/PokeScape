Draynor_Sewers_4_MapScripts::
	.byte 0


NPC_DRAYNOR_SEWERS_RUANTUN::
	lock
	faceplayer
	namebox NPC_DRAYNOR_SEWERS_RUANTUN_Text_0
	random 4
	switch VAR_RESULT
	case 0, NPC_DRAYNOR_SEWERS_RUANTUN_3
	case 1, NPC_DRAYNOR_SEWERS_RUANTUN_4
	case 2, NPC_DRAYNOR_SEWERS_RUANTUN_5
	case 3, NPC_DRAYNOR_SEWERS_RUANTUN_6
NPC_DRAYNOR_SEWERS_RUANTUN_1:
	hidenamebox
	closemessage
	release
	end

NPC_DRAYNOR_SEWERS_RUANTUN_3:
	msgbox NPC_DRAYNOR_SEWERS_RUANTUN_Text_1
	goto NPC_DRAYNOR_SEWERS_RUANTUN_1

NPC_DRAYNOR_SEWERS_RUANTUN_4:
	msgbox NPC_DRAYNOR_SEWERS_RUANTUN_Text_2
	goto NPC_DRAYNOR_SEWERS_RUANTUN_1

NPC_DRAYNOR_SEWERS_RUANTUN_5:
	msgbox NPC_DRAYNOR_SEWERS_RUANTUN_Text_3
	goto NPC_DRAYNOR_SEWERS_RUANTUN_1

NPC_DRAYNOR_SEWERS_RUANTUN_6:
	msgbox NPC_DRAYNOR_SEWERS_RUANTUN_Text_4
	goto NPC_DRAYNOR_SEWERS_RUANTUN_1


NPC_DRAYNOR_SEWERS_RUANTUN_Text_0:
	.string "Ruantun$"

NPC_DRAYNOR_SEWERS_RUANTUN_Text_1:
	.string "You ssshould not be down here...$"

NPC_DRAYNOR_SEWERS_RUANTUN_Text_2:
	.string "Beingsss sssuch as myssself cannot\n"
	.string "abide in the light...\p"
	.string "It is in the darknesss where we find our\n"
	.string "homesss...$"

NPC_DRAYNOR_SEWERS_RUANTUN_Text_3:
	.string "Thisss isss where I belong...$"

NPC_DRAYNOR_SEWERS_RUANTUN_Text_4:
	.string "Beware of crocodilesss in the water...$"
