Lumbridge_General_Store_MapScripts::
	.byte 0


GeneralStoreShopScript::
	switch VAR_GAMEMODE_LEVEL_SCALING
	case 0, GeneralStoreShopScript_2
	case 1, GeneralStoreShopScript_2
	case 2, GeneralStoreShopScript_3
	case 3, GeneralStoreShopScript_4
	case 4, GeneralStoreShopScript_4
	case 5, GeneralStoreShopScript_5
	case 6, GeneralStoreShopScript_5
	case 7, GeneralStoreShopScript_6
	case 8, GeneralStoreShopScript_6
	case 9, GeneralStoreShopScript_6
	case 10, GeneralStoreShopScript_7
	return

GeneralStoreShopScript_2:
	pokemart STORE_GeneralStore_0
	return

GeneralStoreShopScript_3:
	pokemart STORE_GeneralStore_1
	return

GeneralStoreShopScript_4:
	pokemart STORE_GeneralStore_2
	return

GeneralStoreShopScript_5:
	pokemart STORE_GeneralStore_3
	return

GeneralStoreShopScript_6:
	pokemart STORE_GeneralStore_4
	return

GeneralStoreShopScript_7:
	pokemart STORE_GeneralStore_4
	return


GeneralStore_LUMBRIDGE::
	lock
	faceplayer
	namebox GeneralStore_LUMBRIDGE_Text_0
	msgbox GeneralStore_LUMBRIDGE_Text_1
	waitmessage
	call GeneralStoreShopScript
	msgbox GeneralStore_LUMBRIDGE_Text_2
	release
	return


GeneralStore_DRAYNOR::
	lock
	faceplayer
	namebox GeneralStore_LUMBRIDGE_Text_0
	msgbox GeneralStore_DRAYNOR_Text_0
	waitmessage
	call GeneralStoreShopScript
	msgbox GeneralStore_LUMBRIDGE_Text_2
	release
	return


GeneralStore_FALADOR::
	lock
	faceplayer
	namebox GeneralStore_LUMBRIDGE_Text_0
	msgbox GeneralStore_FALADOR_Text_0
	waitmessage
	call GeneralStoreShopScript
	msgbox GeneralStore_LUMBRIDGE_Text_2
	release
	return


GeneralStore_VARROCK::
	lock
	faceplayer
	namebox GeneralStore_LUMBRIDGE_Text_0
	msgbox GeneralStore_VARROCK_Text_0
	waitmessage
	call GeneralStoreShopScript
	msgbox GeneralStore_LUMBRIDGE_Text_2
	release
	return


GeneralStore_PORTSARIM::
	lock
	faceplayer
	namebox GeneralStore_LUMBRIDGE_Text_0
	msgbox GeneralStore_PORTSARIM_Text_0
	waitmessage
	call GeneralStoreShopScript
	msgbox GeneralStore_LUMBRIDGE_Text_2
	release
	return


GeneralStore_RIMMINGTON::
	lock
	faceplayer
	namebox GeneralStore_LUMBRIDGE_Text_0
	msgbox GeneralStore_RIMMINGTON_Text_0
	waitmessage
	call GeneralStoreShopScript
	msgbox GeneralStore_LUMBRIDGE_Text_2
	release
	return


GeneralStore_ALKHARID::
	lock
	faceplayer
	namebox GeneralStore_LUMBRIDGE_Text_0
	msgbox GeneralStore_ALKHARID_Text_0
	waitmessage
	call GeneralStoreShopScript
	msgbox GeneralStore_LUMBRIDGE_Text_2
	release
	return


GeneralStore_MUSAPOINT::
	lock
	faceplayer
	namebox GeneralStore_LUMBRIDGE_Text_0
	msgbox GeneralStore_MUSAPOINT_Text_0
	waitmessage
	call GeneralStoreShopScript
	msgbox GeneralStore_LUMBRIDGE_Text_2
	release
	return


