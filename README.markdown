# Introduction
This is a "port" of [Unbound](https://www.pokecommunity.com/showthread.php?t=382178)'s Quest Menu to use in decomp projects. ghoulslash's [Quest Menu](https://www.pokecommunity.com/showthread.php?t=434462) was used as a base, and was heavily modified to perfectly mimic Unbound's variant. This features only handles the menu and a basic handling of the quests.

## Media
[screenshots](https://i.imgur.com/zO9MisS.gif)

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

```
git remote add psf https://github.com/PokemonSanFran/pokeemerald/ # This adds our team's pokeemerald branch as a remote repo.
git pull psf unbound-quest-menu #This pulls in the unbound-quest-menu feature branch
```
# Warnings
## ghoulslash's menu
You cannot use this feature and ghoulslash's quest menu at the same time. You will need to use one or the other. If you have already pulled in ghoulslash's, you will need to do some work merging conflicts after pulling this one in.

## Wrapping menu
[original background](https://i.imgur.com/Hwh2apf.png)

Unbound's list menus wrap, meaning that when you press up on the first item a list, you are brought to the last item (and vice versa). Emerald has this behavior turned off. Pulling in this branch will turn on this functionality for all list menus in your project. If you do not want this functionality, you will need to disable it.

### Disabling wrapping
To remove this functionality, remove the following code from `src/list_menu.c` (around line 426):

```
if (currentPosition == 0)
    ListMenuChangeSelection(list,TRUE,lastPositon,TRUE);
else
```

as well as this (around line 435):

```
if (currentPosition == lastPositon)
    ListMenuChangeSelection(list,TRUE,lastPositon, FALSE);
else
```
# Usage and Examples
##Adding new Quests

### Adding new subquests

## Accessing In Game
Calling the function 
```
QuestMenu_Init(0, <callback>)
```
will open the Quest Menu. If the flag `FLAG_SYS_QUEST_MENU_GET` is set, the player will be able to access from the Start Menu.

## Quest States

### Locked
If a quest is locked, it appears as "????" in the quest menu.

### Active
Currently in progress.

### Reward
Has been completed, but the player has not recieved the reward for it yet.

### Done
Has been completed and the player has recieved the reward.

Subquests only have two states - Locked and Done.




##Filter Modes

##Alphabetical Sort

##Favorite Quests

##Subquests


##Scripting Commands

### Open Quest Menu
```
openquestmenu
```
```
questmenu QUEST_MENU_OPEN 0
```

Either of these will open the quest menu in game.

### Unlock Quest
```
questmenu QUEST_MENU_UNLOCK_QUEST 24
```
Unlock quest number 24. When quests are locked, their name will appear as "????" in the list menu.

### Complete Quest 
```
questmenu QUEST_MENU_COMPLETE_QUEST 24
```
Complete quest number 24.



### Title
```
questmenu code 24
```
Sentence


# Known Issues
## Background Image
[original background](https://i.imgur.com/Hwh2apf.png)

Fans of Unbound will notice that this is not the same background that is used in Unbound. Skeli was unable to give permission for use of that background, but was kind enough to provide an alternative background to be used. The colors have slightly been altered to make the text easier to read, but the original image is provided above.

## Object Fading 
[original background]()

Unbound's Quest Menu's has the object in the bottom left corner of the screen fade out when the player enters or leaves a subquest. This feature does not replicate that functionality.

## Artifacting
[gif example]()

When moving from a quest that displays an object to a quest that displays a non-object, a strange artifact will appear on the screen for a frame or two.

If you are able to help resolve these issues, please feel free to reach out!

# Support
If you have read all of the documentation here and still have questions, please ask a [good question](https://codereview.stackexchange.com/help/how-to-ask) in the [#pokeemerald](https://discord.gg/yG8zpMVr8x) channel of the pret Discord server. You can tag psf#2983 but that's not a guarentee that you'll get the help you need (ultimately, this is a free product, so there are no guarentees.)

# Donations
If you got some use out of this feature, please considering donating. We are currently not taking any donations, so please donate to some of our favorite charities.

* [Centre for Effective Altruism USA Inc.](https://www.charitynavigator.org/ein/471988398)
