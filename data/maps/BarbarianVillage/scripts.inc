BarbarianVillage_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, BarbarianVillage_MapScripts_MAP_SCRIPT_ON_TRANSITION
	map_script MAP_SCRIPT_ON_LOAD, BarbarianVillage_MapScripts_MAP_SCRIPT_ON_LOAD
	map_script MAP_SCRIPT_ON_FRAME_TABLE, BarbarianVillage_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

BarbarianVillage_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setflag FLAG_VISITED_BARBARIAN_VILLAGE
	return

BarbarianVillage_MapScripts_MAP_SCRIPT_ON_LOAD:
	compare VAR_POKESCAPE_GAMEMODE_STATE, 0
	goto_if_eq BarbarianVillage_MapScripts_MAP_SCRIPT_ON_LOAD_1
	compare VAR_POKESCAPE_GAMEMODE_STATE, 1
	goto_if_eq BarbarianVillage_MapScripts_MAP_SCRIPT_ON_LOAD_2
	return

BarbarianVillage_MapScripts_MAP_SCRIPT_ON_LOAD_1:
	call STORYMODE_STATE_BARBARIAN_VILLAGE
	return

BarbarianVillage_MapScripts_MAP_SCRIPT_ON_LOAD_2:
	call OPENWORLDMODE_STATE_BARBARIAN_VILLAGE
	return

BarbarianVillage_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_TEMP_B, 1, BARBARIANVILLAGE_STORYMODE_EVENT
	.2byte 0


BARBARIANVILLAGE_STORYMODE_EVENT::
	lock
	removeobject 2
	removeobject 16
	delay 30
	playse SE_DOOR
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
	compare VAR_TEMP_1, 12
	goto_if_eq BARBARIANVILLAGE_STORYMODE_EVENT_2
	compare VAR_TEMP_1, 11
	goto_if_eq BARBARIANVILLAGE_STORYMODE_EVENT_3
BARBARIANVILLAGE_STORYMODE_EVENT_1:
	namebox BARBARIANVILLAGE_STORYMODE_EVENT_Text_0
	msgbox BARBARIANVILLAGE_STORYMODE_EVENT_Text_1
	hidenamebox
	closemessage
	applymovement 2, MOVEMENT_BARBARIANVILLAGE_STORYMODE_EVENT_2
	applymovement OBJ_EVENT_ID_PLAYER, MOVEMENT_BARBARIANVILLAGE_STORYMODE_EVENT_2
	waitmovement 0
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
	compare VAR_TEMP_1, 12
	goto_if_eq BARBARIANVILLAGE_STORYMODE_EVENT_7
	compare VAR_TEMP_1, 11
	goto_if_eq BARBARIANVILLAGE_STORYMODE_EVENT_8
BARBARIANVILLAGE_STORYMODE_EVENT_6:
	waitmovement 0
	namebox BARBARIANVILLAGE_STORYMODE_EVENT_Text_0
	msgbox BARBARIANVILLAGE_STORYMODE_EVENT_Text_2
	hidenamebox
	closemessage
	playse SE_PIN
	applymovement 2, MOVEMENT_EXCLAMATIONMARK_FACE_DOWN
	applymovement OBJ_EVENT_ID_PLAYER, MOVEMENT_EXCLAMATIONMARK_FACE_DOWN
	waitmovement 0
	waitse
	addobject 16
	setobjectxyperm 16, 12, 29
	setobjectxy 16, 12, 29
	applymovement 16, MOVEMENT_BARBARIANVILLAGE_STORYMODE_EVENT_3
	delay 60
	applymovement 2, Movement_InteractFACELEFT
	applymovement OBJ_EVENT_ID_PLAYER, Movement_InteractFACELEFT
	waitmovement 16
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
	compare VAR_TEMP_1, 12
	goto_if_eq BARBARIANVILLAGE_STORYMODE_EVENT_12
	compare VAR_TEMP_1, 11
	goto_if_eq BARBARIANVILLAGE_STORYMODE_EVENT_13
