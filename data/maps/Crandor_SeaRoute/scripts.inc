Crandor_SeaRoute_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Crandor_SeaRoute_MapScripts_MAP_SCRIPT_ON_TRANSITION
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Crandor_SeaRoute_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Crandor_SeaRoute_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Crandor_SeaRoute_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	call WEATHER_CHANGE_SEA_ROUTES_ROUGH
	call CRANDOR_SEAROUTE_STATE
	return

Crandor_SeaRoute_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
	map_script_2 VAR_TEMP_B, 1, hideplayer
	.2byte 0

Crandor_SeaRoute_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_TEMP_B, 1, CRANDOR_SHIP_SCENE
	.2byte 0


CRANDOR_SEAROUTE_STATE::
	compare VAR_POKESCAPE_STORYMODE_PROGRESS, 130
	goto_if_eq CRANDOR_SEAROUTE_STATE_2
	setflag FLAG_TEMP_10
	setflag FLAG_TEMP_11
	setflag FLAG_TEMP_13
CRANDOR_SEAROUTE_STATE_1:
	goto_if_set FLAG_SEA_TROLL, CRANDOR_SEAROUTE_STATE_6
CRANDOR_SEAROUTE_STATE_5:
	return

CRANDOR_SEAROUTE_STATE_2:
	setvar VAR_TEMP_B, 1
	goto CRANDOR_SEAROUTE_STATE_1

CRANDOR_SEAROUTE_STATE_6:
	setflag FLAG_TEMP_1
	removeobject 5
	goto CRANDOR_SEAROUTE_STATE_5


hideplayer::
	setweather WEATHER_SUNNY
	doweather
	hideobjectat OBJ_EVENT_ID_PLAYER, MAP_CRANDOR_SEA_ROUTE
	return


TELEPORT_TO_SHIP_SCENE::
	applymovement 34, movement_elvargflyover_left
	waitmovement 0
	end


