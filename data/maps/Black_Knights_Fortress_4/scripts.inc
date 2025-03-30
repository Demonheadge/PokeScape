Black_Knights_Fortress_4_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, Black_Knights_Fortress_4_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

Black_Knights_Fortress_4_MapScripts_MAP_SCRIPT_ON_LOAD:
	call STORYMODE_STATE_BKFORT_4F
	return


STORYMODE_STATE_BKFORT_4F::
	compare VAR_POKESCAPE_STORYMODE_PROGRESS, 192
	goto_if_ge STORYMODE_STATE_BKFORT_4F_1
	setflag FLAG_TEMP_1E
	removeobject 19
	removeobject 20
	setobjectxyperm 19, 20, 21
	setobjectxyperm 20, 10, 21
	special DrawWholeMapView
	return

STORYMODE_STATE_BKFORT_4F_1:
	setflag FLAG_TEMP_1E
	removeobject 7
	removeobject 8
	addobject 19
	addobject 20
	setobjectxyperm 19, 20, 21
	setobjectxyperm 20, 10, 21
	special DrawWholeMapView
	return


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
	msgbox BKFORT_4F_NPC_3_Text_0
	closemessage
	hidenamebox
	release
	end


BKFORT_4F_NPC_4::
	lock
	namebox BKFORT_4F_NPC_1_Text_0
	msgbox BKFORT_4F_NPC_4_Text_0
	closemessage
	hidenamebox
	release
	end


BKFORT_4F_NPC_5::
	lock
	faceplayer
	namebox BKFORT_4F_NPC_1_Text_0
	msgbox BKFORT_4F_NPC_5_Text_0
	closemessage
	hidenamebox
	release
	end


BKFORT_4F_NPC_6::
	lock
	faceplayer
	namebox BKFORT_4F_NPC_1_Text_0
	msgbox BKFORT_4F_NPC_6_Text_0
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
	finditem ITEM_STAT_MOONLIGHT_MEAD
	end


ITEM_BKFORT_4F_ITEM2::
	finditem ITEM_PHOENIX_NECKLACE
	end


ITEM_BKFORT_4F_ITEM3::
	finditem ITEM_TM_REVENGE
	end


ITEM_BKFORT_4F_ITEM4::
	finditem ITEM_CHAOS_RUNE
	end


ITEM_BKFORT_4F_ITEM5::
	finditem ITEM_BODY_RUNE
	end


ITEM_BKFORT_4F_ITEM6::
	finditem ITEM_MITHRIL_SCIMITAR
	end


TRIGGER_BLACK_KNIGHT_4F_1::
	compare VAR_POKESCAPE_STORYMODE_PROGRESS, 190
	goto_if_le TRIGGER_BLACK_KNIGHT_4F_1_1
	end

TRIGGER_BLACK_KNIGHT_4F_1_1:
	lockall
	applymovement 11, MOVEMENT_WALK_DOWN
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
	compare VAR_TEMP_1, 15
	goto_if_eq TRIGGER_BLACK_KNIGHT_4F_1_5
TRIGGER_BLACK_KNIGHT_4F_1_4:
	compare VAR_TEMP_1, 16
	goto_if_eq TRIGGER_BLACK_KNIGHT_4F_1_8
	compare VAR_TEMP_1, 17
	goto_if_eq TRIGGER_BLACK_KNIGHT_4F_1_9
TRIGGER_BLACK_KNIGHT_4F_1_7:
	waitmovement 0
	namebox BKFORT_4F_NPC_1_Text_0
	msgbox TRIGGER_BLACK_KNIGHT_4F_1_Text_0
	closemessage
	hidenamebox
	call CAUGHT_BY_BLACK_KNIGHTS_FINAL
	playbgm MUS_PS_ENCOUNTER_KNIGHTS, FALSE
	trainerbattle_no_intro TRAINER_BLACKKNIGHT_ELITE_2, TRIGGER_BLACK_KNIGHT_4F_1_Text_1
	setvar VAR_POKESCAPE_STORYMODE_PROGRESS, 195
	releaseall
	end

TRIGGER_BLACK_KNIGHT_4F_1_5:
	applymovement OBJ_EVENT_ID_FOLLOWER, Movement_STORY_BKFORT_4F_1_right
	goto TRIGGER_BLACK_KNIGHT_4F_1_4

