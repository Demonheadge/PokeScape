Varrock_Palace_1F_MapScripts::
# 4 "data/maps/Varrock_Palace_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Varrock_Palace_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Varrock_Palace_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 5 "data/maps/Varrock_Palace_1F/scripts.pory"
	call VARROCKGYM_TRAINERS
	return


VARROCKGYM_TRAINERS::
# 12 "data/maps/Varrock_Palace_1F/scripts.pory"
	goto_if_unset FLAG_BADGE03_GET, VARROCKGYM_TRAINERS_2
VARROCKGYM_TRAINERS_1:
	return

VARROCKGYM_TRAINERS_2:
# 15 "data/maps/Varrock_Palace_1F/scripts.pory"
	compare VAR_POKESCAPE_VARROCK_GYM_QUEST, 0
	goto_if_eq VARROCKGYM_TRAINERS_4
# 15 "data/maps/Varrock_Palace_1F/scripts.pory"
	compare VAR_POKESCAPE_VARROCK_GYM_QUEST, 5
	goto_if_eq VARROCKGYM_TRAINERS_4
	goto VARROCKGYM_TRAINERS_1

VARROCKGYM_TRAINERS_4:
# 17 "data/maps/Varrock_Palace_1F/scripts.pory"
	call SetGymTrainers_VARROCK
	goto VARROCKGYM_TRAINERS_1


TRIGGER_VARROCK_GYM_ADVISOR::
# 29 "data/maps/Varrock_Palace_1F/scripts.pory"
	goto_if_unset FLAG_BADGE03_GET, TRIGGER_VARROCK_GYM_ADVISOR_2
TRIGGER_VARROCK_GYM_ADVISOR_1:
# 72 "data/maps/Varrock_Palace_1F/scripts.pory"
	release
	end

TRIGGER_VARROCK_GYM_ADVISOR_2:
# 32 "data/maps/Varrock_Palace_1F/scripts.pory"
	compare VAR_POKESCAPE_VARROCK_GYM_QUEST, 0
	goto_if_eq TRIGGER_VARROCK_GYM_ADVISOR_5
# 44 "data/maps/Varrock_Palace_1F/scripts.pory"
	compare VAR_POKESCAPE_VARROCK_GYM_QUEST, 5
	goto_if_eq TRIGGER_VARROCK_GYM_ADVISOR_8
# 44 "data/maps/Varrock_Palace_1F/scripts.pory"
	compare VAR_POKESCAPE_VARROCK_GYM_QUEST, 10
	goto_if_eq TRIGGER_VARROCK_GYM_ADVISOR_8
# 44 "data/maps/Varrock_Palace_1F/scripts.pory"
	compare VAR_POKESCAPE_VARROCK_GYM_QUEST, 15
	goto_if_eq TRIGGER_VARROCK_GYM_ADVISOR_8
# 56 "data/maps/Varrock_Palace_1F/scripts.pory"
	compare VAR_POKESCAPE_VARROCK_GYM_QUEST, 20
	goto_if_eq TRIGGER_VARROCK_GYM_ADVISOR_15
# 66 "data/maps/Varrock_Palace_1F/scripts.pory"
	compare VAR_POKESCAPE_VARROCK_GYM_QUEST, 25
	goto_if_eq TRIGGER_VARROCK_GYM_ADVISOR_17
# 66 "data/maps/Varrock_Palace_1F/scripts.pory"
	compare VAR_POKESCAPE_VARROCK_GYM_QUEST, 26
	goto_if_eq TRIGGER_VARROCK_GYM_ADVISOR_17
	goto TRIGGER_VARROCK_GYM_ADVISOR_1

TRIGGER_VARROCK_GYM_ADVISOR_5:
# 34 "data/maps/Varrock_Palace_1F/scripts.pory"
	lock
# 35 "data/maps/Varrock_Palace_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_InteractFACERIGHT
# 36 "data/maps/Varrock_Palace_1F/scripts.pory"
	applymovement 2, Movement_InteractFACEPLAYER
# 37 "data/maps/Varrock_Palace_1F/scripts.pory"
	waitmovement 0
# 38 "data/maps/Varrock_Palace_1F/scripts.pory"
	call QUEST_VARROCK_GYM_1
# 39 "data/maps/Varrock_Palace_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_WALKDOWN
# 40 "data/maps/Varrock_Palace_1F/scripts.pory"
	waitmovement 0
# 41 "data/maps/Varrock_Palace_1F/scripts.pory"
	release
	end

TRIGGER_VARROCK_GYM_ADVISOR_8:
# 46 "data/maps/Varrock_Palace_1F/scripts.pory"
	lock
# 47 "data/maps/Varrock_Palace_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_InteractFACERIGHT
# 48 "data/maps/Varrock_Palace_1F/scripts.pory"
	applymovement 2, Movement_InteractFACEPLAYER
# 49 "data/maps/Varrock_Palace_1F/scripts.pory"
	waitmovement 0
# 50 "data/maps/Varrock_Palace_1F/scripts.pory"
	call QUEST_VARROCK_GYM_2
# 51 "data/maps/Varrock_Palace_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_WALKDOWN
# 52 "data/maps/Varrock_Palace_1F/scripts.pory"
	waitmovement 0
# 53 "data/maps/Varrock_Palace_1F/scripts.pory"
	release
	end

TRIGGER_VARROCK_GYM_ADVISOR_15:
# 58 "data/maps/Varrock_Palace_1F/scripts.pory"
	lock
# 59 "data/maps/Varrock_Palace_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_InteractFACERIGHT
# 60 "data/maps/Varrock_Palace_1F/scripts.pory"
	applymovement 2, Movement_InteractFACEPLAYER
# 61 "data/maps/Varrock_Palace_1F/scripts.pory"
	waitmovement 0
# 62 "data/maps/Varrock_Palace_1F/scripts.pory"
	call QUEST_VARROCK_GYM_3
# 63 "data/maps/Varrock_Palace_1F/scripts.pory"
	release
	end

TRIGGER_VARROCK_GYM_ADVISOR_17:
# 68 "data/maps/Varrock_Palace_1F/scripts.pory"
	release
	end


VARROCK_GYM_ADVISOR::
# 77 "data/maps/Varrock_Palace_1F/scripts.pory"
	goto_if_unset FLAG_BADGE03_GET, VARROCK_GYM_ADVISOR_2
VARROCK_GYM_ADVISOR_1:
# 121 "data/maps/Varrock_Palace_1F/scripts.pory"
	lock
# 122 "data/maps/Varrock_Palace_1F/scripts.pory"
	faceplayer
# 123 "data/maps/Varrock_Palace_1F/scripts.pory"
	call QUEST_VARROCK_GYM_5
# 124 "data/maps/Varrock_Palace_1F/scripts.pory"
	release
	end

VARROCK_GYM_ADVISOR_2:
# 80 "data/maps/Varrock_Palace_1F/scripts.pory"
	compare VAR_POKESCAPE_VARROCK_GYM_QUEST, 0
	goto_if_eq VARROCK_GYM_ADVISOR_5
# 88 "data/maps/Varrock_Palace_1F/scripts.pory"
	compare VAR_POKESCAPE_VARROCK_GYM_QUEST, 5
	goto_if_eq VARROCK_GYM_ADVISOR_8
# 88 "data/maps/Varrock_Palace_1F/scripts.pory"
	compare VAR_POKESCAPE_VARROCK_GYM_QUEST, 10
	goto_if_eq VARROCK_GYM_ADVISOR_8
# 88 "data/maps/Varrock_Palace_1F/scripts.pory"
	compare VAR_POKESCAPE_VARROCK_GYM_QUEST, 15
	goto_if_eq VARROCK_GYM_ADVISOR_8
# 96 "data/maps/Varrock_Palace_1F/scripts.pory"
	compare VAR_POKESCAPE_VARROCK_GYM_QUEST, 20
	goto_if_eq VARROCK_GYM_ADVISOR_15
# 104 "data/maps/Varrock_Palace_1F/scripts.pory"
	compare VAR_POKESCAPE_VARROCK_GYM_QUEST, 25
	goto_if_eq VARROCK_GYM_ADVISOR_18
# 112 "data/maps/Varrock_Palace_1F/scripts.pory"
	compare VAR_POKESCAPE_VARROCK_GYM_QUEST, 26
	goto_if_eq VARROCK_GYM_ADVISOR_20
	goto VARROCK_GYM_ADVISOR_1

VARROCK_GYM_ADVISOR_5:
# 82 "data/maps/Varrock_Palace_1F/scripts.pory"
	lock
# 83 "data/maps/Varrock_Palace_1F/scripts.pory"
	faceplayer
# 84 "data/maps/Varrock_Palace_1F/scripts.pory"
	call QUEST_VARROCK_GYM_1
# 85 "data/maps/Varrock_Palace_1F/scripts.pory"
	release
	end

VARROCK_GYM_ADVISOR_8:
# 90 "data/maps/Varrock_Palace_1F/scripts.pory"
	lock
# 91 "data/maps/Varrock_Palace_1F/scripts.pory"
	faceplayer
# 92 "data/maps/Varrock_Palace_1F/scripts.pory"
	call QUEST_VARROCK_GYM_2
# 93 "data/maps/Varrock_Palace_1F/scripts.pory"
	release
	end

VARROCK_GYM_ADVISOR_15:
# 98 "data/maps/Varrock_Palace_1F/scripts.pory"
	lock
# 99 "data/maps/Varrock_Palace_1F/scripts.pory"
	faceplayer
# 100 "data/maps/Varrock_Palace_1F/scripts.pory"
	call QUEST_VARROCK_GYM_3
# 101 "data/maps/Varrock_Palace_1F/scripts.pory"
	release
	end

VARROCK_GYM_ADVISOR_18:
# 106 "data/maps/Varrock_Palace_1F/scripts.pory"
	lock
# 107 "data/maps/Varrock_Palace_1F/scripts.pory"
	faceplayer
# 108 "data/maps/Varrock_Palace_1F/scripts.pory"
	call QUEST_VARROCK_GYM_4
# 109 "data/maps/Varrock_Palace_1F/scripts.pory"
	release
	end

VARROCK_GYM_ADVISOR_20:
# 114 "data/maps/Varrock_Palace_1F/scripts.pory"
	lock
# 115 "data/maps/Varrock_Palace_1F/scripts.pory"
	faceplayer
# 116 "data/maps/Varrock_Palace_1F/scripts.pory"
	call QUEST_VARROCK_GYM_5
# 117 "data/maps/Varrock_Palace_1F/scripts.pory"
	release
	end


QUEST_VARROCK_GYM_1::
# 129 "data/maps/Varrock_Palace_1F/scripts.pory"
	namebox QUEST_VARROCK_GYM_1_Text_0