CRANDOR_SHIP_SCENE::
	lockall
	setflag FLAG_TEMP_10
	removeobject 2
	setobjectxyperm 1, 34, 14
	setobjectxyperm 2, 26, 8
	playbgm MUS_PS_SURFING, 0
	applymovement OBJ_EVENT_ID_PLAYER, movement_walk_slow_left10
	applymovement 3, movement_crandor_ship
	waitmovement 0
	namebox CRANDOR_SHIP_SCENE_Text_0
	msgbox CRANDOR_SHIP_SCENE_Text_1
	closemessage
	hidenamebox
	applymovement OBJ_EVENT_ID_PLAYER, movement_sailing4
	applymovement 3, movement_sailing4
	waitmovement 0
	namebox CRANDOR_SHIP_SCENE_Text_2
	msgbox CRANDOR_SHIP_SCENE_Text_3
	closemessage
	hidenamebox
	applymovement OBJ_EVENT_ID_PLAYER, movement_sailing2
	applymovement 3, movement_sailing2
	waitmovement 0
	setweather WEATHER_RAIN_THUNDERSTORM
	doweather
	namebox CRANDOR_SHIP_SCENE_Text_2
	msgbox CRANDOR_SHIP_SCENE_Text_4
	closemessage
	hidenamebox
	applymovement OBJ_EVENT_ID_PLAYER, movement_sailing2
	applymovement 3, movement_sailing2
	waitmovement 0
	delay 32
	setobjectxy 1, 35, 14
	playse SE_M_FLY
	applymovement 1, movement_elvargflyover2
	waitmovement 0
	playbgm MUS_PS_VS_CHAOS_TUNNELS, 0
	namebox CRANDOR_SHIP_SCENE_Text_0
	msgbox CRANDOR_SHIP_SCENE_Text_5
	closemessage
	hidenamebox
	namebox CRANDOR_SHIP_SCENE_Text_2
	msgbox CRANDOR_SHIP_SCENE_Text_6
	closemessage
	hidenamebox
	applymovement OBJ_EVENT_ID_PLAYER, movement_sailing2
	applymovement 3, movement_sailing2
	waitmovement 0
	setobjectxy 1, 40, 5
	playse SE_M_FLY
	applymovement 1, movement_elvargflyover_left
	setvar VAR_0x8004, 1 @ vertical pan
	setvar VAR_0x8005, 1 @ horizontal pan
	setvar VAR_0x8006, 8 @ num shakes
	setvar VAR_0x8007, 3 @ shake delay
	special ShakeCamera
	setmetatile 34, 5, 834, 0
	special DrawWholeMapView
	delay 32
	setvar VAR_0x8004, 1 @ vertical pan
	setvar VAR_0x8005, 1 @ horizontal pan
	setvar VAR_0x8006, 8 @ num shakes
	setvar VAR_0x8007, 3 @ shake delay
	special ShakeCamera
	setmetatile 31, 10, 834, 0
	special DrawWholeMapView
	delay 32
	setvar VAR_0x8004, 1 @ vertical pan
	setvar VAR_0x8005, 1 @ horizontal pan
	setvar VAR_0x8006, 8 @ num shakes
	setvar VAR_0x8007, 3 @ shake delay
	special ShakeCamera
	setmetatile 30, 4, 834, 0
	special DrawWholeMapView
	waitmovement 0
	setflag FLAG_TEMP_11
	removeobject 1
	namebox CRANDOR_SHIP_SCENE_Text_2
	msgbox CRANDOR_SHIP_SCENE_Text_7
	closemessage
	hidenamebox
	setvar VAR_0x8004, 1 @ vertical pan
	setvar VAR_0x8005, 1 @ horizontal pan
	setvar VAR_0x8006, 8 @ num shakes
	setvar VAR_0x8007, 3 @ shake delay
	special ShakeCamera
	setmetatile 24, 5, 834, 0
	special DrawWholeMapView
	waitstate
	applymovement OBJ_EVENT_ID_PLAYER, movement_sailing4
	applymovement 3, movement_sailing4
	waitmovement 0
	setvar VAR_0x8004, 1 @ vertical pan
	setvar VAR_0x8005, 1 @ horizontal pan
	setvar VAR_0x8006, 8 @ num shakes
	setvar VAR_0x8007, 3 @ shake delay
	special ShakeCamera
	setmetatile 31, 7, 834, 0
	special DrawWholeMapView
	waitstate
	applymovement OBJ_EVENT_ID_PLAYER, movement_sailing4
	applymovement 3, movement_sailing4
	waitmovement 0
	setvar VAR_0x8004, 1 @ vertical pan
	setvar VAR_0x8005, 1 @ horizontal pan
	setvar VAR_0x8006, 8 @ num shakes
	setvar VAR_0x8007, 3 @ shake delay
	special ShakeCamera
	setmetatile 22, 10, 834, 0
	special DrawWholeMapView
	waitstate
	namebox CRANDOR_SHIP_SCENE_Text_0
	msgbox CRANDOR_SHIP_SCENE_Text_8
	closemessage
	hidenamebox
	clearflag FLAG_TEMP_10
	addobject 2
	applymovement 2, movement_cabinboy
	setvar VAR_0x8004, 1 @ vertical pan
	setvar VAR_0x8005, 1 @ horizontal pan
	setvar VAR_0x8006, 8 @ num shakes
	setvar VAR_0x8007, 3 @ shake delay
	special ShakeCamera
	setmetatile 26, 9, 834, 0
	special DrawWholeMapView
	waitstate
	namebox CRANDOR_SHIP_SCENE_Text_2
	msgbox CRANDOR_SHIP_SCENE_Text_9
	closemessage
	hidenamebox
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, movement_sailing4
	applymovement 3, movement_sailing4
	waitmovement 0
	setvar VAR_0x8004, 1 @ vertical pan
	setvar VAR_0x8005, 1 @ horizontal pan
	setvar VAR_0x8006, 8 @ num shakes
	setvar VAR_0x8007, 3 @ shake delay
	special ShakeCamera
	setmetatile 25, 8, 834, 0
	special DrawWholeMapView
	waitstate
	namebox CRANDOR_SHIP_SCENE_Text_2
	msgbox CRANDOR_SHIP_SCENE_Text_10
	closemessage
	hidenamebox
	applymovement OBJ_EVENT_ID_PLAYER, movement_sailing4
	applymovement 3, movement_sailing4
	waitmovement 0
	setvar VAR_0x8004, 1 @ vertical pan
	setvar VAR_0x8005, 1 @ horizontal pan
	setvar VAR_0x8006, 8 @ num shakes
	setvar VAR_0x8007, 3 @ shake delay
	special ShakeCamera
	setmetatile 22, 7, 834, 0
	special DrawWholeMapView
	waitstate
	applymovement OBJ_EVENT_ID_PLAYER, movement_sailing3
	applymovement 3, movement_sailing3
	delay 32
	fadescreenswapbuffers FADE_TO_BLACK
	playse SE_M_EARTHQUAKE
	namebox CRANDOR_SHIP_SCENE_Text_2
	msgbox CRANDOR_SHIP_SCENE_Text_11
	closemessage
	hidenamebox
	setvar VAR_POKESCAPE_STORYMODE_PROGRESS, 135
	delay 60
	warp MAP_CRANDOR, 1
	waitstate
	return


movement_setinvisible:
	set_invisible
	step_end

movement_walk_slow_left10:
	walk_slow_left
	walk_slow_left
	walk_slow_left
	walk_slow_left
	walk_slow_left
	walk_slow_left
	walk_slow_left
	walk_slow_left
	walk_slow_left
	walk_slow_left
	step_end

