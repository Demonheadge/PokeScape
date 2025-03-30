Black_Knights_Fortress_3_MapScripts::
	.byte 0


BKFORT_3F_NPC_1::
	lock
	faceplayer
	namebox BKFORT_3F_NPC_1_Text_0
	msgbox BKFORT_3F_NPC_1_Text_1
	closemessage
	hidenamebox
	release
	end


BKFORT_3F_NPC_2::
	lock
	faceplayer
	namebox BKFORT_3F_NPC_1_Text_0
	msgbox BKFORT_3F_NPC_2_Text_0
	closemessage
	hidenamebox
	release
	end


BKFORT_3F_NPC_3::
	lock
	faceplayer
	namebox BKFORT_3F_NPC_3_Text_0
	msgbox BKFORT_3F_NPC_3_Text_1
	closemessage
	hidenamebox
	release
	end


BKFORT_3F_NPC_4::
	lock
	faceplayer
	namebox BKFORT_3F_NPC_4_Text_0
	msgbox BKFORT_3F_NPC_4_Text_1
	closemessage
	hidenamebox
	release
	end


BKFORT_3F_NPC_5::
	lock
	faceplayer
	namebox BKFORT_3F_NPC_5_Text_0
	msgbox BKFORT_3F_NPC_5_Text_1
	closemessage
	hidenamebox
	release
	end


BKFORT_3F_NPC_6::
	lock
	faceplayer
	namebox BKFORT_3F_NPC_6_Text_0
	msgbox BKFORT_3F_NPC_6_Text_1
	closemessage
	hidenamebox
	release
	end


BKFORT_3F_NPC_7::
	lock
	msgbox BKFORT_3F_NPC_7_Text_0
	closemessage
	release
	end


BKFORT_3F_NPC_8::
	lock
	faceplayer
	namebox BKFORT_3F_NPC_8_Text_0
	msgbox BKFORT_3F_NPC_8_Text_1
	closemessage
	hidenamebox
	release
	end


BKFORT_3F_NPC_9::
	lock
	faceplayer
	namebox BKFORT_3F_NPC_9_Text_0
	msgbox BKFORT_3F_NPC_9_Text_1
	closemessage
	hidenamebox
	release
	end


BKFORT_3F_NPC_10::
	lock
	faceplayer
	namebox BKFORT_3F_NPC_10_Text_0
	msgbox BKFORT_3F_NPC_10_Text_1
	closemessage
	hidenamebox
	release
	end


BKFORT_3F_NPC_11::
	lock
	faceplayer
	namebox BKFORT_3F_NPC_11_Text_0
	msgbox BKFORT_3F_NPC_11_Text_1
	closemessage
	hidenamebox
	release
	end


BKFORT_3F_NPC_12::
	lock
	faceplayer
	namebox BKFORT_3F_NPC_11_Text_0
	msgbox BKFORT_3F_NPC_12_Text_0
	closemessage
	hidenamebox
	release
	end


BKFORT_3F_NPC_13::
	lock
	faceplayer
	namebox BKFORT_3F_NPC_13_Text_0
	msgbox BKFORT_3F_NPC_13_Text_1
	closemessage
	hidenamebox
	release
	end


BKFORT_3F_NPC_14::
	lock
	namebox BKFORT_3F_NPC_1_Text_0
	msgbox BKFORT_3F_NPC_14_Text_0
	closemessage
	hidenamebox
	applymovement 2, MOVEMENT_FACE_RIGHT
	applymovement 4, MOVEMENT_FACE_RIGHT
	applymovement 3, MOVEMENT_FACE_LEFT
	applymovement 5, MOVEMENT_FACE_LEFT
	waitmovement 0
	namebox BKFORT_3F_NPC_14_Text_1
	msgbox BKFORT_3F_NPC_14_Text_2
	closemessage
	hidenamebox
	namebox BKFORT_3F_NPC_1_Text_0
	msgbox BKFORT_3F_NPC_14_Text_3
	closemessage
	hidenamebox
	applymovement 2, MOVEMENT_EXCLAMATIONMARK_JUMP_RIGHT
	applymovement 4, MOVEMENT_EXCLAMATIONMARK_JUMP_RIGHT
	applymovement 3, MOVEMENT_EXCLAMATIONMARK_JUMP_LEFT
	applymovement 5, MOVEMENT_EXCLAMATIONMARK_JUMP_LEFT
	waitmovement 0
	namebox BKFORT_3F_NPC_14_Text_1
	msgbox BKFORT_3F_NPC_14_Text_4
	closemessage
	hidenamebox
	applymovement 2, MOVEMENT_FACE_LEFT
	applymovement 4, MOVEMENT_FACE_LEFT
	applymovement 3, MOVEMENT_FACE_RIGHT
	applymovement 5, MOVEMENT_FACE_RIGHT
	waitmovement 0
	release
	end