# 130 "data/maps/Varrock_Palace_1F/scripts.pory"
	msgbox QUEST_VARROCK_GYM_1_Text_1, MSGBOX_YESNO
# 131 "data/maps/Varrock_Palace_1F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq QUEST_VARROCK_GYM_1_2
# 138 "data/maps/Varrock_Palace_1F/scripts.pory"
	msgbox QUEST_VARROCK_GYM_1_Text_3
# 139 "data/maps/Varrock_Palace_1F/scripts.pory"
	closemessage
# 140 "data/maps/Varrock_Palace_1F/scripts.pory"
	hidenamebox
# 142 "data/maps/Varrock_Palace_1F/scripts.pory"
	setvar VAR_POKESCAPE_VARROCK_GYM_QUEST, 5
	return

QUEST_VARROCK_GYM_1_2:
# 133 "data/maps/Varrock_Palace_1F/scripts.pory"
	msgbox QUEST_VARROCK_GYM_1_Text_2
# 134 "data/maps/Varrock_Palace_1F/scripts.pory"
	closemessage
# 135 "data/maps/Varrock_Palace_1F/scripts.pory"
	hidenamebox
	return


QUEST_VARROCK_GYM_2::
# 147 "data/maps/Varrock_Palace_1F/scripts.pory"
	namebox QUEST_VARROCK_GYM_1_Text_0
# 148 "data/maps/Varrock_Palace_1F/scripts.pory"
	msgbox QUEST_VARROCK_GYM_2_Text_0
# 149 "data/maps/Varrock_Palace_1F/scripts.pory"
	closemessage
# 150 "data/maps/Varrock_Palace_1F/scripts.pory"
	hidenamebox
	return


QUEST_VARROCK_GYM_3::
# 155 "data/maps/Varrock_Palace_1F/scripts.pory"
	namebox QUEST_VARROCK_GYM_1_Text_0
# 156 "data/maps/Varrock_Palace_1F/scripts.pory"
	msgbox QUEST_VARROCK_GYM_3_Text_0
# 157 "data/maps/Varrock_Palace_1F/scripts.pory"
	closemessage
# 158 "data/maps/Varrock_Palace_1F/scripts.pory"
	hidenamebox
# 159 "data/maps/Varrock_Palace_1F/scripts.pory"
	setvar VAR_POKESCAPE_VARROCK_GYM_QUEST, 25
	return


QUEST_VARROCK_GYM_4::
# 164 "data/maps/Varrock_Palace_1F/scripts.pory"
	namebox QUEST_VARROCK_GYM_1_Text_0
# 165 "data/maps/Varrock_Palace_1F/scripts.pory"
	msgbox QUEST_VARROCK_GYM_4_Text_0
# 166 "data/maps/Varrock_Palace_1F/scripts.pory"
	closemessage
# 167 "data/maps/Varrock_Palace_1F/scripts.pory"
	hidenamebox
	return


QUEST_VARROCK_GYM_5::
# 172 "data/maps/Varrock_Palace_1F/scripts.pory"
	namebox QUEST_VARROCK_GYM_1_Text_0
# 173 "data/maps/Varrock_Palace_1F/scripts.pory"
	msgbox QUEST_VARROCK_GYM_5_Text_0
# 174 "data/maps/Varrock_Palace_1F/scripts.pory"
	closemessage
# 175 "data/maps/Varrock_Palace_1F/scripts.pory"
	hidenamebox
	return


VARROCK_GYM_RELDO::
# 185 "data/maps/Varrock_Palace_1F/scripts.pory"
	lock
# 186 "data/maps/Varrock_Palace_1F/scripts.pory"
	faceplayer
# 187 "data/maps/Varrock_Palace_1F/scripts.pory"
	namebox VARROCK_GYM_RELDO_Text_0
# 188 "data/maps/Varrock_Palace_1F/scripts.pory"
	msgbox VARROCK_GYM_RELDO_Text_1
# 189 "data/maps/Varrock_Palace_1F/scripts.pory"
	goto_if_unset FLAG_BADGE03_GET, VARROCK_GYM_RELDO_2
# 221 "data/maps/Varrock_Palace_1F/scripts.pory"
	msgbox VARROCK_GYM_RELDO_Text_9
VARROCK_GYM_RELDO_1:
# 223 "data/maps/Varrock_Palace_1F/scripts.pory"
	closemessage
# 224 "data/maps/Varrock_Palace_1F/scripts.pory"
	hidenamebox
# 225 "data/maps/Varrock_Palace_1F/scripts.pory"
	release
	end

VARROCK_GYM_RELDO_2:
# 191 "data/maps/Varrock_Palace_1F/scripts.pory"
	compare VAR_POKESCAPE_VARROCK_GYM_QUEST, 5
	goto_if_eq VARROCK_GYM_RELDO_6
VARROCK_GYM_RELDO_5:
# 197 "data/maps/Varrock_Palace_1F/scripts.pory"
	compare VAR_POKESCAPE_VARROCK_GYM_QUEST, 10
	goto_if_eq VARROCK_GYM_RELDO_9
VARROCK_GYM_RELDO_8:
# 201 "data/maps/Varrock_Palace_1F/scripts.pory"
	compare VAR_POKESCAPE_VARROCK_GYM_QUEST, 20
	goto_if_eq VARROCK_GYM_RELDO_12
VARROCK_GYM_RELDO_11:
# 205 "data/maps/Varrock_Palace_1F/scripts.pory"
	compare VAR_POKESCAPE_VARROCK_GYM_QUEST, 15
	goto_if_eq VARROCK_GYM_RELDO_15
VARROCK_GYM_RELDO_14:
# 214 "data/maps/Varrock_Palace_1F/scripts.pory"
	compare VAR_POKESCAPE_VARROCK_GYM_QUEST, 26
	goto_if_eq VARROCK_GYM_RELDO_17
	goto VARROCK_GYM_RELDO_1

VARROCK_GYM_RELDO_6:
# 193 "data/maps/Varrock_Palace_1F/scripts.pory"
	msgbox VARROCK_GYM_RELDO_Text_2
# 194 "data/maps/Varrock_Palace_1F/scripts.pory"
	setvar VAR_POKESCAPE_VARROCK_GYM_QUEST, 10
# 195 "data/maps/Varrock_Palace_1F/scripts.pory"
	call ClearGymTrainers_VARROCK
	goto VARROCK_GYM_RELDO_5

VARROCK_GYM_RELDO_9:
# 199 "data/maps/Varrock_Palace_1F/scripts.pory"
	msgbox VARROCK_GYM_RELDO_Text_3
	goto VARROCK_GYM_RELDO_8

VARROCK_GYM_RELDO_12:
# 203 "data/maps/Varrock_Palace_1F/scripts.pory"
	msgbox VARROCK_GYM_RELDO_Text_4
	goto VARROCK_GYM_RELDO_11

VARROCK_GYM_RELDO_15:
# 207 "data/maps/Varrock_Palace_1F/scripts.pory"
	msgbox VARROCK_GYM_RELDO_Text_5
# 208 "data/maps/Varrock_Palace_1F/scripts.pory"
	hidenamebox
# 209 "data/maps/Varrock_Palace_1F/scripts.pory"
	msgbox VARROCK_GYM_RELDO_Text_6
# 210 "data/maps/Varrock_Palace_1F/scripts.pory"
	namebox VARROCK_GYM_RELDO_Text_0
# 211 "data/maps/Varrock_Palace_1F/scripts.pory"
	msgbox VARROCK_GYM_RELDO_Text_7
# 212 "data/maps/Varrock_Palace_1F/scripts.pory"
	setvar VAR_POKESCAPE_VARROCK_GYM_QUEST, 20
	goto VARROCK_GYM_RELDO_14

VARROCK_GYM_RELDO_17:
# 216 "data/maps/Varrock_Palace_1F/scripts.pory"
	msgbox VARROCK_GYM_RELDO_Text_8
	goto VARROCK_GYM_RELDO_1


VARROCK_GYM_GENERIC_BOOK::
# 231 "data/maps/Varrock_Palace_1F/scripts.pory"
	random 5
# 232 "data/maps/Varrock_Palace_1F/scripts.pory"
	switch VAR_RESULT
# 234 "data/maps/Varrock_Palace_1F/scripts.pory"
	case 0, VARROCK_GYM_GENERIC_BOOK_3
# 236 "data/maps/Varrock_Palace_1F/scripts.pory"
	case 1, VARROCK_GYM_GENERIC_BOOK_4
# 238 "data/maps/Varrock_Palace_1F/scripts.pory"
	case 2, VARROCK_GYM_GENERIC_BOOK_5
# 240 "data/maps/Varrock_Palace_1F/scripts.pory"
	case 3, VARROCK_GYM_GENERIC_BOOK_6
# 242 "data/maps/Varrock_Palace_1F/scripts.pory"
	case 4, VARROCK_GYM_GENERIC_BOOK_7
VARROCK_GYM_GENERIC_BOOK_1:
# 245 "data/maps/Varrock_Palace_1F/scripts.pory"
	compare VAR_POKESCAPE_VARROCK_GYM_QUEST, 10
	goto_if_eq VARROCK_GYM_GENERIC_BOOK_9
VARROCK_GYM_GENERIC_BOOK_8:
# 249 "data/maps/Varrock_Palace_1F/scripts.pory"
	closemessage
# 250 "data/maps/Varrock_Palace_1F/scripts.pory"
	release
	end

VARROCK_GYM_GENERIC_BOOK_3:
# 235 "data/maps/Varrock_Palace_1F/scripts.pory"
	msgbox VARROCK_GYM_GENERIC_BOOK_Text_0
	goto VARROCK_GYM_GENERIC_BOOK_1

VARROCK_GYM_GENERIC_BOOK_4:
# 237 "data/maps/Varrock_Palace_1F/scripts.pory"
	msgbox VARROCK_GYM_GENERIC_BOOK_Text_1
	goto VARROCK_GYM_GENERIC_BOOK_1

VARROCK_GYM_GENERIC_BOOK_5:
# 239 "data/maps/Varrock_Palace_1F/scripts.pory"
	msgbox VARROCK_GYM_GENERIC_BOOK_Text_2
	goto VARROCK_GYM_GENERIC_BOOK_1

VARROCK_GYM_GENERIC_BOOK_6:
# 241 "data/maps/Varrock_Palace_1F/scripts.pory"
	msgbox VARROCK_GYM_GENERIC_BOOK_Text_3
	goto VARROCK_GYM_GENERIC_BOOK_1

VARROCK_GYM_GENERIC_BOOK_7:
# 243 "data/maps/Varrock_Palace_1F/scripts.pory"
	msgbox VARROCK_GYM_GENERIC_BOOK_Text_4
	goto VARROCK_GYM_GENERIC_BOOK_1

