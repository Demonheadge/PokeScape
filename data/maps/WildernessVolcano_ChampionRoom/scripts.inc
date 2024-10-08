WildernessVolcano_ChampionRoom_MapScripts::
	.byte 0


NPC_WILDERNESS_CRATER_START_CHALLENGE::
	lock
	faceplayer
	msgbox NPC_WILDERNESS_CRATER_START_CHALLENGE_Text_0
	msgbox NPC_WILDERNESS_CRATER_START_CHALLENGE_Text_1
	hidenamebox
	release
	end


WILDERNESS_CRATER_SIR_TIFFY::
	lock
	faceplayer
	namebox WILDERNESS_CRATER_SIR_TIFFY_Text_0
	msgbox WILDERNESS_CRATER_SIR_TIFFY_Text_1
	playbgm MUS_ENCOUNTER_ELITE_FOUR, FALSE
	call ELITE4_BATTLE_SIR_TIFFY_CASHIEN
	msgbox WILDERNESS_CRATER_SIR_TIFFY_Text_2
	hidenamebox
	call WILDERNESS_VOLCANO_ROOM_1_OpenNextRoom
	release
	end


WILDERNESS_CRATER_HAZELMARE::
	lock
	faceplayer
	namebox WILDERNESS_CRATER_HAZELMARE_Text_0
	msgbox WILDERNESS_CRATER_HAZELMARE_Text_1
	call ELITE4_BATTLE_HAZELMERE
	msgbox WILDERNESS_CRATER_SIR_TIFFY_Text_2
	hidenamebox
	release
	end


WILDERNESS_CRATER_HANS::
	lock
	faceplayer
	namebox WILDERNESS_CRATER_HANS_Text_0
	msgbox WILDERNESS_CRATER_HANS_Text_1
	call ELITE4_BATTLE_HANS
	msgbox WILDERNESS_CRATER_SIR_TIFFY_Text_2
	hidenamebox
	release
	end


WILDERNESS_CRATER_ZANIK::
	lock
	faceplayer
	namebox WILDERNESS_CRATER_ZANIK_Text_0
	msgbox WILDERNESS_CRATER_ZANIK_Text_1
	call ELITE4_BATTLE_ZANIK
	msgbox WILDERNESS_CRATER_SIR_TIFFY_Text_2
	hidenamebox
	release
	end


WILDERNESS_CRATER_WISEOLDMAN::
	lock
	faceplayer
	namebox WILDERNESS_CRATER_WISEOLDMAN_Text_0
	msgbox WILDERNESS_CRATER_WISEOLDMAN_Text_1
	call ELITE4_BATTLE_SIR_TIFFY_CASHIEN
	msgbox WILDERNESS_CRATER_WISEOLDMAN_Text_2
	hidenamebox
	release
	end


NPC_WILDERNESS_CRATER_START_CHALLENGE_Text_0:
	.string "Welcome to the Wilderness Crater!\p"
	.string "Before you can challenge the most elite\n"
	.string "MvMers I must check that you have 8\l"
	.string "badges.$"

NPC_WILDERNESS_CRATER_START_CHALLENGE_Text_1:
	.string "Alright! You have 8 Badges. You may\n"
	.string "enter. Good luck with your challenge!$"

WILDERNESS_CRATER_SIR_TIFFY_Text_0:
	.string "Sir Tiffy$"

WILDERNESS_CRATER_SIR_TIFFY_Text_1:
	.string "Hello {PLAYER}. I've heard a lot of\n"
	.string "good things about you.\p"
	.string "I am looking forward to this battle!\p"
	.string "I am number 1 in your challenge.$"

WILDERNESS_CRATER_SIR_TIFFY_Text_2:
	.string "You won, go through to the next room.$"

WILDERNESS_CRATER_HAZELMARE_Text_0:
	.string "Hazelmare$"

WILDERNESS_CRATER_HAZELMARE_Text_1:
	.string "you hear thoughts in your mind…\p"
	.string "I am number 3. I can read your every\n"
	.string "move.$"

WILDERNESS_CRATER_HANS_Text_0:
	.string "HANS$"

WILDERNESS_CRATER_HANS_Text_1:
	.string "{PLAYER}! Welcome to Lumbridge!$"

WILDERNESS_CRATER_ZANIK_Text_0:
	.string "Zanik$"

WILDERNESS_CRATER_ZANIK_Text_1:
	.string "It's good to see you again {PLAYER}!\n"
	.string "I've been wanting to battle you ever\l"
	.string "since we battled alongside eachother\l"
	.string "to take down H.A.M!$"

WILDERNESS_CRATER_WISEOLDMAN_Text_0:
	.string "Wise Old Man$"

WILDERNESS_CRATER_WISEOLDMAN_Text_1:
	.string "Hello you mysterious person.\p"
	.string "You must be strong to make it here.\n"
	.string "Lets do it. If not I'll just take all your\l"
	.string "party hats.$"

WILDERNESS_CRATER_WISEOLDMAN_Text_2:
	.string "You won, YOU ARE THE CHAMPION!$"
