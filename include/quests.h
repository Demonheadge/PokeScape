#ifndef GUARD_QUESTS_H
#define GUARD_QUESTS_H

//#include constants/quests.h       //included in global.h

//#define FLAG_QUEST_MENU_ACTIVE    0x264 //added to constants/flags.h

#define NO_ACTIVE_QUEST             -1

#define SORT_DEFAULT 0
#define SORT_INACTIVE 1
#define SORT_ACTIVE 2
#define SORT_REWARD 3
#define SORT_DONE 4

struct SideQuest 
{
	/*0x00*/ const u8* name;
	/*0x04*/ const u8* desc;
	/*0x08*/ const u8* poc;
	/*0x0C*/ const u8* map;
	///*0x10*/ const u8* hint;
	/*0x14*/ const u8* reward;
}; /* size = 0x18 */


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
    FLAG_SET_ACTIVE,        // mark quest as active
    FLAG_GET_ACTIVE,        // check if quest is active
    FLAG_GET_REWARD,     // check if quest is ready for reward
    FLAG_SET_REWARD,     // mark quest ready for reward
    FLAG_GET_COMPLETED,     // check if quest is completed
    FLAG_SET_COMPLETED,     // mark completed quest
    FLAG_GET_INACTIVE, //check if quest is unlocked but has no other state
};

// functions
void CreateObjectMenuIcon(u16, u8);
void CreateItemMenuIcon(u16, u8);
void ResetItemMenuIconState(void);
void DestroyItemMenuIcon(u8 idx);
void DestroyObjectMenuIcon(u8 idx);
void Task_OpenQuestMenuFromStartMenu(u8);
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