GeneralStore_MUSAPOINT_Assistant::
	lock
	faceplayer
	namebox GeneralStore_MUSAPOINT_Assistant_Text_0
	msgbox GeneralStore_MUSAPOINT_Assistant_Text_1
	waitmessage
	pokemart STORE_cocktails
	msgbox GeneralStore_LUMBRIDGE_Text_2
	release
	return


GeneralStore_TZHAAR::
	lock
	faceplayer
	namebox GeneralStore_TZHAAR_Text_0
	msgbox GeneralStore_TZHAAR_Text_1
	waitmessage
	call GeneralStoreShopScript
	msgbox GeneralStore_TZHAAR_Text_2
	release
	return


SHOP_RUNESTORE_VARROCK::
	lock
	faceplayer
	namebox SHOP_RUNESTORE_VARROCK_Text_0
	msgbox SHOP_RUNESTORE_VARROCK_Text_1
	waitmessage
	hidenamebox
	pokemart STORE_RuneStore_1
	msgbox GeneralStore_LUMBRIDGE_Text_2
	release
	end


SHOP_PRAYER_FALADOR::
	lock
	faceplayer
	namebox SHOP_PRAYER_FALADOR_Text_0
	msgbox SHOP_PRAYER_FALADOR_Text_1
	waitmessage
	hidenamebox
	pokemart STORE_Prayer
	msgbox GeneralStore_LUMBRIDGE_Text_2
	release
	end


SHOP_TM_VARROCK_MUSEUM::
	lock
	faceplayer
	namebox SHOP_TM_VARROCK_MUSEUM_Text_0
	msgbox SHOP_TM_VARROCK_MUSEUM_Text_1
	waitmessage
	hidenamebox
	pokemart STORE_TM_2
	msgbox SHOP_TM_VARROCK_MUSEUM_Text_2
	release
	end


SHOP_TM_SEERS_WIZARD::
	lock
	faceplayer
	namebox SHOP_TM_SEERS_WIZARD_Text_0
	msgbox SHOP_TM_SEERS_WIZARD_Text_1
	waitmessage
	hidenamebox
	pokemart STORE_TM_1
	msgbox SHOP_TM_SEERS_WIZARD_Text_2
	release
	end


SHOP_LOWE::
	lock
	faceplayer
	namebox SHOP_LOWE_Text_0
	msgbox SHOP_LOWE_Text_1
	waitmessage
	hidenamebox
	pokemart STORE_ArcheryStore
	msgbox SHOP_LOWE_Text_2
	release
	end


SHOP_SPECIAL_POUCHES::
	lock
	faceplayer
	namebox SHOP_SPECIAL_POUCHES_Text_0
	msgbox SHOP_SPECIAL_POUCHES_Text_1
	waitmessage
	hidenamebox
	pokemart STORE_SpecialPouches
	msgbox GeneralStore_LUMBRIDGE_Text_2
	release
	end



    .align 2
STORE_ArcheryStore:
    .2byte ITEM_BONECROSSBOW
    .2byte ITEM_KARILCROSSBOW
    .2byte ITEM_WATERFALL_TOOL
    .2byte ITEM_NONE
    release
    end


    .align 2
STORE_RuneStore_1:
    .2byte ITEM_AIR_RUNE
    .2byte ITEM_WATER_RUNE
    .2byte ITEM_EARTH_RUNE
	.2byte ITEM_FIRE_RUNE
    .2byte ITEM_NONE
    release
    end


    .align 2
STORE_RuneStore_2:
    .2byte ITEM_MIND_RUNE
    .2byte ITEM_BODY_RUNE
    .2byte ITEM_COSMIC_RUNE
	.2byte ITEM_CHAOS_RUNE
    .2byte ITEM_NATURE_RUNE
    .2byte ITEM_NONE
    release
    end


    .align 2
STORE_RuneStore_3:
    .2byte ITEM_LAW_RUNE
    .2byte ITEM_ASTRAL_RUNE
    .2byte ITEM_DEATH_RUNE
	.2byte ITEM_BLOOD_RUNE
    .2byte ITEM_SOUL_RUNE
    .2byte ITEM_NONE
    release
    end


    .align 2
