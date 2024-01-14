Falador_Bank_West_1F_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, Falador_Bank_West_1F_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

Falador_Bank_West_1F_MapScripts_MAP_SCRIPT_ON_LOAD:
	call Falador_Bank_OnTransition
	return


Falador_Bank_OnTransition::
	setrespawn HEAL_LOCATION_FALADOR
	return


NPC_FALADOR_BANK_GUARD_1::
	lock
	faceplayer
	namebox NPC_FALADOR_BANK_GUARD_1_Text_0
	msgbox NPC_FALADOR_BANK_GUARD_1_Text_1
	waitmessage
	hidenamebox
	release
	end


NPC_FALADOR_BANK_GUARD_1_Text_0:
	.string "Guard$"

NPC_FALADOR_BANK_GUARD_1_Text_1:
	.string "I am tasked with guarding this bank.\p"
	.string "However crime rates in Falador are\n"
	.string "really low due to the White Knights\l"
	.string "being here.$"
