#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(gBattleMoves[MOVE_CLANGING_SCALES].effect == EFFECT_ATTACKER_DEFENSE_DOWN_HIT);
}

DOUBLE_BATTLE_TEST("Clanging Scales lowers defense by one stage if it hits both targets")
{
    KNOWN_FAILING; // Will be fixed by PR #3577 (move refactor)
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET)
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_CLANGING_SCALES); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_CLANGING_SCALES, playerLeft);
        HP_BAR(opponentLeft);
        NONE_OF {
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, playerLeft);
            MESSAGE("Wobbuffet's Defense fell!");
        }
        HP_BAR(opponentRight);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, playerLeft);
        MESSAGE("Wobbuffet's Defense fell!");
    }
}
