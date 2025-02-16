Black_Knights_Fortress_2_MapScripts::
	.byte 0


BLACK_KNIGHT_QUIZ_3::
	lockall
	namebox BLACK_KNIGHT_QUIZ_3_Text_0
	checktrainerflag TRAINER_BLACKKNIGHT_NECRO_1
	compare VAR_RESULT, TRUE
	goto_if_eq BLACK_KNIGHT_QUIZ_3_2
	msgbox BLACK_KNIGHT_QUIZ_3_Text_2
	msgbox BLACK_KNIGHT_QUIZ_3_Text_3, MSGBOX_YESNO
	compare VAR_RESULT, FALSE
	goto_if_eq BLACK_KNIGHT_QUIZ_3_5
	msgbox BLACK_KNIGHT_QUIZ_3_Text_6
	closemessage
	hidenamebox
	settrainerflag TRAINER_BLACKKNIGHT_NECRO_1
BLACK_KNIGHT_QUIZ_3_1:
	releaseall
	end

BLACK_KNIGHT_QUIZ_3_2:
	msgbox BLACK_KNIGHT_QUIZ_3_Text_1
	closemessage
	hidenamebox
	goto BLACK_KNIGHT_QUIZ_3_1

BLACK_KNIGHT_QUIZ_3_5:
	msgbox BLACK_KNIGHT_QUIZ_3_Text_4
	closemessage
	hidenamebox
	call CAUGHT_BY_BLACK_KNIGHTS
	playbgm MUS_PS_ENCOUNTER_KNIGHTS, FALSE
	trainerbattle_no_intro TRAINER_BLACKKNIGHT_NECRO_1, BLACK_KNIGHT_QUIZ_3_Text_5
	goto BLACK_KNIGHT_QUIZ_3_1


BLACK_KNIGHT_QUIZ_4::
	lockall
	namebox BLACK_KNIGHT_QUIZ_4_Text_0
	checktrainerflag TRAINER_BLACKKNIGHT_TAIM
	compare VAR_RESULT, TRUE
	goto_if_eq BLACK_KNIGHT_QUIZ_4_2
	msgbox BLACK_KNIGHT_QUIZ_4_Text_2
	msgbox BLACK_KNIGHT_QUIZ_4_Text_3, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq BLACK_KNIGHT_QUIZ_4_5
	msgbox BLACK_KNIGHT_QUIZ_4_Text_5
	closemessage
	hidenamebox
	settrainerflag TRAINER_BLACKKNIGHT_TAIM
BLACK_KNIGHT_QUIZ_4_1:
	releaseall
	end

BLACK_KNIGHT_QUIZ_4_2:
	msgbox BLACK_KNIGHT_QUIZ_4_Text_1
	closemessage
	hidenamebox
	goto BLACK_KNIGHT_QUIZ_4_1

BLACK_KNIGHT_QUIZ_4_5:
	msgbox BLACK_KNIGHT_QUIZ_4_Text_4
	closemessage
	hidenamebox
	call CAUGHT_BY_BLACK_KNIGHTS
	playbgm MUS_PS_ENCOUNTER_KNIGHTS, FALSE
	trainerbattle_no_intro TRAINER_BLACKKNIGHT_TAIM, BLACK_KNIGHT_QUIZ_3_Text_5
	goto BLACK_KNIGHT_QUIZ_4_1


BLACK_KNIGHT_QUIZ_5::
	lockall
	namebox BLACK_KNIGHT_QUIZ_4_Text_0
	checktrainerflag TRAINER_BLACKKNIGHT_LAIF
	compare VAR_RESULT, TRUE
	goto_if_eq BLACK_KNIGHT_QUIZ_5_2
	msgbox BLACK_KNIGHT_QUIZ_5_Text_1
	msgbox BLACK_KNIGHT_QUIZ_5_Text_2, MSGBOX_YESNO
	compare VAR_RESULT, FALSE
	goto_if_eq BLACK_KNIGHT_QUIZ_5_5
	msgbox BLACK_KNIGHT_QUIZ_5_Text_4
	closemessage
	hidenamebox
	settrainerflag TRAINER_BLACKKNIGHT_LAIF
BLACK_KNIGHT_QUIZ_5_1:
	releaseall
	end

BLACK_KNIGHT_QUIZ_5_2:
	msgbox BLACK_KNIGHT_QUIZ_5_Text_0
	closemessage
	hidenamebox
	goto BLACK_KNIGHT_QUIZ_5_1

