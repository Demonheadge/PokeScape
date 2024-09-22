Draynor_Manor_B1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Draynor_Manor_B1F_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Draynor_Manor_B1F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setvar VAR_EVOLUTION_MAP_STATE, 1
	return


NPC_DraynorManor_LEVER_A::
	lock
	compare VAR_TEMP_A, 0
	goto_if_eq NPC_DraynorManor_LEVER_A_2
	msgbox NPC_DraynorManor_LEVER_A_Text_1
	closemessage
NPC_DraynorManor_LEVER_A_1:
	release
	end

NPC_DraynorManor_LEVER_A_2:
	msgbox NPC_DraynorManor_LEVER_A_Text_0
	closemessage
	playse SE_TRUCK_DOOR
	setmetatile 14, 19, METATILE_DraynorManor_BASEMENT_LEVER_CORNER_R_DOWN_1, 1
	setmetatile 14, 20, METATILE_DraynorManor_BASEMENT_LEVER_CORNER_R_DOWN_2, 1
	setmetatile 17, 15, METATILE_DraynorManor_BASEMENT_GATE_UNLOCKED_TOP, 0
	setmetatile 17, 16, METATILE_DraynorManor_BASEMENT_GATE_UNLOCKED_BOTTOM, 0
	special DrawWholeMapView
	setvar VAR_TEMP_A, 1
	goto NPC_DraynorManor_LEVER_A_1


NPC_DraynorManor_LEVER_B::
	lock
	compare VAR_TEMP_B, 0
	goto_if_eq NPC_DraynorManor_LEVER_B_2
	msgbox NPC_DraynorManor_LEVER_A_Text_1
	closemessage
NPC_DraynorManor_LEVER_B_1:
	release
	end

NPC_DraynorManor_LEVER_B_2:
	msgbox NPC_DraynorManor_LEVER_A_Text_0
	closemessage
	playse SE_TRUCK_DOOR
	setmetatile 19, 16, METATILE_DraynorManor_BASEMENT_LEVER_DOWN_1, 1
	setmetatile 19, 17, METATILE_DraynorManor_BASEMENT_LEVER_DOWN_2, 1
	setmetatile 11, 9, METATILE_DraynorManor_BASEMENT_GATE_UNLOCKED_TOP, 0
	setmetatile 11, 10, METATILE_DraynorManor_BASEMENT_GATE_UNLOCKED_BOTTOM, 0
	special DrawWholeMapView
	setvar VAR_TEMP_B, 1
	goto NPC_DraynorManor_LEVER_B_1


NPC_DraynorManor_LEVER_C::
	lock
	compare VAR_TEMP_C, 0
	goto_if_eq NPC_DraynorManor_LEVER_C_2
	msgbox NPC_DraynorManor_LEVER_A_Text_1
	closemessage
NPC_DraynorManor_LEVER_C_1:
	release
	end

NPC_DraynorManor_LEVER_C_2:
	msgbox NPC_DraynorManor_LEVER_A_Text_0
	closemessage
	playse SE_TRUCK_DOOR
	setmetatile 19, 2, METATILE_DraynorManor_BASEMENT_LEVER_DOWN_1, 1
	setmetatile 19, 3, METATILE_DraynorManor_BASEMENT_LEVER_DOWN_2, 1
	setmetatile 11, 15, METATILE_DraynorManor_BASEMENT_GATE_UNLOCKED_TOP, 0
	setmetatile 11, 16, METATILE_DraynorManor_BASEMENT_GATE_UNLOCKED_BOTTOM, 0
	special DrawWholeMapView
	setvar VAR_TEMP_C, 1
	goto NPC_DraynorManor_LEVER_C_1


NPC_DraynorManor_LEVER_D::
	lock
	compare VAR_TEMP_D, 0
	goto_if_eq NPC_DraynorManor_LEVER_D_2
	msgbox NPC_DraynorManor_LEVER_A_Text_1
	closemessage
NPC_DraynorManor_LEVER_D_1:
	release
	end

NPC_DraynorManor_LEVER_D_2:
	msgbox NPC_DraynorManor_LEVER_A_Text_0
	closemessage
	playse SE_TRUCK_DOOR
	setmetatile 11, 2, METATILE_DraynorManor_BASEMENT_LEVER_DOWN_1, 1
	setmetatile 11, 3, METATILE_DraynorManor_BASEMENT_LEVER_DOWN_2, 1
	setmetatile 8, 11, METATILE_DraynorManor_BASEMENT_SIDE_GATE_UNLOCKED_1, 1
	setmetatile 8, 12, METATILE_DraynorManor_BASEMENT_SIDE_GATE_UNLOCKED_2, 1
	setmetatile 8, 13, METATILE_DraynorManor_BASEMENT_SIDE_GATE_UNLOCKED_3, 0
	setmetatile 14, 5, METATILE_DraynorManor_BASEMENT_SIDE_GATE_UNLOCKED_1, 1
	setmetatile 14, 6, METATILE_DraynorManor_BASEMENT_SIDE_GATE_UNLOCKED_2, 1
	setmetatile 14, 7, METATILE_DraynorManor_BASEMENT_SIDE_GATE_UNLOCKED_3, 0
	special DrawWholeMapView
	setvar VAR_TEMP_D, 1
	goto NPC_DraynorManor_LEVER_D_1


