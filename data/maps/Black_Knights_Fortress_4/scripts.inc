Black_Knights_Fortress_4_MapScripts::
	.byte 0


BKFORT_4F_NPC_1::
	lock
	faceplayer
	namebox BKFORT_4F_NPC_1_Text_0
	msgbox BKFORT_4F_NPC_1_Text_1
	closemessage
	hidenamebox
	release
	end


BKFORT_4F_NPC_2::
	lock
	faceplayer
	namebox BKFORT_4F_NPC_2_Text_0
	msgbox BKFORT_4F_NPC_2_Text_1
	closemessage
	hidenamebox
	release
	end


BKFORT_4F_NPC_3::
	lock
	faceplayer
	namebox BKFORT_4F_NPC_1_Text_0
	msgbox BKFORT_4F_NPC_2_Text_1
	closemessage
	hidenamebox
	release
	end


BKFORT_4F_NPC_4::
	lock
	faceplayer
	namebox BKFORT_4F_NPC_1_Text_0
	msgbox BKFORT_4F_NPC_2_Text_1
	closemessage
	hidenamebox
	release
	end


BKFORT_4F_NPC_5::
	lock
	faceplayer
	namebox BKFORT_4F_NPC_1_Text_0
	msgbox BKFORT_4F_NPC_2_Text_1
	closemessage
	hidenamebox
	release
	end


BKFORT_4F_NPC_6::
	lock
	faceplayer
	namebox BKFORT_4F_NPC_1_Text_0
	msgbox BKFORT_4F_NPC_2_Text_1
	closemessage
	hidenamebox
	release
	end


BKFORT_4F_NPC_7::
	lock
	faceplayer
	namebox BKFORT_4F_NPC_2_Text_0
	msgbox BKFORT_4F_NPC_2_Text_1
	closemessage
	hidenamebox
	release
	end


BKFORT_4F_NPC_8::
	lock
	faceplayer
	namebox BKFORT_4F_NPC_2_Text_0
	msgbox BKFORT_4F_NPC_2_Text_1
	closemessage
	hidenamebox
	release
	end


BKFORT_4F_NPC_9::
	lock
	faceplayer
	namebox BKFORT_4F_NPC_2_Text_0
	msgbox BKFORT_4F_NPC_2_Text_1
	closemessage
	hidenamebox
	release
	end


BKFORT_4F_NPC_10::
	lock
	faceplayer
	namebox BKFORT_4F_NPC_10_Text_0
	msgbox BKFORT_4F_NPC_2_Text_1
	closemessage
	hidenamebox
	release
	end


BKFORT_4F_NPC_11::
	lock
	faceplayer
	namebox BKFORT_4F_NPC_11_Text_0
	msgbox BKFORT_4F_NPC_2_Text_1
	closemessage
	hidenamebox
	release
	end


BKFORT_4F_PLANT::
	lock
	msgbox BKFORT_4F_PLANT_Text_0
	closemessage
	release
	end


BKFORT_4F_BOOK_1::
	lock
	msgbox BKFORT_4F_BOOK_1_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne BKFORT_4F_BOOK_1_2
BKFORT_4F_BOOK_1_1:
	closemessage
	release
	end

BKFORT_4F_BOOK_1_2:
	msgbox BKFORT_4F_BOOK_1_Text_1
	goto BKFORT_4F_BOOK_1_1


BKFORT_4F_BOOK_2::
	lock
	msgbox BKFORT_4F_BOOK_2_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne BKFORT_4F_BOOK_2_2
BKFORT_4F_BOOK_2_1:
	closemessage
	release
	end

BKFORT_4F_BOOK_2_2:
	msgbox BKFORT_4F_BOOK_2_Text_1
	goto BKFORT_4F_BOOK_2_1


BKFORT_4F_BOOK_3::
	lock
	msgbox BKFORT_4F_BOOK_3_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne BKFORT_4F_BOOK_3_2
BKFORT_4F_BOOK_3_1:
	closemessage
	release
	end

BKFORT_4F_BOOK_3_2:
	msgbox BKFORT_4F_BOOK_3_Text_1
	goto BKFORT_4F_BOOK_3_1


ITEM_BKFORT_4F_ITEM1::
	finditem ITEM_POUCH_BLACK
	end


ITEM_BKFORT_4F_ITEM2::
	finditem ITEM_POUCH_BLACK
	end