BLACK_KNIGHT_QUIZ_5_5:
	msgbox BLACK_KNIGHT_QUIZ_5_Text_3
	closemessage
	hidenamebox
	call CAUGHT_BY_BLACK_KNIGHTS
	playbgm MUS_PS_ENCOUNTER_KNIGHTS, FALSE
	trainerbattle_no_intro TRAINER_BLACKKNIGHT_LAIF, BLACK_KNIGHT_QUIZ_3_Text_5
	goto BLACK_KNIGHT_QUIZ_5_1


BLACK_KNIGHT_QUIZ_6::
	lockall
	namebox BLACK_KNIGHT_QUIZ_3_Text_0
	checktrainerflag TRAINER_BLACKKNIGHT_NECRO_2
	compare VAR_RESULT, TRUE
	goto_if_eq BLACK_KNIGHT_QUIZ_6_2
	msgbox BLACK_KNIGHT_QUIZ_6_Text_1
	msgbox BLACK_KNIGHT_QUIZ_6_Text_2, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq BLACK_KNIGHT_QUIZ_6_5
	msgbox BLACK_KNIGHT_QUIZ_6_Text_4
	closemessage
	hidenamebox
	settrainerflag TRAINER_BLACKKNIGHT_NECRO_2
BLACK_KNIGHT_QUIZ_6_1:
	releaseall
	end

BLACK_KNIGHT_QUIZ_6_2:
	msgbox BLACK_KNIGHT_QUIZ_6_Text_0
	closemessage
	hidenamebox
	goto BLACK_KNIGHT_QUIZ_6_1

BLACK_KNIGHT_QUIZ_6_5:
	msgbox BLACK_KNIGHT_QUIZ_6_Text_3
	closemessage
	hidenamebox
	call CAUGHT_BY_BLACK_KNIGHTS
	playbgm MUS_PS_ENCOUNTER_KNIGHTS, FALSE
	trainerbattle_no_intro TRAINER_BLACKKNIGHT_NECRO_2, BLACK_KNIGHT_QUIZ_3_Text_5
	goto BLACK_KNIGHT_QUIZ_6_1


BLACK_KNIGHT_QUIZ_7::
	lockall
	namebox BLACK_KNIGHT_QUIZ_4_Text_0
	checktrainerflag TRAINER_BLACKKNIGHT_FALL
	compare VAR_RESULT, TRUE
	goto_if_eq BLACK_KNIGHT_QUIZ_7_2
	msgbox BLACK_KNIGHT_QUIZ_7_Text_1
	msgbox BLACK_KNIGHT_QUIZ_7_Text_2, MSGBOX_YESNO
	compare VAR_RESULT, FALSE
	goto_if_eq BLACK_KNIGHT_QUIZ_7_5
	msgbox BLACK_KNIGHT_QUIZ_7_Text_4
	closemessage
	hidenamebox
	settrainerflag TRAINER_BLACKKNIGHT_FALL
BLACK_KNIGHT_QUIZ_7_1:
	releaseall
	end

BLACK_KNIGHT_QUIZ_7_2:
	msgbox BLACK_KNIGHT_QUIZ_7_Text_0
	closemessage
	hidenamebox
	goto BLACK_KNIGHT_QUIZ_7_1

BLACK_KNIGHT_QUIZ_7_5:
	msgbox BLACK_KNIGHT_QUIZ_7_Text_3
	closemessage
	hidenamebox
	call CAUGHT_BY_BLACK_KNIGHTS
	playbgm MUS_PS_ENCOUNTER_KNIGHTS, FALSE
	trainerbattle_no_intro TRAINER_BLACKKNIGHT_FALL, BLACK_KNIGHT_QUIZ_3_Text_5
	goto BLACK_KNIGHT_QUIZ_7_1


BKFORT_2F_NPC_1::
	faceplayer
	namebox BKFORT_2F_NPC_1_Text_0
	msgbox BKFORT_2F_NPC_1_Text_1
	closemessage
	hidenamebox
	release
	end


BKFORT_2F_NPC_2::
	faceplayer
	namebox BLACK_KNIGHT_QUIZ_4_Text_0
	msgbox BKFORT_2F_NPC_2_Text_0
	closemessage
	hidenamebox
	release
	end


BKFORT_2F_NPC_3::
	faceplayer
	namebox BLACK_KNIGHT_QUIZ_4_Text_0
	msgbox BKFORT_2F_NPC_3_Text_0
	closemessage
	hidenamebox
	release
	end


BKFORT_2F_NPC_4::
	faceplayer
	namebox BKFORT_2F_NPC_4_Text_0
	msgbox BKFORT_2F_NPC_4_Text_1
	closemessage
	hidenamebox
	release
	end


