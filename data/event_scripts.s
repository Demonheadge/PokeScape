#include "config.h"
#include "config/battle.h"
#include "config/item.h"
#include "constants/global.h"
#include "constants/apprentice.h"
#include "constants/battle.h"
#include "constants/battle_arena.h"
#include "constants/battle_dome.h"
#include "constants/battle_factory.h"
#include "constants/battle_frontier.h"
#include "constants/battle_palace.h"
#include "constants/battle_pike.h"
#include "constants/battle_pyramid.h"
#include "constants/battle_setup.h"
#include "constants/battle_tent.h"
#include "constants/battle_tower.h"
#include "constants/berry.h"
#include "constants/cable_club.h"
#include "constants/coins.h"
#include "constants/contest.h"
#include "constants/daycare.h"
#include "constants/decorations.h"
#include "constants/easy_chat.h"
#include "constants/event_objects.h"
#include "constants/event_object_movement.h"
#include "constants/field_effects.h"
#include "constants/field_poison.h"
#include "constants/field_specials.h"
#include "constants/field_tasks.h"
#include "constants/field_weather.h"
#include "constants/flags.h"
#include "constants/frontier_util.h"
#include "constants/game_stat.h"
#include "constants/item.h"
#include "constants/items.h"
#include "constants/heal_locations.h"
#include "constants/layouts.h"
#include "constants/lilycove_lady.h"
#include "constants/map_scripts.h"
#include "constants/maps.h"
#include "constants/mauville_old_man.h"
#include "constants/metatile_labels.h"
#include "constants/moves.h"
#include "constants/party_menu.h"
#include "constants/pokemon.h"
#include "constants/roulette.h"
#include "constants/script_menu.h"
#include "constants/secret_bases.h"
#include "constants/songs.h"
#include "constants/sound.h"
#include "constants/species.h"
#include "constants/trade.h"
#include "constants/trainer_hill.h"
#include "constants/trainers.h"
#include "constants/tv.h"
#include "constants/union_room.h"
#include "constants/vars.h"
#include "constants/weather.h"
#include "constants/quests.h"
#include "constants/follow_me.h"
	.include "asm/macros.inc"
	.include "asm/macros/event.inc"
	.include "constants/constants.inc"

	.section script_data, "aw", %progbits

	.include "data/script_cmd_table.inc"

gSpecialVars::
	.4byte gSpecialVar_0x8000
	.4byte gSpecialVar_0x8001
	.4byte gSpecialVar_0x8002
	.4byte gSpecialVar_0x8003
	.4byte gSpecialVar_0x8004
	.4byte gSpecialVar_0x8005
	.4byte gSpecialVar_0x8006
	.4byte gSpecialVar_0x8007
	.4byte gSpecialVar_0x8008
	.4byte gSpecialVar_0x8009
	.4byte gSpecialVar_0x800A
	.4byte gSpecialVar_0x800B
	.4byte gSpecialVar_Facing
	.4byte gSpecialVar_Result
	.4byte gSpecialVar_ItemId
	.4byte gSpecialVar_LastTalked
	.4byte gSpecialVar_ContestRank
	.4byte gSpecialVar_ContestCategory
	.4byte gSpecialVar_MonBoxId
	.4byte gSpecialVar_MonBoxPos
	.4byte gSpecialVar_Unused_0x8014
	.4byte gTrainerBattleOpponent_A

	.include "data/specials.inc"

gStdScripts::
	.4byte Std_ObtainItem              @ STD_OBTAIN_ITEM
	.4byte Std_FindItem                @ STD_FIND_ITEM
	.4byte Std_MsgboxNPC               @ MSGBOX_NPC
	.4byte Std_MsgboxSign              @ MSGBOX_SIGN
	.4byte Std_MsgboxDefault           @ MSGBOX_DEFAULT
	.4byte Std_MsgboxYesNo             @ MSGBOX_YESNO
	.4byte Std_MsgboxAutoclose         @ MSGBOX_AUTOCLOSE
	.4byte Std_ObtainDecoration        @ STD_OBTAIN_DECORATION
	.4byte Std_RegisteredInMatchCall   @ STD_REGISTER_MATCH_CALL
	.4byte Std_MsgboxGetPoints         @ MSGBOX_GETPOINTS
	.4byte Std_MsgboxPokenav           @ MSGBOX_POKENAV
