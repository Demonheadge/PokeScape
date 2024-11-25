GoblinVillage_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, GoblinVillage_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

GoblinVillage_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setvar VAR_EVOLUTION_MAP_STATE, 14
	return


ITEM_GOBLIN_VILLAGE_1::
	finditem ITEM_LAMP_ATT
	end


ITEM_GOBLIN_VILLAGE_2::
	finditem ITEM_CAKE
	end


ITEM_GOBLIN_VILLAGE_3::
	finditem ITEM_PRAYER_POTION
	end


ITEM_GOBLIN_VILLAGE_4::
	finditem ITEM_CABBAGE
	end


ITEM_ROUTE24_1::
	finditem ITEM_STEEL_POUCH, 5
	end


ITEM_ROUTE24_2::
	finditem ITEM_POTION_SPATT
	end


ITEM_ROUTE24_3::
	finditem ITEM_MIND_RUNE
	end


ITEM_ROUTE24_4::
	finditem ITEM_MIND_RUNE
	end


NPC_GOBLINVILLAGE_GOBLIN_1::
	lock
	faceplayer
	namebox NPC_GOBLINVILLAGE_GOBLIN_1_Text_0
	msgbox NPC_GOBLINVILLAGE_GOBLIN_1_Text_1
	hidenamebox
	release
	end


NPC_GOBLINVILLAGE_GOBLIN_2::
	lock
	faceplayer
	namebox NPC_GOBLINVILLAGE_GOBLIN_2_Text_0
	msgbox NPC_GOBLINVILLAGE_GOBLIN_2_Text_1
	hidenamebox
	release
	end


NPC_GOBLINVILLAGE_GOBLIN_3::
	lock
	faceplayer
	namebox NPC_GOBLINVILLAGE_GOBLIN_3_Text_0
	msgbox NPC_GOBLINVILLAGE_GOBLIN_3_Text_1
	hidenamebox
	release
	end


NPC_GOBLINVILLAGE_GOBLIN_4::
	lock
	faceplayer
	namebox NPC_GOBLINVILLAGE_GOBLIN_4_Text_0
	msgbox NPC_GOBLINVILLAGE_GOBLIN_4_Text_1
	hidenamebox
	release
	end


NPC_GOBLINVILLAGE_GOBLIN_5::
	lock
	faceplayer
	namebox NPC_GOBLINVILLAGE_GOBLIN_5_Text_0
	msgbox NPC_GOBLINVILLAGE_GOBLIN_5_Text_1
	hidenamebox
	release
	end


NPC_GOBLINVILLAGE_GOBLIN_6::
	lock
	faceplayer
	namebox NPC_GOBLINVILLAGE_GOBLIN_6_Text_0
	msgbox NPC_GOBLINVILLAGE_GOBLIN_6_Text_1
	hidenamebox
	release
	end


NPC_GOBLINVILLAGE_WARTFACE::
	lock
	faceplayer
	namebox NPC_GOBLINVILLAGE_WARTFACE_Text_0
	msgbox NPC_GOBLINVILLAGE_WARTFACE_Text_0
	hidenamebox
	release
	end


NPC_GOBLINVILLAGE_BENTNOZE::
	lock
	faceplayer
	namebox NPC_GOBLINVILLAGE_WARTFACE_Text_0
	msgbox NPC_GOBLINVILLAGE_WARTFACE_Text_0
	hidenamebox
	release
	end


NPC_GOBLINVILLAGE_GRUBFOOT::
	lock
	faceplayer
	namebox NPC_GOBLINVILLAGE_GRUBFOOT_Text_0
	msgbox NPC_GOBLINVILLAGE_GRUBFOOT_Text_1
	hidenamebox
	release
	end


NPC_GOBLINVILLAGE_GOBLIN_COOK::
	lock
	faceplayer
	namebox NPC_GOBLINVILLAGE_GOBLIN_COOK_Text_0
	msgbox NPC_GOBLINVILLAGE_GOBLIN_COOK_Text_1
	hidenamebox
	release
	end


NPC_GOBLINVILLAGE_RAT::
	lock
	faceplayer
	namebox NPC_GOBLINVILLAGE_RAT_Text_0
	msgbox NPC_GOBLINVILLAGE_RAT_Text_1
	hidenamebox
	release
	end


BATTLE_DEMONHEADGE::
	faceplayer
	namebox BATTLE_DEMONHEADGE_Text_0
	msgbox BATTLE_DEMONHEADGE_Text_1
	hidenamebox
	closemessage
	trainerbattle_no_intro TRAINER_DEMONHEADGE, BATTLE_DEMONHEADGE_Text_2
	namebox BATTLE_DEMONHEADGE_Text_0
	msgbox BATTLE_DEMONHEADGE_Text_3
	hidenamebox
	release
	end


BATTLE_DEMONHEADGE2::
	faceplayer
	namebox BATTLE_DEMONHEADGE2_Text_0
	msgbox BATTLE_DEMONHEADGE2_Text_1
	hidenamebox
	closemessage
	trainerbattle_no_intro TRAINER_DEMONHEADGE, BATTLE_DEMONHEADGE_Text_2
	namebox BATTLE_DEMONHEADGE2_Text_0
	msgbox BATTLE_DEMONHEADGE2_Text_2
	hidenamebox
	release
	end


BATTLE_LOPENDEBANK::
	lock
	delay 30
	playse SE_PIN
	applymovement 1, MOVEMENT_EXCLAMATIONMARK_FACEPLAYER
	waitmovement 0
	namebox BATTLE_LOPENDEBANK_Text_0
	msgbox BATTLE_LOPENDEBANK_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne BATTLE_LOPENDEBANK_2
	msgbox BATTLE_LOPENDEBANK_Text_4
