AlKharid_Bank_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, AlKharid_Bank_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

AlKharid_Bank_MapScripts_MAP_SCRIPT_ON_LOAD:
	call AlKharid_Bank_OnTransition
	return


AlKharid_Bank_OnTransition::
	setrespawn HEAL_LOCATION_AL_KHARID
	return


Outfits::
	giveitem ITEM_OUTFIT_BOX, 1
	unlockoutfit 3
	unlockoutfit 4
	closemessage
	release
	end


SHOP_CLOTHES::
	lock
	faceplayer
	namebox SHOP_CLOTHES_Text_0
	msgbox SHOP_CLOTHES_Text_1
	waitmessage
	pokemartoutfit STORE_clothes
	msgbox SHOP_CLOTHES_Text_2
	release
	end



    .align 2
STORE_clothes:
	.2byte OUTFIT_USUAL_GREEN
    .2byte OUTFIT_UNUSUAL_RED
    .2byte OUTFIT_HAM
    .2byte OUTFIT_BRONZE_ARMOUR
    .2byte OUTFIT_GUARD
    .2byte OUTFIT_NONE
    release
    end

SHOP_CLOTHES_Text_0:
	.string "Tz-ShopKeeps$"

SHOP_CLOTHES_Text_1:
	.string "Welcome to the Clothes shop.\p"
	.string "How may I help you?$"

SHOP_CLOTHES_Text_2:
	.string "TzGtfo.$"
