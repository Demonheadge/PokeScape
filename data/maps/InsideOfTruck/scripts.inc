InsideOfTruck_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, InsideOfTruck_OnLoad
	map_script MAP_SCRIPT_ON_RESUME, InsideOfTruck_OnResume
	.byte 0

InsideOfTruck_OnLoad:
	setmetatile 4, 1, METATILE_InsideOfTruck_ExitLight_Top, FALSE
	setmetatile 4, 2, METATILE_InsideOfTruck_ExitLight_Mid, FALSE
	setmetatile 4, 3, METATILE_InsideOfTruck_ExitLight_Bottom, FALSE
	end

InsideOfTruck_OnResume:
	setstepcallback STEP_CB_TRUCK
	end

InsideOfTruck_EventScript_SetIntroFlags::
	lockall
	setflag FLAG_HIDE_MAP_NAME_POPUP
	checkplayergender
	goto_if_eq VAR_RESULT, MALE, InsideOfTruck_EventScript_SetIntroFlagsMale
	goto_if_eq VAR_RESULT, FEMALE, InsideOfTruck_EventScript_SetIntroFlagsFemale
	end

InsideOfTruck_EventScript_SetIntroFlagsMale::
	setrespawn HEAL_LOCATION_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F
	setvar VAR_LITTLEROOT_INTRO_STATE, 1
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_MOM
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_TRUCK
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_MOM
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_SIBLING
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F_POKE_BALL
	setvar VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 1
	setdynamicwarp MAP_LITTLEROOT_TOWN, 3, 10
	releaseall
	end

InsideOfTruck_EventScript_SetIntroFlagsFemale::
	setrespawn HEAL_LOCATION_LITTLEROOT_TOWN_MAYS_HOUSE_2F
	setvar VAR_LITTLEROOT_INTRO_STATE, 2
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_MOM
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_TRUCK
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_MOM
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_SIBLING
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_2F_POKE_BALL
	setvar VAR_LITTLEROOT_HOUSES_STATE_MAY, 1
	setdynamicwarp MAP_LITTLEROOT_TOWN, 12, 10
	releaseall
	end

InsideOfTruck_EventScript_MovingBox::
	//msgbox InsideOfTruck_Text_BoxPrintedWithMonLogo, MSGBOX_SIGN
    questmenu QUEST_MENU_UNLOCK_QUEST,SIDE_QUEST_1
    questmenu QUEST_MENU_SET_ACTIVE,SIDE_QUEST_1
    questmenu QUEST_MENU_SET_REWARD,SIDE_QUEST_1
    
    questmenu QUEST_MENU_UNLOCK_QUEST,SIDE_QUEST_2
    questmenu QUEST_MENU_SET_ACTIVE,SIDE_QUEST_2
    
    questmenu QUEST_MENU_UNLOCK_QUEST,SIDE_QUEST_3
    questmenu QUEST_MENU_SET_ACTIVE,SIDE_QUEST_3
    
    questmenu QUEST_MENU_UNLOCK_QUEST,SIDE_QUEST_4
    questmenu QUEST_MENU_SET_ACTIVE,SIDE_QUEST_4
    
    questmenu QUEST_MENU_UNLOCK_QUEST,SIDE_QUEST_5
    questmenu QUEST_MENU_SET_ACTIVE,SIDE_QUEST_5
    questmenu QUEST_MENU_SET_REWARD,SIDE_QUEST_5
    questmenu QUEST_MENU_COMPLETE_QUEST,SIDE_QUEST_5

    questmenu QUEST_MENU_UNLOCK_QUEST,SIDE_QUEST_8
    questmenu QUEST_MENU_SET_ACTIVE,SIDE_QUEST_8
    questmenu QUEST_MENU_SET_REWARD,SIDE_QUEST_8

    subquestmenu QUEST_MENU_COMPLETE_QUEST,SIDE_QUEST_1,2
    subquestmenu QUEST_MENU_COMPLETE_QUEST,SIDE_QUEST_1,3
    subquestmenu QUEST_MENU_COMPLETE_QUEST,SIDE_QUEST_2,9

    setflag FLAG_SYS_QUEST_MENU_GET

    openquestmenu
	end

InsideOfTruck_Text_BoxPrintedWithMonLogo:
	.string "The box is printed with a POKéMON logo.\p"
	.string "It's a POKéMON brand moving and\n"
	.string "delivery service.$"

