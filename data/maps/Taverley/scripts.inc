Taverley_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Taverley_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Taverley_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setflag FLAG_VISITED_TAVERLEY
	return


TAVERLEY_SIGN::
	lock
	faceplayer
	msgbox TAVERLEY_SIGN_Text_0
	release
	end


TAVERLEY_CORGI::
	lock
	faceplayer
	msgbox TAVERLEY_CORGI_Text_0
	release
	end


TAVERLEY_POH::
	lock
	faceplayer
	msgbox TAVERLEY_POH_Text_0
	release
	end


TAVERLEY_DUNGEON_SIGN::
	lock
	faceplayer
	msgbox TAVERLEY_DUNGEON_SIGN_Text_0
	release
	end


FRITZ_THE_EXPERIMENT::
	lock
	faceplayer
	msgbox FRITZ_THE_EXPERIMENT_Text_0
	release
	end


TAVERLEY_BOY::
	faceplayer
	namebox TAVERLEY_BOY_Text_0
	msgbox TAVERLEY_BOY_Text_1
	closemessage
	hidenamebox
	release
	end


GUTHIX_RAPTOR::
	faceplayer
	namebox GUTHIX_RAPTOR_Text_0
	msgbox GUTHIX_RAPTOR_Text_1
	closemessage
	hidenamebox
	release
	end


NORA_T_HAGG::
	faceplayer
	namebox NORA_T_HAGG_Text_0
	msgbox NORA_T_HAGG_Text_1
	closemessage
	hidenamebox
	release
	end


PIKKUPSTIX::
	faceplayer
	namebox PIKKUPSTIX_Text_0
	msgbox PIKKUPSTIX_Text_1
	closemessage
	hidenamebox
	release
	end


ALAIN::
	faceplayer
	namebox ALAIN_Text_0
	msgbox ALAIN_Text_1
	closemessage
	hidenamebox
	release
	end


TEGID::
	faceplayer
	namebox TEGID_Text_0
	msgbox TEGID_Text_1
	closemessage
	hidenamebox
	release
	end


TAVERLEY_DRUID_1::
	faceplayer
	msgbox TAVERLEY_DRUID_1_Text_0
	closemessage
	release
	end


TAVERLEY_DRUID_2::
	faceplayer
	msgbox TAVERLEY_DRUID_2_Text_0
	closemessage
	release
	end


TAVERLEY_DRUID_3::
	faceplayer
	msgbox TAVERLEY_DRUID_3_Text_0
	closemessage
	release
	end


TAVERLEY_DRUID_BLOCK::
	lock
	faceplayer
	namebox TAVERLEY_DRUID_BLOCK_Text_0
	msgbox TAVERLEY_DRUID_BLOCK_Text_1
	closemessage
	hidenamebox
	release
	end


TAVERLEY_GUARD_BLOCK::
	lock
	faceplayer
	namebox TAVERLEY_GUARD_BLOCK_Text_0
	msgbox TAVERLEY_GUARD_BLOCK_Text_1
	closemessage
	hidenamebox
	release
	end


TAVERLEY_SIGN_Text_0:
	.string "Welcome to Taverley.\p"
	.string "Home of the Druids and the secrets of\n"
	.string "Herblore.$"

TAVERLEY_CORGI_Text_0:
	.string "The dog tries to lick your hands as you\n"
	.string "pet him.$"

TAVERLEY_POH_Text_0:
	.string "Home sweet home?\p"
	.string "Maybe one day, but you'll need to buy\n"
	.string "one from an estate agent first!$"

TAVERLEY_DUNGEON_SIGN_Text_0:
	.string "BEWARE!\p"
	.string "Stay clear of the dungeon to the south!\p"
	.string "It is full of many dangerous monsters\n"
	.string "that will kill any unprepared\l"
	.string "adventurers.\p"
	.string "Proceed with extreme caution!$"

FRITZ_THE_EXPERIMENT_Text_0:
	.string "The creature stares intensely at you.\p"
	.string "For a split second you could have sworn\n"
	.string "that its skin appeared to ripple ready\l"
	.string "to change shape.$"

TAVERLEY_BOY_Text_0:
	.string "Harvey$"

TAVERLEY_BOY_Text_1:
	.string "I kicked my ball over that hedge into\n"
	.string "that garden!\p"
	.string "The old lady who lives there is scary...\n"
	.string "She's taken my ball and won't give it\l"
	.string "back.$"

GUTHIX_RAPTOR_Text_0:
	.string "$"

GUTHIX_RAPTOR_Text_1:
	.string "Caw cawcaw caaaw!$"

NORA_T_HAGG_Text_0:
	.string "Nora. T. Hagg$"

NORA_T_HAGG_Text_1:
	.string "That pesky kid keeps kicking his ball\n"
	.string "into my garden. I am sick and tired of\l"
	.string "it!\p"
	.string "If he wants it back, he can come and get\n"
	.string "it himself. After all, Fritz could do with\l"
	.string "a snack..$"

PIKKUPSTIX_Text_0:
	.string "Pikkupstix$"

PIKKUPSTIX_Text_1:
	.string "I used to teach only the most worthy of\n"
	.string "adventurers the mystical art of\l"
	.string "Summoning.\p"
	.string "However, ever since the wizards got\n"
	.string "hold of our pouches and augmented them\l"
	.string "to catch wild creatures suddenly\l"
	.string "nobody wants to learn anymore.$"

ALAIN_Text_0:
	.string "Alain$"

ALAIN_Text_1:
	.string "Something was flying overhead earlier!\p"
	.string "Did you see it?\p"
	.string "It had yellow and red stripes, and I\n"
	.string "could have sworn I saw a disembodied\l"
	.string "hand waving at me.\p"
	.string "What on Gielinor could that have been?$"

TEGID_Text_0:
	.string "Tegid$"

TEGID_Text_1:
	.string "I was washing my clothes in the lake the\n"
	.string "other day and some adventurer came\l"
	.string "along and stole my soap!$"

TAVERLEY_DRUID_1_Text_0:
	.string "Good day to you, may nature smile upon\n"
	.string "you.$"

TAVERLEY_DRUID_2_Text_0:
	.string "There was a strange man in a funny hat\n"
	.string "here for a while.\p"
	.string "He kept trying to scam people by sell\n"
	.string "beans that were 'magical'.\p"
	.string "Everybody knows there's no such thing\n"
	.string "as magic beans.$"

TAVERLEY_DRUID_3_Text_0:
	.string "Admiring my cabbages, are you?\p"
	.string "Deliciousness be with you.\p"
	.string "Oh, you don't know what I'm talking\n"
	.string "about..$"

TAVERLEY_DRUID_BLOCK_Text_0:
	.string "Druid$"

TAVERLEY_DRUID_BLOCK_Text_1:
	.string "The other druids are engaged in a ritual\n"
	.string "to summon creatures to help fight off\l"
	.string "the troll invaders.\p"
	.string "They are not to be disturbed!$"

TAVERLEY_GUARD_BLOCK_Text_0:
	.string "Guard$"

TAVERLEY_GUARD_BLOCK_Text_1:
	.string "The Burthorpe Imperial Guard are\n"
	.string "currently fending off invading trolls!\p"
	.string "I'm sorry adventurer, but it's not\n"
	.string "currently safe for anyone to go beyond\l"
	.string "this point!$"