gStdScripts_End::

	.include "data/maps/PetalburgCity/scripts.inc"
	.include "data/maps/SlateportCity/scripts.inc"
	.include "data/maps/MauvilleCity/scripts.inc"
	.include "data/maps/RustboroCity/scripts.inc"
	.include "data/maps/FortreeCity/scripts.inc"
	.include "data/maps/LilycoveCity/scripts.inc"
	.include "data/maps/MossdeepCity/scripts.inc"
	.include "data/maps/SootopolisCity/scripts.inc"
	.include "data/maps/EverGrandeCity/scripts.inc"
	.include "data/maps/LittlerootTown/scripts.inc"
	.include "data/maps/OldaleTown/scripts.inc"
	.include "data/maps/DewfordTown/scripts.inc"
	.include "data/maps/LavaridgeTown/scripts.inc"
	.include "data/maps/FallarborTown/scripts.inc"
	.include "data/maps/VerdanturfTown/scripts.inc"
	.include "data/maps/PacifidlogTown/scripts.inc"
	.include "data/maps/Route101/scripts.inc"
	.include "data/maps/Route102/scripts.inc"
	.include "data/maps/Route103/scripts.inc"
	.include "data/maps/Route104/scripts.inc"
	.include "data/maps/Route105/scripts.inc"
	.include "data/maps/Route106/scripts.inc"
	.include "data/maps/Route107/scripts.inc"
	.include "data/maps/Route108/scripts.inc"
	.include "data/maps/Route109/scripts.inc"
	.include "data/maps/Route110/scripts.inc"
	.include "data/maps/Route111/scripts.inc"
	.include "data/maps/Route112/scripts.inc"
	.include "data/maps/Route113/scripts.inc"
	.include "data/maps/Route114/scripts.inc"
	.include "data/maps/Route115/scripts.inc"
	.include "data/maps/Route116/scripts.inc"
	.include "data/maps/Route117/scripts.inc"
	.include "data/maps/Route118/scripts.inc"
	.include "data/maps/Route119/scripts.inc"
	.include "data/maps/Route120/scripts.inc"
	.include "data/maps/Route121/scripts.inc"
	.include "data/maps/Route122/scripts.inc"
	.include "data/maps/Route123/scripts.inc"
	.include "data/maps/Route124/scripts.inc"
	.include "data/maps/Route125/scripts.inc"
	.include "data/maps/Route126/scripts.inc"
	.include "data/maps/Route127/scripts.inc"
	.include "data/maps/Route128/scripts.inc"
	.include "data/maps/Route129/scripts.inc"
	.include "data/maps/Route130/scripts.inc"
	.include "data/maps/Route131/scripts.inc"
	.include "data/maps/Route132/scripts.inc"
	.include "data/maps/Route133/scripts.inc"
	.include "data/maps/Route134/scripts.inc"
	.include "data/maps/Underwater_Route124/scripts.inc"
	.include "data/maps/Underwater_Route126/scripts.inc"
	.include "data/maps/Underwater_Route127/scripts.inc"
	.include "data/maps/Underwater_Route128/scripts.inc"
	.include "data/maps/Underwater_Route129/scripts.inc"
	.include "data/maps/Underwater_Route105/scripts.inc"
	.include "data/maps/Underwater_Route125/scripts.inc"
	.include "data/maps/LittlerootTown_BrendansHouse_1F/scripts.inc"
	.include "data/maps/LittlerootTown_BrendansHouse_2F/scripts.inc"
	.include "data/maps/LittlerootTown_MaysHouse_1F/scripts.inc"
	.include "data/maps/LittlerootTown_MaysHouse_2F/scripts.inc"
	.include "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.inc"
	.include "data/maps/OldaleTown_House1/scripts.inc"
	.include "data/maps/OldaleTown_House2/scripts.inc"
	.include "data/maps/OldaleTown_PokemonCenter_1F/scripts.inc"
	.include "data/maps/OldaleTown_PokemonCenter_2F/scripts.inc"
	.include "data/maps/OldaleTown_Mart/scripts.inc"
	.include "data/maps/DewfordTown_House1/scripts.inc"
	.include "data/maps/DewfordTown_PokemonCenter_1F/scripts.inc"
	.include "data/maps/DewfordTown_PokemonCenter_2F/scripts.inc"
	.include "data/maps/DewfordTown_Gym/scripts.inc"
	.include "data/maps/DewfordTown_Hall/scripts.inc"
	.include "data/maps/DewfordTown_House2/scripts.inc"
	.include "data/maps/LavaridgeTown_HerbShop/scripts.inc"
	.include "data/maps/LavaridgeTown_Gym_1F/scripts.inc"
	.include "data/maps/LavaridgeTown_Gym_B1F/scripts.inc"
	.include "data/maps/LavaridgeTown_House/scripts.inc"
	.include "data/maps/LavaridgeTown_Mart/scripts.inc"
	.include "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.inc"
	.include "data/maps/LavaridgeTown_PokemonCenter_2F/scripts.inc"
	.include "data/maps/FallarborTown_Mart/scripts.inc"
	.include "data/maps/FallarborTown_BattleTentLobby/scripts.inc"
	.include "data/maps/FallarborTown_BattleTentCorridor/scripts.inc"
	.include "data/maps/FallarborTown_BattleTentBattleRoom/scripts.inc"
	.include "data/maps/FallarborTown_PokemonCenter_1F/scripts.inc"
	.include "data/maps/FallarborTown_PokemonCenter_2F/scripts.inc"
	.include "data/maps/FallarborTown_CozmosHouse/scripts.inc"
	.include "data/maps/FallarborTown_MoveRelearnersHouse/scripts.inc"
	.include "data/maps/VerdanturfTown_BattleTentLobby/scripts.inc"
	.include "data/maps/VerdanturfTown_BattleTentCorridor/scripts.inc"
	.include "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.inc"
	.include "data/maps/VerdanturfTown_Mart/scripts.inc"
	.include "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.inc"
	.include "data/maps/VerdanturfTown_PokemonCenter_2F/scripts.inc"
	.include "data/maps/VerdanturfTown_WandasHouse/scripts.inc"
	.include "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.inc"
	.include "data/maps/VerdanturfTown_House/scripts.inc"
	.include "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.inc"
	.include "data/maps/PacifidlogTown_PokemonCenter_2F/scripts.inc"
	.include "data/maps/PacifidlogTown_House1/scripts.inc"
	.include "data/maps/PacifidlogTown_House2/scripts.inc"
	.include "data/maps/PacifidlogTown_House3/scripts.inc"
	.include "data/maps/PacifidlogTown_House4/scripts.inc"
	.include "data/maps/PacifidlogTown_House5/scripts.inc"
	.include "data/maps/PetalburgCity_WallysHouse/scripts.inc"
	.include "data/maps/PetalburgCity_Gym/scripts.inc"
	.include "data/maps/PetalburgCity_House1/scripts.inc"
	.include "data/maps/PetalburgCity_House2/scripts.inc"
	.include "data/maps/PetalburgCity_PokemonCenter_1F/scripts.inc"
	.include "data/maps/PetalburgCity_PokemonCenter_2F/scripts.inc"
	.include "data/maps/PetalburgCity_Mart/scripts.inc"
	.include "data/maps/SlateportCity_SternsShipyard_1F/scripts.inc"
	.include "data/maps/SlateportCity_SternsShipyard_2F/scripts.inc"
	.include "data/maps/SlateportCity_BattleTentLobby/scripts.inc"
	.include "data/maps/SlateportCity_BattleTentCorridor/scripts.inc"
	.include "data/maps/SlateportCity_BattleTentBattleRoom/scripts.inc"
	.include "data/maps/SlateportCity_NameRatersHouse/scripts.inc"
	.include "data/maps/SlateportCity_PokemonFanClub/scripts.inc"
	.include "data/maps/SlateportCity_OceanicMuseum_1F/scripts.inc"
	.include "data/maps/SlateportCity_OceanicMuseum_2F/scripts.inc"
	.include "data/maps/SlateportCity_Harbor/scripts.inc"
	.include "data/maps/SlateportCity_House/scripts.inc"
	.include "data/maps/SlateportCity_PokemonCenter_1F/scripts.inc"
	.include "data/maps/SlateportCity_PokemonCenter_2F/scripts.inc"
	.include "data/maps/SlateportCity_Mart/scripts.inc"
	.include "data/maps/MauvilleCity_Gym/scripts.inc"
	.include "data/maps/MauvilleCity_BikeShop/scripts.inc"
	.include "data/maps/MauvilleCity_House1/scripts.inc"
	.include "data/maps/MauvilleCity_GameCorner/scripts.inc"
	.include "data/maps/MauvilleCity_House2/scripts.inc"
	.include "data/maps/MauvilleCity_PokemonCenter_1F/scripts.inc"
	.include "data/maps/MauvilleCity_PokemonCenter_2F/scripts.inc"
	.include "data/maps/MauvilleCity_Mart/scripts.inc"
	.include "data/maps/RustboroCity_DevonCorp_1F/scripts.inc"
	.include "data/maps/RustboroCity_DevonCorp_2F/scripts.inc"
	.include "data/maps/RustboroCity_DevonCorp_3F/scripts.inc"
	.include "data/maps/RustboroCity_Gym/scripts.inc"
	.include "data/maps/RustboroCity_PokemonSchool/scripts.inc"
	.include "data/maps/RustboroCity_PokemonCenter_1F/scripts.inc"
	.include "data/maps/RustboroCity_PokemonCenter_2F/scripts.inc"
	.include "data/maps/RustboroCity_Mart/scripts.inc"
	.include "data/maps/RustboroCity_Flat1_1F/scripts.inc"
	.include "data/maps/RustboroCity_Flat1_2F/scripts.inc"
	.include "data/maps/RustboroCity_House1/scripts.inc"
	.include "data/maps/RustboroCity_CuttersHouse/scripts.inc"
	.include "data/maps/RustboroCity_House2/scripts.inc"
	.include "data/maps/RustboroCity_Flat2_1F/scripts.inc"
	.include "data/maps/RustboroCity_Flat2_2F/scripts.inc"
	.include "data/maps/RustboroCity_Flat2_3F/scripts.inc"
	.include "data/maps/RustboroCity_House3/scripts.inc"
	.include "data/maps/FortreeCity_House1/scripts.inc"
	.include "data/maps/FortreeCity_Gym/scripts.inc"
	.include "data/maps/FortreeCity_PokemonCenter_1F/scripts.inc"
	.include "data/maps/FortreeCity_PokemonCenter_2F/scripts.inc"
	.include "data/maps/FortreeCity_Mart/scripts.inc"
	.include "data/maps/FortreeCity_House2/scripts.inc"
	.include "data/maps/FortreeCity_House3/scripts.inc"
	.include "data/maps/FortreeCity_House4/scripts.inc"
	.include "data/maps/FortreeCity_House5/scripts.inc"
	.include "data/maps/FortreeCity_DecorationShop/scripts.inc"
	.include "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.inc"
	.include "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.inc"
	.include "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.inc"
	.include "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.inc"
	.include "data/maps/LilycoveCity_ContestLobby/scripts.inc"
	.include "data/maps/LilycoveCity_ContestHall/scripts.inc"
	.include "data/maps/LilycoveCity_PokemonCenter_1F/scripts.inc"
	.include "data/maps/LilycoveCity_PokemonCenter_2F/scripts.inc"
	.include "data/maps/LilycoveCity_UnusedMart/scripts.inc"
	.include "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.inc"
	.include "data/maps/LilycoveCity_Harbor/scripts.inc"
	.include "data/maps/LilycoveCity_MoveDeletersHouse/scripts.inc"
	.include "data/maps/LilycoveCity_House1/scripts.inc"
	.include "data/maps/LilycoveCity_House2/scripts.inc"
	.include "data/maps/LilycoveCity_House3/scripts.inc"
	.include "data/maps/LilycoveCity_House4/scripts.inc"
	.include "data/maps/LilycoveCity_DepartmentStore_1F/scripts.inc"
	.include "data/maps/LilycoveCity_DepartmentStore_2F/scripts.inc"
	.include "data/maps/LilycoveCity_DepartmentStore_3F/scripts.inc"
	.include "data/maps/LilycoveCity_DepartmentStore_4F/scripts.inc"
	.include "data/maps/LilycoveCity_DepartmentStore_5F/scripts.inc"
	.include "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.inc"
	.include "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.inc"
	.include "data/maps/MossdeepCity_Gym/scripts.inc"
	.include "data/maps/MossdeepCity_House1/scripts.inc"
	.include "data/maps/MossdeepCity_House2/scripts.inc"
	.include "data/maps/MossdeepCity_PokemonCenter_1F/scripts.inc"
	.include "data/maps/MossdeepCity_PokemonCenter_2F/scripts.inc"
	.include "data/maps/MossdeepCity_Mart/scripts.inc"
	.include "data/maps/MossdeepCity_House3/scripts.inc"
	.include "data/maps/MossdeepCity_StevensHouse/scripts.inc"
	.include "data/maps/MossdeepCity_House4/scripts.inc"
	.include "data/maps/MossdeepCity_SpaceCenter_1F/scripts.inc"
	.include "data/maps/MossdeepCity_SpaceCenter_2F/scripts.inc"
	.include "data/maps/MossdeepCity_GameCorner_1F/scripts.inc"
	.include "data/maps/MossdeepCity_GameCorner_B1F/scripts.inc"
	.include "data/maps/SootopolisCity_Gym_1F/scripts.inc"
	.include "data/maps/SootopolisCity_Gym_B1F/scripts.inc"
	.include "data/maps/SootopolisCity_PokemonCenter_1F/scripts.inc"
	.include "data/maps/SootopolisCity_PokemonCenter_2F/scripts.inc"
	.include "data/maps/SootopolisCity_Mart/scripts.inc"
	.include "data/maps/SootopolisCity_House1/scripts.inc"
	.include "data/maps/SootopolisCity_House2/scripts.inc"
	.include "data/maps/SootopolisCity_House3/scripts.inc"
	.include "data/maps/SootopolisCity_House4/scripts.inc"
	.include "data/maps/SootopolisCity_House5/scripts.inc"
	.include "data/maps/SootopolisCity_House6/scripts.inc"
	.include "data/maps/SootopolisCity_House7/scripts.inc"
	.include "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.inc"
	.include "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.inc"
	.include "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.inc"
	.include "data/maps/EverGrandeCity_SidneysRoom/scripts.inc"
	.include "data/maps/EverGrandeCity_PhoebesRoom/scripts.inc"
	.include "data/maps/EverGrandeCity_GlaciasRoom/scripts.inc"
	.include "data/maps/EverGrandeCity_DrakesRoom/scripts.inc"
	.include "data/maps/EverGrandeCity_ChampionsRoom/scripts.inc"
	.include "data/maps/EverGrandeCity_Hall1/scripts.inc"
	.include "data/maps/EverGrandeCity_Hall2/scripts.inc"
	.include "data/maps/EverGrandeCity_Hall3/scripts.inc"
	.include "data/maps/EverGrandeCity_Hall4/scripts.inc"
	.include "data/maps/EverGrandeCity_Hall5/scripts.inc"
	.include "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.inc"
	.include "data/maps/EverGrandeCity_HallOfFame/scripts.inc"
	.include "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.inc"
	.include "data/maps/EverGrandeCity_PokemonCenter_2F/scripts.inc"
	.include "data/maps/EverGrandeCity_PokemonLeague_2F/scripts.inc"
	.include "data/maps/Route104_MrBrineysHouse/scripts.inc"
	.include "data/maps/Route104_PrettyPetalFlowerShop/scripts.inc"
	.include "data/maps/Route111_WinstrateFamilysHouse/scripts.inc"
	.include "data/maps/Route111_OldLadysRestStop/scripts.inc"
	.include "data/maps/Route112_CableCarStation/scripts.inc"
	.include "data/maps/MtChimney_CableCarStation/scripts.inc"
	.include "data/maps/Route114_FossilManiacsHouse/scripts.inc"
	.include "data/maps/Route114_FossilManiacsTunnel/scripts.inc"
	.include "data/maps/Route114_LanettesHouse/scripts.inc"
	.include "data/maps/Route116_TunnelersRestHouse/scripts.inc"
	.include "data/maps/Route117_PokemonDayCare/scripts.inc"
	.include "data/maps/Route121_SafariZoneEntrance/scripts.inc"
	.include "data/maps/MeteorFalls_1F_1R/scripts.inc"
	.include "data/maps/MeteorFalls_1F_2R/scripts.inc"
	.include "data/maps/MeteorFalls_B1F_1R/scripts.inc"
	.include "data/maps/MeteorFalls_B1F_2R/scripts.inc"
	.include "data/maps/RusturfTunnel/scripts.inc"
	.include "data/maps/Underwater_SootopolisCity/scripts.inc"
	.include "data/maps/DesertRuins/scripts.inc"
	.include "data/maps/GraniteCave_1F/scripts.inc"
	.include "data/maps/GraniteCave_B1F/scripts.inc"
	.include "data/maps/GraniteCave_B2F/scripts.inc"
	.include "data/maps/GraniteCave_StevensRoom/scripts.inc"
	.include "data/maps/PetalburgWoods/scripts.inc"
	.include "data/maps/MtChimney/scripts.inc"
	.include "data/maps/JaggedPass/scripts.inc"
	.include "data/maps/FieryPath/scripts.inc"
	.include "data/maps/MtPyre_1F/scripts.inc"
	.include "data/maps/MtPyre_2F/scripts.inc"
	.include "data/maps/MtPyre_3F/scripts.inc"
	.include "data/maps/MtPyre_4F/scripts.inc"
	.include "data/maps/MtPyre_5F/scripts.inc"
	.include "data/maps/MtPyre_6F/scripts.inc"
	.include "data/maps/MtPyre_Exterior/scripts.inc"
	.include "data/maps/MtPyre_Summit/scripts.inc"
	.include "data/maps/AquaHideout_1F/scripts.inc"
	.include "data/maps/AquaHideout_B1F/scripts.inc"
	.include "data/maps/AquaHideout_B2F/scripts.inc"
	.include "data/maps/Underwater_SeafloorCavern/scripts.inc"
	.include "data/maps/SeafloorCavern_Entrance/scripts.inc"
	.include "data/maps/SeafloorCavern_Room1/scripts.inc"
	.include "data/maps/SeafloorCavern_Room2/scripts.inc"
	.include "data/maps/SeafloorCavern_Room3/scripts.inc"
	.include "data/maps/SeafloorCavern_Room4/scripts.inc"
	.include "data/maps/SeafloorCavern_Room5/scripts.inc"
	.include "data/maps/SeafloorCavern_Room6/scripts.inc"
	.include "data/maps/SeafloorCavern_Room7/scripts.inc"
	.include "data/maps/SeafloorCavern_Room8/scripts.inc"
	.include "data/maps/SeafloorCavern_Room9/scripts.inc"
	.include "data/maps/CaveOfOrigin_Entrance/scripts.inc"
	.include "data/maps/CaveOfOrigin_1F/scripts.inc"
	.include "data/maps/CaveOfOrigin_UnusedRubySapphireMap1/scripts.inc"
	.include "data/maps/CaveOfOrigin_UnusedRubySapphireMap2/scripts.inc"
	.include "data/maps/CaveOfOrigin_UnusedRubySapphireMap3/scripts.inc"
	.include "data/maps/CaveOfOrigin_B1F/scripts.inc"
	.include "data/maps/VictoryRoad_1F/scripts.inc"
	.include "data/maps/VictoryRoad_B1F/scripts.inc"
	.include "data/maps/VictoryRoad_B2F/scripts.inc"
	.include "data/maps/ShoalCave_LowTideEntranceRoom/scripts.inc"
	.include "data/maps/ShoalCave_LowTideInnerRoom/scripts.inc"
	.include "data/maps/ShoalCave_LowTideStairsRoom/scripts.inc"
	.include "data/maps/ShoalCave_LowTideLowerRoom/scripts.inc"
	.include "data/maps/ShoalCave_HighTideEntranceRoom/scripts.inc"
	.include "data/maps/ShoalCave_HighTideInnerRoom/scripts.inc"
	.include "data/maps/NewMauville_Entrance/scripts.inc"
	.include "data/maps/NewMauville_Inside/scripts.inc"
	.include "data/maps/AbandonedShip_Deck/scripts.inc"
	.include "data/maps/AbandonedShip_Corridors_1F/scripts.inc"
	.include "data/maps/AbandonedShip_Rooms_1F/scripts.inc"
	.include "data/maps/AbandonedShip_Corridors_B1F/scripts.inc"
	.include "data/maps/AbandonedShip_Rooms_B1F/scripts.inc"
	.include "data/maps/AbandonedShip_Rooms2_B1F/scripts.inc"
	.include "data/maps/AbandonedShip_Underwater1/scripts.inc"
	.include "data/maps/AbandonedShip_Room_B1F/scripts.inc"
	.include "data/maps/AbandonedShip_Rooms2_1F/scripts.inc"
	.include "data/maps/AbandonedShip_CaptainsOffice/scripts.inc"
	.include "data/maps/AbandonedShip_Underwater2/scripts.inc"
	.include "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.inc"
	.include "data/maps/AbandonedShip_HiddenFloorRooms/scripts.inc"
	.include "data/maps/IslandCave/scripts.inc"
	.include "data/maps/AncientTomb/scripts.inc"
	.include "data/maps/Underwater_Route134/scripts.inc"
	.include "data/maps/Underwater_SealedChamber/scripts.inc"
	.include "data/maps/SealedChamber_OuterRoom/scripts.inc"
	.include "data/maps/SealedChamber_InnerRoom/scripts.inc"
	.include "data/maps/ScorchedSlab/scripts.inc"
	.include "data/maps/AquaHideout_UnusedRubyMap1/scripts.inc"
	.include "data/maps/AquaHideout_UnusedRubyMap2/scripts.inc"
	.include "data/maps/AquaHideout_UnusedRubyMap3/scripts.inc"
	.include "data/maps/SkyPillar_Entrance/scripts.inc"
	.include "data/maps/SkyPillar_Outside/scripts.inc"
	.include "data/maps/SkyPillar_1F/scripts.inc"
	.include "data/maps/SkyPillar_2F/scripts.inc"
	.include "data/maps/SkyPillar_3F/scripts.inc"
	.include "data/maps/SkyPillar_4F/scripts.inc"
	.include "data/maps/ShoalCave_LowTideIceRoom/scripts.inc"
	.include "data/maps/SkyPillar_5F/scripts.inc"
	.include "data/maps/SkyPillar_Top/scripts.inc"
	.include "data/maps/MagmaHideout_1F/scripts.inc"
	.include "data/maps/MagmaHideout_2F_1R/scripts.inc"
	.include "data/maps/MagmaHideout_2F_2R/scripts.inc"
	.include "data/maps/MagmaHideout_3F_1R/scripts.inc"
	.include "data/maps/MagmaHideout_3F_2R/scripts.inc"
	.include "data/maps/MagmaHideout_4F/scripts.inc"
	.include "data/maps/MagmaHideout_3F_3R/scripts.inc"
	.include "data/maps/MagmaHideout_2F_3R/scripts.inc"
	.include "data/maps/MirageTower_1F/scripts.inc"
	.include "data/maps/MirageTower_2F/scripts.inc"
	.include "data/maps/MirageTower_3F/scripts.inc"
	.include "data/maps/MirageTower_4F/scripts.inc"
	.include "data/maps/DesertUnderpass/scripts.inc"
	.include "data/maps/ArtisanCave_B1F/scripts.inc"
	.include "data/maps/ArtisanCave_1F/scripts.inc"
	.include "data/maps/Underwater_MarineCave/scripts.inc"
	.include "data/maps/MarineCave_Entrance/scripts.inc"
	.include "data/maps/MarineCave_End/scripts.inc"
	.include "data/maps/TerraCave_Entrance/scripts.inc"
	.include "data/maps/TerraCave_End/scripts.inc"
	.include "data/maps/AlteringCave/scripts.inc"
	.include "data/maps/MeteorFalls_StevensCave/scripts.inc"
	.include "data/scripts/shared_secret_base.inc"
	.include "data/maps/BattleColosseum_2P/scripts.inc"
	.include "data/maps/TradeCenter/scripts.inc"
	.include "data/maps/RecordCorner/scripts.inc"
	.include "data/maps/BattleColosseum_4P/scripts.inc"
	.include "data/maps/ContestHall/scripts.inc"
	.include "data/maps/InsideOfTruck/scripts.inc"
	.include "data/maps/SSTidalCorridor/scripts.inc"
	.include "data/maps/SSTidalLowerDeck/scripts.inc"
	.include "data/maps/SSTidalRooms/scripts.inc"
	.include "data/maps/BattlePyramidSquare01/scripts.inc"
	.include "data/maps/UnionRoom/scripts.inc"
	.include "data/maps/SafariZone_Northwest/scripts.inc"
	.include "data/maps/SafariZone_North/scripts.inc"
	.include "data/maps/SafariZone_Southwest/scripts.inc"
	.include "data/maps/SafariZone_South/scripts.inc"
	.include "data/maps/BattleFrontier_OutsideWest/scripts.inc"
	.include "data/maps/BattleFrontier_BattleTowerLobby/scripts.inc"
	.include "data/maps/BattleFrontier_BattleTowerElevator/scripts.inc"
	.include "data/maps/BattleFrontier_BattleTowerCorridor/scripts.inc"
	.include "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.inc"
	.include "data/maps/SouthernIsland_Exterior/scripts.inc"
	.include "data/maps/SouthernIsland_Interior/scripts.inc"
	.include "data/maps/SafariZone_RestHouse/scripts.inc"
	.include "data/maps/SafariZone_Northeast/scripts.inc"
	.include "data/maps/SafariZone_Southeast/scripts.inc"
	.include "data/maps/BattleFrontier_OutsideEast/scripts.inc"
	.include "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.inc"
	.include "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.inc"
	.include "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.inc"
	.include "data/maps/BattleFrontier_BattleDomeLobby/scripts.inc"
	.include "data/maps/BattleFrontier_BattleDomeCorridor/scripts.inc"
	.include "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.inc"
	.include "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.inc"
	.include "data/maps/BattleFrontier_BattlePalaceLobby/scripts.inc"
	.include "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.inc"
	.include "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.inc"
	.include "data/maps/BattleFrontier_BattlePyramidLobby/scripts.inc"
	.include "data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc"
	.include "data/maps/BattleFrontier_BattlePyramidTop/scripts.inc"
	.include "data/maps/BattleFrontier_BattleArenaLobby/scripts.inc"
	.include "data/maps/BattleFrontier_BattleArenaCorridor/scripts.inc"
	.include "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.inc"
	.include "data/maps/BattleFrontier_BattleFactoryLobby/scripts.inc"
	.include "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.inc"
	.include "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.inc"
	.include "data/maps/BattleFrontier_BattlePikeLobby/scripts.inc"
	.include "data/maps/BattleFrontier_BattlePikeCorridor/scripts.inc"
	.include "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.inc"
	.include "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.inc"
	.include "data/maps/BattleFrontier_BattlePikeRoomFinal/scripts.inc"
	.include "data/maps/BattleFrontier_BattlePikeRoomWildMons/scripts.inc"
	.include "data/maps/BattleFrontier_RankingHall/scripts.inc"
	.include "data/maps/BattleFrontier_Lounge1/scripts.inc"
	.include "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.inc"
	.include "data/maps/BattleFrontier_Lounge2/scripts.inc"
	.include "data/maps/BattleFrontier_Lounge3/scripts.inc"
	.include "data/maps/BattleFrontier_Lounge4/scripts.inc"
	.include "data/maps/BattleFrontier_ScottsHouse/scripts.inc"
	.include "data/maps/BattleFrontier_Lounge5/scripts.inc"
	.include "data/maps/BattleFrontier_Lounge6/scripts.inc"
	.include "data/maps/BattleFrontier_Lounge7/scripts.inc"
	.include "data/maps/BattleFrontier_ReceptionGate/scripts.inc"
	.include "data/maps/BattleFrontier_Lounge8/scripts.inc"
	.include "data/maps/BattleFrontier_Lounge9/scripts.inc"
	.include "data/maps/BattleFrontier_PokemonCenter_1F/scripts.inc"
	.include "data/maps/BattleFrontier_PokemonCenter_2F/scripts.inc"
	.include "data/maps/BattleFrontier_Mart/scripts.inc"
	.include "data/maps/FarawayIsland_Entrance/scripts.inc"
	.include "data/maps/FarawayIsland_Interior/scripts.inc"
	.include "data/maps/BirthIsland_Exterior/scripts.inc"
	.include "data/maps/BirthIsland_Harbor/scripts.inc"
	.include "data/maps/TrainerHill_Entrance/scripts.inc"
	.include "data/maps/TrainerHill_1F/scripts.inc"
	.include "data/maps/TrainerHill_2F/scripts.inc"
	.include "data/maps/TrainerHill_3F/scripts.inc"
	.include "data/maps/TrainerHill_4F/scripts.inc"
	.include "data/maps/TrainerHill_Roof/scripts.inc"
	.include "data/maps/NavelRock_Exterior/scripts.inc"
	.include "data/maps/NavelRock_Harbor/scripts.inc"
	.include "data/maps/NavelRock_Entrance/scripts.inc"
	.include "data/maps/NavelRock_B1F/scripts.inc"
	.include "data/maps/NavelRock_Fork/scripts.inc"
	.include "data/maps/NavelRock_Up1/scripts.inc"
	.include "data/maps/NavelRock_Up2/scripts.inc"
	.include "data/maps/NavelRock_Up3/scripts.inc"
	.include "data/maps/NavelRock_Up4/scripts.inc"
	.include "data/maps/NavelRock_Top/scripts.inc"
	.include "data/maps/NavelRock_Down01/scripts.inc"
	.include "data/maps/NavelRock_Down02/scripts.inc"
	.include "data/maps/NavelRock_Down03/scripts.inc"
	.include "data/maps/NavelRock_Down04/scripts.inc"
	.include "data/maps/NavelRock_Down05/scripts.inc"
	.include "data/maps/NavelRock_Down06/scripts.inc"
	.include "data/maps/NavelRock_Down07/scripts.inc"
	.include "data/maps/NavelRock_Down08/scripts.inc"
	.include "data/maps/NavelRock_Down09/scripts.inc"
	.include "data/maps/NavelRock_Down10/scripts.inc"
	.include "data/maps/NavelRock_Down11/scripts.inc"
	.include "data/maps/NavelRock_Bottom/scripts.inc"
	.include "data/maps/TrainerHill_Elevator/scripts.inc"
	.include "data/maps/Route104_Prototype/scripts.inc"
	.include "data/maps/Route104_PrototypePrettyPetalFlowerShop/scripts.inc"
	.include "data/maps/Route109_SeashoreHouse/scripts.inc"
	.include "data/maps/Route110_TrickHouseEntrance/scripts.inc"
	.include "data/maps/Route110_TrickHouseEnd/scripts.inc"
	.include "data/maps/Route110_TrickHouseCorridor/scripts.inc"
	.include "data/maps/Route110_TrickHousePuzzle1/scripts.inc"
	.include "data/maps/Route110_TrickHousePuzzle2/scripts.inc"
	.include "data/maps/Route110_TrickHousePuzzle3/scripts.inc"
	.include "data/maps/Route110_TrickHousePuzzle4/scripts.inc"
	.include "data/maps/Route110_TrickHousePuzzle5/scripts.inc"
	.include "data/maps/Route110_TrickHousePuzzle6/scripts.inc"
	.include "data/maps/Route110_TrickHousePuzzle7/scripts.inc"
	.include "data/maps/Route110_TrickHousePuzzle8/scripts.inc"
	.include "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.inc"
	.include "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.inc"
	.include "data/maps/Route113_GlassWorkshop/scripts.inc"
	.include "data/maps/Route123_BerryMastersHouse/scripts.inc"
	.include "data/maps/Route119_WeatherInstitute_1F/scripts.inc"
	.include "data/maps/Route119_WeatherInstitute_2F/scripts.inc"
	.include "data/maps/Route119_House/scripts.inc"
	.include "data/maps/Route124_DivingTreasureHuntersHouse/scripts.inc"

	.include "data/scripts/std_msgbox.inc"
	.include "data/scripts/trainer_battle.inc"
	.include "data/scripts/new_game.inc"
	.include "data/scripts/hall_of_fame.inc"

	.include "data/scripts/debug.inc"

    .include "data/scripts/qol_field_move_scripts.inc" @ qol_field_moves 

