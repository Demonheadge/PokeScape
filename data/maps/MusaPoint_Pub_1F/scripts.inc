MusaPoint_Pub_1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, MusaPoint_Pub_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

MusaPoint_Pub_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	call MUSAPOINT_PUB_STATE
	setvar VAR_EVOLUTION_MAP_STATE, 15
	return


MUSAPOINT_PUB_STATE::
	compare VAR_WISE_OLD_MAN_RIVAL, 20
	goto_if_eq MUSAPOINT_PUB_STATE_3
MUSAPOINT_PUB_STATE_2:
	removeobject 5
	setflag FLAG_TEMP_1F
	return

MUSAPOINT_PUB_STATE_1:
	addobject 5
	clearflag FLAG_TEMP_1F
	return

MUSAPOINT_PUB_STATE_3:
	compare VAR_POKESCAPE_STORYMODE_PROGRESS, 160
	goto_if_lt MUSAPOINT_PUB_STATE_1
	goto MUSAPOINT_PUB_STATE_2


BANK_MUSA_POINT::
	lock
	faceplayer
	namebox BANK_MUSA_POINT_Text_0
	msgbox BANK_MUSA_POINT_Text_1
	waitmessage
	goto BANK_OPTIONS
	return


NPC_MUSA_POINT_PubOwner::
	lock
	faceplayer
	namebox NPC_MUSA_POINT_PubOwner_Text_0
	msgbox NPC_MUSA_POINT_PubOwner_Text_1
	closemessage
	hidenamebox
	release
	end


NPC_MUSA_POINT_Pub_BarCrawl::
	lock
	faceplayer
	namebox NPC_MUSA_POINT_Pub_BarCrawl_Text_0
	msgbox NPC_MUSA_POINT_Pub_BarCrawl_Text_1
	closemessage
	hidenamebox
	release
	end


NPC_MUSA_POINT_Pub_Sailer::
	lock
	faceplayer
	namebox NPC_MUSA_POINT_Pub_Sailer_Text_0
	msgbox NPC_MUSA_POINT_Pub_Sailer_Text_1
	closemessage
	hidenamebox
	release
	end


BANK_MUSA_POINT_Text_0:
	.string "Banker$"

BANK_MUSA_POINT_Text_1:
	.string "hic\p"
	.string "Why is the rum always gone.\p"
	.string "hic\n"
	.string "Hello…\p"
	.string "Welcome to the Bank of PokeScape.\p"
	.string "How may I hic you today?$"

NPC_MUSA_POINT_PubOwner_Text_0:
	.string "Bartender$"

NPC_MUSA_POINT_PubOwner_Text_1:
	.string "Can I interest you in some of our\n"
	.string "famous Karamjan Rum?\p"
	.string "Or perhaps you would like some of our\n"
	.string "wines, spirits or beers?$"

NPC_MUSA_POINT_Pub_BarCrawl_Text_0:
	.string "Barbarian$"

NPC_MUSA_POINT_Pub_BarCrawl_Text_1:
	.string "Are you here for a Pub Crawl?$"

NPC_MUSA_POINT_Pub_Sailer_Text_0:
	.string "Sailor$"

NPC_MUSA_POINT_Pub_Sailer_Text_1:
	.string "Hey mate, you caught any of those\n"
	.string "lobsters?\p"
	.string "Did you know lobsters evolve\n"
	.string "differently depending on the weather\l"
	.string "in their environment?$"