NPC_DraynorManor_LEVER_E::
	lock
	compare VAR_TEMP_E, 0
	goto_if_eq NPC_DraynorManor_LEVER_E_2
	msgbox NPC_DraynorManor_LEVER_A_Text_1
	closemessage
NPC_DraynorManor_LEVER_E_1:
	release
	end

NPC_DraynorManor_LEVER_E_2:
	msgbox NPC_DraynorManor_LEVER_A_Text_0
	closemessage
	playse SE_TRUCK_DOOR
	setmetatile 5, 10, METATILE_DraynorManor_BASEMENT_LEVER_CORNER_L_DOWN_1, 1
	setmetatile 5, 11, METATILE_DraynorManor_BASEMENT_LEVER_CORNER_L_DOWN_2, 1
	setmetatile 14, 11, METATILE_DraynorManor_BASEMENT_SIDE_GATE_UNLOCKED_1, 1
	setmetatile 14, 12, METATILE_DraynorManor_BASEMENT_SIDE_GATE_UNLOCKED_2, 1
	setmetatile 14, 13, METATILE_DraynorManor_BASEMENT_SIDE_GATE_UNLOCKED_3, 0
	setmetatile 8, 5, METATILE_DraynorManor_BASEMENT_SIDE_GATE_UNLOCKED_1, 1
	setmetatile 8, 6, METATILE_DraynorManor_BASEMENT_SIDE_GATE_UNLOCKED_2, 1
	setmetatile 8, 7, METATILE_DraynorManor_BASEMENT_SIDE_GATE_UNLOCKED_3, 0
	special DrawWholeMapView
	setvar VAR_TEMP_E, 1
	goto NPC_DraynorManor_LEVER_E_1


NPC_DraynorManor_LEVER_F::
	lock
	compare VAR_TEMP_F, 0
	goto_if_eq NPC_DraynorManor_LEVER_F_2
	msgbox NPC_DraynorManor_LEVER_A_Text_1
	closemessage
NPC_DraynorManor_LEVER_F_1:
	release
	end

NPC_DraynorManor_LEVER_F_2:
	msgbox NPC_DraynorManor_LEVER_A_Text_0
	closemessage
	playse SE_TRUCK_DOOR
	setmetatile 6, 2, METATILE_DraynorManor_BASEMENT_LEVER_DOWN_1, 1
	setmetatile 6, 3, METATILE_DraynorManor_BASEMENT_LEVER_DOWN_2, 1
	setmetatile 4, 9, METATILE_DraynorManor_BASEMENT_GATE_UNLOCKED_TOP, 0
	setmetatile 4, 10, METATILE_DraynorManor_BASEMENT_GATE_UNLOCKED_BOTTOM, 0
	setmetatile 8, 17, METATILE_DraynorManor_BASEMENT_SIDE_GATE_UNLOCKED_1, 1
	setmetatile 8, 18, METATILE_DraynorManor_BASEMENT_SIDE_GATE_UNLOCKED_2, 1
	setmetatile 8, 19, METATILE_DraynorManor_BASEMENT_SIDE_GATE_UNLOCKED_3, 0
	special DrawWholeMapView
	setvar VAR_TEMP_F, 1
	goto NPC_DraynorManor_LEVER_F_1


NPC_DraynorManor_LEVER_G::
	lock
	compare VAR_TEMP_9, 0
	goto_if_eq NPC_DraynorManor_LEVER_G_2
	msgbox NPC_DraynorManor_LEVER_A_Text_1
	closemessage
NPC_DraynorManor_LEVER_G_1:
	release
	end

NPC_DraynorManor_LEVER_G_2:
	msgbox NPC_DraynorManor_LEVER_A_Text_0
	closemessage
	playse SE_TRUCK_DOOR
	setmetatile 6, 16, METATILE_DraynorManor_BASEMENT_LEVER_DOWN_1, 1
	setmetatile 6, 17, METATILE_DraynorManor_BASEMENT_LEVER_DOWN_2, 1
	setmetatile 8, 17, METATILE_DraynorManor_BASEMENT_SIDE_GATE_UNLOCKED_1, 1
	setmetatile 8, 18, METATILE_DraynorManor_BASEMENT_SIDE_GATE_UNLOCKED_2, 1
	setmetatile 8, 19, METATILE_DraynorManor_BASEMENT_SIDE_GATE_UNLOCKED_3, 0
	special DrawWholeMapView
	setvar VAR_TEMP_9, 1
	msgbox NPC_DraynorManor_LEVER_G_Text_0
	closemessage
	goto NPC_DraynorManor_LEVER_G_1


NPC_DraynorManor_LEVER_A_Text_0:
	.string "You pull the lever and hear a gate open.$"

NPC_DraynorManor_LEVER_A_Text_1:
	.string "The lever has already been pulled.$"

NPC_DraynorManor_LEVER_G_Text_0:
	.string "…{PAUSE 15}…{PAUSE 15} Nothing interesting happens.$"
