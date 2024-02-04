Draynor_Manor_MapScripts::
# 3 "data/maps/Draynor_Manor/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Draynor_Manor_MapScripts_MAP_SCRIPT_ON_LOAD
# 9 "data/maps/Draynor_Manor/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Draynor_Manor_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 6 "data/maps/Draynor_Manor/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Draynor_Manor_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Draynor_Manor_MapScripts_MAP_SCRIPT_ON_LOAD:
# 4 "data/maps/Draynor_Manor/scripts.pory"
	call WizardsTower_DraynorManor_STATE
	return

Draynor_Manor_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 10 "data/maps/Draynor_Manor/scripts.pory"
	setvar VAR_EVOLUTION_MAP_STATE, 1
	return

Draynor_Manor_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 7 "data/maps/Draynor_Manor/scripts.pory"
	map_script_2 VAR_POKESCAPE_WIZARDS_TOWER_STATE, 8, HAM_EVENT_DraynorManor_DOOR_CALL
	.2byte 0


WizardsTower_DraynorManor_STATE::
# 29 "data/maps/Draynor_Manor/scripts.pory"
	switch VAR_POKESCAPE_WIZARDS_TOWER_STATE
# 30 "data/maps/Draynor_Manor/scripts.pory"
	case 0, WizardsTower_DraynorManor_STATE_2
# 31 "data/maps/Draynor_Manor/scripts.pory"
	case 1, WizardsTower_DraynorManor_STATE_2
# 32 "data/maps/Draynor_Manor/scripts.pory"
	case 2, WizardsTower_DraynorManor_STATE_2
# 33 "data/maps/Draynor_Manor/scripts.pory"
	case 3, WizardsTower_DraynorManor_STATE_2
# 34 "data/maps/Draynor_Manor/scripts.pory"
	case 4, WizardsTower_DraynorManor_STATE_2
# 35 "data/maps/Draynor_Manor/scripts.pory"
	case 5, WizardsTower_DraynorManor_STATE_2
# 42 "data/maps/Draynor_Manor/scripts.pory"
	case 6, WizardsTower_DraynorManor_STATE_3
# 48 "data/maps/Draynor_Manor/scripts.pory"
	case 7, WizardsTower_DraynorManor_STATE_4
# 57 "data/maps/Draynor_Manor/scripts.pory"
	case 8, WizardsTower_DraynorManor_STATE_5
# 63 "data/maps/Draynor_Manor/scripts.pory"
	case 9, WizardsTower_DraynorManor_STATE_6
	return

WizardsTower_DraynorManor_STATE_2:
# 37 "data/maps/Draynor_Manor/scripts.pory"
	removeobject 1
# 38 "data/maps/Draynor_Manor/scripts.pory"
	setflag FLAG_TEMP_1
# 40 "data/maps/Draynor_Manor/scripts.pory"
	release
	end

WizardsTower_DraynorManor_STATE_3:
# 43 "data/maps/Draynor_Manor/scripts.pory"
	clearflag FLAG_TEMP_1
# 44 "data/maps/Draynor_Manor/scripts.pory"
	addobject 1
# 45 "data/maps/Draynor_Manor/scripts.pory"
	setvar VAR_TEMP_0, 1
# 46 "data/maps/Draynor_Manor/scripts.pory"
	release
	end

WizardsTower_DraynorManor_STATE_4:
# 49 "data/maps/Draynor_Manor/scripts.pory"
	clearflag FLAG_TEMP_1
# 50 "data/maps/Draynor_Manor/scripts.pory"
	addobject 1
# 52 "data/maps/Draynor_Manor/scripts.pory"
	setobjectxyperm 1, 16, 36
# 53 "data/maps/Draynor_Manor/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_UP
# 54 "data/maps/Draynor_Manor/scripts.pory"
	setvar VAR_TEMP_0, 1
# 55 "data/maps/Draynor_Manor/scripts.pory"
	release
	end

WizardsTower_DraynorManor_STATE_5:
# 58 "data/maps/Draynor_Manor/scripts.pory"
	clearflag FLAG_TEMP_1
# 59 "data/maps/Draynor_Manor/scripts.pory"
	addobject 1
# 61 "data/maps/Draynor_Manor/scripts.pory"
	setobjectxyperm 1, 14, 24
# 62 "data/maps/Draynor_Manor/scripts.pory"
	setvar VAR_TEMP_0, 1
	return