VARROCK_GYM_GENERIC_BOOK_9:
# 247 "data/maps/Varrock_Palace_1F/scripts.pory"
	msgbox VARROCK_GYM_GENERIC_BOOK_Text_5
	goto VARROCK_GYM_GENERIC_BOOK_8


VARROCK_GYM_BOOK_1::
# 255 "data/maps/Varrock_Palace_1F/scripts.pory"
	compare VAR_POKESCAPE_VARROCK_GYM_QUEST, 10
	goto_if_eq VARROCK_GYM_BOOK_1_2
VARROCK_GYM_BOOK_1_1:
# 266 "data/maps/Varrock_Palace_1F/scripts.pory"
	msgbox VARROCK_GYM_BOOK_1_Text_2
# 267 "data/maps/Varrock_Palace_1F/scripts.pory"
	closemessage
# 268 "data/maps/Varrock_Palace_1F/scripts.pory"
	release
	end

VARROCK_GYM_BOOK_1_2:
# 257 "data/maps/Varrock_Palace_1F/scripts.pory"
	goto_if_unset FLAG_VARROCKGYM_BOOK_1, VARROCK_GYM_BOOK_1_4
	goto VARROCK_GYM_BOOK_1_1

VARROCK_GYM_BOOK_1_4:
# 259 "data/maps/Varrock_Palace_1F/scripts.pory"
	msgbox VARROCK_GYM_BOOK_1_Text_0
# 260 "data/maps/Varrock_Palace_1F/scripts.pory"
	msgbox VARROCK_GYM_BOOK_1_Text_1
# 261 "data/maps/Varrock_Palace_1F/scripts.pory"
	closemessage
# 262 "data/maps/Varrock_Palace_1F/scripts.pory"
	setflag FLAG_VARROCKGYM_BOOK_1
# 263 "data/maps/Varrock_Palace_1F/scripts.pory"
	call VARROCK_GYM_BOOK_CHECK
	goto VARROCK_GYM_BOOK_1_1


VARROCK_GYM_BOOK_2::
# 273 "data/maps/Varrock_Palace_1F/scripts.pory"
	compare VAR_POKESCAPE_VARROCK_GYM_QUEST, 10
	goto_if_eq VARROCK_GYM_BOOK_2_2
VARROCK_GYM_BOOK_2_1:
# 284 "data/maps/Varrock_Palace_1F/scripts.pory"
	msgbox VARROCK_GYM_BOOK_2_Text_2
# 285 "data/maps/Varrock_Palace_1F/scripts.pory"
	closemessage
# 286 "data/maps/Varrock_Palace_1F/scripts.pory"
	release
	end

VARROCK_GYM_BOOK_2_2:
# 275 "data/maps/Varrock_Palace_1F/scripts.pory"
	goto_if_unset FLAG_VARROCKGYM_BOOK_2, VARROCK_GYM_BOOK_2_4
	goto VARROCK_GYM_BOOK_2_1

VARROCK_GYM_BOOK_2_4:
# 277 "data/maps/Varrock_Palace_1F/scripts.pory"
	msgbox VARROCK_GYM_BOOK_2_Text_0
# 278 "data/maps/Varrock_Palace_1F/scripts.pory"
	msgbox VARROCK_GYM_BOOK_2_Text_1
# 279 "data/maps/Varrock_Palace_1F/scripts.pory"
	closemessage
# 280 "data/maps/Varrock_Palace_1F/scripts.pory"
	setflag FLAG_VARROCKGYM_BOOK_2
# 281 "data/maps/Varrock_Palace_1F/scripts.pory"
	call VARROCK_GYM_BOOK_CHECK
	goto VARROCK_GYM_BOOK_2_1


VARROCK_GYM_BOOK_3::
# 291 "data/maps/Varrock_Palace_1F/scripts.pory"
	compare VAR_POKESCAPE_VARROCK_GYM_QUEST, 10
	goto_if_eq VARROCK_GYM_BOOK_3_2
VARROCK_GYM_BOOK_3_1:
# 322 "data/maps/Varrock_Palace_1F/scripts.pory"
	msgbox VARROCK_GYM_BOOK_1_Text_2
# 323 "data/maps/Varrock_Palace_1F/scripts.pory"
	closemessage
# 324 "data/maps/Varrock_Palace_1F/scripts.pory"
	release
	end

VARROCK_GYM_BOOK_3_2:
# 293 "data/maps/Varrock_Palace_1F/scripts.pory"
	goto_if_unset FLAG_VARROCKGYM_BOOK_3, VARROCK_GYM_BOOK_3_4
	goto VARROCK_GYM_BOOK_3_1

VARROCK_GYM_BOOK_3_4:
# 295 "data/maps/Varrock_Palace_1F/scripts.pory"
	lock
# 296 "data/maps/Varrock_Palace_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_InteractFACEDOWN
# 297 "data/maps/Varrock_Palace_1F/scripts.pory"
	applymovement 9, Movement_WALKUP
# 298 "data/maps/Varrock_Palace_1F/scripts.pory"
	waitmovement 0
# 300 "data/maps/Varrock_Palace_1F/scripts.pory"
	namebox VARROCK_GYM_BOOK_3_Text_0
# 301 "data/maps/Varrock_Palace_1F/scripts.pory"
	msgbox VARROCK_GYM_BOOK_3_Text_1
# 302 "data/maps/Varrock_Palace_1F/scripts.pory"
	hidenamebox
# 303 "data/maps/Varrock_Palace_1F/scripts.pory"
	trainerbattle_no_intro TRAINER_VARROCK_GYM_4, VARROCK_GYM_BOOK_3_Text_2
# 304 "data/maps/Varrock_Palace_1F/scripts.pory"
	namebox VARROCK_GYM_BOOK_3_Text_0
# 305 "data/maps/Varrock_Palace_1F/scripts.pory"
	msgbox VARROCK_GYM_BOOK_3_Text_3
# 306 "data/maps/Varrock_Palace_1F/scripts.pory"
	hidenamebox
# 307 "data/maps/Varrock_Palace_1F/scripts.pory"
	closemessage
# 308 "data/maps/Varrock_Palace_1F/scripts.pory"
	applymovement 9, Movement_WALKDOWN
# 309 "data/maps/Varrock_Palace_1F/scripts.pory"
	waitmovement 0
# 310 "data/maps/Varrock_Palace_1F/scripts.pory"
	applymovement 9, Movement_InteractFACERIGHT
# 311 "data/maps/Varrock_Palace_1F/scripts.pory"
	waitmovement 0
# 312 "data/maps/Varrock_Palace_1F/scripts.pory"
	delay 16
# 313 "data/maps/Varrock_Palace_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_InteractFACEUP
# 314 "data/maps/Varrock_Palace_1F/scripts.pory"
	waitmovement 0
# 315 "data/maps/Varrock_Palace_1F/scripts.pory"
	msgbox VARROCK_GYM_BOOK_3_Text_4
# 316 "data/maps/Varrock_Palace_1F/scripts.pory"
	msgbox VARROCK_GYM_BOOK_1_Text_1
# 317 "data/maps/Varrock_Palace_1F/scripts.pory"
	closemessage
# 318 "data/maps/Varrock_Palace_1F/scripts.pory"
	setflag FLAG_VARROCKGYM_BOOK_3
# 319 "data/maps/Varrock_Palace_1F/scripts.pory"
	call VARROCK_GYM_BOOK_CHECK
	goto VARROCK_GYM_BOOK_3_1


VARROCK_GYM_BOOK_4::
# 329 "data/maps/Varrock_Palace_1F/scripts.pory"
	compare VAR_POKESCAPE_VARROCK_GYM_QUEST, 10
	goto_if_eq VARROCK_GYM_BOOK_4_2
VARROCK_GYM_BOOK_4_1:
# 340 "data/maps/Varrock_Palace_1F/scripts.pory"
	msgbox VARROCK_GYM_BOOK_1_Text_2
# 341 "data/maps/Varrock_Palace_1F/scripts.pory"
	closemessage
# 342 "data/maps/Varrock_Palace_1F/scripts.pory"
	release
	end

VARROCK_GYM_BOOK_4_2:
# 331 "data/maps/Varrock_Palace_1F/scripts.pory"
	goto_if_unset FLAG_VARROCKGYM_BOOK_4, VARROCK_GYM_BOOK_4_4
	goto VARROCK_GYM_BOOK_4_1

VARROCK_GYM_BOOK_4_4:
# 333 "data/maps/Varrock_Palace_1F/scripts.pory"
	msgbox VARROCK_GYM_BOOK_4_Text_0
# 334 "data/maps/Varrock_Palace_1F/scripts.pory"
	msgbox VARROCK_GYM_BOOK_1_Text_1
# 335 "data/maps/Varrock_Palace_1F/scripts.pory"
	closemessage
# 336 "data/maps/Varrock_Palace_1F/scripts.pory"
	setflag FLAG_VARROCKGYM_BOOK_4
# 337 "data/maps/Varrock_Palace_1F/scripts.pory"
	call VARROCK_GYM_BOOK_CHECK
	goto VARROCK_GYM_BOOK_4_1


VARROCK_GYM_BOOK_CHECK::
# 348 "data/maps/Varrock_Palace_1F/scripts.pory"
	goto_if_unset FLAG_VARROCKGYM_BOOK_1, VARROCK_GYM_BOOK_CHECK_2
# 352 "data/maps/Varrock_Palace_1F/scripts.pory"
	goto_if_unset FLAG_VARROCKGYM_BOOK_2, VARROCK_GYM_BOOK_CHECK_5
# 356 "data/maps/Varrock_Palace_1F/scripts.pory"
	goto_if_unset FLAG_VARROCKGYM_BOOK_3, VARROCK_GYM_BOOK_CHECK_8
# 360 "data/maps/Varrock_Palace_1F/scripts.pory"
	goto_if_unset FLAG_VARROCKGYM_BOOK_4, VARROCK_GYM_BOOK_CHECK_11
# 364 "data/maps/Varrock_Palace_1F/scripts.pory"
	msgbox VARROCK_GYM_BOOK_CHECK_Text_0
# 365 "data/maps/Varrock_Palace_1F/scripts.pory"
	closemessage
# 366 "data/maps/Varrock_Palace_1F/scripts.pory"
	setvar VAR_POKESCAPE_VARROCK_GYM_QUEST, 15
# 367 "data/maps/Varrock_Palace_1F/scripts.pory"
	release
	end

VARROCK_GYM_BOOK_CHECK_2:
	end

VARROCK_GYM_BOOK_CHECK_5:
	end

VARROCK_GYM_BOOK_CHECK_8:
	end

VARROCK_GYM_BOOK_CHECK_11:
	end


VARROCK_GYM_SIR_PRYSIN::
# 374 "data/maps/Varrock_Palace_1F/scripts.pory"
	lock