STORE_RuneStore_4:
    .2byte ITEM_DUST_RUNE
    .2byte ITEM_MUD_RUNE
    .2byte ITEM_MIST_RUNE
	.2byte ITEM_LAVA_RUNE
    .2byte ITEM_LIFE_RUNE
    .2byte ITEM_NONE
    release
    end


    .align 2
STORE_SpecialPouches:
    .2byte ITEM_POUCH
    .2byte ITEM_POUCH_IRON
    .2byte ITEM_POUCH_MITHRIL
	.2byte ITEM_POUCH_ADAMANT
    .2byte ITEM_POUCH_AUGMENTED
    .2byte ITEM_POUCH_MYSTIC
    .2byte ITEM_POUCH_SPLITBARK
    .2byte ITEM_POUCH_GRANITE
    .2byte ITEM_POUCH_ANCIENT
    .2byte ITEM_POUCH_ELEMENTAL
    .2byte ITEM_NONE
    release
    end


    .align 2
STORE_SandwichLady:
    .2byte ITEM_CHOCOLATE_BAR_SANDWICH
    .2byte ITEM_NONE
    release
    end


    .align 2
STORE_TM_1:
    .2byte ITEM_TM01_SUNNY_DAY
    .2byte ITEM_TM02_RAIN_DANCE
    .2byte ITEM_TM03_HAIL
	.2byte ITEM_TM04_SANDSTORM
    .2byte ITEM_NONE
    release
    end


    .align 2
STORE_TM_2:
    .2byte ITEM_TM25_GUILLOTINE
    .2byte ITEM_TM26_KINGS_SHIELD
    .2byte ITEM_TM27_SACRED_SWORD
	.2byte ITEM_TM28_SWORDS_DANCE
    .2byte ITEM_TM29_SECRET_SWORD
    .2byte ITEM_NONE
    release
    end


    .align 2
STORE_TM_3:
    .2byte ITEM_TM10_ELECTRIC_TERRAIN
    .2byte ITEM_TM11_PSYCHIC_TERRAIN
    .2byte ITEM_TM12_MISTY_TERRAIN
	.2byte ITEM_TM09_GRASSY_TERRAIN
    .2byte ITEM_NONE
    release
    end


    .align 2
STORE_Lamps:
    .2byte ITEM_LAMP_HP
    .2byte ITEM_LAMP_ATT
    .2byte ITEM_LAMP_DEF
	.2byte ITEM_LAMP_SPATT
    .2byte ITEM_LAMP_SPDEF
    .2byte ITEM_LAMP_SPEED
    .2byte ITEM_NONE
    release
    end


    .align 2
STORE_Prayer:
    .2byte ITEM_PRAYER_POTION
    .2byte ITEM_SUPER_PRAYER_POTION
    .2byte ITEM_NONE
    release
    end


    .align 2
STORE_Helmet:
    .2byte ITEM_BRONZEHELMET
    .2byte ITEM_IRONMAN_HELMET
    .2byte ITEM_ARMA_HELM
    .2byte ITEM_NONE
    release
    end


    .align 2
STORE_FarmingSupplies:
    .2byte ITEM_FARMING_CABBAGE
    .2byte ITEM_APPLE
    .2byte ITEM_BANANA
	.2byte ITEM_CADAVABERRY
    .2byte ITEM_COCONUT
    .2byte ITEM_CORN
    .2byte ITEM_GARLIC
    .2byte ITEM_GRAPES
    .2byte ITEM_JANGERBERRY
	.2byte ITEM_LEMON
    .2byte ITEM_ONION
    .2byte ITEM_ORANGE
    .2byte ITEM_PINEAPPLE
    .2byte ITEM_POISONIVYBERRY
    .2byte ITEM_POTATO
	.2byte ITEM_REDBERRY
    .2byte ITEM_STRAWBERRY
    .2byte ITEM_TOMATO
    .2byte ITEM_TURNIP
    .2byte ITEM_WATERMELON
    .2byte ITEM_WHITEBERRY
    .2byte ITEM_NONE
    release
    end


    .align 2
