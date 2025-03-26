Route46_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route46_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Route46_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setvar VAR_EVOLUTION_MAP_STATE, 16
	return


BATTLE_ROUTE_46_TRAINER_1::
	trainerbattle_single TRAINER_ROUTE_46_TRAINER_1, BATTLE_ROUTE_46_TRAINER_1_Text_0, BATTLE_ROUTE_46_TRAINER_1_Text_1
	namebox BATTLE_ROUTE_46_TRAINER_1_Text_2
	msgbox BATTLE_ROUTE_46_TRAINER_1_Text_1
	hidenamebox
	release
	end


BATTLE_ROUTE_46_TRAINER_2::
	trainerbattle_single TRAINER_ROUTE_46_TRAINER_2, BATTLE_ROUTE_46_TRAINER_2_Text_0, BATTLE_ROUTE_46_TRAINER_2_Text_1
	namebox BATTLE_ROUTE_46_TRAINER_2_Text_2
	msgbox BATTLE_ROUTE_46_TRAINER_2_Text_1
	hidenamebox
	release
	end


ROUTE46_STUDENT::
	faceplayer
	namebox ROUTE46_STUDENT_Text_0
	msgbox ROUTE46_STUDENT_Text_1
	closemessage
	hidenamebox
	release
	end


ROUTE46_ARCHAEOLOGIST_1::
	faceplayer
	namebox BATTLE_ROUTE_46_TRAINER_1_Text_2
	msgbox ROUTE46_ARCHAEOLOGIST_1_Text_0
	closemessage
	hidenamebox
	release
	end


ROUTE46_ARCHAEOLOGIST_2::
	faceplayer
	namebox BATTLE_ROUTE_46_TRAINER_1_Text_2
	msgbox ROUTE46_ARCHAEOLOGIST_2_Text_0
	closemessage
	hidenamebox
	release
	end


ROUTE46_ARCHAEOLOGIST_3::
	faceplayer
	namebox BATTLE_ROUTE_46_TRAINER_1_Text_2
	msgbox ROUTE46_ARCHAEOLOGIST_3_Text_0
	closemessage
	hidenamebox
	release
	end


ROUTE46_ARCHAEOLOGIST_4::
	faceplayer
	namebox BATTLE_ROUTE_46_TRAINER_1_Text_2
	msgbox ROUTE46_ARCHAEOLOGIST_4_Text_0
	closemessage
	hidenamebox
	release
	end


ROUTE46_PANNING_GUIDE::
	faceplayer
	namebox ROUTE46_PANNING_GUIDE_Text_0
	msgbox ROUTE46_PANNING_GUIDE_Text_1
	closemessage
	hidenamebox
	release
	end


DIGSITE_SIGN::
	lock
	faceplayer
	msgbox DIGSITE_SIGN_Text_0
	release
	end


ITEM_ROUTE46_1::
	finditem ITEM_BREAD
	end


ITEM_ROUTE46_2::
	finditem ITEM_BREAD
	end


ITEM_ROUTE46_3::
	finditem ITEM_BREAD
	end


ITEM_ROUTE46_4::
	finditem ITEM_BREAD
	end


ITEM_DIGSITE_EARTH_TALISMAN::
	finditem ITEM_TALISMAN_EARTH
	end


ITEM_ALKHARID_FIRE_TALISMAN::
	finditem ITEM_TALISMAN_FIRE
	end


ITEM_DWARVENMINES_BODY_TALISMAN::
	finditem ITEM_TALISMAN_BODY
	end


BATTLE_ROUTE_46_TRAINER_1_Text_0:
	.string "You won't believe what happened!\p"
	.string "Whilst excavating nearby, I found the\n"
	.string "most magical pot...$"

BATTLE_ROUTE_46_TRAINER_1_Text_1:
	.string "Aw, you made me drop it!$"

BATTLE_ROUTE_46_TRAINER_1_Text_2:
	.string "Archaeologist$"

BATTLE_ROUTE_46_TRAINER_2_Text_0:
	.string "I'm waiting until they open up the\n"
	.string "digsite so I can be the first one\l"
	.string "inside!\p"
	.string "I won't let you beat me to it!$"

BATTLE_ROUTE_46_TRAINER_2_Text_1:
	.string "Okay, fine. I'll go explore the cave to\n"
	.string "the east instead!$"

BATTLE_ROUTE_46_TRAINER_2_Text_2:
	.string "Le Me$"

ROUTE46_STUDENT_Text_0:
	.string "Student$"

ROUTE46_STUDENT_Text_1:
	.string "The study of Earth Sciences is: the\n"
	.string "study of the earth, its contents and\l"
	.string "history...\p"
	.string "Sorry, I didn't see you there.\p"
	.string "I'm too busy studying for my Earth\n"
	.string "Sciences exam to talk more right now.$"

ROUTE46_ARCHAEOLOGIST_1_Text_0:
	.string "I'm not really supposed to say\n"
	.string "anything, but...\p"
	.string "We think we have discovered the ruins\n"
	.string "of an ancient civilisation!\p"
	.string "I heard that the Museum Curator is\n"
	.string "coming down personally to inspect them!$"

ROUTE46_ARCHAEOLOGIST_2_Text_0:
	.string "Stay away from the ruins to the north.\p"
	.string "I'm going to explore them to find\n"
	.string "anything important so I can become\l"
	.string "famous.$"

ROUTE46_ARCHAEOLOGIST_3_Text_0:
	.string "I grew up thinking archaeology was fun,\n"
	.string "but there are a distinct lack of rolling\l"
	.string "boulders or, well, any kind of action\l"
	.string "really...$"

ROUTE46_ARCHAEOLOGIST_4_Text_0:
	.string "I might be skilled at excavating ruins,\n"
	.string "but I'm hopeless with any other kind of\l"
	.string "skills.\p"
	.string "I can't even light this fire!$"

ROUTE46_PANNING_GUIDE_Text_0:
	.string "Panning Guide$"

ROUTE46_PANNING_GUIDE_Text_1:
	.string "If you find any gold while panning, make\n"
	.string "sure you take it to the archaeological\l"
	.string "expert up in the museum storage\l"
	.string "facility.$"

DIGSITE_SIGN_Text_0:
	.string "Anyone wishing to do any work on the\n"
	.string "digsite must first prove they have\l"
	.string "passed all 3 Earth Science exams.$"
