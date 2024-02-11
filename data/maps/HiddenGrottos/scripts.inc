HiddenGrottos_MapScripts::
# 2 "data/maps/HiddenGrottos/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, HiddenGrottos_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

HiddenGrottos_MapScripts_MAP_SCRIPT_ON_LOAD:
# 4 "data/maps/HiddenGrottos/scripts.pory"
	call HIDDEN_GROTTO_ENTRY_SPAWNS
	return


HIDDEN_GROTTO_ENTRY::
# 12 "data/maps/HiddenGrottos/scripts.pory"
	lockall
# 13 "data/maps/HiddenGrottos/scripts.pory"
	msgbox HIDDEN_GROTTO_ENTRY_Text_0, MSGBOX_YESNO
# 14 "data/maps/HiddenGrottos/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne HIDDEN_GROTTO_ENTRY_2
HIDDEN_GROTTO_ENTRY_1:
# 24 "data/maps/HiddenGrottos/scripts.pory"
	closemessage
# 25 "data/maps/HiddenGrottos/scripts.pory"
	release
	end

HIDDEN_GROTTO_ENTRY_2:
# 16 "data/maps/HiddenGrottos/scripts.pory"
	specialvar VAR_RESULT, GetCurrentMap
# 17 "data/maps/HiddenGrottos/scripts.pory"
	goto_if_eq VAR_RESULT, MAP_ROUTE1, HIDDEN_GROTTO_WARP_ROUTE_1
# 18 "data/maps/HiddenGrottos/scripts.pory"
	goto_if_eq VAR_RESULT, MAP_ROUTE4, HIDDEN_GROTTO_WARP_ROUTE_4
# 19 "data/maps/HiddenGrottos/scripts.pory"
	goto_if_eq VAR_RESULT, MAP_ROUTE9, HIDDEN_GROTTO_WARP_ROUTE_9
# 20 "data/maps/HiddenGrottos/scripts.pory"
	goto_if_eq VAR_RESULT, MAP_ROUTE27, HIDDEN_GROTTO_WARP_ROUTE_27
# 21 "data/maps/HiddenGrottos/scripts.pory"
	goto_if_eq VAR_RESULT, MAP_ROUTE20, HIDDEN_GROTTO_WARP_ROUTE_20
# 22 "data/maps/HiddenGrottos/scripts.pory"
	goto_if_eq VAR_RESULT, MAP_ROUTE14, HIDDEN_GROTTO_WARP_ROUTE_14
	goto HIDDEN_GROTTO_ENTRY_1


HIDDEN_GROTTO_WARP_ROUTE_1::
# 29 "data/maps/HiddenGrottos/scripts.pory"
	warp MAP_HIDDEN_GROTTOS, 1, 0, 0
# 30 "data/maps/HiddenGrottos/scripts.pory"
	waitstate
	return


HIDDEN_GROTTO_WARP_ROUTE_4::
# 33 "data/maps/HiddenGrottos/scripts.pory"
	warp MAP_HIDDEN_GROTTOS, 3, 0, 0
# 34 "data/maps/HiddenGrottos/scripts.pory"
	waitstate
	return


HIDDEN_GROTTO_WARP_ROUTE_9::
# 37 "data/maps/HiddenGrottos/scripts.pory"
	warp MAP_HIDDEN_GROTTOS, 4, 0, 0
# 38 "data/maps/HiddenGrottos/scripts.pory"
	waitstate
	return


HIDDEN_GROTTO_WARP_ROUTE_27::
# 41 "data/maps/HiddenGrottos/scripts.pory"
	warp MAP_HIDDEN_GROTTOS, 7, 0, 0
# 42 "data/maps/HiddenGrottos/scripts.pory"
	waitstate
	return


HIDDEN_GROTTO_WARP_ROUTE_20::
# 45 "data/maps/HiddenGrottos/scripts.pory"
	warp MAP_HIDDEN_GROTTOS, 0, 0, 0
# 46 "data/maps/HiddenGrottos/scripts.pory"
	waitstate
	return


HIDDEN_GROTTO_WARP_ROUTE_14::
# 49 "data/maps/HiddenGrottos/scripts.pory"
	warp MAP_HIDDEN_GROTTOS, 5, 0, 0
# 50 "data/maps/HiddenGrottos/scripts.pory"
	waitstate
	return


HIDDEN_GROTTO_ENTRY_SPAWNS::
# 55 "data/maps/HiddenGrottos/scripts.pory"
	random 13
# 56 "data/maps/HiddenGrottos/scripts.pory"
	switch VAR_RESULT
# 57 "data/maps/HiddenGrottos/scripts.pory"
	case 0, HIDDEN_GROTTO_ENTRY_SPAWNS_3
# 59 "data/maps/HiddenGrottos/scripts.pory"
	case 1, HIDDEN_GROTTO_ENTRY_SPAWNS_4
# 61 "data/maps/HiddenGrottos/scripts.pory"
	case 2, HIDDEN_GROTTO_ENTRY_SPAWNS_5
# 63 "data/maps/HiddenGrottos/scripts.pory"
	case 3, HIDDEN_GROTTO_ENTRY_SPAWNS_6
# 65 "data/maps/HiddenGrottos/scripts.pory"
	case 4, HIDDEN_GROTTO_ENTRY_SPAWNS_7
# 67 "data/maps/HiddenGrottos/scripts.pory"
	case 5, HIDDEN_GROTTO_ENTRY_SPAWNS_8
# 69 "data/maps/HiddenGrottos/scripts.pory"
	case 6, HIDDEN_GROTTO_ENTRY_SPAWNS_9
# 71 "data/maps/HiddenGrottos/scripts.pory"
	case 7, HIDDEN_GROTTO_ENTRY_SPAWNS_10
# 73 "data/maps/HiddenGrottos/scripts.pory"
	case 8, HIDDEN_GROTTO_ENTRY_SPAWNS_11
# 75 "data/maps/HiddenGrottos/scripts.pory"
	case 9, HIDDEN_GROTTO_ENTRY_SPAWNS_12
# 77 "data/maps/HiddenGrottos/scripts.pory"
	case 10, HIDDEN_GROTTO_ENTRY_SPAWNS_13
# 79 "data/maps/HiddenGrottos/scripts.pory"
	case 11, HIDDEN_GROTTO_ENTRY_SPAWNS_14
# 81 "data/maps/HiddenGrottos/scripts.pory"
	case 12, HIDDEN_GROTTO_ENTRY_SPAWNS_15
HIDDEN_GROTTO_ENTRY_SPAWNS_1:
# 84 "data/maps/HiddenGrottos/scripts.pory"
	release
	end

HIDDEN_GROTTO_ENTRY_SPAWNS_3:
# 58 "data/maps/HiddenGrottos/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_POUCH
	goto HIDDEN_GROTTO_ENTRY_SPAWNS_1

