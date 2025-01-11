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


CHECK_OUTFIT_BOX::
	checkitem ITEM_OUTFIT_BOX, 1
	compare VAR_RESULT, 0
	goto_if_ne CHECK_OUTFIT_BOX_2
CHECK_OUTFIT_BOX_1:
	return

CHECK_OUTFIT_BOX_2:
	msgbox CHECK_OUTFIT_BOX_Text_0
	goto CHECK_OUTFIT_BOX_1


EventScript_ChangeOutfit::
	msgbox EventScript_ChangeOutfit_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne EventScript_ChangeOutfit_2
	closemessage
	return

EventScript_ChangeOutfit_2:
	special OutfitMenu
	end



    .align 2
STORE_clothes:
	.2byte OUTFIT_USUAL_GREEN
    .2byte OUTFIT_UNUSUAL_RED
    .2byte OUTFIT_HAM
    .2byte OUTFIT_BRONZE_ARMOUR
    .2byte OUTFIT_GUARD
    .2byte OUTFIT_ZANIK
    .2byte OUTFIT_ARIANE
    .2byte OUTFIT_BARBARIAN
    .2byte OUTFIT_FARMER
    .2byte OUTFIT_RSMV
    .2byte OUTFIT_WIZARD
    .2byte OUTFIT_DEMONHEADGE
    .2byte OUTFIT_HYPERSTAN
    .2byte OUTFIT_TWISTED_SMILE
    .2byte OUTFIT_NONE
    release
    end


    .align 2
STORE_CLOTHES_THESSALIA:
    .2byte OUTFIT_FARMER
    .2byte OUTFIT_RSMV
    .2byte OUTFIT_WIZARD
    .2byte OUTFIT_NONE
    release
    end


    .align 2
STORE_CLOTHES_BARBARIAN:
    .2byte OUTFIT_BARBARIAN
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

CHECK_OUTFIT_BOX_Text_0:
	.string "Oh you should see Thessalia in Varrock.$"

EventScript_ChangeOutfit_Text_0:
	.string "Would you like to change your outfit?$"
