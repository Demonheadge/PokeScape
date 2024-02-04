Lumbridge_Swamp_MapScripts::
# 2 "data/maps/Lumbridge_Swamp/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Lumbridge_Swamp_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Lumbridge_Swamp_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/Lumbridge_Swamp/scripts.pory"
	setvar VAR_EVOLUTION_MAP_STATE, 1
# 4 "data/maps/Lumbridge_Swamp/scripts.pory"
	compare VAR_POKESCAPE_GAMEMODE_STATE, 0
	goto_if_eq Lumbridge_Swamp_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
# 12 "data/maps/Lumbridge_Swamp/scripts.pory"
	call LUMBRIDGE_SWAMP_STATE
	return

Lumbridge_Swamp_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 6 "data/maps/Lumbridge_Swamp/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, Lumbridge_Swamp_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
	return

Lumbridge_Swamp_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 7 "data/maps/Lumbridge_Swamp/scripts.pory"
	call LUMBRIDGE_SWAMP_STATE
	return


LUMBRIDGE_SWAMP_STATE::
# 18 "data/maps/Lumbridge_Swamp/scripts.pory"
	removeobject 4
# 19 "data/maps/Lumbridge_Swamp/scripts.pory"
	setflag FLAG_TEMP_5
# 20 "data/maps/Lumbridge_Swamp/scripts.pory"
	removeobject 8
# 21 "data/maps/Lumbridge_Swamp/scripts.pory"
	setflag FLAG_TEMP_5
	return


BLOCK_LumbridgeSwamp_HAM::
# 27 "data/maps/Lumbridge_Swamp/scripts.pory"
	lock
# 28 "data/maps/Lumbridge_Swamp/scripts.pory"
	applymovement 9, MOVEMENT_LUMBRIDGESWAMP_PINKMAN
# 29 "data/maps/Lumbridge_Swamp/scripts.pory"
	namebox BLOCK_LumbridgeSwamp_HAM_Text_0
# 30 "data/maps/Lumbridge_Swamp/scripts.pory"
	msgbox BLOCK_LumbridgeSwamp_HAM_Text_1
# 31 "data/maps/Lumbridge_Swamp/scripts.pory"
	hidenamebox
# 32 "data/maps/Lumbridge_Swamp/scripts.pory"
	waitmovement 0
# 33 "data/maps/Lumbridge_Swamp/scripts.pory"
	applymovement 4, MOVEMENT_LUMBRIDGESWAMP_PINKGIRL_1
# 34 "data/maps/Lumbridge_Swamp/scripts.pory"
	namebox BLOCK_LumbridgeSwamp_HAM_Text_2
# 35 "data/maps/Lumbridge_Swamp/scripts.pory"
	msgbox BLOCK_LumbridgeSwamp_HAM_Text_3
# 36 "data/maps/Lumbridge_Swamp/scripts.pory"
	waitmovement 0
# 37 "data/maps/Lumbridge_Swamp/scripts.pory"
	hidenamebox
# 38 "data/maps/Lumbridge_Swamp/scripts.pory"
	namebox BLOCK_LumbridgeSwamp_HAM_Text_0
# 39 "data/maps/Lumbridge_Swamp/scripts.pory"
	msgbox BLOCK_LumbridgeSwamp_HAM_Text_4
# 40 "data/maps/Lumbridge_Swamp/scripts.pory"
	hidenamebox
# 41 "data/maps/Lumbridge_Swamp/scripts.pory"
	applymovement 4, MOVEMENT_LUMBRIDGESWAMP_PINKGIRL_2
# 42 "data/maps/Lumbridge_Swamp/scripts.pory"
	waitmovement 0
# 43 "data/maps/Lumbridge_Swamp/scripts.pory"
	release
	end


# 48 "data/maps/Lumbridge_Swamp/scripts.pory"
MOVEMENT_LUMBRIDGESWAMP_PINKMAN:
# 49 "data/maps/Lumbridge_Swamp/scripts.pory"
	walk_in_place_fast_up
# 49 "data/maps/Lumbridge_Swamp/scripts.pory"
	walk_in_place_fast_up
# 49 "data/maps/Lumbridge_Swamp/scripts.pory"
	walk_in_place_fast_up
	step_end

