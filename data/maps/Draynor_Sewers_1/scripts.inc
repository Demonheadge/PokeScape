Draynor_Sewers_1_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Draynor_Sewers_1_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Draynor_Sewers_1_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setvar VAR_EVOLUTION_MAP_STATE, 1
	return


BATTLE_DRAYNORSEWERS_SKELETON_1::
	trainerbattle_single TRAINER_DRAYNORSEWERS_SKELETON_1, BATTLE_DRAYNORSEWERS_SKELETON_1_Text_0, BATTLE_DRAYNORSEWERS_SKELETON_1_Text_1
	msgbox BATTLE_DRAYNORSEWERS_SKELETON_1_Text_1
	release
	end


BATTLE_DRAYNORSEWERS_SKELETON_2::
	trainerbattle_single TRAINER_DRAYNORSEWERS_SKELETON_2, BATTLE_DRAYNORSEWERS_SKELETON_2_Text_0, BATTLE_DRAYNORSEWERS_SKELETON_2_Text_1
	msgbox BATTLE_DRAYNORSEWERS_SKELETON_2_Text_1
	release
	end


BATTLE_DRAYNORSEWERS_SKELETON_1_Text_0:
	.string "The skeleton wanders towards you\n"
	.string "ominously…$"

BATTLE_DRAYNORSEWERS_SKELETON_1_Text_1:
	.string "The skeleton seems offended about\n"
	.string "something trivial.$"

BATTLE_DRAYNORSEWERS_SKELETON_2_Text_0:
	.string "Chills runs down your spine as you\n"
	.string "prepare to battle the skeleton.$"

BATTLE_DRAYNORSEWERS_SKELETON_2_Text_1:
	.string "The skeleton waves goodbye to you.$"
