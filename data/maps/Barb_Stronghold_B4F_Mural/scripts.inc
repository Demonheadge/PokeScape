Barb_Stronghold_B4F_Mural_MapScripts::
	.byte 0


NPC_BARB_STRONGHOLD_B4F_Mural_NPC::
	lock
	faceplayer
	namebox NPC_BARB_STRONGHOLD_B4F_Mural_NPC_Text_0
	msgbox NPC_BARB_STRONGHOLD_B4F_Mural_NPC_Text_1
	hidenamebox
	release
	end


NPC_BARB_STRONGHOLD_B4F_Mural::
	lock
	msgbox NPC_BARB_STRONGHOLD_B4F_Mural_Text_0
	hidenamebox
	release
	end


NPC_BARB_STRONGHOLD_B4F_Mural_NPC_Text_0:
	.string "Archaeologist$"

NPC_BARB_STRONGHOLD_B4F_Mural_NPC_Text_1:
	.string "Oh how absolutely terrible!\p"
	.string "Some man dressed in all black ran in\n"
	.string "here earlier, chipped a piece off the\l"
	.string "mural, and then ran off!$"

NPC_BARB_STRONGHOLD_B4F_Mural_Text_0:
	.string "The mural depicts a cloud like creature\n"
	.string "of immense power wreaking havoc across\l"
	.string "the land.\p"
	.string "There is a small fragment of it missing.\p"
	.string "{PAUSE 15}This must be what the Black Knights\n"
	.string "acquired for Sigmund, but what could he\l"
	.string "possibly want with this...$"