HIDDEN_GROTTO_ENTRY_SPAWNS_4:
# 60 "data/maps/HiddenGrottos/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_UNICORN_BLACK
	goto HIDDEN_GROTTO_ENTRY_SPAWNS_1

HIDDEN_GROTTO_ENTRY_SPAWNS_5:
# 62 "data/maps/HiddenGrottos/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_UNICORN_WHITE
	goto HIDDEN_GROTTO_ENTRY_SPAWNS_1

HIDDEN_GROTTO_ENTRY_SPAWNS_6:
# 64 "data/maps/HiddenGrottos/scripts.pory"
	call HIDDEN_GROTTO_RANDOM_CAT
	goto HIDDEN_GROTTO_ENTRY_SPAWNS_1

HIDDEN_GROTTO_ENTRY_SPAWNS_7:
# 66 "data/maps/HiddenGrottos/scripts.pory"
	call HIDDEN_GROTTO_RANDOM_DOG
	goto HIDDEN_GROTTO_ENTRY_SPAWNS_1

HIDDEN_GROTTO_ENTRY_SPAWNS_8:
# 68 "data/maps/HiddenGrottos/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_POUCH
	goto HIDDEN_GROTTO_ENTRY_SPAWNS_1

HIDDEN_GROTTO_ENTRY_SPAWNS_9:
# 70 "data/maps/HiddenGrottos/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_RAC_BONBUN
	goto HIDDEN_GROTTO_ENTRY_SPAWNS_1

HIDDEN_GROTTO_ENTRY_SPAWNS_10:
# 72 "data/maps/HiddenGrottos/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_POUCH
	goto HIDDEN_GROTTO_ENTRY_SPAWNS_1

HIDDEN_GROTTO_ENTRY_SPAWNS_11:
# 74 "data/maps/HiddenGrottos/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_RAC_BONBUN
	goto HIDDEN_GROTTO_ENTRY_SPAWNS_1

HIDDEN_GROTTO_ENTRY_SPAWNS_12:
# 76 "data/maps/HiddenGrottos/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_POUCH
	goto HIDDEN_GROTTO_ENTRY_SPAWNS_1

HIDDEN_GROTTO_ENTRY_SPAWNS_13:
# 78 "data/maps/HiddenGrottos/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_POUCH
	goto HIDDEN_GROTTO_ENTRY_SPAWNS_1

HIDDEN_GROTTO_ENTRY_SPAWNS_14:
# 80 "data/maps/HiddenGrottos/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_RAC_BONBUN
	goto HIDDEN_GROTTO_ENTRY_SPAWNS_1

HIDDEN_GROTTO_ENTRY_SPAWNS_15:
# 82 "data/maps/HiddenGrottos/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_RAC_BONBUN
	goto HIDDEN_GROTTO_ENTRY_SPAWNS_1


HIDDEN_GROTTO_INTERACT::
# 92 "data/maps/HiddenGrottos/scripts.pory"
	call HIDDEN_GROTTO_LEVELS
# 94 "data/maps/HiddenGrottos/scripts.pory"
	compare VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_POUCH
	goto_if_eq HIDDEN_GROTTO_INTERACT_2
# 99 "data/maps/HiddenGrottos/scripts.pory"
	compare VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_RAC_BONBUN
	goto_if_eq HIDDEN_GROTTO_INTERACT_3
# 104 "data/maps/HiddenGrottos/scripts.pory"
	compare VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_UNICORN_BLACK
	goto_if_eq HIDDEN_GROTTO_INTERACT_4
# 109 "data/maps/HiddenGrottos/scripts.pory"
	compare VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_UNICORN_WHITE
	goto_if_eq HIDDEN_GROTTO_INTERACT_5
# 115 "data/maps/HiddenGrottos/scripts.pory"
	compare VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_CAT_BLACK
	goto_if_eq HIDDEN_GROTTO_INTERACT_6
# 120 "data/maps/HiddenGrottos/scripts.pory"
	compare VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_CAT_BLACKWHITE
	goto_if_eq HIDDEN_GROTTO_INTERACT_7
# 125 "data/maps/HiddenGrottos/scripts.pory"
	compare VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_CAT_BROWN
	goto_if_eq HIDDEN_GROTTO_INTERACT_8
# 130 "data/maps/HiddenGrottos/scripts.pory"
	compare VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_CAT_BROWNWHITE
	goto_if_eq HIDDEN_GROTTO_INTERACT_9
# 135 "data/maps/HiddenGrottos/scripts.pory"
	compare VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_CAT_CLOCKWORK
	goto_if_eq HIDDEN_GROTTO_INTERACT_10
# 140 "data/maps/HiddenGrottos/scripts.pory"
	compare VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_CAT_HELL
	goto_if_eq HIDDEN_GROTTO_INTERACT_11
# 145 "data/maps/HiddenGrottos/scripts.pory"
	compare VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_CAT_PURPLE
	goto_if_eq HIDDEN_GROTTO_INTERACT_12
# 150 "data/maps/HiddenGrottos/scripts.pory"
	compare VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_CAT_WHITE
	goto_if_eq HIDDEN_GROTTO_INTERACT_13
# 156 "data/maps/HiddenGrottos/scripts.pory"
	compare VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_DOG_CORGI
	goto_if_eq HIDDEN_GROTTO_INTERACT_14
# 161 "data/maps/HiddenGrottos/scripts.pory"
	compare VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_DOG_DALMATIAN
	goto_if_eq HIDDEN_GROTTO_INTERACT_15
# 166 "data/maps/HiddenGrottos/scripts.pory"
	compare VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_DOG_GUARD
	goto_if_eq HIDDEN_GROTTO_INTERACT_16
# 171 "data/maps/HiddenGrottos/scripts.pory"
	compare VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_DOG_LABRADOR
	goto_if_eq HIDDEN_GROTTO_INTERACT_17
# 176 "data/maps/HiddenGrottos/scripts.pory"
	compare VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_DOG_SLEEP
	goto_if_eq HIDDEN_GROTTO_INTERACT_18
# 181 "data/maps/HiddenGrottos/scripts.pory"
	compare VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_DOG_STRAY
	goto_if_eq HIDDEN_GROTTO_INTERACT_19
HIDDEN_GROTTO_INTERACT_1:
# 187 "data/maps/HiddenGrottos/scripts.pory"
	release
	end

HIDDEN_GROTTO_INTERACT_2:
# 96 "data/maps/HiddenGrottos/scripts.pory"
	call HIDDEN_GROTTO_FIND_ITEM
	goto HIDDEN_GROTTO_INTERACT_1

HIDDEN_GROTTO_INTERACT_3:
# 101 "data/maps/HiddenGrottos/scripts.pory"
	goto ENCOUNTER_RANDOM
	goto HIDDEN_GROTTO_INTERACT_1