EventScript_WhiteOut::
	call EverGrandeCity_HallOfFame_EventScript_ResetEliteFour
	goto EventScript_ResetMrBriney
	end

EventScript_ResetMrBriney::
	goto_if_eq VAR_BRINEY_LOCATION, 1, EventScript_MoveMrBrineyToHouse
	goto_if_eq VAR_BRINEY_LOCATION, 2, EventScript_MoveMrBrineyToDewford
	goto_if_eq VAR_BRINEY_LOCATION, 3, EventScript_MoveMrBrineyToRoute109
	end

EventScript_MoveMrBrineyToHouse::
	setflag FLAG_HIDE_MR_BRINEY_DEWFORD_TOWN
	setflag FLAG_HIDE_MR_BRINEY_BOAT_DEWFORD_TOWN
	setflag FLAG_HIDE_ROUTE_109_MR_BRINEY
	setflag FLAG_HIDE_ROUTE_109_MR_BRINEY_BOAT
	clearflag FLAG_HIDE_ROUTE_104_MR_BRINEY_BOAT
	clearflag FLAG_HIDE_BRINEYS_HOUSE_MR_BRINEY
	clearflag FLAG_HIDE_BRINEYS_HOUSE_PEEKO
	end

EventScript_MoveMrBrineyToDewford::
	setflag FLAG_HIDE_ROUTE_109_MR_BRINEY
	setflag FLAG_HIDE_ROUTE_109_MR_BRINEY_BOAT
	setflag FLAG_HIDE_ROUTE_104_MR_BRINEY
	setflag FLAG_HIDE_ROUTE_104_MR_BRINEY_BOAT
	setflag FLAG_HIDE_BRINEYS_HOUSE_MR_BRINEY
	setflag FLAG_HIDE_BRINEYS_HOUSE_PEEKO
	clearflag FLAG_HIDE_MR_BRINEY_DEWFORD_TOWN
	clearflag FLAG_HIDE_MR_BRINEY_BOAT_DEWFORD_TOWN
	end

