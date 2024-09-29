Draynor_House_WoM_1F_MapScripts::
	.byte 0


MEGAEVOSBOOK::
	lock
	msgbox MEGAEVOSBOOK_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne MEGAEVOSBOOK_2
	msgbox MEGAEVOSBOOK_Text_2
	closemessage
MEGAEVOSBOOK_1:
	release
	end

MEGAEVOSBOOK_2:
	msgbox MEGAEVOSBOOK_Text_1
	closemessage
	goto MEGAEVOSBOOK_1


REGIONALFORMSBOOK::
	lock
	msgbox REGIONALFORMSBOOK_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne REGIONALFORMSBOOK_2
	msgbox REGIONALFORMSBOOK_Text_2
	closemessage
REGIONALFORMSBOOK_1:
	release
	end

REGIONALFORMSBOOK_2:
	msgbox REGIONALFORMSBOOK_Text_1
	closemessage
	goto REGIONALFORMSBOOK_1


FOODFORMSBOOK::
	lock
	msgbox FOODFORMSBOOK_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne FOODFORMSBOOK_2
	msgbox FOODFORMSBOOK_Text_2
	closemessage
FOODFORMSBOOK_1:
	release
	end

FOODFORMSBOOK_2:
	msgbox FOODFORMSBOOK_Text_1
	closemessage
	goto FOODFORMSBOOK_1


RUNEFORMSBOOK::
	lock
	msgbox RUNEFORMSBOOK_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne RUNEFORMSBOOK_2
	msgbox RUNEFORMSBOOK_Text_2
	closemessage
RUNEFORMSBOOK_1:
	release
	end

RUNEFORMSBOOK_2:
	msgbox RUNEFORMSBOOK_Text_1
	closemessage
	goto RUNEFORMSBOOK_1


WOMMISCBOOK1::
	lock
	msgbox WOMMISCBOOK1_Text_0
	release
	end


WOMMISCBOOK2::
	lock
	msgbox WOMMISCBOOK2_Text_0
	release
	end


WOMMISCBOOK3::
	lock
	msgbox WOMMISCBOOK3_Text_0
	release
	end


WOMMISCBOOK4::
	lock
	msgbox WOMMISCBOOK4_Text_0
	release
	end


WOMMISCBOOK5::
	lock
	msgbox WOMMISCBOOK5_Text_0
	release
	end


WOMSTATUE::
	lock
	msgbox WOMSTATUE_Text_0
	release
	end


MEGAEVOSBOOK_Text_0:
	.string "A book entitled 'Mega Evolutions: Fact\n"
	.string "or Fiction?' catches your eye.\p"
	.string "Would you like to read it?$"

MEGAEVOSBOOK_Text_1:
	.string "Throughout my travels across Gielinor,\n"
	.string "I have either come across or heard\l"
	.string "rumours about many powerful artefacts.\p"
	.string "However, there is one artefact in\n"
	.string "particular that has eluded me.\p"
	.string "An artefact rumoured to have been used\n"
	.string "by the gods to create all life and magic,\l"
	.string "and one that it imbued with so much\l"
	.string "energy that even mere fragments of it\l"
	.string "can MEGA EVOLVE a monster.\p"
	.string "Nobody knows it's exact name, or where\n"
	.string "it came from.\p"
	.string "My fellow Saradominists call it the 'Eye\n"
	.string "of Saradomin', those who worship Guthix\l"
	.string "refer to it as the 'Fist of Guthix' and\l"
	.string "I've also heard the deranged\l"
	.string "necromancer over near Rimmington call\l"
	.string "it the 'Cabbage of Jas'.\p"
	.string "Exactly what monsters are affected by\n"
	.string "these fragments are unknown, but the\l"
	.string "ancient writings I have unearthed\l"
	.string "suggest that the following monsters\l"
	.string "may be strong enough to fully utilise\l"
	.string "its strength:\p"
	.string "Kalphite Queen\p"
	.string "TzTok Jad\p"
	.string "Dagannoth Kings\p"
	.string "Chaos El-\p"
	.string "{PAUSE 15}The rest of the page is torn out..$"

MEGAEVOSBOOK_Text_2:
	.string "You decide to leave the book on the\n"
	.string "shelf.$"

REGIONALFORMSBOOK_Text_0:
	.string "There is a book on the shelf entitled:\n"
	.string "'Fantastic Forms and Where To Find\l"
	.string "Them'.\p"
	.string "Do you want to read it?$"

REGIONALFORMSBOOK_Text_1:
	.string "One of the things that truly reminds me\n"
	.string "that Saradomin had a hand in the\l"
	.string "creation of Gielinor is the natural\l"
	.string "order that you see throughout the\l"
	.string "world.\p"
	.string "For example, it doesn't matter whether\n"
	.string "you're in ASGARNIA,\p"
	.string "here in MISTHALIN,\p"
	.string "on the beaches of KARAMJA,\p"
	.string "visiting the zoo in KANDARIN,\p"
	.string "braving the cold of the FREMENNIK\n"
	.string "PROVINCE,\p"
	.string "escaping death in the WILDERNESS,\p"
	.string "enduring the swamps of MORYTANIA,\p"
	.string "or facing the harsh sands of the\n"
	.string "KHARIDIAN DESERT\p"
	.string "you'll find that varieties of monsters\n"
	.string "like chicks, bear cubs, or even\l"
	.string "crablings have adapted to their\l"
	.string "surroundings.\p"
	.string "To the point that they evolve into\n"
	.string "entirely new forms!\p"
	.string "Some of these evolved forms even have\n"
	.string "their own unique moves.\p"
	.string "However, exactly what moves each\n"
	.string "learns will take substantially more\l"
	.string "exploration.$"