WizardsTower_DraynorManor_STATE_6:
# 65 "data/maps/Draynor_Manor/scripts.pory"
	removeobject 1
# 66 "data/maps/Draynor_Manor/scripts.pory"
	setflag FLAG_TEMP_1
# 67 "data/maps/Draynor_Manor/scripts.pory"
	setvar VAR_TEMP_0, 1
# 68 "data/maps/Draynor_Manor/scripts.pory"
	release
	end


BLOCK_DraynorManor_Trees::
# 87 "data/maps/Draynor_Manor/scripts.pory"
	compare VAR_POKESCAPE_GAMEMODE_STATE, 0
	goto_if_eq BLOCK_DraynorManor_Trees_1
# 102 "data/maps/Draynor_Manor/scripts.pory"
	setvar VAR_TEMP_1, 1
# 103 "data/maps/Draynor_Manor/scripts.pory"
	release
	end

BLOCK_DraynorManor_Trees_1:
# 89 "data/maps/Draynor_Manor/scripts.pory"
	lock
# 90 "data/maps/Draynor_Manor/scripts.pory"
	msgbox BLOCK_DraynorManor_Trees_Text_0
# 91 "data/maps/Draynor_Manor/scripts.pory"
	closemessage
# 92 "data/maps/Draynor_Manor/scripts.pory"
	playse SE_LEDGE
# 93 "data/maps/Draynor_Manor/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_DraynorManor_Trees
# 94 "data/maps/Draynor_Manor/scripts.pory"
	waitmovement 0
# 95 "data/maps/Draynor_Manor/scripts.pory"
	msgbox BLOCK_DraynorManor_Trees_Text_1
# 96 "data/maps/Draynor_Manor/scripts.pory"
	closemessage
# 97 "data/maps/Draynor_Manor/scripts.pory"
	release
	end


# 110 "data/maps/Draynor_Manor/scripts.pory"
Movement_DraynorManor_Trees:
# 111 "data/maps/Draynor_Manor/scripts.pory"
	jump_down
	step_end

HAM_EVENT_DraynorManor_DOOR_CALL::
# 140 "data/maps/Draynor_Manor/scripts.pory"
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
# 141 "data/maps/Draynor_Manor/scripts.pory"
	compare VAR_TEMP_1, 14
	goto_if_eq HAM_EVENT_DraynorManor_DOOR_CALL_1
# 144 "data/maps/Draynor_Manor/scripts.pory"
	compare VAR_TEMP_1, 15
	goto_if_eq HAM_EVENT_DraynorManor_DOOR_CALL_2
# 148 "data/maps/Draynor_Manor/scripts.pory"
	call HAM_EVENT_DraynorManor_DOOR_WRONG
	return

HAM_EVENT_DraynorManor_DOOR_CALL_1:
# 142 "data/maps/Draynor_Manor/scripts.pory"
	call HAM_EVENT_DraynorManor_DOOR_LEFT
	return

HAM_EVENT_DraynorManor_DOOR_CALL_2:
# 145 "data/maps/Draynor_Manor/scripts.pory"
	call HAM_EVENT_DraynorManor_DOOR_RIGHT
	return


HAM_EVENT_DraynorManor_DOOR_LEFT::
# 156 "data/maps/Draynor_Manor/scripts.pory"
	applymovement 1, Ariane_DraynorManor_5
# 157 "data/maps/Draynor_Manor/scripts.pory"
	waitmovement 0
# 158 "data/maps/Draynor_Manor/scripts.pory"
	namebox HAM_EVENT_DraynorManor_DOOR_LEFT_Text_0
# 159 "data/maps/Draynor_Manor/scripts.pory"
	msgbox HAM_EVENT_DraynorManor_DOOR_LEFT_Text_1
# 160 "data/maps/Draynor_Manor/scripts.pory"
	goto HAM_EVENT_DraynorManor_Ariane_1
	return


HAM_EVENT_DraynorManor_DOOR_RIGHT::
# 165 "data/maps/Draynor_Manor/scripts.pory"
	applymovement 1, Ariane_DraynorManor_7
# 166 "data/maps/Draynor_Manor/scripts.pory"
	waitmovement 0
# 167 "data/maps/Draynor_Manor/scripts.pory"
	applymovement 1, Ariane_DraynorManor_5
# 168 "data/maps/Draynor_Manor/scripts.pory"
	waitmovement 0