BARBARIANVILLAGE_STORYMODE_EVENT_11:
	namebox BARBARIANVILLAGE_STORYMODE_EVENT_Text_0
	msgbox BARBARIANVILLAGE_STORYMODE_EVENT_Text_3
	hidenamebox
	closemessage
	setvar VAR_TEMP_B, 0
	setvar VAR_POKESCAPE_STORYMODE_PROGRESS, 165
	release
	end

BARBARIANVILLAGE_STORYMODE_EVENT_2:
	opendoor 11, 17
	delay 20
	setobjectxyperm 2, 11, 17
	setobjectxy 2, 11, 17
	addobject 2
	showobjectat 2, MAP_BARBARIAN_VILLAGE
	applymovement 2, MOVEMENT_BARBARIANVILLAGE_STORYMODE_EVENT_1
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Movement_InteractFACELEFT
	waitmovement 0
	closedoor 11, 17
	goto BARBARIANVILLAGE_STORYMODE_EVENT_1

BARBARIANVILLAGE_STORYMODE_EVENT_3:
	opendoor 12, 17
	delay 20
	setobjectxyperm 2, 12, 17
	setobjectxy 2, 12, 17
	addobject 2
	showobjectat 2, MAP_BARBARIAN_VILLAGE
	applymovement 2, MOVEMENT_BARBARIANVILLAGE_STORYMODE_EVENT_1
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Movement_InteractFACERIGHT
	waitmovement 0
	closedoor 12, 17
	goto BARBARIANVILLAGE_STORYMODE_EVENT_1

BARBARIANVILLAGE_STORYMODE_EVENT_7:
	applymovement 2, Movement_InteractFACERIGHT
	applymovement OBJ_EVENT_ID_PLAYER, Movement_InteractFACELEFT
	goto BARBARIANVILLAGE_STORYMODE_EVENT_6

BARBARIANVILLAGE_STORYMODE_EVENT_8:
	applymovement 2, Movement_InteractFACELEFT
	applymovement OBJ_EVENT_ID_PLAYER, Movement_InteractFACERIGHT
	goto BARBARIANVILLAGE_STORYMODE_EVENT_6

BARBARIANVILLAGE_STORYMODE_EVENT_12:
	applymovement 2, Movement_InteractFACERIGHT
	applymovement OBJ_EVENT_ID_PLAYER, Movement_InteractFACELEFT
	goto BARBARIANVILLAGE_STORYMODE_EVENT_11

BARBARIANVILLAGE_STORYMODE_EVENT_13:
	applymovement 2, Movement_InteractFACELEFT
	applymovement OBJ_EVENT_ID_PLAYER, Movement_InteractFACERIGHT
	goto BARBARIANVILLAGE_STORYMODE_EVENT_11


MOVEMENT_BARBARIANVILLAGE_STORYMODE_EVENT_1:
	face_down
	set_visible
	walk_down
	face_player
	step_end

MOVEMENT_BARBARIANVILLAGE_STORYMODE_EVENT_2:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

MOVEMENT_BARBARIANVILLAGE_STORYMODE_EVENT_3:
	face_up
	set_visible
	walk_fast_up
	walk_fast_left
	walk_fast_up
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_down
	walk_fast_down
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	step_end

STORYMODE_STATE_BARBARIAN_VILLAGE::
	compare VAR_POKESCAPE_STORYMODE_PROGRESS, 160
	goto_if_eq STORYMODE_STATE_BARBARIAN_VILLAGE_3
STORYMODE_STATE_BARBARIAN_VILLAGE_1:
	switch VAR_POKESCAPE_BARBARIAN_VILLAGE_STATE
	case 0, STORYMODE_STATE_BARBARIAN_VILLAGE_7
	case 5, STORYMODE_STATE_BARBARIAN_VILLAGE_8
	case 1, STORYMODE_STATE_BARBARIAN_VILLAGE_8
	case 2, STORYMODE_STATE_BARBARIAN_VILLAGE_8
	case 3, STORYMODE_STATE_BARBARIAN_VILLAGE_9
	return

STORYMODE_STATE_BARBARIAN_VILLAGE_2:
	setvar VAR_TEMP_B, 1
	goto STORYMODE_STATE_BARBARIAN_VILLAGE_1