# 375 "data/maps/Varrock_Palace_1F/scripts.pory"
	faceplayer
# 376 "data/maps/Varrock_Palace_1F/scripts.pory"
	namebox VARROCK_GYM_SIR_PRYSIN_Text_0
# 377 "data/maps/Varrock_Palace_1F/scripts.pory"
	compare VAR_POKESCAPE_VARROCK_GYM_QUEST, 10
	goto_if_eq VARROCK_GYM_SIR_PRYSIN_2
# 385 "data/maps/Varrock_Palace_1F/scripts.pory"
	msgbox VARROCK_GYM_SIR_PRYSIN_Text_3
VARROCK_GYM_SIR_PRYSIN_1:
# 387 "data/maps/Varrock_Palace_1F/scripts.pory"
	closemessage
# 388 "data/maps/Varrock_Palace_1F/scripts.pory"
	hidenamebox
# 389 "data/maps/Varrock_Palace_1F/scripts.pory"
	release
	end

VARROCK_GYM_SIR_PRYSIN_2:
# 379 "data/maps/Varrock_Palace_1F/scripts.pory"
	msgbox VARROCK_GYM_SIR_PRYSIN_Text_1
# 380 "data/maps/Varrock_Palace_1F/scripts.pory"
	hidenamebox
# 381 "data/maps/Varrock_Palace_1F/scripts.pory"
	msgbox VARROCK_GYM_SIR_PRYSIN_Text_2
	goto VARROCK_GYM_SIR_PRYSIN_1


VARROCK_GYM_RANGER::
# 395 "data/maps/Varrock_Palace_1F/scripts.pory"
	lock
# 396 "data/maps/Varrock_Palace_1F/scripts.pory"
	faceplayer
# 398 "data/maps/Varrock_Palace_1F/scripts.pory"
	compare VAR_POKESCAPE_VARROCK_GYM_QUEST, 10
	goto_if_eq VARROCK_GYM_RANGER_2
# 406 "data/maps/Varrock_Palace_1F/scripts.pory"
	msgbox VARROCK_GYM_RANGER_Text_1
VARROCK_GYM_RANGER_1:
# 408 "data/maps/Varrock_Palace_1F/scripts.pory"
	closemessage
# 409 "data/maps/Varrock_Palace_1F/scripts.pory"
	hidenamebox
# 410 "data/maps/Varrock_Palace_1F/scripts.pory"
	release
	end

VARROCK_GYM_RANGER_2:
# 400 "data/maps/Varrock_Palace_1F/scripts.pory"
	msgbox VARROCK_GYM_RANGER_Text_0
# 401 "data/maps/Varrock_Palace_1F/scripts.pory"
	hidenamebox
# 402 "data/maps/Varrock_Palace_1F/scripts.pory"
	msgbox VARROCK_GYM_SIR_PRYSIN_Text_2
	goto VARROCK_GYM_RANGER_1


VARROCK_GYM_QUESTER::
# 416 "data/maps/Varrock_Palace_1F/scripts.pory"
	lock
# 417 "data/maps/Varrock_Palace_1F/scripts.pory"
	faceplayer
# 418 "data/maps/Varrock_Palace_1F/scripts.pory"
	compare VAR_POKESCAPE_VARROCK_GYM_QUEST, 10
	goto_if_eq VARROCK_GYM_QUESTER_2
# 424 "data/maps/Varrock_Palace_1F/scripts.pory"
	msgbox VARROCK_GYM_QUESTER_Text_0
VARROCK_GYM_QUESTER_1:
# 426 "data/maps/Varrock_Palace_1F/scripts.pory"
	closemessage
# 427 "data/maps/Varrock_Palace_1F/scripts.pory"
	hidenamebox
# 428 "data/maps/Varrock_Palace_1F/scripts.pory"
	release
	end

VARROCK_GYM_QUESTER_2:
# 420 "data/maps/Varrock_Palace_1F/scripts.pory"
	msgbox VARROCK_GYM_QUESTER_Text_0
	goto VARROCK_GYM_QUESTER_1


VARROCK_GYM_GUARD_1::
# 434 "data/maps/Varrock_Palace_1F/scripts.pory"
	lock
# 435 "data/maps/Varrock_Palace_1F/scripts.pory"
	faceplayer
# 436 "data/maps/Varrock_Palace_1F/scripts.pory"
	compare VAR_POKESCAPE_VARROCK_GYM_QUEST, 10
	goto_if_eq VARROCK_GYM_GUARD_1_2
# 442 "data/maps/Varrock_Palace_1F/scripts.pory"
	msgbox VARROCK_GYM_GUARD_1_Text_1
VARROCK_GYM_GUARD_1_1:
# 444 "data/maps/Varrock_Palace_1F/scripts.pory"
	closemessage
# 445 "data/maps/Varrock_Palace_1F/scripts.pory"
	hidenamebox
# 446 "data/maps/Varrock_Palace_1F/scripts.pory"
	release
	end

VARROCK_GYM_GUARD_1_2:
# 438 "data/maps/Varrock_Palace_1F/scripts.pory"
	msgbox VARROCK_GYM_GUARD_1_Text_0
	goto VARROCK_GYM_GUARD_1_1


VARROCK_GYM_GUARD_2::
# 451 "data/maps/Varrock_Palace_1F/scripts.pory"
	lock
# 452 "data/maps/Varrock_Palace_1F/scripts.pory"
	faceplayer
# 453 "data/maps/Varrock_Palace_1F/scripts.pory"
	compare VAR_POKESCAPE_VARROCK_GYM_QUEST, 10
	goto_if_eq VARROCK_GYM_GUARD_2_2
# 460 "data/maps/Varrock_Palace_1F/scripts.pory"
	msgbox VARROCK_GYM_GUARD_1_Text_1
VARROCK_GYM_GUARD_2_1:
# 462 "data/maps/Varrock_Palace_1F/scripts.pory"
	closemessage
# 463 "data/maps/Varrock_Palace_1F/scripts.pory"
	hidenamebox
# 464 "data/maps/Varrock_Palace_1F/scripts.pory"
	release
	end

VARROCK_GYM_GUARD_2_2:
# 456 "data/maps/Varrock_Palace_1F/scripts.pory"
	msgbox VARROCK_GYM_GUARD_2_Text_0
	goto VARROCK_GYM_GUARD_2_1


VARROCK_GYM_GUARD_3::
# 469 "data/maps/Varrock_Palace_1F/scripts.pory"
	lock
# 470 "data/maps/Varrock_Palace_1F/scripts.pory"
	faceplayer
# 471 "data/maps/Varrock_Palace_1F/scripts.pory"
	compare VAR_POKESCAPE_VARROCK_GYM_QUEST, 10
	goto_if_eq VARROCK_GYM_GUARD_3_2
# 477 "data/maps/Varrock_Palace_1F/scripts.pory"
	msgbox VARROCK_GYM_GUARD_1_Text_1
VARROCK_GYM_GUARD_3_1:
# 479 "data/maps/Varrock_Palace_1F/scripts.pory"
	closemessage
# 480 "data/maps/Varrock_Palace_1F/scripts.pory"
	hidenamebox
# 481 "data/maps/Varrock_Palace_1F/scripts.pory"
	release
	end

VARROCK_GYM_GUARD_3_2:
# 473 "data/maps/Varrock_Palace_1F/scripts.pory"
	msgbox VARROCK_GYM_GUARD_3_Text_0
	goto VARROCK_GYM_GUARD_3_1


VARROCK_GYM_GUARD_4::
# 486 "data/maps/Varrock_Palace_1F/scripts.pory"
	lock
# 487 "data/maps/Varrock_Palace_1F/scripts.pory"
	faceplayer
# 488 "data/maps/Varrock_Palace_1F/scripts.pory"
	compare VAR_POKESCAPE_VARROCK_GYM_QUEST, 10
	goto_if_eq VARROCK_GYM_GUARD_4_2
# 494 "data/maps/Varrock_Palace_1F/scripts.pory"
	msgbox VARROCK_GYM_GUARD_1_Text_1
VARROCK_GYM_GUARD_4_1:
# 496 "data/maps/Varrock_Palace_1F/scripts.pory"
	closemessage
# 497 "data/maps/Varrock_Palace_1F/scripts.pory"
	hidenamebox
# 498 "data/maps/Varrock_Palace_1F/scripts.pory"
	release
	end

VARROCK_GYM_GUARD_4_2:
# 490 "data/maps/Varrock_Palace_1F/scripts.pory"
	msgbox VARROCK_GYM_GUARD_4_Text_0
	goto VARROCK_GYM_GUARD_4_1


VARROCK_GYM_GUARD_5::
# 503 "data/maps/Varrock_Palace_1F/scripts.pory"
	lock
# 504 "data/maps/Varrock_Palace_1F/scripts.pory"
	faceplayer
# 505 "data/maps/Varrock_Palace_1F/scripts.pory"
	compare VAR_POKESCAPE_VARROCK_GYM_QUEST, 10
	goto_if_eq VARROCK_GYM_GUARD_5_2
# 511 "data/maps/Varrock_Palace_1F/scripts.pory"
	msgbox VARROCK_GYM_GUARD_1_Text_1
VARROCK_GYM_GUARD_5_1:
# 513 "data/maps/Varrock_Palace_1F/scripts.pory"
	closemessage
# 514 "data/maps/Varrock_Palace_1F/scripts.pory"
	hidenamebox
# 515 "data/maps/Varrock_Palace_1F/scripts.pory"
	release
	end

VARROCK_GYM_GUARD_5_2:
# 507 "data/maps/Varrock_Palace_1F/scripts.pory"
	msgbox VARROCK_GYM_GUARD_5_Text_0
	goto VARROCK_GYM_GUARD_5_1


VARROCK_GYM_PRAYER_1::
# 520 "data/maps/Varrock_Palace_1F/scripts.pory"
	lock
# 521 "data/maps/Varrock_Palace_1F/scripts.pory"
	faceplayer
# 522 "data/maps/Varrock_Palace_1F/scripts.pory"
	compare VAR_POKESCAPE_VARROCK_GYM_QUEST, 10
	goto_if_eq VARROCK_GYM_PRAYER_1_2
# 528 "data/maps/Varrock_Palace_1F/scripts.pory"
	msgbox VARROCK_GYM_PRAYER_1_Text_0
VARROCK_GYM_PRAYER_1_1:
# 530 "data/maps/Varrock_Palace_1F/scripts.pory"
	closemessage
# 531 "data/maps/Varrock_Palace_1F/scripts.pory"
	hidenamebox
# 532 "data/maps/Varrock_Palace_1F/scripts.pory"
	release
	end

