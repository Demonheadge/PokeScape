KaramjaVolcano_B2F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, KaramjaVolcano_B2F_MapScripts_MAP_SCRIPT_ON_TRANSITION
	map_script MAP_SCRIPT_ON_LOAD, KaramjaVolcano_B2F_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

KaramjaVolcano_B2F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setvar VAR_EVOLUTION_MAP_STATE, 15
	return

KaramjaVolcano_B2F_MapScripts_MAP_SCRIPT_ON_LOAD:
	goto KaramjaVolcano_STATE2
	return


KaramjaVolcano_STATE2::
	switch VAR_POKESCAPE_KARAMJAVOLCANO_STATE
	case 0, KaramjaVolcano_STATE2_2
	case 1, KaramjaVolcano_STATE2_2
	case 2, KaramjaVolcano_STATE2_3
	case 3, KaramjaVolcano_STATE2_4
	return

KaramjaVolcano_STATE2_2:
	playbgm MUS_PS_ENCOUNTER_HAM, 1
	savebgm MUS_PS_ENCOUNTER_HAM
	release
	end

KaramjaVolcano_STATE2_3:
	playbgm MUS_PS_ENCOUNTER_HAM, 1
	savebgm MUS_PS_ENCOUNTER_HAM
	release
	end

KaramjaVolcano_STATE2_4:
	setflag FLAG_TEMP_1
	removeobject 2
	removeobject 3
	removeobject 4
	release
	end


ITEM_KARAMJA_VOLCANO_1::
	finditem ITEM_PURPLE_SWEETS
	end


ITEM_KARAMJA_VOLCANO_2::
	finditem ITEM_PURPLE_SWEETS
	end


ITEM_KARAMJA_VOLCANO_3::
	finditem ITEM_PURPLE_SWEETS
	end