HIDDEN_GROTTO_INTERACT_4:
# 106 "data/maps/HiddenGrottos/scripts.pory"
	setwildbattle SPECIES_UNICORN_BLACK_FORM, 15
# 107 "data/maps/HiddenGrottos/scripts.pory"
	goto ENCOUNTER_UNICORN
	goto HIDDEN_GROTTO_INTERACT_1

HIDDEN_GROTTO_INTERACT_5:
# 111 "data/maps/HiddenGrottos/scripts.pory"
	setwildbattle SPECIES_UNICORN_WHITE_FORM, 15
# 112 "data/maps/HiddenGrottos/scripts.pory"
	goto ENCOUNTER_UNICORN
	goto HIDDEN_GROTTO_INTERACT_1

HIDDEN_GROTTO_INTERACT_6:
# 117 "data/maps/HiddenGrottos/scripts.pory"
	setwildbattle SPECIES_CAT_NORMAL_FORM, 15
# 118 "data/maps/HiddenGrottos/scripts.pory"
	goto ENCOUNTER_CAT
	goto HIDDEN_GROTTO_INTERACT_1

HIDDEN_GROTTO_INTERACT_7:
# 122 "data/maps/HiddenGrottos/scripts.pory"
	setwildbattle SPECIES_CAT_LAZY_FORM, 15
# 123 "data/maps/HiddenGrottos/scripts.pory"
	goto ENCOUNTER_CAT
	goto HIDDEN_GROTTO_INTERACT_1

HIDDEN_GROTTO_INTERACT_8:
# 127 "data/maps/HiddenGrottos/scripts.pory"
	setwildbattle SPECIES_CAT_WILY_FORM, 15
# 128 "data/maps/HiddenGrottos/scripts.pory"
	goto ENCOUNTER_CAT
	goto HIDDEN_GROTTO_INTERACT_1

HIDDEN_GROTTO_INTERACT_9:
# 132 "data/maps/HiddenGrottos/scripts.pory"
	setwildbattle SPECIES_CAT_OVERGROWN_FORM, 15
# 133 "data/maps/HiddenGrottos/scripts.pory"
	goto ENCOUNTER_CAT
	goto HIDDEN_GROTTO_INTERACT_1

HIDDEN_GROTTO_INTERACT_10:
# 137 "data/maps/HiddenGrottos/scripts.pory"
	setwildbattle SPECIES_CAT_CLOCKWORK_FORM, 15
# 138 "data/maps/HiddenGrottos/scripts.pory"
	goto ENCOUNTER_CAT
	goto HIDDEN_GROTTO_INTERACT_1

HIDDEN_GROTTO_INTERACT_11:
# 142 "data/maps/HiddenGrottos/scripts.pory"
	setwildbattle SPECIES_CAT_HELL_FORM, 15
# 143 "data/maps/HiddenGrottos/scripts.pory"
	goto ENCOUNTER_CAT
	goto HIDDEN_GROTTO_INTERACT_1

HIDDEN_GROTTO_INTERACT_12:
# 147 "data/maps/HiddenGrottos/scripts.pory"
	setwildbattle SPECIES_CAT_PURPLE_FORM, 15
# 148 "data/maps/HiddenGrottos/scripts.pory"
	goto ENCOUNTER_CAT
	goto HIDDEN_GROTTO_INTERACT_1

HIDDEN_GROTTO_INTERACT_13:
# 152 "data/maps/HiddenGrottos/scripts.pory"
	setwildbattle SPECIES_CAT_POST_FORM, 15
# 153 "data/maps/HiddenGrottos/scripts.pory"
	goto ENCOUNTER_CAT
	goto HIDDEN_GROTTO_INTERACT_1

HIDDEN_GROTTO_INTERACT_14:
# 158 "data/maps/HiddenGrottos/scripts.pory"
	setwildbattle SPECIES_CORGI, 15
# 159 "data/maps/HiddenGrottos/scripts.pory"
	goto ENCOUNTER_DOG
	goto HIDDEN_GROTTO_INTERACT_1

HIDDEN_GROTTO_INTERACT_15:
# 163 "data/maps/HiddenGrottos/scripts.pory"
	setwildbattle SPECIES_DALMATIAN, 15
# 164 "data/maps/HiddenGrottos/scripts.pory"
	goto ENCOUNTER_DOG
	goto HIDDEN_GROTTO_INTERACT_1

HIDDEN_GROTTO_INTERACT_16:
# 168 "data/maps/HiddenGrottos/scripts.pory"
	setwildbattle SPECIES_GUARD_DOG, 15
# 169 "data/maps/HiddenGrottos/scripts.pory"
	goto ENCOUNTER_DOG
	goto HIDDEN_GROTTO_INTERACT_1

HIDDEN_GROTTO_INTERACT_17:
# 173 "data/maps/HiddenGrottos/scripts.pory"
	setwildbattle SPECIES_LABRADOR, 15
# 174 "data/maps/HiddenGrottos/scripts.pory"
	goto ENCOUNTER_DOG
	goto HIDDEN_GROTTO_INTERACT_1

HIDDEN_GROTTO_INTERACT_18:
# 178 "data/maps/HiddenGrottos/scripts.pory"
	setwildbattle SPECIES_BORDER_COLLIE, 15
# 179 "data/maps/HiddenGrottos/scripts.pory"
	goto ENCOUNTER_DOG
	goto HIDDEN_GROTTO_INTERACT_1

HIDDEN_GROTTO_INTERACT_19:
# 183 "data/maps/HiddenGrottos/scripts.pory"
	setwildbattle SPECIES_STRAY_DOG, 15
# 184 "data/maps/HiddenGrottos/scripts.pory"
	goto ENCOUNTER_DOG
	goto HIDDEN_GROTTO_INTERACT_1


HIDDEN_GROTTO_RANDOM_CAT::
# 194 "data/maps/HiddenGrottos/scripts.pory"
	random 8
# 195 "data/maps/HiddenGrottos/scripts.pory"
	switch VAR_RESULT
# 196 "data/maps/HiddenGrottos/scripts.pory"
	case 0, HIDDEN_GROTTO_RANDOM_CAT_3
# 198 "data/maps/HiddenGrottos/scripts.pory"
	case 1, HIDDEN_GROTTO_RANDOM_CAT_4
# 200 "data/maps/HiddenGrottos/scripts.pory"
	case 2, HIDDEN_GROTTO_RANDOM_CAT_5
# 202 "data/maps/HiddenGrottos/scripts.pory"
	case 3, HIDDEN_GROTTO_RANDOM_CAT_6
# 204 "data/maps/HiddenGrottos/scripts.pory"
	case 4, HIDDEN_GROTTO_RANDOM_CAT_7
# 206 "data/maps/HiddenGrottos/scripts.pory"
	case 5, HIDDEN_GROTTO_RANDOM_CAT_8
# 208 "data/maps/HiddenGrottos/scripts.pory"
	case 6, HIDDEN_GROTTO_RANDOM_CAT_9