BATTLE_LOPENDEBANK_1:
	hidenamebox
	closemessage
	applymovement 1, Movement_InteractFACEUP
	waitmovement 0
	release
	end

BATTLE_LOPENDEBANK_2:
	trainerbattle_no_intro TRAINER_LOPENDEBANK, BATTLE_LOPENDEBANK_Text_2
	namebox BATTLE_LOPENDEBANK_Text_0
	msgbox BATTLE_LOPENDEBANK_Text_3
	goto BATTLE_LOPENDEBANK_1


NPC_GOBLINVILLAGE_GOBLIN_1_Text_0:
	.string "Dulleyes$"

NPC_GOBLINVILLAGE_GOBLIN_1_Text_1:
	.string "Dulleyes do not understand this\n"
	.string "conflict.\p"
	.string "Bentnoze shows me gray goblin mail\n"
	.string "telling Dulleyes Wartface is wrong.\p"
	.string "Then Wartface show Dulleyes gray\n"
	.string "goblin mail telling Dulleyes this mail\l"
	.string "better.\p"
	.string "War is complicated to Dulleyes.$"

NPC_GOBLINVILLAGE_GOBLIN_2_Text_0:
	.string "Slugteeth$"

NPC_GOBLINVILLAGE_GOBLIN_2_Text_1:
	.string "Goblins green.\p"
	.string "Green is better than red.$"

NPC_GOBLINVILLAGE_GOBLIN_3_Text_0:
	.string "Mossblood$"

NPC_GOBLINVILLAGE_GOBLIN_3_Text_1:
	.string "Blood is red.\p"
	.string "Red is better than green.$"

NPC_GOBLINVILLAGE_GOBLIN_4_Text_0:
	.string "Fouleye$"

NPC_GOBLINVILLAGE_GOBLIN_4_Text_1:
	.string "Seeing goblins go around saying green\n"
	.string "be good makes me see red.$"

NPC_GOBLINVILLAGE_GOBLIN_5_Text_0:
	.string "Thickfeet$"

NPC_GOBLINVILLAGE_GOBLIN_5_Text_1:
	.string "Last week goblin village fought over\n"
	.string "shoes or no shoes.\p"
	.string "War is constant here.\p"
	.string "I love it.$"

NPC_GOBLINVILLAGE_GOBLIN_6_Text_0:
	.string "Dripnose$"

NPC_GOBLINVILLAGE_GOBLIN_6_Text_1:
	.string "Stinky Hoomans dress in ugly red armour\n"
	.string "were wanting passage through Goblin\l"
	.string "Village.\p"
	.string "Me said red are stinks green armour\n"
	.string "better, no passage for reds.\p"
	.string "So me block off passage way!$"

NPC_GOBLINVILLAGE_WARTFACE_Text_0:
	.string "$"

NPC_GOBLINVILLAGE_GRUBFOOT_Text_0:
	.string "GRUBFOOT$"

NPC_GOBLINVILLAGE_GRUBFOOT_Text_1:
	.string "Me do not see what colours matter.\p"
	.string "We all goblins on the inside.$"

NPC_GOBLINVILLAGE_GOBLIN_COOK_Text_0:
	.string "Goblin Cook$"

NPC_GOBLINVILLAGE_GOBLIN_COOK_Text_1:
	.string "Me Goblin cook, me make food for all\n"
	.string "goblins.\p"
	.string "Goblins saying me food is best.$"

NPC_GOBLINVILLAGE_RAT_Text_0:
	.string "Goblin$"

NPC_GOBLINVILLAGE_RAT_Text_1:
	.string "Me live here with me rats.\p"
	.string "They best except when they steal me\n"
	.string "food.$"

BATTLE_DEMONHEADGE_Text_0:
	.string "DEMONHEADGE$"

BATTLE_DEMONHEADGE_Text_1:
	.string "Hello there.\p"
	.string "I am currently a Cupholder.\p"
	.string "But I am also the Leader of team\n"
	.string "PokeScapers.\p"
	.string "Team PokeScape is made up some amazing\n"
	.string "people.\p"
	.string "Oh but enough of that.\p"
	.string "You wish to battle me then so be it!\p"
	.string "Feel the wrath of an Elder God!$"

BATTLE_DEMONHEADGE_Text_2:
	.string "You are a PokeScapian Master!$"

BATTLE_DEMONHEADGE_Text_3:
	.string "You may find others from team\n"
	.string "PokeScaper scattered all across the\l"
	.string "region.\p"
	.string "I hope you enjoy playing the game.$"

BATTLE_DEMONHEADGE2_Text_0:
	.string "Demonheadge$"

BATTLE_DEMONHEADGE2_Text_1:
	.string "Hahaha!!\p"
	.string "Hey guys, I've got something cool to\n"
	.string "show you!$"

BATTLE_DEMONHEADGE2_Text_2:
	.string "What do you think about dem apples!$"

BATTLE_LOPENDEBANK_Text_0:
	.string "Lopendebank$"

BATTLE_LOPENDEBANK_Text_1:
	.string "Aeeyyye!\p"
	.string "Please don't ban me!\p"
	.string "Oh, are you looking for a battle?$"

BATTLE_LOPENDEBANK_Text_2:
	.string "OMG pls don't ban me pl0x!$"

BATTLE_LOPENDEBANK_Text_3:
	.string "I am apart of team PokeScaper.\p"
	.string "Keep your eyes out as we are\n"
	.string "everywhere.\p"
	.string "Now if you will excuse me I am going\n"
	.string "back to making memes.$"

BATTLE_LOPENDEBANK_Text_4:
	.string "Oh, okay. If you'll excuse me I have\n"
	.string "memes to make and bans to avoid.$"
