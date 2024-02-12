Draynor_Bank_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, Draynor_Bank_MapScripts_MAP_SCRIPT_ON_LOAD
	map_script MAP_SCRIPT_ON_TRANSITION, Draynor_Bank_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Draynor_Bank_MapScripts_MAP_SCRIPT_ON_LOAD:
	call Draynor_Bank_OnTransition
	return

Draynor_Bank_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setvar VAR_EVOLUTION_MAP_STATE, 1
	return


Draynor_Bank_OnTransition::
	setrespawn HEAL_LOCATION_DRAYNOR
	return


NPC_DraynorBank_Qutiedoll::
	lock
	namebox NPC_DraynorBank_Qutiedoll_Text_0
	msgbox NPC_DraynorBank_Qutiedoll_Text_1
	hidenamebox
	release
	end


NPC_DraynorBank_Purepker895::
	lock
	faceplayer
	namebox NPC_DraynorBank_Purepker895_Text_0
	msgbox NPC_DraynorBank_Purepker895_Text_1
	hidenamebox
	release
	end


NPC_DraynorBank_1337sp34kr::
	lock
	faceplayer
	namebox NPC_DraynorBank_1337sp34kr_Text_0
	msgbox NPC_DraynorBank_1337sp34kr_Text_1
	hidenamebox
	release
	end


NPC_DraynorBank_Elfinlocks::
	lock
	faceplayer
	namebox NPC_DraynorBank_Elfinlocks_Text_0
	msgbox NPC_DraynorBank_Elfinlocks_Text_1
	hidenamebox
	release
	end


NPC_DraynorBank_PilloryGuard::
	lock
	faceplayer
	namebox NPC_DraynorBank_PilloryGuard_Text_0
	msgbox NPC_DraynorBank_PilloryGuard_Text_1
	hidenamebox
	release
	end


NPC_LumbridgeBank_NPC1::
	lock
	faceplayer
	msgbox NPC_LumbridgeBank_NPC1_Text_0
	hidenamebox
	release
	end


NPC_LumbridgeBank_NPC2::
	lock
	faceplayer
	msgbox NPC_LumbridgeBank_NPC2_Text_0
	hidenamebox
	release
	end


NPC_LumbridgeBank_NPC3::
	lock
	faceplayer
	msgbox NPC_LumbridgeBank_NPC3_Text_0
	hidenamebox
	release
	end


NPC_DraynorBank_Qutiedoll_Text_0:
	.string "Qutiedoll$"

NPC_DraynorBank_Qutiedoll_Text_1:
	.string "How do you get behind the bank booth?$"

NPC_DraynorBank_Purepker895_Text_0:
	.string "Purepker895$"

NPC_DraynorBank_Purepker895_Text_1:
	.string "…$"

NPC_DraynorBank_1337sp34kr_Text_0:
	.string "1337sp34kr$"

NPC_DraynorBank_1337sp34kr_Text_1:
	.string "S331ing N4ts!$"

NPC_DraynorBank_Elfinlocks_Text_0:
	.string "Elfinlocks$"

NPC_DraynorBank_Elfinlocks_Text_1:
	.string "Buying 2k nats, no noob offers!$"

NPC_DraynorBank_PilloryGuard_Text_0:
	.string "Pillory Guard$"

NPC_DraynorBank_PilloryGuard_Text_1:
	.string "You would be best to watch yourself.\p"
	.string "Otherwise you're in for da cage!$"

NPC_LumbridgeBank_NPC1_Text_0:
	.string "The Lumbridge Bank used to be on top of\n"
	.string "the Lumbridge Castle, but it was\l"
	.string "difficult to get there.\p"
	.string "Duke Horacio however started a Gym\n"
	.string "there and moved the Bank to a more\l"
	.string "convenient location.$"

NPC_LumbridgeBank_NPC2_Text_0:
	.string "Remember if your Monsters ever get\n"
	.string "poisoned you can feed them a Chocolate\l"
	.string "Sunday to make them feel better!\p"
	.string "What?\l"
	.string "Do not worry.\p"
	.string "Chocolate is not poisonous to\n"
	.string "Monsters.$"

NPC_LumbridgeBank_NPC3_Text_0:
	.string "These bankers are great, you can heal\n"
	.string "your Monsters and store your items.$"
