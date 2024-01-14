AlKharid_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, AlKharid_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

AlKharid_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setvar VAR_EVOLUTION_MAP_STATE, 11
	return


ALKHARID_GNOMEGLIDER::
	msgbox ALKHARID_GNOMEGLIDER_Text_0
	closemessage
	release
	end


ALKHARID_NPC_1::
	faceplayer
	msgbox ALKHARID_NPC_1_Text_0
	closemessage
	release
	end


ALKHARID_NPC_2::
	faceplayer
	namebox ALKHARID_NPC_2_Text_0
	msgbox ALKHARID_NPC_2_Text_1
	closemessage
	hidenamebox
	release
	end


ALKHARID_NPC_3::
	faceplayer
	msgbox ALKHARID_NPC_3_Text_0
	closemessage
	release
	end


ALKHARID_NPC_4::
	faceplayer
	msgbox ALKHARID_NPC_4_Text_0
	closemessage
	release
	end


ALKHARID_NPC_5::
	faceplayer
	msgbox ALKHARID_NPC_5_Text_0
	closemessage
	release
	end


ALKHARID_NPC_6::
	faceplayer
	msgbox ALKHARID_NPC_6_Text_0
	closemessage
	release
	end


ALKHARID_NPC_7::
	faceplayer
	msgbox ALKHARID_NPC_7_Text_0
	closemessage
	release
	end


ALKHARID_NPC_8::
	faceplayer
	msgbox ALKHARID_NPC_8_Text_0
	closemessage
	release
	end


ALKHARID_NPC_9::
	faceplayer
	msgbox ALKHARID_NPC_9_Text_0
	closemessage
	release
	end


ALKHARID_NPC_10::
	faceplayer
	msgbox ALKHARID_NPC_10_Text_0
	closemessage
	release
	end


ALKHARID_NPC_11::
	faceplayer
	msgbox ALKHARID_NPC_10_Text_0
	closemessage
	release
	end


ALKHARID_NPC_12::
	faceplayer
	msgbox ALKHARID_NPC_10_Text_0
	closemessage
	release
	end


ALKHARID_NPC_13::
	faceplayer
	msgbox ALKHARID_NPC_10_Text_0
	closemessage
	release
	end


ALKHARID_NPC_14::
	faceplayer
	msgbox ALKHARID_NPC_10_Text_0
	closemessage
	release
	end


ALKHARID_NPC_15::
	faceplayer
	msgbox ALKHARID_NPC_10_Text_0
	closemessage
	release
	end


ALKHARID_NPC_16::
	faceplayer
	msgbox ALKHARID_NPC_10_Text_0
	closemessage
	release
	end


SHANTYPASS_NPC_1::
	faceplayer
	msgbox ALKHARID_NPC_10_Text_0
	closemessage
	release
	end


SHANTYPASS_NPC_2::
	faceplayer
	msgbox ALKHARID_NPC_10_Text_0
	closemessage
	release
	end


SHANTYPASS_NPC_3::
	faceplayer
	msgbox ALKHARID_NPC_10_Text_0
	closemessage
	release
	end


ALKHARID_GNOMEGLIDER_Text_0:
	.string "It is a Gnome Glider.$"

ALKHARID_NPC_1_Text_0:
	.string "The Gnome Glider is currently\n"
	.string "undergoing maintenance.\p"
	.string "Please come back later.$"

ALKHARID_NPC_2_Text_0:
	.string "Ali$"

ALKHARID_NPC_2_Text_1:
	.string "Browse my Wares.$"

ALKHARID_NPC_3_Text_0:
	.string "Welcome to Al Kharid, NOOB!$"

ALKHARID_NPC_4_Text_0:
	.string "Dont cause trouble here in city, law\n"
	.string "enforcement has a tendency to call\l"
	.string "upon several more guards unneedingly\l"
	.string "for the smallest of cases.$"

ALKHARID_NPC_5_Text_0:
	.string "Up North is the desert, you can find\n"
	.string "both sunny weather and sandstorms\l"
	.string "there.\p"
	.string "Some monsters seems to evolve only\n"
	.string "under those conditions.$"

ALKHARID_NPC_6_Text_0:
	.string "Did you know theres a ban on magic\n"
	.string "carpets in Al Kharid?\p"
	.string "Apparently their leader died using one\n"
	.string "at one point.$"

ALKHARID_NPC_7_Text_0:
	.string "This is Al Kharid castle, would you like\n"
	.string "to lose to the prince?$"

ALKHARID_NPC_8_Text_0:
	.string "This is Al Kharid castle, would you like\n"
	.string "to challenge the prince?$"

ALKHARID_NPC_9_Text_0:
	.string "We deal with a lot of thiefs and\n"
	.string "cutthroats here.\p"
	.string "Al Kharid does not welcome them, yet\n"
	.string "they keep coming back.$"

ALKHARID_NPC_10_Text_0:
	.string "$"