# 169 "data/maps/Draynor_Manor/scripts.pory"
	namebox HAM_EVENT_DraynorManor_DOOR_LEFT_Text_0
# 170 "data/maps/Draynor_Manor/scripts.pory"
	msgbox HAM_EVENT_DraynorManor_DOOR_LEFT_Text_1
# 171 "data/maps/Draynor_Manor/scripts.pory"
	goto HAM_EVENT_DraynorManor_Ariane_1
	return


HAM_EVENT_DraynorManor_Ariane_1::
# 176 "data/maps/Draynor_Manor/scripts.pory"
	msgbox HAM_EVENT_DraynorManor_Ariane_1_Text_0
# 177 "data/maps/Draynor_Manor/scripts.pory"
	closemessage
# 178 "data/maps/Draynor_Manor/scripts.pory"
	hidenamebox
# 179 "data/maps/Draynor_Manor/scripts.pory"
	applymovement 1, Ariane_DraynorManor_6
# 180 "data/maps/Draynor_Manor/scripts.pory"
	waitmovement 0
# 181 "data/maps/Draynor_Manor/scripts.pory"
	removeobject 1
# 182 "data/maps/Draynor_Manor/scripts.pory"
	setflag FLAG_TEMP_1
# 183 "data/maps/Draynor_Manor/scripts.pory"
	setvar VAR_POKESCAPE_WIZARDS_TOWER_STATE, 9
	end


HAM_EVENT_DraynorManor_DOOR_WRONG::
# 188 "data/maps/Draynor_Manor/scripts.pory"
	applymovement 1, Ariane_DraynorManor_7
# 189 "data/maps/Draynor_Manor/scripts.pory"
	waitmovement 0
# 190 "data/maps/Draynor_Manor/scripts.pory"
	applymovement 1, Ariane_DraynorManor_5
# 191 "data/maps/Draynor_Manor/scripts.pory"
	waitmovement 0
# 192 "data/maps/Draynor_Manor/scripts.pory"
	applymovement 1, Ariane_DraynorManor_8
# 193 "data/maps/Draynor_Manor/scripts.pory"
	waitmovement 0
# 194 "data/maps/Draynor_Manor/scripts.pory"
	namebox HAM_EVENT_DraynorManor_DOOR_LEFT_Text_0
# 195 "data/maps/Draynor_Manor/scripts.pory"
	msgbox HAM_EVENT_DraynorManor_DOOR_WRONG_Text_0
# 196 "data/maps/Draynor_Manor/scripts.pory"
	closemessage
# 197 "data/maps/Draynor_Manor/scripts.pory"
	hidenamebox
# 198 "data/maps/Draynor_Manor/scripts.pory"
	playse SE_PIN
# 199 "data/maps/Draynor_Manor/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Ariane_DraynorManor_10
# 200 "data/maps/Draynor_Manor/scripts.pory"
	waitmovement 0
# 201 "data/maps/Draynor_Manor/scripts.pory"
	namebox HAM_EVENT_DraynorManor_DOOR_LEFT_Text_0
# 202 "data/maps/Draynor_Manor/scripts.pory"
	msgbox HAM_EVENT_DraynorManor_Ariane_1_Text_0
# 203 "data/maps/Draynor_Manor/scripts.pory"
	closemessage
# 204 "data/maps/Draynor_Manor/scripts.pory"
	hidenamebox
# 205 "data/maps/Draynor_Manor/scripts.pory"
	applymovement 1, Ariane_DraynorManor_9
# 206 "data/maps/Draynor_Manor/scripts.pory"
	waitmovement 0
# 207 "data/maps/Draynor_Manor/scripts.pory"
	removeobject 1
# 208 "data/maps/Draynor_Manor/scripts.pory"
	setflag FLAG_TEMP_1
# 209 "data/maps/Draynor_Manor/scripts.pory"
	setvar VAR_POKESCAPE_WIZARDS_TOWER_STATE, 9
	end


# 218 "data/maps/Draynor_Manor/scripts.pory"
Ariane_DraynorManor_5:
# 219 "data/maps/Draynor_Manor/scripts.pory"
	walk_up
# 219 "data/maps/Draynor_Manor/scripts.pory"
	walk_up
# 219 "data/maps/Draynor_Manor/scripts.pory"
	walk_up
# 219 "data/maps/Draynor_Manor/scripts.pory"
	walk_up
# 219 "data/maps/Draynor_Manor/scripts.pory"
	walk_up
	step_end