REGIONALFORMSBOOK_Text_2:
	.string "You decide not to read the book.$"

FOODFORMSBOOK_Text_0:
	.string "You skim over lots of very dull sounding\n"
	.string "book titles until you see one called:\l"
	.string "'Dionysius and the Chocolate Cake\l"
	.string "Factory'.\p"
	.string "Would you like to read it?$"

FOODFORMSBOOK_Text_1:
	.string "One of the more unusual monster\n"
	.string "evolutions that I have come across on\l"
	.string "my travels have involved food.\p"
	.string "They say not to feed dogs chocolate,\p"
	.string "but CATS, TURKEYS, and YAKS all love\n"
	.string "CHOCOLATE CAKE.\p"
	.string "It has to be CHOCOLATE CAKE though,\n"
	.string "the regular kind just won't do.\p"
	.string "Even more exotic creatures like DESERT\n"
	.string "DEVIL KEBBITS, MINITRICE,\p"
	.string "CAVE SLIME, and JELLIES love it too.\p"
	.string "I wonder if that's because they can't\n"
	.string "normally get hold of the stuff!\p"
	.string "Either way, their love of CHOCOLATE\n"
	.string "CAKE is so powerful that it'll let them\l"
	.string "evolve into entirely new forms.\p"
	.string "Apparently this even extends to ENTS\n"
	.string "and CABBAGES.\p"
	.string "I don't fully believe that one though.\p"
	.string "I wonder if that's just a rumour\n"
	.string "started by Melzar..$"

FOODFORMSBOOK_Text_2:
	.string "You choose not to bother with the book.$"

RUNEFORMSBOOK_Text_0:
	.string "There is a journal tucked between two\n"
	.string "books on the shelf.\p"
	.string "Do you want to read it?$"

RUNEFORMSBOOK_Text_1:
	.string "Humans learnt to use magic after a\n"
	.string "traveller discovered some kind of key\l"
	.string "that allowed him to summon the magic of\l"
	.string "the four elements, which let him\l"
	.string "harness magic as both a tool and a\l"
	.string "weapon.\p"
	.string "The use of the four elemental runes in\n"
	.string "monster evolution is well documented.\p"
	.string "However, as time went on and they were\n"
	.string "able to study this further, they\l"
	.string "managed to discover even more magical\l"
	.string "elements which wizards bound into\l"
	.string "stones for others to use.\p"
	.string "These are much rarer to come across,\n"
	.string "but allow access to powerful and unique\l"
	.string "evolutions.\p"
	.string "For example DEATH RUNES allow several\n"
	.string "monsters to evolve into either\l"
	.string "REVENANT variants that are normally\l"
	.string "only found roaming deep within the\l"
	.string "Wilderness,\p"
	.string "or REANIMATED variants that can\n"
	.string "otherwise only be created by members\l"
	.string "of the House of Arceuus.\p"
	.string "The magic of NATURE RUNES were\n"
	.string "discovered on Karamja and allow some\l"
	.string "monsters to evolve into more tropical\l"
	.string "forms than they may otherwise.\p"
	.string "There are also ASTRAL RUNES but the\n"
	.string "Moon Clan on Lunar Isle do not like\l"
	.string "outsiders and have kept them a closely\l"
	.string "guarded secret, so their use is not yet\l"
	.string "known..$"

RUNEFORMSBOOK_Text_2:
	.string "You decide to leave the journal where it\n"
	.string "is.$"

WOMMISCBOOK1_Text_0:
	.string "None of the books on this shelf look\n"
	.string "very interesting.\p"
	.string "Perhaps you should try another?$"

WOMMISCBOOK2_Text_0:
	.string "You flick through the pages of a travel\n"
	.string "guide the Wise Old Man has written\l"
	.string "about the southern region of Karamja.\p"
	.string "He talks about meeting a local who\n"
	.string "wanted him to stuff a dead monkey with\l"
	.string "seaweed so he could eat it.\p"
	.string "There's also talk of terrifying zombies\n"
	.string "attacking a village, and jungles filled\l"
	.string "with vicious spiders and great big\l"
	.string "jungle ogres.\p"
	.string "Maybe I should give that place a miss.\p"
	.string "Or perhaps it would be a good place to\n"
	.string "catch some rare monsters..?$"

WOMMISCBOOK3_Text_0:
	.string "You skim through the pages of a book\n"
	.string "which refers to otherworldly plains.\p"
	.string "The Wise Old man details a strange\n"
	.string "fairy, less than a metre tall, he met\l"
	.string "that was an incredible warrior and\l"
	.string "claimed to have come from the moon.\p"
	.string "There are also pages which refer to\n"
	.string "hideous demons emerging from some kind\l"
	.string "of Abyss.\p"
	.string "I wonder what sort of herbs or potions\n"
	.string "helped him paint such vivid fantasies?$"

WOMMISCBOOK4_Text_0:
	.string "The book on the shelf talks about the\n"
	.string "Wise Old Man's battle with a fearsome\l"
	.string "three headed dragon living deep\l"
	.string "underground in the Wilderness.\p"
	.string "It goes on to say that it can inflict\n"
	.string "poison, burn, or even cause freezes!\p"
	.string "I wonder whether it's possible to catch\n"
	.string "such a monster...$"

WOMMISCBOOK5_Text_0:
	.string "There is a book titled: 'If I Did it:\n"
	.string "Confessions of the Robber' which\l"
	.string "includes a hypothetical description of\l"
	.string "how one might rob a local bank.$"

WOMSTATUE_Text_0:
	.string "There is a small feline statue on the\n"
	.string "bookshelf.$"
