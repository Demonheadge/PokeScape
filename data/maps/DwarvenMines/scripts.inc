DwarvenMines_MapScripts::
	.byte 0


NPC_DWARVENMINES_NPC1::
	lock
	faceplayer
	namebox NPC_DWARVENMINES_NPC1_Text_0
	msgbox NPC_DWARVENMINES_NPC1_Text_1
	closemessage
	hidenamebox
	release
	end


NPC_DWARVENMINES_NPC2::
	lock
	faceplayer
	namebox NPC_DWARVENMINES_NPC2_Text_0
	msgbox NPC_DWARVENMINES_NPC2_Text_1
	closemessage
	hidenamebox
	release
	end


NPC_DWARVENMINES_NPC3::
	lock
	faceplayer
	namebox NPC_DWARVENMINES_NPC2_Text_0
	msgbox NPC_DWARVENMINES_NPC3_Text_0
	closemessage
	hidenamebox
	release
	end


NPC_DWARVENMINES_NPC4::
	lock
	faceplayer
	namebox NPC_DWARVENMINES_NPC2_Text_0
	msgbox NPC_DWARVENMINES_NPC4_Text_0
	closemessage
	hidenamebox
	release
	end


NPC_DWARVENMINES_NULODION::
	lock
	faceplayer
	namebox NPC_DWARVENMINES_NULODION_Text_0
	msgbox NPC_DWARVENMINES_NULODION_Text_1
	closemessage
	hidenamebox
	release
	end


NPC_DWARVENMINES_NPC5::
	lock
	faceplayer
	namebox NPC_DWARVENMINES_NPC2_Text_0
	msgbox NPC_DWARVENMINES_NPC5_Text_0
	closemessage
	hidenamebox
	release
	end


NPC_DWARVENMINES_NPC6::
	lock
	faceplayer
	namebox NPC_DWARVENMINES_NPC2_Text_0
	msgbox NPC_DWARVENMINES_NPC6_Text_0
	closemessage
	hidenamebox
	release
	end


NPC_DWARVENMINES_NPC7::
	lock
	faceplayer
	namebox NPC_DWARVENMINES_NPC2_Text_0
	msgbox NPC_DWARVENMINES_NPC7_Text_0
	closemessage
	hidenamebox
	release
	end


NPC_DWARVENMINES_ENGINEER::
	lock
	faceplayer
	namebox NPC_DWARVENMINES_ENGINEER_Text_0
	msgbox NPC_DWARVENMINES_ENGINEER_Text_1
	closemessage
	hidenamebox
	release
	end


GeneralStore_DWARVENMINES::
	lock
	faceplayer
	namebox GeneralStore_DWARVENMINES_Text_0
	msgbox GeneralStore_DWARVENMINES_Text_1
	waitmessage
	call GeneralStoreShopScript
	msgbox GeneralStore_DWARVENMINES_Text_2
	release
	return


DWARVENMINES_SIGNPOST::
	msgbox DWARVENMINES_SIGNPOST_Text_0
	closemessage
	end


NPC_DWARVENMINES_NPC1_Text_0:
	.string "Apprentice$"

NPC_DWARVENMINES_NPC1_Text_1:
	.string "Inside here is Nulodion's multicannon\n"
	.string "store!\p"
	.string "The only place in Gielinor that you can\n"
	.string "find the esteemed dwarf multicannon\l"
	.string "for sale.\p"
	.string "Don't tell him I told you this, but it's\n"
	.string "actually cheaper if you buy the full set\l"
	.string "from him instead of individual parts!\p"
	.string "{PAUSE 15}Maybe you could spare some of the\n"
	.string "extra coin you save for me…?$"

NPC_DWARVENMINES_NPC2_Text_0:
	.string "Dwarf$"

NPC_DWARVENMINES_NPC2_Text_1:
	.string "Ho-hiiii, ho-hiiii.\p"
	.string "Off to work, let's try not to die!{PAUSE 15}\p"
	.string "Oh, uh, you didn't hear me singing just\n"
	.string "now, did you?$"

NPC_DWARVENMINES_NPC3_Text_0:
	.string "The landslides have been getting worse\n"
	.string "recently.\p"
	.string "Now they're causing damage even as far\n"
	.string "south of the mountain as this.\p"
	.string "What could be causing them?$"

NPC_DWARVENMINES_NPC4_Text_0:
	.string "Ores!\p"
	.string "Get 'yer ores here!{PAUSE 15}\p"
	.string "Hmm, maybe I need a new slogan as that\n"
	.string "sounds a lot like we're selling\l"
	.string "something else!\p"
	.string "Maybe that would be more profitable\n"
	.string "though..$"

NPC_DWARVENMINES_NULODION_Text_0:
	.string "Nulodion$"

NPC_DWARVENMINES_NULODION_Text_1:
	.string "You want to buy a dwarven multicannon?\p"
	.string "I'm afraid I can't sell them to just\n"
	.string "anyone!\p"
	.string "They're a closely guarded secret.\p"
	.string "Perhaps if you'd done something to help\n"
	.string "the dwarves I could consider it...$"

NPC_DWARVENMINES_NPC5_Text_0:
	.string "This is a rest hall for weary miners to\n"
	.string "have power naps in after long shifts.\p"
	.string "{PAUSE 15}You can use one of the beds to rest\n"
	.string "too, if you'd like.\p"
	.string "Just try not to break them!$"

NPC_DWARVENMINES_NPC6_Text_0:
	.string "I heard somewhere that it was good to\n"
	.string "whistle while you work...\p"
	.string "but all that did was make the other\n"
	.string "miners grumpy!\p"
	.string "Doing it makes me happy, but I'm too\n"
	.string "bashful to deal with the arguments.$"

NPC_DWARVENMINES_NPC7_Text_0:
	.string "Time for work again already?\p"
	.string "Ugh, no, please...\p"
	.string "Just five more minutes in bed!$"

NPC_DWARVENMINES_ENGINEER_Text_0:
	.string "Engineer$"

NPC_DWARVENMINES_ENGINEER_Text_1:
	.string "It's hard work repairing these\n"
	.string "multicannons all day long.\p"
	.string "I don't know why they only run for 25\n"
	.string "minutes at a time before they break!\p"
	.string "Dwarven engineering usually is much\n"
	.string "more reliable than that, I swear..!$"

GeneralStore_DWARVENMINES_Text_0:
	.string "Clerk$"

GeneralStore_DWARVENMINES_Text_1:
	.string "Oh, we don't normally get human\n"
	.string "customers!\p"
	.string "Welcome to the Dwarven Mines General\n"
	.string "Store.\p"
	.string "How may I help you?$"

GeneralStore_DWARVENMINES_Text_2:
	.string "Thank you, come again!$"

DWARVENMINES_SIGNPOST_Text_0:
	.string "NORTH to Ice Mountain.\p"
	.string "Be wary of vicious ice monsters and\n"
	.string "humans dressed in all black.$"
