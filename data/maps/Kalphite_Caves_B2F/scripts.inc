Kalphite_Caves_B2F_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, CaveHole_CheckFallDownHole
	map_script MAP_SCRIPT_ON_TRANSITION, CaveHole_FixCrackedGround
	map_script MAP_SCRIPT_ON_RESUME, Kaplhite_Caves_SetHoleWarp
	.byte 0


Kaplhite_Caves_SetHoleWarp:
	setstepcallback STEP_CB_CRACKED_FLOOR
	setholewarp MAP_KALPHITE_CAVES_B4F, 255, 0, 0
	end