STORYMODE_STATE_BARBARIAN_VILLAGE_3:
	goto_if_set FLAG_BADGE04_GET, STORYMODE_STATE_BARBARIAN_VILLAGE_2
	goto STORYMODE_STATE_BARBARIAN_VILLAGE_1

STORYMODE_STATE_BARBARIAN_VILLAGE_7:
	setobjectxyperm 6, 11, 19
	setobjectmovementtype 6, MOVEMENT_TYPE_FACE_DOWN
	setobjectxyperm 7, 12, 19
	setobjectmovementtype 7, MOVEMENT_TYPE_FACE_DOWN
	return

STORYMODE_STATE_BARBARIAN_VILLAGE_8:
	return

STORYMODE_STATE_BARBARIAN_VILLAGE_9:
	setobjectxyperm 2, 13, 27
	setobjectmovementtype 2, MOVEMENT_TYPE_FACE_UP
	return


OPENWORLDMODE_STATE_BARBARIAN_VILLAGE::
	goto_if_set FLAG_BADGE04_GET, OPENWORLDMODE_STATE_BARBARIAN_VILLAGE_1
	return

OPENWORLDMODE_STATE_BARBARIAN_VILLAGE_1:
	setobjectxyperm 2, 13, 27
	setobjectmovementtype 2, MOVEMENT_TYPE_FACE_UP
	return


NPC_BARB_BLOCKADE_1::
	lock
	faceplayer
	namebox NPC_BARB_BLOCKADE_1_Text_0
	compare VAR_POKESCAPE_GAMEMODE_STATE, 1
	goto_if_eq NPC_BARB_BLOCKADE_1_2
	compare VAR_POKESCAPE_BARBARIAN_VILLAGE_STATE, 0
	goto_if_eq NPC_BARB_BLOCKADE_1_5
	compare VAR_POKESCAPE_BARBARIAN_VILLAGE_STATE, 1
	goto_if_eq NPC_BARB_BLOCKADE_1_8
NPC_BARB_BLOCKADE_1_7:
	compare VAR_POKESCAPE_BARBARIAN_VILLAGE_STATE, 2
	goto_if_eq NPC_BARB_BLOCKADE_1_15
	compare VAR_POKESCAPE_BARBARIAN_VILLAGE_STATE, 5
	goto_if_eq NPC_BARB_BLOCKADE_1_15
NPC_BARB_BLOCKADE_1_14:
	compare VAR_POKESCAPE_BARBARIAN_VILLAGE_STATE, 3
	goto_if_eq NPC_BARB_BLOCKADE_1_20
NPC_BARB_BLOCKADE_1_19:
	hidenamebox
	closemessage
	release
	end

NPC_BARB_BLOCKADE_1_2:
	msgbox NPC_BARB_BLOCKADE_1_Text_1
	hidenamebox
	release
	end

NPC_BARB_BLOCKADE_1_5:
	msgbox NPC_BARB_BLOCKADE_1_Text_2, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne NPC_BARB_BLOCKADE_1_11
	namebox NPC_BARB_BLOCKADE_1_Text_0
	msgbox NPC_BARB_BLOCKADE_1_Text_4
	hidenamebox
	closemessage
	release
	end

NPC_BARB_BLOCKADE_1_8:
	msgbox NPC_BARB_BLOCKADE_1_Text_5
	goto NPC_BARB_BLOCKADE_1_7

NPC_BARB_BLOCKADE_1_10:
	hidenamebox
	closemessage
	applymovement 6, BARBARIANVILLAGE_BLOCK_1
	applymovement 7, BARBARIANVILLAGE_BLOCK_2
	waitmovement 0
	setvar VAR_POKESCAPE_BARBARIAN_VILLAGE_STATE, 1
	release
	end

NPC_BARB_BLOCKADE_1_11:
	namebox NPC_BARB_BLOCKADE_1_Text_0
	msgbox NPC_BARB_BLOCKADE_1_Text_3
	goto NPC_BARB_BLOCKADE_1_10

NPC_BARB_BLOCKADE_1_15:
	msgbox NPC_BARB_BLOCKADE_1_Text_6
	goto NPC_BARB_BLOCKADE_1_14

NPC_BARB_BLOCKADE_1_20:
	msgbox NPC_BARB_BLOCKADE_1_Text_7
	goto NPC_BARB_BLOCKADE_1_19


