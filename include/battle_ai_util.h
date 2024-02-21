#ifndef GUARD_BATTLE_AI_UTIL_H
#define GUARD_BATTLE_AI_UTIL_H

// for AI_WhoStrikesFirst
#define AI_IS_FASTER   0
#define AI_IS_SLOWER   1

#define FOE(battler) ((BATTLE_OPPOSITE(battler)) & BIT_SIDE)

#define AI_STRIKES_FIRST(battlerAi, battlerDef, move)((AI_WhoStrikesFirst(battlerAi, battlerDef, move) == AI_IS_FASTER))

bool32 AI_RandLessThan(u32 val);
bool32 IsAiVsAiBattle(void);
bool32 BattlerHasAi(u32 battlerId);
bool32 IsAiBattlerAware(u32 battlerId);
void ClearBattlerMoveHistory(u32 battlerId);
void RecordLastUsedMoveBy(u32 battlerId, u32 move);
void RecordAllMoves(u32 battler);
void RecordKnownMove(u32 battlerId, u32 move);
void RecordAbilityBattle(u32 battlerId, u32 abilityId);
void ClearBattlerAbilityHistory(u32 battlerId);
void RecordItemEffectBattle(u32 battlerId, u32 itemEffect);
void ClearBattlerItemEffectHistory(u32 battlerId);
void SaveBattlerData(u32 battlerId);
void SetBattlerData(u32 battlerId);
void RestoreBattlerData(u32 battlerId);
u32 GetAIChosenMove(u32 battlerId);
u32 GetTotalBaseStat(u32 species);
bool32 IsTruantMonVulnerable(u32 battlerAI, u32 opposingBattler);
bool32 AtMaxHp(u32 battler);
u32 GetHealthPercentage(u32 battler);
bool32 IsBattlerTrapped(u32 battler, bool32 switching);
u32 AI_WhoStrikesFirst(u32 battlerAI, u32 battler2, u32 moveConsidered);
bool32 CanTargetFaintAi(u32 battlerDef, u32 battlerAtk);
bool32 CanTargetMoveFaintAi(u32 move, u32 battlerDef, u32 battlerAtk, u32 nHits);
bool32 CanTargetFaintAiWithMod(u32 battlerDef, u32 battlerAtk, s32 hpMod, s32 dmgMod);
s32 AI_DecideKnownAbilityForTurn(u32 battlerId);
u32 AI_DecideHoldEffectForTurn(u32 battlerId);
bool32 DoesBattlerIgnoreAbilityChecks(u32 atkAbility, u32 move);
u32 AI_GetWeather(struct AiLogicData *aiData);
bool32 CanAIFaintTarget(u32 battlerAtk, u32 battlerDef, u32 numHits);
bool32 CanIndexMoveFaintTarget(u32 battlerAtk, u32 battlerDef, u32 index, u32 numHits);
bool32 AI_IsTerrainAffected(u32 battlerId, u32 flags);
bool32 AI_IsBattlerGrounded(u32 battlerId);
bool32 HasDamagingMove(u32 battlerId);
bool32 HasDamagingMoveOfType(u32 battlerId, u32 type);
u32 GetBattlerSecondaryDamage(u32 battlerId);
bool32 BattlerWillFaintFromWeather(u32 battler, u32 ability);
bool32 BattlerWillFaintFromSecondaryDamage(u32 battler, u32 ability);
bool32 ShouldTryOHKO(u32 battlerAtk, u32 battlerDef, u32 atkAbility, u32 defAbility, u32 move);
bool32 ShouldUseRecoilMove(u32 battlerAtk, u32 battlerDef, u32 recoilDmg, u32 moveIndex);
u32 GetBattlerSideSpeedAverage(u32 battler);
bool32 ShouldAbsorb(u32 battlerAtk, u32 battlerDef, u32 move, s32 damage);
bool32 ShouldRecover(u32 battlerAtk, u32 battlerDef, u32 move, u32 healPercent);
bool32 ShouldSetScreen(u32 battlerAtk, u32 battlerDef, u32 moveEffect);
bool32 ShouldPivot(u32 battlerAtk, u32 battlerDef, u32 defAbility, u32 move, u32 moveIndex);
bool32 IsRecycleEncouragedItem(u32 item);
bool32 ShouldRestoreHpBerry(u32 battlerAtk, u32 item);
bool32 IsStatBoostingBerry(u32 item);
bool32 CanKnockOffItem(u32 battler, u32 item);
bool32 IsAbilityOfRating(u32 ability, s8 rating);
s8 GetAbilityRating(u32 ability);
bool32 AI_IsAbilityOnSide(u32 battlerId, u32 ability);
bool32 AI_MoveMakesContact(u32 ability, u32 holdEffect, u32 move);
u32 AI_GetBattlerMoveTargetType(u32 battlerId, u32 move);
bool32 ShouldUseZMove(u32 battlerAtk, u32 battlerDef, u32 chosenMove);
u32 AI_CalcSecondaryEffectChance(u32 battler, u32 secondaryEffectChance);