# 210 "data/maps/HiddenGrottos/scripts.pory"
	case 7, HIDDEN_GROTTO_RANDOM_CAT_10
HIDDEN_GROTTO_RANDOM_CAT_1:
	return

HIDDEN_GROTTO_RANDOM_CAT_3:
# 197 "data/maps/HiddenGrottos/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_CAT_BLACK
	goto HIDDEN_GROTTO_RANDOM_CAT_1

HIDDEN_GROTTO_RANDOM_CAT_4:
# 199 "data/maps/HiddenGrottos/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_CAT_BLACKWHITE
	goto HIDDEN_GROTTO_RANDOM_CAT_1

HIDDEN_GROTTO_RANDOM_CAT_5:
# 201 "data/maps/HiddenGrottos/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_CAT_BROWN
	goto HIDDEN_GROTTO_RANDOM_CAT_1

HIDDEN_GROTTO_RANDOM_CAT_6:
# 203 "data/maps/HiddenGrottos/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_CAT_BROWNWHITE
	goto HIDDEN_GROTTO_RANDOM_CAT_1

HIDDEN_GROTTO_RANDOM_CAT_7:
# 205 "data/maps/HiddenGrottos/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_CAT_CLOCKWORK
	goto HIDDEN_GROTTO_RANDOM_CAT_1

HIDDEN_GROTTO_RANDOM_CAT_8:
# 207 "data/maps/HiddenGrottos/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_CAT_HELL
	goto HIDDEN_GROTTO_RANDOM_CAT_1

HIDDEN_GROTTO_RANDOM_CAT_9:
# 209 "data/maps/HiddenGrottos/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_CAT_PURPLE
	goto HIDDEN_GROTTO_RANDOM_CAT_1

HIDDEN_GROTTO_RANDOM_CAT_10:
# 211 "data/maps/HiddenGrottos/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_CAT_WHITE
	goto HIDDEN_GROTTO_RANDOM_CAT_1


HIDDEN_GROTTO_RANDOM_DOG::
# 216 "data/maps/HiddenGrottos/scripts.pory"
	random 6
# 217 "data/maps/HiddenGrottos/scripts.pory"
	switch VAR_RESULT
# 218 "data/maps/HiddenGrottos/scripts.pory"
	case 0, HIDDEN_GROTTO_RANDOM_DOG_3
# 220 "data/maps/HiddenGrottos/scripts.pory"
	case 1, HIDDEN_GROTTO_RANDOM_DOG_4
# 222 "data/maps/HiddenGrottos/scripts.pory"
	case 2, HIDDEN_GROTTO_RANDOM_DOG_5
# 224 "data/maps/HiddenGrottos/scripts.pory"
	case 3, HIDDEN_GROTTO_RANDOM_DOG_6
# 226 "data/maps/HiddenGrottos/scripts.pory"
	case 4, HIDDEN_GROTTO_RANDOM_DOG_7
# 228 "data/maps/HiddenGrottos/scripts.pory"
	case 5, HIDDEN_GROTTO_RANDOM_DOG_8
HIDDEN_GROTTO_RANDOM_DOG_1:
	return

HIDDEN_GROTTO_RANDOM_DOG_3:
# 219 "data/maps/HiddenGrottos/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_DOG_CORGI
	goto HIDDEN_GROTTO_RANDOM_DOG_1

HIDDEN_GROTTO_RANDOM_DOG_4:
# 221 "data/maps/HiddenGrottos/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_DOG_DALMATIAN
	goto HIDDEN_GROTTO_RANDOM_DOG_1

HIDDEN_GROTTO_RANDOM_DOG_5:
# 223 "data/maps/HiddenGrottos/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_DOG_GUARD
	goto HIDDEN_GROTTO_RANDOM_DOG_1

HIDDEN_GROTTO_RANDOM_DOG_6:
# 225 "data/maps/HiddenGrottos/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_DOG_LABRADOR
	goto HIDDEN_GROTTO_RANDOM_DOG_1

HIDDEN_GROTTO_RANDOM_DOG_7:
# 227 "data/maps/HiddenGrottos/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_DOG_SLEEP
	goto HIDDEN_GROTTO_RANDOM_DOG_1

HIDDEN_GROTTO_RANDOM_DOG_8:
# 229 "data/maps/HiddenGrottos/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_DOG_STRAY
	goto HIDDEN_GROTTO_RANDOM_DOG_1


HIDDEN_GROTTO_LEVELS::
# 235 "data/maps/HiddenGrottos/scripts.pory"
	goto_if_unset FLAG_BADGE01_GET, HIDDEN_GROTTO_LEVELS_2
HIDDEN_GROTTO_LEVELS_1:
# 238 "data/maps/HiddenGrottos/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, HIDDEN_GROTTO_LEVELS_5
HIDDEN_GROTTO_LEVELS_4:
# 241 "data/maps/HiddenGrottos/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, HIDDEN_GROTTO_LEVELS_8
HIDDEN_GROTTO_LEVELS_7:
# 244 "data/maps/HiddenGrottos/scripts.pory"
	goto_if_set FLAG_BADGE03_GET, HIDDEN_GROTTO_LEVELS_11
HIDDEN_GROTTO_LEVELS_10:
# 247 "data/maps/HiddenGrottos/scripts.pory"
	goto_if_set FLAG_BADGE04_GET, HIDDEN_GROTTO_LEVELS_14
HIDDEN_GROTTO_LEVELS_13:
# 250 "data/maps/HiddenGrottos/scripts.pory"
	goto_if_set FLAG_BADGE05_GET, HIDDEN_GROTTO_LEVELS_17
HIDDEN_GROTTO_LEVELS_16:
# 253 "data/maps/HiddenGrottos/scripts.pory"
	goto_if_set FLAG_BADGE06_GET, HIDDEN_GROTTO_LEVELS_20
HIDDEN_GROTTO_LEVELS_19:
# 256 "data/maps/HiddenGrottos/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, HIDDEN_GROTTO_LEVELS_23
HIDDEN_GROTTO_LEVELS_22:
# 259 "data/maps/HiddenGrottos/scripts.pory"
	goto_if_set FLAG_BADGE08_GET, HIDDEN_GROTTO_LEVELS_26
HIDDEN_GROTTO_LEVELS_25:
	return

HIDDEN_GROTTO_LEVELS_2:
# 236 "data/maps/HiddenGrottos/scripts.pory"
	setvar VAR_TEMP_E, 10
	goto HIDDEN_GROTTO_LEVELS_1

HIDDEN_GROTTO_LEVELS_5:
# 239 "data/maps/HiddenGrottos/scripts.pory"
	setvar VAR_TEMP_E, 15
	goto HIDDEN_GROTTO_LEVELS_4