# 222 "data/maps/Draynor_Manor/scripts.pory"
Ariane_DraynorManor_6:
# 223 "data/maps/Draynor_Manor/scripts.pory"
	walk_down
# 223 "data/maps/Draynor_Manor/scripts.pory"
	walk_down
# 223 "data/maps/Draynor_Manor/scripts.pory"
	walk_down
# 223 "data/maps/Draynor_Manor/scripts.pory"
	walk_down
# 223 "data/maps/Draynor_Manor/scripts.pory"
	walk_down
# 223 "data/maps/Draynor_Manor/scripts.pory"
	walk_down
# 223 "data/maps/Draynor_Manor/scripts.pory"
	walk_down
	step_end

# 226 "data/maps/Draynor_Manor/scripts.pory"
Ariane_DraynorManor_7:
# 227 "data/maps/Draynor_Manor/scripts.pory"
	walk_right
	step_end

# 230 "data/maps/Draynor_Manor/scripts.pory"
Ariane_DraynorManor_8:
# 231 "data/maps/Draynor_Manor/scripts.pory"
	walk_up
# 232 "data/maps/Draynor_Manor/scripts.pory"
	walk_right
# 233 "data/maps/Draynor_Manor/scripts.pory"
	delay_16
# 233 "data/maps/Draynor_Manor/scripts.pory"
	delay_16
	step_end

# 236 "data/maps/Draynor_Manor/scripts.pory"
Ariane_DraynorManor_9:
# 237 "data/maps/Draynor_Manor/scripts.pory"
	walk_left
# 238 "data/maps/Draynor_Manor/scripts.pory"
	walk_down
# 238 "data/maps/Draynor_Manor/scripts.pory"
	walk_down
# 238 "data/maps/Draynor_Manor/scripts.pory"
	walk_down
# 238 "data/maps/Draynor_Manor/scripts.pory"
	walk_down
# 238 "data/maps/Draynor_Manor/scripts.pory"
	walk_down
# 238 "data/maps/Draynor_Manor/scripts.pory"
	walk_down
# 238 "data/maps/Draynor_Manor/scripts.pory"
	walk_down
	step_end

# 241 "data/maps/Draynor_Manor/scripts.pory"
Ariane_DraynorManor_10:
# 242 "data/maps/Draynor_Manor/scripts.pory"
	emote_question_mark
# 243 "data/maps/Draynor_Manor/scripts.pory"
	face_up
# 244 "data/maps/Draynor_Manor/scripts.pory"
	delay_16
# 245 "data/maps/Draynor_Manor/scripts.pory"
	face_right
# 246 "data/maps/Draynor_Manor/scripts.pory"
	delay_16
# 247 "data/maps/Draynor_Manor/scripts.pory"
	face_down
	step_end

HAM_EVENT_DraynorManor_MAIN_1::
# 255 "data/maps/Draynor_Manor/scripts.pory"
	lock
# 256 "data/maps/Draynor_Manor/scripts.pory"
	namebox HAM_EVENT_DraynorManor_DOOR_LEFT_Text_0
# 257 "data/maps/Draynor_Manor/scripts.pory"
	msgbox HAM_EVENT_DraynorManor_MAIN_1_Text_0
# 258 "data/maps/Draynor_Manor/scripts.pory"
	hidenamebox
# 259 "data/maps/Draynor_Manor/scripts.pory"
	closemessage
# 260 "data/maps/Draynor_Manor/scripts.pory"
	applymovement 1, Ariane_DraynorManor_1
# 261 "data/maps/Draynor_Manor/scripts.pory"
	waitmovement 0
# 262 "data/maps/Draynor_Manor/scripts.pory"
	opendoor 14, 17
# 263 "data/maps/Draynor_Manor/scripts.pory"
	waitdooranim
# 264 "data/maps/Draynor_Manor/scripts.pory"
	msgbox HAM_EVENT_DraynorManor_MAIN_1_Text_1
# 265 "data/maps/Draynor_Manor/scripts.pory"
	playSE SE_LEDGE
# 266 "data/maps/Draynor_Manor/scripts.pory"
	applymovement 1, Ariane_DraynorManor_2
# 267 "data/maps/Draynor_Manor/scripts.pory"
	waitmovement 0
	return


HAM_EVENT_DraynorManor_MAIN_2::
# 272 "data/maps/Draynor_Manor/scripts.pory"
	closedoor 14, 17
