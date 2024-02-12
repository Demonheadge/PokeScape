Tutorial_Island_Shop_MapScripts::
	.byte 0


Tutorial_Island_Shop_EventScript_Clerk::
	lock
	faceplayer
	checkitem ITEM_BRONZE_POUCH, 1
	compare VAR_RESULT, 0
	goto_if_eq Tutorial_Island_Shop_EventScript_Clerk_1
	msgbox Tutorial_Island_Shop_EventScript_Clerk_Text_3
	waitmessage
	pokemart Tutorial_Island_Shop_Pokemart
	msgbox Tutorial_Island_Shop_EventScript_Clerk_Text_4
	release
	return

Tutorial_Island_Shop_EventScript_Clerk_1:
	msgbox Tutorial_Island_Shop_EventScript_Clerk_Text_0
	msgbox Tutorial_Island_Shop_EventScript_Clerk_Text_1
	giveitem ITEM_BRONZE_POUCH, 1
	msgbox Tutorial_Island_Shop_EventScript_Clerk_Text_2
	release
	return



	.align 2
	Tutorial_Island_Shop_Pokemart:
	.2byte ITEM_BRONZE_POUCH
	.2byte ITEM_EMPTY_BUCKET
	.2byte ITEM_EMPTY_POT
	.2byte ITEM_NONE
	release
	end

Tutorial_Island_Shop_EventScript_Clerk_Text_0:
	.string "Welcome!\n This is a general store!\p Here you can buy general use items!$"

Tutorial_Island_Shop_EventScript_Clerk_Text_1:
	.string "Since this is your first time take this!$"

Tutorial_Island_Shop_EventScript_Clerk_Text_2:
	.string "Next time it will cost you!\n Good luck on your journey!$"

Tutorial_Island_Shop_EventScript_Clerk_Text_3:
	.string "Can I help you at all?$"

Tutorial_Island_Shop_EventScript_Clerk_Text_4:
	.string "Thanks for shopping!$"
