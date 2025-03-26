Digsite_MapScripts::
	.byte 0


NPC_WORKER_BLOCK::
	lock
	faceplayer
	namebox NPC_WORKER_BLOCK_Text_0
	msgbox NPC_WORKER_BLOCK_Text_1
	hidenamebox
	release
	end


NPC_DIGSITE_WORKER_1::
	lock
	faceplayer
	namebox NPC_WORKER_BLOCK_Text_0
	msgbox NPC_DIGSITE_WORKER_1_Text_0
	hidenamebox
	release
	end


NPC_ARCHAEOLOGIST_BLOCK::
	lock
	faceplayer
	namebox NPC_ARCHAEOLOGIST_BLOCK_Text_0
	msgbox NPC_ARCHAEOLOGIST_BLOCK_Text_1
	hidenamebox
	release
	end


NPC_DIGSITE_ARCHAEOLOGIST_1::
	lock
	faceplayer
	namebox NPC_ARCHAEOLOGIST_BLOCK_Text_0
	msgbox NPC_DIGSITE_ARCHAEOLOGIST_1_Text_0
	hidenamebox
	release
	end


NPC_DIGSITE_ARCHAEOLOGIST_2::
	lock
	faceplayer
	namebox NPC_ARCHAEOLOGIST_BLOCK_Text_0
	msgbox NPC_DIGSITE_ARCHAEOLOGIST_2_Text_0
	hidenamebox
	release
	end


NPC_BARGE_GUARD::
	lock
	faceplayer
	namebox NPC_BARGE_GUARD_Text_0
	msgbox NPC_BARGE_GUARD_Text_1
	hidenamebox
	release
	end


NPC_CAPTAIN_ERRDO::
	lock
	faceplayer
	namebox NPC_CAPTAIN_ERRDO_Text_0
	msgbox NPC_CAPTAIN_ERRDO_Text_1
	hidenamebox
	release
	end


NPC_DIGSITE_STUDENT::
	lock
	faceplayer
	namebox NPC_DIGSITE_STUDENT_Text_0
	msgbox NPC_DIGSITE_STUDENT_Text_1
	hidenamebox
	release
	end


SIGN_DIGSITE_LEVEL_0::
	lock
	msgbox SIGN_DIGSITE_LEVEL_0_Text_0
	release
	end


SIGN_DIGSITE_LEVEL_1::
	lock
	msgbox SIGN_DIGSITE_LEVEL_1_Text_0
	release
	end


SIGN_DIGSITE_LEVEL_2::
	lock
	msgbox SIGN_DIGSITE_LEVEL_2_Text_0
	release
	end


SIGN_DIGSITE_LEVEL_3::
	lock
	msgbox SIGN_DIGSITE_LEVEL_3_Text_0
	release
	end


SIGN_DIGSITE_MISC::
	lock
	msgbox SIGN_DIGSITE_MISC_Text_0
	release
	end


ITEM_DIGSITE_ITEM_1::
	finditem ITEM_TM_SHADOW_BONE
	end


ITEM_DIGSITE_ITEM_2::
	finditem ITEM_BOOK_OF_ZAROS
	end


ITEM_DIGSITE_ITEM_3::
	finditem ITEM_SPIRIT_CHARM
	end


DIGSITE_ANIMAL_SKULLS::
	lock
	msgbox DIGSITE_ANIMAL_SKULLS_Text_0
	release
	end


DIGSITE_ANIMAL_BONES::
	lock
	random 4
	switch VAR_RESULT
	case 0, DIGSITE_ANIMAL_BONES_3
	case 1, DIGSITE_ANIMAL_BONES_4
	case 2, DIGSITE_ANIMAL_BONES_5
	case 3, DIGSITE_ANIMAL_BONES_6
DIGSITE_ANIMAL_BONES_1:
	closemessage
	release
	end

DIGSITE_ANIMAL_BONES_3:
	msgbox DIGSITE_ANIMAL_BONES_Text_0
	goto DIGSITE_ANIMAL_BONES_1

DIGSITE_ANIMAL_BONES_4:
	msgbox DIGSITE_ANIMAL_BONES_Text_1
	goto DIGSITE_ANIMAL_BONES_1

DIGSITE_ANIMAL_BONES_5:
	msgbox DIGSITE_ANIMAL_BONES_Text_2
	goto DIGSITE_ANIMAL_BONES_1

DIGSITE_ANIMAL_BONES_6:
	msgbox DIGSITE_ANIMAL_BONES_Text_3
	goto DIGSITE_ANIMAL_BONES_1


NPC_WORKER_BLOCK_Text_0:
	.string "Worker$"