BKFORT_2F_NPC_5::
	faceplayer
	namebox BKFORT_2F_NPC_5_Text_0
	msgbox BKFORT_2F_NPC_4_Text_1
	closemessage
	hidenamebox
	release
	end


BKFORT_2F_NPC_6::
	faceplayer
	namebox BKFORT_2F_NPC_6_Text_0
	msgbox BKFORT_2F_NPC_6_Text_1
	closemessage
	hidenamebox
	release
	end


BKFORT_2F_NPC_7::
	faceplayer
	namebox BLACK_KNIGHT_QUIZ_3_Text_0
	msgbox BKFORT_2F_NPC_4_Text_1
	closemessage
	hidenamebox
	release
	end


BKFORT_2F_NPC_8::
	faceplayer
	namebox BLACK_KNIGHT_QUIZ_4_Text_0
	msgbox BKFORT_2F_NPC_4_Text_1
	closemessage
	hidenamebox
	release
	end


BKFORT_2F_NPC_9::
	faceplayer
	namebox BLACK_KNIGHT_QUIZ_4_Text_0
	msgbox BKFORT_2F_NPC_4_Text_1
	closemessage
	hidenamebox
	release
	end


BKFORT_2F_NPC_10::
	faceplayer
	namebox BLACK_KNIGHT_QUIZ_4_Text_0
	msgbox BKFORT_2F_NPC_4_Text_1
	closemessage
	hidenamebox
	release
	end


BKFORT_2F_NPC_11::
	faceplayer
	namebox BKFORT_2F_NPC_4_Text_0
	msgbox BKFORT_2F_NPC_4_Text_1
	closemessage
	hidenamebox
	release
	end


BKFORT_2F_NPC_12::
	faceplayer
	namebox BKFORT_2F_NPC_4_Text_0
	msgbox BKFORT_2F_NPC_12_Text_0
	closemessage
	hidenamebox
	release
	end


BKFORT_2F_NPC_13::
	faceplayer
	namebox BKFORT_2F_NPC_13_Text_0
	msgbox BKFORT_2F_NPC_4_Text_1
	closemessage
	hidenamebox
	release
	end


BKFORT_2F_NPC_14::
	faceplayer
	namebox BKFORT_2F_NPC_14_Text_0
	msgbox BKFORT_2F_NPC_14_Text_1
	closemessage
	hidenamebox
	release
	end


BKFORT_2F_NPC_15::
	faceplayer
	namebox BKFORT_2F_NPC_5_Text_0
	msgbox BKFORT_2F_NPC_4_Text_1
	closemessage
	hidenamebox
	release
	end


BKFORT_2F_NPC_16::
	faceplayer
	namebox BLACK_KNIGHT_QUIZ_3_Text_0
	msgbox BKFORT_2F_NPC_16_Text_0
	closemessage
	hidenamebox
	release
	end


BKFORT_2F_NPC_17::
	faceplayer
	namebox BKFORT_2F_NPC_6_Text_0
	msgbox BKFORT_2F_NPC_17_Text_0
	closemessage
	hidenamebox
	release
	end


BKFORT_2F_NPC_18::
	faceplayer
	namebox BKFORT_2F_NPC_6_Text_0
	msgbox BKFORT_2F_NPC_18_Text_0
	closemessage
	hidenamebox
	release
	end


BKFORT_2F_NPC_19::
	faceplayer
	namebox BKFORT_2F_NPC_19_Text_0
	msgbox BKFORT_2F_NPC_4_Text_1
	closemessage
	hidenamebox
	release
	end


BKFORT_2F_NPC_20::
	faceplayer
	namebox BLACK_KNIGHT_QUIZ_4_Text_0
	msgbox BKFORT_2F_NPC_4_Text_1
	closemessage
	hidenamebox
	release
	end


NPC_HELLCAT::
	random 3
	switch VAR_RESULT
	case 0, NPC_HELLCAT_3
	case 1, NPC_HELLCAT_4
	case 2, NPC_HELLCAT_5
	release
	end

NPC_HELLCAT_3:
	lock
	faceplayer
	namebox NPC_HELLCAT_Text_0
	msgbox NPC_HELLCAT_Text_1
	hidenamebox
	release
	end

NPC_HELLCAT_4:
	lock
	faceplayer
	namebox NPC_HELLCAT_Text_0
	msgbox NPC_HELLCAT_Text_2
	hidenamebox
	release
	end