VARROCK_GYM_PRAYER_1_2:
# 524 "data/maps/Varrock_Palace_1F/scripts.pory"
	msgbox VARROCK_GYM_PRAYER_1_Text_0
	goto VARROCK_GYM_PRAYER_1_1


VARROCK_GYM_PRAYER_2::
# 537 "data/maps/Varrock_Palace_1F/scripts.pory"
	lock
# 538 "data/maps/Varrock_Palace_1F/scripts.pory"
	faceplayer
# 539 "data/maps/Varrock_Palace_1F/scripts.pory"
	compare VAR_POKESCAPE_VARROCK_GYM_QUEST, 10
	goto_if_eq VARROCK_GYM_PRAYER_2_2
# 545 "data/maps/Varrock_Palace_1F/scripts.pory"
	msgbox VARROCK_GYM_PRAYER_2_Text_0
VARROCK_GYM_PRAYER_2_1:
# 547 "data/maps/Varrock_Palace_1F/scripts.pory"
	closemessage
# 548 "data/maps/Varrock_Palace_1F/scripts.pory"
	hidenamebox
# 549 "data/maps/Varrock_Palace_1F/scripts.pory"
	release
	end

VARROCK_GYM_PRAYER_2_2:
# 541 "data/maps/Varrock_Palace_1F/scripts.pory"
	msgbox VARROCK_GYM_PRAYER_2_Text_0
	goto VARROCK_GYM_PRAYER_2_1


VARROCK_GYM_PRAYER_3::
# 554 "data/maps/Varrock_Palace_1F/scripts.pory"
	lock
# 555 "data/maps/Varrock_Palace_1F/scripts.pory"
	faceplayer
# 556 "data/maps/Varrock_Palace_1F/scripts.pory"
	compare VAR_POKESCAPE_VARROCK_GYM_QUEST, 10
	goto_if_eq VARROCK_GYM_PRAYER_3_2
# 562 "data/maps/Varrock_Palace_1F/scripts.pory"
	msgbox VARROCK_GYM_PRAYER_3_Text_1
VARROCK_GYM_PRAYER_3_1:
# 564 "data/maps/Varrock_Palace_1F/scripts.pory"
	closemessage
# 565 "data/maps/Varrock_Palace_1F/scripts.pory"
	hidenamebox
# 566 "data/maps/Varrock_Palace_1F/scripts.pory"
	release
	end

VARROCK_GYM_PRAYER_3_2:
# 558 "data/maps/Varrock_Palace_1F/scripts.pory"
	msgbox VARROCK_GYM_PRAYER_3_Text_0
	goto VARROCK_GYM_PRAYER_3_1


VARROCK_GYM_PRAYER_4::
# 571 "data/maps/Varrock_Palace_1F/scripts.pory"
	lock
# 572 "data/maps/Varrock_Palace_1F/scripts.pory"
	faceplayer
# 573 "data/maps/Varrock_Palace_1F/scripts.pory"
	namebox VARROCK_GYM_BOOK_3_Text_0
# 574 "data/maps/Varrock_Palace_1F/scripts.pory"
	compare VAR_POKESCAPE_VARROCK_GYM_QUEST, 10
	goto_if_eq VARROCK_GYM_PRAYER_4_2
# 580 "data/maps/Varrock_Palace_1F/scripts.pory"
	msgbox VARROCK_GYM_PRAYER_4_Text_1
VARROCK_GYM_PRAYER_4_1:
# 582 "data/maps/Varrock_Palace_1F/scripts.pory"
	closemessage
# 583 "data/maps/Varrock_Palace_1F/scripts.pory"
	hidenamebox
# 584 "data/maps/Varrock_Palace_1F/scripts.pory"
	release
	end

VARROCK_GYM_PRAYER_4_2:
# 576 "data/maps/Varrock_Palace_1F/scripts.pory"
	msgbox VARROCK_GYM_PRAYER_4_Text_0
	goto VARROCK_GYM_PRAYER_4_1


VARROCK_GYM_DRUID::
# 589 "data/maps/Varrock_Palace_1F/scripts.pory"
	lock
# 590 "data/maps/Varrock_Palace_1F/scripts.pory"
	faceplayer
# 591 "data/maps/Varrock_Palace_1F/scripts.pory"
	compare VAR_POKESCAPE_VARROCK_GYM_QUEST, 10
	goto_if_eq VARROCK_GYM_DRUID_2
# 597 "data/maps/Varrock_Palace_1F/scripts.pory"
	msgbox VARROCK_GYM_BOOK_3_Text_2
VARROCK_GYM_DRUID_1:
# 599 "data/maps/Varrock_Palace_1F/scripts.pory"
	closemessage
# 600 "data/maps/Varrock_Palace_1F/scripts.pory"
	hidenamebox
# 601 "data/maps/Varrock_Palace_1F/scripts.pory"
	release
	end

VARROCK_GYM_DRUID_2:
# 593 "data/maps/Varrock_Palace_1F/scripts.pory"
	msgbox VARROCK_GYM_DRUID_Text_0
	goto VARROCK_GYM_DRUID_1


VARROCK_GYM_GNOME::
# 606 "data/maps/Varrock_Palace_1F/scripts.pory"
	lock
# 607 "data/maps/Varrock_Palace_1F/scripts.pory"
	faceplayer
# 608 "data/maps/Varrock_Palace_1F/scripts.pory"
	compare VAR_POKESCAPE_VARROCK_GYM_QUEST, 10
	goto_if_eq VARROCK_GYM_GNOME_2
# 614 "data/maps/Varrock_Palace_1F/scripts.pory"
	msgbox VARROCK_GYM_BOOK_3_Text_2
VARROCK_GYM_GNOME_1:
# 616 "data/maps/Varrock_Palace_1F/scripts.pory"
	closemessage
# 617 "data/maps/Varrock_Palace_1F/scripts.pory"
	hidenamebox
# 618 "data/maps/Varrock_Palace_1F/scripts.pory"
	release
	end

VARROCK_GYM_GNOME_2:
# 610 "data/maps/Varrock_Palace_1F/scripts.pory"
	msgbox VARROCK_GYM_GNOME_Text_0
	goto VARROCK_GYM_GNOME_1


VARROCK_GYM_GUARD_BLOCKING::
# 623 "data/maps/Varrock_Palace_1F/scripts.pory"
	lock
# 624 "data/maps/Varrock_Palace_1F/scripts.pory"
	faceplayer
# 625 "data/maps/Varrock_Palace_1F/scripts.pory"
	msgbox VARROCK_GYM_GUARD_BLOCKING_Text_0
# 626 "data/maps/Varrock_Palace_1F/scripts.pory"
	closemessage
# 627 "data/maps/Varrock_Palace_1F/scripts.pory"
	hidenamebox
# 628 "data/maps/Varrock_Palace_1F/scripts.pory"
	release
	end


VARROCK_GYM_GUARD_6::
# 633 "data/maps/Varrock_Palace_1F/scripts.pory"
	lock
# 634 "data/maps/Varrock_Palace_1F/scripts.pory"
	faceplayer
# 635 "data/maps/Varrock_Palace_1F/scripts.pory"
	msgbox VARROCK_GYM_GUARD_6_Text_0
# 636 "data/maps/Varrock_Palace_1F/scripts.pory"
	closemessage
# 637 "data/maps/Varrock_Palace_1F/scripts.pory"
	hidenamebox
# 638 "data/maps/Varrock_Palace_1F/scripts.pory"
	release
	end


BATTLE_VARROCK_GYM_TRAINER_1::
# 651 "data/maps/Varrock_Palace_1F/scripts.pory"
	trainerbattle_single TRAINER_VARROCK_GYM_1, BATTLE_VARROCK_GYM_TRAINER_1_Text_0, BATTLE_VARROCK_GYM_TRAINER_1_Text_1
# 652 "data/maps/Varrock_Palace_1F/scripts.pory"
	switch VAR_POKESCAPE_VARROCK_GYM_QUEST
# 653 "data/maps/Varrock_Palace_1F/scripts.pory"
	case 0, BATTLE_VARROCK_GYM_TRAINER_1_2
# 654 "data/maps/Varrock_Palace_1F/scripts.pory"
	case 5, BATTLE_VARROCK_GYM_TRAINER_1_2
# 662 "data/maps/Varrock_Palace_1F/scripts.pory"
	case 10, BATTLE_VARROCK_GYM_TRAINER_1_3
# 663 "data/maps/Varrock_Palace_1F/scripts.pory"
	case 15, BATTLE_VARROCK_GYM_TRAINER_1_3
# 664 "data/maps/Varrock_Palace_1F/scripts.pory"
	case 20, BATTLE_VARROCK_GYM_TRAINER_1_3
# 665 "data/maps/Varrock_Palace_1F/scripts.pory"
	case 25, BATTLE_VARROCK_GYM_TRAINER_1_3
# 666 "data/maps/Varrock_Palace_1F/scripts.pory"
	case 26, BATTLE_VARROCK_GYM_TRAINER_1_3
	return

BATTLE_VARROCK_GYM_TRAINER_1_2:
# 655 "data/maps/Varrock_Palace_1F/scripts.pory"
	lock
# 656 "data/maps/Varrock_Palace_1F/scripts.pory"
	faceplayer
# 657 "data/maps/Varrock_Palace_1F/scripts.pory"
	namebox BATTLE_VARROCK_GYM_TRAINER_1_Text_2
# 658 "data/maps/Varrock_Palace_1F/scripts.pory"
	msgbox BATTLE_VARROCK_GYM_TRAINER_1_Text_3
# 659 "data/maps/Varrock_Palace_1F/scripts.pory"
	hidenamebox
# 660 "data/maps/Varrock_Palace_1F/scripts.pory"
	release
	end

BATTLE_VARROCK_GYM_TRAINER_1_3:
# 667 "data/maps/Varrock_Palace_1F/scripts.pory"
	lock
# 668 "data/maps/Varrock_Palace_1F/scripts.pory"
	faceplayer
# 669 "data/maps/Varrock_Palace_1F/scripts.pory"
	namebox BATTLE_VARROCK_GYM_TRAINER_1_Text_2
# 670 "data/maps/Varrock_Palace_1F/scripts.pory"
	msgbox BATTLE_VARROCK_GYM_TRAINER_1_Text_4
# 671 "data/maps/Varrock_Palace_1F/scripts.pory"
	hidenamebox
# 672 "data/maps/Varrock_Palace_1F/scripts.pory"
	release
	end


BATTLE_VARROCK_GYM_TRAINER_2::
# 679 "data/maps/Varrock_Palace_1F/scripts.pory"
	trainerbattle_single TRAINER_VARROCK_GYM_2, BATTLE_VARROCK_GYM_TRAINER_2_Text_0, BATTLE_VARROCK_GYM_TRAINER_2_Text_1
