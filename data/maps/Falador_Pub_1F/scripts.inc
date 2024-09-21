Falador_Pub_1F_MapScripts::
	.byte 0


ITEM_FALADORPUB_1::
	finditem ITEM_STAT_BEER
	end


NPC_FALADORPUB_BARMAID_1::
	lock
	faceplayer
	namebox NPC_FALADORPUB_BARMAID_1_Text_0
	msgbox NPC_FALADORPUB_BARMAID_1_Text_1
	waitmessage
	hidenamebox
	release
	end


NPC_FALADORPUB_BARMAID_2::
	lock
	faceplayer
	namebox NPC_FALADORPUB_BARMAID_2_Text_0
	msgbox NPC_FALADORPUB_BARMAID_2_Text_1
	waitmessage
	hidenamebox
	release
	end


NPC_FALADORPUB_BARMAID_3::
	lock
	namebox NPC_FALADORPUB_BARMAID_3_Text_0
	msgbox NPC_FALADORPUB_BARMAID_3_Text_1
	waitmessage
	hidenamebox
	release
	end


NPC_FALADORPUB_NPC1::
	lock
	faceplayer
	namebox NPC_FALADORPUB_NPC1_Text_0
	msgbox NPC_FALADORPUB_NPC1_Text_1
	waitmessage
	hidenamebox
	release
	end


NPC_FALADORPUB_NPC2::
	lock
	faceplayer
	namebox NPC_FALADORPUB_NPC2_Text_0
	msgbox NPC_FALADORPUB_NPC2_Text_1
	waitmessage
	hidenamebox
	release
	end


NPC_FALADORPUB_NPC3::
	lock
	faceplayer
	namebox NPC_FALADORPUB_NPC3_Text_0
	msgbox NPC_FALADORPUB_NPC3_Text_1
	waitmessage
	hidenamebox
	release
	end


NPC_FALADORPUB_NPC4::
	lock
	namebox NPC_FALADORPUB_NPC1_Text_0
	msgbox NPC_FALADORPUB_NPC4_Text_0
	waitmessage
	hidenamebox
	release
	end


NPC_FALADORPUB_NPC5::
	lock
	namebox NPC_FALADORPUB_NPC2_Text_0
	msgbox NPC_FALADORPUB_NPC5_Text_0
	waitmessage
	hidenamebox
	release
	end


NPC_FALADORPUB_NPC6::
	lock
	namebox NPC_FALADORPUB_NPC2_Text_0
	msgbox NPC_FALADORPUB_NPC6_Text_0
	waitmessage
	hidenamebox
	release
	end


NPC_FALADORPUB_NPC7::
	lock
	faceplayer
	namebox NPC_FALADORPUB_NPC2_Text_0
	msgbox NPC_FALADORPUB_NPC7_Text_0
	waitmessage
	hidenamebox
	release
	end


NPC_FALADORPUB_NPC8::
	lock
	faceplayer
	namebox NPC_FALADORPUB_NPC8_Text_0
	msgbox NPC_FALADORPUB_NPC8_Text_1
	waitmessage
	hidenamebox
	release
	end


PUBCRAWL_FALADOR::
	lock
	faceplayer
	namebox PUBCRAWL_FALADOR_Text_0
	msgbox PUBCRAWL_FALADOR_Text_1
	waitmessage
	hidenamebox
	release
	end


NPC_FALADORPUB_BARMAID_1_Text_0:
	.string "Emily$"

NPC_FALADORPUB_BARMAID_1_Text_1:
	.string "Our Asgarnian Ale is selling lot the hot\n"
	.string "cakes today.\p"
	.string "No seriously, everyone is ordering hot\n"
	.string "cakes!$"

NPC_FALADORPUB_BARMAID_2_Text_0:
	.string "Kaylee$"

NPC_FALADORPUB_BARMAID_2_Text_1:
	.string "Sorry I will be right with you, I just\n"
	.string "have to get these orders first!$"

NPC_FALADORPUB_BARMAID_3_Text_0:
	.string "Barmaid$"

NPC_FALADORPUB_BARMAID_3_Text_1:
	.string "Hufff Pufff…\p"
	.string "Being Barmaid is hard work.$"

NPC_FALADORPUB_NPC1_Text_0:
	.string "Guard$"

NPC_FALADORPUB_NPC1_Text_1:
	.string "Today was a rough day.\p"
	.string "Seven of my friends were killed and\n"
	.string "then the perpetrator lit fireworks over\l"
	.string "his head before he ran off.\p"
	.string "I hate this job.$"

NPC_FALADORPUB_NPC2_Text_0:
	.string "White Knight$"

NPC_FALADORPUB_NPC2_Text_1:
	.string "Some guy named Sir Theodore made a big\n"
	.string "hassle at work.\p"
	.string "Apparently cleaning duty is not in\n"
	.string "accords with the ways of the White\l"
	.string "Knight code.$"

NPC_FALADORPUB_NPC3_Text_0:
	.string "Pker$"

NPC_FALADORPUB_NPC3_Text_1:
	.string "They say there exists a special rabbits\n"
	.string "foot that certain birds react to.\p"
	.string "It makes their eggs become special.\p"
	.string "I wonder where you could find one…$"

NPC_FALADORPUB_NPC4_Text_0:
	.string "Thanks for inviting me along for drinks\n"
	.string "guys.$"

NPC_FALADORPUB_NPC5_Text_0:
	.string "Haha!\p"
	.string "Hey get a load of that Trash Knight\n"
	.string "sitting at the table all by themselves.$"

NPC_FALADORPUB_NPC6_Text_0:
	.string "You guys won't believe this!\p"
	.string "The other day when I was surveying the\n"
	.string "park I saw a different coloured mole!\p"
	.string "Sadly I ran out of pouches so I couldn't\n"
	.string "catch it…$"

NPC_FALADORPUB_NPC7_Text_0:
	.string "I heard a rumour that the eye of\n"
	.string "Saradomin can change a monsters form\l"
	.string "making it one thousand times stronger!$"

NPC_FALADORPUB_NPC8_Text_0:
	.string "Black Knight$"

NPC_FALADORPUB_NPC8_Text_1:
	.string "Scram!\p"
	.string "I cannot hear what they are saying at\n"
	.string "that table if you are here annoying me!$"

PUBCRAWL_FALADOR_Text_0:
	.string "Barbarian$"

PUBCRAWL_FALADOR_Text_1:
	.string "HIC\p"
	.string "ELLO THERE\p"
	.string "HIC\p"
	.string "ARROUGGH!\p"
	.string "YEEU INTERESTED IN A LITTLE BAR\n"
	.string "CRAWL?$"