STORE_GeneralStore_0:
    .2byte ITEM_POUCH_BRONZE
    .2byte ITEM_BREAD
	.2byte ITEM_WIZARDS_BLIZZARD
    .2byte ITEM_CHOCOLATE_SUNDAY
    .2byte ITEM_DRUNK_DRAGON
    .2byte ITEM_FRUIT_BLAST
    .2byte ITEM_PINEAPPLE_PUNCH
    .2byte ITEM_REPEL_TEA_1
	.2byte ITEM_EMPTY_BUCKET
    .2byte ITEM_NONE
    release
    end


    .align 2
STORE_GeneralStore_1:
    .2byte ITEM_POUCH_BRONZE
    .2byte ITEM_POUCH_STEEL
    .2byte ITEM_BREAD
    .2byte ITEM_CAKE
	.2byte ITEM_WIZARDS_BLIZZARD
    .2byte ITEM_CHOCOLATE_SUNDAY
    .2byte ITEM_DRUNK_DRAGON
    .2byte ITEM_FRUIT_BLAST
    .2byte ITEM_PINEAPPLE_PUNCH
    .2byte ITEM_REPEL_TEA_1
	.2byte ITEM_EMPTY_BUCKET
    .2byte ITEM_NONE
    release
    end


    .align 2
STORE_GeneralStore_2:
    .2byte ITEM_POUCH_BRONZE
    .2byte ITEM_POUCH_STEEL
    .2byte ITEM_BREAD
    .2byte ITEM_CAKE
	.2byte ITEM_WIZARDS_BLIZZARD
    .2byte ITEM_CHOCOLATE_SUNDAY
    .2byte ITEM_DRUNK_DRAGON
    .2byte ITEM_FRUIT_BLAST
    .2byte ITEM_PINEAPPLE_PUNCH
    .2byte ITEM_REPEL_TEA_1
    .2byte ITEM_REPEL_TEA_2
	.2byte ITEM_EMPTY_BUCKET
    .2byte ITEM_NONE
    release
    end


    .align 2
STORE_GeneralStore_3:
    .2byte ITEM_POUCH_BRONZE
    .2byte ITEM_POUCH_STEEL
    .2byte ITEM_POUCH_RUNE
    .2byte ITEM_BREAD
    .2byte ITEM_CAKE
	.2byte ITEM_WIZARDS_BLIZZARD
    .2byte ITEM_CHOCOLATE_SUNDAY
    .2byte ITEM_DRUNK_DRAGON
    .2byte ITEM_FRUIT_BLAST
    .2byte ITEM_PINEAPPLE_PUNCH
    .2byte ITEM_BLUEBERRY_SPECIAL
    .2byte ITEM_REPEL_TEA_1
    .2byte ITEM_REPEL_TEA_2
    .2byte ITEM_REPEL_TEA_3
    .2byte ITEM_CABBAGE
	.2byte ITEM_EMPTY_BUCKET
    .2byte ITEM_NONE
    release
    end


    .align 2
STORE_GeneralStore_4:
    .2byte ITEM_POUCH_BRONZE
    .2byte ITEM_POUCH_STEEL
    .2byte ITEM_POUCH_RUNE
    .2byte ITEM_BREAD
    .2byte ITEM_CAKE
    .2byte ITEM_CHOCOLATE_CAKE
	.2byte ITEM_WIZARDS_BLIZZARD
    .2byte ITEM_CHOCOLATE_SUNDAY
    .2byte ITEM_DRUNK_DRAGON
    .2byte ITEM_FRUIT_BLAST
    .2byte ITEM_PINEAPPLE_PUNCH
    .2byte ITEM_BLUEBERRY_SPECIAL
    .2byte ITEM_REPEL_TEA_1
    .2byte ITEM_REPEL_TEA_2
    .2byte ITEM_REPEL_TEA_3
    .2byte ITEM_CABBAGE
	.2byte ITEM_EMPTY_BUCKET
    .2byte ITEM_NONE
    release
    end


    .align 2