// stat stage checks
bool32 AnyStatIsRaised(u32 battlerId);
bool32 ShouldLowerStat(u32 battler, u32 battlerAbility, u32 stat);
bool32 BattlerStatCanRise(u32 battler, u32 battlerAbility, u32 stat);
bool32 AreBattlersStatsMaxed(u32 battler);
bool32 BattlerHasAnyStatRaised(u32 battlerId);
u32 CountPositiveStatStages(u32 battlerId);
u32 CountNegativeStatStages(u32 battlerId);
bool32 ShouldLowerAttack(u32 battlerAtk, u32 battlerDef, u32 defAbility);
bool32 ShouldLowerDefense(u32 battlerAtk, u32 battlerDef, u32 defAbility);
bool32 ShouldLowerSpeed(u32 battlerAtk, u32 battlerDef, u32 defAbility);
bool32 ShouldLowerSpAtk(u32 battlerAtk, u32 battlerDef, u32 defAbility);
bool32 ShouldLowerSpDef(u32 battlerAtk, u32 battlerDef, u32 defAbility);
bool32 ShouldLowerAccuracy(u32 battlerAtk, u32 battlerDef, u32 defAbility);
bool32 ShouldLowerEvasion(u32 battlerAtk, u32 battlerDef, u32 defAbility);