# 273 "data/maps/Draynor_Manor/scripts.pory"
	waitdooranim
# 274 "data/maps/Draynor_Manor/scripts.pory"
	waitmovement 0
# 275 "data/maps/Draynor_Manor/scripts.pory"
	setvar VAR_POKESCAPE_WIZARDS_TOWER_STATE, 7
# 276 "data/maps/Draynor_Manor/scripts.pory"
	setobjectxyperm 1, 16, 36
# 277 "data/maps/Draynor_Manor/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_UP
# 278 "data/maps/Draynor_Manor/scripts.pory"
	release
	end


HAM_EVENT_DraynorManor_TRIGGER_1::
# 284 "data/maps/Draynor_Manor/scripts.pory"
	call HAM_EVENT_DraynorManor_MAIN_1
# 285 "data/maps/Draynor_Manor/scripts.pory"
	msgbox HAM_EVENT_DraynorManor_TRIGGER_1_Text_0
# 286 "data/maps/Draynor_Manor/scripts.pory"
	hidenamebox
# 287 "data/maps/Draynor_Manor/scripts.pory"
	closemessage
# 288 "data/maps/Draynor_Manor/scripts.pory"
	applymovement 1, Ariane_DraynorManor_3
# 289 "data/maps/Draynor_Manor/scripts.pory"
	goto HAM_EVENT_DraynorManor_MAIN_2
	return


HAM_EVENT_DraynorManor_TRIGGER_2::
# 293 "data/maps/Draynor_Manor/scripts.pory"
	call HAM_EVENT_DraynorManor_MAIN_1
# 294 "data/maps/Draynor_Manor/scripts.pory"
	msgbox HAM_EVENT_DraynorManor_TRIGGER_1_Text_0
# 295 "data/maps/Draynor_Manor/scripts.pory"
	hidenamebox
# 296 "data/maps/Draynor_Manor/scripts.pory"
	closemessage
# 297 "data/maps/Draynor_Manor/scripts.pory"
	applymovement 1, Ariane_DraynorManor_3
# 298 "data/maps/Draynor_Manor/scripts.pory"
	playse SE_WALL_HIT
# 299 "data/maps/Draynor_Manor/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Ariane_DraynorManor_4
# 300 "data/maps/Draynor_Manor/scripts.pory"
	waitmovement 1
# 301 "data/maps/Draynor_Manor/scripts.pory"
	goto HAM_EVENT_DraynorManor_MAIN_2
	return


# 306 "data/maps/Draynor_Manor/scripts.pory"
Ariane_DraynorManor_1:
# 307 "data/maps/Draynor_Manor/scripts.pory"
	walk_up
	step_end

# 310 "data/maps/Draynor_Manor/scripts.pory"
Ariane_DraynorManor_2:
# 311 "data/maps/Draynor_Manor/scripts.pory"
	jump_in_place_up
	step_end

# 314 "data/maps/Draynor_Manor/scripts.pory"
Ariane_DraynorManor_3:
# 315 "data/maps/Draynor_Manor/scripts.pory"
	walk_fast_down
# 315 "data/maps/Draynor_Manor/scripts.pory"
	walk_fast_down
# 315 "data/maps/Draynor_Manor/scripts.pory"
	walk_fast_down
# 315 "data/maps/Draynor_Manor/scripts.pory"
	walk_fast_down
# 315 "data/maps/Draynor_Manor/scripts.pory"
	walk_fast_down
# 315 "data/maps/Draynor_Manor/scripts.pory"
	walk_fast_down
# 315 "data/maps/Draynor_Manor/scripts.pory"
	walk_fast_down
# 315 "data/maps/Draynor_Manor/scripts.pory"
	walk_fast_down
# 315 "data/maps/Draynor_Manor/scripts.pory"
	walk_fast_down
# 315 "data/maps/Draynor_Manor/scripts.pory"
	walk_fast_down
# 315 "data/maps/Draynor_Manor/scripts.pory"
	walk_fast_down
# 315 "data/maps/Draynor_Manor/scripts.pory"
	walk_fast_down
# 316 "data/maps/Draynor_Manor/scripts.pory"
	walk_faster_down
# 316 "data/maps/Draynor_Manor/scripts.pory"
	walk_faster_down
# 316 "data/maps/Draynor_Manor/scripts.pory"
	walk_faster_down
# 316 "data/maps/Draynor_Manor/scripts.pory"
	walk_faster_down