HIDDEN_GROTTO_LEVELS_8:
# 242 "data/maps/HiddenGrottos/scripts.pory"
	setvar VAR_TEMP_E, 20
	goto HIDDEN_GROTTO_LEVELS_7

HIDDEN_GROTTO_LEVELS_11:
# 245 "data/maps/HiddenGrottos/scripts.pory"
	setvar VAR_TEMP_E, 25
	goto HIDDEN_GROTTO_LEVELS_10

HIDDEN_GROTTO_LEVELS_14:
# 248 "data/maps/HiddenGrottos/scripts.pory"
	setvar VAR_TEMP_E, 30
	goto HIDDEN_GROTTO_LEVELS_13

HIDDEN_GROTTO_LEVELS_17:
# 251 "data/maps/HiddenGrottos/scripts.pory"
	setvar VAR_TEMP_E, 35
	goto HIDDEN_GROTTO_LEVELS_16

HIDDEN_GROTTO_LEVELS_20:
# 254 "data/maps/HiddenGrottos/scripts.pory"
	setvar VAR_TEMP_E, 40
	goto HIDDEN_GROTTO_LEVELS_19

HIDDEN_GROTTO_LEVELS_23:
# 257 "data/maps/HiddenGrottos/scripts.pory"
	setvar VAR_TEMP_E, 45
	goto HIDDEN_GROTTO_LEVELS_22

HIDDEN_GROTTO_LEVELS_26:
# 260 "data/maps/HiddenGrottos/scripts.pory"
	setvar VAR_TEMP_E, 50
	goto HIDDEN_GROTTO_LEVELS_25


HIDDEN_GROTTO_SETFLAGS::
# 266 "data/maps/HiddenGrottos/scripts.pory"
	clearflag FLAG_HIDDEN_GROTTO_1
# 267 "data/maps/HiddenGrottos/scripts.pory"
	closemessage
	end


ENCOUNTER_CAT::
# 294 "data/maps/HiddenGrottos/scripts.pory"
	lock
# 295 "data/maps/HiddenGrottos/scripts.pory"
	namebox ENCOUNTER_CAT_Text_0
# 296 "data/maps/HiddenGrottos/scripts.pory"
	playmoncry SPECIES_MEOWTH, 0
# 297 "data/maps/HiddenGrottos/scripts.pory"
	msgbox ENCOUNTER_CAT_Text_1
# 298 "data/maps/HiddenGrottos/scripts.pory"
	waitmoncry
# 299 "data/maps/HiddenGrottos/scripts.pory"
	hidenamebox
# 300 "data/maps/HiddenGrottos/scripts.pory"
	closemessage
# 301 "data/maps/HiddenGrottos/scripts.pory"
	delay 1
# 302 "data/maps/HiddenGrottos/scripts.pory"
	dowildbattle
# 303 "data/maps/HiddenGrottos/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq ENCOUNTER_CAT_2
# 308 "data/maps/HiddenGrottos/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq ENCOUNTER_CAT_3
# 313 "data/maps/HiddenGrottos/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq ENCOUNTER_CAT_4
ENCOUNTER_CAT_1:
	return

ENCOUNTER_CAT_2:
# 304 "data/maps/HiddenGrottos/scripts.pory"
	fadescreen FADE_TO_BLACK
# 305 "data/maps/HiddenGrottos/scripts.pory"
	removeobject VAR_LAST_TALKED
# 306 "data/maps/HiddenGrottos/scripts.pory"
	fadescreen FADE_FROM_BLACK
	goto ENCOUNTER_CAT_1

ENCOUNTER_CAT_3:
# 309 "data/maps/HiddenGrottos/scripts.pory"
	fadescreen FADE_TO_BLACK
# 310 "data/maps/HiddenGrottos/scripts.pory"
	removeobject VAR_LAST_TALKED
# 311 "data/maps/HiddenGrottos/scripts.pory"
	fadescreen FADE_FROM_BLACK
	goto ENCOUNTER_CAT_1

ENCOUNTER_CAT_4:
# 314 "data/maps/HiddenGrottos/scripts.pory"
	fadescreen FADE_TO_BLACK
# 315 "data/maps/HiddenGrottos/scripts.pory"
	removeobject VAR_LAST_TALKED
# 316 "data/maps/HiddenGrottos/scripts.pory"
	fadescreen FADE_FROM_BLACK
	goto ENCOUNTER_CAT_1


ENCOUNTER_DOG::
# 321 "data/maps/HiddenGrottos/scripts.pory"
	lock
# 322 "data/maps/HiddenGrottos/scripts.pory"
	namebox ENCOUNTER_DOG_Text_0
# 323 "data/maps/HiddenGrottos/scripts.pory"
	playmoncry SPECIES_GROWLITHE, 0
# 324 "data/maps/HiddenGrottos/scripts.pory"
	msgbox ENCOUNTER_DOG_Text_1
# 325 "data/maps/HiddenGrottos/scripts.pory"
	waitmoncry
# 326 "data/maps/HiddenGrottos/scripts.pory"
	hidenamebox
# 327 "data/maps/HiddenGrottos/scripts.pory"
	closemessage
# 328 "data/maps/HiddenGrottos/scripts.pory"
	delay 1
# 329 "data/maps/HiddenGrottos/scripts.pory"
	dowildbattle
# 330 "data/maps/HiddenGrottos/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq ENCOUNTER_DOG_2
# 335 "data/maps/HiddenGrottos/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq ENCOUNTER_DOG_3
# 340 "data/maps/HiddenGrottos/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq ENCOUNTER_DOG_4
ENCOUNTER_DOG_1:
	return

ENCOUNTER_DOG_2:
# 331 "data/maps/HiddenGrottos/scripts.pory"
	fadescreen FADE_TO_BLACK
# 332 "data/maps/HiddenGrottos/scripts.pory"
	removeobject VAR_LAST_TALKED
# 333 "data/maps/HiddenGrottos/scripts.pory"
	fadescreen FADE_FROM_BLACK
	goto ENCOUNTER_DOG_1

ENCOUNTER_DOG_3:
# 336 "data/maps/HiddenGrottos/scripts.pory"
	fadescreen FADE_TO_BLACK
# 337 "data/maps/HiddenGrottos/scripts.pory"
	removeobject VAR_LAST_TALKED
# 338 "data/maps/HiddenGrottos/scripts.pory"
	fadescreen FADE_FROM_BLACK
	goto ENCOUNTER_DOG_1

ENCOUNTER_DOG_4:
# 341 "data/maps/HiddenGrottos/scripts.pory"
	fadescreen FADE_TO_BLACK
# 342 "data/maps/HiddenGrottos/scripts.pory"
	removeobject VAR_LAST_TALKED
# 343 "data/maps/HiddenGrottos/scripts.pory"
	fadescreen FADE_FROM_BLACK
	goto ENCOUNTER_DOG_1


