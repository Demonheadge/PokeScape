#ifndef GUARD_CONSTANTS_QUESTS_H
#define GUARD_CONSTANTS_QUESTS_H

//questmenu scripting command params
#define QUEST_MENU_OPEN                 0   //opens the quest menu (questId = 0)
#define QUEST_MENU_UNLOCK_QUEST         1   //questId = QUEST_X (0-indexed)
#define QUEST_MENU_COMPLETE_QUEST       2   //questId = QUEST_X (0-indexed)
#define QUEST_MENU_SET_ACTIVE           3   //questId = QUEST_X (0-indexed)
#define QUEST_MENU_RESET_ACTIVE         4   //remove current quest from being 'active'
#define QUEST_MENU_BUFFER_QUEST_NAME    5   //buffers a quest name to gStringVar1
#define QUEST_MENU_GET_ACTIVE_QUEST     6   //returns the active quest index (-1, or 0xFF for none)
#define QUEST_MENU_CHECK_UNLOCKED       7   //checks if questId has been unlocked. Returns result to gSpecialVar_Result
#define QUEST_MENU_CHECK_COMPLETE       8   //checks if questId has been completed. Returns result to gSpecialVar_Result
#define QUEST_MENU_SET_REWARD           9   //questId = QUEST_X (0-indexed)
#define QUEST_MENU_CHECK_REWARD         10  //checks if questId is in Reward state. Returns result to gSpecialVar_Result

// quest number defines
#define QUEST_1          0
#define QUEST_2          1
#define QUEST_3          2
#define QUEST_4          3
#define QUEST_5          4
#define QUEST_6          5
#define QUEST_7          6
#define QUEST_8          7
#define QUEST_9          8
#define QUEST_10         9
#define QUEST_11        10
#define QUEST_12        11
#define QUEST_13        12
#define QUEST_14        13
#define QUEST_15        14
#define QUEST_16        15
#define QUEST_17        16
#define QUEST_18        17
#define QUEST_19        18
#define QUEST_20        19
#define QUEST_21        20
#define QUEST_22        21
#define QUEST_23        22
#define QUEST_24        23
#define QUEST_25        24
#define QUEST_26        25
#define QUEST_27        26
#define QUEST_28        27
#define QUEST_29        28
#define QUEST_30        29
#define QUEST_COUNT     (QUEST_30 + 1)

#define SUB_QUEST_1_COUNT 10
#define SUB_QUEST_2_COUNT 20
#define SUB_QUEST_COUNT (SUB_QUEST_1_COUNT + SUB_QUEST_2_COUNT)

#endif // GUARD_CONSTANTS_QUESTS_H
