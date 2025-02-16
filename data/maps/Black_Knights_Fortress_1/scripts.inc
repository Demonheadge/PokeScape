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
	checktrainerflag TRAINER_A_TWISTED_SMILE
	compare VAR_RESULT, TRUE
	goto_if_eq BLACK_KNIGHT_QUIZ_1_2
	msgbox BLACK_KNIGHT_QUIZ_1_Text_2
	msgbox BLACK_KNIGHT_QUIZ_1_Text_3, MSGBOX_YESNO
	compare VAR_RESULT, FALSE
	goto_if_eq BLACK_KNIGHT_QUIZ_1_5
	msgbox BLACK_KNIGHT_QUIZ_1_Text_6
	closemessage
	hidenamebox
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
	trainerbattle_no_intro TRAINER_A_TWISTED_SMILE, BLACK_KNIGHT_QUIZ_1_Text_5
	goto BLACK_KNIGHT_QUIZ_1_1


CAUGHT_BY_BLACK_KNIGHTS_Text_0:
	.string "Sir Owen$"

CAUGHT_BY_BLACK_KNIGHTS_Text_1:
	.string "Our cover is blown {PLAYER}!\n"
	.string "Quick prepare for battle!$"

BLACK_KNIGHT_QUIZ_1_Text_0:
	.string "Black Knight$"

BLACK_KNIGHT_QUIZ_1_Text_1:
	.string "Oh it is you two again, carry on.$"

BLACK_KNIGHT_QUIZ_1_Text_2:
	.string "HALT!!$"

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