# 680 "data/maps/Varrock_Palace_1F/scripts.pory"
	switch VAR_POKESCAPE_VARROCK_GYM_QUEST
# 681 "data/maps/Varrock_Palace_1F/scripts.pory"
	case 0, BATTLE_VARROCK_GYM_TRAINER_2_2
# 682 "data/maps/Varrock_Palace_1F/scripts.pory"
	case 5, BATTLE_VARROCK_GYM_TRAINER_2_2
# 690 "data/maps/Varrock_Palace_1F/scripts.pory"
	case 10, BATTLE_VARROCK_GYM_TRAINER_2_3
# 698 "data/maps/Varrock_Palace_1F/scripts.pory"
	case 15, BATTLE_VARROCK_GYM_TRAINER_2_4
# 699 "data/maps/Varrock_Palace_1F/scripts.pory"
	case 20, BATTLE_VARROCK_GYM_TRAINER_2_4
# 700 "data/maps/Varrock_Palace_1F/scripts.pory"
	case 25, BATTLE_VARROCK_GYM_TRAINER_2_4
# 701 "data/maps/Varrock_Palace_1F/scripts.pory"
	case 26, BATTLE_VARROCK_GYM_TRAINER_2_4
	return

BATTLE_VARROCK_GYM_TRAINER_2_2:
# 683 "data/maps/Varrock_Palace_1F/scripts.pory"
	lock
# 684 "data/maps/Varrock_Palace_1F/scripts.pory"
	faceplayer
# 685 "data/maps/Varrock_Palace_1F/scripts.pory"
	namebox BATTLE_VARROCK_GYM_TRAINER_1_Text_2
# 686 "data/maps/Varrock_Palace_1F/scripts.pory"
	msgbox BATTLE_VARROCK_GYM_TRAINER_2_Text_2
# 687 "data/maps/Varrock_Palace_1F/scripts.pory"
	hidenamebox
# 688 "data/maps/Varrock_Palace_1F/scripts.pory"
	release
	end

BATTLE_VARROCK_GYM_TRAINER_2_3:
# 691 "data/maps/Varrock_Palace_1F/scripts.pory"
	lock
# 692 "data/maps/Varrock_Palace_1F/scripts.pory"
	faceplayer
# 693 "data/maps/Varrock_Palace_1F/scripts.pory"
	namebox BATTLE_VARROCK_GYM_TRAINER_1_Text_2
# 694 "data/maps/Varrock_Palace_1F/scripts.pory"
	msgbox BATTLE_VARROCK_GYM_TRAINER_2_Text_3
# 695 "data/maps/Varrock_Palace_1F/scripts.pory"
	hidenamebox
# 696 "data/maps/Varrock_Palace_1F/scripts.pory"
	release
	end

BATTLE_VARROCK_GYM_TRAINER_2_4:
# 702 "data/maps/Varrock_Palace_1F/scripts.pory"
	lock
# 703 "data/maps/Varrock_Palace_1F/scripts.pory"
	faceplayer
# 704 "data/maps/Varrock_Palace_1F/scripts.pory"
	namebox BATTLE_VARROCK_GYM_TRAINER_1_Text_2
# 705 "data/maps/Varrock_Palace_1F/scripts.pory"
	msgbox BATTLE_VARROCK_GYM_TRAINER_2_Text_4
# 706 "data/maps/Varrock_Palace_1F/scripts.pory"
	hidenamebox
# 707 "data/maps/Varrock_Palace_1F/scripts.pory"
	release
	end


BATTLE_VARROCK_GYM_TRAINER_3::
# 714 "data/maps/Varrock_Palace_1F/scripts.pory"
	trainerbattle_single TRAINER_VARROCK_GYM_3, BATTLE_VARROCK_GYM_TRAINER_3_Text_0, BATTLE_VARROCK_GYM_TRAINER_3_Text_1
# 715 "data/maps/Varrock_Palace_1F/scripts.pory"
	switch VAR_POKESCAPE_VARROCK_GYM_QUEST
# 716 "data/maps/Varrock_Palace_1F/scripts.pory"
	case 0, BATTLE_VARROCK_GYM_TRAINER_3_2
# 717 "data/maps/Varrock_Palace_1F/scripts.pory"
	case 5, BATTLE_VARROCK_GYM_TRAINER_3_2
# 725 "data/maps/Varrock_Palace_1F/scripts.pory"
	case 10, BATTLE_VARROCK_GYM_TRAINER_3_3
# 733 "data/maps/Varrock_Palace_1F/scripts.pory"
	case 15, BATTLE_VARROCK_GYM_TRAINER_3_4
# 734 "data/maps/Varrock_Palace_1F/scripts.pory"
	case 20, BATTLE_VARROCK_GYM_TRAINER_3_4
# 735 "data/maps/Varrock_Palace_1F/scripts.pory"
	case 25, BATTLE_VARROCK_GYM_TRAINER_3_4
# 736 "data/maps/Varrock_Palace_1F/scripts.pory"
	case 26, BATTLE_VARROCK_GYM_TRAINER_3_4
	return

BATTLE_VARROCK_GYM_TRAINER_3_2:
# 718 "data/maps/Varrock_Palace_1F/scripts.pory"
	lock
# 719 "data/maps/Varrock_Palace_1F/scripts.pory"
	faceplayer
# 720 "data/maps/Varrock_Palace_1F/scripts.pory"
	namebox BATTLE_VARROCK_GYM_TRAINER_1_Text_2
# 721 "data/maps/Varrock_Palace_1F/scripts.pory"
	msgbox BATTLE_VARROCK_GYM_TRAINER_3_Text_2
# 722 "data/maps/Varrock_Palace_1F/scripts.pory"
	hidenamebox
# 723 "data/maps/Varrock_Palace_1F/scripts.pory"
	release
	end

BATTLE_VARROCK_GYM_TRAINER_3_3:
# 726 "data/maps/Varrock_Palace_1F/scripts.pory"
	lock
# 727 "data/maps/Varrock_Palace_1F/scripts.pory"
	faceplayer
# 728 "data/maps/Varrock_Palace_1F/scripts.pory"
	namebox BATTLE_VARROCK_GYM_TRAINER_1_Text_2
# 729 "data/maps/Varrock_Palace_1F/scripts.pory"
	msgbox BATTLE_VARROCK_GYM_TRAINER_3_Text_3
# 730 "data/maps/Varrock_Palace_1F/scripts.pory"
	hidenamebox
# 731 "data/maps/Varrock_Palace_1F/scripts.pory"
	release
	end

BATTLE_VARROCK_GYM_TRAINER_3_4:
# 737 "data/maps/Varrock_Palace_1F/scripts.pory"
	lock
# 738 "data/maps/Varrock_Palace_1F/scripts.pory"
	faceplayer
# 739 "data/maps/Varrock_Palace_1F/scripts.pory"
	namebox BATTLE_VARROCK_GYM_TRAINER_1_Text_2
# 740 "data/maps/Varrock_Palace_1F/scripts.pory"
	msgbox BATTLE_VARROCK_GYM_TRAINER_3_Text_2
# 741 "data/maps/Varrock_Palace_1F/scripts.pory"
	hidenamebox
# 742 "data/maps/Varrock_Palace_1F/scripts.pory"
	release
	end


VARROCK_GYM_KINGROALD::
# 765 "data/maps/Varrock_Palace_1F/scripts.pory"
	lock
# 766 "data/maps/Varrock_Palace_1F/scripts.pory"
	faceplayer
# 767 "data/maps/Varrock_Palace_1F/scripts.pory"
	namebox VARROCK_GYM_KINGROALD_Text_0
# 768 "data/maps/Varrock_Palace_1F/scripts.pory"
	goto_if_unset FLAG_BADGE03_GET, VARROCK_GYM_KINGROALD_2
# 798 "data/maps/Varrock_Palace_1F/scripts.pory"
	goto_if_set FLAG_BADGE04_GET, VARROCK_GYM_KINGROALD_5
# 803 "data/maps/Varrock_Palace_1F/scripts.pory"
	msgbox VARROCK_GYM_KINGROALD_Text_8
VARROCK_GYM_KINGROALD_4:
# 805 "data/maps/Varrock_Palace_1F/scripts.pory"
	hidenamebox
# 806 "data/maps/Varrock_Palace_1F/scripts.pory"
	release
	end

VARROCK_GYM_KINGROALD_2:
# 770 "data/maps/Varrock_Palace_1F/scripts.pory"
	msgbox VARROCK_GYM_KINGROALD_Text_1
# 771 "data/maps/Varrock_Palace_1F/scripts.pory"
	hidenamebox
# 772 "data/maps/Varrock_Palace_1F/scripts.pory"
	trainerbattle_no_intro TRAINER_VARROCK_GYM_KINGROALD, VARROCK_GYM_KINGROALD_Text_2
# 773 "data/maps/Varrock_Palace_1F/scripts.pory"
	namebox VARROCK_GYM_KINGROALD_Text_0
# 774 "data/maps/Varrock_Palace_1F/scripts.pory"
	msgbox VARROCK_GYM_KINGROALD_Text_3
# 775 "data/maps/Varrock_Palace_1F/scripts.pory"
	hidenamebox
# 776 "data/maps/Varrock_Palace_1F/scripts.pory"
	playfanfare MUS_PS_QUEST_COMPLETE
# 777 "data/maps/Varrock_Palace_1F/scripts.pory"
	msgbox VARROCK_GYM_KINGROALD_Text_4
# 778 "data/maps/Varrock_Palace_1F/scripts.pory"
	waitfanfare
# 779 "data/maps/Varrock_Palace_1F/scripts.pory"
	waitmessage
# 780 "data/maps/Varrock_Palace_1F/scripts.pory"
	namebox VARROCK_GYM_KINGROALD_Text_0
# 781 "data/maps/Varrock_Palace_1F/scripts.pory"
	msgbox VARROCK_GYM_KINGROALD_Text_5
# 782 "data/maps/Varrock_Palace_1F/scripts.pory"
	hidenamebox
# 783 "data/maps/Varrock_Palace_1F/scripts.pory"
	giveitem ITEM_TM20, 1
# 784 "data/maps/Varrock_Palace_1F/scripts.pory"
	compare VAR_RESULT, FALSE
# 785 "data/maps/Varrock_Palace_1F/scripts.pory"
	goto_if_eq Common_EventScript_ShowBagIsFull
# 786 "data/maps/Varrock_Palace_1F/scripts.pory"
	playbgm MUS_PS_VARROCK, 0
# 787 "data/maps/Varrock_Palace_1F/scripts.pory"
	savebgm MUS_PS_VARROCK
# 788 "data/maps/Varrock_Palace_1F/scripts.pory"
	namebox VARROCK_GYM_KINGROALD_Text_0
# 789 "data/maps/Varrock_Palace_1F/scripts.pory"
	msgbox VARROCK_GYM_KINGROALD_Text_6