# 316 "data/maps/Draynor_Manor/scripts.pory"
	walk_faster_down
# 316 "data/maps/Draynor_Manor/scripts.pory"
	walk_faster_down
# 317 "data/maps/Draynor_Manor/scripts.pory"
	walk_faster_right
# 317 "data/maps/Draynor_Manor/scripts.pory"
	walk_faster_right
	step_end

# 320 "data/maps/Draynor_Manor/scripts.pory"
Ariane_DraynorManor_4:
# 321 "data/maps/Draynor_Manor/scripts.pory"
	slide_right
# 322 "data/maps/Draynor_Manor/scripts.pory"
	face_down
	step_end

HAM_EVENT_DraynorManor_Ariane::
# 328 "data/maps/Draynor_Manor/scripts.pory"
	lock
# 329 "data/maps/Draynor_Manor/scripts.pory"
	faceplayer
# 330 "data/maps/Draynor_Manor/scripts.pory"
	namebox HAM_EVENT_DraynorManor_DOOR_LEFT_Text_0
# 331 "data/maps/Draynor_Manor/scripts.pory"
	msgbox HAM_EVENT_DraynorManor_Ariane_Text_0
# 332 "data/maps/Draynor_Manor/scripts.pory"
	hidenamebox
# 333 "data/maps/Draynor_Manor/scripts.pory"
	closemessage
# 334 "data/maps/Draynor_Manor/scripts.pory"
	release
	end


ENCOUNTER_DeadTree_1::
# 365 "data/maps/Draynor_Manor/scripts.pory"
	compare VAR_TEMP_A, 1
	goto_if_eq ENCOUNTER_DeadTree_1_1
# 370 "data/maps/Draynor_Manor/scripts.pory"
	lock
# 371 "data/maps/Draynor_Manor/scripts.pory"
	call ENCOUNTER_DeadTree
# 372 "data/maps/Draynor_Manor/scripts.pory"
	setvar VAR_TEMP_A, 1
# 373 "data/maps/Draynor_Manor/scripts.pory"
	release
	end

ENCOUNTER_DeadTree_1_1:
	end


ENCOUNTER_DeadTree_2::
# 380 "data/maps/Draynor_Manor/scripts.pory"
	compare VAR_TEMP_B, 1
	goto_if_eq ENCOUNTER_DeadTree_2_1
# 385 "data/maps/Draynor_Manor/scripts.pory"
	call ENCOUNTER_DeadTree
# 386 "data/maps/Draynor_Manor/scripts.pory"
	setvar VAR_TEMP_B, 1
# 387 "data/maps/Draynor_Manor/scripts.pory"
	release
	end

ENCOUNTER_DeadTree_2_1:
	end


ENCOUNTER_DeadTree_3::
# 394 "data/maps/Draynor_Manor/scripts.pory"
	compare VAR_TEMP_C, 1
	goto_if_eq ENCOUNTER_DeadTree_3_1
# 399 "data/maps/Draynor_Manor/scripts.pory"
	call ENCOUNTER_DeadTree
# 400 "data/maps/Draynor_Manor/scripts.pory"
	setvar VAR_TEMP_C, 1
# 401 "data/maps/Draynor_Manor/scripts.pory"
	release
	end

ENCOUNTER_DeadTree_3_1:
	end


ENCOUNTER_DeadTree_4::
# 408 "data/maps/Draynor_Manor/scripts.pory"
	compare VAR_TEMP_D, 1
	goto_if_eq ENCOUNTER_DeadTree_4_1
# 413 "data/maps/Draynor_Manor/scripts.pory"
	call ENCOUNTER_DeadTree
# 414 "data/maps/Draynor_Manor/scripts.pory"
	setvar VAR_TEMP_D, 1
# 415 "data/maps/Draynor_Manor/scripts.pory"
	release
	end

ENCOUNTER_DeadTree_4_1:
	end


ENCOUNTER_DeadTree_5::
# 422 "data/maps/Draynor_Manor/scripts.pory"
	compare VAR_TEMP_E, 1
	goto_if_eq ENCOUNTER_DeadTree_5_1
# 427 "data/maps/Draynor_Manor/scripts.pory"
	call ENCOUNTER_DeadTree
# 428 "data/maps/Draynor_Manor/scripts.pory"
	setvar VAR_TEMP_E, 1
# 429 "data/maps/Draynor_Manor/scripts.pory"
	release
	end