MOVEMENT_EXCLAMATIONMARK_JUMP_RIGHT:
	emote_exclamation_mark
	jump_in_place_right
	step_end

BKFORT_3F_NPC_15::
	lock
	namebox BKFORT_3F_NPC_11_Text_0
	msgbox BKFORT_3F_NPC_15_Text_0
	closemessage
	hidenamebox
	release
	end


BKFORT_3F_NPC_16::
	lock
	faceplayer
	namebox BKFORT_3F_NPC_11_Text_0
	msgbox BKFORT_3F_NPC_16_Text_0
	closemessage
	hidenamebox
	release
	end


BKFORT_3F_NPC_17::
	lock
	faceplayer
	namebox BKFORT_3F_NPC_17_Text_0
	msgbox BKFORT_3F_NPC_17_Text_1
	closemessage
	hidenamebox
	release
	end


BKFORT_3F_NPC_18::
	lock
	faceplayer
	namebox BKFORT_3F_NPC_11_Text_0
	msgbox BKFORT_3F_NPC_18_Text_0
	closemessage
	hidenamebox
	release
	end


BKFORT_3F_NPC_19::
	lock
	faceplayer
	namebox BKFORT_3F_NPC_11_Text_0
	msgbox BKFORT_3F_NPC_19_Text_0
	closemessage
	hidenamebox
	release
	end


BKFORT_3F_NPC_20::
	lock
	faceplayer
	namebox BKFORT_3F_NPC_20_Text_0
	msgbox BKFORT_3F_NPC_20_Text_1
	closemessage
	hidenamebox
	release
	end


ITEM_BKFORT_3F_ITEM1::
	finditem ITEM_PRAYER_POTION
	end


ITEM_BKFORT_3F_ITEM2::
	finditem ITEM_BRONZEHELMET
	end


ITEM_BKFORT_3F_ITEM3::
	finditem ITEM_POUCH_BLACK
	end


BKFORT_3F_NPC_1_Text_0:
	.string "Black Knight$"

BKFORT_3F_NPC_1_Text_1:
	.string "Heh, you want to get a jab in at the\n"
	.string "prisoner too?\p"
	.string "I heard there are some weapons fresh\n"
	.string "off the forge that could do with being\l"
	.string "tested on someone like this!$"

BKFORT_3F_NPC_2_Text_0:
	.string "I can't believe I spend all day down\n"
	.string "here torturing people...\p"
	.string "{PAUSE 15}THIS IS THE BEST JOB EVER!$"

BKFORT_3F_NPC_3_Text_0:
	.string "Sir Gawain$"

BKFORT_3F_NPC_3_Text_1:
	.string "For the last time...\p"
	.string "I AM NOT A WHITE KNIGHT!\p"
	.string "I AM A KNIGHT OF THE ROUND TABLE!\p"
	.string "{PAUSE 15}Very well, the King will save me...$"

BKFORT_3F_NPC_4_Text_0:
	.string "Hill Giant$"

BKFORT_3F_NPC_4_Text_1:
	.string "Wait...\p"
	.string "Do...\p"
	.string "do not...\p"
	.string "flig...\p"
	.string "fight.\p"
	.string "Want...\p"
	.string "no, need...\p"
	.string "your help.\p"
	.string "Please...$"

BKFORT_3F_NPC_5_Text_0:
	.string "Dungeonletic$"

BKFORT_3F_NPC_5_Text_1:
	.string "Meet Dungeonletics, my Black Knights\n"
	.string "Fortress dungeon locked Ultimate\l"
	.string "Ironman.\p"
	.string "After recently maxing my Ultimate\n"
	.string "Ironman I decided to up the ante to\l"
	.string "forge my own journey from scratch.\p"
	.string "No banking, no trading, but this time I\n"
	.string "can't leave this jail cell.\p"
	.string "All leading up to eventually taking on\n"
	.string "one of PokeScape's biggest\l"
	.string "challenges...\p"
	.string "Tagging Stan in the Discord and not\n"
	.string "getting banned.$"

BKFORT_3F_NPC_6_Text_0:
	.string "Goebie$"

BKFORT_3F_NPC_6_Text_1:
	.string "The airut invaded our planet and\n"
	.string "enslaved our people.\p"
	.string "I came to your world for help, but the\n"
	.string "people here weren't as friendly as I'd\l"
	.string "hoped.\p"
	.string "We aren't strong enough to fight back\n"
	.string "on our own...$"