STORE_cocktails:
	.2byte ITEM_WIZARDS_BLIZZARD
    .2byte ITEM_CHOCOLATE_SUNDAY
    .2byte ITEM_DRUNK_DRAGON
    .2byte ITEM_FRUIT_BLAST
    .2byte ITEM_PINEAPPLE_PUNCH
    .2byte ITEM_BLUEBERRY_SPECIAL
    .2byte ITEM_NONE
    release
    end

GeneralStore_LUMBRIDGE_Text_0:
	.string "Clerk$"

GeneralStore_LUMBRIDGE_Text_1:
	.string "Welcome to the Lumbridge General Store.\p"
	.string "How may I help you?$"

GeneralStore_LUMBRIDGE_Text_2:
	.string "Thank you, come again!$"

GeneralStore_DRAYNOR_Text_0:
	.string "Welcome to the Drayor Markets.\p"
	.string "How may I help you?$"

GeneralStore_FALADOR_Text_0:
	.string "Welcome to the Falador General Store.\p"
	.string "How may I help you?$"

GeneralStore_VARROCK_Text_0:
	.string "Welcome to the Varrock General Store.\p"
	.string "How may I help you?$"

GeneralStore_PORTSARIM_Text_0:
	.string "Welcome to the Port Sarim General\n"
	.string "Store.\p"
	.string "How may I help you?$"

GeneralStore_RIMMINGTON_Text_0:
	.string "Welcome to the Rimmington General\n"
	.string "Store.\p"
	.string "How may I help you?$"

GeneralStore_ALKHARID_Text_0:
	.string "Welcome to the Al-Kharid General Store.\p"
	.string "How may I help you?$"

GeneralStore_MUSAPOINT_Text_0:
	.string "Welcome to the Musa Point General\n"
	.string "Store.\p"
	.string "How may I help you?$"

GeneralStore_MUSAPOINT_Assistant_Text_0:
	.string "Assistant$"

GeneralStore_MUSAPOINT_Assistant_Text_1:
	.string "Hello and welcome to the Musa Point\n"
	.string "General Store.\p"
	.string "How may I help you?$"

GeneralStore_TZHAAR_Text_0:
	.string "Tzhaar$"

GeneralStore_TZHAAR_Text_1:
	.string "JalYt, this is Tzhaar shop.\p"
	.string "We sell things to assist your Kimit-zil.$"

GeneralStore_TZHAAR_Text_2:
	.string "Come again.$"

SHOP_RUNESTORE_VARROCK_Text_0:
	.string "Aubury$"

SHOP_RUNESTORE_VARROCK_Text_1:
	.string "Welcome to the Rune Shop!\p"
	.string "How may I help you today?$"

SHOP_PRAYER_FALADOR_Text_0:
	.string "Flynn$"

SHOP_PRAYER_FALADOR_Text_1:
	.string "Hello.\n"
	.string "Do you want to buy or sell anything?$"

SHOP_TM_VARROCK_MUSEUM_Text_0:
	.string "Torrcs$"

SHOP_TM_VARROCK_MUSEUM_Text_1:
	.string "Do you like the art of sword fighting?\p"
	.string "If so do I have something for you.$"

SHOP_TM_VARROCK_MUSEUM_Text_2:
	.string "Hope to see you again.$"

SHOP_TM_SEERS_WIZARD_Text_0:
	.string "Phantuwti$"

SHOP_TM_SEERS_WIZARD_Text_1:
	.string "Lovely weather we are having today\n"
	.string "don't you agree?\p"
	.string "It'd be such a shame if something were\n"
	.string "to change that…$"

SHOP_TM_SEERS_WIZARD_Text_2:
	.string "Yes, it would be such a shame if the\n"
	.string "weather suddenly changed.$"

SHOP_LOWE_Text_0:
	.string "Lowe$"

SHOP_LOWE_Text_1:
	.string "Welcome to my Archery shop!\p"
	.string "How may I help you today?$"

SHOP_LOWE_Text_2:
	.string "Thank you, come again.$"

SHOP_SPECIAL_POUCHES_Text_0:
	.string "???$"

SHOP_SPECIAL_POUCHES_Text_1:
	.string "Welcome to my store, I have pouches\n"
	.string "that you cannot buy anywhere else!\p"
	.string "How may I help you today?$"