# 790 "data/maps/Varrock_Palace_1F/scripts.pory"
	setvar VAR_POKESCAPE_VARROCK_GYM_QUEST, 26
# 791 "data/maps/Varrock_Palace_1F/scripts.pory"
	setflag FLAG_BADGE03_GET
# 792 "data/maps/Varrock_Palace_1F/scripts.pory"
	addvar VAR_GAMEMODE_LEVEL_SCALING, 1
# 793 "data/maps/Varrock_Palace_1F/scripts.pory"
	call SetGymTrainers_VARROCK
# 794 "data/maps/Varrock_Palace_1F/scripts.pory"
	hidenamebox
# 795 "data/maps/Varrock_Palace_1F/scripts.pory"
	release
	end

VARROCK_GYM_KINGROALD_5:
# 799 "data/maps/Varrock_Palace_1F/scripts.pory"
	msgbox VARROCK_GYM_KINGROALD_Text_7
	goto VARROCK_GYM_KINGROALD_4


SetGymTrainers_VARROCK::
# 813 "data/maps/Varrock_Palace_1F/scripts.pory"
	settrainerflag TRAINER_VARROCK_GYM_1
# 814 "data/maps/Varrock_Palace_1F/scripts.pory"
	settrainerflag TRAINER_VARROCK_GYM_2
# 815 "data/maps/Varrock_Palace_1F/scripts.pory"
	settrainerflag TRAINER_VARROCK_GYM_3
# 816 "data/maps/Varrock_Palace_1F/scripts.pory"
	settrainerflag TRAINER_VARROCK_GYM_4
	return


ClearGymTrainers_VARROCK::
# 820 "data/maps/Varrock_Palace_1F/scripts.pory"
	cleartrainerflag TRAINER_VARROCK_GYM_1
# 821 "data/maps/Varrock_Palace_1F/scripts.pory"
	cleartrainerflag TRAINER_VARROCK_GYM_2
# 822 "data/maps/Varrock_Palace_1F/scripts.pory"
	cleartrainerflag TRAINER_VARROCK_GYM_3
# 823 "data/maps/Varrock_Palace_1F/scripts.pory"
	cleartrainerflag TRAINER_VARROCK_GYM_4
	return


QUEST_VARROCK_GYM_1_Text_0:
# 129 "data/maps/Varrock_Palace_1F/scripts.pory"
	.string "Advisor$"

QUEST_VARROCK_GYM_1_Text_1:
# 130 "data/maps/Varrock_Palace_1F/scripts.pory"
	.string "Greetings, are you here for an MvM Championship challenge?$"

QUEST_VARROCK_GYM_1_Text_2:
# 133 "data/maps/Varrock_Palace_1F/scripts.pory"
	.string "Well I am very sorry but the King is quite busy today.\p"
	.string "You will have to see him another day.$"

QUEST_VARROCK_GYM_1_Text_3:
# 138 "data/maps/Varrock_Palace_1F/scripts.pory"
	.string "Excellent!\p"
	.string "Before you may challenge King Roald you must complete our Gym Challenge.\p"
	.string "You can start it by speaking to Reldo located within our Library.$"

QUEST_VARROCK_GYM_2_Text_0:
# 148 "data/maps/Varrock_Palace_1F/scripts.pory"
	.string "Good luck with your Gym Challenge!\p"
	.string "You can find Reldo in our Library.$"

QUEST_VARROCK_GYM_3_Text_0:
# 156 "data/maps/Varrock_Palace_1F/scripts.pory"
	.string "What's this?\p"
	.string "A note from Reldo you say?\p"
	.string "Hmm…{PAUSE 15}…{PAUSE 15} Ah yes.\p"
	.string "Congratulations are in order, you may now pass see the King.$"

QUEST_VARROCK_GYM_4_Text_0:
# 165 "data/maps/Varrock_Palace_1F/scripts.pory"
	.string "Good luck with your Gym Challenge!$"

QUEST_VARROCK_GYM_5_Text_0:
# 173 "data/maps/Varrock_Palace_1F/scripts.pory"
	.string "Amazing, I didn't think anyone could put a smile on his face!$"

VARROCK_GYM_RELDO_Text_0:
# 187 "data/maps/Varrock_Palace_1F/scripts.pory"
	.string "Reldo$"

VARROCK_GYM_RELDO_Text_1:
# 188 "data/maps/Varrock_Palace_1F/scripts.pory"
	.string "Welcome to the Library of Varrock.$"

VARROCK_GYM_RELDO_Text_2:
# 193 "data/maps/Varrock_Palace_1F/scripts.pory"
	.string "Oh are you perhaps here for your the Gym Challenge?\p"
	.string "Oh you are?\p"
	.string "Here are a list of books that are overdu-\p"
	.string "I mean, I need you to search all around the castle and find these 4 specific books.\p"
	.string "Once you have found them all return back here and your challenge will be complete.$"

VARROCK_GYM_RELDO_Text_3:
# 199 "data/maps/Varrock_Palace_1F/scripts.pory"
	.string "If you are having trouble finding the 4 books then try asking people or searching the bookshelves around the castle.$"

VARROCK_GYM_RELDO_Text_4:
# 203 "data/maps/Varrock_Palace_1F/scripts.pory"
	.string "Good luck on your Gym Challenge.$"

VARROCK_GYM_RELDO_Text_5:
# 207 "data/maps/Varrock_Palace_1F/scripts.pory"
	.string "You found all of the books that were overdu-!\p"
	.string "Ahem, Congratulations on completing your Gym Challenge!\p"
	.string "Here show this to the Advisor as proof of your accomplishments.$"

VARROCK_GYM_RELDO_Text_6:
# 209 "data/maps/Varrock_Palace_1F/scripts.pory"
	.string "Reldo scribbles on a small peice of paper before handing it to you.$"

VARROCK_GYM_RELDO_Text_7:
# 211 "data/maps/Varrock_Palace_1F/scripts.pory"
	.string "Good luck challenger!$"

VARROCK_GYM_RELDO_Text_8:
# 216 "data/maps/Varrock_Palace_1F/scripts.pory"
	.string "Congratulations on winning the MvM battle against King Roald!.$"

VARROCK_GYM_RELDO_Text_9:
# 221 "data/maps/Varrock_Palace_1F/scripts.pory"
	.string "We have so many books about so many things.\p"
	.string "If you have a question about something don't be afraid to ask me.$"

VARROCK_GYM_GENERIC_BOOK_Text_0:
# 235 "data/maps/Varrock_Palace_1F/scripts.pory"
	.string "This book is filled with so many words that it gives you a headache.$"

VARROCK_GYM_GENERIC_BOOK_Text_1:
# 237 "data/maps/Varrock_Palace_1F/scripts.pory"
	.string "It is a picture book!\p"
	.string "This is your type of book!$"

VARROCK_GYM_GENERIC_BOOK_Text_2:
# 239 "data/maps/Varrock_Palace_1F/scripts.pory"
	.string "It is an extremely big and thick book, titled RSWiki.\p"
	.string "It seems like a lot of love and dedication went into this.$"

VARROCK_GYM_GENERIC_BOOK_Text_3:
# 241 "data/maps/Varrock_Palace_1F/scripts.pory"
	.string "This is book looks interesting to read.$"

VARROCK_GYM_GENERIC_BOOK_Text_4:
# 243 "data/maps/Varrock_Palace_1F/scripts.pory"
	.string "It is a magazine!\p"
	.string "It appears to be an image of a very beautiful strong looking woman crushing a Turoth between her thighs.\p"
	.string "The text reads…\p"
	.string "The truth behind Neive the Slayer Master.$"

VARROCK_GYM_GENERIC_BOOK_Text_5:
# 247 "data/maps/Varrock_Palace_1F/scripts.pory"
	.string "But sadly this book isn't on the list of books you are looking for.$"

VARROCK_GYM_BOOK_1_Text_0:
# 259 "data/maps/Varrock_Palace_1F/scripts.pory"
	.string "The title reads…\p"
	.string "How to train your Frogeel.$"

VARROCK_GYM_BOOK_1_Text_1:
# 260 "data/maps/Varrock_Palace_1F/scripts.pory"
	.string "This is one of the books you are looking for!\p"
	.string "You put the book in your bag.$"

VARROCK_GYM_BOOK_1_Text_2:
# 266 "data/maps/Varrock_Palace_1F/scripts.pory"
	.string "The bookshelf is empty.$"

VARROCK_GYM_BOOK_2_Text_0:
# 277 "data/maps/Varrock_Palace_1F/scripts.pory"
	.string "You search through the pile of books…{PAUSE 15}…{PAUSE 15}…$"

VARROCK_GYM_BOOK_2_Text_1:
# 278 "data/maps/Varrock_Palace_1F/scripts.pory"
	.string "After rummaging through the pile of sticky books you finally find one that are looking for!\p"
	.string "The title reads…{PAUSE 15}…{PAUSE 15} One Small favour.\p"
	.string "How fitting.\p"
	.string "You put the book in your bag.$"

VARROCK_GYM_BOOK_2_Text_2:
# 284 "data/maps/Varrock_Palace_1F/scripts.pory"
	.string "It is a pile of messy, sticky books.$"

VARROCK_GYM_BOOK_3_Text_0:
# 300 "data/maps/Varrock_Palace_1F/scripts.pory"
	.string "Priest$"

VARROCK_GYM_BOOK_3_Text_1:
# 301 "data/maps/Varrock_Palace_1F/scripts.pory"
	.string "How rude of you!\p"
	.string "We are in the middle of Prayer and you think now is a good time to make a noise rummaging through the bookshelf?!\p"
	.string "I'll teach you to interupt our time of worship!$"

VARROCK_GYM_BOOK_3_Text_2:
# 303 "data/maps/Varrock_Palace_1F/scripts.pory"
	.string "…$"

VARROCK_GYM_BOOK_3_Text_3:
# 305 "data/maps/Varrock_Palace_1F/scripts.pory"
	.string "Just hurry up and find the book you are looking for then get out.$"

VARROCK_GYM_BOOK_3_Text_4:
# 315 "data/maps/Varrock_Palace_1F/scripts.pory"
	.string "You search the bookcase…{PAUSE 15}…\p"
	.string "You find a book!\n"
	.string "The title reads…\p"
	.string "Mourning's End Part VII.\p"
	.string "A sudden chill rushes over you as you realise the volume number of the book.$"

VARROCK_GYM_BOOK_4_Text_0:
# 333 "data/maps/Varrock_Palace_1F/scripts.pory"
	.string "You find a book!\p"
	.string "The title reads…\p"
	.string "MvM for dummies.$"