TRIGGER_BLACK_KNIGHT_4F_1_8:
	applymovement OBJ_EVENT_ID_FOLLOWER, Movement_STORY_BKFORT_4F_1_left
	goto TRIGGER_BLACK_KNIGHT_4F_1_7

TRIGGER_BLACK_KNIGHT_4F_1_9:
	applymovement OBJ_EVENT_ID_FOLLOWER, Movement_STORY_BKFORT_4F_1_left
	goto TRIGGER_BLACK_KNIGHT_4F_1_7


Movement_STORY_BKFORT_4F_1_left:
	face_left
	walk_left
	face_up
	walk_up
	step_end

Movement_STORY_BKFORT_4F_1_right:
	face_right
	walk_right
	face_up
	walk_up
	step_end

CAUGHT_BY_BLACK_KNIGHTS_FINAL::
	applymovement OBJ_EVENT_ID_FOLLOWER, Movement_InteractFACEPLAYER
	facefollower
	waitmovement 0
	namebox CAUGHT_BY_BLACK_KNIGHTS_FINAL_Text_0
	msgbox CAUGHT_BY_BLACK_KNIGHTS_FINAL_Text_1
	closemessage
	hidenamebox
	applymovement OBJ_EVENT_ID_FOLLOWER, Movement_InteractFACEUP
	applymovement OBJ_EVENT_ID_PLAYER, Movement_InteractFACEUP
	waitmovement 0
	namebox CAUGHT_BY_BLACK_KNIGHTS_FINAL_Text_0
	msgbox CAUGHT_BY_BLACK_KNIGHTS_FINAL_Text_2
	closemessage
	hidenamebox
	return


TRIGGER_BLACK_KNIGHT_4F_2::
	compare VAR_POKESCAPE_STORYMODE_PROGRESS, 190
	goto_if_eq TRIGGER_BLACK_KNIGHT_4F_2_1
	end

TRIGGER_BLACK_KNIGHT_4F_2_1:
	lockall
	applymovement 7, MOVEMENT_EXCLAMATIONMARK_JUMP_UP
	applymovement 8, MOVEMENT_EXCLAMATIONMARK_JUMP_UP
	applymovement 7, Movement_STORY_BKFORT_4F_2_right
	applymovement 8, Movement_STORY_BKFORT_4F_2_left
	waitmovement 0
	setvar VAR_POKESCAPE_STORYMODE_PROGRESS, 191
	releaseall
	end


Movement_STORY_BKFORT_4F_2_left:
	face_left
	walk_fast_left
	face_down
	walk_fast_down
	face_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	face_up
	walk_fast_up
	step_end

Movement_STORY_BKFORT_4F_2_right:
	face_right
	walk_fast_right
	walk_fast_right
	step_end

TRIGGER_BLACK_KNIGHT_4F_TREASURE::
	compare VAR_POKESCAPE_STORYMODE_PROGRESS, 191
	goto_if_le TRIGGER_BLACK_KNIGHT_4F_TREASURE_1
	return

TRIGGER_BLACK_KNIGHT_4F_TREASURE_1:
	lockall
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
	compare VAR_TEMP_1, 1
	goto_if_eq TRIGGER_BLACK_KNIGHT_4F_TREASURE_4
TRIGGER_BLACK_KNIGHT_4F_TREASURE_3:
	compare VAR_TEMP_1, 2
	goto_if_eq TRIGGER_BLACK_KNIGHT_4F_TREASURE_7
	compare VAR_TEMP_1, 3
	goto_if_eq TRIGGER_BLACK_KNIGHT_4F_TREASURE_8
TRIGGER_BLACK_KNIGHT_4F_TREASURE_6:
	applymovement 5, MOVEMENT_FACE_DOWN
	applymovement 6, MOVEMENT_FACE_DOWN
	waitmovement 0
	namebox BKFORT_4F_NPC_1_Text_0
	msgbox TRIGGER_BLACK_KNIGHT_4F_TREASURE_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq TRIGGER_BLACK_KNIGHT_4F_TREASURE_12
	msgbox TRIGGER_BLACK_KNIGHT_4F_TREASURE_Text_4
	closemessage
	hidenamebox
	applymovement OBJ_EVENT_ID_PLAYER, MOVEMENT_WALK_DOWN
	applymovement OBJ_EVENT_ID_FOLLOWER, MOVEMENT_WALK_DOWN
	waitmovement 0
	releaseall
	end

