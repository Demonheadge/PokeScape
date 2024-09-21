Route49_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route49_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Route49_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setvar VAR_EVOLUTION_MAP_STATE, 6
	call WEATHER_CHANGE_AREA_DAEMONHEIM
	return


BATTLE_ROUTE49_Trainer_1::
	trainerbattle_single TRAINER_ROUTE49_TRAINER_1, BATTLE_ROUTE49_Trainer_1_Text_0, BATTLE_ROUTE49_Trainer_1_Text_1
	msgbox BATTLE_ROUTE49_Trainer_1_Text_2
	hidenamebox
	release
	end


BATTLE_ROUTE49_Trainer_2::
	trainerbattle_single TRAINER_ROUTE49_TRAINER_2, BATTLE_ROUTE49_Trainer_2_Text_0, BATTLE_ROUTE49_Trainer_2_Text_1
	msgbox BATTLE_ROUTE49_Trainer_2_Text_2
	hidenamebox
	release
	end


BATTLE_ROUTE49_Trainer_3::
	trainerbattle_single TRAINER_ROUTE49_TRAINER_2, BATTLE_ROUTE49_Trainer_3_Text_0, BATTLE_ROUTE49_Trainer_3_Text_1
	msgbox BATTLE_ROUTE49_Trainer_3_Text_2
	hidenamebox
	release
	end


NPC_Route49::
	lock
	faceplayer
	namebox NPC_Route49_Text_0
	msgbox NPC_Route49_Text_1
	closemessage
	hidenamebox
	release
	end


BATTLE_ROUTE49_Trainer_1_Text_0:
	.string "Heh, you almost made it savely out of\n"
	.string "the Wilderness, unfortunately...{PAUSE 15}\p"
	.string "ICE BARRAGE!$"

BATTLE_ROUTE49_Trainer_1_Text_1:
	.string "Why didn't you freeze?!$"

BATTLE_ROUTE49_Trainer_1_Text_2:
	.string "I ran out of runes...\p"
	.string "Did you at least catch a cold?\p"
	.string "Anything?$"

BATTLE_ROUTE49_Trainer_2_Text_0:
	.string "I wear full Rune to the Wilderness,\n"
	.string "nobody will defeat me anyway!$"

BATTLE_ROUTE49_Trainer_2_Text_1:
	.string "Plea?$"

BATTLE_ROUTE49_Trainer_2_Text_2:
	.string "Oh, you won't take my gear and leave me\n"
	.string "here?\p"
	.string "Naked?$"

BATTLE_ROUTE49_Trainer_3_Text_0:
	.string "No! I've been here for hours, I'm not\n"
	.string "about to let you crash me!$"

BATTLE_ROUTE49_Trainer_3_Text_1:
	.string "What do you mean you can't crash a\n"
	.string "fishing spot?$"

BATTLE_ROUTE49_Trainer_3_Text_2:
	.string "Fine, we can share the spot but please\n"
	.string "don't tell anyone else I'm here...$"

NPC_Route49_Text_0:
	.string "Fremennik Guard$"

NPC_Route49_Text_1:
	.string "You made it all the way through the\n"
	.string "Wilderness, quickly come through and\l"
	.string "take a rest among us Fremenniks!$"