// move checks
bool32 IsAffectedByPowder(u32 battler, u32 ability, u32 holdEffect);
bool32 MovesWithSplitUnusable(u32 attacker, u32 target, u32 split);
u32 AI_WhichMoveBetter(u32 move1, u32 move2, u32 battlerAtk, u32 battlerDef, s32 noOfHitsToKo);
s32 AI_CalcDamageSaveBattlers(u32 move, u32 battlerAtk, u32 battlerDef, u8 *typeEffectiveness, bool32 considerZPower);
s32 AI_CalcDamage(u32 move, u32 battlerAtk, u32 battlerDef, u8 *typeEffectiveness, bool32 considerZPower, u32 weather);
bool32 AI_IsDamagedByRecoil(u32 battler);
u32 GetNoOfHitsToKO(u32 dmg, s32 hp);
u32 GetNoOfHitsToKOBattlerDmg(u32 dmg, u32 battlerDef);
u32 GetNoOfHitsToKOBattler(u32 battlerAtk, u32 battlerDef, u32 moveIndex);
u32 GetCurrDamageHpPercent(u32 battlerAtk, u32 battlerDef);
uq4_12_t AI_GetTypeEffectiveness(u32 move, u32 battlerAtk, u32 battlerDef);
u32 AI_GetMoveEffectiveness(u32 move, u32 battlerAtk, u32 battlerDef);
u16 *GetMovesArray(u32 battler);
bool32 IsConfusionMoveEffect(u32 moveEffect);
bool32 HasMove(u32 battlerId, u32 move);
bool32 HasOnlyMovesWithSplit(u32 battlerId, u32 split, bool32 onlyOffensive);
bool32 HasMoveWithSplit(u32 battler, u32 split);
bool32 HasMoveWithType(u32 battler, u32 type);
bool32 HasMoveWithTypeAndSplit(u32 battler, u32 type, u32 split);
bool32 HasMoveEffect(u32 battlerId, u32 moveEffect);
bool32 HasMoveWithLowAccuracy(u32 battlerAtk, u32 battlerDef, u32 accCheck, bool32 ignoreStatus, u32 atkAbility, u32 defAbility, u32 atkHoldEffect, u32 defHoldEffect);
bool32 IsAromaVeilProtectedMove(u32 move);
bool32 IsNonVolatileStatusMoveEffect(u32 moveEffect);
bool32 IsStatLoweringMoveEffect(u32 moveEffect);
bool32 IsMoveRedirectionPrevented(u32 move, u32 atkAbility);
bool32 IsMoveEncouragedToHit(u32 battlerAtk, u32 battlerDef, u32 move);
bool32 IsHazardMoveEffect(u32 moveEffect);
bool32 IsEncoreEncouragedEffect(u32 moveEffect);
bool32 IsChargingMove(u32 battlerAtk, u32 effect);
void ProtectChecks(u32 battlerAtk, u32 battlerDef, u32 move, u32 predictedMove, s32 *score);
bool32 ShouldSetSandstorm(u32 battler, u32 ability, u32 holdEffect);
bool32 ShouldSetHail(u32 battler, u32 ability, u32 holdEffect);
bool32 ShouldSetSnow(u32 battler, u32 ability, u32 holdEffect);
bool32 ShouldSetRain(u32 battlerAtk, u32 ability, u32 holdEffect);
bool32 ShouldSetSun(u32 battlerAtk, u32 atkAbility, u32 holdEffect);
bool32 HasSleepMoveWithLowAccuracy(u32 battlerAtk, u32 battlerDef);
bool32 IsHealingMove(u32 move);
bool32 HasHealingEffect(u32 battler);
bool32 IsTrappingMoveEffect(u32 effect);
bool32 HasTrappingMoveEffect(u32 battler);
bool32 ShouldFakeOut(u32 battlerAtk, u32 battlerDef, u32 move);
bool32 HasThawingMove(u32 battler);
bool32 IsStatRaisingEffect(u32 effect);
bool32 IsStatLoweringEffect(u32 effect);
bool32 IsAttackBoostMoveEffect(u32 effect);
bool32 IsUngroundingEffect(u32 effect);
bool32 IsSemiInvulnerable(u32 battlerDef, u32 move);
bool32 HasSubstituteIgnoringMove(u32 battler);
bool32 HasSoundMove(u32 battler);
bool32 HasHighCritRatioMove(u32 battler);
bool32 HasMagicCoatAffectedMove(u32 battler);
bool32 HasSnatchAffectedMove(u32 battler);

// status checks
bool32 AI_CanBeBurned(u32 battler, u32 ability);
bool32 AI_CanGetFrostbite(u32 battler, u32 ability);
bool32 AI_CanBeConfused(u32 battlerAtk, u32 battlerDef, u32 move, u32 ability);
bool32 AI_CanSleep(u32 battler, u32 ability);
bool32 IsBattlerIncapacitated(u32 battler, u32 ability);
bool32 AI_CanPutToSleep(u32 battlerAtk, u32 battlerDef, u32 defAbility, u32 move, u32 partnerMove);
bool32 ShouldPoisonSelf(u32 battler, u32 ability);
bool32 AI_CanPoison(u32 battlerAtk, u32 battlerDef, u32 defAbility, u32 move, u32 partnerMove);
bool32 AI_CanParalyze(u32 battlerAtk, u32 battlerDef, u32 defAbility, u32 move, u32 partnerMove);
bool32 AI_CanConfuse(u32 battlerAtk, u32 battlerDef, u32 defAbility, u32 battlerAtkPartner, u32 move, u32 partnerMove);
bool32 ShouldBurnSelf(u32 battler, u32 ability);
bool32 AI_CanBurn(u32 battlerAtk, u32 battlerDef, u32 defAbility, u32 battlerAtkPartner, u32 move, u32 partnerMove);
bool32 AI_CanGiveFrostbite(u32 battlerAtk, u32 battlerDef, u32 defAbility, u32 battlerAtkPartner, u32 move, u32 partnerMove);
bool32 AI_CanBeInfatuated(u32 battlerAtk, u32 battlerDef, u32 defAbility);
bool32 AnyPartyMemberStatused(u32 battlerId, bool32 checkSoundproof);
u32 ShouldTryToFlinch(u32 battlerAtk, u32 battlerDef, u32 atkAbility, u32 defAbility, u32 move);
bool32 ShouldTrap(u32 battlerAtk, u32 battlerDef, u32 move);
bool32 IsWakeupTurn(u32 battler);
bool32 AI_IsBattlerAsleepOrComatose(u32 battlerId);