TRIGGER_BLACK_KNIGHT_4F_TREASURE_4:
	applymovement OBJ_EVENT_ID_FOLLOWER, Movement_STORY_BKFORT_4F_1_right
	goto TRIGGER_BLACK_KNIGHT_4F_TREASURE_3

TRIGGER_BLACK_KNIGHT_4F_TREASURE_7:
	applymovement OBJ_EVENT_ID_FOLLOWER, Movement_STORY_BKFORT_4F_1_left
	goto TRIGGER_BLACK_KNIGHT_4F_TREASURE_6

TRIGGER_BLACK_KNIGHT_4F_TREASURE_8:
	applymovement OBJ_EVENT_ID_FOLLOWER, Movement_STORY_BKFORT_4F_1_left
	goto TRIGGER_BLACK_KNIGHT_4F_TREASURE_6

	releaseall
	end

TRIGGER_BLACK_KNIGHT_4F_TREASURE_12:
	msgbox TRIGGER_BLACK_KNIGHT_4F_TREASURE_Text_1
	closemessage
	hidenamebox
	playbgm MUS_PS_ENCOUNTER_KNIGHTS, FALSE
	trainerbattle_two_trainers TRAINER_BLACKKNIGHT_SKOOL, TRIGGER_BLACK_KNIGHT_4F_TREASURE_Text_2, TRAINER_BLACKKNIGHT_SIFT, TRIGGER_BLACK_KNIGHT_4F_TREASURE_Text_3
	setvar VAR_POKESCAPE_STORYMODE_PROGRESS, 192
	releaseall
	end