EventScript_MoveMrBrineyToRoute109::
	setflag FLAG_HIDE_ROUTE_104_MR_BRINEY
	setflag FLAG_HIDE_ROUTE_104_MR_BRINEY_BOAT
	setflag FLAG_HIDE_BRINEYS_HOUSE_MR_BRINEY
	setflag FLAG_HIDE_BRINEYS_HOUSE_PEEKO
	setflag FLAG_HIDE_MR_BRINEY_DEWFORD_TOWN
	setflag FLAG_HIDE_MR_BRINEY_BOAT_DEWFORD_TOWN
	clearflag FLAG_HIDE_ROUTE_109_MR_BRINEY
	clearflag FLAG_HIDE_ROUTE_109_MR_BRINEY_BOAT
	end

EverGrandeCity_HallOfFame_EventScript_ResetEliteFour::
	clearflag FLAG_DEFEATED_ELITE_4_SIDNEY
	clearflag FLAG_DEFEATED_ELITE_4_PHOEBE
	clearflag FLAG_DEFEATED_ELITE_4_GLACIA
	clearflag FLAG_DEFEATED_ELITE_4_DRAKE
	setvar VAR_ELITE_4_STATE, 0
	return

Common_EventScript_UpdateBrineyLocation::
	goto_if_unset FLAG_RECEIVED_POKENAV, Common_EventScript_NopReturn
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, Common_EventScript_NopReturn
	goto_if_unset FLAG_HIDE_ROUTE_104_MR_BRINEY_BOAT, EventScript_SetBrineyLocation_House
	goto_if_unset FLAG_HIDE_MR_BRINEY_DEWFORD_TOWN, EventScript_SetBrineyLocation_Dewford
	goto_if_unset FLAG_HIDE_ROUTE_109_MR_BRINEY, EventScript_SetBrineyLocation_Route109
	return

EventScript_SetBrineyLocation_House::
	setvar VAR_BRINEY_LOCATION, 1
	return

EventScript_SetBrineyLocation_Dewford::
	setvar VAR_BRINEY_LOCATION, 2
	return

EventScript_SetBrineyLocation_Route109::
	setvar VAR_BRINEY_LOCATION, 3
	return

	.include "data/scripts/pkmn_center_nurse.inc"
	.include "data/scripts/obtain_item.inc"
	.include "data/scripts/record_mix.inc"
	.include "data/scripts/pc.inc"

@ scripts/notices.inc? signs.inc? See comment about text/notices.inc
Common_EventScript_ShowPokemartSign::
	msgbox gText_PokemartSign, MSGBOX_SIGN
	end

Common_EventScript_ShowPokemonCenterSign::
	msgbox gText_PokemonCenterSign, MSGBOX_SIGN
	end

Common_ShowEasyChatScreen::
	fadescreen FADE_TO_BLACK
	special ShowEasyChatScreen
	fadescreen FADE_FROM_BLACK
	return

Common_EventScript_ReadyPetalburgGymForBattle::
	clearflag FLAG_HIDE_PETALBURG_GYM_GREETER
	setflag FLAG_PETALBURG_MART_EXPANDED_ITEMS
	return

Common_EventScript_BufferTrendyPhrase::
	dotimebasedevents
	setvar VAR_0x8004, 0
	special BufferTrendyPhraseString
	return

EventScript_BackupMrBrineyLocation::
	copyvar VAR_0x8008, VAR_BRINEY_LOCATION
	setvar VAR_BRINEY_LOCATION, 0
	return

	.include "data/scripts/surf.inc"
	.include "data/scripts/rival_graphics.inc"
	.include "data/scripts/set_gym_trainers.inc"

