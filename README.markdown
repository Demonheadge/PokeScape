# Introduction
This is a "port" of [Unbound](https://www.pokecommunity.com/showthread.php?t=382178)'s Quest Menu to use in decomp projects. ghoulslash's [Quest Menu](https://www.pokecommunity.com/showthread.php?t=434462) was used as a base, and was heavily modified to perfectly mimic Unbound's variant. This features only handles the menu and a basic handling of the quests.

## Media
![screenshots](https://i.imgur.com/zO9MisS.gif)

# Contributions
## [Skeli#3917](https://www.youtube.com/channel/UCRIShSkz-VJWqQT83KQlNjg)
* Developed the original Unbound menu
* Provided a variant of the current background
* Provided an implementation of fading text
* Suggested ways reduce size of quests on the saveblock2

## [ghoulslash#3839](https://www.pokecommunity.com/member.php?u=581824)
* [Developed the original Quest Menu](https://www.pokecommunity.com/showthread.php?t=434462)
* Helped debug adding a new macro to vanilla
* Helped debug object priority for sprite creation
* Provided bitwise operation for removing quest status

## HN (PSF Developer)
* A lot of these aren't written down because we meet in voice calls, but HN was absolutely instrumental in getting this working.

## [Karathan#1337](https://www.twitch.tv/1337sbird)
* Explained printing encoded strings via mGBAPrintf
* Suggested ways reduce size of quests on the saveblock2
* Suggested ways to allocate memory for prepend/append of the quest name
* Helped debug adding the UI background and palette

## [MCboy#0891](https://github.com/atasro2/pwaa1)
* Helped debug and refactor implementation of fading text
* Suggested ways to fix the object fading issue

## [Greenphx#5428](https://steamcommunity.com/profiles/76561198798955832) / [MGriffin#3997](https://www.pokecommunity.com/member.php?u=471077) / [Deokishisu#3251](https://www.pokecommunity.com/member.php?u=22062)
* Suggested ways reduce size of quests on the saveblock2

## [BSBob#4144](https://github.com/nielsmittertreiner)
* Provided implementation for prepend/append of the quest name

## MM (PSF Developer)
* Pointed out that the W stood for Wumbo.

# Installation
These instructions assume that you are able to build [pokeemerald](https://github.com/pret/pokeemerald) without issue.

Assuming you are in the root directory of your project, run the following commands in your terminal program of choice:

```bash
git remote add psf https://github.com/PokemonSanFran/pokeemerald/ # This adds our team's pokeemerald branch as a remote repo.
git pull psf unbound-quest-menu #This pulls in the unbound-quest-menu feature branch
```
# Warnings
## ghoulslash's menu
You cannot use this feature and ghoulslash's quest menu at the same time. You will need to use one or the other. If you have already pulled in ghoulslash's, you will need to do some work merging conflicts after pulling this one in.

## Wrapping menu
![original background](https://i.imgur.com/Hwh2apf.png)

Unbound's list menus wrap, meaning that when you press up on the first item a list, you are brought to the last item (and vice versa). Emerald has this behavior turned off. Pulling in this branch will turn on this functionality for all list menus in your project. If you do not want this functionality, you will need to disable it.

### Disabling wrapping
To remove this functionality, remove the following code from `src/list_menu.c` (around line 426):

```c
if (currentPosition == 0)
    ListMenuChangeSelection(list,TRUE,lastPositon,TRUE);
else
```

as well as this (around line 435):

```c
if (currentPosition == lastPositon)
    ListMenuChangeSelection(list,TRUE,lastPositon, FALSE);
else
```
# Usage and Examples
## Quest Anatomy

![original background](https://i.imgur.com/Hwh2apf.png)

* A: Name string
* B: Description string (When this quest is complete, the complete string will be shown here.)
* D: Map string
* E: sprite ID
* F: sprite's type. Needs to be `OBJECT`, `ITEM`, or `PKMN`. (This list is defined in `include/quests.h`.)
* G: The struct that hold this quest's subquests / children. NULL if none.
* H: Number of subquests for this parent. Zero if none.

## New Quests
There are 30 blank parent quests for you to edit. 

### `include/constants/quests.h`
```c
#define QUEST_29        28
#define QUEST_30        29
#define QUEST_INFINTY_STONES 30
#define QUEST_COUNT     (QUEST_INFINTY_STONES + 1)
```
Add a quest define at the end of this list. You can name these whatever you want, like `QUEST_INFINTY_STONES`. These are the names you will use in when you are scripting to refer to the quests. You will also need to update the value of QUEST\_COUNT to be your last quest in the list, +1.

### `src/strings.c`
```c
const u8 gText_SideQuestName_31[] = _("Endgame");
const u8 gText_SideQuestDesc_31[] =_("Help fix the balance of the universe! Gather the Infinity Stones.");
const u8 gText_SideQuestDoneDesc_31[] = _("All in balance, as it should be.");
const u8 gText_SidequestMap31[] = _("New York City");
```
These are all of the strings being used for your quest. You will also need to define them in `include/quests.h`.

```c
extern const u8 gText_SideQuestName_31[];
extern const u8 gText_SideQuestDesc_31[];
extern const u8 gText_SideQuestDoneDesc_31[];
extern const u8 gText_SidequestMap31[];
```

### `src/quests.c`
```c
	side_quest(
	      gText_SideQuestName_31, //side quest name string
	      gText_SideQuestDesc_31, //side quest description string 
	      gText_SideQuestDoneDesc_31, //side quest complete description string
	      gText_SideQuestMap31, //side quest map string
	      OBJ_EVENT_GFX_MAXIE, //quest sprite id
	      OBJECT, //quest sprite type
	      NULL, //subquest struct
	      0 //number of subquests
	),
```
Add a quest to the end of this struct, found around line 787. An example has been left there for you.



### New Subquests

//PSF TODO left off here

## Accessing In Game
Calling the function 
```c
QuestMenu_Init(0, <callback>)
```
will open the Quest Menu. If the flag `FLAG_SYS_QUEST_MENU_GET` is set, the player will be able to access from the Start Menu.

## Quest States

### Locked / Unlocked
If a quest is locked, it appears as "????" in the quest menu. When a quest is unlocked, it's name and details will appear in the menu. Once unlocked, quests should always retain this status.

### Active
Currently in progress. When a quest is set as active, it is automatically unlocked.

### Reward
Has been completed, but the player has not recieved the reward for it yet. Reward state quests are no longer active.

### Done
Has been completed and the player has recieved the reward. Done quests are no longer in the reward state.

Subquests only have two states - Locked and Done.

##Filter Modes

##Alphabetical Sort

##Favorite Quests

##Subquests


##Scripting Commands

### Open Quest Menu
```c
openquestmenu
```
```c
questmenu QUEST_MENU_OPEN 0
```
Either of these will open the quest menu in game.

### Unlock Quest
```c
questmenu QUEST_MENU_UNLOCK_QUEST QUEST_QUEST_24
```
Set quest 24's state to unlocked. There is no reason for this to ever be used, as changing a quest's state is active will automatically do this.

### Set Active
```c
questmenu QUEST_MENU_SET_ACTIVE QUEST_24
```
Set quest 24's state to active.

### Set Reward
```c
questmenu QUEST_MENU_SET_REWARD QUEST_24
```
Set quest 24's state to reward.

### Complete Quest 
```c
questmenu QUEST_MENU_COMPLETE_QUEST QUEST_24
```
```c
subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_24, SUB_QUEST_3
```
Set quest 24's state to complete, or set quest 24, subquest 3's state to complete.

### Check State
```c
questmenu QUEST_MENU_CHECK_UNLOCKED QUEST_24
```
```c
questmenu QUEST_MENU_CHECK_ACTIVE QUEST_24
```
```c
questmenu QUEST_MENU_CHECK_REWARD QUEST_24
```
```c
questmenu QUEST_MENU_CHECK_COMPLETE QUEST_24 
```
```c
subquestmenu QUEST_MENU_CHECK_COMPLETE, QUEST_24, SUB_QUEST_3
```
If quest 24 has the selected state, `gSpecialVar_Result` / `VAR_RESULT` will return true. If not, will return false. The last variant will do the same for quest 24, sub quest 3.

### Buffer Quest Name
```c
questmenu QUEST_MENU_BUFFER_QUEST_NAME QUEST_24
```
Store the name of quest 24 in `gStringVar1` / `{STR_VAR_1}`.


# Known Issues
## Background Image
![original background](https://i.imgur.com/Hwh2apf.png)

Fans of Unbound will notice that this is not the same background that is used in Unbound. Skeli was unable to give permission for use of that background, but was kind enough to provide an alternative background to be used. The colors have slightly been altered to make the text easier to read, but the original image is provided above.

## Object Fading 
![original background]()

Unbound's Quest Menu's has the object in the bottom left corner of the screen fade out when the player enters or leaves a subquest. This feature does not replicate that functionality.

## Artifacting
![gif example]()

When moving from a quest that displays an object to a quest that displays a non-object, a strange artifact will appear on the screen for a frame or two.

If you are able to help resolve these issues, please feel free to reach out!

# Support
If you have read all of the documentation here and still have questions, please ask a [good question](https://codereview.stackexchange.com/help/how-to-ask) in the [#pokeemerald](https://discord.gg/yG8zpMVr8x) channel of the pret Discord server. You can tag psf#2983 but that's not a guarentee that you'll get the help you need (ultimately, this is a free product, so there are no guarentees.)

# Donations
If you got some use out of this feature, please considering donating. We are currently not taking any donations, so please donate to some of our favorite charities.

* [Centre for Effective Altruism USA Inc.](https://www.charitynavigator.org/ein/471988398)
