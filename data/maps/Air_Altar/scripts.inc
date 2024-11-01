Air_Altar_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Air_Altar_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Air_Altar_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	compare VAR_SAFARI_ZONE_STATE, 0
	goto_if_eq Air_Altar_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

Air_Altar_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	setflag FLAG_TEMP_1
	setflag FLAG_TEMP_2
	return


AIRALTAR_RUNECRAFTER::
	faceplayer
	namebox AIRALTAR_RUNECRAFTER_Text_0
	msgbox AIRALTAR_RUNECRAFTER_Text_1
	closemessage
	hidenamebox
	release
	end


ITEM_AIRALTAR_1::
	finditem ITEM_RUNE_ESSENCE
	end


AIR_ALTAR::
	lock
	msgbox AIR_ALTAR_Text_0
	goto ALTAR_EVOLUTION
	return


WATER_ALTAR::
	lock
	msgbox WATER_ALTAR_Text_0
	goto ALTAR_EVOLUTION
	return


EARTH_ALTAR::
	lock
	msgbox EARTH_ALTAR_Text_0
	goto ALTAR_EVOLUTION
	return


FIRE_ALTAR::
	lock
	msgbox FIRE_ALTAR_Text_0
	goto ALTAR_EVOLUTION
	return


MIND_ALTAR::
	lock
	msgbox MIND_ALTAR_Text_0
	goto ALTAR_EVOLUTION
	return


BODY_ALTAR::
	lock
	msgbox BODY_ALTAR_Text_0
	goto ALTAR_EVOLUTION
	return


ALTAR_EVOLUTION::
	msgbox ALTAR_EVOLUTION_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne ALTAR_EVOLUTION_2
ALTAR_EVOLUTION_1:
	closemessage
	end

ALTAR_EVOLUTION_2:
	tryspecialevo EVO_ITEM, TRUE, TRUE
	goto ALTAR_EVOLUTION_1


AIRALTAR_RUNECRAFTER_Text_0:
	.string "Runecrafter$"

AIRALTAR_RUNECRAFTER_Text_1:
	.string "I really LOVE Runecrafting!\p"
	.string "Huh? My rune essence just turned into a\n"
	.string "blob monster?$"

AIR_ALTAR_Text_0:
	.string "The Altar is radiating AIR energy.$"

WATER_ALTAR_Text_0:
	.string "The Altar is radiating WATER energy.$"

EARTH_ALTAR_Text_0:
	.string "The Altar is radiating EARTH energy.$"

FIRE_ALTAR_Text_0:
	.string "The Altar is radiating FIRE energy.$"

MIND_ALTAR_Text_0:
	.string "The Altar is radiating MIND energy.$"

BODY_ALTAR_Text_0:
	.string "The Altar is radiating BODY energy.$"

ALTAR_EVOLUTION_Text_0:
	.string "Your monsters seem drawn to the altar.\p"
	.string "Would you like them to touch it?$"