ENCOUNTER_UNICORN::
# 348 "data/maps/HiddenGrottos/scripts.pory"
	lock
# 349 "data/maps/HiddenGrottos/scripts.pory"
	namebox ENCOUNTER_UNICORN_Text_0
# 350 "data/maps/HiddenGrottos/scripts.pory"
	playmoncry SPECIES_PONYTA, 0
# 351 "data/maps/HiddenGrottos/scripts.pory"
	msgbox ENCOUNTER_UNICORN_Text_1
# 352 "data/maps/HiddenGrottos/scripts.pory"
	waitmoncry
# 353 "data/maps/HiddenGrottos/scripts.pory"
	hidenamebox
# 354 "data/maps/HiddenGrottos/scripts.pory"
	closemessage
# 355 "data/maps/HiddenGrottos/scripts.pory"
	delay 1
# 356 "data/maps/HiddenGrottos/scripts.pory"
	dowildbattle
# 357 "data/maps/HiddenGrottos/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq ENCOUNTER_UNICORN_2
# 362 "data/maps/HiddenGrottos/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq ENCOUNTER_UNICORN_3
# 367 "data/maps/HiddenGrottos/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq ENCOUNTER_UNICORN_4
ENCOUNTER_UNICORN_1:
	return

ENCOUNTER_UNICORN_2:
# 358 "data/maps/HiddenGrottos/scripts.pory"
	fadescreen FADE_TO_BLACK
# 359 "data/maps/HiddenGrottos/scripts.pory"
	removeobject VAR_LAST_TALKED
# 360 "data/maps/HiddenGrottos/scripts.pory"
	fadescreen FADE_FROM_BLACK
	goto ENCOUNTER_UNICORN_1

ENCOUNTER_UNICORN_3:
# 363 "data/maps/HiddenGrottos/scripts.pory"
	fadescreen FADE_TO_BLACK
# 364 "data/maps/HiddenGrottos/scripts.pory"
	removeobject VAR_LAST_TALKED
# 365 "data/maps/HiddenGrottos/scripts.pory"
	fadescreen FADE_FROM_BLACK
	goto ENCOUNTER_UNICORN_1

ENCOUNTER_UNICORN_4:
# 368 "data/maps/HiddenGrottos/scripts.pory"
	fadescreen FADE_TO_BLACK
# 369 "data/maps/HiddenGrottos/scripts.pory"
	removeobject VAR_LAST_TALKED
# 370 "data/maps/HiddenGrottos/scripts.pory"
	fadescreen FADE_FROM_BLACK
	goto ENCOUNTER_UNICORN_1


ENCOUNTER_RANDOM::
# 375 "data/maps/HiddenGrottos/scripts.pory"
	lock
# 376 "data/maps/HiddenGrottos/scripts.pory"
	msgbox ENCOUNTER_RANDOM_Text_0
# 377 "data/maps/HiddenGrottos/scripts.pory"
	playmoncry SPECIES_LUGIA, 0
# 378 "data/maps/HiddenGrottos/scripts.pory"
	msgbox ENCOUNTER_RANDOM_Text_1
# 379 "data/maps/HiddenGrottos/scripts.pory"
	waitmoncry
# 380 "data/maps/HiddenGrottos/scripts.pory"
	hidenamebox
# 381 "data/maps/HiddenGrottos/scripts.pory"
	closemessage
# 382 "data/maps/HiddenGrottos/scripts.pory"
	delay 1
# 383 "data/maps/HiddenGrottos/scripts.pory"
	call RANDOM_DOWILDBATTLE_MON
# 384 "data/maps/HiddenGrottos/scripts.pory"
	dowildbattle
# 385 "data/maps/HiddenGrottos/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq ENCOUNTER_RANDOM_2
# 390 "data/maps/HiddenGrottos/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq ENCOUNTER_RANDOM_3
# 395 "data/maps/HiddenGrottos/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq ENCOUNTER_RANDOM_4
ENCOUNTER_RANDOM_1:
	return

ENCOUNTER_RANDOM_2:
# 386 "data/maps/HiddenGrottos/scripts.pory"
	fadescreen FADE_TO_BLACK
# 387 "data/maps/HiddenGrottos/scripts.pory"
	removeobject VAR_LAST_TALKED
# 388 "data/maps/HiddenGrottos/scripts.pory"
	fadescreen FADE_FROM_BLACK
	goto ENCOUNTER_RANDOM_1

ENCOUNTER_RANDOM_3:
# 391 "data/maps/HiddenGrottos/scripts.pory"
	fadescreen FADE_TO_BLACK
# 392 "data/maps/HiddenGrottos/scripts.pory"
	removeobject VAR_LAST_TALKED
# 393 "data/maps/HiddenGrottos/scripts.pory"
	fadescreen FADE_FROM_BLACK
	goto ENCOUNTER_RANDOM_1

ENCOUNTER_RANDOM_4:
# 396 "data/maps/HiddenGrottos/scripts.pory"
	fadescreen FADE_TO_BLACK
# 397 "data/maps/HiddenGrottos/scripts.pory"
	removeobject VAR_LAST_TALKED
# 398 "data/maps/HiddenGrottos/scripts.pory"
	fadescreen FADE_FROM_BLACK
	goto ENCOUNTER_RANDOM_1


RANDOM_DOWILDBATTLE_MON::
# 404 "data/maps/HiddenGrottos/scripts.pory"
	random 6
# 405 "data/maps/HiddenGrottos/scripts.pory"
	switch VAR_RESULT
# 406 "data/maps/HiddenGrottos/scripts.pory"
	case 0, RANDOM_DOWILDBATTLE_MON_3
# 408 "data/maps/HiddenGrottos/scripts.pory"
	case 1, RANDOM_DOWILDBATTLE_MON_4
# 410 "data/maps/HiddenGrottos/scripts.pory"
	case 2, RANDOM_DOWILDBATTLE_MON_5
# 412 "data/maps/HiddenGrottos/scripts.pory"
	case 3, RANDOM_DOWILDBATTLE_MON_6
# 414 "data/maps/HiddenGrottos/scripts.pory"
	case 4, RANDOM_DOWILDBATTLE_MON_7
# 416 "data/maps/HiddenGrottos/scripts.pory"
	case 5, RANDOM_DOWILDBATTLE_MON_8
RANDOM_DOWILDBATTLE_MON_1:
	return

RANDOM_DOWILDBATTLE_MON_3:
# 407 "data/maps/HiddenGrottos/scripts.pory"
	setwildbattle SPECIES_BIRD_NEST, 15
	goto RANDOM_DOWILDBATTLE_MON_1

RANDOM_DOWILDBATTLE_MON_4:
# 409 "data/maps/HiddenGrottos/scripts.pory"
	setwildbattle SPECIES_THE_ILLUSIVE, 15
	goto RANDOM_DOWILDBATTLE_MON_1

