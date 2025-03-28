Edgeville_General_Store_MapScripts::
	.byte 0


GeneralStore_EDGEVILLE::
	lock
	faceplayer
	namebox GeneralStore_EDGEVILLE_Text_0
	msgbox GeneralStore_EDGEVILLE_Text_1
	waitmessage
	call GeneralStoreShopScript
	msgbox GeneralStore_EDGEVILLE_Text_2
	release
	return


GeneralStore_EDGEVILLE_CLERK::
	lock
	faceplayer
	namebox GeneralStore_EDGEVILLE_Text_0
	msgbox GeneralStore_EDGEVILLE_CLERK_Text_0
	waitmessage
	call GeneralStoreShopScript
	msgbox GeneralStore_EDGEVILLE_Text_2
	release
	return


GeneralStore_EDGEVILLE_Text_0:
	.string "Clerk$"

GeneralStore_EDGEVILLE_Text_1:
	.string "Welcome to Edgeville General Store.\p"
	.string "How may I help you?$"

GeneralStore_EDGEVILLE_Text_2:
	.string "Thank you, come again!$"

GeneralStore_EDGEVILLE_CLERK_Text_0:
	.string "WE DON'T HAVE ANY PK SUPPLIES!\p"
	.string "Oh, sorry, we're not used to seeing\n"
	.string "genuine customers!\p"
	.string "Welcome to Edgeville General Store.\p"
	.string "How may I help you?$"
