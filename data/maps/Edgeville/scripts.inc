Edgeville_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Edgeville_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Edgeville_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setvar VAR_EVOLUTION_MAP_STATE, 15
	return


ITEM_EDGEVILLE_1::
	finditem ITEM_PURPLE_SWEETS
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
	namebox NPC_EDGEVILLE_1_Text_0
	msgbox NPC_EDGEVILLE_1_Text_1
	closemessage
	hidenamebox
	release
	end


NPC_EDGEVILLE_3::
	lock
	faceplayer
	namebox NPC_EDGEVILLE_1_Text_0
	msgbox NPC_EDGEVILLE_1_Text_1
	closemessage
	hidenamebox
	release
	end


NPC_EDGEVILLE_4::
	lock
	faceplayer
	namebox NPC_EDGEVILLE_1_Text_0
	msgbox NPC_EDGEVILLE_1_Text_1
	closemessage
	hidenamebox
	release
	end


NPC_EDGEVILLE_5::
	lock
	faceplayer
	namebox NPC_EDGEVILLE_1_Text_0
	msgbox NPC_EDGEVILLE_1_Text_1
	closemessage
	hidenamebox
	release
	end


NPC_EDGEVILLE_6::
	lock
	faceplayer
	namebox NPC_EDGEVILLE_1_Text_0
	msgbox NPC_EDGEVILLE_1_Text_1
	closemessage
	hidenamebox
	release
	end


NPC_EDGEVILLE_7::
	lock
	faceplayer
	namebox NPC_EDGEVILLE_1_Text_0
	msgbox NPC_EDGEVILLE_1_Text_1
	closemessage
	hidenamebox
	release
	end


NPC_EDGEVILLE_8::
	lock
	faceplayer
	namebox NPC_EDGEVILLE_1_Text_0
	msgbox NPC_EDGEVILLE_1_Text_1
	closemessage
	hidenamebox
	release
	end


NPC_EDGEVILLE_9::
	lock
	faceplayer
	namebox NPC_EDGEVILLE_1_Text_0
	msgbox NPC_EDGEVILLE_1_Text_1
	closemessage
	hidenamebox
	release
	end


NPC_EDGEVILLE_10::
	lock
	faceplayer
	namebox NPC_EDGEVILLE_1_Text_0
	msgbox NPC_EDGEVILLE_1_Text_1
	closemessage
	hidenamebox
	release
	end


NPC_EDGEVILLE_1_Text_0:
	.string "Cupholder$"

NPC_EDGEVILLE_1_Text_1:
	.string "Hello, I am a Cupholder.$"
