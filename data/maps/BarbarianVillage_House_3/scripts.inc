BarbarianVillage_House_3_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, BarbarianVillage_House_3_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

BarbarianVillage_House_3_MapScripts_MAP_SCRIPT_ON_LOAD:
	call Barbarian_Village_VistorHall_OnTransition
	return


Barbarian_Village_VistorHall_OnTransition::
	setrespawn HEAL_LOCATION_BARBARIAN_VILLAGE
	return


NPC_BARBARIANVILLAGE_NPC7::
	lock
	faceplayer
	namebox NPC_BARBARIANVILLAGE_NPC7_Text_0
	msgbox NPC_BARBARIANVILLAGE_NPC7_Text_1
	fadescreenswapbuffers FADE_TO_BLACK
	playfanfare MUS_HEAL
	waitfanfare
	special HealPlayerParty
	fadescreenswapbuffers FADE_FROM_BLACK
	msgbox NPC_BARBARIANVILLAGE_NPC7_Text_2
	closemessage
	hidenamebox
	release
	end


BARBARIAN_VILLAGE_Banker::
	faceplayer
	namebox BARBARIAN_VILLAGE_Banker_Text_0
	msgbox BARBARIAN_VILLAGE_Banker_Text_1
	waitmessage
	goto BANK_OPTIONS
	return


NPC_BARBARIANVILLAGE_NPC7_Text_0:
	.string "Barbarian$"

NPC_BARBARIANVILLAGE_NPC7_Text_1:
	.string "You look tired, you should take a rest.$"

NPC_BARBARIANVILLAGE_NPC7_Text_2:
	.string "That's better, you and your MONSTERS\n"
	.string "are looking much more refreshed!$"

BARBARIAN_VILLAGE_Banker_Text_0:
	.string "Banker$"

BARBARIAN_VILLAGE_Banker_Text_1:
	.string "The barbarians refused to let the Bank\n"
	.string "of Gielinor build an official branch in\l"
	.string "their village.\p"
	.string "I'm still here to look after your items\n"
	.string "and monsters for you though.\p"
	.string "How may I help you today?$"