ENCOUNTER_DeadTree_5_1:
	end


ENCOUNTER_DeadTree_6::
# 436 "data/maps/Draynor_Manor/scripts.pory"
	compare VAR_TEMP_F, 1
	goto_if_eq ENCOUNTER_DeadTree_6_1
# 441 "data/maps/Draynor_Manor/scripts.pory"
	call ENCOUNTER_DeadTree
# 442 "data/maps/Draynor_Manor/scripts.pory"
	setvar VAR_TEMP_F, 1
# 443 "data/maps/Draynor_Manor/scripts.pory"
	release
	end

ENCOUNTER_DeadTree_6_1:
	end


ENCOUNTER_DeadTree::
# 457 "data/maps/Draynor_Manor/scripts.pory"
	lock
# 458 "data/maps/Draynor_Manor/scripts.pory"
	playse SE_LEDGE
# 459 "data/maps/Draynor_Manor/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DeadTree_PlayerMovement1
# 460 "data/maps/Draynor_Manor/scripts.pory"
	waitmovement 0
# 461 "data/maps/Draynor_Manor/scripts.pory"
	msgbox ENCOUNTER_DeadTree_Text_0
# 462 "data/maps/Draynor_Manor/scripts.pory"
	closemessage
# 463 "data/maps/Draynor_Manor/scripts.pory"
	setwildbattle SPECIES_DEAD_TREE, 15, ITEM_NONE
# 464 "data/maps/Draynor_Manor/scripts.pory"
	dowildbattle
	return


# 470 "data/maps/Draynor_Manor/scripts.pory"
DeadTree_PlayerMovement1:
# 471 "data/maps/Draynor_Manor/scripts.pory"
	emote_exclamation_mark
# 472 "data/maps/Draynor_Manor/scripts.pory"
	lock_facing_direction
# 473 "data/maps/Draynor_Manor/scripts.pory"
	jump_in_place_down
# 474 "data/maps/Draynor_Manor/scripts.pory"
	delay_16
# 475 "data/maps/Draynor_Manor/scripts.pory"
	unlock_facing_direction
	step_end

BLOCK_DraynorManor_Trees_Text_0:
# 90 "data/maps/Draynor_Manor/scripts.pory"
	.string "As you get close to the Manor some trees swipe at you!$"

BLOCK_DraynorManor_Trees_Text_1:
# 95 "data/maps/Draynor_Manor/scripts.pory"
	.string "The trees are not letting you pass.$"

HAM_EVENT_DraynorManor_DOOR_LEFT_Text_0:
# 158 "data/maps/Draynor_Manor/scripts.pory"
	.string "Ariane$"

HAM_EVENT_DraynorManor_DOOR_LEFT_Text_1:
# 159 "data/maps/Draynor_Manor/scripts.pory"
	.string "There you are!\p"
	.string "I thought something bad had happened since you were in there for so long.$"

HAM_EVENT_DraynorManor_Ariane_1_Text_0:
# 176 "data/maps/Draynor_Manor/scripts.pory"
	.string "I think that guy is long gone by now.\p"
	.string "I'm heading back to report to Sedridor.\p"
	.string "Thanks for you assistance.$"

HAM_EVENT_DraynorManor_DOOR_WRONG_Text_0:
# 195 "data/maps/Draynor_Manor/scripts.pory"
	.string "Hey {PLAYER} is that you over there?$"

HAM_EVENT_DraynorManor_MAIN_1_Text_0:
# 257 "data/maps/Draynor_Manor/scripts.pory"
	.string "Did he seriously have to go inside this creepy place!$"

HAM_EVENT_DraynorManor_MAIN_1_Text_1:
# 264 "data/maps/Draynor_Manor/scripts.pory"
	.string "EEEEEEK!$"

HAM_EVENT_DraynorManor_TRIGGER_1_Text_0:
# 285 "data/maps/Draynor_Manor/scripts.pory"
	.string "I…{PAUSE 15} I…{PAUSE 15} I cannot do this!!$"

HAM_EVENT_DraynorManor_Ariane_Text_0:
# 331 "data/maps/Draynor_Manor/scripts.pory"
	.string "I can not do this!\p"
	.string "That manor is 2sp00ky4me!$"

ENCOUNTER_DeadTree_Text_0:
# 461 "data/maps/Draynor_Manor/scripts.pory"
	.string "The tree attacked!$"