Common_EventScript_ShowBagIsFull::
	msgbox gText_TooBadBagIsFull, MSGBOX_DEFAULT
	release
	end

Common_EventScript_BagIsFull::
	msgbox gText_TooBadBagIsFull, MSGBOX_DEFAULT
	return

Common_EventScript_ShowNoRoomForDecor::
	msgbox gText_NoRoomLeftForAnother, MSGBOX_DEFAULT
	release
	end

Common_EventScript_NoRoomForDecor::
	msgbox gText_NoRoomLeftForAnother, MSGBOX_DEFAULT
	return

Common_EventScript_SetAbnormalWeather::
	setweather WEATHER_ABNORMAL
	return

Common_EventScript_PlayGymBadgeFanfare::
	playfanfare MUS_OBTAIN_BADGE
	waitfanfare
	return

Common_EventScript_OutOfCenterPartyHeal::
	fadescreen FADE_TO_BLACK
	playfanfare MUS_HEAL
	waitfanfare
	special HealPlayerParty
	fadescreen FADE_FROM_BLACK
	return

EventScript_RegionMap::
	lockall
	msgbox Common_Text_LookCloserAtMap, MSGBOX_DEFAULT
	fadescreen FADE_TO_BLACK
	special FieldShowRegionMap
	waitstate
	releaseall
	end

Common_EventScript_PlayBrineysBoatMusic::
	setflag FLAG_DONT_TRANSITION_MUSIC
	playbgm MUS_SAILING, FALSE
	return

Common_EventScript_StopBrineysBoatMusic::
	clearflag FLAG_DONT_TRANSITION_MUSIC
	fadedefaultbgm
	return

	.include "data/scripts/prof_birch.inc"

@ Below could be split as ferry.inc aside from the Rusturf tunnel script
Common_EventScript_FerryDepart::
	delay 60
	applymovement VAR_0x8004, Movement_FerryDepart
	waitmovement 0
	return

Movement_FerryDepart:
	walk_slow_right
	walk_slow_right
	walk_slow_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

EventScript_HideMrBriney::
	setflag FLAG_HIDE_MR_BRINEY_DEWFORD_TOWN
	setflag FLAG_HIDE_MR_BRINEY_BOAT_DEWFORD_TOWN
	setflag FLAG_HIDE_ROUTE_109_MR_BRINEY
	setflag FLAG_HIDE_ROUTE_109_MR_BRINEY_BOAT
	setflag FLAG_HIDE_ROUTE_104_MR_BRINEY
	setflag FLAG_HIDE_ROUTE_104_MR_BRINEY_BOAT
	setflag FLAG_HIDE_BRINEYS_HOUSE_MR_BRINEY
	setflag FLAG_HIDE_BRINEYS_HOUSE_PEEKO
	setvar VAR_BRINEY_LOCATION, 0
	return

RusturfTunnel_EventScript_SetRusturfTunnelOpen::
	clearflag FLAG_HIDE_VERDANTURF_TOWN_WANDAS_HOUSE_WANDAS_BOYFRIEND
	clearflag FLAG_HIDE_VERDANTURF_TOWN_WANDAS_HOUSE_WANDA
	setvar VAR_RUSTURF_TUNNEL_STATE, 6

	return

EventScript_UnusedBoardFerry::
	delay 30
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	showobjectat OBJ_EVENT_ID_PLAYER, 0
	delay 30
	applymovement OBJ_EVENT_ID_PLAYER, Movement_UnusedBoardFerry
	waitmovement 0
	delay 30
	return

Movement_UnusedBoardFerry:
	walk_up
	step_end

Common_EventScript_FerryDepartIsland::
	call_if_eq VAR_FACING, DIR_SOUTH, Ferry_EventScript_DepartIslandSouth
	call_if_eq VAR_FACING, DIR_WEST, Ferry_EventScript_DepartIslandWest
	delay 30
	hideobjectat OBJ_EVENT_ID_PLAYER, 0
	call Common_EventScript_FerryDepart
	return

	.include "data/scripts/cave_of_origin.inc"
	.include "data/scripts/kecleon.inc"

Common_EventScript_NameReceivedPartyMon::
	fadescreen FADE_TO_BLACK
	special ChangePokemonNickname
	waitstate
	return

Common_EventScript_PlayerHandedOverTheItem::
	bufferitemname STR_VAR_1, VAR_0x8004
	playfanfare MUS_OBTAIN_TMHM
	message gText_PlayerHandedOverTheItem
	waitmessage
	waitfanfare
	removeitem VAR_0x8004
	return

	.include "data/scripts/elite_four.inc"
	.include "data/scripts/movement.inc"
	.include "data/scripts/check_furniture.inc"
	.include "data/text/record_mix.inc"
	.include "data/text/pc.inc"
	.include "data/text/pkmn_center_nurse.inc"
	.include "data/text/mart_clerk.inc"
	.include "data/text/obtain_item.inc"

@ The below and surf.inc could be split into some text/notices.inc
gText_PokemartSign::
	.string "“Selected items for your convenience!”\n"
	.string "POKéMON MART$"

gText_PokemonCenterSign::
	.string "“Rejuvenate your tired partners!”\n"
	.string "POKéMON CENTER$"

gText_MomOrDadMightLikeThisProgram::
	.string "{STR_VAR_1} might like this program.\n"
	.string "… … … … … … … … … … … … … … … …\p"
	.string "Better get going!$"

gText_WhichFloorWouldYouLike::
	.string "Welcome to LILYCOVE DEPARTMENT STORE.\p"
	.string "Which floor would you like?$"

gText_SandstormIsVicious::
	.string "The sandstorm is vicious.\n"
	.string "It's impossible to keep going.$"

gText_SelectWithoutRegisteredItem::
	.string "An item in the BAG can be\n"
	.string "registered to SELECT for easy use.$"

gText_PokemonTrainerSchoolEmail::
	.string "There's an e-mail from POKéMON TRAINER\n"
	.string "SCHOOL.\p"
	.string "… … … … … …\p"
	.string "A POKéMON may learn up to four moves.\p"
	.string "A TRAINER's expertise is tested on the\n"
	.string "move sets chosen for POKéMON.\p"
	.string "… … … … … …$"

gText_PlayerHouseBootPC::
	.string "{PLAYER} booted up the PC.$"

gText_PokeblockLinkCanceled::
	.string "The link was canceled.$"

gText_UnusedNicknameReceivedPokemon::
	.string "Want to give a nickname to\n"
	.string "the {STR_VAR_2} you received?$"

gText_PlayerWhitedOut::
	.string "{PLAYER} is out of usable\n"
	.string "POKéMON!\p{PLAYER} whited out!$"

gText_RegisteredTrainerinPokeNav::
	.string "Registered {STR_VAR_1} {STR_VAR_2}\n"
	.string "in the POKéNAV.$"

gText_ComeBackWithSecretPower::
	.string "Do you know the TM SECRET POWER?\p"
	.string "Our group, we love the TM SECRET\n"
	.string "POWER.\p"
	.string "One of our members will give it to you.\n"
	.string "Come back and show me if you get it.\p"
	.string "We'll accept you as a member and sell\n"
	.string "you good stuff in secrecy.$"

gText_PokerusExplanation::
	.string "Your POKéMON may be infected with\n"
	.string "POKéRUS.\p"
	.string "Little is known about the POKéRUS\n"
	.string "except that they are microscopic life-\l"
	.string "forms that attach to POKéMON.\p"
	.string "While infected, POKéMON are said to\n"
	.string "grow exceptionally well.$"

	.include "data/text/surf.inc"

gText_DoorOpenedFarAway::
	.string "It sounded as if a door opened\n"
	.string "somewhere far away.$"

gText_BigHoleInTheWall::
	.string "There is a big hole in the wall.$"

gText_SorryWirelessClubAdjustments::
	.string "I'm terribly sorry.\n"
	.string "The POKéMON WIRELESS CLUB is\l"
	.string "undergoing adjustments now.$"

gText_UndergoingAdjustments::
	.string "It appears to be undergoing\n"
	.string "adjustments…$"

@ Unused
gText_SorryTradeCenterInspections::
	.string "I'm terribly sorry. The TRADE CENTER\n"
	.string "is undergoing inspections.$"

@ Unused
gText_SorryRecordCornerPreparation::
	.string "I'm terribly sorry. The RECORD CORNER\n"
	.string "is under preparation.$"

gText_PlayerHandedOverTheItem::
	.string "{PLAYER} handed over the\n"
	.string "{STR_VAR_1}.$"

gText_ThankYouForAccessingMysteryGift::
	.string "Thank you for accessing the\n"
	.string "MYSTERY GIFT System.$"

gText_PlayerFoundOneTMHM::
	.string "{PLAYER} found one {STR_VAR_1}\n"
	.string "{STR_VAR_2}!$"

gText_Sudowoodo_Attacked::
	.string "The weird tree doesn't like the\n"
	.string "WAILMER PAIL!\p"
	.string "The weird tree attacked!$"

gText_LegendaryFlewAway::
	.string "The {STR_VAR_1} flew away!$"

	.include "data/text/pc_transfer.inc"
	.include "data/text/questionnaire.inc"
	.include "data/text/abnormal_weather.inc"

EventScript_SelectWithoutRegisteredItem::
	msgbox gText_SelectWithoutRegisteredItem, MSGBOX_SIGN
	end

	.include "data/scripts/field_poison.inc"

Common_EventScript_NopReturn::
	return

@ Unused
EventScript_CableClub_SetVarResult1::
	setvar VAR_RESULT, 1
	return

EventScript_CableClub_SetVarResult0::
	setvar VAR_RESULT, 0
	return

Common_EventScript_UnionRoomAttendant::
	call CableClub_EventScript_UnionRoomAttendant
	end

Common_EventScript_WirelessClubAttendant::
	call CableClub_EventScript_WirelessClubAttendant
	end

Common_EventScript_DirectCornerAttendant::
	call CableClub_EventScript_DirectCornerAttendant
	end

Common_EventScript_RemoveStaticPokemon::
	fadescreenswapbuffers FADE_TO_BLACK
	removeobject VAR_LAST_TALKED
	fadescreenswapbuffers FADE_FROM_BLACK
	release
	end

Common_EventScript_LegendaryFlewAway::
	fadescreenswapbuffers FADE_TO_BLACK
	removeobject VAR_LAST_TALKED
	fadescreenswapbuffers FADE_FROM_BLACK
	bufferspeciesname STR_VAR_1, VAR_0x8004
	msgbox gText_LegendaryFlewAway, MSGBOX_DEFAULT
	release
	end

