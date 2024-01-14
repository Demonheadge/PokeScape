Route1_House_Fred_MapScripts::
	.byte 0

Route1_House_Fred_DeadChickenCheck::
	call_if_set FLAG_CHICKEN1_HIDE, Route1_House_Fred_CheckChicken1
	call_if_unset FLAG_CHICKEN1_HIDE, Route1_House_Fred_DefaultMessage
	end
	
	
Route1_House_Fred_CheckChicken1::
	call_if_set FLAG_CHICKEN2_HIDE, Route1_House_Fred_CheckChicken2
	call_if_unset FLAG_CHICKEN2_HIDE, Route1_House_Fred_DefaultMessage
	end

Route1_House_Fred_CheckChicken2::
	call_if_set FLAG_CHICKEN3_HIDE, Route1_House_Fred_CheckChicken3
	call_if_unset FLAG_CHICKEN3_HIDE, Route1_House_Fred_DefaultMessage
	end

Route1_House_Fred_CheckChicken3::
	call_if_unset FLAG_EVILCHICKEN_DEFEATED, Route1_House_Fred_ShowEvilChicken
	call_if_set FLAG_EVILCHICKEN_DEFEATED, Route1_House_Fred_ChickenReset
	end


Route1_House_Fred_ShowEvilChicken::

	lock
	faceplayer
	msgbox Text_SimpleMsgScript3, MSGBOX_DEFAULT
	
	clearflag FLAG_EVILCHICKEN_HIDE
	release
	end

Route1_House_Fred_ChickenReset::

	lock
	faceplayer
	msgbox Text_SimpleMsgScript2, MSGBOX_DEFAULT
	
	clearflag FLAG_CHICKEN1_HIDE
	clearflag FLAG_CHICKEN2_HIDE
	clearflag FLAG_CHICKEN3_HIDE
	clearflag FLAG_EVILCHICKEN_DEFEATED
	
	release 
	end
	
Route1_House_Fred_DefaultMessage::
	lock 
	faceplayer
	msgbox Text_DefaultMessage, MSGBOX_DEFAULT
	
	release
	end
	

	Text_DefaultMessage:
	.string "You should not mess with my chickens.$"

	Text_SimpleMsgScript2:
	.string "My chickens are back!$"
	
	Text_SimpleMsgScript3:
	.string "Uh oh.. \n"
	.string "Did you hear that?\p"
	.string "BAWK BAWK BAWK!!$"