RANDOM_DOWILDBATTLE_MON_5:
# 411 "data/maps/HiddenGrottos/scripts.pory"
	setwildbattle SPECIES_CHINCHOMPA_GIANT, 15
	goto RANDOM_DOWILDBATTLE_MON_1

RANDOM_DOWILDBATTLE_MON_6:
# 413 "data/maps/HiddenGrottos/scripts.pory"
	setwildbattle SPECIES_IMPLING_LUCKY_FORM, 15
	goto RANDOM_DOWILDBATTLE_MON_1

RANDOM_DOWILDBATTLE_MON_7:
# 415 "data/maps/HiddenGrottos/scripts.pory"
	setwildbattle SPECIES_WOLPERTING, 15
	goto RANDOM_DOWILDBATTLE_MON_1

RANDOM_DOWILDBATTLE_MON_8:
# 417 "data/maps/HiddenGrottos/scripts.pory"
	setwildbattle SPECIES_SHAIKAH, 15
	goto RANDOM_DOWILDBATTLE_MON_1


HIDDEN_GROTTO_FIND_ITEM::
# 424 "data/maps/HiddenGrottos/scripts.pory"
	random 28
# 425 "data/maps/HiddenGrottos/scripts.pory"
	switch VAR_RESULT
# 426 "data/maps/HiddenGrottos/scripts.pory"
	case 0, HIDDEN_GROTTO_FIND_ITEM_3
# 428 "data/maps/HiddenGrottos/scripts.pory"
	case 1, HIDDEN_GROTTO_FIND_ITEM_4
# 430 "data/maps/HiddenGrottos/scripts.pory"
	case 2, HIDDEN_GROTTO_FIND_ITEM_5
# 432 "data/maps/HiddenGrottos/scripts.pory"
	case 3, HIDDEN_GROTTO_FIND_ITEM_6
# 434 "data/maps/HiddenGrottos/scripts.pory"
	case 4, HIDDEN_GROTTO_FIND_ITEM_7
# 436 "data/maps/HiddenGrottos/scripts.pory"
	case 5, HIDDEN_GROTTO_FIND_ITEM_8
# 438 "data/maps/HiddenGrottos/scripts.pory"
	case 6, HIDDEN_GROTTO_FIND_ITEM_9
# 440 "data/maps/HiddenGrottos/scripts.pory"
	case 7, HIDDEN_GROTTO_FIND_ITEM_10
# 442 "data/maps/HiddenGrottos/scripts.pory"
	case 8, HIDDEN_GROTTO_FIND_ITEM_11
# 444 "data/maps/HiddenGrottos/scripts.pory"
	case 9, HIDDEN_GROTTO_FIND_ITEM_12
# 446 "data/maps/HiddenGrottos/scripts.pory"
	case 10, HIDDEN_GROTTO_FIND_ITEM_13
# 448 "data/maps/HiddenGrottos/scripts.pory"
	case 11, HIDDEN_GROTTO_FIND_ITEM_14
# 450 "data/maps/HiddenGrottos/scripts.pory"
	case 12, HIDDEN_GROTTO_FIND_ITEM_15
# 452 "data/maps/HiddenGrottos/scripts.pory"
	case 13, HIDDEN_GROTTO_FIND_ITEM_16
# 454 "data/maps/HiddenGrottos/scripts.pory"
	case 14, HIDDEN_GROTTO_FIND_ITEM_17
# 456 "data/maps/HiddenGrottos/scripts.pory"
	case 15, HIDDEN_GROTTO_FIND_ITEM_18
# 458 "data/maps/HiddenGrottos/scripts.pory"
	case 16, HIDDEN_GROTTO_FIND_ITEM_19
# 460 "data/maps/HiddenGrottos/scripts.pory"
	case 17, HIDDEN_GROTTO_FIND_ITEM_20
# 462 "data/maps/HiddenGrottos/scripts.pory"
	case 18, HIDDEN_GROTTO_FIND_ITEM_21
# 464 "data/maps/HiddenGrottos/scripts.pory"
	case 19, HIDDEN_GROTTO_FIND_ITEM_22
# 466 "data/maps/HiddenGrottos/scripts.pory"
	case 20, HIDDEN_GROTTO_FIND_ITEM_23
# 468 "data/maps/HiddenGrottos/scripts.pory"
	case 21, HIDDEN_GROTTO_FIND_ITEM_24
# 470 "data/maps/HiddenGrottos/scripts.pory"
	case 22, HIDDEN_GROTTO_FIND_ITEM_25
# 472 "data/maps/HiddenGrottos/scripts.pory"
	case 23, HIDDEN_GROTTO_FIND_ITEM_26
# 474 "data/maps/HiddenGrottos/scripts.pory"
	case 24, HIDDEN_GROTTO_FIND_ITEM_27
# 476 "data/maps/HiddenGrottos/scripts.pory"
	case 25, HIDDEN_GROTTO_FIND_ITEM_28
# 478 "data/maps/HiddenGrottos/scripts.pory"
	case 26, HIDDEN_GROTTO_FIND_ITEM_29
# 480 "data/maps/HiddenGrottos/scripts.pory"
	case 27, HIDDEN_GROTTO_FIND_ITEM_30
HIDDEN_GROTTO_FIND_ITEM_1:
	end

HIDDEN_GROTTO_FIND_ITEM_3:
# 427 "data/maps/HiddenGrottos/scripts.pory"
	finditem ITEM_FLAX, 6
	goto HIDDEN_GROTTO_FIND_ITEM_1

HIDDEN_GROTTO_FIND_ITEM_4:
# 429 "data/maps/HiddenGrottos/scripts.pory"
	finditem ITEM_SPIRIT_SHARD, 2
	goto HIDDEN_GROTTO_FIND_ITEM_1

HIDDEN_GROTTO_FIND_ITEM_5:
# 431 "data/maps/HiddenGrottos/scripts.pory"
	finditem ITEM_PRAYER_POTION, 1
	goto HIDDEN_GROTTO_FIND_ITEM_1

HIDDEN_GROTTO_FIND_ITEM_6:
# 433 "data/maps/HiddenGrottos/scripts.pory"
	finditem ITEM_LAMP_SPATT, 1
	goto HIDDEN_GROTTO_FIND_ITEM_1

HIDDEN_GROTTO_FIND_ITEM_7:
# 435 "data/maps/HiddenGrottos/scripts.pory"
	finditem ITEM_STAT_BEER, 1
	goto HIDDEN_GROTTO_FIND_ITEM_1

HIDDEN_GROTTO_FIND_ITEM_8:
# 437 "data/maps/HiddenGrottos/scripts.pory"
	finditem ITEM_CRYSTAL_POUCH, 1
	goto HIDDEN_GROTTO_FIND_ITEM_1

HIDDEN_GROTTO_FIND_ITEM_9:
# 439 "data/maps/HiddenGrottos/scripts.pory"
	finditem ITEM_PURPLE_SWEETS, 1
	goto HIDDEN_GROTTO_FIND_ITEM_1