# 52 "data/maps/Lumbridge_Swamp/scripts.pory"
MOVEMENT_LUMBRIDGESWAMP_PINKGIRL_1:
# 53 "data/maps/Lumbridge_Swamp/scripts.pory"
	face_right
	step_end

# 56 "data/maps/Lumbridge_Swamp/scripts.pory"
MOVEMENT_LUMBRIDGESWAMP_PINKGIRL_2:
# 57 "data/maps/Lumbridge_Swamp/scripts.pory"
	face_up
	step_end

BATTLE_LumbridgeSwamp_TRAINER_1::
# 67 "data/maps/Lumbridge_Swamp/scripts.pory"
	trainerbattle_single TRAINER_RSN_LUM_SWAMP, BATTLE_LumbridgeSwamp_TRAINER_1_Text_0, BATTLE_LumbridgeSwamp_TRAINER_1_Text_1
# 68 "data/maps/Lumbridge_Swamp/scripts.pory"
	namebox BATTLE_LumbridgeSwamp_TRAINER_1_Text_2
# 69 "data/maps/Lumbridge_Swamp/scripts.pory"
	msgbox BATTLE_LumbridgeSwamp_TRAINER_1_Text_3
# 70 "data/maps/Lumbridge_Swamp/scripts.pory"
	hidenamebox
# 71 "data/maps/Lumbridge_Swamp/scripts.pory"
	closemessage
	end


BATTLE_LumbridgeSwamp_TRAINER_2::
# 77 "data/maps/Lumbridge_Swamp/scripts.pory"
	trainerbattle_single TRAINER_SKELETON_LUM_SWAMP, BATTLE_LumbridgeSwamp_TRAINER_2_Text_0, BATTLE_LumbridgeSwamp_TRAINER_2_Text_1
# 78 "data/maps/Lumbridge_Swamp/scripts.pory"
	namebox BATTLE_LumbridgeSwamp_TRAINER_2_Text_2
# 79 "data/maps/Lumbridge_Swamp/scripts.pory"
	msgbox BATTLE_LumbridgeSwamp_TRAINER_2_Text_1
# 80 "data/maps/Lumbridge_Swamp/scripts.pory"
	hidenamebox
# 81 "data/maps/Lumbridge_Swamp/scripts.pory"
	closemessage
	end


BATTLE_LumbridgeSwamp_TRAINER_3::
# 87 "data/maps/Lumbridge_Swamp/scripts.pory"
	trainerbattle_single TRAINER_MUGGER_LUM_SWAMP, BATTLE_LumbridgeSwamp_TRAINER_3_Text_0, BATTLE_LumbridgeSwamp_TRAINER_3_Text_1
# 88 "data/maps/Lumbridge_Swamp/scripts.pory"
	namebox BATTLE_LumbridgeSwamp_TRAINER_3_Text_2
# 89 "data/maps/Lumbridge_Swamp/scripts.pory"
	msgbox BATTLE_LumbridgeSwamp_TRAINER_3_Text_1
# 90 "data/maps/Lumbridge_Swamp/scripts.pory"
	hidenamebox
# 91 "data/maps/Lumbridge_Swamp/scripts.pory"
	closemessage
	end


BATTLE_LumbridgeSwamp_TRAINER_4::
# 96 "data/maps/Lumbridge_Swamp/scripts.pory"
	trainerbattle_single TRAINER_LUM_SWAMP_GRASSTEETH, BATTLE_LumbridgeSwamp_TRAINER_4_Text_0, BATTLE_LumbridgeSwamp_TRAINER_4_Text_1
# 97 "data/maps/Lumbridge_Swamp/scripts.pory"
	namebox BATTLE_LumbridgeSwamp_TRAINER_4_Text_2
# 98 "data/maps/Lumbridge_Swamp/scripts.pory"
	msgbox BATTLE_LumbridgeSwamp_TRAINER_4_Text_1
# 99 "data/maps/Lumbridge_Swamp/scripts.pory"
	hidenamebox
# 100 "data/maps/Lumbridge_Swamp/scripts.pory"
	closemessage
	end


LumSwampSign::
# 108 "data/maps/Lumbridge_Swamp/scripts.pory"
	msgbox LumSwampSign_Text_0, MSGBOX_SIGN
# 109 "data/maps/Lumbridge_Swamp/scripts.pory"
	release
	return


