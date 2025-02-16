Black_Knights_Fortress_1_MapScripts::
	.byte 0


ITEM_BLACKKNIGHTS_FORTRESS_1::
	finditem ITEM_CABBAGE, 1
	closemessage
	end


CAUGHT_BY_BLACK_KNIGHTS::
	namebox CAUGHT_BY_BLACK_KNIGHTS_Text_0
	msgbox CAUGHT_BY_BLACK_KNIGHTS_Text_1
	closemessage
	hidenamebox
	return


BLACK_KNIGHT_QUIZ_1::
	lockall
	namebox BLACK_KNIGHT_QUIZ_1_Text_0
	checktrainerflag TRAINER_BLACKKNIGHT_LAIMP
	compare VAR_RESULT, TRUE
	goto_if_eq BLACK_KNIGHT_QUIZ_1_2
	msgbox BLACK_KNIGHT_QUIZ_1_Text_2
	msgbox BLACK_KNIGHT_QUIZ_1_Text_3, MSGBOX_YESNO
	compare VAR_RESULT, FALSE
	goto_if_eq BLACK_KNIGHT_QUIZ_1_5
	msgbox BLACK_KNIGHT_QUIZ_1_Text_6
	closemessage
	hidenamebox
	settrainerflag TRAINER_BLACKKNIGHT_LAIMP
BLACK_KNIGHT_QUIZ_1_1:
	releaseall
	end

BLACK_KNIGHT_QUIZ_1_2:
	msgbox BLACK_KNIGHT_QUIZ_1_Text_1
	closemessage
	hidenamebox
	goto BLACK_KNIGHT_QUIZ_1_1

BLACK_KNIGHT_QUIZ_1_5:
	msgbox BLACK_KNIGHT_QUIZ_1_Text_4
	closemessage
	hidenamebox
	call CAUGHT_BY_BLACK_KNIGHTS
	playbgm MUS_PS_ENCOUNTER_KNIGHTS, FALSE
	trainerbattle_no_intro TRAINER_BLACKKNIGHT_LAIMP, BLACK_KNIGHT_QUIZ_1_Text_5
	goto BLACK_KNIGHT_QUIZ_1_1


BLACK_KNIGHT_QUIZ_2::
	lockall
	namebox BLACK_KNIGHT_QUIZ_1_Text_0
	checktrainerflag TRAINER_BLACKKNIGHT_MARE
	compare VAR_RESULT, TRUE
	goto_if_eq BLACK_KNIGHT_QUIZ_2_2
	msgbox BLACK_KNIGHT_QUIZ_2_Text_1
	msgbox BLACK_KNIGHT_QUIZ_2_Text_2, MSGBOX_YESNO
	compare VAR_RESULT, FALSE
	goto_if_eq BLACK_KNIGHT_QUIZ_2_5
	msgbox BLACK_KNIGHT_QUIZ_2_Text_4
	closemessage
	hidenamebox
	namebox CAUGHT_BY_BLACK_KNIGHTS_Text_0
	msgbox BLACK_KNIGHT_QUIZ_2_Text_5
	closemessage
	hidenamebox
	settrainerflag TRAINER_BLACKKNIGHT_MARE
BLACK_KNIGHT_QUIZ_2_1:
	releaseall
	end

BLACK_KNIGHT_QUIZ_2_2:
	msgbox BLACK_KNIGHT_QUIZ_2_Text_0
	closemessage
	hidenamebox
	goto BLACK_KNIGHT_QUIZ_2_1

BLACK_KNIGHT_QUIZ_2_5:
	hidenamebox
	namebox CAUGHT_BY_BLACK_KNIGHTS_Text_0
	msgbox BLACK_KNIGHT_QUIZ_2_Text_3
	closemessage
	hidenamebox
	call CAUGHT_BY_BLACK_KNIGHTS
	playbgm MUS_PS_ENCOUNTER_KNIGHTS, FALSE
	trainerbattle_no_intro TRAINER_BLACKKNIGHT_MARE, BLACK_KNIGHT_QUIZ_1_Text_5
	goto BLACK_KNIGHT_QUIZ_2_1


BKFORT_DOG::
	faceplayer
	msgbox BKFORT_DOG_Text_0
	closemessage
	release
	end


BKFORT_1F_NPC_1::
	faceplayer
	namebox BKFORT_1F_NPC_1_Text_0
	msgbox BKFORT_1F_NPC_1_Text_1
	closemessage
	hidenamebox
	release
	end


BKFORT_1F_NPC_2::
	lock
	faceplayer
	namebox BKFORT_1F_NPC_1_Text_0
	msgbox BKFORT_1F_NPC_2_Text_0
	closemessage
	hidenamebox
	release
	end


BKFORT_1F_NPC_3::
	lock
	faceplayer
	namebox BKFORT_1F_NPC_1_Text_0
	msgbox BKFORT_1F_NPC_3_Text_0
	closemessage
	hidenamebox
	release
	end


BKFORT_1F_NPC_4::
	lock
	faceplayer
	namebox BKFORT_1F_NPC_1_Text_0
	msgbox BKFORT_1F_NPC_4_Text_0
	closemessage
	hidenamebox
	release
	end


BKFORT_1F_NPC_5::
	lock
	faceplayer
	namebox BKFORT_1F_NPC_1_Text_0
	msgbox BKFORT_1F_NPC_5_Text_0
	closemessage
	hidenamebox
	release
	end


BKFORT_1F_NPC_6::
	lock
	faceplayer
	namebox BKFORT_1F_NPC_1_Text_0
	msgbox BKFORT_1F_NPC_6_Text_0
	closemessage
	hidenamebox
	release
	end


