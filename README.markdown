# Introduction
![Demo of all Quest menu features](https://user-images.githubusercontent.com/77138753/178155255-16fa5351-8707-4f80-902e-f74801505cc1.png)

This is a recreation of [Unbound](https://www.pokecommunity.com/showthread.php?t=382178)'s Quest Menu to use in decomp projects. ghoulslash's [Quest Menu](https://www.pokecommunity.com/showthread.php?t=434462) was used as a base, and was modified to mimic Unbound's variant. 

**Thank you very much** to Skeli, ghoulslash, HN, Karathan, Mcboy, Greenphx, BSBob, & MM, who all contributed to this project in some way. [Please read more about their contributions and support their projects!](https://github.com/PokemonSanFran/pokeemerald/wiki/Unbound-Quest-Menu-README-Documentation/_edit#contributions)

# Features 
## Quest States
### Locked / Unlocked
![The cursor is selecting a locked quest.](https://user-images.githubusercontent.com/77138753/178154607-9ccb95f3-83fc-4564-a9b3-9bde3166ee41.png)

If a quest is locked, it appears as "????" in the quest menu. When a quest is unlocked, it's name and details will appear in the menu. Once unlocked, quests should always retain this status.

### Active
![The cursor is selecting an active quest.](https://user-images.githubusercontent.com/77138753/178154592-f8b57ce8-dcde-43a3-8bd4-d9ccb678c2a2.png)

Currently in progress. When a quest is set as active, it is automatically unlocked.

### Reward
![The cursor is selecting a reward quest.](https://user-images.githubusercontent.com/77138753/178154614-59ab071d-7d18-4293-a79e-4f6226d324e7.png)

Has been completed, but the player has not recieved the reward for it yet. Reward state quests are no longer active.

### Complete
![The cursor is selecting a complete quest.](https://user-images.githubusercontent.com/77138753/178154602-8ab220f4-4259-4ac5-9195-53e19a9f66f0.png)

Has been completed and the player has recieved the reward. Complete quests are no longer in the reward state.

Subquests only have two states - Locked and Complete.

## Subquests
![Demo of the subquest functionality.](https://user-images.githubusercontent.com/77138753/178155037-94102562-40cb-4cb4-8d68-866fd51b42e8.png)

A quest can have children, or subquests. This is for long quests with several different parts that you may want to track individually. Quests that have subquests are designed by the A button icon in the list menu. Pressing A will show all of the subquests and the completion of those quests.

### Examples
#### Emerald
* **Parent Quest**: Collect all the Gold Symbols from the Battle Frontier
* **Sub Quest 1**: Gold Knowledge Symbol
* **Sub Quest 2**: Gold Guts Symbol
* **Sub Quest 3**: Gold Tactics Symbol
* **Sub Quest 4**: Gold Luck Symbol
* **Sub Quest 5**: Gold Spirits Symbol
* **Sub Quest 6**: Gold Brave Symbol
* **Sub Quest 7**: Gold Ability Symbol

#### Unbound
* **Parent Quest**: Collect all the Zygarde Cells
* **Sub Quest 1**: Frozen Heights 

et cetera.

## Filter Modes 
![Demo of filter mode.](https://user-images.githubusercontent.com/77138753/178154604-f509680b-9301-4fb6-be9e-f4439bcc40a3.png)

If the player presses the R button while in the Quest Menu, they will enter Filter Mode. Filter mode will show all of the quests of a particular state. Players can cycle through the different quest types by repeatedly pressing the R Button. 

The player's last filter mode is not remembered upon exiting the entire menu, but it is remembered when examining a subquest.

Filter modes do not work when looking at subquests.

## Alphabetical Sort
![Demo of alphabetical mode.](https://user-images.githubusercontent.com/77138753/178154594-6aaa0bb6-b999-4c56-acca-62c8357c1711.png)

If the player presses the Start button while in the Quest Menu, the list of quests within the current view will be sorted alphabetically. 

This sorting will remain if the player changes to a different Filter Mode, will be returned to if the player enters and exits a subquest, but will not be remembered upon exiting the entire menu.

Pressing Start will revert back to the default sort.

Alphabetical sort does not work when looking at subquests.

## Favorite Quests
![Demo of favoriting functionality.](https://user-images.githubusercontent.com/77138753/178154603-58acecd2-b99e-4b06-b4e2-8551943d3ccf.png)

If the player presses the Select button while their cursor is hovering over a Quest, that quest's title will turn green and be automatically placed at the top of the list. Pressing Select again will return the quest to its original position in the list.

Favorite quests are remembered even after the player exits the quest menu.

Favorite quests do not work when looking at subquests.

# Installation
These instructions assume that you are able to build [pokeemerald](https://github.com/pret/pokeemerald), have a basic understanding of C, and are familiar with using the ingame scripting language. If you do not, please watch the tutorials series from [Team Aqua's Hideout](https://www.youtube.com/channel/UCVVxdZT8jgRHNhmde63G77Q/videos).

From the root directory of your project, run the following commands in your terminal program of choice:

```bash
git remote add psf https://github.com/PokemonSanFran/pokeemerald/ # This adds our team's pokeemerald branch as a remote repo.
git pull psf unbound-quest-menu #This pulls in the unbound-quest-menu feature branch
```

## Warnings
### ghoulslash's menu
You cannot use this feature and ghoulslash's quest menu at the same time. You will need to use one or the other. If you have already pulled in ghoulslash's, you will need to do some work merging conflicts after pulling this one in.

### Wrapping menu
![Gif dispalying the list menu wrapping functionality in Unbound.](https://user-images.githubusercontent.com/77138753/178154617-059e9915-c8a1-4c35-b45f-a42fe8064b97.png)

Unbound's list menus wrap, meaning that when you press up on the first item a list, you are brought to the last item (and vice versa). Emerald has this behavior turned off. Pulling in this branch will turn on this functionality for all list menus in your project. If you do not want this functionality, you will need to disable it.

#### Disabling wrapping
To remove this functionality, you'll need to make some changes to [`src/list_menu.c`](https://github.com/PokemonSanFran/pokeemerald/blob/668853c9f4e37d93800b8edfcbeae8705e8e50fd/src/list_menu.c#L426-L428).

```diff c
 else if (JOY_REPEAT(DPAD_UP))
    {
-        if (currentPosition == 0)
-            ListMenuChangeSelection(list,TRUE,lastPositon,TRUE);
-        else
            ListMenuChangeSelection(list, TRUE, 1, FALSE);

        return LIST_NOTHING_CHOSEN;
    }
    else if (JOY_REPEAT(DPAD_DOWN))
    {
-        if (currentPosition == lastPositon)
-            ListMenuChangeSelection(list,TRUE,lastPositon, FALSE);
-        else
            ListMenuChangeSelection(list, TRUE, 1, TRUE);
```
### Saveblock2 space
This feature's save data with 30 parent quests and 30 subquests occupies 25 bytes in Saveblock2. Due to the way the feature has been set up, the current system can only support approximately 100 parent quests and 168 subquests. (Parent quests use 5 bits each, and child quests use 1 bit each.) If you want to add more than that, you will need to free up more space on the saveblock.

# Menu Anatomy
## Quests
![Anatomy breakdown of a quest](https://user-images.githubusercontent.com/77138753/178156627-30b43607-00b8-4258-85b3-5dac6cca948c.png)

* A: Current context of the menu
* B: Number of quests relevant to this filter mode / number of total quests
* C: Name of the quest.
* D: Indicates that this quest has subquests.
* E: State of the quest.
* F: Map where the player can go to start the quest.
* G: Quest's sprite. This can be an object (NPC), item, or Pokémon.
* H: Description of the quest. There are two variants - one for when the quest is active, and one for when the quest is complete.

## Subquests
![Anatomy breakdown of a subquest](https://user-images.githubusercontent.com/77138753/178156639-6df9f93e-a5f3-4bf9-9486-d5258e46d6b2.png)

* A: Name of the parent quest for these subquests
* B: Number of completed subquests for this parent quest/ number of total subquests for this parent quest
* C: Name of the quest.
* D: State of the subquest. Only shows if complete.
* E: Map where the player can go to complete the subquest.
* F: Subquest's sprite. This can be an object (NPC), item, or Pokémon.
* G: Description of the subquest. Only shows if complete.

# Usage
##  Adding New Quests
There are 30 blank parent quests for you to edit. 

### [`include/constants/quests.h`](https://github.com/PokemonSanFran/pokeemerald/tree/unbound-quest-menu/include/constants/quests.h)
```c
#define QUEST_29        28
#define QUEST_30        29
#define QUEST_INFINITY_STONES 30
#define QUEST_COUNT     (QUEST_INFINITY_STONES + 1)
```
Add a quest define at the end of this list. You can name these whatever you want, like `QUEST_INFINITY_STONES`. These are the names you will use in when you are scripting to refer to the quests. You will also need to update the value of QUEST\_COUNT to be your last quest in the list, +1.

### [`src/strings.c`](https://github.com/PokemonSanFran/pokeemerald/tree/unbound-quest-menu/src/strings.c)
```c
const u8 gText_SideQuestName_31[] = _("Endgame");
const u8 gText_SideQuestDesc_31[] =_("Help fix the balance of the universe!\nGather the Infinity Gems.");
const u8 gText_SideQuestDoneDesc_31[] = _("All in balance, as it should be.");
const u8 gText_SidequestMap31[] = _("New York City");
```
These are all of the strings being used for your quest. 

### [`include/strings.h`](https://github.com/PokemonSanFran/pokeemerald/tree/unbound-quest-menu/include/strings.h)
```c
extern const u8 gText_SideQuestName_31[];
extern const u8 gText_SideQuestDesc_31[];
extern const u8 gText_SideQuestDoneDesc_31[];
extern const u8 gText_SidequestMap31[];
```
You will also need to define them in the header file.

### [`src/quests.c`](https://github.com/PokemonSanFran/pokeemerald/tree/unbound-quest-menu/src/quests.c)
```c
side_quest(
      gText_SideQuestName_31, //side quest name string
      gText_SideQuestDesc_31, //side quest description string 
      gText_SideQuestDoneDesc_31, //side quest complete description string
      gText_SideQuestMap31, //side quest map string
      OBJ_EVENT_GFX_MAXIE, //quest sprite id
      OBJECT, //quest sprite type
      NULL, //subquest struct
      0 //number of subquest
),
```
Add a quest to the end of this struct, found around line 787. An example has been left there for you. 

#### Existing strings
If you are using an existing location in your game for your map strings, like the Cave of Origin, you can just use the strings listed in [`src/data/region_map/region_map_entries.h`](https://github.com/PokemonSanFran/pokeemerald/tree/unbound-quest-menu/src/data/region_map/region_map_entries.h), but you'll need the remove the `static` at the beginning of the line of you want to use. This applies to any of the strings here.

#### Sprites
Quests display a sprite of your choice in the bottom left. You can choose between an item, an NPC (object), or a Pokémon.
* Object / NPC IDs are listed in [`include/constants/event_objects.h`](https://github.com/PokemonSanFran/pokeemerald/tree/unbound-quest-menu/include/constants/event_objects.h). In the next field, use `OBJECT`.
* Item IDs are listed in [`include/constants/items.h`](https://github.com/PokemonSanFran/pokeemerald/tree/unbound-quest-menu/include/constants/items.h). In the next field, use `ITEM`.
* Species IDs are listed in [`include/constants/species.h`](https://github.com/PokemonSanFran/pokeemerald/tree/unbound-quest-menu/include/constants/species.h). In the next field, use `PKMN`.

If this quest has no subquests, then the last two values should be `NULL` and `0`. 

## Add New Subquests
Quest 1 has 10 blank subquests and Quest 2 has 20. You can edit or delete as you see fit.

### [`include/constants/quests.h`](https://github.com/PokemonSanFran/pokeemerald/tree/unbound-quest-menu/include/constants/quests.h)
```c
#define QUEST_1_SUB_COUNT 10
#define QUEST_2_SUB_COUNT 20
#define QUEST_INFINITY_SUB_COUNT 6
#define SUB_QUEST_COUNT (QUEST_1_SUB_COUNT + QUEST_2_SUB_COUNT + QUEST_INFINITY_SUB_COUNT)
```
Define the number of subquests that you'll be using. You will also need to update the total number of subquests.

### [`src/strings.c`](https://github.com/PokemonSanFran/pokeemerald/tree/unbound-quest-menu/src/strings.c)
```c
const u8 gText_SideQuest31_SubName1[] = _("Space Gem");
const u8 gText_SideQuest31_SubDesc1[] = _("You defeated Tony to get the\nSpace Gem.");
const u8 gText_SideQuest31_SubMap1[] = _("Bulgaria");

const u8 gText_SideQuest31_SubName2[] = _("Mind Gem");
const u8 gText_SideQuest31_SubDesc2[] = _("You defeated Hank to get the\nMind Gem.");
const u8 gText_SideQuest31_SubMap2[] = _("Illonis");

const u8 gText_SideQuest31_SubName3[] = _("Soul Gem");
const u8 gText_SideQuest31_SubDesc3[] = _("You defeated Stephen to get the\nSoul Gem.");
const u8 gText_SideQuest31_SubMap3[] = _("Pennsylvania");

const u8 gText_SideQuest31_SubName4[] = _("Reality Gem");
const u8 gText_SideQuest31_SubDesc4[] = _("You defeated Reed to get the\nReality Gem.");
const u8 gText_SideQuest31_SubMap4[] = _("California");

const u8 gText_SideQuest31_SubName5[] = _("Time Gem");
const u8 gText_SideQuest31_SubDesc5[] = _("You defeated Steve to get the\nTime Gem.");
const u8 gText_SideQuest31_SubMap5[] = _("Manhattan");

const u8 gText_SideQuest31_SubName6[] = _("Power Gem");
const u8 gText_SideQuest31_SubDesc6[] = _("You defeated King to get the\nPower Gem.");
const u8 gText_SideQuest31_SubMap6[] = _("Atlantis");
```
These are all of the strings being used for your subquest. 

### [`include/strings.h`](https://github.com/PokemonSanFran/pokeemerald/tree/unbound-quest-menu/include/strings.h)

```c
extern const u8 gText_SideQuest31_SubName1[];
extern const u8 gText_SideQuest31_SubDesc1[];
extern const u8 gText_SideQuest31_SubMap1[];

extern const u8 gText_SideQuest31_SubName2[];
extern const u8 gText_SideQuest31_SubDesc2[];
extern const u8 gText_SideQuest31_SubMap2[];

extern const u8 gText_SideQuest31_SubName3[];
extern const u8 gText_SideQuest31_SubDesc3[];
extern const u8 gText_SideQuest31_SubMap3[];

extern const u8 gText_SideQuest31_SubName4[];
extern const u8 gText_SideQuest31_SubDesc4[];
extern const u8 gText_SideQuest31_SubMap4[];

extern const u8 gText_SideQuest31_SubName5[];
extern const u8 gText_SideQuest31_SubDesc5[];
extern const u8 gText_SideQuest31_SubMap5[];

extern const u8 gText_SideQuest31_SubName6[];
extern const u8 gText_SideQuest31_SubDesc6[];
extern const u8 gText_SideQuest31_SubMap6[];
```
You will also need to define them in the header file.

### [`src/quests.c`](https://github.com/PokemonSanFran/pokeemerald/tree/unbound-quest-menu/src/quests.c)
```c
static const struct SubQuest sSubQuests31[QUEST_INFINITY_SUB_COUNT] =
{
	sub_quest(
	      30,
          gText_SideQuest31_SubName1,
          gText_SideQuest31_SubDesc1,
          gText_SideQuest31_SubMap1,
          SPECIES_PORYGON2,
	      PKMN,
	      sText_QuestMenu_Caught
	),

	sub_quest(
	      31,
	      gText_SideQuest31_SubName2,
	      gText_SideQuest31_SubDesc2,
	      gText_SideQuest31_SubMap2,
          SPECIES_URSARING,
          PKMN,
	      sText_QuestMenu_Caught
	),

	sub_quest(
	      32,
	      gText_SideQuest31_SubName3,
	      gText_SideQuest31_SubDesc3,
	      gText_SideQuest31_SubMap3,
          OBJ_EVENT_GFX_HEX_MANIAC,
	      OBJECT,
	      sText_QuestMenu_Found
	),

	sub_quest(
	      33,
	      gText_SideQuest31_SubName4,
	      gText_SideQuest31_SubDesc4,
	      gText_SideQuest31_SubMap4,
          ITEM_PETAYA_BERRY,
          ITEM,
	      sText_QuestMenu_Found
	),

	sub_quest(
	      34,
	      gText_SideQuest31_SubName5,
	      gText_SideQuest31_SubDesc5,
	      gText_SideQuest31_SubMap5,
          ITEM_GUARD_SPEC,
          ITEM,
	      sText_QuestMenu_Read
	),

	sub_quest(
	      35,
	      gText_SideQuest31_SubName6,
	      gText_SideQuest31_SubDesc6,
	      gText_SideQuest31_SubMap6,
          OBJ_EVENT_GFX_SWIMMER_M,
          OBJECT,
	      sText_QuestMenu_Read
	),
};
```
This new struct should sit above the sSideQuests struct. Each quest that has subquests needs its own struct to hold the data for its children subquests. In the declaration of the struct, you should be using the same number of quests that you previously defined. 

Regardless of their parent, **each subquest needs its own unique ID**. 

```c
static const u8 sText_QuestMenu_Caught[] = _("Caught");
static const u8 sText_QuestMenu_Found[] = _("Found");
static const u8 sText_QuestMenu_Read[] = _("Read");
```
The last member of the struct uses a string that is declared at the top of [`src/strings.c`](https://github.com/PokemonSanFran/pokeemerald/tree/unbound-quest-menu/src/strings.c). Each subquest can have their own unique label, much like sprites.

```c
    side_quest(
      gText_SideQuestName_31, //side quest name string
      gText_SideQuestDesc_31, //side quest description string
      gText_SideQuestDoneDesc_31, //side quest complete description string
      gText_SideQuestMap31, //side quest map string
      OBJ_EVENT_GFX_MAXIE, //quest sprite id
      OBJECT, //quest sprite type
      sSubQuests31, //subquest struct
      QUEST_INFINITY_SUB_COUNT //number of subquest
),
```
If you are adding subquests to a quest that previously did not have them, you will need to edit the last two members of that element to properly assign the children to the parent _and_ declare the correct number of subquests.

### [`include/quests.h`](https://github.com/PokemonSanFran/pokeemerald/tree/unbound-quest-menu/include/quests.h)
```c
extern const struct SubQuest gSubQuests1[QUEST_1_SUB_COUNT];
extern const struct SubQuest gSubQuests2[QUEST_2_SUB_COUNT];
extern const struct SubQuest gSubQuests31[QUEST_INFINITY_SUB_COUNT];
extern const struct SideQuest gSideQuests[QUEST_COUNT];
```
And finally, make sure your new subquest struct is defined in the file's header.

#### Sprites
Sprites work the same way for subquests as they do for main quests.

## Accessing In Game
Calling the function 
```c
QuestMenu_Init(0, <callback>)
```
will open the Quest Menu. If the flag `FLAG_SYS_QUEST_MENU_GET` is set, the player will be able to access from the Start Menu.

## Scripting Commands

### Open Quest Menu
![Demo of QUEST\_MENU\_OPEN.](https://user-images.githubusercontent.com/77138753/178154612-cd3478c8-5550-4617-9a6f-f65686ae1ee9.png)

```c
openquestmenu
```
```c
questmenu QUEST_MENU_OPEN 0
```
Either of these will open the quest menu in game.

### Set Start Menu Flag
![Demo of FLAG\_SYS\_QUEST\_MENU\_GET.](https://user-images.githubusercontent.com/77138753/178154605-20ef6c19-bb85-428c-9aff-d0bcb85b565f.png)

```c
setflag FLAG_SYS_QUEST_MENU_GET
```
When this flag is set, the option to look at Quest Menu will be added to the Start Menu.

### Change State 
![Demo of SET\_STATE functionality.](https://user-images.githubusercontent.com/77138753/178154598-09fe8d98-cf5d-4f93-8ac2-293ac3890661.png)

```c
questmenu QUEST_MENU_SET_ACTIVE QUEST_INFINITY_STONES
subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_INFINITY_STONES, SUB_QUEST_3

questmenu QUEST_MENU_SET_REWARD QUEST_1 

questmenu QUEST_MENU_COMPLETE_QUEST QUEST_2 
openquestmenu
```
Set `QUEST_INFINITY_STONES`'s state to active, `SUB_QUEST_3` of `QUEST_INFINITY_STONES` to Complete, `QUEST_1`'s state to Reward, and `QUEST_2`'s state to Complete, and then open the menu.

### Check State
![Demo of CHECK\_STATE functionality.](https://user-images.githubusercontent.com/77138753/178154600-a862c949-ffa9-4e6c-b0d4-930db20bc096.png)

```c
    setflag FLAG_SYS_QUEST_MENU_GET
    questmenu QUEST_MENU_COMPLETE_QUEST QUEST_INFINITY_STONES
    questmenu QUEST_MENU_CHECK_COMPLETE QUEST_INFINITY_STONES
    msgbox QuestState, MSGBOX_SIGN
    goto_if_eq VAR_RESULT, TRUE, CelebrateEndgame
    end

CelebrateEndgame::
    special DoDomeConfetti
    return
```
If `QUEST_INFINITY_STONES` is completed,`gSpecialVar_Result` / `VAR_RESULT` will return true. If not, will return false. This also works for `QUEST_MENU_CHECK_ACTIVE`, and `QUEST_MENU_CHECK_REWARD`.

In this example, set `QUEST_INFINITY_STONES`'s state to complete, check to see if `QUEST_INFINITY_STONES` has the complete state, and if so, shower confetti.

#### Check Subquest State 

```c
    subquestmenu QUEST_MENU_CHECK_COMPLETE, QUEST_INFINITY_STONES, SUB_QUEST_3
```
This can also be used to check the completion of subquests.

### Buffer Quest Name
![Demo of BUFFER\_QUEST\_NAME functionality.](https://user-images.githubusercontent.com/77138753/178154597-d2286aa0-8bb5-4063-8e57-47ed031adb7e.png)

```c
    questmenu QUEST_MENU_BUFFER_QUEST_NAME QUEST_INFINITY_STONES
    msgbox QuestName MSGBOX_SIGN

QuestName: .string "{STR_VAR_1}$"
```
Store the name of `QUEST_INFINITY_STONES` in `gStringVar1` / `{STR_VAR_1}`, or the `QUEST_INFINITY_STONES` sub quest 3's name.

In this example, buffer the name of `QUEST_QUEST_INFINITY_STONES`. This buffer is then called when displaying a sign message box.

#### Buffer Subquest Name
```c
    subquestmenu QUEST_MENU_BUFFER_QUEST_NAME QUEST_INFINITY_STONES SUB_QUEST_3
    msgbox QuestName MSGBOX_SIGN

QuestName: .string "{STR_VAR_1}$"
```
This can also be used for subquests.

### Unlock Quest
```c
questmenu QUEST_MENU_UNLOCK_QUEST QUEST_QUEST_INFINITY_STONES
```
Set `QUEST_INFINITY_STONES`'s state to unlocked. There is no reason for this to ever be used, because it will happen automatically when applying any other state.

# Known Issues

## Object Fading 
![Gif displaying the object fade bug.](https://user-images.githubusercontent.com/77138753/178154608-5250bfa2-874d-4ad4-b042-a7e3674f59ea.png)![Gif dispalying the object fade functionality in Unbound.](https://user-images.githubusercontent.com/77138753/178154611-2b20821a-3329-4df5-976b-6615e1a3098b.png)

Unbound's Quest Menu's has the object in the bottom left corner of the screen fade out when the player enters or leaves a subquest. This feature does not replicate that functionality.

If you are able to help resolve this issue, please feel free to reach out!

## Artifacting / Palette Lag
![Gif displaying a visual artifacting bug.](https://user-images.githubusercontent.com/77138753/178154595-31230371-343f-45a1-9a99-0639edf64c77.png)![Gif displaying the object fade bug.](https://user-images.githubusercontent.com/77138753/178154608-5250bfa2-874d-4ad4-b042-a7e3674f59ea.png)!

When moving from item to item, the palette of the old item will occasionally lag, before correcting itself.

When moving from a quest that displays an object to a quest that displays a non-object, a strange artifact will appear on the screen for a frame or two.

Neither of these can be consistently reproduced, unfortunately.

If you are able to help resolve this issue, please feel free to reach out!

## Background Image
![Skeli's FRLG style Quest Menu background.](https://user-images.githubusercontent.com/77138753/178154596-4140cee3-ecb1-4121-8beb-c72431344b65.png)

Fans of Unbound will notice that this is not the same background that is used in Unbound. Skeli was unable to give permission for use of that background, but was kind enough to provide an alternative background to be used. 

This branch is using a variant with altered the colors, so that is text easier to read, but the original image is provided above. You are free to use either variant, as long as Skeli is credited.

# Support
If you have read all of the documentation here and still have questions, please [ask a good question](https://www.freecodecamp.org/news/how-to-ask-good-questions-as-a-developer-9f71ff809b63/) in the [pokeemerald](https://discord.gg/yG8zpMVr8x) channel of the pret Discord server. You can tag `psf#2983` and we will try to help if we can.

# Donations
If you got some use out of this feature, please considering donating. 
We are currently not taking any donations, so please donate to some of our favorite charities.

* [Centre for Effective Altruism USA Inc.](https://www.charitynavigator.org/ein/471988398)
* [JS](http://google.com)
* [HN](http://google.com)
* [MM](http://google.com)

# Contributors 
## **[Skeli#3917](https://www.youtube.com/channel/UCRIShSkz-VJWqQT83KQlNjg)**
* Developed the original Unbound menu
* Provided a variant of the current background
* Provided an implementation of fading text
* Suggested ways reduce size of quests on saveblock2

## **[ghoulslash#3839](https://www.pokecommunity.com/member.php?u=581824)**
* [Developed the original Quest Menu](https://www.pokecommunity.com/showthread.php?t=434462)
* Helped debug adding a new macro to vanilla
* Helped debug object priority for sprite creation
* Provided bitwise operation for removing quest status

## **HN (PSF Developer)**
* A lot of these aren't written down because we meet in voice calls, but HN was absolutely instrumental in getting this working.

## **[Karathan#1337](https://www.twitch.tv/1337sbird)**
* Explained printing encoded strings via MgbaPrintf 
* Suggested ways reduce size of quests on saveblock2
* Suggested ways to allocate memory for prepend/append of the quest name
* Helped debug adding the UI background and palette

## **[MCboy#0891](https://github.com/atasro2/pwaa1)**
* Helped debug and refactor implementation of fading text
* Suggested ways to fix the object fading issue

## **[Greenphx#5428](https://github.com/Greenphx9) / [Deokishisu#3251](https://www.pokecommunity.com/member.php?u=22062)**
* Suggested ways reduce size of quests on saveblock2

## **[BSBob#4144](https://github.com/nielsmittertreiner)**
* Provided implementation for prepend/append of the quest name

## **MM (PSF Developer)**
* Pointed out that the W stood for Wumbo.