TRIGGER_BLACK_KNIGHT_4F_FINAL::
	lockall
	applymovement OBJ_EVENT_ID_FOLLOWER, Movement_STORY_BKFORT_4F_1_right
	facefollower
	applymovement OBJ_EVENT_ID_FOLLOWER, Movement_InteractFACEPLAYER
	waitmovement 0
	namebox CAUGHT_BY_BLACK_KNIGHTS_FINAL_Text_0
	msgbox TRIGGER_BLACK_KNIGHT_4F_FINAL_Text_0
	closemessage
	hidenamebox
	applymovement OBJ_EVENT_ID_FOLLOWER, Movement_InteractFACEUP
	applymovement OBJ_EVENT_ID_PLAYER, Movement_InteractFACEUP
	waitmovement 0
	special SpawnCameraObject
	applymovement OBJ_EVENT_ID_CAMERA, movement_BK_Fort_camera_1
	waitmovement 0
	applymovement 17, Movement_InteractFACEUP
	namebox BKFORT_4F_NPC_1_Text_0
	msgbox TRIGGER_BLACK_KNIGHT_4F_FINAL_Text_1
	waitmovement 0
	closemessage
	hidenamebox
	applymovement 17, Movement_InteractFACEDOWN
	namebox BKFORT_4F_NPC_10_Text_0
	msgbox TRIGGER_BLACK_KNIGHT_4F_FINAL_Text_2
	closemessage
	hidenamebox
	namebox TRIGGER_BLACK_KNIGHT_4F_FINAL_Text_3
	msgbox TRIGGER_BLACK_KNIGHT_4F_FINAL_Text_4
	closemessage
	hidenamebox
	addobject 18
	clearflag FLAG_TEMP_F
	namebox TRIGGER_BLACK_KNIGHT_4F_FINAL_Text_3
	msgbox TRIGGER_BLACK_KNIGHT_4F_FINAL_Text_5
	closemessage
	hidenamebox
	delay 60
	removeobject 18
	setflag FLAG_TEMP_F
	namebox BKFORT_4F_NPC_10_Text_0
	msgbox TRIGGER_BLACK_KNIGHT_4F_FINAL_Text_6
	closemessage
	hidenamebox
	applymovement 2, Movement_InteractFACEDOWN
	namebox BKFORT_4F_NPC_10_Text_0
	msgbox TRIGGER_BLACK_KNIGHT_4F_FINAL_Text_7
	applymovement 2, movement_BKF_Questionmarks
	applymovement 1, movement_BKF_Questionmarks
	applymovement 17, movement_BKF_Questionmarks
	applymovement 3, movement_BKF_Questionmarks
	applymovement 4, movement_BKF_Questionmarks
	closemessage
	hidenamebox
	waitmovement 0
	namebox BKFORT_4F_NPC_10_Text_0
	msgbox TRIGGER_BLACK_KNIGHT_4F_FINAL_Text_7
	closemessage
	hidenamebox
	applymovement OBJ_EVENT_ID_PLAYER, Movement_STORY_BKFORT_4F_3_player
	applymovement OBJ_EVENT_ID_FOLLOWER, Movement_STORY_BKFORT_4F_3_owen
	applymovement OBJ_EVENT_ID_CAMERA, movement_BK_Fort_camera_2
	waitmovement 0
	special RemoveCameraObject
	namebox BKFORT_4F_NPC_2_Text_0
	msgbox TRIGGER_BLACK_KNIGHT_4F_FINAL_Text_8
	closemessage
	hidenamebox
	namebox TRIGGER_BLACK_KNIGHT_4F_FINAL_Text_3
	msgbox TRIGGER_BLACK_KNIGHT_4F_FINAL_Text_9
	closemessage
	hidenamebox
	applymovement 2, Movement_InteractFACEUP
	namebox BKFORT_4F_NPC_10_Text_0
	msgbox TRIGGER_BLACK_KNIGHT_4F_FINAL_Text_10
	waitmovement 0
	closemessage
	hidenamebox
	namebox TRIGGER_BLACK_KNIGHT_4F_FINAL_Text_3
	msgbox TRIGGER_BLACK_KNIGHT_4F_FINAL_Text_11
	closemessage
	hidenamebox
	namebox BKFORT_4F_NPC_10_Text_0
	msgbox TRIGGER_BLACK_KNIGHT_4F_FINAL_Text_12
	closemessage
	hidenamebox
	namebox TRIGGER_BLACK_KNIGHT_4F_FINAL_Text_3
	msgbox TRIGGER_BLACK_KNIGHT_4F_FINAL_Text_13
	closemessage
	hidenamebox
	applymovement 17, Movement_InteractFACEUP
	namebox BKFORT_4F_NPC_1_Text_0
	msgbox TRIGGER_BLACK_KNIGHT_4F_FINAL_Text_14
	closemessage
	hidenamebox
	namebox TRIGGER_BLACK_KNIGHT_4F_FINAL_Text_3
	msgbox TRIGGER_BLACK_KNIGHT_4F_FINAL_Text_15
	closemessage
	hidenamebox
	applymovement 2, Movement_STORY_BKFORT_4F_3_Sigmund
	applymovement 17, Movement_STORY_BKFORT_4F_3_Black_Knight
	applymovement 3, Movement_STORY_BKFORT_4F_3_Elite_Knight_1
	waitmovement 0
	applymovement 1, movement_BKF_Questionmarks
	namebox TRIGGER_BLACK_KNIGHT_4F_FINAL_Text_3
	msgbox TRIGGER_BLACK_KNIGHT_4F_FINAL_Text_16
	closemessage
	hidenamebox
	applymovement 4, movement_BKF_Questionmarks
	waitmovement 0
	trainerbattle_two_trainers TRAINER_LORD_DAQUARIUS, TRIGGER_BLACK_KNIGHT_4F_FINAL_Text_17, TRAINER_BLACKKNIGHT_ELITE_1, TRIGGER_BLACK_KNIGHT_4F_FINAL_Text_18
	setvar VAR_POKESCAPE_STORYMODE_PROGRESS, 195
	applymovement OBJ_EVENT_ID_FOLLOWER, Movement_InteractFACEPLAYER
	namebox CAUGHT_BY_BLACK_KNIGHTS_FINAL_Text_0
	msgbox TRIGGER_BLACK_KNIGHT_4F_FINAL_Text_19
	closemessage
	hidenamebox
	applymovement OBJ_EVENT_ID_FOLLOWER, Movement_InteractFACEUP
	namebox TRIGGER_BLACK_KNIGHT_4F_FINAL_Text_3
	msgbox TRIGGER_BLACK_KNIGHT_4F_FINAL_Text_20
	closemessage
	hidenamebox
	releaseall
	end


movement_BK_Fort_camera_1:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_right
	walk_right
	delay_16
	step_end