HIDDEN_GROTTO_FIND_ITEM_10:
# 441 "data/maps/HiddenGrottos/scripts.pory"
	finditem ITEM_CHOCOLATE_CAKE, 1
	goto HIDDEN_GROTTO_FIND_ITEM_1

HIDDEN_GROTTO_FIND_ITEM_11:
# 443 "data/maps/HiddenGrottos/scripts.pory"
	finditem ITEM_MINT_CAKE, 1
	goto HIDDEN_GROTTO_FIND_ITEM_1

HIDDEN_GROTTO_FIND_ITEM_12:
# 445 "data/maps/HiddenGrottos/scripts.pory"
	finditem ITEM_HWEEN_MASK, 1
	goto HIDDEN_GROTTO_FIND_ITEM_1

HIDDEN_GROTTO_FIND_ITEM_13:
# 447 "data/maps/HiddenGrottos/scripts.pory"
	finditem ITEM_EMPTY_BUCKET, 1
	goto HIDDEN_GROTTO_FIND_ITEM_1

HIDDEN_GROTTO_FIND_ITEM_14:
# 449 "data/maps/HiddenGrottos/scripts.pory"
	finditem ITEM_DRAGON_SCIMITAR, 1
	goto HIDDEN_GROTTO_FIND_ITEM_1

HIDDEN_GROTTO_FIND_ITEM_15:
# 451 "data/maps/HiddenGrottos/scripts.pory"
	finditem ITEM_ELEMENTAL_POUCH, 5
	goto HIDDEN_GROTTO_FIND_ITEM_1

HIDDEN_GROTTO_FIND_ITEM_16:
# 453 "data/maps/HiddenGrottos/scripts.pory"
	finditem ITEM_BLACK_POUCH, 15
	goto HIDDEN_GROTTO_FIND_ITEM_1

HIDDEN_GROTTO_FIND_ITEM_17:
# 455 "data/maps/HiddenGrottos/scripts.pory"
	finditem ITEM_NORMAL_POUCH, 20
	goto HIDDEN_GROTTO_FIND_ITEM_1

HIDDEN_GROTTO_FIND_ITEM_18:
# 457 "data/maps/HiddenGrottos/scripts.pory"
	finditem ITEM_SPIRIT_CHARM, 1
	goto HIDDEN_GROTTO_FIND_ITEM_1

HIDDEN_GROTTO_FIND_ITEM_19:
# 459 "data/maps/HiddenGrottos/scripts.pory"
	finditem ITEM_GODRABBITFOOT, 1
	goto HIDDEN_GROTTO_FIND_ITEM_1

HIDDEN_GROTTO_FIND_ITEM_20:
# 461 "data/maps/HiddenGrottos/scripts.pory"
	finditem ITEM_CABBAGE, 1
	goto HIDDEN_GROTTO_FIND_ITEM_1

HIDDEN_GROTTO_FIND_ITEM_21:
# 463 "data/maps/HiddenGrottos/scripts.pory"
	finditem ITEM_PURPLE_SWEETS, 5
	goto HIDDEN_GROTTO_FIND_ITEM_1

HIDDEN_GROTTO_FIND_ITEM_22:
# 465 "data/maps/HiddenGrottos/scripts.pory"
	finditem ITEM_CABBAGE, 1
	goto HIDDEN_GROTTO_FIND_ITEM_1

HIDDEN_GROTTO_FIND_ITEM_23:
# 467 "data/maps/HiddenGrottos/scripts.pory"
	finditem ITEM_PARTY_HAT, 1
	goto HIDDEN_GROTTO_FIND_ITEM_1

HIDDEN_GROTTO_FIND_ITEM_24:
# 469 "data/maps/HiddenGrottos/scripts.pory"
	finditem ITEM_GODSWORD, 1
	goto HIDDEN_GROTTO_FIND_ITEM_1

HIDDEN_GROTTO_FIND_ITEM_25:
# 471 "data/maps/HiddenGrottos/scripts.pory"
	finditem ITEM_CABBAGE, 1
	goto HIDDEN_GROTTO_FIND_ITEM_1

HIDDEN_GROTTO_FIND_ITEM_26:
# 473 "data/maps/HiddenGrottos/scripts.pory"
	finditem ITEM_DRAGON_POUCH, 1
	goto HIDDEN_GROTTO_FIND_ITEM_1

HIDDEN_GROTTO_FIND_ITEM_27:
# 475 "data/maps/HiddenGrottos/scripts.pory"
	finditem ITEM_GRANITE_MAUL, 1
	goto HIDDEN_GROTTO_FIND_ITEM_1

HIDDEN_GROTTO_FIND_ITEM_28:
# 477 "data/maps/HiddenGrottos/scripts.pory"
	finditem ITEM_DRAGON_CLAWS, 1
	goto HIDDEN_GROTTO_FIND_ITEM_1

HIDDEN_GROTTO_FIND_ITEM_29:
# 479 "data/maps/HiddenGrottos/scripts.pory"
	finditem ITEM_BREAD, 1
	goto HIDDEN_GROTTO_FIND_ITEM_1

HIDDEN_GROTTO_FIND_ITEM_30:
# 481 "data/maps/HiddenGrottos/scripts.pory"
	finditem ITEM_CABBAGE, 5
	goto HIDDEN_GROTTO_FIND_ITEM_1


HIDDEN_GROTTO_ENTRY_Text_0:
# 13 "data/maps/HiddenGrottos/scripts.pory"
	.string "You've found a path between the trees!\p"
	.string "Will you follow it?$"

ENCOUNTER_CAT_Text_0:
# 295 "data/maps/HiddenGrottos/scripts.pory"
	.string "Cat$"

ENCOUNTER_CAT_Text_1:
# 297 "data/maps/HiddenGrottos/scripts.pory"
	.string "MEEEOWW!$"

ENCOUNTER_DOG_Text_0:
# 322 "data/maps/HiddenGrottos/scripts.pory"
	.string "Dog$"

ENCOUNTER_DOG_Text_1:
# 324 "data/maps/HiddenGrottos/scripts.pory"
	.string "WOOOF!$"

ENCOUNTER_UNICORN_Text_0:
# 349 "data/maps/HiddenGrottos/scripts.pory"
	.string "UNICORN$"

ENCOUNTER_UNICORN_Text_1:
# 351 "data/maps/HiddenGrottos/scripts.pory"
	.string "NEIIIGH!$"

ENCOUNTER_RANDOM_Text_0:
# 376 "data/maps/HiddenGrottos/scripts.pory"
	.string "Something jumps at you from the\n"
	.string "shadows!$"

ENCOUNTER_RANDOM_Text_1:
# 378 "data/maps/HiddenGrottos/scripts.pory"
	.string "RAUGHOUGH!$"