NPC_WORKER_BLOCK_Text_1:
	.string "Sorry, this ladder is off limits.\p"
	.string "Someone fell down it and broke their\n"
	.string "leg, so we are waiting on a health and\l"
	.string "safety assessment before we let\l"
	.string "anyone else down there.\p"
	.string "{PAUSE 15}Yes, that also means we have to wait\n"
	.string "until we can rescue them!$"

NPC_DIGSITE_WORKER_1_Text_0:
	.string "...{PAUSE 15}Hey, what happened to the animal skull\n"
	.string "I found earlier!{PAUSE 15}And my specimen brush!\p"
	.string "Do these pockets have holes in them?$"

NPC_ARCHAEOLOGIST_BLOCK_Text_0:
	.string "Archaeologist$"

NPC_ARCHAEOLOGIST_BLOCK_Text_1:
	.string "I'm sorry adventurer.\p"
	.string "Without a certificate showing that you\n"
	.string "have passed level 3 in your Earth\l"
	.string "Science exams, I cannot possibly let\l"
	.string "you into this excavation site.\p"
	.string "It's for experienced archaeologists\n"
	.string "only!$"

NPC_DIGSITE_ARCHAEOLOGIST_1_Text_0:
	.string "Did you know that during the Second\n"
	.string "Age, this area was once known as\l"
	.string "Senntisten?\p"
	.string "It was thought to be the capital of the\n"
	.string "Zarosian Empire.\p"
	.string "Some adventurer stumbled upon an\n"
	.string "ancient talisman and stone tablet in\l"
	.string "the ruins beneath us, so now we are\l"
	.string "excavating the site to see what else we\l"
	.string "can find!$"

NPC_DIGSITE_ARCHAEOLOGIST_2_Text_0:
	.string "I am a Cupholder.$"

NPC_BARGE_GUARD_Text_0:
	.string "Barge Guard$"

NPC_BARGE_GUARD_Text_1:
	.string "I am afraid the barge is already on its\n"
	.string "way to Fossil Island.\p"
	.string "Please come back later.\p"
	.string "{PAUSE 15}Also, no sailing in the canal!\p"
	.string "It must be kept clear for the barge!$"

NPC_CAPTAIN_ERRDO_Text_0:
	.string "Capt. Errdo$"

NPC_CAPTAIN_ERRDO_Text_1:
	.string "How embarassing...\p"
	.string "There was a bit of a technical issue\n"
	.string "when attempting to land and, well, I\l"
	.string "don't think I can fix this.\p"
	.string "It looks like I'll be heading back by\n"
	.string "foot!$"

NPC_DIGSITE_STUDENT_Text_0:
	.string "Student$"

NPC_DIGSITE_STUDENT_Text_1:
	.string "I lost my teddy.\p"
	.string "They were my lucky mascot...\p"
	.string "{PAUSE 15}But then I caught a really cool monster\n"
	.string "I've never seen before, so maybe they\l"
	.string "can be my new lucky mascot instead!$"

SIGN_DIGSITE_LEVEL_0_Text_0:
	.string "Training digs.\p"
	.string "Please remember your trowel.$"

SIGN_DIGSITE_LEVEL_1_Text_0:
	.string "Level 1 digs.\p"
	.string "Leather gloves and boots must be worn\n"
	.string "at all times.$"

SIGN_DIGSITE_LEVEL_2_Text_0:
	.string "Level 2 digs.\p"
	.string "For rock pick use ONLY!$"

SIGN_DIGSITE_LEVEL_3_Text_0:
	.string "Level 3 digs.\p"
	.string "Please clean any samples found, and\n"
	.string "only carry them in specimen jars.\p"
	.string "Additional jars can be collected from\n"
	.string "the Exam Centre.$"

SIGN_DIGSITE_MISC_Text_0:
	.string "Whatever was previously on the sign has\n"
	.string "hasilty been painted over and now\l"
	.string "reads: SENNTISTEN DIGSITE.\p"
	.string "Experienced archaeologists ONLY!$"

DIGSITE_ANIMAL_SKULLS_Text_0:
	.string "It is a fragile looking animal skull.\p"
	.string "You're worried it may be damaged if\n"
	.string "handled without the proper equipment\l"
	.string "and decide to leave it alone.$"

DIGSITE_ANIMAL_BONES_Text_0:
	.string "You don't have any of the proper\n"
	.string "equipment for handling old bones.\p"
	.string "Better leave these for the\n"
	.string "professionals.$"

DIGSITE_ANIMAL_BONES_Text_1:
	.string "Unfortunately, the pile of bones is not\n"
	.string "a skeleton in disguise waiting to\l"
	.string "battle.\p"
	.string "How boring.$"

DIGSITE_ANIMAL_BONES_Text_2:
	.string "These bones look ancient.\p"
	.string "You decide not to touch them, just in\n"
	.string "case they're cursed.$"

DIGSITE_ANIMAL_BONES_Text_3:
	.string "It belongs in a museum!$"