LUMBRIDGESWAMP_CANDLESELLER::
# 122 "data/maps/Lumbridge_Swamp/scripts.pory"
	lock
# 123 "data/maps/Lumbridge_Swamp/scripts.pory"
	faceplayer
# 124 "data/maps/Lumbridge_Swamp/scripts.pory"
	msgbox LUMBRIDGESWAMP_CANDLESELLER_Text_0
# 125 "data/maps/Lumbridge_Swamp/scripts.pory"
	checkitem ITEM_FLASH_TOOL, 1
# 126 "data/maps/Lumbridge_Swamp/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq LUMBRIDGESWAMP_CANDLESELLER_2
# 135 "data/maps/Lumbridge_Swamp/scripts.pory"
	closemessage
# 136 "data/maps/Lumbridge_Swamp/scripts.pory"
	release
	end

# 139 "data/maps/Lumbridge_Swamp/scripts.pory"
	closemessage
# 140 "data/maps/Lumbridge_Swamp/scripts.pory"
	release
	end

LUMBRIDGESWAMP_CANDLESELLER_2:
# 127 "data/maps/Lumbridge_Swamp/scripts.pory"
	msgbox LUMBRIDGESWAMP_CANDLESELLER_Text_1
# 128 "data/maps/Lumbridge_Swamp/scripts.pory"
	giveitem ITEM_FLASH_TOOL
# 129 "data/maps/Lumbridge_Swamp/scripts.pory"
	msgbox LUMBRIDGESWAMP_CANDLESELLER_Text_2
# 130 "data/maps/Lumbridge_Swamp/scripts.pory"
	closemessage
# 131 "data/maps/Lumbridge_Swamp/scripts.pory"
	release
	end


LUMBRIDGESWAMP_FAIRY::
# 147 "data/maps/Lumbridge_Swamp/scripts.pory"
	lock
# 148 "data/maps/Lumbridge_Swamp/scripts.pory"
	faceplayer
# 149 "data/maps/Lumbridge_Swamp/scripts.pory"
	namebox LUMBRIDGESWAMP_FAIRY_Text_0
# 150 "data/maps/Lumbridge_Swamp/scripts.pory"
	msgbox LUMBRIDGESWAMP_FAIRY_Text_1
# 151 "data/maps/Lumbridge_Swamp/scripts.pory"
	hidenamebox
# 152 "data/maps/Lumbridge_Swamp/scripts.pory"
	closemessage
# 153 "data/maps/Lumbridge_Swamp/scripts.pory"
	release
	end


LUMBRIDGESWAMP_Urhney::
# 160 "data/maps/Lumbridge_Swamp/scripts.pory"
	lock
# 161 "data/maps/Lumbridge_Swamp/scripts.pory"
	faceplayer
# 162 "data/maps/Lumbridge_Swamp/scripts.pory"
	checkitem ITEM_GHOSTSPEAK_AMULET, 1
# 163 "data/maps/Lumbridge_Swamp/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq LUMBRIDGESWAMP_Urhney_2
# 177 "data/maps/Lumbridge_Swamp/scripts.pory"
	namebox LUMBRIDGESWAMP_Urhney_Text_0
# 178 "data/maps/Lumbridge_Swamp/scripts.pory"
	msgbox LUMBRIDGESWAMP_Urhney_Text_3
# 179 "data/maps/Lumbridge_Swamp/scripts.pory"
	closemessage
# 180 "data/maps/Lumbridge_Swamp/scripts.pory"
	hidenamebox
# 181 "data/maps/Lumbridge_Swamp/scripts.pory"
	release
	end

# 184 "data/maps/Lumbridge_Swamp/scripts.pory"
	closemessage
# 185 "data/maps/Lumbridge_Swamp/scripts.pory"
	release
	end

LUMBRIDGESWAMP_Urhney_2:
# 164 "data/maps/Lumbridge_Swamp/scripts.pory"
	namebox LUMBRIDGESWAMP_Urhney_Text_0
# 165 "data/maps/Lumbridge_Swamp/scripts.pory"
	msgbox LUMBRIDGESWAMP_Urhney_Text_1
# 166 "data/maps/Lumbridge_Swamp/scripts.pory"
	hidenamebox
# 167 "data/maps/Lumbridge_Swamp/scripts.pory"
	closemessage
