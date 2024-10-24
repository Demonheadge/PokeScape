#ifndef GUARD_CONSTANTS_QUESTS_H
#define GUARD_CONSTANTS_QUESTS_H

//questmenu scripting command params
#define QUEST_MENU_OPEN                 0   //opens the quest menu (questId = 0)
#define QUEST_MENU_UNLOCK_QUEST         1   //questId = QUEST_X (0-indexed)
#define QUEST_MENU_SET_ACTIVE           2   //questId = QUEST_X (0-indexed)
#define QUEST_MENU_SET_REWARD           3   //questId = QUEST_X (0-indexed)
#define QUEST_MENU_COMPLETE_QUEST       4   //questId = QUEST_X (0-indexed)
#define QUEST_MENU_CHECK_UNLOCKED       5   //checks if questId has been unlocked. Returns result to gSpecialVar_Result
#define QUEST_MENU_CHECK_INACTIVE       6 //check if a questID is inactive. Returns result to gSpecialVar_Result
#define QUEST_MENU_CHECK_ACTIVE         7   //checks if questId has been unlocked. Returns result to gSpecialVar_Result
#define QUEST_MENU_CHECK_REWARD         8  //checks if questId is in Reward state. Returns result to gSpecialVar_Result
#define QUEST_MENU_CHECK_COMPLETE       9   //checks if questId has been completed. Returns result to gSpecialVar_Result
#define QUEST_MENU_BUFFER_QUEST_NAME    10   //buffers a quest name to gStringVar1

// quest number defines
#define QUEST_MAIN_STORY                0
#define QUEST_MVM_CHAMPIONSHIPS         1
#define QUEST_COOKS_ASSISTANT           2   //COOKS ASSISTANT.
#define QUEST_RUNE_MYSTERIES            3   //RUNE MYSTERIES
#define QUEST_ERNEST_THE_CHICKEN        4   //ERNEST THE CHICKEN
#define QUEST_KOUREND_SLAYER            5   //DARK TOTEM
#define QUEST_BANANA_BOAT               6   //
#define QUEST_MITHRILMAN_QUEST          7
#define QUEST_ARTFIGHT_JATIZSO          8   //QUEST_ARTFIGHT_JATIZSO
#define QUEST_ARTFIGHT_NEITIZNOT        9

#define QUEST_COUNT                     (QUEST_MITHRILMAN_QUEST + 1)


#define SUB_QUEST_COOKSASSISTANT_1       0
#define SUB_QUEST_COOKSASSISTANT_2       1
#define SUB_QUEST_COOKSASSISTANT_3       2
#define SUB_QUEST_RUNEMYSTERIES_1        3
#define SUB_QUEST_RUNEMYSTERIES_2        4
#define SUB_QUEST_RUNEMYSTERIES_3        5
#define SUB_QUEST_ERNESTTHECHICKEN_1     6
#define SUB_QUEST_ERNESTTHECHICKEN_2     7
#define SUB_QUEST_ERNESTTHECHICKEN_3     8
#define SUB_QUEST_DARKTOTEM_1            9
#define SUB_QUEST_DARKTOTEM_2            10
#define SUB_QUEST_DARKTOTEM_3            11
#define SUB_QUEST_BANANA_BOAT_1          12
#define SUB_QUEST_BANANA_BOAT_2          13
#define SUB_QUEST_BANANA_BOAT_3          14
#define SUB_QUEST_MVM_CHAMPIONSHIPS_1    15
#define SUB_QUEST_MVM_CHAMPIONSHIPS_2    16
#define SUB_QUEST_MVM_CHAMPIONSHIPS_3    17
#define SUB_QUEST_MVM_CHAMPIONSHIPS_4    18
#define SUB_QUEST_MVM_CHAMPIONSHIPS_5    19
#define SUB_QUEST_MVM_CHAMPIONSHIPS_6    20
#define SUB_QUEST_MVM_CHAMPIONSHIPS_7    21
#define SUB_QUEST_MVM_CHAMPIONSHIPS_8    22
#define SUB_QUEST_MVM_CHAMPIONSHIPS_9    23
#define SUB_QUEST_MVM_CHAMPIONSHIPS_10   24
#define SUB_QUEST_MVM_CHAMPIONSHIPS_11   25
#define SUB_QUEST_MVM_CHAMPIONSHIPS_12   26
#define SUB_QUEST_MVM_CHAMPIONSHIPS_13   27
#define SUB_QUEST_MAIN_STORY_1           28
#define SUB_QUEST_MAIN_STORY_2           29
#define SUB_QUEST_MAIN_STORY_3           30
#define SUB_QUEST_MAIN_STORY_4           31
#define SUB_QUEST_MAIN_STORY_5           32
#define SUB_QUEST_MAIN_STORY_6           33
#define SUB_QUEST_MAIN_STORY_7           34
#define SUB_QUEST_MAIN_STORY_8           35
#define SUB_QUEST_MAIN_STORY_9           36
#define SUB_QUEST_MAIN_STORY_10          37
#define SUB_QUEST_MITHRILMAN_QUEST_1     38
#define SUB_QUEST_MITHRILMAN_QUEST_2     39
#define SUB_QUEST_MITHRILMAN_QUEST_3     40
#define SUB_QUEST_MITHRILMAN_QUEST_4     41

#define QUEST_COOKS_ASSISTANT_SUB_COUNT         3
#define QUEST_RUNE_MYSTERIES_SUB_COUNT          3
#define QUEST_ERNEST_THE_CHICKEN_SUB_COUNT      3
#define QUEST_KOUREND_SLAYER_SUB_COUNT          3
#define QUEST_BANANA_BOAT_SUB_COUNT             3
#define QUEST_MVM_CHAMPIONSHIPS_SUB_COUNT       13
#define QUEST_MAIN_STORY_SUB_COUNT              10
#define QUEST_MITHRILMAN_QUEST_SUB_COUNT        4

//#define QUEST_ARTFIGHT_JATIZSO_SUB_COUNT        5
//#define QUEST_ARTFIGHT_NEITIZNOT_SUB_COUNT      5


#define SUB_QUEST_COUNT ( QUEST_COOKS_ASSISTANT_SUB_COUNT + QUEST_RUNE_MYSTERIES_SUB_COUNT + QUEST_ERNEST_THE_CHICKEN_SUB_COUNT + QUEST_KOUREND_SLAYER_SUB_COUNT + QUEST_BANANA_BOAT_SUB_COUNT + QUEST_MVM_CHAMPIONSHIPS_SUB_COUNT + QUEST_MAIN_STORY_SUB_COUNT + QUEST_MITHRILMAN_QUEST_SUB_COUNT )// + QUEST_ARTFIGHT_JATIZSO_SUB_COUNT + QUEST_ARTFIGHT_NEITIZNOT_SUB_COUNT

#define QUEST_ARRAY_COUNT (SUB_QUEST_COUNT > QUEST_COUNT ? SUB_QUEST_COUNT : QUEST_COUNT)
#endif // GUARD_CONSTANTS_QUESTS_H