NPC_HELLCAT_5:
	lock
	faceplayer
	namebox NPC_HELLCAT_Text_0
	msgbox NPC_HELLCAT_Text_3
	hidenamebox
	release
	end


NPC_ZAMOHAWK::
	lock
	faceplayer
	namebox NPC_ZAMOHAWK_Text_0
	playmoncry SPECIES_ZAMOHAWK, 0
	msgbox NPC_ZAMOHAWK_Text_1
	waitmoncry
	hidenamebox
	release
	end


ITEM_BKFORT_2F_ITEM1::
	finditem ITEM_POUCH_BLACK
	end


ITEM_BKFORT_2F_ITEM2::
	finditem ITEM_POUCH_BLACK
	end


ITEM_BKFORT_2F_ITEM3::
	finditem ITEM_POUCH_BLACK
	end


ITEM_BKFORT_2F_ITEM4::
	finditem ITEM_POUCH_BLACK
	end


ITEM_BKFORT_2F_ITEM5::
	finditem ITEM_POUCH_BLACK
	end


ITEM_BKFORT_2F_ITEM6::
	finditem ITEM_POUCH_BLACK
	end


ITEM_BKFORT_2F_ITEM7::
	finditem ITEM_POUCH_BLACK
	end


ITEM_BKFORT_2F_ITEM8::
	finditem ITEM_POUCH_BLACK
	end


BLACK_KNIGHT_QUIZ_3_Text_0:
	.string "Necromancer$"

BLACK_KNIGHT_QUIZ_3_Text_1:
	.string "You may continue through.$"

BLACK_KNIGHT_QUIZ_3_Text_2:
	.string "I hope you've studied, as that's the\n"
	.string "only way you're getting through here.\p"
	.string "Tell me...$"

BLACK_KNIGHT_QUIZ_3_Text_3:
	.string "The first Black Knight was Lord Sanafin\n"
	.string "Valzin.$"

BLACK_KNIGHT_QUIZ_3_Text_4:
	.string "Guess you White Knights don't read your\n"
	.string "history.\p"
	.string "Time to die!\p"
	.string "Maybe I'll even resurrect you as my\n"
	.string "pets after...$"

BLACK_KNIGHT_QUIZ_3_Text_5:
	.string "…$"

BLACK_KNIGHT_QUIZ_3_Text_6:
	.string "Yes, she was the daughter of the\n"
	.string "Varrockian Duke.\p"
	.string "You know your history well.$"

BLACK_KNIGHT_QUIZ_4_Text_0:
	.string "Black Knight$"

BLACK_KNIGHT_QUIZ_4_Text_1:
	.string "Phew, it's just you two.\p"
	.string "Everyone's on edge around here at the\n"
	.string "moment.$"

BLACK_KNIGHT_QUIZ_4_Text_2:
	.string "Sorry. Increased security means you\n"
	.string "need to answer a question before\l"
	.string "passing.\p"
	.string "It'll be easy...\p"
	.string "if you're a true Black Knight!$"

BLACK_KNIGHT_QUIZ_4_Text_3:
	.string "The first Black Knights were allies of\n"
	.string "King Wallace?$"

BLACK_KNIGHT_QUIZ_4_Text_4:
	.string "WRONG!!\p"
	.string "The current ill King is a loser, and we\n"
	.string "refuse his service.\p"
	.string "Pick up a book sometime you noob.\p"
	.string "Prepare for battle!$"

BLACK_KNIGHT_QUIZ_4_Text_5:
	.string "Correct\p"
	.string "We were allies of King Raddallin. Not\n"
	.string "Wallace.$"

BLACK_KNIGHT_QUIZ_5_Text_0:
	.string "Black armour never goes out of style!\p"
	.string "You both suit it.$"

BLACK_KNIGHT_QUIZ_5_Text_1:
	.string "Before you go any further...$"

BLACK_KNIGHT_QUIZ_5_Text_2:
	.string "Black and red is a great colour\n"
	.string "combination.$"

BLACK_KNIGHT_QUIZ_5_Text_3:
	.string "That is White Knight talk!\p"
	.string "I bet you don't even steal candy from\n"
	.string "babies.\p"
	.string "Prepare to die!$"

BLACK_KNIGHT_QUIZ_5_Text_4:
	.string "Heck yeah!$"

BLACK_KNIGHT_QUIZ_6_Text_0:
	.string "Solus Dellagar will burn for what he did.$"

BLACK_KNIGHT_QUIZ_6_Text_1:
	.string "You know the drill by now...\p"
	.string "Answer the question, and you can keep\n"
	.string "going.$"