BKFORT_1F_NPC_7::
	lock
	faceplayer
	namebox BKFORT_1F_NPC_1_Text_0
	msgbox BKFORT_1F_NPC_7_Text_0
	closemessage
	hidenamebox
	release
	end


BKFORT_1F_NPC_8::
	lock
	faceplayer
	namebox BKFORT_1F_NPC_8_Text_0
	msgbox BKFORT_1F_NPC_7_Text_0
	closemessage
	hidenamebox
	release
	end


BKFORT_1F_LENSIG::
	lock
	faceplayer
	namebox BKFORT_1F_LENSIG_Text_0
	msgbox BKFORT_1F_NPC_7_Text_0
	closemessage
	hidenamebox
	release
	end


BKFORT_1F_BOOK::
	lock
	msgbox BKFORT_1F_BOOK_Text_0
	closemessage
	release
	end


ITEM_BKFORT_1F_ITEM1::
	finditem ITEM_POUCH_BLACK
	end


ITEM_BKFORT_1F_ITEM2::
	finditem ITEM_POUCH_BLACK
	end


ITEM_BKFORT_1F_ITEM3::
	finditem ITEM_POUCH_BLACK
	end


CAUGHT_BY_BLACK_KNIGHTS_Text_0:
	.string "Sir Owen$"

CAUGHT_BY_BLACK_KNIGHTS_Text_1:
	.string "Our cover is blown {PLAYER}!\n"
	.string "Quick prepare for battle!$"

BLACK_KNIGHT_QUIZ_1_Text_0:
	.string "Black Knight$"

BLACK_KNIGHT_QUIZ_1_Text_1:
	.string "Oh, it is you two again, carry on.$"

BLACK_KNIGHT_QUIZ_1_Text_2:
	.string "Stop right there!\p"
	.string "We have important guests and due to\n"
	.string "this we have increased security.\p"
	.string "You will have to answer some questions\n"
	.string "so we know you are truly loyal to our\l"
	.string "cause!!$"

BLACK_KNIGHT_QUIZ_1_Text_3:
	.string "Black Knights are better than White\n"
	.string "Knights?$"

BLACK_KNIGHT_QUIZ_1_Text_4:
	.string "That is Faladorian talk.\p"
	.string "Prepare for battle scum!$"

BLACK_KNIGHT_QUIZ_1_Text_5:
	.string "…$"

BLACK_KNIGHT_QUIZ_1_Text_6:
	.string "Correct. We are way better than those\n"
	.string "pansies.$"

BLACK_KNIGHT_QUIZ_2_Text_0:
	.string "Make sure to stab the prisoners if they\n"
	.string "get too close to the bars.$"

BLACK_KNIGHT_QUIZ_2_Text_1:
	.string "Only true Black Knights could ever be\n"
	.string "allowed to speak to the prisoners.\p"
	.string "Prove your loyalty and you may descend!$"

BLACK_KNIGHT_QUIZ_2_Text_2:
	.string "Sir Owen Sonde and Sir Tiffy Cashien\n"
	.string "smells.$"

BLACK_KNIGHT_QUIZ_2_Text_3:
	.string "Damn right, prepare to battle Black\n"
	.string "Knight!$"

BLACK_KNIGHT_QUIZ_2_Text_4:
	.string "Haha, yeah, they really do. Heh.$"

BLACK_KNIGHT_QUIZ_2_Text_5:
	.string ".....\p"
	.string "{PLAYER}, something within me felt\n"
	.string "like we should have taken a loss here....$"

BKFORT_DOG_Text_0:
	.string "The dog looks at you and starts to\n"
	.string "growl.\p"
	.string "Maybe you should leave it alone.$"

BKFORT_1F_NPC_1_Text_0:
	.string "Guard$"

BKFORT_1F_NPC_1_Text_1:
	.string "Don't even think about causing any\n"
	.string "trouble today.\p"
	.string "We're on high alert!$"

BKFORT_1F_NPC_2_Text_0:
	.string "An important guest arrived not too long\n"
	.string "ago!\p"
	.string "I think he headed upstairs to have a\n"
	.string "meeting with the boss.$"

BKFORT_1F_NPC_3_Text_0:
	.string "I can't believe I did all that training\n"
	.string "and instead of fighting in a war, I'm\l"
	.string "running around trying to find a damn\l"
	.string "cabbage for a crazy person!$"

BKFORT_1F_NPC_4_Text_0:
	.string "Out of everything in Gielinor, why did\n"
	.string "they have to choose dogs as guard\l"
	.string "animals!\p"
	.string "I'm deathly allergic!$"

BKFORT_1F_NPC_5_Text_0:
	.string "I don't know if this special guest was\n"
	.string "cosplaying or just had poor fashion\l"
	.string "sense but they were dressed entirely in\l"
	.string "pink...$"

BKFORT_1F_NPC_6_Text_0:
	.string "I just really want to finish my book,\n"
	.string "and for the two characters to get their\l"
	.string "happy ever after.\p"
	.string "It has been giving me hope that one day\n"
	.string "I might have the courage to pursue my\l"
	.string "love...$"

BKFORT_1F_NPC_7_Text_0:
	.string "I am a Cupholder.$"

BKFORT_1F_NPC_8_Text_0:
	.string "Quester$"

BKFORT_1F_LENSIG_Text_0:
	.string "Lensig$"

BKFORT_1F_BOOK_Text_0:
	.string "The book tells a story of a romance\n"
	.string "between two youths from feuding\l"
	.string "families.\p"
	.string "You're sure it will have a happy ending.$"
