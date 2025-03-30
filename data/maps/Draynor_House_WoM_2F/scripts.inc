Draynor_House_WoM_2F_MapScripts::
	.byte 0


WOM_BED_RIGHT::
	lock
	msgbox WOM_BED_RIGHT_Text_0
	applymovement OBJ_EVENT_ID_PLAYER, movement_WOM_BED_RIGHT
	waitmovement 0
	msgbox WOM_BED_RIGHT_Text_1
	release
	end


movement_WOM_BED_RIGHT:
	emote_exclamation_mark
	jump_special_right
	face_left
	step_end

WOM_BED_BOTTOM::
	lock
	msgbox WOM_BED_RIGHT_Text_0
	applymovement OBJ_EVENT_ID_PLAYER, movement_WOM_BED_BOTTOM
	waitmovement 0
	msgbox WOM_BED_RIGHT_Text_1
	release
	end


movement_WOM_BED_BOTTOM:
	emote_exclamation_mark
	jump_special_down
	face_up
	step_end

WOM_BED_RIGHT_Text_0:
	.string "It's a fairly ordinary bed, but...$"

WOM_BED_RIGHT_Text_1:
	.string "Was that a hand!?\p"
	.string "{PAUSE 15}You decide it's best not to try to sleep\n"
	.string "in this bed.$"