# 168 "data/maps/Lumbridge_Swamp/scripts.pory"
	giveitem ITEM_GHOSTSPEAK_AMULET
# 169 "data/maps/Lumbridge_Swamp/scripts.pory"
	namebox LUMBRIDGESWAMP_Urhney_Text_0
# 170 "data/maps/Lumbridge_Swamp/scripts.pory"
	msgbox LUMBRIDGESWAMP_Urhney_Text_2
# 171 "data/maps/Lumbridge_Swamp/scripts.pory"
	hidenamebox
# 172 "data/maps/Lumbridge_Swamp/scripts.pory"
	closemessage
# 173 "data/maps/Lumbridge_Swamp/scripts.pory"
	release
	end


LUMBRIDGESWAMP_BOOK::
# 192 "data/maps/Lumbridge_Swamp/scripts.pory"
	msgbox LUMBRIDGESWAMP_BOOK_Text_0
# 193 "data/maps/Lumbridge_Swamp/scripts.pory"
	hidenamebox
# 194 "data/maps/Lumbridge_Swamp/scripts.pory"
	closemessage
# 195 "data/maps/Lumbridge_Swamp/scripts.pory"
	release
	end


EventScript_RestBed::
# 201 "data/maps/Lumbridge_Swamp/scripts.pory"
	lock
# 202 "data/maps/Lumbridge_Swamp/scripts.pory"
	msgbox EventScript_RestBed_Text_0, MSGBOX_YESNO
# 203 "data/maps/Lumbridge_Swamp/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne EventScript_RestBed_2
EventScript_RestBed_1:
# 214 "data/maps/Lumbridge_Swamp/scripts.pory"
	release
	end

EventScript_RestBed_2:
# 205 "data/maps/Lumbridge_Swamp/scripts.pory"
	fadescreen FADE_TO_BLACK
# 206 "data/maps/Lumbridge_Swamp/scripts.pory"
	closemessage
# 207 "data/maps/Lumbridge_Swamp/scripts.pory"
	playfanfare MUS_HEAL
# 208 "data/maps/Lumbridge_Swamp/scripts.pory"
	waitfanfare
# 209 "data/maps/Lumbridge_Swamp/scripts.pory"
	special HealPlayerParty
# 210 "data/maps/Lumbridge_Swamp/scripts.pory"
	fadescreen FADE_FROM_BLACK
	goto EventScript_RestBed_1


BLOCK_LumbridgeSwamp_HAM_Text_0:
# 29 "data/maps/Lumbridge_Swamp/scripts.pory"
	.string "Pink Man$"

BLOCK_LumbridgeSwamp_HAM_Text_1:
# 30 "data/maps/Lumbridge_Swamp/scripts.pory"
	.string "Oh come on!\p"
	.string "Newcomer map, more like trash map!$"

BLOCK_LumbridgeSwamp_HAM_Text_2:
# 34 "data/maps/Lumbridge_Swamp/scripts.pory"
	.string "Pink Girl$"

BLOCK_LumbridgeSwamp_HAM_Text_3:
# 35 "data/maps/Lumbridge_Swamp/scripts.pory"
	.string "You are looking at it upside down.\p"
	.string "See the hideout should be right through here.$"

BLOCK_LumbridgeSwamp_HAM_Text_4:
# 39 "data/maps/Lumbridge_Swamp/scripts.pory"
	.string "…$"

BATTLE_LumbridgeSwamp_TRAINER_1_Text_0:
# 67 "data/maps/Lumbridge_Swamp/scripts.pory"
	.string "This is me swamp!$"

BATTLE_LumbridgeSwamp_TRAINER_1_Text_1:
# 67 "data/maps/Lumbridge_Swamp/scripts.pory"
	.string "Get out of me swamp!$"

BATTLE_LumbridgeSwamp_TRAINER_1_Text_2:
# 68 "data/maps/Lumbridge_Swamp/scripts.pory"
	.string "Slimethighs$"

BATTLE_LumbridgeSwamp_TRAINER_1_Text_3:
# 69 "data/maps/Lumbridge_Swamp/scripts.pory"
	.string "Me do not like you.$"

BATTLE_LumbridgeSwamp_TRAINER_2_Text_0:
# 77 "data/maps/Lumbridge_Swamp/scripts.pory"
	.string "Rattle, rattle!$"

