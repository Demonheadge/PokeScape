#ifndef GUARD_ITEM_USE_H
#define GUARD_ITEM_USE_H

void ItemUseOutOfBattle_Mail(u8);
void ItemUseOutOfBattle_Bike(u8);
void ItemUseOutOfBattle_Rod(u8);
void ItemUseOutOfBattle_Itemfinder(u8);
void ItemUseOutOfBattle_PokeblockCase(u8);
void ItemUseOutOfBattle_CoinCase(u8);
void ItemUseOutOfBattle_PowderJar(u8);
void ItemUseOutOfBattle_SSTicket(u8);
void ItemUseOutOfBattle_WailmerPail(u8);
void ItemUseOutOfBattle_Medicine(u8);
void ItemUseOutOfBattle_AbilityCapsule(u8);
void ItemUseOutOfBattle_AbilityPatch(u8);
void ItemUseOutOfBattle_ResetEVs(u8);
void ItemUseOutOfBattle_ReduceEV(u8);
void ItemUseOutOfBattle_SacredAsh(u8);
void ItemUseOutOfBattle_PPRecovery(u8);
void ItemUseOutOfBattle_PPUp(u8);
void ItemUseOutOfBattle_RareCandy(u8);
void ItemUseOutOfBattle_TMHM(u8);
void ItemUseOutOfBattle_Repel(u8);
void ItemUseOutOfBattle_Lure(u8);
void ItemUseOutOfBattle_EscapeRope(u8);
void ItemUseOutOfBattle_BlackWhiteFlute(u8);
void ItemUseOutOfBattle_EvolutionStone(u8);
void ItemUseOutOfBattle_Berry(u8);
void ItemUseOutOfBattle_EnigmaBerry(u8);
void ItemUseOutOfBattle_FormChange(u8);
void ItemUseOutOfBattle_FormChange_ConsumedOnUse(u8);
void ItemUseOutOfBattle_RotomCatalog(u8);
void ItemUseOutOfBattle_ZygardeCube(u8);
void ItemUseOutOfBattle_Fusion(u8);
void ItemUseOutOfBattle_Honey(u8);
void ItemUseOutOfBattle_CannotUse(u8);
void ItemUseOutOfBattle_ExpShare(u8);
void ItemUseInBattle_BagMenu(u8 taskId);
void ItemUseInBattle_PartyMenu(u8 taskId);
void ItemUseInBattle_PartyMenuChooseMove(u8 taskId);
void Task_UseDigEscapeRopeOnField(u8 taskId);
u8 CanUseDigOrEscapeRopeOnCurMap(void);
u8 CheckIfItemIsTMHMOrEvolutionStone(u16 itemId);
void FieldUseFunc_VsSeeker(u8 taskId);
void Task_ItemUse_CloseMessageBoxAndReturnToField_VsSeeker(u8 taskId);

enum {
    BALL_THROW_UNABLE_TWO_MONS,
    BALL_THROW_UNABLE_NO_ROOM,
    BALL_THROW_UNABLE_SEMI_INVULNERABLE,
    BALL_THROW_ABLE,
    BALL_THROW_UNABLE_DISABLED_FLAG,
};

bool32 CanThrowBall(void);

// Start qol_field_moves

void ItemUseOutOfBattle_CutTool(u8);
static void ItemUseOnFieldCB_CutTool(u8);

void ItemUseOutOfBattle_FlyTool(u8);
static void CB2_OpenFlyToolFromBag(void);
static void Task_OpenRegisteredFlyTool(u8 taskId);

void ItemUseOutOfBattle_SurfTool(u8);
static void ItemUseOnFieldCB_SurfTool(u8);

void ItemUseOutOfBattle_StrengthTool(u8);
static void ItemUseOnFieldCB_StrengthTool(u8);

void ItemUseOutOfBattle_FlashTool(u8);
void ItemUseOnFieldCB_FlashTool(u8 taskId);

void ItemUseOutOfBattle_RockSmashTool(u8);
static void ItemUseOnFieldCB_RockSmashTool(u8);

void ItemUseOutOfBattle_WaterfallTool(u8);
static void ItemUseOnFieldCB_WaterfallTool(u8);

void ItemUseOutOfBattle_DiveTool(u8);
static void ItemUseOnFieldCB_DiveTool(u8);

void ItemUseOutOfBattle_TeleportTool(u8);

void ItemUseOutOfBattle_SweetScentTool(u8);
static void ItemUseOnFieldCB_SweetScentTool(u8);

// End qol_field_moves

#endif // GUARD_ITEM_USE_H