BARBARIANVILLAGE_BLOCK_1:
	walk_left
	face_down
	step_end

BARBARIANVILLAGE_BLOCK_2:
	walk_right
	face_down
	step_end

NPC_BARBARIANVILLAGE_DUNGEONGIRL::
	lock
	faceplayer
	namebox BARBARIANVILLAGE_STORYMODE_EVENT_Text_0
	goto_if_set FLAG_BADGE06_GET, NPC_BARBARIANVILLAGE_DUNGEONGIRL_2
	msgbox NPC_BARBARIANVILLAGE_DUNGEONGIRL_Text_1
NPC_BARBARIANVILLAGE_DUNGEONGIRL_1:
	hidenamebox
	release
	end

NPC_BARBARIANVILLAGE_DUNGEONGIRL_2:
	msgbox NPC_BARBARIANVILLAGE_DUNGEONGIRL_Text_0
	goto NPC_BARBARIANVILLAGE_DUNGEONGIRL_1


NPC_BARBARIANVILLAGE_SIGNPOST::
	lock
	msgbox NPC_BARBARIANVILLAGE_SIGNPOST_Text_0
	release
	end


NPC_BARBARIANVILLAGE_NPC1::
	lock
	faceplayer
	namebox NPC_BARB_BLOCKADE_1_Text_0
	msgbox NPC_BARBARIANVILLAGE_NPC1_Text_0
	hidenamebox
	release
	end


NPC_BARBARIANVILLAGE_NPC2::
	lock
	faceplayer
	namebox NPC_BARB_BLOCKADE_1_Text_0
	msgbox NPC_BARBARIANVILLAGE_NPC2_Text_0
	hidenamebox
	release
	end


NPC_BARBARIANVILLAGE_NPC3::
	lock
	faceplayer
	namebox NPC_BARB_BLOCKADE_1_Text_0
	msgbox NPC_BARBARIANVILLAGE_NPC3_Text_0
	hidenamebox
	release
	end


NPC_BARBARIANVILLAGE_NPC4::
	lock
	faceplayer
	namebox NPC_BARB_BLOCKADE_1_Text_0
	msgbox NPC_BARBARIANVILLAGE_NPC4_Text_0
	hidenamebox
	release
	end


NPC_BARBARIANVILLAGE_NPC5::
	lock
	faceplayer
	namebox NPC_BARBARIANVILLAGE_NPC5_Text_0
	msgbox NPC_BARBARIANVILLAGE_NPC5_Text_1
	hidenamebox
	release
	end


NPC_ROUTE20_NPC1::
	lock
	faceplayer
	namebox NPC_BARB_BLOCKADE_1_Text_0
	msgbox NPC_ROUTE20_NPC1_Text_0
	hidenamebox
	release
	end


BATTLE_ROUTE20_FISHERMAN_1::
	trainerbattle_single TRAINER_ROUTE20_TRAINER_1, BATTLE_ROUTE20_FISHERMAN_1_Text_0, BATTLE_ROUTE20_FISHERMAN_1_Text_1
	namebox BATTLE_ROUTE20_FISHERMAN_1_Text_2
	msgbox BATTLE_ROUTE20_FISHERMAN_1_Text_1
	hidenamebox
	release
	end


BATTLE_ROUTE20_FISHERMAN_2::
	trainerbattle_single TRAINER_ROUTE20_TRAINER_2, BATTLE_ROUTE20_FISHERMAN_2_Text_0, BATTLE_ROUTE20_FISHERMAN_2_Text_1
	namebox BATTLE_ROUTE20_FISHERMAN_2_Text_2
	msgbox BATTLE_ROUTE20_FISHERMAN_2_Text_3
	hidenamebox
	release
	end


BATTLE_ROUTE20_FISHERMAN_3::
	trainerbattle_single TRAINER_ROUTE20_TRAINER_3, BATTLE_ROUTE20_FISHERMAN_3_Text_0, BATTLE_ROUTE20_FISHERMAN_3_Text_1
	namebox BATTLE_ROUTE20_FISHERMAN_3_Text_2
	msgbox BATTLE_ROUTE20_FISHERMAN_3_Text_3
	hidenamebox
	release
	end