BLACK_KNIGHT_QUIZ_6_Text_2:
	.string "The Zamorakian mage Solus Dellagar is a\n"
	.string "close ally of the Black Knights.$"

BLACK_KNIGHT_QUIZ_6_Text_3:
	.string "Blasphemy!\p"
	.string "Solus Dellagar is a treacherous leech\n"
	.string "who betrayed us.\p"
	.string "You're an imposter, and I'll gladly be\n"
	.string "the one to stop you.$"

BLACK_KNIGHT_QUIZ_6_Text_4:
	.string "That's right!\p"
	.string "The only good thing those White Knights\n"
	.string "have ever done was apprehend and exile\l"
	.string "that traitor.$"

BLACK_KNIGHT_QUIZ_7_Text_0:
	.string "Hail Daquarius.{PAUSE 15}\p"
	.string "You may pass.$"

BLACK_KNIGHT_QUIZ_7_Text_1:
	.string "Before you can go through here, tell me\n"
	.string "one thing.$"

BLACK_KNIGHT_QUIZ_7_Text_2:
	.string "The current leader of the Black Knights\n"
	.string "is Lord Daquarius.$"

BLACK_KNIGHT_QUIZ_7_Text_3:
	.string "You are one of those Iban exiles aren't\n"
	.string "you?\p"
	.string "You won't leave here alive!$"

BLACK_KNIGHT_QUIZ_7_Text_4:
	.string "Hail Daquarius.$"

BKFORT_2F_NPC_1_Text_0:
	.string "Greldo$"

BKFORT_2F_NPC_1_Text_1:
	.string "Me need Draynor cabbageth.\p"
	.string "{PAUSE 15}They tayth-tee, me hope thilly Black\n"
	.string "Knight not eat it or green lady be very\l"
	.string "angry.$"

BKFORT_2F_NPC_2_Text_0:
	.string "People wouldn't be so afraid of us if we\n"
	.string "were White Knights...$"

BKFORT_2F_NPC_3_Text_0:
	.string "Can I ask you a question?\p"
	.string "What do you think about puns?{PAUSE 15}\p"
	.string "Look, I hate the White Knights as much\n"
	.string "as everyone else but I really do think\l"
	.string "they nailed the whole naming thing.\p"
	.string "Imagine if we had names like that...\p"
	.string "Like Jack, or Chap!\p"
	.string "Maybe I should bring it up next council\n"
	.string "meeting...$"

BKFORT_2F_NPC_4_Text_0:
	.string "Guard$"

BKFORT_2F_NPC_4_Text_1:
	.string "I am a Cupholder.$"

BKFORT_2F_NPC_5_Text_0:
	.string "Dark Wizard$"

BKFORT_2F_NPC_6_Text_0:
	.string "Zamorak Wizard$"

BKFORT_2F_NPC_6_Text_1:
	.string "One of the eggs was blessed by Zamorak\n"
	.string "himself and the first Hawk was born...$"

BKFORT_2F_NPC_12_Text_0:
	.string "Ughhhhhh\p"
	.string "I was so hungry I snuck into the\n"
	.string "kitchen and ate a whole cabbage!\p"
	.string "But now I feel really sick...$"

BKFORT_2F_NPC_13_Text_0:
	.string "Chef$"

BKFORT_2F_NPC_14_Text_0:
	.string "Marius$"

BKFORT_2F_NPC_14_Text_1:
	.string "It is my duty to bestow Zamorak's\n"
	.string "blessing upon his servants.\p"
	.string "Remove your helmet, and I shall\n"
	.string "administer the mark.$"

BKFORT_2F_NPC_16_Text_0:
	.string "Zamorak o domine, Dona eis requiem.$"

BKFORT_2F_NPC_17_Text_0:
	.string "From the blood of the Fallen, we shall\n"
	.string "create Wine of Zamorak.$"

BKFORT_2F_NPC_18_Text_0:
	.string "When gravity falls and earth becomes\n"
	.string "sky, fear the beast with just one eye.$"

BKFORT_2F_NPC_19_Text_0:
	.string "Cupholder$"

NPC_HELLCAT_Text_0:
	.string "Hellcat$"

NPC_HELLCAT_Text_1:
	.string "Hiss!$"

NPC_HELLCAT_Text_2:
	.string "Meeeooow!$"

NPC_HELLCAT_Text_3:
	.string "MeeeoooooW!$"

NPC_ZAMOHAWK_Text_0:
	.string "Zamohawk$"

NPC_ZAMOHAWK_Text_1:
	.string "Kee-eeeee-arr$"
