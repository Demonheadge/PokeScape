Route33_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route33_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Route33_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setvar VAR_EVOLUTION_MAP_STATE, 14
	return


ITEM_ROUTE33_1::
	finditem ITEM_SUPER_PRAYER_POTION
	end


NPC_ROUTE33_NPC1::
	lock
	faceplayer
	msgbox NPC_ROUTE33_NPC1_Text_0
	hidenamebox
	release
	end


BATTLE_ROUTE33_ZAMORAK1::
	trainerbattle_single TRAINER_ROUTE33_ZAMORAK1, BATTLE_ROUTE33_ZAMORAK1_Text_0, BATTLE_ROUTE33_ZAMORAK1_Text_1
	msgbox BATTLE_ROUTE33_ZAMORAK1_Text_1
	hidenamebox
	release
	end


BATTLE_ROUTE33_GOBLIN1::
	trainerbattle_single TRAINER_ROUTE33_GOBLIN1, BATTLE_ROUTE33_GOBLIN1_Text_0, BATTLE_ROUTE33_GOBLIN1_Text_1
	msgbox BATTLE_ROUTE33_GOBLIN1_Text_2
	hidenamebox
	release
	end


BATTLE_ROUTE33_GOBLIN2::
	trainerbattle_single TRAINER_ROUTE33_GOBLIN2, BATTLE_ROUTE33_GOBLIN2_Text_0, BATTLE_ROUTE33_GOBLIN2_Text_1
	msgbox BATTLE_ROUTE33_GOBLIN2_Text_2
	hidenamebox
	release
	end


BATTLE_ROUTE33_RUNECRAFTER::
	trainerbattle_single TRAINER_ROUTE33_RUNECRAFTER, BATTLE_ROUTE33_RUNECRAFTER_Text_0, BATTLE_ROUTE33_RUNECRAFTER_Text_1
	msgbox BATTLE_ROUTE33_RUNECRAFTER_Text_2
	hidenamebox
	release
	end


ZAMORAK_WIZARDS_EVENT::
	lock
	msgbox ZAMORAK_WIZARDS_EVENT_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne ZAMORAK_WIZARDS_EVENT_2
ZAMORAK_WIZARDS_EVENT_1:
	release
	end

ZAMORAK_WIZARDS_EVENT_2:
	closemessage
	delay 15
	applymovement 2, MOVEMENT_CHAOS_TEMPLE_ZAMORAK_2
	applymovement 3, MOVEMENT_CHAOS_TEMPLE_ZAMORAK_1
	waitmovement 0
	playse SE_LEDGE
	applymovement OBJ_EVENT_ID_PLAYER, MOVEMENT_EXCLAMATIONMARK_JUMP_LEFT
	waitse
	waitmovement 0
	playbgm MUS_PS_ENCOUNTER_PKER, 0
	namebox ZAMORAK_WIZARDS_EVENT_Text_1
	msgbox ZAMORAK_WIZARDS_EVENT_Text_2
	trainerbattle_two_trainers TRAINER_ROUTE33_ZAMORAK2, ZAMORAK_WIZARDS_EVENT_Text_3, TRAINER_ROUTE33_ZAMORAK3, ZAMORAK_WIZARDS_EVENT_Text_4
	namebox ZAMORAK_WIZARDS_EVENT_Text_1
	msgbox ZAMORAK_WIZARDS_EVENT_Text_5
	hidenamebox
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Movement_InteractFACERIGHT
	waitmovement 0
	removeobject 1
	finditem ITEM_TALISMAN_MIND
	setflag FLAG_MIND_TALISMAN
	applymovement 2, MOVEMENT_CHAOS_TEMPLE_ZAMORAK_3
	applymovement 3, MOVEMENT_CHAOS_TEMPLE_ZAMORAK_4
	waitmovement 0
	goto ZAMORAK_WIZARDS_EVENT_1


MOVEMENT_CHAOS_TEMPLE_ZAMORAK_1:
	walk_fast_right
	walk_fast_right
	walk_fast_up
	walk_fast_right
	step_end

MOVEMENT_CHAOS_TEMPLE_ZAMORAK_2:
	walk_fast_up
	walk_fast_up
	walk_fast_right
	face_up
	step_end

MOVEMENT_CHAOS_TEMPLE_ZAMORAK_3:
	walk_slow_left
	walk_slow_down
	walk_slow_down
	step_end

MOVEMENT_CHAOS_TEMPLE_ZAMORAK_4:
	walk_slow_left
	walk_slow_down
	walk_slow_left
	walk_slow_left
	step_end