BATTLE_ROUTE20_SKILLER::
	trainerbattle_single TRAINER_ROUTE20_TRAINER_4, BATTLE_ROUTE20_SKILLER_Text_0, BATTLE_ROUTE20_SKILLER_Text_1
	namebox BATTLE_ROUTE20_SKILLER_Text_2
	msgbox BATTLE_ROUTE20_SKILLER_Text_3
	hidenamebox
	release
	end


BATTLE_ROUTE20_DUO_1::
	trainerbattle_double TRAINER_ROUTE20_DUO, BATTLE_ROUTE20_DUO_1_Text_0, BATTLE_ROUTE20_DUO_1_Text_1, BATTLE_ROUTE20_DUO_1_Text_2
	namebox BATTLE_ROUTE20_DUO_1_Text_3
	msgbox BATTLE_ROUTE20_DUO_1_Text_4
	hidenamebox
	release
	end


BATTLE_ROUTE20_DUO_2::
	trainerbattle_double TRAINER_ROUTE20_DUO, BATTLE_ROUTE20_DUO_2_Text_0, BATTLE_ROUTE20_DUO_2_Text_1, BATTLE_ROUTE20_DUO_1_Text_2
	namebox BATTLE_ROUTE20_DUO_2_Text_2
	msgbox BATTLE_ROUTE20_DUO_2_Text_3
	hidenamebox
	release
	end


NPC_BARBARIANVILLAGE_NPC6::
	lock
	faceplayer
	namebox NPC_BARB_BLOCKADE_1_Text_0
	msgbox NPC_BARBARIANVILLAGE_NPC6_Text_0
	hidenamebox
	release
	end


SHOP_HELMET_BARBARIANVILLAGE::
	lock
	faceplayer
	namebox SHOP_HELMET_BARBARIANVILLAGE_Text_0
	msgbox SHOP_HELMET_BARBARIANVILLAGE_Text_1
	waitmessage
	hidenamebox
	pokemart STORE_Helmet
	msgbox SHOP_HELMET_BARBARIANVILLAGE_Text_2
	release
	end


NPC_BARBARIANVILLAGE_NPC8::
	lock
	faceplayer
	namebox NPC_BARBARIANVILLAGE_NPC8_Text_0
	goto_if_unset FLAG_RECEIVED_TM47, NPC_BARBARIANVILLAGE_NPC8_2
	msgbox NPC_BARBARIANVILLAGE_NPC8_Text_4
	hidenamebox
	release
	end

NPC_BARBARIANVILLAGE_NPC8_2:
	msgbox NPC_BARBARIANVILLAGE_NPC8_Text_1
	msgbox NPC_BARBARIANVILLAGE_NPC8_Text_2
	hidenamebox
	giveitem ITEM_TM47, 1
	namebox NPC_BARBARIANVILLAGE_NPC8_Text_0
	msgbox NPC_BARBARIANVILLAGE_NPC8_Text_3
	setflag FLAG_RECEIVED_TM47
	hidenamebox
	release
	end


BARBARIANVILLAGE_STORYMODE_EVENT_Text_0:
	.string "Litara$"

BARBARIANVILLAGE_STORYMODE_EVENT_Text_1:
	.string "Wait {PLAYER}, before you leave allow\n"
	.string "me to show you our stronghold.$"

BARBARIANVILLAGE_STORYMODE_EVENT_Text_2:
	.string "Our stronghold is located down this\n"
	.string "ladder.$"

BARBARIANVILLAGE_STORYMODE_EVENT_Text_3:
	.string "Who was that they werent allowed in\n"
	.string "there!$"

NPC_BARB_BLOCKADE_1_Text_0:
	.string "Barbarian$"

NPC_BARB_BLOCKADE_1_Text_1:
	.string "Our Chieftain is very strong.\p"
	.string "Do not underestimate him!$"

NPC_BARB_BLOCKADE_1_Text_2:
	.string "Only the strong may enter our longhall!\p"
	.string "You should probably leave if you know\n"
	.string "what is good for you.\p"
	.string "What?\p"
	.string "Are you sure you would like to challenge\n"
	.string "our Gym?$"