// partner logic
#define IS_TARGETING_PARTNER(battlerAtk, battlerDef)((battlerAtk) == (battlerDef ^ BIT_FLANK))
u32 GetAllyChosenMove(u32 battlerId);
bool32 IsValidDoubleBattle(u32 battlerAtk);
bool32 IsTargetingPartner(u32 battlerAtk, u32 battlerDef);
bool32 DoesPartnerHaveSameMoveEffect(u32 battlerAtkPartner, u32 battlerDef, u32 move, u32 partnerMove);
bool32 PartnerHasSameMoveEffectWithoutTarget(u32 battlerAtkPartner, u32 move, u32 partnerMove);
bool32 PartnerMoveEffectIsStatusSameTarget(u32 battlerAtkPartner, u32 battlerDef, u32 partnerMove);
bool32 IsMoveEffectWeather(u32 move);
bool32 PartnerMoveEffectIsTerrain(u32 battlerAtkPartner, u32 partnerMove);
bool32 PartnerMoveIs(u32 battlerAtkPartner, u32 partnerMove, u32 moveCheck);
bool32 PartnerMoveIsSameAsAttacker(u32 battlerAtkPartner, u32 battlerDef, u32 move, u32 partnerMove);
bool32 PartnerMoveIsSameNoTarget(u32 battlerAtkPartner, u32 move, u32 partnerMove);
bool32 ShouldUseWishAromatherapy(u32 battlerAtk, u32 battlerDef, u32 move);

// party logic
struct BattlePokemon *AllocSaveBattleMons(void);
void FreeRestoreBattleMons(struct BattlePokemon *savedBattleMons);
s32 CountUsablePartyMons(u32 battlerId);
bool32 IsPartyFullyHealedExceptBattler(u32 battler);
bool32 PartyHasMoveSplit(u32 battlerId, u32 split);
bool32 SideHasMoveSplit(u32 battlerId, u32 split);

// score increases
void IncreaseStatUpScore(u32 battlerAtk, u32 battlerDef, u32 statId, s32 *score);
void IncreasePoisonScore(u32 battlerAtk, u32 battlerDef, u32 move, s32 *score);
void IncreaseBurnScore(u32 battlerAtk, u32 battlerDef, u32 move, s32 *score);
void IncreaseParalyzeScore(u32 battlerAtk, u32 battlerDef, u32 move, s32 *score);
void IncreaseSleepScore(u32 battlerAtk, u32 battlerDef, u32 move, s32 *score);
void IncreaseConfusionScore(u32 battlerAtk, u32 battlerDef, u32 move, s32 *score);
void IncreaseFrostbiteScore(u32 battlerAtk, u32 battlerDef, u32 move, s32 *score);

s32 AI_CalcPartyMonDamage(u32 move, u32 battlerAtk, u32 battlerDef, struct BattlePokemon switchinCandidate, bool8 isPartyMonAttacker);

#endif //GUARD_BATTLE_AI_UTIL_H