movement_crandor_ship:
	levitate
	walk_slow_left
	walk_slow_left
	walk_slow_left
	walk_slow_left
	walk_slow_left
	walk_slow_left
	walk_slow_left
	walk_slow_left
	walk_slow_left
	walk_slow_left
	step_end

movement_sailing2:
	walk_slow_left
	walk_slow_left
	walk_slow_left
	walk_slow_left
	walk_slow_left
	walk_slow_left
	walk_slow_left
	walk_slow_left
	walk_slow_left
	walk_slow_left
	step_end

movement_sailing4:
	walk_slow_left
	walk_slow_left
	step_end

movement_sailing3:
	lock_facing_direction
	figure_8
	step_end

movement_cabinboy:
	face_down
	lock_facing_direction
	walk_slow_right
	unlock_facing_direction
	face_left
	lock_facing_direction
	walk_slow_right
	walk_slow_right
	unlock_facing_direction
	face_up
	lock_facing_direction
	walk_slow_right
	unlock_facing_direction
	face_down
	lock_facing_direction
	walk_slow_right
	walk_slow_right
	unlock_facing_direction
	face_right
	lock_facing_direction
	walk_slow_right
	unlock_facing_direction
	face_left
	lock_facing_direction
	walk_slow_right
	walk_slow_right
	unlock_facing_direction
	set_invisible
	step_end

movement_elvarg_test:
	face_left
	lock_facing_direction
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	walk_right
	walk_up
	walk_down
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	unlock_facing_direction
	face_up
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	face_down
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	face_right
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	step_end

ENCOUNTER_CHAOS_ELEMENTAL::
	lock
	namebox ENCOUNTER_CHAOS_ELEMENTAL_Text_0
	playmoncry SPECIES_CHAOS_ELE, 0
	msgbox ENCOUNTER_CHAOS_ELEMENTAL_Text_1
	waitmoncry
	hidenamebox
	closemessage
	delay 1
	setwildbattle SPECIES_CHAOS_ELE, 30, ITEM_NONE
	special BattleSetup_StartLegendaryBattle
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq ENCOUNTER_CHAOS_ELEMENTAL_2
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq ENCOUNTER_CHAOS_ELEMENTAL_3
	end

ENCOUNTER_CHAOS_ELEMENTAL_2:
	closemessage
	end

ENCOUNTER_CHAOS_ELEMENTAL_3:
	closemessage
	end


playbgmKnight::
	lock
	playbgm MUS_PS_VS_KNIGHTS, 0
	release
	end


playbgmchaostunnels::
	lock
	playbgm MUS_PS_VS_CHAOS_TUNNELS, 0
	release
	end


CRANDOR_EVENT_PORTSARIM_CABIN_BOY::
	lock
	faceplayer
	namebox CRANDOR_SHIP_SCENE_Text_0
	compare VAR_POKESCAPE_GAMEMODE_STATE, 0
	goto_if_eq CRANDOR_EVENT_PORTSARIM_CABIN_BOY_2
CRANDOR_EVENT_PORTSARIM_CABIN_BOY_1:
	msgbox CRANDOR_EVENT_PORTSARIM_CABIN_BOY_Text_1
	closemessage
	hidenamebox
	release
	end

CRANDOR_EVENT_PORTSARIM_CABIN_BOY_2:
	compare VAR_POKESCAPE_STORYMODE_PROGRESS, 130
	goto_if_ge CRANDOR_EVENT_PORTSARIM_CABIN_BOY_4
	goto CRANDOR_EVENT_PORTSARIM_CABIN_BOY_1

CRANDOR_EVENT_PORTSARIM_CABIN_BOY_4:
	msgbox CRANDOR_EVENT_PORTSARIM_CABIN_BOY_Text_0
	closemessage
	hidenamebox
	release
	end


STRANDED_CABIN_BOY::
	lock
	faceplayer
	namebox CRANDOR_SHIP_SCENE_Text_0
	msgbox STRANDED_CABIN_BOY_Text_0
	closemessage
	hidenamebox
	release
	end


ITEM_CRANDOR_SEA_ROUTE_1::
	finditem ITEM_CHAOS_RUNE
	end


ITEM_CRANDOR_SEA_ROUTE_2::
	finditem ITEM_CHAOS_RUNE
	end