NPC_BARB_BLOCKADE_1_Text_3:
	.string "Ohho, so this challenger thinks they\n"
	.string "have what it takes to beat our\l"
	.string "Chieftain?\p"
	.string "This will be entertaining to watch, very\n"
	.string "well.\p"
	.string "You may pass.$"

NPC_BARB_BLOCKADE_1_Text_4:
	.string "That's what we thought come back when\n"
	.string "you are stronger!$"

NPC_BARB_BLOCKADE_1_Text_5:
	.string "Good luck on your gym challenge.$"

NPC_BARB_BLOCKADE_1_Text_6:
	.string "We knew you would be struggling but\n"
	.string "good luck on your gym challenge.$"

NPC_BARB_BLOCKADE_1_Text_7:
	.string "You defeated our Chieftain!\p"
	.string "We are impressed, well done!$"

NPC_BARBARIANVILLAGE_DUNGEONGIRL_Text_0:
	.string "You have proved yourself a barbarian in\n"
	.string "name and spirit!\p"
	.string "I grant you access to use our\n"
	.string "stronghold for training.\p"
	.string "The monsters found within are very\n"
	.string "strong, so have fun training!$"

NPC_BARBARIANVILLAGE_DUNGEONGIRL_Text_1:
	.string "Only once you have proved yourself a\n"
	.string "barbarian are you allowed to use our\l"
	.string "dungeon for training.$"

NPC_BARBARIANVILLAGE_SIGNPOST_Text_0:
	.string "Barbarian Village.\p"
	.string "Also known as Gunnarsgrunn.$"

NPC_BARBARIANVILLAGE_NPC1_Text_0:
	.string "Chieftain Gunthor is the strongest\n"
	.string "warrior of our village and also the 6th\l"
	.string "strongest MvM Gym Leader.$"

NPC_BARBARIANVILLAGE_NPC2_Text_0:
	.string "Finally after all the training my\n"
	.string "Monster learnt a new move.\p"
	.string "The crazy thing is that it evolved right\n"
	.string "after!$"

NPC_BARBARIANVILLAGE_NPC3_Text_0:
	.string "We don't need no Banks to heal our\n"
	.string "Monsters in our Village.\p"
	.string "That is the path of a weakling!\p"
	.string "Although if you are tired I suppose you\n"
	.string "could rest in our visitors hall.$"

NPC_BARBARIANVILLAGE_NPC4_Text_0:
	.string "My father is the Chieftain of this\n"
	.string "village and also a Gym Leader.\p"
	.string "I feel like I have a lot to live up to.$"

NPC_BARBARIANVILLAGE_NPC5_Text_0:
	.string "Dwarf$"

NPC_BARBARIANVILLAGE_NPC5_Text_1:
	.string "There is a girl I like, but I do not know\n"
	.string "if she would like me.\p"
	.string "I do not know what to do so I will stay\n"
	.string "here picking each petal of this flower\l"
	.string "until fate decides for me.$"

NPC_ROUTE20_NPC1_Text_0:
	.string "This is a popular spot for fly fishing.\p"
	.string "Many adventurers catch Trout and\n"
	.string "Salmon in our river.$"

BATTLE_ROUTE20_FISHERMAN_1_Text_0:
	.string "If you look carefully in the water you\n"
	.string "can see a rainbow.$"

BATTLE_ROUTE20_FISHERMAN_1_Text_1:
	.string "So these Rainbow Fish are why you can\n"
	.string "see a rainbow in the river.$"

BATTLE_ROUTE20_FISHERMAN_1_Text_2:
	.string "TrawlerSux$"

BATTLE_ROUTE20_FISHERMAN_2_Text_0:
	.string "You just scared away my catch!$"

BATTLE_ROUTE20_FISHERMAN_2_Text_1:
	.string "I just ran out of feathers…$"

BATTLE_ROUTE20_FISHERMAN_2_Text_2:
	.string "MastrBaitr$"

BATTLE_ROUTE20_FISHERMAN_2_Text_3:
	.string "Fly fishing is great!\p"
	.string "Much better than regular net fishing.$"