EventScript_VsSeekerChargingDone::
	special VsSeekerFreezeObjectsAfterChargeComplete
	waitstate
	special VsSeekerResetObjectMovementAfterChargeComplete
	releaseall
	end

	.include "data/scripts/pc_transfer.inc"
	.include "data/scripts/questionnaire.inc"
	.include "data/scripts/abnormal_weather.inc"
	.include "data/scripts/trainer_script.inc"
	.include "data/scripts/berry_tree.inc"
	.include "data/scripts/secret_base.inc"
	.include "data/scripts/cable_club.inc"
	.include "data/text/cable_club.inc"
	.include "data/scripts/contest_hall.inc"
	.include "data/text/contest_strings.inc"
	.include "data/text/contest_link.inc"
	.include "data/text/contest_painting.inc"
	.include "data/text/trick_house_mechadolls.inc"
	.include "data/scripts/tv.inc"
	.include "data/text/tv.inc"
	.include "data/scripts/interview.inc"
	.include "data/scripts/gabby_and_ty.inc"
	.include "data/text/pokemon_news.inc"
	.include "data/scripts/mauville_man.inc"
	.include "data/scripts/field_move_scripts.inc"
	.include "data/scripts/item_ball_scripts.inc"
	.include "data/scripts/profile_man.inc"
	.include "data/scripts/day_care.inc"
	.include "data/scripts/flash.inc"
	.include "data/scripts/players_house.inc"
	.include "data/scripts/berry_blender.inc"
	.include "data/text/mauville_man.inc"
	.include "data/text/trainers.inc"
	.include "data/scripts/repel.inc"
	.include "data/scripts/safari_zone.inc"
	.include "data/scripts/roulette.inc"
	.include "data/text/pokedex_rating.inc"
	.include "data/text/lottery_corner.inc"
	.include "data/text/event_ticket_1.inc"
	.include "data/text/braille.inc"
	.include "data/text/berries.inc"
	.include "data/text/shoal_cave.inc"
	.include "data/text/check_furniture.inc"
	.include "data/scripts/cave_hole.inc"
	.include "data/scripts/lilycove_lady.inc"
	.include "data/text/match_call.inc"
	.include "data/scripts/apprentice.inc"
	.include "data/text/apprentice.inc"
	.include "data/text/battle_dome.inc"
	.include "data/scripts/battle_pike.inc"
	.include "data/text/blend_master.inc"
	.include "data/text/battle_tent.inc"
	.include "data/text/event_ticket_2.inc"
	.include "data/text/move_tutors.inc"
	.include "data/scripts/move_tutors.inc"
	.include "data/scripts/trainer_hill.inc"
	.include "data/scripts/test_signpost.inc"
	.include "data/text/frontier_brain.inc"
	.include "data/text/save.inc"
	.include "data/text/birch_speech.inc"

	.include "data/maps/Lumbridge/scripts.inc"
	.include "data/maps/Route1/scripts.inc"
	.include "data/maps/Lumbridge_Swamp/scripts.inc"
	.include "data/maps/Lumbridge_House_BobsAxes1/scripts.inc"
	.include "data/maps/Lumbridge_House_BobsAxes2/scripts.inc"
	.include "data/maps/Lumbridge_House_1/scripts.inc"
	.include "data/maps/Lumbridge_House_2/scripts.inc"
	.include "data/maps/Lumbridge_House_Roddeck1/scripts.inc"
	.include "data/maps/Lumbridge_House_Roddeck2/scripts.inc"
	.include "data/maps/Lumbridge_House_Starter1/scripts.inc"
	.include "data/maps/Lumbridge_House_Starter2/scripts.inc"
	.include "data/maps/Lumbridge_General_Store/scripts.inc"
	.include "data/maps/Lumbridge_GeneralStore2/scripts.inc"
	.include "data/maps/Mill_Lane_Mill/scripts.inc"
	.include "data/maps/Mill_Lane_Mill_1/scripts.inc"
	.include "data/maps/Mill_Lane_Mill_2/scripts.inc"
	.include "data/maps/Mill_Lane_Mill_3/scripts.inc"
	.include "data/maps/Route1_House_Fred/scripts.inc"
	.include "data/maps/Lumbridge_House_3/scripts.inc"
	.include "data/maps/Draynor/scripts.inc"
	.include "data/maps/Route2/scripts.inc"
	.include "data/maps/Route3/scripts.inc"
	.include "data/maps/Route4/scripts.inc"
	.include "data/maps/Route5/scripts.inc"
	.include "data/maps/Route6/scripts.inc"
	.include "data/maps/Port_Sarim/scripts.inc"
	.include "data/maps/Draynor_Manor/scripts.inc"
	.include "data/maps/Route7/scripts.inc"
	.include "data/maps/Route8/scripts.inc"
	.include "data/maps/Route9/scripts.inc"
	.include "data/maps/Rimmington/scripts.inc"
	.include "data/maps/Route10/scripts.inc"
	.include "data/maps/Route11/scripts.inc"
	.include "data/maps/Lumbridge_Bank/scripts.inc"
	.include "data/maps/Lumbridge_House_4/scripts.inc"
	.include "data/maps/Lumbridge_Castle_1/scripts.inc"
	.include "data/maps/Lumbridge_Castle_2/scripts.inc"
	.include "data/maps/Lumbridge_Castle_3/scripts.inc"
	.include "data/maps/Lumbridge_Castle_4/scripts.inc"
	.include "data/maps/Falador/scripts.inc"
	.include "data/maps/Route12/scripts.inc"
	.include "data/maps/Route13/scripts.inc"
	.include "data/maps/Route14/scripts.inc"
	.include "data/maps/Route15/scripts.inc"
	.include "data/maps/Route16/scripts.inc"
	.include "data/maps/Route17/scripts.inc"
	.include "data/maps/Varrock/scripts.inc"
	.include "data/maps/VarrockNorth/scripts.inc"
	.include "data/maps/Route18/scripts.inc"
	.include "data/maps/Route19/scripts.inc"
	.include "data/maps/Route20/scripts.inc"
	.include "data/maps/Route21/scripts.inc"
	.include "data/maps/Route22/scripts.inc"
	.include "data/maps/BarbarianVillage/scripts.inc"
	.include "data/maps/Route23/scripts.inc"
	.include "data/maps/Route24/scripts.inc"
	.include "data/maps/GoblinVillage/scripts.inc"
	.include "data/maps/Route25/scripts.inc"
	.include "data/maps/DwarvenMines/scripts.inc"
	.include "data/maps/Route26/scripts.inc"
	.include "data/maps/Route27/scripts.inc"
	.include "data/maps/Edgeville/scripts.inc"
	.include "data/maps/Route28/scripts.inc"
	.include "data/maps/AlKharid/scripts.inc"
	.include "data/maps/Route29/scripts.inc"
	.include "data/maps/Route30/scripts.inc"
	.include "data/maps/Route31/scripts.inc"
	.include "data/maps/MudskipperPoint/scripts.inc"
	.include "data/maps/Route32/scripts.inc"
	.include "data/maps/MusaPoint/scripts.inc"
	.include "data/maps/Route33/scripts.inc"
	.include "data/maps/Route34/scripts.inc"
	.include "data/maps/Route35/scripts.inc"
	.include "data/maps/Route36/scripts.inc"
	.include "data/maps/Taverley/scripts.inc"
	.include "data/maps/Route37/scripts.inc"
	.include "data/maps/Route38/scripts.inc"
	.include "data/maps/Route1_House_1/scripts.inc"
	.include "data/maps/Lumbridge_Forest/scripts.inc"
	.include "data/maps/Tutorial_Island/scripts.inc"
	.include "data/maps/Tutorial_Island_Cave/scripts.inc"
	.include "data/maps/Tutorial_Island_Lab_Up/scripts.inc"
	.include "data/maps/Tutorial_Island_Lab_Down/scripts.inc"
	.include "data/maps/Tutorial_Island_Shop/scripts.inc"
	.include "data/maps/Underwater_Lumbridge/scripts.inc"
	.include "data/maps/Tutorial_Island_Church/scripts.inc"
	.include "data/maps/Al_Kharid_Mines_B1F/scripts.inc"
	.include "data/maps/Al_Kharid_Mines_B2F/scripts.inc"
	.include "data/maps/Kalphite_Caves_B4F/scripts.inc"
	.include "data/maps/Kalphite_Caves_B1F/scripts.inc"
	.include "data/maps/Kalphite_Caves_B2F/scripts.inc"
	.include "data/maps/Kalphite_Caves_B3F/scripts.inc"
	.include "data/maps/Tzhaar_1F/scripts.inc"
	.include "data/maps/Giant_Mole_Cave/scripts.inc"
	.include "data/maps/Tzhaar_FightCaves/scripts.inc"
	.include "data/maps/Route39/scripts.inc"
	.include "data/maps/Varrock_House_1/scripts.inc"
	.include "data/maps/Varrock_House_1_Up/scripts.inc"
	.include "data/maps/Varrock_Thessalia_Shop/scripts.inc"
	.include "data/maps/Varrock_Thessalia_Shop_Up/scripts.inc"
	.include "data/maps/Varrock_Lowe_Shop/scripts.inc"
	.include "data/maps/Varrock_Lowe_Shop_Up/scripts.inc"
	.include "data/maps/Varrock_House_2/scripts.inc"
	.include "data/maps/Varrock_House_3/scripts.inc"
	.include "data/maps/Varrock_House_4/scripts.inc"
	.include "data/maps/Varrock_Bank_East/scripts.inc"
	.include "data/maps/Varrock_Bank_East_Up/scripts.inc"
	.include "data/maps/Varrock_Weapon_Shop/scripts.inc"
	.include "data/maps/Varrock_Weapon_Shop_Up/scripts.inc"
	.include "data/maps/Varrock_Bank_West/scripts.inc"
	.include "data/maps/Varrock_Bank_West_B1F/scripts.inc"
	.include "data/maps/Dwarven_Mine_B1F/scripts.inc"
	.include "data/maps/Potterington_Farm_Interior/scripts.inc"
	.include "data/maps/Pokescape_Battle_Tower_Battle_Room/scripts.inc"
	.include "data/maps/Yanille/scripts.inc"
	.include "data/maps/Ardougne/scripts.inc"
	.include "data/maps/Route50/scripts.inc"
	.include "data/maps/Route51/scripts.inc"
	.include "data/maps/Route52/scripts.inc"
	.include "data/maps/Route53/scripts.inc"
	.include "data/maps/Route54/scripts.inc"
	.include "data/maps/PortKhazard/scripts.inc"

	.include "data/maps/Lumbridge_House_3_2F/scripts.inc"
	.include "data/maps/Lumbridge_Church/scripts.inc"
	.include "data/maps/WizardsTower/scripts.inc"
	.include "data/maps/WizardsTowerB1F/scripts.inc"
	.include "data/maps/Wizards_Tower_1F/scripts.inc"
	.include "data/maps/Wizards_Tower_2F/scripts.inc"
	.include "data/maps/Wizards_Tower_3F/scripts.inc"
	.include "data/maps/Wizards_Tower_Attic/scripts.inc"
	.include "data/maps/Wizards_Tower_DiningHall/scripts.inc"
	.include "data/maps/Draynor_Manor_1F/scripts.inc"
	.include "data/maps/Draynor_Manor_2F/scripts.inc"
	.include "data/maps/Draynor_Manor_3F/scripts.inc"
	.include "data/maps/Draynor_Manor_B1F/scripts.inc"
	.include "data/maps/Draynor_Manor_Crypt/scripts.inc"
	.include "data/maps/Draynor_House_Morgan_1F/scripts.inc"
	.include "data/maps/Draynor_House_Morgan_2F/scripts.inc"
	.include "data/maps/Draynor_House_WoM_1F/scripts.inc"
	.include "data/maps/Draynor_House_WoM_2F/scripts.inc"
	.include "data/maps/KingBlackDragon_Lair/scripts.inc"
	.include "data/maps/KingBlackDragon_B1F/scripts.inc"
	.include "data/maps/KingBlackDragon_B2F/scripts.inc"
	.include "data/maps/QueenBlackDragon_Lair/scripts.inc"
	.include "data/maps/Falador_Hairdressers/scripts.inc"
	.include "data/maps/Falador_Hairdressers_2F/scripts.inc"
	.include "data/maps/Falador_Castleyard/scripts.inc"
	.include "data/maps/Falador_Bank_West_1F/scripts.inc"
	.include "data/maps/Falador_GemShop/scripts.inc"
	.include "data/maps/Falador_Pub_1F/scripts.inc"
	.include "data/maps/Falador_Pub_2F/scripts.inc"
	.include "data/maps/Varrock_Pub_1F/scripts.inc"
	.include "data/maps/Varrock_Pub_2F/scripts.inc"
	.include "data/maps/JollyBoar_Pub_1F/scripts.inc"
	.include "data/maps/JollyBoar_Pub_2F/scripts.inc"
	.include "data/maps/Yanille_Pub_1F/scripts.inc"
	.include "data/maps/Yanille_Pub_2F/scripts.inc"
	.include "data/maps/Tzhaar_Caves_1/scripts.inc"
	.include "data/maps/PortSarim_Pub_1F/scripts.inc"
	.include "data/maps/PortSarim_Pub_2F/scripts.inc"
	.include "data/maps/PoisonArrow_Pub_1F/scripts.inc"
	.include "data/maps/FlyingHorse_Pub_1F/scripts.inc"
	.include "data/maps/FlyingHorse_Pub_2F/scripts.inc"
	.include "data/maps/Lumbridge_Swamp_Caves/scripts.inc"
	.include "data/maps/Lumbridge_Swamp_Caves_Juna/scripts.inc"
	.include "data/maps/Dwarven_Mine_B2F/scripts.inc"
	.include "data/maps/Vorago_Cavern/scripts.inc"
	.include "data/maps/Chaos_Tunnels_B1F/scripts.inc"
	.include "data/maps/Abyssal_Realm_1/scripts.inc"
	.include "data/maps/Abyssal_Realm_2/scripts.inc"
	.include "data/maps/Route40/scripts.inc"
	.include "data/maps/Route41/scripts.inc"
	.include "data/maps/Route42/scripts.inc"
	.include "data/maps/Route43/scripts.inc"
	.include "data/maps/Rellekka/scripts.inc"
	.include "data/maps/HAM_Hideout_B1F/scripts.inc"
	.include "data/maps/HAM_Hideout_B2F/scripts.inc"
	.include "data/maps/Moderator_Lobby/scripts.inc"
	.include "data/maps/KaramjaVolcano_B1F/scripts.inc"
	.include "data/maps/KaramjaVolcano_B2F/scripts.inc"
	.include "data/maps/KaramjaVolcano_B3F/scripts.inc"
	.include "data/maps/Draynor_Bank/scripts.inc"
	.include "data/maps/Falador_Bank_East/scripts.inc"
	.include "data/maps/Draynor_Sewers_1/scripts.inc"
	.include "data/maps/Draynor_Sewers_2/scripts.inc"
	.include "data/maps/Draynor_Sewers_3/scripts.inc"
	.include "data/maps/Draynor_Sewers_4/scripts.inc"
	.include "data/maps/Poison_Waste_Sewers_1F/scripts.inc"
	.include "data/maps/Varrock_Sewers_1F/scripts.inc"
	.include "data/maps/Varrock_Sewers_2F/scripts.inc"
	.include "data/maps/Sinkhole_1/scripts.inc"
	.include "data/maps/Mazcab_Otot/scripts.inc"
	.include "data/maps/Lumbridge_Castle_Basement/scripts.inc"
	.include "data/maps/Lumbridge_Swamp_House_FatherUrhney/scripts.inc"
	.include "data/maps/Lumbridge_Swamp_Shack/scripts.inc"
	.include "data/maps/Sinkhole_2/scripts.inc"
	.include "data/maps/Sinkhole_3/scripts.inc"
	.include "data/maps/Sinkhole_4/scripts.inc"
	.include "data/maps/PortSarim_BettysEmporium/scripts.inc"
	.include "data/maps/PortSarim_GeneralStore_1F/scripts.inc"
	.include "data/maps/PortSarim_GeneralStore_2F/scripts.inc"
	.include "data/maps/PortSarim_FishingStore/scripts.inc"
	.include "data/maps/PortSarim_JewelryStore/scripts.inc"
	.include "data/maps/PortSarim_JewelryStore_2F/scripts.inc"
	.include "data/maps/PortSarim_BriansBazaar_1F/scripts.inc"
	.include "data/maps/PortSarim_BriansBazaar_2F/scripts.inc"
	.include "data/maps/PortSarim_Bank/scripts.inc"
	.include "data/maps/AsgarnianDungeon_B1F/scripts.inc"
	.include "data/maps/AsgarnianDungeon_B2F/scripts.inc"
	.include "data/maps/AsgarnianDungeon_B3F/scripts.inc"
	.include "data/maps/Rimmington_House_1F/scripts.inc"
	.include "data/maps/Rimmington_House_2F/scripts.inc"
	.include "data/maps/Rimmington_Hettys_House/scripts.inc"
	.include "data/maps/Rimmington_Crafting_House/scripts.inc"
	.include "data/maps/Rimmington_Fletching_House/scripts.inc"
	.include "data/maps/Rimmington_GeneralStore_1F/scripts.inc"
	.include "data/maps/Rimmington_GeneralStore_2F/scripts.inc"
	.include "data/maps/Rimmington_Lab/scripts.inc"
	.include "data/maps/Rimmington_Bank/scripts.inc"
	.include "data/maps/Route8_MakeoverMage/scripts.inc"
	.include "data/maps/Route8_CraftingGuild/scripts.inc"
	.include "data/maps/Falador_GeneralStore_1F/scripts.inc"
	.include "data/maps/Falador_GeneralStore_2F/scripts.inc"
	.include "data/maps/Falador_Workshop/scripts.inc"
	.include "data/maps/Falador_Workshop_2F/scripts.inc"
	.include "data/maps/Falador_House1_1F/scripts.inc"
	.include "data/maps/Falador_House1_2F/scripts.inc"
	.include "data/maps/Route44/scripts.inc"
	.include "data/maps/Wilderness_Volcano_Lobby/scripts.inc"
	.include "data/maps/Falador_Castle_1F/scripts.inc"
	.include "data/maps/POH_1/scripts.inc"
	.include "data/maps/POH_1_Inside/scripts.inc"
	.include "data/maps/Falador_Castle_2F/scripts.inc"
	.include "data/maps/Falador_Castle_3F/scripts.inc"
	.include "data/maps/PortSarim_Church/scripts.inc"
	.include "data/maps/Rimmington_Mines/scripts.inc"
	.include "data/maps/Rimmington_Mines_B2F/scripts.inc"
	.include "data/maps/Rimmington_Mines_B3F/scripts.inc"
	.include "data/maps/Rimmington_Mines_B1F/scripts.inc"
	.include "data/maps/GoblinVillage_House_1/scripts.inc"
	.include "data/maps/GoblinVillage_House_2/scripts.inc"
	.include "data/maps/Dorics_Hut/scripts.inc"
	.include "data/maps/GoblinVillage_House_3/scripts.inc"
	.include "data/maps/Minigame_1/scripts.inc"
	.include "data/maps/Minigame_2/scripts.inc"
	.include "data/maps/Varrock_Palace_1F/scripts.inc"
	.include "data/maps/Varrock_Palace_2F/scripts.inc"
	.include "data/maps/Varrock_Museum/scripts.inc"
	.include "data/maps/Route45/scripts.inc"
	.include "data/maps/Varrock_Gertrude_House/scripts.inc"
	.include "data/maps/Varrock_GeneralStore/scripts.inc"
	.include "data/maps/BarbarianVillage_GymHall/scripts.inc"
	.include "data/maps/Route46/scripts.inc"
	.include "data/maps/Route70/scripts.inc"
	.include "data/maps/Route47/scripts.inc"
	.include "data/maps/WildernessVolcano_ChampionRoom/scripts.inc"
	.include "data/maps/Polypore_Dungeon/scripts.inc"
	.include "data/maps/Starter_House_Varrock/scripts.inc"
	.include "data/maps/Starter_House_Falador/scripts.inc"
	.include "data/maps/Varrock_Aubury_Store/scripts.inc"
	.include "data/maps/Falador_Mace_Store/scripts.inc"
	.include "data/maps/Route55/scripts.inc"
	.include "data/maps/Route56/scripts.inc"
	.include "data/maps/Starter_House_Yanille/scripts.inc"
	.include "data/maps/Wilderness_Forest/scripts.inc"
	.include "data/maps/Callisto_Lair/scripts.inc"
	.include "data/maps/BarbarianVillage_House_1/scripts.inc"
	.include "data/maps/BarbarianVillage_House_2/scripts.inc"
	.include "data/maps/Barb_Stronghold_B1F/scripts.inc"
	.include "data/maps/Barb_Stronghold_B2F/scripts.inc"
	.include "data/maps/Barb_Stronghold_B3F/scripts.inc"
	.include "data/maps/Barb_Stronghold_B4F/scripts.inc"
	.include "data/maps/GrandExchange/scripts.inc"
	.include "data/maps/Alkharid_Gym_1F_R1/scripts.inc"
	.include "data/maps/Brimhaven/scripts.inc"
	.include "data/maps/Alkharid_Gym_1F_R2/scripts.inc"
	.include "data/maps/Alkharid_Gym_1F_R3/scripts.inc"
	.include "data/maps/SeersVillage/scripts.inc"
	.include "data/maps/Route57/scripts.inc"
	.include "data/maps/Camelot/scripts.inc"
	.include "data/maps/Route58/scripts.inc"
	.include "data/maps/Catherby/scripts.inc"
	.include "data/maps/Route59/scripts.inc"
	.include "data/maps/Air_Altar/scripts.inc"
	.include "data/maps/Mind_Altar/scripts.inc"
	.include "data/maps/Water_Altar/scripts.inc"
	.include "data/maps/Fire_Altar/scripts.inc"
	.include "data/maps/Earth_Altar/scripts.inc"
	.include "data/maps/Body_Altar/scripts.inc"
	.include "data/maps/AlKharid_House_1/scripts.inc"
	.include "data/maps/AlKharid_Bank/scripts.inc"
	.include "data/maps/Shantay_Pass/scripts.inc"
	.include "data/maps/Barrows/scripts.inc"
	.include "data/maps/Neitiznot/scripts.inc"
	.include "data/maps/Jatizso/scripts.inc"
	.include "data/maps/Draynor_House_Aggie/scripts.inc"
	.include "data/maps/Jatizso_House_1/scripts.inc"
	.include "data/maps/Jatizso_House_2/scripts.inc"
	.include "data/maps/Jatizso_House_3/scripts.inc"
	.include "data/maps/Jatizso_Cave/scripts.inc"
	.include "data/maps/Route169/scripts.inc"
	.include "data/maps/Route170/scripts.inc"
	.include "data/maps/Route171/scripts.inc"
	.include "data/maps/Route172/scripts.inc"
	.include "data/maps/Starter_House_Rellekka/scripts.inc"
	.include "data/maps/Starter_House_AlKharid/scripts.inc"
	.include "data/maps/Jatizso_House_4/scripts.inc"
	.include "data/maps/Jatizso_House_5/scripts.inc"
	.include "data/maps/Jatizso_Bank/scripts.inc"
	.include "data/maps/Corporeal_Beast_Lair/scripts.inc"
	.include "data/maps/Lumbridge_Swamp_Caves_WGS_1/scripts.inc"
	.include "data/maps/Lumbridge_Swamp_Caves_WGS_2/scripts.inc"
	.include "data/maps/Lumbridge_Swamp_Caves_WGS_3/scripts.inc"
	.include "data/maps/Lumbridge_Swamp_Caves_WGS_4/scripts.inc"
	.include "data/maps/Varrock_GrandExchange_Path/scripts.inc"
	.include "data/maps/Kourend_Catacombs_1/scripts.inc"
	.include "data/maps/Alkharid_Gym_2F_R1/scripts.inc"
	.include "data/maps/MusaPoint_Pub_1F/scripts.inc"
	.include "data/maps/MusaPoint_BananaShop/scripts.inc"
	.include "data/maps/MusaPoint_GeneralStore/scripts.inc"
	.include "data/maps/Kourend_Catacombs_2/scripts.inc"
	.include "data/maps/Kourend_Catacombs_3/scripts.inc"
	.include "data/maps/Kourend_Catacombs_4/scripts.inc"
	.include "data/maps/Kourend_Catacombs_5/scripts.inc"
	.include "data/maps/Kourend_Catacombs_6/scripts.inc"
	.include "data/maps/Kourend_Catacombs_7/scripts.inc"
	.include "data/maps/GWD_1/scripts.inc"
	.include "data/maps/GWD_2/scripts.inc"
	.include "data/maps/GWD_3/scripts.inc"
	.include "data/maps/HiddenGrottos/scripts.inc"
	.include "data/maps/Grand_Exchange_Indoor/scripts.inc"
	.include "data/maps/Dungeoneering_1/scripts.inc"
	.include "data/maps/Dungeoneering_2/scripts.inc"
	.include "data/maps/Dungeoneering_3/scripts.inc"
	.include "data/maps/Dungeoneering_4/scripts.inc"
	.include "data/maps/Dungeoneering_5/scripts.inc"
	.include "data/maps/Dungeoneering_6/scripts.inc"
	.include "data/maps/Dungeoneering_7/scripts.inc"
	.include "data/maps/Dungeoneering_8/scripts.inc"
	.include "data/maps/Dungeoneering_9/scripts.inc"
	.include "data/maps/Dungeoneering_10/scripts.inc"
	.include "data/maps/Dungeoneering_11/scripts.inc"
	.include "data/maps/Dungeoneering_12/scripts.inc"
	.include "data/maps/Dungeoneering_13/scripts.inc"
	.include "data/maps/Dungeoneering_14/scripts.inc"
	.include "data/maps/Dungeoneering_15/scripts.inc"
	.include "data/maps/Dungeoneering_16/scripts.inc"
	.include "data/maps/Dungeoneering_Lobby/scripts.inc"
	.include "data/maps/Kourend_Catacombs_8/scripts.inc"
	.include "data/maps/Chaos_Tunnels_B2F/scripts.inc"
	.include "data/maps/Tzhaar_Caves_2/scripts.inc"
	.include "data/maps/Varrock_Sewers_3F/scripts.inc"
	.include "data/maps/Varrock_Church/scripts.inc"
	.include "data/maps/Abyssal_Realm_3/scripts.inc"
	.include "data/maps/PortSarim_Lighthouse/scripts.inc"
	.include "data/maps/PortSarim_Lighthouse_2F/scripts.inc"
	.include "data/maps/PortSarim_Lighthouse_3F/scripts.inc"
	.include "data/maps/Melzars_Maze_1F/scripts.inc"
	.include "data/maps/Melzars_Maze_2F/scripts.inc"
	.include "data/maps/Melzars_Maze_3F/scripts.inc"
	.include "data/maps/Melzars_Maze_B1F/scripts.inc"
	.include "data/maps/Route48/scripts.inc"
	.include "data/maps/Route49/scripts.inc"
	.include "data/maps/Crandor/scripts.inc"
	.include "data/maps/Daemonheim/scripts.inc"
	.include "data/maps/Route0/scripts.inc"
	.include "data/maps/Tzhaar_Caves_3/scripts.inc"
	.include "data/maps/Tzhaar_Caves_4/scripts.inc"
	.include "data/maps/Tzhaar_Caves_5/scripts.inc"
	.include "data/maps/Edgeville_Gym/scripts.inc"
	.include "data/maps/Route200/scripts.inc"
	.include "data/maps/Edgeville_House_1/scripts.inc"
	.include "data/maps/Edgeville_House_2/scripts.inc"
	.include "data/maps/Edgeville_House_3/scripts.inc"
	.include "data/maps/Edgeville_House_4/scripts.inc"
	.include "data/maps/Edgeville_Bank/scripts.inc"
	.include "data/maps/Edgeville_General_Store/scripts.inc"
	.include "data/maps/Edgeville_General_Store_2F/scripts.inc"
	.include "data/maps/Ice_Mountain/scripts.inc"
	.include "data/maps/Dwarven_Mines_House_1/scripts.inc"
	.include "data/maps/Dwarven_Mines_House_2/scripts.inc"
	.include "data/maps/Dwarven_Mines_House_3/scripts.inc"
	.include "data/maps/Route19_CookingGuild/scripts.inc"
	.include "data/maps/AlKharid_House_2/scripts.inc"
	.include "data/maps/AlKharid_House_3/scripts.inc"
	.include "data/maps/AlKharid_House_4_1F/scripts.inc"
	.include "data/maps/AlKharid_House_4_2F/scripts.inc"
	.include "data/maps/AlKharid_GeneralStore/scripts.inc"
	.include "data/maps/AlKharid_Tent/scripts.inc"
	.include "data/maps/WildernessVolcano_Room_1/scripts.inc"
	.include "data/maps/WildernessVolcano_Room_2/scripts.inc"
	.include "data/maps/WildernessVolcano_Room_3/scripts.inc"
	.include "data/maps/WildernessVolcano_Room_4/scripts.inc"
	.include "data/maps/Mudskipper_Point_ThurgosHut/scripts.inc"
	.include "data/maps/Varrock_House_5/scripts.inc"
	.include "data/maps/Daemonheim_Gym/scripts.inc"
	.include "data/maps/Daemonheim_Bank/scripts.inc"
	.include "data/maps/Zamorak_Church/scripts.inc"
	.include "data/maps/Falador_PartyRoom/scripts.inc"
	.include "data/maps/Draynor_House_Ned/scripts.inc"
	.include "data/maps/Crandor_SeaRoute/scripts.inc"
	.include "data/maps/Ungael/scripts.inc"
	.include "data/maps/Digsite/scripts.inc"
	.include "data/maps/Canifis/scripts.inc"
	.include "data/maps/Route180/scripts.inc"
	.include "data/maps/Varrock_House_6/scripts.inc"
	.include "data/maps/Varrock_House_7/scripts.inc"
	.include "data/maps/Varrock_House_8/scripts.inc"
	.include "data/maps/Varrock_House_9/scripts.inc"
	.include "data/maps/Varlamore/scripts.inc"
	.include "data/maps/Route60/scripts.inc"
	.include "data/maps/Route61/scripts.inc"
	.include "data/maps/Route62/scripts.inc"
	.include "data/maps/Route63/scripts.inc"
	.include "data/maps/Edgeville_Route19_Brass_House/scripts.inc"
	.include "data/maps/Falador_Castle_1F_R2/scripts.inc"
	.include "data/maps/Falador_Castle_1F_R3/scripts.inc"
	.include "data/maps/Falador_Castle_3F_R2/scripts.inc"


	.include "data/maps/AsgarnianDungeon_B4F/scripts.inc"

	.include "data/maps/Lumbridge_Swamp_Caves_WGS_5/scripts.inc"

	.include "data/maps/Barb_Stronghold_B4F_Mural/scripts.inc"

	.include "data/maps/Bay_of_Sarim/scripts.inc"

	.include "data/maps/Mudskipper_Sound_1/scripts.inc"

	.include "data/maps/Mudskipper_Sound_2/scripts.inc"

	.include "data/maps/Mudskipper_Sound_3/scripts.inc"

	.include "data/maps/Tzhaar_Gym_Challenge/scripts.inc"

	.include "data/maps/Tzhaar_HarAken/scripts.inc"

	.include "data/maps/Draynor_House_PokeScaper/scripts.inc"

	.include "data/maps/Puro_Puro1/scripts.inc"

	.include "data/maps/Puro_Puro2/scripts.inc"

	.include "data/maps/Puro_Puro3/scripts.inc"

	.include "data/maps/Lumbridge_House_5/scripts.inc"

	.include "data/maps/Falador_House_1/scripts.inc"

	.include "data/maps/GoblinVillage_House_4/scripts.inc"