movement_BK_Fort_camera_2:
	walk_down
	walk_down
	delay_16
	step_end

Movement_STORY_BKFORT_4F_3_player:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_right
	walk_right
	face_up
	step_end

Movement_STORY_BKFORT_4F_3_owen:
	walk_right
	walk_up
	walk_up
	walk_up
	walk_up
	walk_right
	face_up
	step_end

Movement_STORY_BKFORT_4F_3_Sigmund:
	face_left
	walk_left
	walk_left
	face_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

Movement_STORY_BKFORT_4F_3_Black_Knight:
	face_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	step_end

Movement_STORY_BKFORT_4F_3_Elite_Knight_1:
	delay_16
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

Movement_STORY_BKFORT_4F_3_Elite_Knight_2:
	walk_down
	walk_down
	walk_down
	walk_down
	face_left
	walk_left
	step_end

Movement_STORY_BKFORT_4F_3_Elite_Knight_3:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_right
	walk_right
	face_up
	step_end

Movement_STORY_BKFORT_4F_3_Lord_D:
	face_left
	walk_left
	walk_left
	face_down
	walk_down
	walk_down
	walk_down
	walk_down
	face_right
	step_end

movement_BKF_Questionmarks:
	emote_question_mark
	step_end

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

BKFORT_4F_NPC_3_Text_0:
	.string "I'm not even supposed to have duty on\n"
	.string "this floor today, but someone was sick.\p"
	.string "I'm no good at battling.\p"
	.string "Just leave me here to admire this\n"
	.string "candlestick and pretend you never saw\l"
	.string "me.$"

BKFORT_4F_NPC_4_Text_0:
	.string "Please don't look at me.\p"
	.string "I don't want any trouble.\p"
	.string "I am just going to look in these boxes,\n"
	.string "and if anybody asks you snuck past me...$"

BKFORT_4F_NPC_5_Text_0:
	.string "In this room are all the treasures that\n"
	.string "we've stolen from raids we've been on\l"
	.string "over the years.\p"
	.string "If you take them from us, then that\n"
	.string "makes you thieves too!$"

BKFORT_4F_NPC_6_Text_0:
	.string "Back up will be here soon and they'll\n"
	.string "stop you!\p"
	.string "{PAUSE 15}They are coming, right..?$"

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

TRIGGER_BLACK_KNIGHT_4F_1_Text_0:
	.string "The knights on the lower floors may not\n"
	.string "be the most intelligent, but I see right\l"
	.string "through your disguises.\p"
	.string "There's no need to pretend anymore, you\n"
	.string "won't be making it past me to our Lord.$"

TRIGGER_BLACK_KNIGHT_4F_1_Text_1:
	.string "…$"

CAUGHT_BY_BLACK_KNIGHTS_FINAL_Text_0:
	.string "Sir Owen$"

CAUGHT_BY_BLACK_KNIGHTS_FINAL_Text_1:
	.string "No talking our way out of this one\n"
	.string "{PLAYER}!$"

CAUGHT_BY_BLACK_KNIGHTS_FINAL_Text_2:
	.string "For Saradomin!$"

TRIGGER_BLACK_KNIGHT_4F_TREASURE_Text_0:
	.string "You aren't welcome here.\p"
	.string "We can't let you through.\p"
	.string "If you insist on trying to get past us,\n"
	.string "we'll have to battle you.\p"
	.string "Is that really what you want?$"

TRIGGER_BLACK_KNIGHT_4F_TREASURE_Text_1:
	.string "You have chosen... poorly.$"

TRIGGER_BLACK_KNIGHT_4F_TREASURE_Text_2:
	.string "Skool: Maybe we were the ones who\n"
	.string "chose poorly...$"

TRIGGER_BLACK_KNIGHT_4F_TREASURE_Text_3:
	.string "Sift: Oh, I am definitely getting fired\n"
	.string "for this!$"

TRIGGER_BLACK_KNIGHT_4F_TREASURE_Text_4:
	.string "Good answer.\p"
	.string "Now leave us alone.$"

TRIGGER_BLACK_KNIGHT_4F_FINAL_Text_0:
	.string "{PLAYER}, I can hear voices inside.\p"
	.string "Let's see if we can listen in and find\n"
	.string "out what they're up to without blowing\l"
	.string "our cover any further.$"