BATTLE_ROUTE20_FISHERMAN_3_Text_0:
	.string "I caught these fishing in a dungeon.\p"
	.string "I'd like to see how good they are in\n"
	.string "battle!$"

BATTLE_ROUTE20_FISHERMAN_3_Text_1:
	.string "I may have lost but I now understand\n"
	.string "the strength of these little guys.$"

BATTLE_ROUTE20_FISHERMAN_3_Text_2:
	.string "Hurley$"

BATTLE_ROUTE20_FISHERMAN_3_Text_3:
	.string "If you are interested where I got these\n"
	.string "from you should take a visit to the\l"
	.string "cavern by Mudskipper point.$"

BATTLE_ROUTE20_SKILLER_Text_0:
	.string "Fishing is great, I could do this all day.$"

BATTLE_ROUTE20_SKILLER_Text_1:
	.string "You should do some fishing too.$"

BATTLE_ROUTE20_SKILLER_Text_2:
	.string "Lvl3Foreva$"

BATTLE_ROUTE20_SKILLER_Text_3:
	.string "You should do some fishing too.\p"
	.string "You would never know what rare fish you\n"
	.string "could find until you try.$"

BATTLE_ROUTE20_DUO_1_Text_0:
	.string "Pass the Trout.$"

BATTLE_ROUTE20_DUO_1_Text_1:
	.string "Oh no it burnt…$"

BATTLE_ROUTE20_DUO_1_Text_2:
	.string "We would love to have a double battle\n"
	.string "with you, but you don't have enough\l"
	.string "monsters.$"

BATTLE_ROUTE20_DUO_1_Text_3:
	.string "Cook$"

BATTLE_ROUTE20_DUO_1_Text_4:
	.string "Can someone light a fire for me?$"

BATTLE_ROUTE20_DUO_2_Text_0:
	.string "Feel the burn!$"

BATTLE_ROUTE20_DUO_2_Text_1:
	.string "The fire went out of control…$"

BATTLE_ROUTE20_DUO_2_Text_2:
	.string "Firemaker$"

BATTLE_ROUTE20_DUO_2_Text_3:
	.string "I have the most important job here.$"

NPC_BARBARIANVILLAGE_NPC6_Text_0:
	.string "I make all the clothes for our village.\p"
	.string "But don't tell anyone that I get my\n"
	.string "supplies from Thessalia in Varrock.$"

SHOP_HELMET_BARBARIANVILLAGE_Text_0:
	.string "Peska$"

SHOP_HELMET_BARBARIANVILLAGE_Text_1:
	.string "Welcome to my Helmet shop.\p"
	.string "Can I interest you in anything?$"

SHOP_HELMET_BARBARIANVILLAGE_Text_2:
	.string "Thank you, come again!$"

NPC_BARBARIANVILLAGE_NPC8_Text_0:
	.string "Fremennik$"

NPC_BARBARIANVILLAGE_NPC8_Text_1:
	.string "I've travelled all the way here from\n"
	.string "Rellekka.\p"
	.string "My goal is to make friendly relations\n"
	.string "with our barbarian brothers in Gunnar's\l"
	.string "Ground.$"

NPC_BARBARIANVILLAGE_NPC8_Text_2:
	.string "You may not be a barbarian, but as the\n"
	.string "first person to talk to me since I got\l"
	.string "here let me share with you something\l"
	.string "from my homeland.$"

NPC_BARBARIANVILLAGE_NPC8_Text_3:
	.string "Any monster that uses that move will\n"
	.string "faint instantly, but whatever monster\l"
	.string "you send in next will have all of their\l"
	.string "health restored and they will be cured\l"
	.string "of any status condition.\p"
	.string "It is a reminder that sometimes in\n"
	.string "battle, sacrifices need to be made..$"

NPC_BARBARIANVILLAGE_NPC8_Text_4:
	.string "I've travelled all the way here from\n"
	.string "Rellekka.\p"
	.string "My goal is to make friendly relations\n"
	.string "with our barbarian brothers in Gunnar's\l"
	.string "Ground.\p"
	.string "Where is Rellekka?\p"
	.string "It's far, far north-west of here in the\n"
	.string "Fremennik Province.\p"
	.string "Maybe one day you can visit it.$"
