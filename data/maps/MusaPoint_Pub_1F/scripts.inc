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


NPC_MUSA_POINT_Pub_Sailor::
	lock
	faceplayer
	namebox NPC_MUSA_POINT_Pub_Sailer_Text_0
	msgbox NPC_MUSA_POINT_Pub_Sailor_Text_0
	hidenamebox
	goto_if_unset FLAG_PUB_TRAINER_12, NPC_MUSA_POINT_Pub_Sailor_2
NPC_MUSA_POINT_Pub_Sailor_1:
	hidenamebox
	release
	end

NPC_MUSA_POINT_Pub_Sailor_2:
	msgbox NPC_MUSA_POINT_Pub_Sailor_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne NPC_MUSA_POINT_Pub_Sailor_4
	goto NPC_MUSA_POINT_Pub_Sailor_1

NPC_MUSA_POINT_Pub_Sailor_4:
	hidenamebox
	setflag FLAG_PUB_TRAINER_12
	trainerbattle_no_intro TRAINER_PUB_MUSA_1, NPC_MUSA_POINT_Pub_Sailor_Text_2
	namebox NPC_MUSA_POINT_Pub_Sailer_Text_0
	msgbox NPC_MUSA_POINT_Pub_Sailor_Text_3
	hidenamebox
	call GIVE_RANDOM_ITEM
	goto NPC_MUSA_POINT_Pub_Sailor_1


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
	.string "$"

NPC_MUSA_POINT_Pub_Sailor_Text_0:
	.string "Hey mate, you caught any of those\n"
	.string "lobsters?\p"
	.string "Did you know lobsters evolve\n"
	.string "differently depending on the weather\l"
	.string "in their environment?$"

NPC_MUSA_POINT_Pub_Sailor_Text_1:
	.string "Do you wish to challenge them to a\n"
	.string "battle?$"

NPC_MUSA_POINT_Pub_Sailor_Text_2:
	.string "…$"

NPC_MUSA_POINT_Pub_Sailor_Text_3:
	.string "Maybe if we got some more unusual\n"
	.string "weather on Karamja I'd have a evolved\l"
	.string "my lobster into something stronger.$"