BKFORT_3F_NPC_7_Text_0:
	.string "No matter how hard you try, you can't\n"
	.string "seem to get their attention.\p"
	.string "They just keep walking into the wall,\n"
	.string "over and over and over again...$"

BKFORT_3F_NPC_8_Text_0:
	.string "Skeleton$"

BKFORT_3F_NPC_8_Text_1:
	.string "The skeleton stares at you.\p"
	.string "It can see you looking at the item\n"
	.string "behind it, but it clearly has no\l"
	.string "intention of handing it over.$"

BKFORT_3F_NPC_9_Text_0:
	.string "Worldbearer$"

BKFORT_3F_NPC_9_Text_1:
	.string "Yildoi!\p"
	.string "Alnaasdzoh klesh yetsan.$"

BKFORT_3F_NPC_10_Text_0:
	.string "Forgotten War.$"

BKFORT_3F_NPC_10_Text_1:
	.string "This place is even more bleak than the\n"
	.string "dungeons back home.$"

BKFORT_3F_NPC_11_Text_0:
	.string "Guard$"

BKFORT_3F_NPC_11_Text_1:
	.string "It might not look like much, but this is\n"
	.string "one of the best assignments you can\l"
	.string "get in this place.\p"
	.string "Much better than those suckers who\n"
	.string "have to stand outside in the freezing\l"
	.string "cold!$"

BKFORT_3F_NPC_12_Text_0:
	.string "Do you know what the average life span\n"
	.string "of a Falador guard is?\p"
	.string "They're constantly attacked for no\n"
	.string "reason.\p"
	.string "The White Knights do nothing to\n"
	.string "intervene and help!\p"
	.string "That's why I deserted them to join the\n"
	.string "Black Knights.\p"
	.string "Look how secure this place is!$"

BKFORT_3F_NPC_13_Text_0:
	.string "Blacksmith$"

BKFORT_3F_NPC_13_Text_1:
	.string "Do you know how difficult it is to smelt\n"
	.string "enough black armour to keep up with\l"
	.string "demand?$"

BKFORT_3F_NPC_14_Text_0:
	.string "I am Black Knight Sergeant Tyme, your\n"
	.string "drill instructor.\p"
	.string "From now on you will speak only when\n"
	.string "spoken to, and the first and last words\l"
	.string "out of your mouths will be 'Sir'.\p"
	.string "Do you maggots understand that?$"

BKFORT_3F_NPC_14_Text_1:
	.string "Guards$"

BKFORT_3F_NPC_14_Text_2:
	.string "Sir, yes Sir.$"

BKFORT_3F_NPC_14_Text_3:
	.string "I can't hear you.$"

BKFORT_3F_NPC_14_Text_4:
	.string "SIR, YES SIR!$"

BKFORT_3F_NPC_15_Text_0:
	.string "Left hand... hut!\p"
	.string "Right hand... hut!\p"
	.string "Draw and parry!\p"
	.string "Order... hut!\p"
	.string "This is my longsword!\p"
	.string "There are many like it, but this one is\n"
	.string "mine!\p"
	.string "My longsword is my best friend!\p"
	.string "It is my life!$"

BKFORT_3F_NPC_16_Text_0:
	.string "Boy, when I joined the exchange program\n"
	.string "between the Khazard Guard and the\l"
	.string "Black Knights guard, I never expected\l"
	.string "these guys to be even more intense\l"
	.string "than the General!$"

BKFORT_3F_NPC_17_Text_0:
	.string "Durial321$"

BKFORT_3F_NPC_17_Text_1:
	.string "Those blasted White Knights stopped me\n"
	.string "from engaging in the biggest massacre\l"
	.string "Gielinor had ever seen...\p"
	.string "With the strength of the Kinshra behind\n"
	.string "me, I swear I will have my revenge.$"

BKFORT_3F_NPC_18_Text_0:
	.string "I am not sure how hitting this dummy\n"
	.string "and doing practice drills is really going\l"
	.string "to help when everybody now just fights\l"
	.string "with monsters.\p"
	.string "How am I supposed to use a sword to\n"
	.string "defeat some otherworldly being?\p"
	.string "I just keep quiet and do what I'm told\n"
	.string "though, the instructor is scary!$"

BKFORT_3F_NPC_19_Text_0:
	.string "Uhhhh, am I halucinating or is that a\n"
	.string "freaking DEMON training over there?!$"

BKFORT_3F_NPC_20_Text_0:
	.string "Lesser Demon$"

BKFORT_3F_NPC_20_Text_1:
	.string "Gwuaaahhh!$"