VARROCK_GYM_BOOK_CHECK_Text_0:
# 364 "data/maps/Varrock_Palace_1F/scripts.pory"
	.string "That is the last book.\p"
	.string "You should return to Reldo.$"

VARROCK_GYM_SIR_PRYSIN_Text_0:
# 376 "data/maps/Varrock_Palace_1F/scripts.pory"
	.string "Sir Prysin$"

VARROCK_GYM_SIR_PRYSIN_Text_1:
# 379 "data/maps/Varrock_Palace_1F/scripts.pory"
	.string "Hmm…?\p"
	.string "You are curious about what book I am reading?\p"
	.string "It is called Shadow Of The Storm.$"

VARROCK_GYM_SIR_PRYSIN_Text_2:
# 381 "data/maps/Varrock_Palace_1F/scripts.pory"
	.string "Sadly this book isn't on the list of books you are looking for.$"

VARROCK_GYM_SIR_PRYSIN_Text_3:
# 385 "data/maps/Varrock_Palace_1F/scripts.pory"
	.string "My great-grandfather once slayed the Demon known as Delrith.\p"
	.string "Now I get to live the good life here in the castle.$"

VARROCK_GYM_RANGER_Text_0:
# 400 "data/maps/Varrock_Palace_1F/scripts.pory"
	.string "What am I reading you ask?\p"
	.string "Don't judge but I am reading a murder mystery, this one is called Misthalin Mystery.\p"
	.string "I just really like these sort of stories.$"

VARROCK_GYM_RANGER_Text_1:
# 406 "data/maps/Varrock_Palace_1F/scripts.pory"
	.string "After reading about what happened with Lord Sinclair in Kandarin, I've been intrigued by these murder mystery books.$"

VARROCK_GYM_QUESTER_Text_0:
# 420 "data/maps/Varrock_Palace_1F/scripts.pory"
	.string "Buzz off!\p"
	.string "I've got a quest to research.$"

VARROCK_GYM_GUARD_1_Text_0:
# 438 "data/maps/Varrock_Palace_1F/scripts.pory"
	.string "Oh, you are trying to return the overdue books to the libary?\p"
	.string "I think there is one in the pile of books in our sleeping quarters.$"

VARROCK_GYM_GUARD_1_Text_1:
# 442 "data/maps/Varrock_Palace_1F/scripts.pory"
	.string "Welcome to Varrock Castle.$"

VARROCK_GYM_GUARD_2_Text_0:
# 456 "data/maps/Varrock_Palace_1F/scripts.pory"
	.string "I swear Reldo is such a bookworm.$"

VARROCK_GYM_GUARD_3_Text_0:
# 473 "data/maps/Varrock_Palace_1F/scripts.pory"
	.string "Overdue Books?\p"
	.string "Well don't ask me, I don't even read.$"

VARROCK_GYM_GUARD_4_Text_0:
# 490 "data/maps/Varrock_Palace_1F/scripts.pory"
	.string "Eww you read books?\p"
	.string "Yuck.\p"
	.string "I just look at all the pretty pictures.$"

VARROCK_GYM_GUARD_5_Text_0:
# 507 "data/maps/Varrock_Palace_1F/scripts.pory"
	.string "I hope Rex didn't eat one of those books you are looking for.\p"
	.string "He once ate my application to become a Knight of Falador so I had to settle with a becoming a Guard of Varrock instead.$"

VARROCK_GYM_PRAYER_1_Text_0:
# 524 "data/maps/Varrock_Palace_1F/scripts.pory"
	.string "……\p"
	.string "Shh!$"

VARROCK_GYM_PRAYER_2_Text_0:
# 541 "data/maps/Varrock_Palace_1F/scripts.pory"
	.string "Please don't bother us while we are Praying.$"

VARROCK_GYM_PRAYER_3_Text_0:
# 558 "data/maps/Varrock_Palace_1F/scripts.pory"
	.string "……{PAUSE 15}……\p"
	.string "Huh what?!\p"
	.string "I wasn't sleeping I swear!\p"
	.string "Oh a book?\p"
	.string "I think there is one in the bookshelf in the corner.$"

VARROCK_GYM_PRAYER_3_Text_1:
# 562 "data/maps/Varrock_Palace_1F/scripts.pory"
	.string "…{PAUSE 15} Zzz… {PAUSE 15} Zzz…\p"
	.string "He is fast asleep.$"

VARROCK_GYM_PRAYER_4_Text_0:
# 576 "data/maps/Varrock_Palace_1F/scripts.pory"
	.string "You are being very annoying.\p"
	.string "Can you please leave, we are in the middle of Prayer.$"

VARROCK_GYM_PRAYER_4_Text_1:
# 580 "data/maps/Varrock_Palace_1F/scripts.pory"
	.string "Can you please leave, we are in the middle of Prayer.$"

VARROCK_GYM_DRUID_Text_0:
# 593 "data/maps/Varrock_Palace_1F/scripts.pory"
	.string "An overdue book?\p"
	.string "I believe there is one in my room downstairs.$"

VARROCK_GYM_GNOME_Text_0:
# 610 "data/maps/Varrock_Palace_1F/scripts.pory"
	.string "You are looking for Books?\p"
	.string "Have you tried looking in the bookshelves?$"

VARROCK_GYM_GUARD_BLOCKING_Text_0:
# 625 "data/maps/Varrock_Palace_1F/scripts.pory"
	.string "Sorry but beyond here is off limits to the public.$"

VARROCK_GYM_GUARD_6_Text_0:
# 635 "data/maps/Varrock_Palace_1F/scripts.pory"
	.string "This castle is no where near as confusing as the Falador Castle, I am greatful for that.$"

BATTLE_VARROCK_GYM_TRAINER_1_Text_0:
# 651 "data/maps/Varrock_Palace_1F/scripts.pory"
	.string "Hey you!\n"
	.string "Do not trespass!$"

BATTLE_VARROCK_GYM_TRAINER_1_Text_1:
# 651 "data/maps/Varrock_Palace_1F/scripts.pory"
	.string "Consider that a warning!$"

BATTLE_VARROCK_GYM_TRAINER_1_Text_2:
# 657 "data/maps/Varrock_Palace_1F/scripts.pory"
	.string "Guard$"

BATTLE_VARROCK_GYM_TRAINER_1_Text_3:
# 658 "data/maps/Varrock_Palace_1F/scripts.pory"
	.string "Welcome to Varrock Castle!$"

BATTLE_VARROCK_GYM_TRAINER_1_Text_4:
# 670 "data/maps/Varrock_Palace_1F/scripts.pory"
	.string "Do not trespass around the Castle unsupervised.$"

BATTLE_VARROCK_GYM_TRAINER_2_Text_0:
# 679 "data/maps/Varrock_Palace_1F/scripts.pory"
	.string "You look shady.\p"
	.string "Get out of the sleeping quaters!$"

BATTLE_VARROCK_GYM_TRAINER_2_Text_1:
# 679 "data/maps/Varrock_Palace_1F/scripts.pory"
	.string "You may pass shady person.$"

BATTLE_VARROCK_GYM_TRAINER_2_Text_2:
# 686 "data/maps/Varrock_Palace_1F/scripts.pory"
	.string "Hello shady looking person.$"

BATTLE_VARROCK_GYM_TRAINER_2_Text_3:
# 694 "data/maps/Varrock_Palace_1F/scripts.pory"
	.string "Oh you were looking for a book?\p"
	.string "Well good luck there are lots of books in this castle.$"

BATTLE_VARROCK_GYM_TRAINER_2_Text_4:
# 705 "data/maps/Varrock_Palace_1F/scripts.pory"
	.string "Hello again shady looking person.$"

BATTLE_VARROCK_GYM_TRAINER_3_Text_0:
# 714 "data/maps/Varrock_Palace_1F/scripts.pory"
	.string "The king said he did not want visitors today.$"

BATTLE_VARROCK_GYM_TRAINER_3_Text_1:
# 714 "data/maps/Varrock_Palace_1F/scripts.pory"
	.string "You do not care what the king wants at all, do you?$"

BATTLE_VARROCK_GYM_TRAINER_3_Text_2:
# 721 "data/maps/Varrock_Palace_1F/scripts.pory"
	.string "The king said he did not want visitors today.\p"
	.string "You do not care what the king wants at all, do you?$"

BATTLE_VARROCK_GYM_TRAINER_3_Text_3:
# 729 "data/maps/Varrock_Palace_1F/scripts.pory"
	.string "You are an MvM challenger?\p"
	.string "Well tough, the king said he did not want visitors today.$"

VARROCK_GYM_KINGROALD_Text_0:
# 767 "data/maps/Varrock_Palace_1F/scripts.pory"
	.string "King Roald$"

VARROCK_GYM_KINGROALD_Text_1:
# 770 "data/maps/Varrock_Palace_1F/scripts.pory"
	.string "Oh what is it now?\p"
	.string "Who are you?\n"
	.string "What do you want?\p"
	.string "Can you not see I am busy?\p"
	.string "…{PAUSE 15}…{PAUSE 15}…{PAUSE 15}\p"
	.string "Oh right, so you are one of those MvM Challengers.\p"
	.string "I don't know why I even have this role.\p"
	.string "Very well, lets get this out of the way, show me what you can do.$"

VARROCK_GYM_KINGROALD_Text_2:
# 772 "data/maps/Varrock_Palace_1F/scripts.pory"
	.string "That was a very enjoyable battle!$"

VARROCK_GYM_KINGROALD_Text_3:
# 774 "data/maps/Varrock_Palace_1F/scripts.pory"
	.string "I must say, I quite enjoyed that battle we just had.\p"
	.string "I want to say it's the most enjoyment I've had in years.\p"
	.string "Here I believe you have earnt this.$"

VARROCK_GYM_KINGROALD_Text_4:
# 777 "data/maps/Varrock_Palace_1F/scripts.pory"
	.string "{PLAYER} received the Varrock BADGE from King Roald.$"

VARROCK_GYM_KINGROALD_Text_5:
# 781 "data/maps/Varrock_Palace_1F/scripts.pory"
	.string "Also have this Scroll.$"

VARROCK_GYM_KINGROALD_Text_6:
# 789 "data/maps/Varrock_Palace_1F/scripts.pory"
	.string "That move is called Draining Kiss, my Queen uses it on me all the time and it is always super effective.\p"
	.string "Hopefully it will be of more use to you than on me.$"

VARROCK_GYM_KINGROALD_Text_7:
# 799 "data/maps/Varrock_Palace_1F/scripts.pory"
	.string "You seem like you would be strong enough to take on the Barbarians, maybe you should head there next for your MvM gym challenge.$"

VARROCK_GYM_KINGROALD_Text_8:
# 803 "data/maps/Varrock_Palace_1F/scripts.pory"
	.string "You should go pester the Prince in Al Kharid for your next MvM gym challenge.$"