ITEM_BKFORT_4F_ITEM3::
	finditem ITEM_POUCH_BLACK
	end


ITEM_BKFORT_4F_ITEM4::
	finditem ITEM_POUCH_BLACK
	end


ITEM_BKFORT_4F_ITEM5::
	finditem ITEM_POUCH_BLACK
	end


ITEM_BKFORT_4F_ITEM6::
	finditem ITEM_POUCH_BLACK
	end


BKFORT_4F_NPC_1_Text_0:
	.string "Black Knight$"

BKFORT_4F_NPC_1_Text_1:
	.string "In this oppressive work environment,\n"
	.string "the only thing that keeps me safe is\l"
	.string "the daily maintenance of this potted\l"
	.string "plant here.\p"
	.string "Sustaining it with life keeps my mental\n"
	.string "health alive.$"

BKFORT_4F_NPC_2_Text_0:
	.string "Elite Knight$"

BKFORT_4F_NPC_2_Text_1:
	.string "THIS IS A WORK IN PROGRESS.\p"
	.string "THE TEAM ARE CURRENTLY DEVELOPING IT\n"
	.string "AND ARE AWARE IT IS UNFINISHED.\p"
	.string "IT IS NOT A BUG, PLEASE DO NOT REPORT\n"
	.string "IT.$"

BKFORT_4F_NPC_10_Text_0:
	.string "Sigmund$"

BKFORT_4F_NPC_11_Text_0:
	.string "Daquarius$"

BKFORT_4F_PLANT_Text_0:
	.string "It shows signs of withering.$"

BKFORT_4F_BOOK_1_Text_0:
	.string "There is a book on the table telling the\n"
	.string "history of the Kinshra.\p"
	.string "Would you like to read it?$"

BKFORT_4F_BOOK_1_Text_1:
	.string "Volume 1.\p"
	.string "Our Order was founded in year 4 of the\n"
	.string "5th age by Lord Sanafin Valzin.\p"
	.string "She hoped that her influence as a\n"
	.string "noblewoman would one day give rise to a\l"
	.string "Kingdom that followed the ideals of\l"
	.string "Zamorak.\p"
	.string "Blinded by their pagan faith, the White\n"
	.string "Knights denounced our Order and\l"
	.string "banished us from the Kingdom.\p"
	.string "In return we declared open war on\n"
	.string "Asgarnia and it's illegitimate pretender\l"
	.string "of a king, Raddallin.$"

BKFORT_4F_BOOK_2_Text_0:
	.string "There is a book on the shelf telling\n"
	.string "some of the history of the Kinshra.\p"
	.string "Would you like to read it?$"

BKFORT_4F_BOOK_2_Text_1:
	.string "Volume 2.\p"
	.string "Some years later, an alliance was made\n"
	.string "with the mage Solus Dellagar.\p"
	.string "Together, we launched an attack on\n"
	.string "Edgeville to expand our territory and\l"
	.string "show the King of Misthalin that we were\l"
	.string "not be trifled with.\p"
	.string "Unfortunately, the White Knights\n"
	.string "arrived to defend them and the Dellagar\l"
	.string "stabbed us in the back, murdering\l"
	.string "Kinshra and White Knight alike.\p"
	.string "The death toll was in the thousands by\n"
	.string "the time we finally disarmed and exiled\l"
	.string "the traitor, but the White Knights took\l"
	.string "all the credit!$"

BKFORT_4F_BOOK_3_Text_0:
	.string "A book on the Kinshra catches your eye.\p"
	.string "Would you like to read it?$"

BKFORT_4F_BOOK_3_Text_1:
	.string "Volume ??\p"
	.string "Possible future plans.\p"
	.string "Locate a tomb in the north, and use the\n"
	.string "power within to raise an army of the\l"
	.string "undead.\p"
	.string "{PAUSE 15}Enslave some druids in Taverley, and\n"
	.string "use their magic to bolster our\l"
	.string "monsters.\p"
	.string "{PAUSE 15}Resume contact with the witch in the\n"
	.string "west to capture a King Arthur and take\l"
	.string "over Camelot.\p"
	.string "{PAUSE 15}Prevent the White Knights from\n"
	.string "retrieving the Holy Grail.\p"
	.string "Use the Humans Against Monsters\n"
	.string "organisation to locate a monster of\l"
	.string "immense power capable of...\p"
	.string "{PAUSE 15}The rest of the page appears to have\n"
	.string "been hurriedly torn out.$"
