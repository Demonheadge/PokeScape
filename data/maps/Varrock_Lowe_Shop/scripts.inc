Varrock_Lowe_Shop_MapScripts::
	.byte 0


LOWES_SHOP_NPC::
	lock
	faceplayer
	namebox LOWES_SHOP_NPC_Text_0
	msgbox LOWES_SHOP_NPC_Text_1
	waitmessage
	hidenamebox
	release
	end


NPC_LOWES_DOG::
	lock
	faceplayer
	msgbox NPC_LOWES_DOG_Text_0
	waitmessage
	hidenamebox
	release
	end


LOWESBOOK::
	lock
	msgbox LOWESBOOK_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne LOWESBOOK_2
	msgbox LOWESBOOK_Text_2
	closemessage
LOWESBOOK_1:
	release
	end

LOWESBOOK_2:
	msgbox LOWESBOOK_Text_1
	closemessage
	goto LOWESBOOK_1


LOWES_BONE_CROSSBOW::
	finditem ITEM_SPIRIT_SHARD
	end


NPC_TRAININGROOM_NOOB::
	lock
	faceplayer
	namebox NPC_TRAININGROOM_NOOB_Text_0
	msgbox NPC_TRAININGROOM_NOOB_Text_1
	waitmessage
	hidenamebox
	applymovement 2, MOVEMENT_FACE_RIGHT
	waitmovement 0
	release
	end


NPC_TRAININGROOM_SUMMONER::
	lock
	faceplayer
	namebox NPC_TRAININGROOM_SUMMONER_Text_0
	msgbox NPC_TRAININGROOM_SUMMONER_Text_1
	waitmessage
	hidenamebox
	applymovement 1, MOVEMENT_FACE_LEFT
	waitmovement 0
	release
	end


NPC_TRAININGROOM_IMP::
	lock
	msgbox NPC_TRAININGROOM_IMP_Text_0
	waitmessage
	release
	end


NPC_TRAININGROOM_RUSHER::
	lock
	faceplayer
	namebox NPC_TRAININGROOM_RUSHER_Text_0
	msgbox NPC_TRAININGROOM_RUSHER_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne NPC_TRAININGROOM_RUSHER_2
	msgbox NPC_TRAININGROOM_RUSHER_Text_4
NPC_TRAININGROOM_RUSHER_1:
	waitmessage
	hidenamebox
	applymovement 5, MOVEMENT_FACE_UP
	waitmovement 0
	release
	end

NPC_TRAININGROOM_RUSHER_2:
	msgbox NPC_TRAININGROOM_RUSHER_Text_2
	trainerbattle_no_intro TRAINER_VARROCK_TRAINING_ROOM_RUSHER, NPC_TRAININGROOM_RUSHER_Text_3
	goto NPC_TRAININGROOM_RUSHER_1


LOWES_SHOP_NPC_Text_0:
	.string "Der4ng3d$"

LOWES_SHOP_NPC_Text_1:
	.string "This is one of the best places in\n"
	.string "Misthalin to buy arrows.$"

NPC_LOWES_DOG_Text_0:
	.string "You lean down and scratch the dog\n"
	.string "behind the ears.\p"
	.string "It looks up at you as it stretches out\n"
	.string "on the ground.$"

LOWESBOOK_Text_0:
	.string "There is a journal on the table.\p"
	.string "Do you want to read it?$"

LOWESBOOK_Text_1:
	.string "I've heard rumours that Robin lives\n"
	.string "across the River Salve.\p"
	.string "Imagine living so close to THE Robin.\p"
	.string "A Master Bowman.\p"
	.string "I'd love to meet him one day, and get\n"
	.string "some tips.\p"
	.string "I don't think anybody else in Gielinor\n"
	.string "shares my love of archery like he does.\p"
	.string "{PAUSE 15}The journal continues on sharing Lowe's\n"
	.string "admiration of Robin for many, many, many\l"
	.string "more pages.\p"
	.string "You decide not to continue reading...$"

LOWESBOOK_Text_2:
	.string "You decide not to read the journal.$"

NPC_TRAININGROOM_NOOB_Text_0:
	.string "Noob$"

NPC_TRAININGROOM_NOOB_Text_1:
	.string "I heard this was a good place to train.\p"
	.string "But I haven't leveled since I got here.$"

NPC_TRAININGROOM_SUMMONER_Text_0:
	.string "Summoner$"

NPC_TRAININGROOM_SUMMONER_Text_1:
	.string "This is a great place to train low for\n"
	.string "low levels.\p"
	.string "But once they hit level 9 they stop\n"
	.string "gaining xp.$"

NPC_TRAININGROOM_IMP_Text_0:
	.string "The Imp seems too focused to pay\n"
	.string "attention to you.$"

NPC_TRAININGROOM_RUSHER_Text_0:
	.string "Rusher$"

NPC_TRAININGROOM_RUSHER_Text_1:
	.string "Would you like to have a battle?$"

NPC_TRAININGROOM_RUSHER_Text_2:
	.string "I hope you are ready as I am not going\n"
	.string "to hold back!$"

NPC_TRAININGROOM_RUSHER_Text_3:
	.string "Despite losing, I think I got stronger\n"
	.string "from that battle.$"

NPC_TRAININGROOM_RUSHER_Text_4:
	.string "Come back if you change your mind.\p"
	.string "I'm here every day.$"