BATTLE_LumbridgeSwamp_TRAINER_2_Text_1:
# 77 "data/maps/Lumbridge_Swamp/scripts.pory"
	.string "Rattle…$"

BATTLE_LumbridgeSwamp_TRAINER_2_Text_2:
# 78 "data/maps/Lumbridge_Swamp/scripts.pory"
	.string "Brittlebones$"

BATTLE_LumbridgeSwamp_TRAINER_3_Text_0:
# 87 "data/maps/Lumbridge_Swamp/scripts.pory"
	.string "Stay still and nobody gets hurt!$"

BATTLE_LumbridgeSwamp_TRAINER_3_Text_1:
# 87 "data/maps/Lumbridge_Swamp/scripts.pory"
	.string "My feelings got hurt by your victory.$"

BATTLE_LumbridgeSwamp_TRAINER_3_Text_2:
# 88 "data/maps/Lumbridge_Swamp/scripts.pory"
	.string "Robin$"

BATTLE_LumbridgeSwamp_TRAINER_4_Text_0:
# 96 "data/maps/Lumbridge_Swamp/scripts.pory"
	.string "Did pink humans say to find me?$"

BATTLE_LumbridgeSwamp_TRAINER_4_Text_1:
# 96 "data/maps/Lumbridge_Swamp/scripts.pory"
	.string "Pink humans chase relentless.\p"
	.string "Me scared.$"

BATTLE_LumbridgeSwamp_TRAINER_4_Text_2:
# 97 "data/maps/Lumbridge_Swamp/scripts.pory"
	.string "Grassteeth$"

LumSwampSign_Text_0:
# 108 "data/maps/Lumbridge_Swamp/scripts.pory"
	.string "WARNING: Goblins below!$"

LUMBRIDGESWAMP_CANDLESELLER_Text_0:
# 124 "data/maps/Lumbridge_Swamp/scripts.pory"
	.string "I wouldn't go down there without a light source.\p"
	.string "It's dangerous!$"

LUMBRIDGESWAMP_CANDLESELLER_Text_1:
# 127 "data/maps/Lumbridge_Swamp/scripts.pory"
	.string "But…{PAUSE 15}…{PAUSE 15}…\p"
	.string "If you are serious about going down there, take this.$"

LUMBRIDGESWAMP_CANDLESELLER_Text_2:
# 129 "data/maps/Lumbridge_Swamp/scripts.pory"
	.string "Be careful down there.$"

LUMBRIDGESWAMP_FAIRY_Text_0:
# 149 "data/maps/Lumbridge_Swamp/scripts.pory"
	.string "Fairy$"

LUMBRIDGESWAMP_FAIRY_Text_1:
# 150 "data/maps/Lumbridge_Swamp/scripts.pory"
	.string "Wh-what!?\p"
	.string "There is no secret passage to Zanaris here, no way!$"

LUMBRIDGESWAMP_Urhney_Text_0:
# 164 "data/maps/Lumbridge_Swamp/scripts.pory"
	.string "Father Urhney$"

LUMBRIDGESWAMP_Urhney_Text_1:
# 165 "data/maps/Lumbridge_Swamp/scripts.pory"
	.string "Urgh, I wish you adventurers would stop barging into my house like this all the time.\p"
	.string "Say no more, this is what you want isn't it?$"

LUMBRIDGESWAMP_Urhney_Text_2:
# 170 "data/maps/Lumbridge_Swamp/scripts.pory"
	.string "Now go away and let me meditate in peace!$"

LUMBRIDGESWAMP_Urhney_Text_3:
# 178 "data/maps/Lumbridge_Swamp/scripts.pory"
	.string "Go away I already gave you that Ghostspeak amulet!\p"
	.string "Let me meditate in peace!$"

LUMBRIDGESWAMP_BOOK_Text_0:
# 192 "data/maps/Lumbridge_Swamp/scripts.pory"
	.string "The book is titled,\n"
	.string "101 Ways to successfully Meditate.\p"
	.string "Step 1, Live far away from civilation.\p"
	.string "Step 2, make sure it is far enough away that adventurers don't light fires at your windows.$"

EventScript_RestBed_Text_0:
# 202 "data/maps/Lumbridge_Swamp/scripts.pory"
	.string "Would you like to take a rest?$"