NPC_ROUTE33_ZAMORAK_MONK_1::
	lock
	faceplayer
	namebox ZAMORAK_WIZARDS_EVENT_Text_1
	msgbox NPC_ROUTE33_ZAMORAK_MONK_1_Text_0
	hidenamebox
	release
	end


NPC_ROUTE33_ZAMORAK_MONK_2::
	lock
	faceplayer
	namebox ZAMORAK_WIZARDS_EVENT_Text_1
	msgbox NPC_ROUTE33_ZAMORAK_MONK_2_Text_0
	hidenamebox
	release
	end


BATTLE_ROUTE33_ZAMORAK4::
	trainerbattle_single TRAINER_ROUTE33_ZAMORAK4, BATTLE_ROUTE33_ZAMORAK4_Text_0, BATTLE_ROUTE33_ZAMORAK4_Text_1
	msgbox BATTLE_ROUTE33_ZAMORAK4_Text_2
	hidenamebox
	release
	end


NPC_ROUTE33_NPC1_Text_0:
	.string "Begone!\p"
	.string "Stay away unless you worship Zamorak.$"

BATTLE_ROUTE33_ZAMORAK1_Text_0:
	.string "A curse be upon you!$"

BATTLE_ROUTE33_ZAMORAK1_Text_1:
	.string "I may have lost but I have still cursed\n"
	.string "you.\p"
	.string "Now begone!$"

BATTLE_ROUTE33_GOBLIN1_Text_0:
	.string "Hooman, why are you out here?!$"

BATTLE_ROUTE33_GOBLIN1_Text_1:
	.string "Hooman no answer question.$"

BATTLE_ROUTE33_GOBLIN1_Text_2:
	.string "Hooman no answer question.\p"
	.string "Why is hooman out here?!$"

BATTLE_ROUTE33_GOBLIN2_Text_0:
	.string "Stupid red hoomans they so noisy!$"

BATTLE_ROUTE33_GOBLIN2_Text_1:
	.string "Red hoomans make lots of noise.$"

BATTLE_ROUTE33_GOBLIN2_Text_2:
	.string "Red hoomans make lots of noise.\p"
	.string "Me want to get rid of them.$"

BATTLE_ROUTE33_RUNECRAFTER_Text_0:
	.string "I'm looking for a Mind Talisman, do you\n"
	.string "have one!?$"

BATTLE_ROUTE33_RUNECRAFTER_Text_1:
	.string "How will I ever get my Runecrafting\n"
	.string "level up…$"

BATTLE_ROUTE33_RUNECRAFTER_Text_2:
	.string "I've been looking for a Mind Talisman so\n"
	.string "I can get into this Altar, but I've had\l"
	.string "no luck finding one.\p"
	.string "Maybe those Zamorakians have an idea.$"

ZAMORAK_WIZARDS_EVENT_Text_0:
	.string "There appears to be some wine and a\n"
	.string "Talisman on the table.\p"
	.string "Seeing as there is no need to take the\n"
	.string "wine, would you like to take the\l"
	.string "Talisman?$"

ZAMORAK_WIZARDS_EVENT_Text_1:
	.string "Zamorak Monk$"

ZAMORAK_WIZARDS_EVENT_Text_2:
	.string "Hands off!\p"
	.string "That is ours!$"

ZAMORAK_WIZARDS_EVENT_Text_3:
	.string "Monk: Just don't touch our wine!$"

ZAMORAK_WIZARDS_EVENT_Text_4:
	.string "Monk: Urgh take that Talisman and\n"
	.string "leave!$"

ZAMORAK_WIZARDS_EVENT_Text_5:
	.string "Fine take that stupid Talisman but\n"
	.string "leave our wine alone.$"

NPC_ROUTE33_ZAMORAK_MONK_1_Text_0:
	.string "Get out only those who worship Zamorak\n"
	.string "are welcome here.$"

NPC_ROUTE33_ZAMORAK_MONK_2_Text_0:
	.string "We make our own wine and then get our\n"
	.string "lord to bless it.\p"
	.string "It is hard work but it tastes so good!$"

BATTLE_ROUTE33_ZAMORAK4_Text_0:
	.string "Who are you!?\p"
	.string "Your kind isn't weclome here!$"

BATTLE_ROUTE33_ZAMORAK4_Text_1:
	.string "I guess you can look around for a bit…$"

BATTLE_ROUTE33_ZAMORAK4_Text_2:
	.string "Can I interest you in becoming a\n"
	.string "follower of our lord of chaos?$"
