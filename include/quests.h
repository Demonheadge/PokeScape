#ifndef GUARD_QUESTS_H
#define GUARD_QUESTS_H

//#include constants/quests.h       //included in global.h

//#define FLAG_QUEST_MENU_ACTIVE    0x264 //added to constants/flags.h

#define SORT_DEFAULT 0
#define SORT_INACTIVE 1
#define SORT_ACTIVE 2
#define SORT_REWARD 3
#define SORT_DONE 4
#define SORT_SUBQUEST 100

struct SubQuest
{
    /*0x00*/ const u8* name;
    /*0x04*/ const u8* desc;
    /*0x08*/ const u8* poc;
    /*0x0C*/ const u8* map;
    /*0x18*/ const u8 object;
}; /* size = 0x22 */

struct SideQuest 
{
    /*0x00*/ const u8* name;
    /*0x04*/ const u8* desc;
    /*0x08*/ const u8* poc;
    /*0x0C*/ const u8* map;
    u8 object;
    const struct SubQuest* subquests;
    const u8 childtype;
    const u8 numSubquests;

}; /* size = 0x18 */

extern const struct SubQuest gSubQuests1[SUB_QUEST_1_COUNT];
extern const struct SubQuest gSubQuests2[SUB_QUEST_1_COUNT];
extern const struct SideQuest gSideQuests[SIDE_QUEST_COUNT];

enum 
{
    QUEST_DIFFICULTY_EASY,
    QUEST_DIFFICULTY_MEDIUM,
    QUEST_DIFFICULTY_HARD,
    QUEST_DIFFICULTY_EXTREME,
};

enum QuestCases
{
    FLAG_GET_UNLOCKED,      // check if quest is unlocked
    FLAG_SET_UNLOCKED,      // mark unlocked quest
    FLAG_GET_INACTIVE, //check if quest is unlocked but has no other state
    FLAG_SET_INACTIVE, //mark quest as inactive
    FLAG_REMOVE_INACTIVE, //remove inactive flag from quest
    FLAG_SET_ACTIVE,        // mark quest as active
    FLAG_GET_ACTIVE,        // check if quest is active
    FLAG_REMOVE_ACTIVE, //remove active flag from quest
    FLAG_GET_REWARD,     // check if quest is ready for reward
    FLAG_SET_REWARD,     // mark quest ready for reward
    FLAG_REMOVE_REWARD, //remove reward flag from quest
    FLAG_GET_COMPLETED,     // check if quest is completed
    FLAG_SET_COMPLETED,     // mark completed quest
    FLAG_GET_FAVORITE,     // check if quest is ready for favorite
    FLAG_SET_FAVORITE,     // mark quest ready for favorite
    FLAG_REMOVE_FAVORITE, //remove favorite flag from quest
};

enum SubQuestTypes
{
    SUBQUEST_NONE,
    SUBQUEST_CATCH,
    SUBQUEST_FIND,
    SUBQUEST_READ,
};

// functions
void CreateObjectMenuIcon(u16, u8);
void CreateItemMenuIcon(u16, u8);
void ResetItemMenuIconState(void);
void DestroyItemMenuIcon(u8 idx);
void DestroyObjectMenuIcon(u8 idx);
void Task_OpenQuestMenuFromStartMenu(u8);
s8 ChangeSubQuestFlags(u8 quest, u8 caseId, u8 childQuest);
s8 QuestMenu_ManageFavoriteQuests(u8 index);
s8 GetSetQuestFlag(u8 quest, u8 caseId);
s8 GetActiveQuestIndex(void);
void SetActiveQuest(u8 questId);
void TextWindow_SetStdFrame0_WithPal(u8 windowId, u16 destOffset, u8 palIdx);
void QuestMenu_Init(u8 a0, MainCallback callback);
void SetQuestMenuActive(void);
//void ResetActiveQuest(void);
void ResetActiveQuest(void);
void CopyQuestName(u8 *dst, u8 questId);

#endif // GUARD_QUESTS_H