TRIGGER_BLACK_KNIGHT_4F_FINAL_Text_1:
	.string "...There was something carved into the\n"
	.string "wall down there too, sir. It looked\l"
	.string "importa-$"

TRIGGER_BLACK_KNIGHT_4F_FINAL_Text_2:
	.string "That mural is of no concern to you. We\n"
	.string "have already studied it extensively.\p"
	.string "{PAUSE 15}Now, where is the artefact?$"

TRIGGER_BLACK_KNIGHT_4F_FINAL_Text_3:
	.string "Lord Daquarius$"

TRIGGER_BLACK_KNIGHT_4F_FINAL_Text_4:
	.string "Here, as promised.$"

TRIGGER_BLACK_KNIGHT_4F_FINAL_Text_5:
	.string "My knight barely escaped that cave\n"
	.string "with his life.\p"
	.string "I really hope this piece of rock is\n"
	.string "worth the trouble, Sigmund.$"

TRIGGER_BLACK_KNIGHT_4F_FINAL_Text_6:
	.string "Finally, after all this time, an honest\n"
	.string "to Saradomin fragment of the Stone of\l"
	.string "Ja-$"

TRIGGER_BLACK_KNIGHT_4F_FINAL_Text_7:
	.string "What was that?$"

TRIGGER_BLACK_KNIGHT_4F_FINAL_Text_8:
	.string "Sorry to interrupt, but we caught these\n"
	.string "two eavesdropping outside.$"

TRIGGER_BLACK_KNIGHT_4F_FINAL_Text_9:
	.string "A White Knight?\p"
	.string "So soon?\p"
	.string "I anticipated this, but thought we\n"
	.string "would have more time.\p"
	.string "{PAUSE 15}No matter.\p"
	.string "They'll never leave this place alive to\n"
	.string "tell anybody what they might have\l"
	.string "heard anyway.$"

TRIGGER_BLACK_KNIGHT_4F_FINAL_Text_10:
	.string "I think it's time I left.$"

TRIGGER_BLACK_KNIGHT_4F_FINAL_Text_11:
	.string "Sigmund, will you still hold up your end\n"
	.string "of our deal?$"

TRIGGER_BLACK_KNIGHT_4F_FINAL_Text_12:
	.string "Yes, once we have accomplished our goal\n"
	.string "of ridding the world of all monsters we\l"
	.string "will turn our attention to the pests\l"
	.string "that plague you.$"

TRIGGER_BLACK_KNIGHT_4F_FINAL_Text_13:
	.string "Excellent.\p"
	.string "Please, escort Sigmund and the\n"
	.string "artefact out of the castle and to\l"
	.string "safety.$"

TRIGGER_BLACK_KNIGHT_4F_FINAL_Text_14:
	.string "Sir, there are guards posted across the\n"
	.string "bridge towards Varrock.\p"
	.string "We can't go via Falador either, there\n"
	.string "will be too many White Knights.$"

TRIGGER_BLACK_KNIGHT_4F_FINAL_Text_15:
	.string "Very well.\p"
	.string "Sigmund, please take this armour and\n"
	.string "head to Edgeville.\p"
	.string "We have a contact there who will assist\n"
	.string "you.\p"
	.string "As long as you're wearing black, he'll be\n"
	.string "more than happy to help.\p"
	.string "Just be sure to tell him how EVIL your\n"
	.string "plans are.$"

TRIGGER_BLACK_KNIGHT_4F_FINAL_Text_16:
	.string "Now to dispose of you two.$"

TRIGGER_BLACK_KNIGHT_4F_FINAL_Text_17:
	.string "Daquarius: All that matters is that\n"
	.string "Sigmund escaped.$"

TRIGGER_BLACK_KNIGHT_4F_FINAL_Text_18:
	.string "Elite Knight: ...$"

TRIGGER_BLACK_KNIGHT_4F_FINAL_Text_19:
	.string "Excellent work {PLAYER}.$"

TRIGGER_BLACK_KNIGHT_4F_FINAL_Text_20:
	.string "Once Sigmund has control over...\p"
	.string "Well, I think it would be better for you\n"
	.string "to just wait and witness it yourself.\p"
	.string "You can lock me up, but you can't stop\n"
	.string "what's coming.$"