ENCOUNTER_SEA_TROLL::
	lock
	delay 32
	setvar VAR_0x8004, 1 @ vertical pan
	setvar VAR_0x8005, 1 @ horizontal pan
	setvar VAR_0x8006, 8 @ num shakes
	setvar VAR_0x8007, 3 @ shake delay
	special ShakeCamera
	delay 60
	setvar VAR_0x8004, 1 @ vertical pan
	setvar VAR_0x8005, 1 @ horizontal pan
	setvar VAR_0x8006, 8 @ num shakes
	setvar VAR_0x8007, 3 @ shake delay
	special ShakeCamera
	delay 60
	setvar VAR_0x8004, 1 @ vertical pan
	setvar VAR_0x8005, 1 @ horizontal pan
	setvar VAR_0x8006, 8 @ num shakes
	setvar VAR_0x8007, 3 @ shake delay
	special ShakeCamera
	delay 60
	playse SE_M_DIVE
	waitse
	namebox ENCOUNTER_SEA_TROLL_Text_0
	playmoncry SPECIES_SEA_TROLL_QUEEN, 0
	msgbox ENCOUNTER_SEA_TROLL_Text_1
	waitmoncry
	hidenamebox
	closemessage
	delay 32
	setwildbattle SPECIES_SEA_TROLL_QUEEN, 40, ITEM_NONE
	special BattleSetup_StartLegendaryBattle
	waitstate
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq ENCOUNTER_SEA_TROLL_2
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq ENCOUNTER_SEA_TROLL_3
ENCOUNTER_SEA_TROLL_1:
	release
	end

ENCOUNTER_SEA_TROLL_2:
	fadescreenswapbuffers FADE_TO_BLACK
	removeobject VAR_LAST_TALKED
	playse SE_M_DIVE
	waitse
	fadescreenswapbuffers FADE_FROM_BLACK
	msgbox ENCOUNTER_SEA_TROLL_Text_2
	closemessage
	goto ENCOUNTER_SEA_TROLL_1

ENCOUNTER_SEA_TROLL_3:
	fadescreenswapbuffers FADE_TO_BLACK
	setflag FLAG_SEA_TROLL
	removeobject VAR_LAST_TALKED
	fadescreenswapbuffers FADE_FROM_BLACK
	msgbox ENCOUNTER_SEA_TROLL_Text_3
	closemessage
	goto ENCOUNTER_SEA_TROLL_1


CRANDOR_SHIP_SCENE_Text_0:
	.string "Cabin Boy$"

CRANDOR_SHIP_SCENE_Text_1:
	.string "Ned are you sure that map is correct?$"

CRANDOR_SHIP_SCENE_Text_2:
	.string "Ned$"

CRANDOR_SHIP_SCENE_Text_3:
	.string "See that scary looking rock?\p"
	.string "It means we are going the right way.$"

CRANDOR_SHIP_SCENE_Text_4:
	.string "Man the sails everyone, we've got a\n"
	.string "storm brewing!$"

CRANDOR_SHIP_SCENE_Text_5:
	.string "What is that?!$"

CRANDOR_SHIP_SCENE_Text_6:
	.string "Cabin Boy, {PLAYER}, are you alright?\p"
	.string "It's getting a bit rough so be careful.$"

CRANDOR_SHIP_SCENE_Text_7:
	.string "We are under attack!$"

CRANDOR_SHIP_SCENE_Text_8:
	.string "Ahhhh I'm falling!$"

CRANDOR_SHIP_SCENE_Text_9:
	.string "Nooo Cabin boy!$"

CRANDOR_SHIP_SCENE_Text_10:
	.string "Watch out {PLAYER}!\p"
	.string "We're crashing!$"

CRANDOR_SHIP_SCENE_Text_11:
	.string "AHHHHHHH!!!$"

ENCOUNTER_CHAOS_ELEMENTAL_Text_0:
	.string "CHAOS ELEMENTAL$"

ENCOUNTER_CHAOS_ELEMENTAL_Text_1:
	.string "SNEEEEEE!$"

CRANDOR_EVENT_PORTSARIM_CABIN_BOY_Text_0:
	.string "Finally the day has come!\p"
	.string "I can set sail with her and make my\n"
	.string "dream come true!\p"
	.string "Although I wish they hadn't renamed her\n"
	.string "to the Lady Falador…$"

CRANDOR_EVENT_PORTSARIM_CABIN_BOY_Text_1:
	.string "This ship is called the Lady Lumbridge!\p"
	.string "One day I hope to set sail with her!\p"
	.string "But alas the lady, she needs a captain.\p"
	.string "Not a wee cabin boy like myself…$"

STRANDED_CABIN_BOY_Text_0:
	.string "{PLAYER}…\n"
	.string "Is… that you?\p"
	.string "I washed up here…\p"
	.string "Please help me get home…$"

ENCOUNTER_SEA_TROLL_Text_0:
	.string "Sea Troll$"

ENCOUNTER_SEA_TROLL_Text_1:
	.string "Skkrrraaaaawwooor!$"

ENCOUNTER_SEA_TROLL_Text_2:
	.string "The Sea Troll seems to have gone into\n"
	.string "hiding.$"

ENCOUNTER_SEA_TROLL_Text_3:
	.string "After capturing the Sea Troll the ocean\n"
	.string "seems slightly more calm…$"
