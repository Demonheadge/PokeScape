	.align 2
gCryTable::
.if P_FAMILY_BULBASAUR == TRUE
	cry Cry_Bulbasaur
	cry Cry_Ivysaur
	cry Cry_Venusaur
.if P_MEGA_EVOLUTIONS == TRUE
	cry Cry_VenusaurMega
.endif @ P_MEGA_EVOLUTIONS
.endif @ P_FAMILY_BULBASAUR
.if P_FAMILY_CHARMANDER == TRUE
	cry Cry_Charmander
	cry Cry_Charmeleon
	cry Cry_Charizard
.if P_MEGA_EVOLUTIONS == TRUE
	cry Cry_CharizardMegaX
	cry Cry_CharizardMegaY
.endif @ P_MEGA_EVOLUTIONS
.endif @ P_FAMILY_CHARMANDER
.if P_FAMILY_SQUIRTLE == TRUE
	cry Cry_Squirtle
	cry Cry_Wartortle
	cry Cry_Blastoise
.if P_MEGA_EVOLUTIONS == TRUE
	cry Cry_BlastoiseMega
.endif @ P_MEGA_EVOLUTIONS
.endif @ P_FAMILY_SQUIRTLE
.if P_FAMILY_CATERPIE == TRUE
	cry Cry_Caterpie
	cry Cry_Metapod
	cry Cry_Butterfree
.endif @ P_FAMILY_CATERPIE
.if P_FAMILY_WEEDLE == TRUE
	cry Cry_Weedle
	cry Cry_Kakuna
	cry Cry_Beedrill
.if P_MEGA_EVOLUTIONS == TRUE
	cry Cry_BeedrillMega
.endif @ P_MEGA_EVOLUTIONS
.endif @ P_FAMILY_WEEDLE
.if P_FAMILY_PIDGEY == TRUE
	cry Cry_Pidgey
	cry Cry_Pidgeotto
	cry Cry_Pidgeot
.if P_MEGA_EVOLUTIONS == TRUE
	cry Cry_PidgeotMega
.endif @ P_MEGA_EVOLUTIONS
.endif @ P_FAMILY_PIDGEY
.if P_FAMILY_RATTATA == TRUE
	cry Cry_Rattata
	cry Cry_Raticate
.endif @ P_FAMILY_RATTATA
.if P_FAMILY_SPEAROW == TRUE
	cry Cry_Spearow
	cry Cry_Fearow
.endif @ P_FAMILY_SPEAROW
.if P_FAMILY_EKANS == TRUE
	cry Cry_Ekans
	cry Cry_Arbok
.endif @ P_FAMILY_EKANS
.if P_FAMILY_PIKACHU == TRUE
.if P_GEN_2_CROSS_EVOS == TRUE
	cry Cry_Pichu
.endif @ P_GEN_2_CROSS_EVOS
	cry Cry_Pikachu
	cry Cry_Raichu
.endif @ P_FAMILY_PIKACHU
.if P_FAMILY_SANDSHREW == TRUE
	cry Cry_Sandshrew
	cry Cry_Sandslash
.endif @ P_FAMILY_SANDSHREW
.if P_FAMILY_NIDORAN == TRUE
	cry Cry_NidoranF
	cry Cry_Nidorina
	cry Cry_Nidoqueen
	cry Cry_NidoranM
	cry Cry_Nidorino
	cry Cry_Nidoking
.endif @ P_FAMILY_NIDORAN
.if P_FAMILY_CLEFAIRY == TRUE
.if P_GEN_2_CROSS_EVOS == TRUE
	cry Cry_Cleffa
.endif @ P_GEN_2_CROSS_EVOS
	cry Cry_Clefairy
	cry Cry_Clefable
.endif @ P_FAMILY_CLEFAIRY
.if P_FAMILY_VULPIX == TRUE
	cry Cry_Vulpix
	cry Cry_Ninetales
.endif @ P_FAMILY_VULPIX
.if P_FAMILY_JIGGLYPUFF == TRUE
.if P_GEN_2_CROSS_EVOS == TRUE
	cry Cry_Igglybuff
.endif @ P_GEN_2_CROSS_EVOS
	cry Cry_Jigglypuff
	cry Cry_Wigglytuff
.endif @ P_FAMILY_JIGGLYPUFF
.if P_FAMILY_ZUBAT == TRUE
	cry Cry_Zubat
	cry Cry_Golbat
.if P_GEN_2_CROSS_EVOS == TRUE
	cry Cry_Crobat
.endif @ P_GEN_2_CROSS_EVOS
.endif @ P_FAMILY_ZUBAT
.if P_FAMILY_ODDISH == TRUE
	cry Cry_Oddish
	cry Cry_Gloom
	cry Cry_Vileplume
.if P_GEN_2_CROSS_EVOS == TRUE
	cry Cry_Bellossom
.endif @ P_GEN_2_CROSS_EVOS
.endif @ P_FAMILY_ODDISH
.if P_FAMILY_PARAS == TRUE
	cry Cry_Paras
	cry Cry_Parasect
.endif @ P_FAMILY_PARAS
.if P_FAMILY_VENONAT == TRUE
	cry Cry_Venonat
	cry Cry_Venomoth
.endif @ P_FAMILY_VENONAT
.if P_FAMILY_DIGLETT == TRUE
	cry Cry_Diglett
	cry Cry_Dugtrio
.endif @ P_FAMILY_DIGLETT
.if P_FAMILY_MEOWTH == TRUE
	cry Cry_Meowth
	cry Cry_Persian
.if P_GALARIAN_FORMS == TRUE
	cry Cry_Perrserker
.endif @ P_GALARIAN_FORMS
.endif @ P_FAMILY_MEOWTH
.if P_FAMILY_PSYDUCK == TRUE
	cry Cry_Psyduck
	cry Cry_Golduck
.endif @ P_FAMILY_PSYDUCK
.if P_FAMILY_MANKEY == TRUE
	cry Cry_Mankey
	cry Cry_Primeape
.if P_GEN_9_CROSS_EVOS == TRUE
	cry Cry_Annihilape
.endif @ P_GEN_9_CROSS_EVOS
.endif @ P_FAMILY_MANKEY
.if P_FAMILY_GROWLITHE == TRUE
	cry Cry_Growlithe
	cry Cry_Arcanine
.endif @ P_FAMILY_GROWLITHE
.if P_FAMILY_POLIWAG == TRUE
	cry Cry_Poliwag
	cry Cry_Poliwhirl
	cry Cry_Poliwrath
.if P_GEN_2_CROSS_EVOS == TRUE
	cry Cry_Politoed
.endif @ P_GEN_2_CROSS_EVOS
.endif @ P_FAMILY_POLIWAG
.if P_FAMILY_ABRA == TRUE
	cry Cry_Abra
	cry Cry_Kadabra
	cry Cry_Alakazam
.if P_MEGA_EVOLUTIONS == TRUE
	cry Cry_AlakazamMega
.endif @ P_MEGA_EVOLUTIONS
.endif @ P_FAMILY_ABRA
.if P_FAMILY_MACHOP == TRUE
	cry Cry_Machop
	cry Cry_Machoke
	cry Cry_Machamp
.endif @ P_FAMILY_MACHOP
.if P_FAMILY_BELLSPROUT == TRUE
	cry Cry_Bellsprout
	cry Cry_Weepinbell
	cry Cry_Victreebel
.endif @ P_FAMILY_BELLSPROUT
.if P_FAMILY_TENTACOOL == TRUE
	cry Cry_Tentacool
	cry Cry_Tentacruel
.endif @ P_FAMILY_TENTACOOL
.if P_FAMILY_GEODUDE == TRUE
	cry Cry_Geodude
	cry Cry_Graveler
	cry Cry_Golem
.endif @ P_FAMILY_GEODUDE
.if P_FAMILY_PONYTA == TRUE
	cry Cry_Ponyta
	cry Cry_Rapidash
.endif @ P_FAMILY_PONYTA
.if P_FAMILY_SLOWPOKE == TRUE
	cry Cry_Slowpoke
	cry Cry_Slowbro
.if P_GEN_2_CROSS_EVOS == TRUE
	cry Cry_Slowking
.endif @ P_GEN_2_CROSS_EVOS
.if P_MEGA_EVOLUTIONS == TRUE
	cry Cry_SlowbroMega
.endif @ P_MEGA_EVOLUTIONS
.if P_GALARIAN_FORMS == TRUE
	cry Cry_SlowpokeGalarian
.endif @ P_GALARIAN_FORMS
.endif @ P_FAMILY_SLOWPOKE
.if P_FAMILY_MAGNEMITE == TRUE
	cry Cry_Magnemite
	cry Cry_Magneton
.if P_GEN_4_CROSS_EVOS == TRUE
	cry Cry_Magnezone
.endif @ P_GEN_4_CROSS_EVOS
.endif @ P_FAMILY_MAGNEMITE
.if P_FAMILY_FARFETCHD == TRUE
	cry Cry_Farfetchd
.if P_GALARIAN_FORMS == TRUE
	cry Cry_Sirfetchd
.endif @ P_GALARIAN_FORMS
.endif @ P_FAMILY_FARFETCHD
.if P_FAMILY_DODUO == TRUE
	cry Cry_Doduo
	cry Cry_Dodrio
.endif @ P_FAMILY_DODUO
.if P_FAMILY_SEEL == TRUE
	cry Cry_Seel
	cry Cry_Dewgong
.endif @ P_FAMILY_SEEL
.if P_FAMILY_GRIMER == TRUE
	cry Cry_Grimer
	cry Cry_Muk
.endif @ P_FAMILY_GRIMER
.if P_FAMILY_SHELLDER == TRUE
	cry Cry_Shellder
	cry Cry_Cloyster
.endif @ P_FAMILY_SHELLDER
.if P_FAMILY_GASTLY == TRUE
	cry Cry_Gastly
	cry Cry_Haunter
	cry Cry_Gengar
.if P_MEGA_EVOLUTIONS == TRUE
	cry Cry_GengarMega
.endif @ P_MEGA_EVOLUTIONS
.endif @ P_FAMILY_GASTLY
.if P_FAMILY_ONIX == TRUE
	cry Cry_Onix
.if P_GEN_2_CROSS_EVOS == TRUE
	cry Cry_Steelix
.if P_MEGA_EVOLUTIONS == TRUE
	cry Cry_SteelixMega
.endif @ P_MEGA_EVOLUTIONS
.endif @ P_GEN_2_CROSS_EVOS
.endif @ P_FAMILY_ONIX
.if P_FAMILY_DROWZEE == TRUE
	cry Cry_Drowzee
	cry Cry_Hypno
.endif @ P_FAMILY_DROWZEE
.if P_FAMILY_KRABBY == TRUE
	cry Cry_Krabby
	cry Cry_Kingler
.endif @ P_FAMILY_KRABBY
.if P_FAMILY_VOLTORB == TRUE
	cry Cry_Voltorb
	cry Cry_Electrode
.endif @ P_FAMILY_VOLTORB
.if P_FAMILY_EXEGGCUTE == TRUE
	cry Cry_Exeggcute
	cry Cry_Exeggutor
.endif @ P_FAMILY_EXEGGCUTE
.if P_FAMILY_CUBONE == TRUE
	cry Cry_Cubone
	cry Cry_Marowak
.endif @ P_FAMILY_CUBONE
.if P_FAMILY_HITMONS == TRUE
.if P_GEN_2_CROSS_EVOS == TRUE
	cry Cry_Tyrogue
.endif @ P_GEN_2_CROSS_EVOS
	cry Cry_Hitmonlee
	cry Cry_Hitmonchan
.if P_GEN_2_CROSS_EVOS == TRUE
	cry Cry_Hitmontop
.endif @ P_GEN_2_CROSS_EVOS
.endif @ P_FAMILY_HITMONS
.if P_FAMILY_LICKITUNG == TRUE
	cry Cry_Lickitung
.if P_GEN_4_CROSS_EVOS == TRUE
	cry Cry_Lickilicky
.endif @ P_GEN_4_CROSS_EVOS
.endif @ P_FAMILY_LICKITUNG
.if P_FAMILY_KOFFING == TRUE
	cry Cry_Koffing
	cry Cry_Weezing
.endif @ P_FAMILY_KOFFING
.if P_FAMILY_RHYHORN == TRUE
	cry Cry_Rhyhorn
	cry Cry_Rhydon
.if P_GEN_4_CROSS_EVOS == TRUE
	cry Cry_Rhyperior
.endif @ P_GEN_4_CROSS_EVOS
.endif @ P_FAMILY_RHYHORN
.if P_FAMILY_CHANSEY == TRUE
.if P_GEN_4_CROSS_EVOS == TRUE
	cry Cry_Happiny
.endif @ P_GEN_4_CROSS_EVOS
	cry Cry_Chansey
.if P_GEN_2_CROSS_EVOS == TRUE
	cry Cry_Blissey
.endif @ P_GEN_2_CROSS_EVOS
.endif @ P_FAMILY_CHANSEY
.if P_FAMILY_TANGELA == TRUE
	cry Cry_Tangela
.if P_GEN_4_CROSS_EVOS == TRUE
	cry Cry_Tangrowth
.endif @ P_GEN_4_CROSS_EVOS
.endif @ P_FAMILY_TANGELA
.if P_FAMILY_KANGASKHAN == TRUE
	cry Cry_Kangaskhan
.if P_MEGA_EVOLUTIONS == TRUE
	cry Cry_KangaskhanMega
.endif @ P_MEGA_EVOLUTIONS
.endif @ P_FAMILY_KANGASKHAN
.if P_FAMILY_HORSEA == TRUE
	cry Cry_Horsea
	cry Cry_Seadra
.if P_GEN_2_CROSS_EVOS == TRUE
	cry Cry_Kingdra
.endif @ P_GEN_2_CROSS_EVOS
.endif @ P_FAMILY_HORSEA
.if P_FAMILY_GOLDEEN == TRUE
	cry Cry_Goldeen
	cry Cry_Seaking
.endif @ P_FAMILY_GOLDEEN
.if P_FAMILY_STARYU == TRUE
	cry Cry_Staryu
	cry Cry_Starmie
.endif @ P_FAMILY_STARYU
.if P_FAMILY_MR_MIME == TRUE
.if P_GEN_4_CROSS_EVOS == TRUE
	cry Cry_MimeJr
.endif @ P_GEN_4_CROSS_EVOS
	cry Cry_MrMime
.if P_GALARIAN_FORMS == TRUE
	cry Cry_MrRime
.endif @ P_GALARIAN_FORMS
.endif @ P_FAMILY_MR_MIME
.if P_FAMILY_SCYTHER == TRUE
	cry Cry_Scyther
.if P_GEN_2_CROSS_EVOS == TRUE
	cry Cry_Scizor
.if P_MEGA_EVOLUTIONS == TRUE
	cry Cry_ScizorMega
.endif @ P_MEGA_EVOLUTIONS
.endif @ P_GEN_2_CROSS_EVOS
.if P_GEN_8_CROSS_EVOS == TRUE
	cry Cry_Kleavor
.endif @ P_GEN_8_CROSS_EVOS
.endif @ P_FAMILY_SCYTHER
.if P_FAMILY_JYNX == TRUE
.if P_GEN_2_CROSS_EVOS == TRUE
	cry Cry_Smoochum
.endif @ P_GEN_2_CROSS_EVOS
	cry Cry_Jynx
.endif @ P_FAMILY_JYNX
.if P_FAMILY_ELECTABUZZ == TRUE
.if P_GEN_2_CROSS_EVOS == TRUE
	cry Cry_Elekid
.endif @ P_GEN_2_CROSS_EVOS
	cry Cry_Electabuzz
.if P_GEN_4_CROSS_EVOS == TRUE
	cry Cry_Electivire
.endif @ P_GEN_4_CROSS_EVOS
.endif @ P_FAMILY_ELECTABUZZ
.if P_FAMILY_MAGMAR == TRUE
.if P_GEN_2_CROSS_EVOS == TRUE
	cry Cry_Magby
.endif @ P_GEN_2_CROSS_EVOS
	cry Cry_Magmar
.if P_GEN_4_CROSS_EVOS == TRUE
	cry Cry_Magmortar
.endif @ P_GEN_4_CROSS_EVOS
.endif @ P_FAMILY_MAGMAR
.if P_FAMILY_PINSIR == TRUE
	cry Cry_Pinsir
.if P_MEGA_EVOLUTIONS == TRUE
	cry Cry_PinsirMega
.endif @ P_MEGA_EVOLUTIONS
.endif @ P_FAMILY_PINSIR
.if P_FAMILY_TAUROS == TRUE
	cry Cry_Tauros
.endif @ P_FAMILY_TAUROS
.if P_FAMILY_MAGIKARP == TRUE
	cry Cry_Magikarp
	cry Cry_Gyarados
.if P_MEGA_EVOLUTIONS == TRUE
	cry Cry_GyaradosMega
.endif @ P_MEGA_EVOLUTIONS
.endif @ P_FAMILY_MAGIKARP
.if P_FAMILY_LAPRAS == TRUE
	cry Cry_Lapras
.endif @ P_FAMILY_LAPRAS
.if P_FAMILY_DITTO == TRUE
	cry Cry_Ditto
.endif @ P_FAMILY_DITTO
.if P_FAMILY_EEVEE == TRUE
	cry Cry_Eevee
	cry Cry_Vaporeon
	cry Cry_Jolteon
	cry Cry_Flareon
.if P_GEN_2_CROSS_EVOS == TRUE
	cry Cry_Espeon
	cry Cry_Umbreon
.endif @ P_GEN_2_CROSS_EVOS
.if P_GEN_4_CROSS_EVOS == TRUE
	cry Cry_Leafeon
	cry Cry_Glaceon
.endif @ P_GEN_4_CROSS_EVOS
.if P_GEN_6_CROSS_EVOS == TRUE
	cry Cry_Sylveon
.endif @ P_GEN_6_CROSS_EVOS
.endif @ P_FAMILY_EEVEE
.if P_FAMILY_PORYGON == TRUE
	cry Cry_Porygon
.if P_GEN_2_CROSS_EVOS == TRUE
	cry Cry_Porygon2
.if P_GEN_4_CROSS_EVOS == TRUE
	cry Cry_PorygonZ
.endif @ P_GEN_4_CROSS_EVOS
.endif @ P_GEN_2_CROSS_EVOS
.endif @ P_FAMILY_PORYGON
.if P_FAMILY_OMANYTE == TRUE
	cry Cry_Omanyte
	cry Cry_Omastar
.endif @ P_FAMILY_OMANYTE
.if P_FAMILY_KABUTO == TRUE
	cry Cry_Kabuto
	cry Cry_Kabutops
.endif @ P_FAMILY_KABUTO
.if P_FAMILY_AERODACTYL == TRUE
	cry Cry_Aerodactyl
.if P_MEGA_EVOLUTIONS == TRUE
	cry Cry_AerodactylMega
.endif @ P_MEGA_EVOLUTIONS
.endif @ P_FAMILY_AERODACTYL
.if P_FAMILY_SNORLAX == TRUE
.if P_GEN_4_CROSS_EVOS == TRUE
	cry Cry_Munchlax
.endif @ P_GEN_4_CROSS_EVOS
	cry Cry_Snorlax
.endif @ P_FAMILY_SNORLAX
.if P_FAMILY_ARTICUNO == TRUE
	cry Cry_Articuno
.endif @ P_FAMILY_ARTICUNO
.if P_FAMILY_ZAPDOS == TRUE
	cry Cry_Zapdos
.endif @ P_FAMILY_ZAPDOS
.if P_FAMILY_MOLTRES == TRUE
	cry Cry_Moltres
.endif @ P_FAMILY_MOLTRES
.if P_FAMILY_DRATINI == TRUE
	cry Cry_Dratini
	cry Cry_Dragonair
	cry Cry_Dragonite
.endif @ P_FAMILY_DRATINI
.if P_FAMILY_MEWTWO == TRUE
	cry Cry_Mewtwo
.if P_MEGA_EVOLUTIONS == TRUE
	cry Cry_MewtwoMegaX
	cry Cry_MewtwoMegaY
.endif @ P_MEGA_EVOLUTIONS
.endif @ P_FAMILY_MEWTWO
.if P_FAMILY_MEW == TRUE
	cry Cry_Mew
.endif @ P_FAMILY_MEW
.if P_FAMILY_CHIKORITA == TRUE
	cry Cry_Chikorita
	cry Cry_Bayleef
	cry Cry_Meganium
.endif @ P_FAMILY_CHIKORITA
.if P_FAMILY_CYNDAQUIL == TRUE
	cry Cry_Cyndaquil
	cry Cry_Quilava
	cry Cry_Typhlosion
.endif @ P_FAMILY_CYNDAQUIL
.if P_FAMILY_TOTODILE == TRUE
	cry Cry_Totodile
	cry Cry_Croconaw
	cry Cry_Feraligatr
.endif @ P_FAMILY_TOTODILE
.if P_FAMILY_SENTRET == TRUE
	cry Cry_Sentret
	cry Cry_Furret
.endif @ P_FAMILY_SENTRET
.if P_FAMILY_HOOTHOOT == TRUE
	cry Cry_Hoothoot
	cry Cry_Noctowl
.endif @ P_FAMILY_HOOTHOOT
.if P_FAMILY_LEDYBA == TRUE
	cry Cry_Ledyba
	cry Cry_Ledian
.endif @ P_FAMILY_LEDYBA
.if P_FAMILY_SPINARAK == TRUE
	cry Cry_Spinarak
	cry Cry_Ariados
.endif @ P_FAMILY_SPINARAK
.if P_FAMILY_CHINCHOU == TRUE
	cry Cry_Chinchou
	cry Cry_Lanturn
.endif @ P_FAMILY_CHINCHOU
.if P_FAMILY_TOGEPI == TRUE
	cry Cry_Togepi
	cry Cry_Togetic
.if P_GEN_4_CROSS_EVOS == TRUE
	cry Cry_Togekiss
.endif @ P_GEN_4_CROSS_EVOS
.endif @ P_FAMILY_TOGEPI
.if P_FAMILY_NATU == TRUE
	cry Cry_Natu
	cry Cry_Xatu
.endif @ P_FAMILY_NATU
.if P_FAMILY_MAREEP == TRUE
	cry Cry_Mareep
	cry Cry_Flaaffy
	cry Cry_Ampharos
.if P_MEGA_EVOLUTIONS == TRUE
	cry Cry_AmpharosMega
.endif @ P_MEGA_EVOLUTIONS
.endif @ P_FAMILY_MAREEP
.if P_FAMILY_MARILL == TRUE
.if P_GEN_3_CROSS_EVOS == TRUE
	cry Cry_Azurill
.endif @ P_GEN_3_CROSS_EVOS
	cry Cry_Marill
	cry Cry_Azumarill
.endif @ P_FAMILY_MARILL
.if P_FAMILY_SUDOWOODO == TRUE
	cry Cry_Bonsly
	cry Cry_Sudowoodo
.endif @ P_FAMILY_SUDOWOODO
.if P_FAMILY_HOPPIP == TRUE
	cry Cry_Hoppip
	cry Cry_Skiploom
	cry Cry_Jumpluff
.endif @ P_FAMILY_HOPPIP
.if P_FAMILY_AIPOM == TRUE
	cry Cry_Aipom
	cry Cry_Ambipom
.endif @ P_FAMILY_AIPOM
.if P_FAMILY_SUNKERN == TRUE
	cry Cry_Sunkern
	cry Cry_Sunflora
.endif @ P_FAMILY_SUNKERN
.if P_FAMILY_YANMA == TRUE
	cry Cry_Yanma
.if P_GEN_4_CROSS_EVOS == TRUE
	cry Cry_Yanmega
.endif @ P_GEN_4_CROSS_EVOS
.endif @ P_FAMILY_YANMA
.if P_FAMILY_WOOPER == TRUE
	cry Cry_Wooper
	cry Cry_Quagsire
.if P_PALDEAN_FORMS == TRUE
	cry Cry_Clodsire
.endif @ P_PALDEAN_FORMS
.endif @ P_FAMILY_WOOPER
.if P_FAMILY_MURKROW == TRUE
	cry Cry_Murkrow
	cry Cry_Honchkrow
.endif @ P_FAMILY_MURKROW
.if P_FAMILY_MISDREAVUS == TRUE
	cry Cry_Misdreavus
	cry Cry_Mismagius
.endif @ P_FAMILY_MISDREAVUS
.if P_FAMILY_UNOWN == TRUE
	cry Cry_Unown
.endif @ P_FAMILY_UNOWN
.if P_FAMILY_WOBBUFFET == TRUE
.if P_GEN_3_CROSS_EVOS == TRUE
	cry Cry_Wynaut
.endif @ P_GEN_3_CROSS_EVOS
	cry Cry_Wobbuffet
.endif @ P_FAMILY_WOBBUFFET
.if P_FAMILY_GIRAFARIG == TRUE
	cry Cry_Girafarig
.if P_GEN_9_CROSS_EVOS == TRUE
	cry Cry_Farigiraf
.endif @ P_GEN_9_CROSS_EVOS
.endif @ P_FAMILY_GIRAFARIG
.if P_FAMILY_PINECO == TRUE
	cry Cry_Pineco
	cry Cry_Forretress
.endif @ P_FAMILY_PINECO
.if P_FAMILY_DUNSPARCE == TRUE
	cry Cry_Dunsparce
.if P_GEN_9_CROSS_EVOS == TRUE
	cry Cry_Dudunsparce
.endif @ P_GEN_9_CROSS_EVOS
.endif @ P_FAMILY_DUNSPARCE
.if P_FAMILY_GLIGAR == TRUE
	cry Cry_Gligar
.if P_GEN_4_CROSS_EVOS == TRUE
	cry Cry_Gliscor
.endif @ P_GEN_4_CROSS_EVOS
.endif @ P_FAMILY_GLIGAR
.if P_FAMILY_SNUBBULL == TRUE
	cry Cry_Snubbull
	cry Cry_Granbull
.endif @ P_FAMILY_SNUBBULL
.if P_FAMILY_QWILFISH == TRUE
	cry Cry_Qwilfish
.if P_HISUIAN_FORMS == TRUE
	cry Cry_Overqwil
.endif @ P_HISUIAN_FORMS
.endif @ P_FAMILY_QWILFISH
.if P_FAMILY_SHUCKLE == TRUE
	cry Cry_Shuckle
.endif @ P_FAMILY_SHUCKLE
.if P_FAMILY_HERACROSS == TRUE
	cry Cry_Heracross
.if P_MEGA_EVOLUTIONS == TRUE
	cry Cry_HeracrossMega
.endif @ P_MEGA_EVOLUTIONS
.endif @ P_FAMILY_HERACROSS
.if P_FAMILY_SNEASEL == TRUE
	cry Cry_Sneasel
.if P_GEN_4_CROSS_EVOS == TRUE
	cry Cry_Weavile
.endif @ P_GEN_4_CROSS_EVOS
.if P_HISUIAN_FORMS == TRUE
	cry Cry_Sneasler
.endif @ P_HISUIAN_FORMS
.endif @ P_FAMILY_SNEASEL
.if P_FAMILY_TEDDIURSA == TRUE
	cry Cry_Teddiursa
	cry Cry_Ursaring
.if P_GEN_8_CROSS_EVOS == TRUE
	cry Cry_Ursaluna
.endif @ P_GEN_8_CROSS_EVOS
.endif @ P_FAMILY_TEDDIURSA
.if P_FAMILY_SLUGMA == TRUE
	cry Cry_Slugma
	cry Cry_Magcargo
.endif @ P_FAMILY_SLUGMA
.if P_FAMILY_SWINUB == TRUE
	cry Cry_Swinub
	cry Cry_Piloswine
.if P_GEN_4_CROSS_EVOS == TRUE
	cry Cry_Mamoswine
.endif @ P_GEN_4_CROSS_EVOS
.endif @ P_FAMILY_SWINUB
.if P_FAMILY_CORSOLA == TRUE
	cry Cry_Corsola
.if P_GALARIAN_FORMS == TRUE
	cry Cry_Cursola
.endif @ P_GALARIAN_FORMS
.endif @ P_FAMILY_CORSOLA
.if P_FAMILY_REMORAID == TRUE
	cry Cry_Remoraid
	cry Cry_Octillery
.endif @ P_FAMILY_REMORAID
.if P_FAMILY_DELIBIRD == TRUE
	cry Cry_Delibird
.endif @ P_FAMILY_DELIBIRD
.if P_FAMILY_MANTINE == TRUE
.if P_GEN_4_CROSS_EVOS == TRUE
	cry Cry_Mantyke
.endif @ P_GEN_4_CROSS_EVOS
	cry Cry_Mantine
.endif @ P_FAMILY_MANTINE
.if P_FAMILY_SKARMORY == TRUE
	cry Cry_Skarmory
.endif @ P_FAMILY_SKARMORY
.if P_FAMILY_HOUNDOUR == TRUE
	cry Cry_Houndour
	cry Cry_Houndoom
.if P_MEGA_EVOLUTIONS == TRUE
	cry Cry_HoundoomMega
.endif @ P_MEGA_EVOLUTIONS
.endif @ P_FAMILY_HOUNDOUR
.if P_FAMILY_PHANPY == TRUE
	cry Cry_Phanpy
	cry Cry_Donphan
.endif @ P_FAMILY_PHANPY
.if P_FAMILY_STANTLER == TRUE
	cry Cry_Stantler
.if P_GEN_8_CROSS_EVOS == TRUE
	cry Cry_Wyrdeer
.endif @ P_GEN_8_CROSS_EVOS
.endif @ P_FAMILY_STANTLER
.if P_FAMILY_SMEARGLE == TRUE
	cry Cry_Smeargle
.endif @ P_FAMILY_SMEARGLE
.if P_FAMILY_MILTANK == TRUE
	cry Cry_Miltank
.endif @ P_FAMILY_MILTANK
.if P_FAMILY_RAIKOU == TRUE
	cry Cry_Raikou
.endif @ P_FAMILY_RAIKOU
.if P_FAMILY_ENTEI == TRUE
	cry Cry_Entei
.endif @ P_FAMILY_ENTEI
.if P_FAMILY_SUICUNE == TRUE
	cry Cry_Suicune
.endif @ P_FAMILY_SUICUNE
.if P_FAMILY_LARVITAR == TRUE
	cry Cry_Larvitar
	cry Cry_Pupitar
	cry Cry_Tyranitar
.if P_MEGA_EVOLUTIONS == TRUE
	cry Cry_TyranitarMega
.endif @ P_MEGA_EVOLUTIONS
.endif @ P_FAMILY_LARVITAR
.if P_FAMILY_LUGIA == TRUE
	cry Cry_Lugia
.endif @ P_FAMILY_LUGIA
.if P_FAMILY_HO_OH == TRUE
	cry Cry_HoOh
.endif @ P_FAMILY_HO_OH
.if P_FAMILY_CELEBI == TRUE
	cry Cry_Celebi
.endif @ P_FAMILY_CELEBI
.if P_FAMILY_TREECKO == TRUE
	cry Cry_Treecko
	cry Cry_Grovyle
	cry Cry_Sceptile
.if P_MEGA_EVOLUTIONS == TRUE
	cry Cry_SceptileMega
.endif @ P_MEGA_EVOLUTIONS
.endif @ P_FAMILY_TREECKO
.if P_FAMILY_TORCHIC == TRUE
	cry Cry_Torchic
	cry Cry_Combusken
	cry Cry_Blaziken
.if P_MEGA_EVOLUTIONS == TRUE
	cry Cry_BlazikenMega
.endif @ P_MEGA_EVOLUTIONS
.endif @ P_FAMILY_TORCHIC
.if P_FAMILY_MUDKIP == TRUE
	cry Cry_Mudkip
	cry Cry_Marshtomp
	cry Cry_Swampert
.if P_MEGA_EVOLUTIONS == TRUE
	cry Cry_SwampertMega
.endif @ P_MEGA_EVOLUTIONS
.endif @ P_FAMILY_MUDKIP
.if P_FAMILY_POOCHYENA == TRUE
	cry Cry_Poochyena
	cry Cry_Mightyena
.endif @ P_FAMILY_POOCHYENA
.if P_FAMILY_ZIGZAGOON == TRUE
	cry Cry_Zigzagoon
	cry Cry_Linoone
.if P_GALARIAN_FORMS == TRUE
	cry Cry_Obstagoon
.endif @ P_GALARIAN_FORMS
.endif @ P_FAMILY_ZIGZAGOON
.if P_FAMILY_WURMPLE == TRUE
	cry Cry_Wurmple
	cry Cry_Silcoon
	cry Cry_Beautifly
	cry Cry_Cascoon
	cry Cry_Dustox
.endif @ P_FAMILY_WURMPLE
.if P_FAMILY_LOTAD == TRUE
	cry Cry_Lotad
	cry Cry_Lombre
	cry Cry_Ludicolo
.endif @ P_FAMILY_LOTAD
.if P_FAMILY_SEEDOT == TRUE
	cry Cry_Seedot
	cry Cry_Nuzleaf
	cry Cry_Shiftry
.endif @ P_FAMILY_SEEDOT
.if P_FAMILY_TAILLOW == TRUE
	cry Cry_Taillow
	cry Cry_Swellow
.endif @ P_FAMILY_TAILLOW
.if P_FAMILY_WINGULL == TRUE
	cry Cry_Wingull
	cry Cry_Pelipper
.endif @ P_FAMILY_WINGULL
.if P_FAMILY_RALTS == TRUE
	cry Cry_Ralts
	cry Cry_Kirlia
	cry Cry_Gardevoir
.if P_MEGA_EVOLUTIONS == TRUE
	cry Cry_GardevoirMega
.endif @ P_MEGA_EVOLUTIONS
.if P_GEN_4_CROSS_EVOS == TRUE
	cry Cry_Gallade
.if P_MEGA_EVOLUTIONS == TRUE
	cry Cry_GalladeMega
.endif @ P_MEGA_EVOLUTIONS
.endif @ P_GEN_4_CROSS_EVOS
.endif @ P_FAMILY_RALTS
.if P_FAMILY_SURSKIT == TRUE
	cry Cry_Surskit
	cry Cry_Masquerain
.endif @ P_FAMILY_SURSKIT
.if P_FAMILY_SHROOMISH == TRUE
	cry Cry_Shroomish
	cry Cry_Breloom
.endif @ P_FAMILY_SHROOMISH
.if P_FAMILY_SLAKOTH == TRUE
	cry Cry_Slakoth
	cry Cry_Vigoroth
	cry Cry_Slaking
.endif @ P_FAMILY_SLAKOTH
.if P_FAMILY_NINCADA == TRUE
	cry Cry_Nincada
	cry Cry_Ninjask
	cry Cry_Shedinja
.endif @ P_FAMILY_NINCADA
.if P_FAMILY_WHISMUR == TRUE
	cry Cry_Whismur
	cry Cry_Loudred
	cry Cry_Exploud
.endif @ P_FAMILY_WHISMUR
.if P_FAMILY_MAKUHITA == TRUE
	cry Cry_Makuhita
	cry Cry_Hariyama
.endif @ P_FAMILY_MAKUHITA
.if P_FAMILY_NOSEPASS == TRUE
	cry Cry_Nosepass
.if P_GEN_4_CROSS_EVOS == TRUE
	cry Cry_Probopass
.endif @ P_GEN_4_CROSS_EVOS
.endif @ P_FAMILY_NOSEPASS
.if P_FAMILY_SKITTY == TRUE
	cry Cry_Skitty
	cry Cry_Delcatty
.endif @ P_FAMILY_SKITTY
.if P_FAMILY_SABLEYE == TRUE
	cry Cry_Sableye
.if P_MEGA_EVOLUTIONS == TRUE
	cry Cry_SableyeMega
.endif @ P_MEGA_EVOLUTIONS
.endif @ P_FAMILY_SABLEYE
.if P_FAMILY_MAWILE == TRUE
	cry Cry_Mawile
.if P_MEGA_EVOLUTIONS == TRUE
	cry Cry_MawileMega
.endif @ P_MEGA_EVOLUTIONS
.endif @ P_FAMILY_MAWILE
.if P_FAMILY_ARON == TRUE
	cry Cry_Aron
	cry Cry_Lairon
	cry Cry_Aggron
.if P_MEGA_EVOLUTIONS == TRUE
	cry Cry_AggronMega
.endif @ P_MEGA_EVOLUTIONS
.endif @ P_FAMILY_ARON
.if P_FAMILY_MEDITITE == TRUE
	cry Cry_Meditite
	cry Cry_Medicham
.if P_MEGA_EVOLUTIONS == TRUE
	cry Cry_MedichamMega
.endif @ P_MEGA_EVOLUTIONS
.endif @ P_FAMILY_MEDITITE
.if P_FAMILY_ELECTRIKE == TRUE
	cry Cry_Electrike
	cry Cry_Manectric
.if P_MEGA_EVOLUTIONS == TRUE
	cry Cry_ManectricMega
.endif @ P_MEGA_EVOLUTIONS
.endif @ P_FAMILY_ELECTRIKE
.if P_FAMILY_PLUSLE == TRUE
	cry Cry_Plusle
.endif @ P_FAMILY_PLUSLE
.if P_FAMILY_MINUN == TRUE
	cry Cry_Minun
.endif @ P_FAMILY_MINUN
.if P_FAMILY_VOLBEAT_ILLUMISE == TRUE
	cry Cry_Volbeat
	cry Cry_Illumise
.endif @ P_FAMILY_VOLBEAT_ILLUMISE
.if P_FAMILY_ROSELIA == TRUE
.if P_GEN_4_CROSS_EVOS == TRUE
	cry Cry_Budew
.endif @ P_GEN_4_CROSS_EVOS
	cry Cry_Roselia
.if P_GEN_4_CROSS_EVOS == TRUE
	cry Cry_Roserade
.endif @ P_GEN_4_CROSS_EVOS
.endif @ P_FAMILY_ROSELIA
.if P_FAMILY_GULPIN == TRUE
	cry Cry_Gulpin
	cry Cry_Swalot
.endif @ P_FAMILY_GULPIN
.if P_FAMILY_CARVANHA == TRUE
	cry Cry_Carvanha
	cry Cry_Sharpedo
.if P_MEGA_EVOLUTIONS == TRUE
	cry Cry_SharpedoMega
.endif @ P_MEGA_EVOLUTIONS
.endif @ P_FAMILY_CARVANHA
.if P_FAMILY_WAILMER == TRUE
	cry Cry_Wailmer
	cry Cry_Wailord
.endif @ P_FAMILY_WAILMER
.if P_FAMILY_NUMEL == TRUE
	cry Cry_Numel
	cry Cry_Camerupt
.if P_MEGA_EVOLUTIONS == TRUE
	cry Cry_CameruptMega
.endif @ P_MEGA_EVOLUTIONS
.endif @ P_FAMILY_NUMEL
.if P_FAMILY_TORKOAL == TRUE
	cry Cry_Torkoal
.endif @ P_FAMILY_TORKOAL
.if P_FAMILY_SPOINK == TRUE
	cry Cry_Spoink
	cry Cry_Grumpig
.endif @ P_FAMILY_SPOINK
.if P_FAMILY_SPINDA == TRUE
	cry Cry_Spinda
.endif @ P_FAMILY_SPINDA
.if P_FAMILY_TRAPINCH == TRUE
	cry Cry_Trapinch
	cry Cry_Vibrava
	cry Cry_Flygon
.endif @ P_FAMILY_TRAPINCH
.if P_FAMILY_CACNEA == TRUE
	cry Cry_Cacnea
	cry Cry_Cacturne
.endif @ P_FAMILY_CACNEA
.if P_FAMILY_SWABLU == TRUE
	cry Cry_Swablu
	cry Cry_Altaria
.if P_MEGA_EVOLUTIONS == TRUE
	cry Cry_AltariaMega
.endif @ P_MEGA_EVOLUTIONS
.endif @ P_FAMILY_SWABLU
.if P_FAMILY_ZANGOOSE == TRUE
	cry Cry_Zangoose
.endif @ P_FAMILY_ZANGOOSE
.if P_FAMILY_SEVIPER == TRUE
	cry Cry_Seviper
.endif @ P_FAMILY_SEVIPER
.if P_FAMILY_LUNATONE == TRUE
	cry Cry_Lunatone
.endif @ P_FAMILY_LUNATONE
.if P_FAMILY_SOLROCK == TRUE
	cry Cry_Solrock
.endif @ P_FAMILY_SOLROCK
.if P_FAMILY_BARBOACH == TRUE
	cry Cry_Barboach
	cry Cry_Whiscash
.endif @ P_FAMILY_BARBOACH
.if P_FAMILY_CORPHISH == TRUE
	cry Cry_Corphish
	cry Cry_Crawdaunt
.endif @ P_FAMILY_CORPHISH
.if P_FAMILY_BALTOY == TRUE
	cry Cry_Baltoy
	cry Cry_Claydol
.endif @ P_FAMILY_BALTOY
.if P_FAMILY_LILEEP == TRUE
	cry Cry_Lileep
	cry Cry_Cradily
.endif @ P_FAMILY_LILEEP
.if P_FAMILY_ANORITH == TRUE
	cry Cry_Anorith
	cry Cry_Armaldo
.endif @ P_FAMILY_ANORITH
.if P_FAMILY_FEEBAS == TRUE
	cry Cry_Feebas
	cry Cry_Milotic
.endif @ P_FAMILY_FEEBAS
.if P_FAMILY_CASTFORM == TRUE
	cry Cry_Castform
.endif @ P_FAMILY_CASTFORM
.if P_FAMILY_KECLEON == TRUE
	cry Cry_Kecleon
.endif @ P_FAMILY_KECLEON
.if P_FAMILY_SHUPPET == TRUE
	cry Cry_Shuppet
	cry Cry_Banette
.if P_MEGA_EVOLUTIONS == TRUE
	cry Cry_BanetteMega
.endif @ P_MEGA_EVOLUTIONS
.endif @ P_FAMILY_SHUPPET
.if P_FAMILY_DUSKULL == TRUE
	cry Cry_Duskull
	cry Cry_Dusclops
.if P_GEN_4_CROSS_EVOS == TRUE
	cry Cry_Dusknoir
.endif @ P_GEN_4_CROSS_EVOS
.endif @ P_FAMILY_DUSKULL
.if P_FAMILY_TROPIUS == TRUE
	cry Cry_Tropius
.endif @ P_FAMILY_TROPIUS
.if P_FAMILY_CHIMECHO == TRUE
.if P_GEN_4_CROSS_EVOS == TRUE
	cry Cry_Chingling
.endif @ P_GEN_4_CROSS_EVOS
	cry Cry_Chimecho
.endif @ P_FAMILY_CHIMECHO
.if P_FAMILY_ABSOL == TRUE
	cry Cry_Absol
.if P_MEGA_EVOLUTIONS == TRUE
	cry Cry_AbsolMega
.endif @ P_MEGA_EVOLUTIONS
.endif @ P_FAMILY_ABSOL
.if P_FAMILY_SNORUNT == TRUE
	cry Cry_Snorunt
	cry Cry_Glalie
.if P_MEGA_EVOLUTIONS == TRUE
	cry Cry_GlalieMega
.endif @ P_MEGA_EVOLUTIONS
.if P_GEN_4_CROSS_EVOS == TRUE
	cry Cry_Froslass
.endif @ P_GEN_4_CROSS_EVOS
.endif @ P_FAMILY_SNORUNT
.if P_FAMILY_SPHEAL == TRUE
	cry Cry_Spheal
	cry Cry_Sealeo
	cry Cry_Walrein
.endif @ P_FAMILY_SPHEAL
.if P_FAMILY_CLAMPERL == TRUE
	cry Cry_Clamperl
	cry Cry_Huntail
	cry Cry_Gorebyss
.endif @ P_FAMILY_CLAMPERL
.if P_FAMILY_RELICANTH == TRUE
	cry Cry_Relicanth
.endif @ P_FAMILY_RELICANTH
.if P_FAMILY_LUVDISC == TRUE
	cry Cry_Luvdisc
.endif @ P_FAMILY_LUVDISC
.if P_FAMILY_BAGON == TRUE
	cry Cry_Bagon
	cry Cry_Shelgon
	cry Cry_Salamence
.if P_MEGA_EVOLUTIONS == TRUE
	cry Cry_SalamenceMega
.endif @ P_MEGA_EVOLUTIONS
.endif @ P_FAMILY_BAGON
.if P_FAMILY_BELDUM == TRUE
	cry Cry_Beldum
	cry Cry_Metang
	cry Cry_Metagross
.if P_MEGA_EVOLUTIONS == TRUE
	cry Cry_MetagrossMega
.endif @ P_MEGA_EVOLUTIONS
.endif @ P_FAMILY_BELDUM
.if P_FAMILY_REGIROCK == TRUE
	cry Cry_Regirock
.endif @ P_FAMILY_REGIROCK
.if P_FAMILY_REGICE == TRUE
	cry Cry_Regice
.endif @ P_FAMILY_REGICE
.if P_FAMILY_REGISTEEL == TRUE
	cry Cry_Registeel
.endif @ P_FAMILY_REGISTEEL
.if P_FAMILY_LATIAS == TRUE
	cry Cry_Latias
.if P_MEGA_EVOLUTIONS == TRUE
	cry Cry_LatiasMega
.endif @ P_MEGA_EVOLUTIONS
.endif @ P_FAMILY_LATIAS
.if P_FAMILY_LATIOS == TRUE
	cry Cry_Latios
.if P_MEGA_EVOLUTIONS == TRUE
	cry Cry_LatiosMega
.endif @ P_MEGA_EVOLUTIONS
.endif @ P_FAMILY_LATIOS
.if P_FAMILY_KYOGRE == TRUE
	cry Cry_Kyogre
.if P_PRIMAL_REVERSIONS == TRUE
	cry Cry_KyogrePrimal
.endif @ P_PRIMAL_REVERSIONS
.endif @ P_FAMILY_KYOGRE
.if P_FAMILY_GROUDON == TRUE
	cry Cry_Groudon
.if P_PRIMAL_REVERSIONS == TRUE
	cry Cry_GroudonPrimal
.endif @ P_PRIMAL_REVERSIONS
.endif @ P_FAMILY_GROUDON
.if P_FAMILY_RAYQUAZA == TRUE
	cry Cry_Rayquaza
.if P_MEGA_EVOLUTIONS == TRUE
	cry Cry_RayquazaMega
.endif @ P_MEGA_EVOLUTIONS
.endif @ P_FAMILY_RAYQUAZA
.if P_FAMILY_JIRACHI == TRUE
	cry Cry_Jirachi
.endif @ P_FAMILY_JIRACHI
.if P_FAMILY_DEOXYS == TRUE
	cry Cry_Deoxys
.endif @ P_FAMILY_DEOXYS
.if P_FAMILY_TURTWIG == TRUE
	cry Cry_Turtwig
	cry Cry_Grotle
	cry Cry_Torterra
.endif @ P_FAMILY_TURTWIG
.if P_FAMILY_CHIMCHAR == TRUE
	cry Cry_Chimchar
	cry Cry_Monferno
	cry Cry_Infernape
.endif @ P_FAMILY_CHIMCHAR
.if P_FAMILY_PIPLUP == TRUE
	cry Cry_Piplup
	cry Cry_Prinplup
	cry Cry_Empoleon
.endif @ P_FAMILY_PIPLUP
.if P_FAMILY_STARLY == TRUE
	cry Cry_Starly
	cry Cry_Staravia
	cry Cry_Staraptor
.endif @ P_FAMILY_STARLY
.if P_FAMILY_BIDOOF == TRUE
	cry Cry_Bidoof
	cry Cry_Bibarel
.endif @ P_FAMILY_BIDOOF
.if P_FAMILY_KRICKETOT == TRUE
	cry Cry_Kricketot
	cry Cry_Kricketune
.endif @ P_FAMILY_KRICKETOT
.if P_FAMILY_SHINX == TRUE
	cry Cry_Shinx
	cry Cry_Luxio
	cry Cry_Luxray
.endif @ P_FAMILY_SHINX
.if P_FAMILY_CRANIDOS == TRUE
	cry Cry_Cranidos
	cry Cry_Rampardos
.endif @ P_FAMILY_CRANIDOS
.if P_FAMILY_SHIELDON == TRUE
	cry Cry_Shieldon
	cry Cry_Bastiodon
.endif @ P_FAMILY_SHIELDON
.if P_FAMILY_BURMY == TRUE
	cry Cry_Burmy
	cry Cry_Wormadam
	cry Cry_Mothim
.endif @ P_FAMILY_BURMY
.if P_FAMILY_COMBEE == TRUE
	cry Cry_Combee
	cry Cry_Vespiquen
.endif @ P_FAMILY_COMBEE
.if P_FAMILY_PACHIRISU == TRUE
	cry Cry_Pachirisu
.endif @ P_FAMILY_PACHIRISU
.if P_FAMILY_BUIZEL == TRUE
	cry Cry_Buizel
	cry Cry_Floatzel
.endif @ P_FAMILY_BUIZEL
.if P_FAMILY_CHERUBI == TRUE
	cry Cry_Cherubi
	cry Cry_Cherrim
.endif @ P_FAMILY_CHERUBI
.if P_FAMILY_SHELLOS == TRUE
	cry Cry_Shellos
	cry Cry_Gastrodon
.endif @ P_FAMILY_SHELLOS
.if P_FAMILY_DRIFLOON == TRUE
	cry Cry_Drifloon
	cry Cry_Drifblim
.endif @ P_FAMILY_DRIFLOON
.if P_FAMILY_BUNEARY == TRUE
	cry Cry_Buneary
	cry Cry_Lopunny
.if P_MEGA_EVOLUTIONS == TRUE
	cry Cry_LopunnyMega
.endif @ P_MEGA_EVOLUTIONS
.endif @ P_FAMILY_BUNEARY
.if P_FAMILY_GLAMEOW == TRUE
	cry Cry_Glameow
	cry Cry_Purugly
.endif @ P_FAMILY_GLAMEOW
.if P_FAMILY_STUNKY == TRUE
	cry Cry_Stunky
	cry Cry_Skuntank
.endif @ P_FAMILY_STUNKY
.if P_FAMILY_BRONZOR == TRUE
	cry Cry_Bronzor
	cry Cry_Bronzong
.endif @ P_FAMILY_BRONZOR
.if P_FAMILY_CHATOT == TRUE
	cry Cry_Chatot
.endif @ P_FAMILY_CHATOT
.if P_FAMILY_SPIRITOMB == TRUE
	cry Cry_Spiritomb
.endif @ P_FAMILY_SPIRITOMB
.if P_FAMILY_GIBLE == TRUE
	cry Cry_Gible
	cry Cry_Gabite
	cry Cry_Garchomp
.if P_MEGA_EVOLUTIONS == TRUE
	cry Cry_GarchompMega
.endif @ P_MEGA_EVOLUTIONS
.endif @ P_FAMILY_GIBLE
.if P_FAMILY_RIOLU == TRUE
	cry Cry_Riolu
	cry Cry_Lucario
.if P_MEGA_EVOLUTIONS == TRUE
	cry Cry_LucarioMega
.endif @ P_MEGA_EVOLUTIONS
.endif @ P_FAMILY_RIOLU
.if P_FAMILY_HIPPOPOTAS == TRUE
	cry Cry_Hippopotas
	cry Cry_Hippowdon
.endif @ P_FAMILY_HIPPOPOTAS
.if P_FAMILY_SKORUPI == TRUE
	cry Cry_Skorupi
	cry Cry_Drapion
.endif @ P_FAMILY_SKORUPI
.if P_FAMILY_CROAGUNK == TRUE
	cry Cry_Croagunk
	cry Cry_Toxicroak
.endif @ P_FAMILY_CROAGUNK
.if P_FAMILY_CARNIVINE == TRUE
	cry Cry_Carnivine
.endif @ P_FAMILY_CARNIVINE
.if P_FAMILY_FINNEON == TRUE
	cry Cry_Finneon
	cry Cry_Lumineon
.endif @ P_FAMILY_FINNEON
.if P_FAMILY_SNOVER == TRUE
	cry Cry_Snover
	cry Cry_Abomasnow
.if P_MEGA_EVOLUTIONS == TRUE
	cry Cry_AbomasnowMega
.endif @ P_MEGA_EVOLUTIONS
.endif @ P_FAMILY_SNOVER
.if P_FAMILY_ROTOM == TRUE
	cry Cry_Rotom
.endif @ P_FAMILY_ROTOM
.if P_FAMILY_UXIE == TRUE
	cry Cry_Uxie
.endif @ P_FAMILY_UXIE
.if P_FAMILY_MESPRIT == TRUE
	cry Cry_Mesprit
.endif @ P_FAMILY_MESPRIT
.if P_FAMILY_AZELF == TRUE
	cry Cry_Azelf
.endif @ P_FAMILY_AZELF
.if P_FAMILY_DIALGA == TRUE
	cry Cry_Dialga
.endif @ P_FAMILY_DIALGA
.if P_FAMILY_PALKIA == TRUE
	cry Cry_Palkia
.endif @ P_FAMILY_PALKIA
.if P_FAMILY_HEATRAN == TRUE
	cry Cry_Heatran
.endif @ P_FAMILY_HEATRAN
.if P_FAMILY_REGIGIGAS == TRUE
	cry Cry_Regigigas
.endif @ P_FAMILY_REGIGIGAS
.if P_FAMILY_GIRATINA == TRUE
	cry Cry_Giratina
.endif @ P_FAMILY_GIRATINA
.if P_FAMILY_CRESSELIA == TRUE
	cry Cry_Cresselia
.endif @ P_FAMILY_CRESSELIA
.if P_FAMILY_MANAPHY == TRUE
	cry Cry_Phione
	cry Cry_Manaphy
.endif @ P_FAMILY_MANAPHY
.if P_FAMILY_DARKRAI == TRUE
	cry Cry_Darkrai
.endif @ P_FAMILY_DARKRAI
.if P_FAMILY_SHAYMIN == TRUE
	cry Cry_ShayminLand
	cry Cry_ShayminSky
.endif @ P_FAMILY_SHAYMIN
.if P_FAMILY_ARCEUS == TRUE
	cry Cry_Arceus
.endif @ P_FAMILY_ARCEUS
.if P_FAMILY_VICTINI == TRUE
	cry Cry_Victini
.endif @ P_FAMILY_VICTINI
.if P_FAMILY_SNIVY == TRUE
	cry Cry_Snivy
	cry Cry_Servine
	cry Cry_Serperior
.endif @ P_FAMILY_SNIVY
.if P_FAMILY_TEPIG == TRUE
	cry Cry_Tepig
	cry Cry_Pignite
	cry Cry_Emboar
.endif @ P_FAMILY_TEPIG
.if P_FAMILY_OSHAWOTT == TRUE
	cry Cry_Oshawott
	cry Cry_Dewott
	cry Cry_Samurott
.endif @ P_FAMILY_OSHAWOTT
.if P_FAMILY_PATRAT == TRUE
	cry Cry_Patrat
	cry Cry_Watchog
.endif @ P_FAMILY_PATRAT
.if P_FAMILY_LILLIPUP == TRUE
	cry Cry_Lillipup
	cry Cry_Herdier
	cry Cry_Stoutland
.endif @ P_FAMILY_LILLIPUP
.if P_FAMILY_PURRLOIN == TRUE
	cry Cry_Purrloin
	cry Cry_Liepard
.endif @ P_FAMILY_PURRLOIN
.if P_FAMILY_PANSAGE == TRUE
	cry Cry_Pansage
	cry Cry_Simisage
.endif @ P_FAMILY_PANSAGE
.if P_FAMILY_PANSEAR == TRUE
	cry Cry_Pansear
	cry Cry_Simisear
.endif @ P_FAMILY_PANSEAR
.if P_FAMILY_PANPOUR == TRUE
	cry Cry_Panpour
	cry Cry_Simipour
.endif @ P_FAMILY_PANPOUR
.if P_FAMILY_MUNNA == TRUE
	cry Cry_Munna
	cry Cry_Musharna
.endif @ P_FAMILY_MUNNA
.if P_FAMILY_PIDOVE == TRUE
	cry Cry_Pidove
	cry Cry_Tranquill
	cry Cry_Unfezant
.endif @ P_FAMILY_PIDOVE
.if P_FAMILY_BLITZLE == TRUE
	cry Cry_Blitzle
	cry Cry_Zebstrika
.endif @ P_FAMILY_BLITZLE
.if P_FAMILY_ROGGENROLA == TRUE
	cry Cry_Roggenrola
	cry Cry_Boldore
	cry Cry_Gigalith
.endif @ P_FAMILY_ROGGENROLA
.if P_FAMILY_WOOBAT == TRUE
	cry Cry_Woobat
	cry Cry_Swoobat
.endif @ P_FAMILY_WOOBAT
.if P_FAMILY_DRILBUR == TRUE
	cry Cry_Drilbur
	cry Cry_Excadrill
.endif @ P_FAMILY_DRILBUR
.if P_FAMILY_AUDINO == TRUE
	cry Cry_Audino
.if P_MEGA_EVOLUTIONS == TRUE
	cry Cry_AudinoMega
.endif @ P_MEGA_EVOLUTIONS
.endif @ P_FAMILY_AUDINO
.if P_FAMILY_TIMBURR == TRUE
	cry Cry_Timburr
	cry Cry_Gurdurr
	cry Cry_Conkeldurr
.endif @ P_FAMILY_TIMBURR
.if P_FAMILY_TYMPOLE == TRUE
	cry Cry_Tympole
	cry Cry_Palpitoad
	cry Cry_Seismitoad
.endif @ P_FAMILY_TYMPOLE
.if P_FAMILY_THROH == TRUE
	cry Cry_Throh
.endif @ P_FAMILY_THROH
.if P_FAMILY_SAWK == TRUE
	cry Cry_Sawk
.endif @ P_FAMILY_SAWK
.if P_FAMILY_SEWADDLE == TRUE
	cry Cry_Sewaddle
	cry Cry_Swadloon
	cry Cry_Leavanny
.endif @ P_FAMILY_SEWADDLE
.if P_FAMILY_VENIPEDE == TRUE
	cry Cry_Venipede
	cry Cry_Whirlipede
	cry Cry_Scolipede
.endif @ P_FAMILY_VENIPEDE
.if P_FAMILY_COTTONEE == TRUE
	cry Cry_Cottonee
	cry Cry_Whimsicott
.endif @ P_FAMILY_COTTONEE
.if P_FAMILY_PETILIL == TRUE
	cry Cry_Petilil
	cry Cry_Lilligant
.endif @ P_FAMILY_PETILIL
.if P_FAMILY_BASCULIN == TRUE
	cry Cry_Basculin
.if P_HISUIAN_FORMS == TRUE
	cry Cry_Basculegion
.endif @ P_HISUIAN_FORMS
.endif @ P_FAMILY_BASCULIN
.if P_FAMILY_SANDILE == TRUE
	cry Cry_Sandile
	cry Cry_Krokorok
	cry Cry_Krookodile
.endif @ P_FAMILY_SANDILE
.if P_FAMILY_DARUMAKA == TRUE
	cry Cry_Darumaka
	cry Cry_Darmanitan
.endif @ P_FAMILY_DARUMAKA
.if P_FAMILY_MARACTUS == TRUE
	cry Cry_Maractus
.endif @ P_FAMILY_MARACTUS
.if P_FAMILY_DWEBBLE == TRUE
	cry Cry_Dwebble
	cry Cry_Crustle
.endif @ P_FAMILY_DWEBBLE
.if P_FAMILY_SCRAGGY == TRUE
	cry Cry_Scraggy
	cry Cry_Scrafty
.endif @ P_FAMILY_SCRAGGY
.if P_FAMILY_SIGILYPH == TRUE
	cry Cry_Sigilyph
.endif @ P_FAMILY_SIGILYPH
.if P_FAMILY_YAMASK == TRUE
	cry Cry_Yamask
	cry Cry_Cofagrigus
.if P_GALARIAN_FORMS == TRUE
	cry Cry_Runerigus
.endif @ P_GALARIAN_FORMS
.endif @ P_FAMILY_YAMASK
.if P_FAMILY_TIRTOUGA == TRUE
	cry Cry_Tirtouga
	cry Cry_Carracosta
.endif @ P_FAMILY_TIRTOUGA
.if P_FAMILY_ARCHEN == TRUE
	cry Cry_Archen
	cry Cry_Archeops
.endif @ P_FAMILY_ARCHEN
.if P_FAMILY_TRUBBISH == TRUE
	cry Cry_Trubbish
	cry Cry_Garbodor
.endif @ P_FAMILY_TRUBBISH
.if P_FAMILY_ZORUA == TRUE
	cry Cry_Zorua
	cry Cry_Zoroark
.endif @ P_FAMILY_ZORUA
.if P_FAMILY_MINCCINO == TRUE
	cry Cry_Minccino
	cry Cry_Cinccino
.endif @ P_FAMILY_MINCCINO
.if P_FAMILY_GOTHITA == TRUE
	cry Cry_Gothita
	cry Cry_Gothorita
	cry Cry_Gothitelle
.endif @ P_FAMILY_GOTHITA
.if P_FAMILY_SOLOSIS == TRUE
	cry Cry_Solosis
	cry Cry_Duosion
	cry Cry_Reuniclus
.endif @ P_FAMILY_SOLOSIS
.if P_FAMILY_DUCKLETT == TRUE
	cry Cry_Ducklett
	cry Cry_Swanna
.endif @ P_FAMILY_DUCKLETT
.if P_FAMILY_VANILLITE == TRUE
	cry Cry_Vanillite
	cry Cry_Vanillish
	cry Cry_Vanilluxe
.endif @ P_FAMILY_VANILLITE
.if P_FAMILY_DEERLING == TRUE
	cry Cry_Deerling
	cry Cry_Sawsbuck
.endif @ P_FAMILY_DEERLING
.if P_FAMILY_EMOLGA == TRUE
	cry Cry_Emolga
.endif @ P_FAMILY_EMOLGA
.if P_FAMILY_KARRABLAST == TRUE
	cry Cry_Karrablast
	cry Cry_Escavalier
.endif @ P_FAMILY_KARRABLAST
.if P_FAMILY_FOONGUS == TRUE
	cry Cry_Foongus
	cry Cry_Amoonguss
.endif @ P_FAMILY_FOONGUS
.if P_FAMILY_FRILLISH == TRUE
	cry Cry_Frillish
	cry Cry_Jellicent
.endif @ P_FAMILY_FRILLISH
.if P_FAMILY_ALOMOMOLA == TRUE
	cry Cry_Alomomola
.endif @ P_FAMILY_ALOMOMOLA
.if P_FAMILY_JOLTIK == TRUE
	cry Cry_Joltik
	cry Cry_Galvantula
.endif @ P_FAMILY_JOLTIK
.if P_FAMILY_FERROSEED == TRUE
	cry Cry_Ferroseed
	cry Cry_Ferrothorn
.endif @ P_FAMILY_FERROSEED
.if P_FAMILY_KLINK == TRUE
	cry Cry_Klink
	cry Cry_Klang
	cry Cry_Klinklang
.endif @ P_FAMILY_KLINK
.if P_FAMILY_TYNAMO == TRUE
	cry Cry_Tynamo
	cry Cry_Eelektrik
	cry Cry_Eelektross
.endif @ P_FAMILY_TYNAMO
.if P_FAMILY_ELGYEM == TRUE
	cry Cry_Elgyem
	cry Cry_Beheeyem
.endif @ P_FAMILY_ELGYEM
.if P_FAMILY_LITWICK == TRUE
	cry Cry_Litwick
	cry Cry_Lampent
	cry Cry_Chandelure
.endif @ P_FAMILY_LITWICK
.if P_FAMILY_AXEW == TRUE
	cry Cry_Axew
	cry Cry_Fraxure
	cry Cry_Haxorus
.endif @ P_FAMILY_AXEW
.if P_FAMILY_CUBCHOO == TRUE
	cry Cry_Cubchoo
	cry Cry_Beartic
.endif @ P_FAMILY_CUBCHOO
.if P_FAMILY_CRYOGONAL == TRUE
	cry Cry_Cryogonal
.endif @ P_FAMILY_CRYOGONAL
.if P_FAMILY_SHELMET == TRUE
	cry Cry_Shelmet
	cry Cry_Accelgor
.endif @ P_FAMILY_SHELMET
.if P_FAMILY_STUNFISK == TRUE
	cry Cry_Stunfisk
.endif @ P_FAMILY_STUNFISK
.if P_FAMILY_MIENFOO == TRUE
	cry Cry_Mienfoo
	cry Cry_Mienshao
.endif @ P_FAMILY_MIENFOO
.if P_FAMILY_DRUDDIGON == TRUE
	cry Cry_Druddigon
.endif @ P_FAMILY_DRUDDIGON
.if P_FAMILY_GOLETT == TRUE
	cry Cry_Golett
	cry Cry_Golurk
.endif @ P_FAMILY_GOLETT
.if P_FAMILY_PAWNIARD == TRUE
	cry Cry_Pawniard
	cry Cry_Bisharp
.if P_GEN_9_CROSS_EVOS == TRUE
	cry Cry_Kingambit
.endif @ P_GEN_9_CROSS_EVOS
.endif @ P_FAMILY_PAWNIARD
.if P_FAMILY_BOUFFALANT == TRUE
	cry Cry_Bouffalant
.endif @ P_FAMILY_BOUFFALANT
.if P_FAMILY_RUFFLET == TRUE
	cry Cry_Rufflet
	cry Cry_Braviary
.endif @ P_FAMILY_RUFFLET
.if P_FAMILY_VULLABY == TRUE
	cry Cry_Vullaby
	cry Cry_Mandibuzz
.endif @ P_FAMILY_VULLABY
.if P_FAMILY_HEATMOR == TRUE
	cry Cry_Heatmor
.endif @ P_FAMILY_HEATMOR
.if P_FAMILY_DURANT == TRUE
	cry Cry_Durant
.endif @ P_FAMILY_DURANT
.if P_FAMILY_DEINO == TRUE
	cry Cry_Deino
	cry Cry_Zweilous
	cry Cry_Hydreigon
.endif @ P_FAMILY_DEINO
.if P_FAMILY_LARVESTA == TRUE
	cry Cry_Larvesta
	cry Cry_Volcarona
.endif @ P_FAMILY_LARVESTA
.if P_FAMILY_COBALION == TRUE
	cry Cry_Cobalion
.endif @ P_FAMILY_COBALION
.if P_FAMILY_TERRAKION == TRUE
	cry Cry_Terrakion
.endif @ P_FAMILY_TERRAKION
.if P_FAMILY_VIRIZION == TRUE
	cry Cry_Virizion
.endif @ P_FAMILY_VIRIZION
.if P_FAMILY_TORNADUS == TRUE
	cry Cry_TornadusIncarnate
	cry Cry_TornadusTherian
.endif @ P_FAMILY_TORNADUS
.if P_FAMILY_THUNDURUS == TRUE
	cry Cry_ThundurusIncarnate
	cry Cry_ThundurusTherian
.endif @ P_FAMILY_THUNDURUS
.if P_FAMILY_RESHIRAM == TRUE
	cry Cry_Reshiram
.endif @ P_FAMILY_RESHIRAM
.if P_FAMILY_ZEKROM == TRUE
	cry Cry_Zekrom
.endif @ P_FAMILY_ZEKROM
.if P_FAMILY_LANDORUS == TRUE
	cry Cry_LandorusIncarnate
	cry Cry_LandorusTherian
.endif @ P_FAMILY_LANDORUS
.if P_FAMILY_KYUREM == TRUE
	cry Cry_Kyurem
.if P_FUSION_FORMS == TRUE
	cry Cry_KyuremWhite
	cry Cry_KyuremBlack
.endif @ P_FUSION_FORMS
.endif @ P_FAMILY_KYUREM
.if P_FAMILY_KELDEO == TRUE
	cry Cry_Keldeo
.endif @ P_FAMILY_KELDEO
.if P_FAMILY_MELOETTA == TRUE
	cry Cry_Meloetta
.endif @ P_FAMILY_MELOETTA
.if P_FAMILY_GENESECT == TRUE
	cry Cry_Genesect
.endif @ P_FAMILY_GENESECT
.if P_FAMILY_CHESPIN == TRUE
	cry Cry_Chespin
	cry Cry_Quilladin
	cry Cry_Chesnaught
.endif @ P_FAMILY_CHESPIN
.if P_FAMILY_FENNEKIN == TRUE
	cry Cry_Fennekin
	cry Cry_Braixen
	cry Cry_Delphox
.endif @ P_FAMILY_FENNEKIN
.if P_FAMILY_FROAKIE == TRUE
	cry Cry_Froakie
	cry Cry_Frogadier
	cry Cry_Greninja
.endif @ P_FAMILY_FROAKIE
.if P_FAMILY_BUNNELBY == TRUE
	cry Cry_Bunnelby
	cry Cry_Diggersby
.endif @ P_FAMILY_BUNNELBY
.if P_FAMILY_FLETCHLING == TRUE
	cry Cry_Fletchling
	cry Cry_Fletchinder
	cry Cry_Talonflame
.endif @ P_FAMILY_FLETCHLING
.if P_FAMILY_SCATTERBUG == TRUE
	cry Cry_Scatterbug
	cry Cry_Spewpa
	cry Cry_Vivillon
.endif @ P_FAMILY_SCATTERBUG
.if P_FAMILY_LITLEO == TRUE
	cry Cry_Litleo
	cry Cry_Pyroar
.endif @ P_FAMILY_LITLEO
.if P_FAMILY_FLABEBE == TRUE
	cry Cry_Flabebe
	cry Cry_Floette
	cry Cry_FloetteEternalFlower
	cry Cry_Florges
.endif @ P_FAMILY_FLABEBE
.if P_FAMILY_SKIDDO == TRUE
	cry Cry_Skiddo
	cry Cry_Gogoat
.endif @ P_FAMILY_SKIDDO
.if P_FAMILY_PANCHAM == TRUE
	cry Cry_Pancham
	cry Cry_Pangoro
.endif @ P_FAMILY_PANCHAM
.if P_FAMILY_FURFROU == TRUE
	cry Cry_Furfrou
.endif @ P_FAMILY_FURFROU
.if P_FAMILY_ESPURR == TRUE
	cry Cry_Espurr
	cry Cry_Meowstic
.endif @ P_FAMILY_ESPURR
.if P_FAMILY_HONEDGE == TRUE
	cry Cry_Honedge
	cry Cry_Doublade
	cry Cry_Aegislash
.endif @ P_FAMILY_HONEDGE
.if P_FAMILY_SPRITZEE == TRUE
	cry Cry_Spritzee
	cry Cry_Aromatisse
.endif @ P_FAMILY_SPRITZEE
.if P_FAMILY_SWIRLIX == TRUE
	cry Cry_Swirlix
	cry Cry_Slurpuff
.endif @ P_FAMILY_SWIRLIX
.if P_FAMILY_INKAY == TRUE
	cry Cry_Inkay
	cry Cry_Malamar
.endif @ P_FAMILY_INKAY
.if P_FAMILY_BINACLE == TRUE
	cry Cry_Binacle
	cry Cry_Barbaracle
.endif @ P_FAMILY_BINACLE
.if P_FAMILY_SKRELP == TRUE
	cry Cry_Skrelp
	cry Cry_Dragalge
.endif @ P_FAMILY_SKRELP
.if P_FAMILY_CLAUNCHER == TRUE
	cry Cry_Clauncher
	cry Cry_Clawitzer
.endif @ P_FAMILY_CLAUNCHER
.if P_FAMILY_HELIOPTILE == TRUE
	cry Cry_Helioptile
	cry Cry_Heliolisk
.endif @ P_FAMILY_HELIOPTILE
.if P_FAMILY_TYRUNT == TRUE
	cry Cry_Tyrunt
	cry Cry_Tyrantrum
.endif @ P_FAMILY_TYRUNT
.if P_FAMILY_AMAURA == TRUE
	cry Cry_Amaura
	cry Cry_Aurorus
.endif @ P_FAMILY_AMAURA
.if P_FAMILY_HAWLUCHA == TRUE
	cry Cry_Hawlucha
.endif @ P_FAMILY_HAWLUCHA
.if P_FAMILY_DEDENNE == TRUE
	cry Cry_Dedenne
.endif @ P_FAMILY_DEDENNE
.if P_FAMILY_CARBINK == TRUE
	cry Cry_Carbink
.endif @ P_FAMILY_CARBINK
.if P_FAMILY_GOOMY == TRUE
	cry Cry_Goomy
	cry Cry_Sliggoo
	cry Cry_Goodra
.endif @ P_FAMILY_GOOMY
.if P_FAMILY_KLEFKI == TRUE
	cry Cry_Klefki
.endif @ P_FAMILY_KLEFKI
.if P_FAMILY_PHANTUMP == TRUE
	cry Cry_Phantump
	cry Cry_Trevenant
.endif @ P_FAMILY_PHANTUMP
.if P_FAMILY_PUMPKABOO == TRUE
	cry Cry_Pumpkaboo
	cry Cry_PumpkabooSuper
	cry Cry_Gourgeist
	cry Cry_GourgeistSuper
.endif @ P_FAMILY_PUMPKABOO
.if P_FAMILY_BERGMITE == TRUE
	cry Cry_Bergmite
	cry Cry_Avalugg
.endif @ P_FAMILY_BERGMITE
.if P_FAMILY_NOIBAT == TRUE
	cry Cry_Noibat
	cry Cry_Noivern
.endif @ P_FAMILY_NOIBAT
.if P_FAMILY_XERNEAS == TRUE
	cry Cry_Xerneas
.endif @ P_FAMILY_XERNEAS
.if P_FAMILY_YVELTAL == TRUE
	cry Cry_Yveltal
.endif @ P_FAMILY_YVELTAL
.if P_FAMILY_ZYGARDE == TRUE
	cry Cry_Zygarde50
	cry Cry_Zygarde10
	cry Cry_ZygardeComplete
.endif @ P_FAMILY_ZYGARDE
.if P_FAMILY_DIANCIE == TRUE
	cry Cry_Diancie
.if P_MEGA_EVOLUTIONS == TRUE
	cry Cry_DiancieMega
.endif @ P_MEGA_EVOLUTIONS
.endif @ P_FAMILY_DIANCIE
.if P_FAMILY_HOOPA == TRUE
	cry Cry_HoopaConfined
	cry Cry_HoopaUnbound
.endif @ P_FAMILY_HOOPA
.if P_FAMILY_VOLCANION == TRUE
	cry Cry_Volcanion
.endif @ P_FAMILY_VOLCANION
.if P_FAMILY_ROWLET == TRUE
	cry Cry_Rowlet
	cry Cry_Dartrix
	cry Cry_Decidueye
.endif @ P_FAMILY_ROWLET
.if P_FAMILY_LITTEN == TRUE
	cry Cry_Litten
	cry Cry_Torracat
	cry Cry_Incineroar
.endif @ P_FAMILY_LITTEN
.if P_FAMILY_POPPLIO == TRUE
	cry Cry_Popplio
	cry Cry_Brionne
	cry Cry_Primarina
.endif @ P_FAMILY_POPPLIO
.if P_FAMILY_PIKIPEK == TRUE
	cry Cry_Pikipek
	cry Cry_Trumbeak
	cry Cry_Toucannon
.endif @ P_FAMILY_PIKIPEK
.if P_FAMILY_YUNGOOS == TRUE
	cry Cry_Yungoos
	cry Cry_Gumshoos
.endif @ P_FAMILY_YUNGOOS
.if P_FAMILY_GRUBBIN == TRUE
	cry Cry_Grubbin
	cry Cry_Charjabug
	cry Cry_Vikavolt
.endif @ P_FAMILY_GRUBBIN
.if P_FAMILY_CRABRAWLER == TRUE
	cry Cry_Crabrawler
	cry Cry_Crabominable
.endif @ P_FAMILY_CRABRAWLER
.if P_FAMILY_ORICORIO == TRUE
	cry Cry_OricorioBaile
	cry Cry_OricorioPomPom
	cry Cry_OricorioPau
	cry Cry_OricorioSensu
.endif @ P_FAMILY_ORICORIO
.if P_FAMILY_CUTIEFLY == TRUE
	cry Cry_Cutiefly
	cry Cry_Ribombee
.endif @ P_FAMILY_CUTIEFLY
.if P_FAMILY_ROCKRUFF == TRUE
	cry Cry_Rockruff
	cry Cry_LycanrocMidday
	cry Cry_LycanrocMidnight
	cry Cry_LycanrocDusk
.endif @ P_FAMILY_ROCKRUFF
.if P_FAMILY_WISHIWASHI == TRUE
	cry Cry_WishiwashiSolo
	cry Cry_WishiwashiSchool
.endif @ P_FAMILY_WISHIWASHI
.if P_FAMILY_MAREANIE == TRUE
	cry Cry_Mareanie
	cry Cry_Toxapex
.endif @ P_FAMILY_MAREANIE
.if P_FAMILY_MUDBRAY == TRUE
	cry Cry_Mudbray
	cry Cry_Mudsdale
.endif @ P_FAMILY_MUDBRAY
.if P_FAMILY_DEWPIDER == TRUE
	cry Cry_Dewpider
	cry Cry_Araquanid
.endif @ P_FAMILY_DEWPIDER
.if P_FAMILY_FOMANTIS == TRUE
	cry Cry_Fomantis
	cry Cry_Lurantis
.endif @ P_FAMILY_FOMANTIS
.if P_FAMILY_MORELULL == TRUE
	cry Cry_Morelull
	cry Cry_Shiinotic
.endif @ P_FAMILY_MORELULL
.if P_FAMILY_SALANDIT == TRUE
	cry Cry_Salandit
	cry Cry_Salazzle
.endif @ P_FAMILY_SALANDIT
.if P_FAMILY_STUFFUL == TRUE
	cry Cry_Stufful
	cry Cry_Bewear
.endif @ P_FAMILY_STUFFUL
.if P_FAMILY_BOUNSWEET == TRUE
	cry Cry_Bounsweet
	cry Cry_Steenee
	cry Cry_Tsareena
.endif @ P_FAMILY_BOUNSWEET
.if P_FAMILY_COMFEY == TRUE
	cry Cry_Comfey
.endif @ P_FAMILY_COMFEY
.if P_FAMILY_ORANGURU == TRUE
	cry Cry_Oranguru
.endif @ P_FAMILY_ORANGURU
.if P_FAMILY_PASSIMIAN == TRUE
	cry Cry_Passimian
.endif @ P_FAMILY_PASSIMIAN
.if P_FAMILY_WIMPOD == TRUE
	cry Cry_Wimpod
	cry Cry_Golisopod
.endif @ P_FAMILY_WIMPOD
.if P_FAMILY_SANDYGAST == TRUE
	cry Cry_Sandygast
	cry Cry_Palossand
.endif @ P_FAMILY_SANDYGAST
.if P_FAMILY_PYUKUMUKU == TRUE
	cry Cry_Pyukumuku
.endif @ P_FAMILY_PYUKUMUKU
.if P_FAMILY_TYPE_NULL == TRUE
	cry Cry_TypeNull
	cry Cry_Silvally
.endif @ P_FAMILY_TYPE_NULL
.if P_FAMILY_MINIOR == TRUE
	cry Cry_Minior
.endif @ P_FAMILY_MINIOR
.if P_FAMILY_KOMALA == TRUE
	cry Cry_Komala
.endif @ P_FAMILY_KOMALA
.if P_FAMILY_TURTONATOR == TRUE
	cry Cry_Turtonator
.endif @ P_FAMILY_TURTONATOR
.if P_FAMILY_TOGEDEMARU == TRUE
	cry Cry_Togedemaru
.endif @ P_FAMILY_TOGEDEMARU
.if P_FAMILY_MIMIKYU == TRUE
	cry Cry_Mimikyu
.endif @ P_FAMILY_MIMIKYU
.if P_FAMILY_BRUXISH == TRUE
	cry Cry_Bruxish
.endif @ P_FAMILY_BRUXISH
.if P_FAMILY_DRAMPA == TRUE
	cry Cry_Drampa
.endif @ P_FAMILY_DRAMPA
.if P_FAMILY_DHELMISE == TRUE
	cry Cry_Dhelmise
.endif @ P_FAMILY_DHELMISE
.if P_FAMILY_JANGMO_O == TRUE
	cry Cry_JangmoO
	cry Cry_HakamoO
	cry Cry_KommoO
.endif @ P_FAMILY_JANGMO_O
.if P_FAMILY_TAPU_KOKO == TRUE
	cry Cry_TapuKoko
.endif @ P_FAMILY_TAPU_KOKO
.if P_FAMILY_TAPU_LELE == TRUE
	cry Cry_TapuLele
.endif @ P_FAMILY_TAPU_LELE
.if P_FAMILY_TAPU_BULU == TRUE
	cry Cry_TapuBulu
.endif @ P_FAMILY_TAPU_BULU
.if P_FAMILY_TAPU_FINI == TRUE
	cry Cry_TapuFini
.endif @ P_FAMILY_TAPU_FINI
.if P_FAMILY_COSMOG == TRUE
	cry Cry_Cosmog
	cry Cry_Cosmoem
	cry Cry_Solgaleo
	cry Cry_Lunala
.endif @ P_FAMILY_COSMOG
.if P_FAMILY_NIHILEGO == TRUE
	cry Cry_Nihilego
.endif @ P_FAMILY_NIHILEGO
.if P_FAMILY_BUZZWOLE == TRUE
	cry Cry_Buzzwole
.endif @ P_FAMILY_BUZZWOLE
.if P_FAMILY_PHEROMOSA == TRUE
	cry Cry_Pheromosa
.endif @ P_FAMILY_PHEROMOSA
.if P_FAMILY_XURKITREE == TRUE
	cry Cry_Xurkitree
.endif @ P_FAMILY_XURKITREE
.if P_FAMILY_CELESTEELA == TRUE
	cry Cry_Celesteela
.endif @ P_FAMILY_CELESTEELA
.if P_FAMILY_KARTANA == TRUE
	cry Cry_Kartana
.endif @ P_FAMILY_KARTANA
.if P_FAMILY_GUZZLORD == TRUE
	cry Cry_Guzzlord
.endif @ P_FAMILY_GUZZLORD
.if P_FAMILY_NECROZMA == TRUE
	cry Cry_Necrozma
.if P_FUSION_FORMS == TRUE
	cry Cry_NecrozmaDuskMane
	cry Cry_NecrozmaDawnWings
.if P_ULTRA_BURST_FORMS == TRUE
	cry Cry_NecrozmaUltra
.endif @ P_ULTRA_BURST_FORMS
.endif @ P_FUSION_FORMS
.endif @ P_FAMILY_NECROZMA
.if P_FAMILY_MAGEARNA == TRUE
	cry Cry_Magearna
.endif @ P_FAMILY_MAGEARNA
.if P_FAMILY_MARSHADOW == TRUE
	cry Cry_Marshadow
.endif @ P_FAMILY_MARSHADOW
.if P_FAMILY_POIPOLE == TRUE
	cry Cry_Poipole
	cry Cry_Naganadel
.endif @ P_FAMILY_POIPOLE
.if P_FAMILY_STAKATAKA == TRUE
	cry Cry_Stakataka
.endif @ P_FAMILY_STAKATAKA
.if P_FAMILY_BLACEPHALON == TRUE
	cry Cry_Blacephalon
.endif @ P_FAMILY_BLACEPHALON
.if P_FAMILY_ZERAORA == TRUE
	cry Cry_Zeraora
.endif @ P_FAMILY_ZERAORA
.if P_FAMILY_MELTAN == TRUE
	cry Cry_Meltan
	cry Cry_Melmetal
.endif @ P_FAMILY_MELTAN
.if P_FAMILY_GROOKEY == TRUE
	cry Cry_Grookey
	cry Cry_Thwackey
	cry Cry_Rillaboom
.endif @ P_FAMILY_GROOKEY
.if P_FAMILY_SCORBUNNY == TRUE
	cry Cry_Scorbunny
	cry Cry_Raboot
	cry Cry_Cinderace
.endif @ P_FAMILY_SCORBUNNY
.if P_FAMILY_SOBBLE == TRUE
	cry Cry_Sobble
	cry Cry_Drizzile
	cry Cry_Inteleon
.endif @ P_FAMILY_SOBBLE
.if P_FAMILY_SKWOVET == TRUE
	cry Cry_Skwovet
	cry Cry_Greedent
.endif @ P_FAMILY_SKWOVET
.if P_FAMILY_ROOKIDEE == TRUE
	cry Cry_Rookidee
	cry Cry_Corvisquire
	cry Cry_Corviknight
.endif @ P_FAMILY_ROOKIDEE
.if P_FAMILY_BLIPBUG == TRUE
	cry Cry_Blipbug
	cry Cry_Dottler
	cry Cry_Orbeetle
.endif @ P_FAMILY_BLIPBUG
.if P_FAMILY_NICKIT == TRUE
	cry Cry_Nickit
	cry Cry_Thievul
.endif @ P_FAMILY_NICKIT
.if P_FAMILY_GOSSIFLEUR == TRUE
	cry Cry_Gossifleur
	cry Cry_Eldegoss
.endif @ P_FAMILY_GOSSIFLEUR
.if P_FAMILY_WOOLOO == TRUE
	cry Cry_Wooloo
	cry Cry_Dubwool
.endif @ P_FAMILY_WOOLOO
.if P_FAMILY_CHEWTLE == TRUE
	cry Cry_Chewtle
	cry Cry_Drednaw
.endif @ P_FAMILY_CHEWTLE
.if P_FAMILY_YAMPER == TRUE
	cry Cry_Yamper
	cry Cry_Boltund
.endif @ P_FAMILY_YAMPER
.if P_FAMILY_ROLYCOLY == TRUE
	cry Cry_Rolycoly
	cry Cry_Carkol
	cry Cry_Coalossal
.endif @ P_FAMILY_ROLYCOLY
.if P_FAMILY_APPLIN == TRUE
	cry Cry_Applin
	cry Cry_Flapple
	cry Cry_Appletun
.if P_GEN_9_CROSS_EVOS == TRUE
	cry Cry_Dipplin
.endif @ P_GEN_9_CROSS_EVOS
.endif @ P_FAMILY_APPLIN
.if P_FAMILY_SILICOBRA == TRUE
	cry Cry_Silicobra
	cry Cry_Sandaconda
.endif @ P_FAMILY_SILICOBRA
.if P_FAMILY_CRAMORANT == TRUE
	cry Cry_Cramorant
.endif @ P_FAMILY_CRAMORANT
.if P_FAMILY_ARROKUDA == TRUE
	cry Cry_Arrokuda
	cry Cry_Barraskewda
.endif @ P_FAMILY_ARROKUDA
.if P_FAMILY_TOXEL == TRUE
	cry Cry_Toxel
	cry Cry_ToxtricityAmped
	cry Cry_ToxtricityLowKey
.endif @ P_FAMILY_TOXEL
.if P_FAMILY_SIZZLIPEDE == TRUE
	cry Cry_Sizzlipede
	cry Cry_Centiskorch
.endif @ P_FAMILY_SIZZLIPEDE
.if P_FAMILY_CLOBBOPUS == TRUE
	cry Cry_Clobbopus
	cry Cry_Grapploct
.endif @ P_FAMILY_CLOBBOPUS
.if P_FAMILY_SINISTEA == TRUE
	cry Cry_Sinistea
	cry Cry_Polteageist
.endif @ P_FAMILY_SINISTEA
.if P_FAMILY_HATENNA == TRUE
	cry Cry_Hatenna
	cry Cry_Hattrem
	cry Cry_Hatterene
.endif @ P_FAMILY_HATENNA
.if P_FAMILY_IMPIDIMP == TRUE
	cry Cry_Impidimp
	cry Cry_Morgrem
	cry Cry_Grimmsnarl
.endif @ P_FAMILY_IMPIDIMP
.if P_FAMILY_MILCERY == TRUE
	cry Cry_Milcery
	cry Cry_Alcremie
.endif @ P_FAMILY_MILCERY
.if P_FAMILY_FALINKS == TRUE
	cry Cry_Falinks
.endif @ P_FAMILY_FALINKS
.if P_FAMILY_PINCURCHIN == TRUE
	cry Cry_Pincurchin
.endif @ P_FAMILY_PINCURCHIN
.if P_FAMILY_SNOM == TRUE
	cry Cry_Snom
	cry Cry_Frosmoth
.endif @ P_FAMILY_SNOM
.if P_FAMILY_STONJOURNER == TRUE
	cry Cry_Stonjourner
.endif @ P_FAMILY_STONJOURNER
.if P_FAMILY_EISCUE == TRUE
	cry Cry_EiscueIceFace
	cry Cry_EiscueNoiceFace
.endif @ P_FAMILY_EISCUE
.if P_FAMILY_INDEEDEE == TRUE
	cry Cry_IndeedeeMale
	cry Cry_IndeedeeFemale
.endif @ P_FAMILY_INDEEDEE
.if P_FAMILY_MORPEKO == TRUE
	cry Cry_MorpekoFullBelly
	cry Cry_MorpekoHangry
.endif @ P_FAMILY_MORPEKO
.if P_FAMILY_CUFANT == TRUE
	cry Cry_Cufant
	cry Cry_Copperajah
.endif @ P_FAMILY_CUFANT
.if P_FAMILY_DRACOZOLT == TRUE
	cry Cry_Dracozolt
.endif @ P_FAMILY_DRACOZOLT
.if P_FAMILY_ARCTOZOLT == TRUE
	cry Cry_Arctozolt
.endif @ P_FAMILY_ARCTOZOLT
.if P_FAMILY_DRACOVISH == TRUE
	cry Cry_Dracovish
.endif @ P_FAMILY_DRACOVISH
.if P_FAMILY_ARCTOVISH == TRUE
	cry Cry_Arctovish
.endif @ P_FAMILY_ARCTOVISH
.if P_FAMILY_DURALUDON == TRUE
	cry Cry_Duraludon
.endif @ P_FAMILY_DURALUDON
.if P_FAMILY_DREEPY == TRUE
	cry Cry_Dreepy
	cry Cry_Drakloak
	cry Cry_Dragapult
.endif @ P_FAMILY_DREEPY
.if P_FAMILY_ZACIAN == TRUE
	cry Cry_ZacianHeroOfManyBattles
	cry Cry_ZacianCrownedSword
.endif @ P_FAMILY_ZACIAN
.if P_FAMILY_ZAMAZENTA == TRUE
	cry Cry_ZamazentaHeroOfManyBattles
	cry Cry_ZamazentaCrownedShield
.endif @ P_FAMILY_ZAMAZENTA
.if P_FAMILY_ETERNATUS == TRUE
	cry Cry_Eternatus
	cry Cry_EternatusEternamax
.endif @ P_FAMILY_ETERNATUS
.if P_FAMILY_KUBFU == TRUE
	cry Cry_Kubfu
	cry Cry_UrshifuSingleStrikeStyle
	cry Cry_UrshifuRapidStrikeStyle
.endif @ P_FAMILY_KUBFU
.if P_FAMILY_ZARUDE == TRUE
	cry Cry_Zarude
.endif @ P_FAMILY_ZARUDE
.if P_FAMILY_REGIELEKI == TRUE
	cry Cry_Regieleki
.endif @ P_FAMILY_REGIELEKI
.if P_FAMILY_REGIDRAGO == TRUE
	cry Cry_Regidrago
.endif @ P_FAMILY_REGIDRAGO
.if P_FAMILY_GLASTRIER == TRUE
	cry Cry_Glastrier
.endif @ P_FAMILY_GLASTRIER
.if P_FAMILY_SPECTRIER == TRUE
	cry Cry_Spectrier
.endif @ P_FAMILY_SPECTRIER
.if P_FAMILY_CALYREX == TRUE
	cry Cry_Calyrex
.if P_FUSION_FORMS == TRUE
	cry Cry_CalyrexIceRider
	cry Cry_CalyrexShadowRider
.endif @ P_FUSION_FORMS
.endif @ P_FAMILY_CALYREX
.if P_FAMILY_ENAMORUS == TRUE
	cry Cry_EnamorusIncarnate
	cry Cry_EnamorusTherian
.endif @ P_FAMILY_ENAMORUS
.if P_FAMILY_SPRIGATITO == TRUE
	cry Cry_Sprigatito
	cry Cry_Floragato
	cry Cry_Meowscarada
.endif @ P_FAMILY_SPRIGATITO
.if P_FAMILY_FUECOCO == TRUE
	cry Cry_Fuecoco
	cry Cry_Crocalor
	cry Cry_Skeledirge
.endif @ P_FAMILY_FUECOCO
.if P_FAMILY_QUAXLY == TRUE
	cry Cry_Quaxly
	cry Cry_Quaxwell
	cry Cry_Quaquaval
.endif @ P_FAMILY_QUAXLY
.if P_FAMILY_LECHONK == TRUE
	cry Cry_Lechonk
	cry Cry_OinkologneMale
	cry Cry_OinkologneFemale
.endif @ P_FAMILY_LECHONK
.if P_FAMILY_TAROUNTULA == TRUE
	cry Cry_Tarountula
	cry Cry_Spidops
.endif @ P_FAMILY_TAROUNTULA
.if P_FAMILY_NYMBLE == TRUE
	cry Cry_Nymble
	cry Cry_Lokix
.endif @ P_FAMILY_NYMBLE
.if P_FAMILY_PAWMI == TRUE
	cry Cry_Pawmi
	cry Cry_Pawmo
	cry Cry_Pawmot
.endif @ P_FAMILY_PAWMI
.if P_FAMILY_TANDEMAUS == TRUE
	cry Cry_Tandemaus
	cry Cry_MausholdFamilyOfThree
	cry Cry_MausholdFamilyOfFour
.endif @ P_FAMILY_TANDEMAUS
.if P_FAMILY_FIDOUGH == TRUE
	cry Cry_Fidough
	cry Cry_Dachsbun
.endif @ P_FAMILY_FIDOUGH
.if P_FAMILY_SMOLIV == TRUE
	cry Cry_Smoliv
	cry Cry_Dolliv
	cry Cry_Arboliva
.endif @ P_FAMILY_SMOLIV
.if P_FAMILY_SQUAWKABILLY == TRUE
	cry Cry_Squawkabilly
.endif @ P_FAMILY_SQUAWKABILLY
.if P_FAMILY_NACLI == TRUE
	cry Cry_Nacli
	cry Cry_Naclstack
	cry Cry_Garganacl
.endif @ P_FAMILY_NACLI
.if P_FAMILY_CHARCADET == TRUE
	cry Cry_Charcadet
	cry Cry_Armarouge
	cry Cry_Ceruledge
.endif @ P_FAMILY_CHARCADET
.if P_FAMILY_TADBULB == TRUE
	cry Cry_Tadbulb
	cry Cry_Bellibolt
.endif @ P_FAMILY_TADBULB
.if P_FAMILY_WATTREL == TRUE
	cry Cry_Wattrel
	cry Cry_Kilowattrel
.endif @ P_FAMILY_WATTREL
.if P_FAMILY_MASCHIFF == TRUE
	cry Cry_Maschiff
	cry Cry_Mabosstiff
.endif @ P_FAMILY_MASCHIFF
.if P_FAMILY_SHROODLE == TRUE
	cry Cry_Shroodle
	cry Cry_Grafaiai
.endif @ P_FAMILY_SHROODLE
.if P_FAMILY_BRAMBLIN == TRUE
	cry Cry_Bramblin
	cry Cry_Brambleghast
.endif @ P_FAMILY_BRAMBLIN
.if P_FAMILY_TOEDSCOOL == TRUE
	cry Cry_Toedscool
	cry Cry_Toedscruel
.endif @ P_FAMILY_TOEDSCOOL
.if P_FAMILY_KLAWF == TRUE
	cry Cry_Klawf
.endif @ P_FAMILY_KLAWF
.if P_FAMILY_CAPSAKID == TRUE
	cry Cry_Capsakid
	cry Cry_Scovillain
.endif @ P_FAMILY_CAPSAKID
.if P_FAMILY_RELLOR == TRUE
	cry Cry_Rellor
	cry Cry_Rabsca
.endif @ P_FAMILY_RELLOR
.if P_FAMILY_FLITTLE == TRUE
	cry Cry_Flittle
	cry Cry_Espathra
.endif @ P_FAMILY_FLITTLE
.if P_FAMILY_TINKATINK == TRUE
	cry Cry_Tinkatink
	cry Cry_Tinkatuff
	cry Cry_Tinkaton
.endif @ P_FAMILY_TINKATINK
.if P_FAMILY_WIGLETT == TRUE
	cry Cry_Wiglett
	cry Cry_Wugtrio
.endif @ P_FAMILY_WIGLETT
.if P_FAMILY_BOMBIRDIER == TRUE
	cry Cry_Bombirdier
.endif @ P_FAMILY_BOMBIRDIER
.if P_FAMILY_FINIZEN == TRUE
	cry Cry_Finizen
	cry Cry_PalafinZero
	cry Cry_PalafinHero
.endif @ P_FAMILY_FINIZEN
.if P_FAMILY_VAROOM == TRUE
	cry Cry_Varoom
	cry Cry_Revavroom
.endif @ P_FAMILY_VAROOM
.if P_FAMILY_CYCLIZAR == TRUE
	cry Cry_Cyclizar
.endif @ P_FAMILY_CYCLIZAR
.if P_FAMILY_ORTHWORM == TRUE
	cry Cry_Orthworm
.endif @ P_FAMILY_ORTHWORM
.if P_FAMILY_GLIMMET == TRUE
	cry Cry_Glimmet
	cry Cry_Glimmora
.endif @ P_FAMILY_GLIMMET
.if P_FAMILY_GREAVARD == TRUE
	cry Cry_Greavard
	cry Cry_Houndstone
.endif @ P_FAMILY_GREAVARD
.if P_FAMILY_FLAMIGO == TRUE
	cry Cry_Flamigo
.endif @ P_FAMILY_FLAMIGO
.if P_FAMILY_CETODDLE == TRUE
	cry Cry_Cetoddle
	cry Cry_Cetitan
.endif @ P_FAMILY_CETODDLE
.if P_FAMILY_VELUZA == TRUE
	cry Cry_Veluza
.endif @ P_FAMILY_VELUZA
.if P_FAMILY_DONDOZO == TRUE
	cry Cry_Dondozo
.endif @ P_FAMILY_DONDOZO
.if P_FAMILY_TATSUGIRI == TRUE
	cry Cry_TatsugiriCurly
	cry Cry_TatsugiriDroopy
	cry Cry_TatsugiriStretchy
.endif @ P_FAMILY_TATSUGIRI
.if P_FAMILY_GREAT_TUSK == TRUE
	cry Cry_GreatTusk
.endif @ P_FAMILY_GREAT_TUSK
.if P_FAMILY_SCREAM_TAIL == TRUE
	cry Cry_ScreamTail
.endif @ P_FAMILY_SCREAM_TAIL
.if P_FAMILY_BRUTE_BONNET == TRUE
	cry Cry_BruteBonnet
.endif @ P_FAMILY_BRUTE_BONNET
.if P_FAMILY_FLUTTER_MANE == TRUE
	cry Cry_FlutterMane
.endif @ P_FAMILY_FLUTTER_MANE
.if P_FAMILY_SLITHER_WING == TRUE
	cry Cry_SlitherWing
.endif @ P_FAMILY_SLITHER_WING
.if P_FAMILY_SANDY_SHOCKS == TRUE
	cry Cry_SandyShocks
.endif @ P_FAMILY_SANDY_SHOCKS
.if P_FAMILY_IRON_TREADS == TRUE
	cry Cry_IronTreads
.endif @ P_FAMILY_IRON_TREADS
.if P_FAMILY_IRON_BUNDLE == TRUE
	cry Cry_IronBundle
.endif @ P_FAMILY_IRON_BUNDLE
.if P_FAMILY_IRON_HANDS == TRUE
	cry Cry_IronHands
.endif @ P_FAMILY_IRON_HANDS
.if P_FAMILY_IRON_JUGULIS == TRUE
	cry Cry_IronJugulis
.endif @ P_FAMILY_IRON_JUGULIS
.if P_FAMILY_IRON_MOTH == TRUE
	cry Cry_IronMoth
.endif @ P_FAMILY_IRON_MOTH
.if P_FAMILY_IRON_THORNS == TRUE
	cry Cry_IronThorns
.endif @ P_FAMILY_IRON_THORNS
.if P_FAMILY_FRIGIBAX == TRUE
	cry Cry_Frigibax
	cry Cry_Arctibax
	cry Cry_Baxcalibur
.endif @ P_FAMILY_FRIGIBAX
.if P_FAMILY_GIMMIGHOUL == TRUE
	cry Cry_Gimmighoul
	cry Cry_Gholdengo
.endif @ P_FAMILY_GIMMIGHOUL
.if P_FAMILY_WO_CHIEN == TRUE
	cry Cry_WoChien
.endif @ P_FAMILY_WO_CHIEN
.if P_FAMILY_CHIEN_PAO == TRUE
	cry Cry_ChienPao
.endif @ P_FAMILY_CHIEN_PAO
.if P_FAMILY_TING_LU == TRUE
	cry Cry_TingLu
.endif @ P_FAMILY_TING_LU
.if P_FAMILY_CHI_YU == TRUE
	cry Cry_ChiYu
.endif @ P_FAMILY_CHI_YU
.if P_FAMILY_ROARING_MOON == TRUE
	cry Cry_RoaringMoon
.endif @ P_FAMILY_ROARING_MOON
.if P_FAMILY_IRON_VALIANT == TRUE
	cry Cry_IronValiant
.endif @ P_FAMILY_IRON_VALIANT
.if P_FAMILY_KORAIDON == TRUE
	cry Cry_Koraidon
.endif @ P_FAMILY_KORAIDON
.if P_FAMILY_MIRAIDON == TRUE
	cry Cry_Miraidon
.endif @ P_FAMILY_MIRAIDON
.if P_FAMILY_WALKING_WAKE == TRUE
	cry Cry_WalkingWake
.endif @ P_FAMILY_WALKING_WAKE
.if P_FAMILY_IRON_LEAVES == TRUE
	cry Cry_IronLeaves
.endif @ P_FAMILY_IRON_LEAVES
.if P_FAMILY_POLTCHAGEIST == TRUE
	cry Cry_Poltchageist
	cry Cry_Sinistcha
.endif @ P_FAMILY_POLTCHAGEIST
.if P_FAMILY_OKIDOGI == TRUE
	cry Cry_Okidogi
.endif @ P_FAMILY_OKIDOGI
.if P_FAMILY_MUNKIDORI == TRUE
	cry Cry_Munkidori
.endif @ P_FAMILY_MUNKIDORI
.if P_FAMILY_FEZANDIPITI == TRUE
	cry Cry_Fezandipiti
.endif @ P_FAMILY_FEZANDIPITI
.if P_FAMILY_OGERPON == TRUE
	cry Cry_Ogerpon
.endif @ P_FAMILY_OGERPON

	.align 2
gCryTable_Reverse::
.if P_FAMILY_BULBASAUR == TRUE
	cry_reverse Cry_Bulbasaur
	cry_reverse Cry_Ivysaur
	cry_reverse Cry_Venusaur
.if P_MEGA_EVOLUTIONS == TRUE
	cry_reverse Cry_VenusaurMega
.endif @ P_MEGA_EVOLUTIONS
.endif @ P_FAMILY_BULBASAUR
.if P_FAMILY_CHARMANDER == TRUE
	cry_reverse Cry_Charmander
	cry_reverse Cry_Charmeleon
	cry_reverse Cry_Charizard
.if P_MEGA_EVOLUTIONS == TRUE
	cry_reverse Cry_CharizardMegaX
	cry_reverse Cry_CharizardMegaY
.endif @ P_MEGA_EVOLUTIONS
.endif @ P_FAMILY_CHARMANDER
.if P_FAMILY_SQUIRTLE == TRUE
	cry_reverse Cry_Squirtle
	cry_reverse Cry_Wartortle
	cry_reverse Cry_Blastoise
.if P_MEGA_EVOLUTIONS == TRUE
	cry_reverse Cry_BlastoiseMega
.endif @ P_MEGA_EVOLUTIONS
.endif @ P_FAMILY_SQUIRTLE
.if P_FAMILY_CATERPIE == TRUE
	cry_reverse Cry_Caterpie
	cry_reverse Cry_Metapod
	cry_reverse Cry_Butterfree
.endif @ P_FAMILY_CATERPIE
.if P_FAMILY_WEEDLE == TRUE
	cry_reverse Cry_Weedle
	cry_reverse Cry_Kakuna
	cry_reverse Cry_Beedrill
.if P_MEGA_EVOLUTIONS == TRUE
	cry_reverse Cry_BeedrillMega
.endif @ P_MEGA_EVOLUTIONS
.endif @ P_FAMILY_WEEDLE
.if P_FAMILY_PIDGEY == TRUE
	cry_reverse Cry_Pidgey
	cry_reverse Cry_Pidgeotto
	cry_reverse Cry_Pidgeot
.if P_MEGA_EVOLUTIONS == TRUE
	cry_reverse Cry_PidgeotMega
.endif @ P_MEGA_EVOLUTIONS
.endif @ P_FAMILY_PIDGEY
.if P_FAMILY_RATTATA == TRUE
	cry_reverse Cry_Rattata
	cry_reverse Cry_Raticate
.endif @ P_FAMILY_RATTATA
.if P_FAMILY_SPEAROW == TRUE
	cry_reverse Cry_Spearow
	cry_reverse Cry_Fearow
.endif @ P_FAMILY_SPEAROW
.if P_FAMILY_EKANS == TRUE
	cry_reverse Cry_Ekans
	cry_reverse Cry_Arbok
.endif @ P_FAMILY_EKANS
.if P_FAMILY_PIKACHU == TRUE
.if P_GEN_2_CROSS_EVOS == TRUE
	cry_reverse Cry_Pichu
.endif @ P_GEN_2_CROSS_EVOS
	cry_reverse Cry_Pikachu
	cry_reverse Cry_Raichu
.endif @ P_FAMILY_PIKACHU
.if P_FAMILY_SANDSHREW == TRUE
	cry_reverse Cry_Sandshrew
	cry_reverse Cry_Sandslash
.endif @ P_FAMILY_SANDSHREW
.if P_FAMILY_NIDORAN == TRUE
	cry_reverse Cry_NidoranF
	cry_reverse Cry_Nidorina
	cry_reverse Cry_Nidoqueen
	cry_reverse Cry_NidoranM
	cry_reverse Cry_Nidorino
	cry_reverse Cry_Nidoking
.endif @ P_FAMILY_NIDORAN
.if P_FAMILY_CLEFAIRY == TRUE
.if P_GEN_2_CROSS_EVOS == TRUE
	cry_reverse Cry_Cleffa
.endif @ P_GEN_2_CROSS_EVOS
	cry_reverse Cry_Clefairy
	cry_reverse Cry_Clefable
.endif @ P_FAMILY_CLEFAIRY
.if P_FAMILY_VULPIX == TRUE
	cry_reverse Cry_Vulpix
	cry_reverse Cry_Ninetales
.endif @ P_FAMILY_VULPIX
.if P_FAMILY_JIGGLYPUFF == TRUE
.if P_GEN_2_CROSS_EVOS == TRUE
	cry_reverse Cry_Igglybuff
.endif @ P_GEN_2_CROSS_EVOS
	cry_reverse Cry_Jigglypuff
	cry_reverse Cry_Wigglytuff
.endif @ P_FAMILY_JIGGLYPUFF
.if P_FAMILY_ZUBAT == TRUE
	cry_reverse Cry_Zubat
	cry_reverse Cry_Golbat
.if P_GEN_2_CROSS_EVOS == TRUE
	cry_reverse Cry_Crobat
.endif @ P_GEN_2_CROSS_EVOS
.endif @ P_FAMILY_ZUBAT
.if P_FAMILY_ODDISH == TRUE
	cry_reverse Cry_Oddish
	cry_reverse Cry_Gloom
	cry_reverse Cry_Vileplume
.if P_GEN_2_CROSS_EVOS == TRUE
	cry_reverse Cry_Bellossom
.endif @ P_GEN_2_CROSS_EVOS
.endif @ P_FAMILY_ODDISH
.if P_FAMILY_PARAS == TRUE
	cry_reverse Cry_Paras
	cry_reverse Cry_Parasect
.endif @ P_FAMILY_PARAS
.if P_FAMILY_VENONAT == TRUE
	cry_reverse Cry_Venonat
	cry_reverse Cry_Venomoth
.endif @ P_FAMILY_VENONAT
.if P_FAMILY_DIGLETT == TRUE
	cry_reverse Cry_Diglett
	cry_reverse Cry_Dugtrio
.endif @ P_FAMILY_DIGLETT
.if P_FAMILY_MEOWTH == TRUE
	cry_reverse Cry_Meowth
	cry_reverse Cry_Persian
.if P_GALARIAN_FORMS == TRUE
	cry_reverse Cry_Perrserker
.endif @ P_GALARIAN_FORMS
.endif @ P_FAMILY_MEOWTH
.if P_FAMILY_PSYDUCK == TRUE
	cry_reverse Cry_Psyduck
	cry_reverse Cry_Golduck
.endif @ P_FAMILY_PSYDUCK
.if P_FAMILY_MANKEY == TRUE
	cry_reverse Cry_Mankey
	cry_reverse Cry_Primeape
.if P_GEN_9_CROSS_EVOS == TRUE
	cry_reverse Cry_Annihilape
.endif @ P_GEN_9_CROSS_EVOS
.endif @ P_FAMILY_MANKEY
.if P_FAMILY_GROWLITHE == TRUE
	cry_reverse Cry_Growlithe
	cry_reverse Cry_Arcanine
.endif @ P_FAMILY_GROWLITHE
.if P_FAMILY_POLIWAG == TRUE
	cry_reverse Cry_Poliwag
	cry_reverse Cry_Poliwhirl
	cry_reverse Cry_Poliwrath
.if P_GEN_2_CROSS_EVOS == TRUE
	cry_reverse Cry_Politoed
.endif @ P_GEN_2_CROSS_EVOS
.endif @ P_FAMILY_POLIWAG
.if P_FAMILY_ABRA == TRUE
	cry_reverse Cry_Abra
	cry_reverse Cry_Kadabra
	cry_reverse Cry_Alakazam
.if P_MEGA_EVOLUTIONS == TRUE
	cry_reverse Cry_AlakazamMega
.endif @ P_MEGA_EVOLUTIONS
.endif @ P_FAMILY_ABRA
.if P_FAMILY_MACHOP == TRUE
	cry_reverse Cry_Machop
	cry_reverse Cry_Machoke
	cry_reverse Cry_Machamp
.endif @ P_FAMILY_MACHOP
.if P_FAMILY_BELLSPROUT == TRUE
	cry_reverse Cry_Bellsprout
	cry_reverse Cry_Weepinbell
	cry_reverse Cry_Victreebel
.endif @ P_FAMILY_BELLSPROUT
.if P_FAMILY_TENTACOOL == TRUE
	cry_reverse Cry_Tentacool
	cry_reverse Cry_Tentacruel
.endif @ P_FAMILY_TENTACOOL
.if P_FAMILY_GEODUDE == TRUE
	cry_reverse Cry_Geodude
	cry_reverse Cry_Graveler
	cry_reverse Cry_Golem
.endif @ P_FAMILY_GEODUDE
.if P_FAMILY_PONYTA == TRUE
	cry_reverse Cry_Ponyta
	cry_reverse Cry_Rapidash
.endif @ P_FAMILY_PONYTA
.if P_FAMILY_SLOWPOKE == TRUE
	cry_reverse Cry_Slowpoke
	cry_reverse Cry_Slowbro
.if P_GEN_2_CROSS_EVOS == TRUE
	cry_reverse Cry_Slowking
.endif @ P_GEN_2_CROSS_EVOS
.if P_MEGA_EVOLUTIONS == TRUE
	cry_reverse Cry_SlowbroMega
.endif @ P_MEGA_EVOLUTIONS
.if P_GALARIAN_FORMS == TRUE
	cry_reverse Cry_SlowpokeGalarian
.endif @ P_GALARIAN_FORMS
.endif @ P_FAMILY_SLOWPOKE
.if P_FAMILY_MAGNEMITE == TRUE
	cry_reverse Cry_Magnemite
	cry_reverse Cry_Magneton
.if P_GEN_4_CROSS_EVOS == TRUE
	cry_reverse Cry_Magnezone
.endif @ P_GEN_4_CROSS_EVOS
.endif @ P_FAMILY_MAGNEMITE
.if P_FAMILY_FARFETCHD == TRUE
	cry_reverse Cry_Farfetchd
.if P_GALARIAN_FORMS == TRUE
	cry_reverse Cry_Sirfetchd
.endif @ P_GALARIAN_FORMS
.endif @ P_FAMILY_FARFETCHD
.if P_FAMILY_DODUO == TRUE
	cry_reverse Cry_Doduo
	cry_reverse Cry_Dodrio
.endif @ P_FAMILY_DODUO
.if P_FAMILY_SEEL == TRUE
	cry_reverse Cry_Seel
	cry_reverse Cry_Dewgong
.endif @ P_FAMILY_SEEL
.if P_FAMILY_GRIMER == TRUE
	cry_reverse Cry_Grimer
	cry_reverse Cry_Muk
.endif @ P_FAMILY_GRIMER
.if P_FAMILY_SHELLDER == TRUE
	cry_reverse Cry_Shellder
	cry_reverse Cry_Cloyster
.endif @ P_FAMILY_SHELLDER
.if P_FAMILY_GASTLY == TRUE
	cry_reverse Cry_Gastly
	cry_reverse Cry_Haunter
	cry_reverse Cry_Gengar
.if P_MEGA_EVOLUTIONS == TRUE
	cry_reverse Cry_GengarMega
.endif @ P_MEGA_EVOLUTIONS
.endif @ P_FAMILY_GASTLY
.if P_FAMILY_ONIX == TRUE
	cry_reverse Cry_Onix
.if P_GEN_2_CROSS_EVOS == TRUE
	cry_reverse Cry_Steelix
.if P_MEGA_EVOLUTIONS == TRUE
	cry_reverse Cry_SteelixMega
.endif @ P_MEGA_EVOLUTIONS
.endif @ P_GEN_2_CROSS_EVOS
.endif @ P_FAMILY_ONIX
.if P_FAMILY_DROWZEE == TRUE
	cry_reverse Cry_Drowzee
	cry_reverse Cry_Hypno
.endif @ P_FAMILY_DROWZEE
.if P_FAMILY_KRABBY == TRUE
	cry_reverse Cry_Krabby
	cry_reverse Cry_Kingler
.endif @ P_FAMILY_KRABBY
.if P_FAMILY_VOLTORB == TRUE
	cry_reverse Cry_Voltorb
	cry_reverse Cry_Electrode
.endif @ P_FAMILY_VOLTORB
.if P_FAMILY_EXEGGCUTE == TRUE
	cry_reverse Cry_Exeggcute
	cry_reverse Cry_Exeggutor
.endif @ P_FAMILY_EXEGGCUTE
.if P_FAMILY_CUBONE == TRUE
	cry_reverse Cry_Cubone
	cry_reverse Cry_Marowak
.endif @ P_FAMILY_CUBONE
.if P_FAMILY_HITMONS == TRUE
.if P_GEN_2_CROSS_EVOS == TRUE
	cry_reverse Cry_Tyrogue
.endif @ P_GEN_2_CROSS_EVOS
	cry_reverse Cry_Hitmonlee
	cry_reverse Cry_Hitmonchan
.if P_GEN_2_CROSS_EVOS == TRUE
	cry_reverse Cry_Hitmontop
.endif @ P_GEN_2_CROSS_EVOS
.endif @ P_FAMILY_HITMONS
.if P_FAMILY_LICKITUNG == TRUE
	cry_reverse Cry_Lickitung
.if P_GEN_4_CROSS_EVOS == TRUE
	cry_reverse Cry_Lickilicky
.endif @ P_GEN_4_CROSS_EVOS
.endif @ P_FAMILY_LICKITUNG
.if P_FAMILY_KOFFING == TRUE
	cry_reverse Cry_Koffing
	cry_reverse Cry_Weezing
.endif @ P_FAMILY_KOFFING
.if P_FAMILY_RHYHORN == TRUE
	cry_reverse Cry_Rhyhorn
	cry_reverse Cry_Rhydon
.if P_GEN_4_CROSS_EVOS == TRUE
	cry_reverse Cry_Rhyperior
.endif @ P_GEN_4_CROSS_EVOS
.endif @ P_FAMILY_RHYHORN
.if P_FAMILY_CHANSEY == TRUE
.if P_GEN_4_CROSS_EVOS == TRUE
	cry_reverse Cry_Happiny
.endif @ P_GEN_4_CROSS_EVOS
	cry_reverse Cry_Chansey
.if P_GEN_2_CROSS_EVOS == TRUE
	cry_reverse Cry_Blissey
.endif @ P_GEN_2_CROSS_EVOS
.endif @ P_FAMILY_CHANSEY
.if P_FAMILY_TANGELA == TRUE
	cry_reverse Cry_Tangela
.if P_GEN_4_CROSS_EVOS == TRUE
	cry_reverse Cry_Tangrowth
.endif @ P_GEN_4_CROSS_EVOS
.endif @ P_FAMILY_TANGELA
.if P_FAMILY_KANGASKHAN == TRUE
	cry_reverse Cry_Kangaskhan
.if P_MEGA_EVOLUTIONS == TRUE
	cry_reverse Cry_KangaskhanMega
.endif @ P_MEGA_EVOLUTIONS
.endif @ P_FAMILY_KANGASKHAN
.if P_FAMILY_HORSEA == TRUE
	cry_reverse Cry_Horsea
	cry_reverse Cry_Seadra
.if P_GEN_2_CROSS_EVOS == TRUE
	cry_reverse Cry_Kingdra
.endif @ P_GEN_2_CROSS_EVOS
.endif @ P_FAMILY_HORSEA
.if P_FAMILY_GOLDEEN == TRUE
	cry_reverse Cry_Goldeen
	cry_reverse Cry_Seaking
.endif @ P_FAMILY_GOLDEEN
.if P_FAMILY_STARYU == TRUE
	cry_reverse Cry_Staryu
	cry_reverse Cry_Starmie
.endif @ P_FAMILY_STARYU
.if P_FAMILY_MR_MIME == TRUE
.if P_GEN_4_CROSS_EVOS == TRUE
	cry_reverse Cry_MimeJr
.endif @ P_GEN_4_CROSS_EVOS
	cry_reverse Cry_MrMime
.if P_GALARIAN_FORMS == TRUE
	cry_reverse Cry_MrRime
.endif @ P_GALARIAN_FORMS
.endif @ P_FAMILY_MR_MIME
.if P_FAMILY_SCYTHER == TRUE
	cry_reverse Cry_Scyther
.if P_GEN_2_CROSS_EVOS == TRUE
	cry_reverse Cry_Scizor
.if P_MEGA_EVOLUTIONS == TRUE
	cry_reverse Cry_ScizorMega
.endif @ P_MEGA_EVOLUTIONS
.endif @ P_GEN_2_CROSS_EVOS
.if P_GEN_8_CROSS_EVOS == TRUE
	cry_reverse Cry_Kleavor
.endif @ P_GEN_8_CROSS_EVOS
.endif @ P_FAMILY_SCYTHER
.if P_FAMILY_JYNX == TRUE
.if P_GEN_2_CROSS_EVOS == TRUE
	cry_reverse Cry_Smoochum
.endif @ P_GEN_2_CROSS_EVOS
	cry_reverse Cry_Jynx
.endif @ P_FAMILY_JYNX
.if P_FAMILY_ELECTABUZZ == TRUE
.if P_GEN_2_CROSS_EVOS == TRUE
	cry_reverse Cry_Elekid
.endif @ P_GEN_2_CROSS_EVOS
	cry_reverse Cry_Electabuzz
.if P_GEN_4_CROSS_EVOS == TRUE
	cry_reverse Cry_Electivire
.endif @ P_GEN_4_CROSS_EVOS
.endif @ P_FAMILY_ELECTABUZZ
.if P_FAMILY_MAGMAR == TRUE
.if P_GEN_2_CROSS_EVOS == TRUE
	cry_reverse Cry_Magby
.endif @ P_GEN_2_CROSS_EVOS
	cry_reverse Cry_Magmar
.if P_GEN_4_CROSS_EVOS == TRUE
	cry_reverse Cry_Magmortar
.endif @ P_GEN_4_CROSS_EVOS
.endif @ P_FAMILY_MAGMAR
.if P_FAMILY_PINSIR == TRUE
	cry_reverse Cry_Pinsir
.if P_MEGA_EVOLUTIONS == TRUE
	cry_reverse Cry_PinsirMega
.endif @ P_MEGA_EVOLUTIONS
.endif @ P_FAMILY_PINSIR
.if P_FAMILY_TAUROS == TRUE
	cry_reverse Cry_Tauros
.endif @ P_FAMILY_TAUROS
.if P_FAMILY_MAGIKARP == TRUE
	cry_reverse Cry_Magikarp
	cry_reverse Cry_Gyarados
.if P_MEGA_EVOLUTIONS == TRUE
	cry_reverse Cry_GyaradosMega
.endif @ P_MEGA_EVOLUTIONS
.endif @ P_FAMILY_MAGIKARP
.if P_FAMILY_LAPRAS == TRUE
	cry_reverse Cry_Lapras
.endif @ P_FAMILY_LAPRAS
.if P_FAMILY_DITTO == TRUE
	cry_reverse Cry_Ditto
.endif @ P_FAMILY_DITTO
.if P_FAMILY_EEVEE == TRUE
	cry_reverse Cry_Eevee
	cry_reverse Cry_Vaporeon
	cry_reverse Cry_Jolteon
	cry_reverse Cry_Flareon
.if P_GEN_2_CROSS_EVOS == TRUE
	cry_reverse Cry_Espeon
	cry_reverse Cry_Umbreon
.endif @ P_GEN_2_CROSS_EVOS
.if P_GEN_4_CROSS_EVOS == TRUE
	cry_reverse Cry_Leafeon
	cry_reverse Cry_Glaceon
.endif @ P_GEN_4_CROSS_EVOS
.if P_GEN_6_CROSS_EVOS == TRUE
	cry_reverse Cry_Sylveon
.endif @ P_GEN_6_CROSS_EVOS
.endif @ P_FAMILY_EEVEE
.if P_FAMILY_PORYGON == TRUE
	cry_reverse Cry_Porygon
.if P_GEN_2_CROSS_EVOS == TRUE
	cry_reverse Cry_Porygon2
.if P_GEN_4_CROSS_EVOS == TRUE
	cry_reverse Cry_PorygonZ
.endif @ P_GEN_4_CROSS_EVOS
.endif @ P_GEN_2_CROSS_EVOS
.endif @ P_FAMILY_PORYGON
.if P_FAMILY_OMANYTE == TRUE
	cry_reverse Cry_Omanyte
	cry_reverse Cry_Omastar
.endif @ P_FAMILY_OMANYTE
.if P_FAMILY_KABUTO == TRUE
	cry_reverse Cry_Kabuto
	cry_reverse Cry_Kabutops
.endif @ P_FAMILY_KABUTO
.if P_FAMILY_AERODACTYL == TRUE
	cry_reverse Cry_Aerodactyl
.if P_MEGA_EVOLUTIONS == TRUE
	cry_reverse Cry_AerodactylMega
.endif @ P_MEGA_EVOLUTIONS
.endif @ P_FAMILY_AERODACTYL
.if P_FAMILY_SNORLAX == TRUE
.if P_GEN_4_CROSS_EVOS == TRUE
	cry_reverse Cry_Munchlax
.endif @ P_GEN_4_CROSS_EVOS
	cry_reverse Cry_Snorlax
.endif @ P_FAMILY_SNORLAX
.if P_FAMILY_ARTICUNO == TRUE
	cry_reverse Cry_Articuno
.endif @ P_FAMILY_ARTICUNO
.if P_FAMILY_ZAPDOS == TRUE
	cry_reverse Cry_Zapdos
.endif @ P_FAMILY_ZAPDOS
.if P_FAMILY_MOLTRES == TRUE
	cry_reverse Cry_Moltres
.endif @ P_FAMILY_MOLTRES
.if P_FAMILY_DRATINI == TRUE
	cry_reverse Cry_Dratini
	cry_reverse Cry_Dragonair
	cry_reverse Cry_Dragonite
.endif @ P_FAMILY_DRATINI
.if P_FAMILY_MEWTWO == TRUE
	cry_reverse Cry_Mewtwo
.if P_MEGA_EVOLUTIONS == TRUE
	cry_reverse Cry_MewtwoMegaX
	cry_reverse Cry_MewtwoMegaY
.endif @ P_MEGA_EVOLUTIONS
.endif @ P_FAMILY_MEWTWO
.if P_FAMILY_MEW == TRUE
	cry_reverse Cry_Mew
.endif @ P_FAMILY_MEW
.if P_FAMILY_CHIKORITA == TRUE
	cry_reverse Cry_Chikorita
	cry_reverse Cry_Bayleef
	cry_reverse Cry_Meganium
.endif @ P_FAMILY_CHIKORITA
.if P_FAMILY_CYNDAQUIL == TRUE
	cry_reverse Cry_Cyndaquil
	cry_reverse Cry_Quilava
	cry_reverse Cry_Typhlosion
.endif @ P_FAMILY_CYNDAQUIL
.if P_FAMILY_TOTODILE == TRUE
	cry_reverse Cry_Totodile
	cry_reverse Cry_Croconaw
	cry_reverse Cry_Feraligatr
.endif @ P_FAMILY_TOTODILE
.if P_FAMILY_SENTRET == TRUE
	cry_reverse Cry_Sentret
	cry_reverse Cry_Furret
.endif @ P_FAMILY_SENTRET
.if P_FAMILY_HOOTHOOT == TRUE
	cry_reverse Cry_Hoothoot
	cry_reverse Cry_Noctowl
.endif @ P_FAMILY_HOOTHOOT
.if P_FAMILY_LEDYBA == TRUE
	cry_reverse Cry_Ledyba
	cry_reverse Cry_Ledian
.endif @ P_FAMILY_LEDYBA
.if P_FAMILY_SPINARAK == TRUE
	cry_reverse Cry_Spinarak
	cry_reverse Cry_Ariados
.endif @ P_FAMILY_SPINARAK
.if P_FAMILY_CHINCHOU == TRUE
	cry_reverse Cry_Chinchou
	cry_reverse Cry_Lanturn
.endif @ P_FAMILY_CHINCHOU
.if P_FAMILY_TOGEPI == TRUE
	cry_reverse Cry_Togepi
	cry_reverse Cry_Togetic
.if P_GEN_4_CROSS_EVOS == TRUE
	cry_reverse Cry_Togekiss
.endif @ P_GEN_4_CROSS_EVOS
.endif @ P_FAMILY_TOGEPI
.if P_FAMILY_NATU == TRUE
	cry_reverse Cry_Natu
	cry_reverse Cry_Xatu
.endif @ P_FAMILY_NATU
.if P_FAMILY_MAREEP == TRUE
	cry_reverse Cry_Mareep
	cry_reverse Cry_Flaaffy
	cry_reverse Cry_Ampharos
.if P_MEGA_EVOLUTIONS == TRUE
	cry_reverse Cry_AmpharosMega
.endif @ P_MEGA_EVOLUTIONS
.endif @ P_FAMILY_MAREEP
.if P_FAMILY_MARILL == TRUE
.if P_GEN_3_CROSS_EVOS == TRUE
	cry_reverse Cry_Azurill
.endif @ P_GEN_3_CROSS_EVOS
	cry_reverse Cry_Marill
	cry_reverse Cry_Azumarill
.endif @ P_FAMILY_MARILL
.if P_FAMILY_SUDOWOODO == TRUE
	cry_reverse Cry_Bonsly
	cry_reverse Cry_Sudowoodo
.endif @ P_FAMILY_SUDOWOODO
.if P_FAMILY_HOPPIP == TRUE
	cry_reverse Cry_Hoppip
	cry_reverse Cry_Skiploom
	cry_reverse Cry_Jumpluff
.endif @ P_FAMILY_HOPPIP
.if P_FAMILY_AIPOM == TRUE
	cry_reverse Cry_Aipom
	cry_reverse Cry_Ambipom
.endif @ P_FAMILY_AIPOM
.if P_FAMILY_SUNKERN == TRUE
	cry_reverse Cry_Sunkern
	cry_reverse Cry_Sunflora
.endif @ P_FAMILY_SUNKERN
.if P_FAMILY_YANMA == TRUE
	cry_reverse Cry_Yanma
.if P_GEN_4_CROSS_EVOS == TRUE
	cry_reverse Cry_Yanmega
.endif @ P_GEN_4_CROSS_EVOS
.endif @ P_FAMILY_YANMA
.if P_FAMILY_WOOPER == TRUE
	cry_reverse Cry_Wooper
	cry_reverse Cry_Quagsire
.if P_PALDEAN_FORMS == TRUE
	cry_reverse Cry_Clodsire
.endif @ P_PALDEAN_FORMS
.endif @ P_FAMILY_WOOPER
.if P_FAMILY_MURKROW == TRUE
	cry_reverse Cry_Murkrow
	cry_reverse Cry_Honchkrow
.endif @ P_FAMILY_MURKROW
.if P_FAMILY_MISDREAVUS == TRUE
	cry_reverse Cry_Misdreavus
	cry_reverse Cry_Mismagius
.endif @ P_FAMILY_MISDREAVUS
.if P_FAMILY_UNOWN == TRUE
	cry_reverse Cry_Unown
.endif @ P_FAMILY_UNOWN
.if P_FAMILY_WOBBUFFET == TRUE
.if P_GEN_3_CROSS_EVOS == TRUE
	cry_reverse Cry_Wynaut
.endif @ P_GEN_3_CROSS_EVOS
	cry_reverse Cry_Wobbuffet
.endif @ P_FAMILY_WOBBUFFET
.if P_FAMILY_GIRAFARIG == TRUE
	cry_reverse Cry_Girafarig
.if P_GEN_9_CROSS_EVOS == TRUE
	cry_reverse Cry_Farigiraf
.endif @ P_GEN_9_CROSS_EVOS
.endif @ P_FAMILY_GIRAFARIG
.if P_FAMILY_PINECO == TRUE
	cry_reverse Cry_Pineco
	cry_reverse Cry_Forretress
.endif @ P_FAMILY_PINECO
.if P_FAMILY_DUNSPARCE == TRUE
	cry_reverse Cry_Dunsparce
.if P_GEN_9_CROSS_EVOS == TRUE
	cry_reverse Cry_Dudunsparce
.endif @ P_GEN_9_CROSS_EVOS
.endif @ P_FAMILY_DUNSPARCE
.if P_FAMILY_GLIGAR == TRUE
	cry_reverse Cry_Gligar
.if P_GEN_4_CROSS_EVOS == TRUE
	cry_reverse Cry_Gliscor
.endif @ P_GEN_4_CROSS_EVOS
.endif @ P_FAMILY_GLIGAR
.if P_FAMILY_SNUBBULL == TRUE
	cry_reverse Cry_Snubbull
	cry_reverse Cry_Granbull
.endif @ P_FAMILY_SNUBBULL
.if P_FAMILY_QWILFISH == TRUE
	cry_reverse Cry_Qwilfish
.if P_HISUIAN_FORMS == TRUE
	cry_reverse Cry_Overqwil
.endif @ P_HISUIAN_FORMS
.endif @ P_FAMILY_QWILFISH
.if P_FAMILY_SHUCKLE == TRUE
	cry_reverse Cry_Shuckle
.endif @ P_FAMILY_SHUCKLE
.if P_FAMILY_HERACROSS == TRUE
	cry_reverse Cry_Heracross
.if P_MEGA_EVOLUTIONS == TRUE
	cry_reverse Cry_HeracrossMega
.endif @ P_MEGA_EVOLUTIONS
.endif @ P_FAMILY_HERACROSS
.if P_FAMILY_SNEASEL == TRUE
	cry_reverse Cry_Sneasel
.if P_GEN_4_CROSS_EVOS == TRUE
	cry_reverse Cry_Weavile
.endif @ P_GEN_4_CROSS_EVOS
.if P_HISUIAN_FORMS == TRUE
	cry_reverse Cry_Sneasler
.endif @ P_HISUIAN_FORMS
.endif @ P_FAMILY_SNEASEL
.if P_FAMILY_TEDDIURSA == TRUE
	cry_reverse Cry_Teddiursa
	cry_reverse Cry_Ursaring
.if P_GEN_8_CROSS_EVOS == TRUE
	cry_reverse Cry_Ursaluna
.endif @ P_GEN_8_CROSS_EVOS
.endif @ P_FAMILY_TEDDIURSA
.if P_FAMILY_SLUGMA == TRUE
	cry_reverse Cry_Slugma
	cry_reverse Cry_Magcargo
.endif @ P_FAMILY_SLUGMA
.if P_FAMILY_SWINUB == TRUE
	cry_reverse Cry_Swinub
	cry_reverse Cry_Piloswine
.if P_GEN_4_CROSS_EVOS == TRUE
	cry_reverse Cry_Mamoswine
.endif @ P_GEN_4_CROSS_EVOS
.endif @ P_FAMILY_SWINUB
.if P_FAMILY_CORSOLA == TRUE
	cry_reverse Cry_Corsola
.if P_GALARIAN_FORMS == TRUE
	cry_reverse Cry_Cursola
.endif @ P_GALARIAN_FORMS
.endif @ P_FAMILY_CORSOLA
.if P_FAMILY_REMORAID == TRUE
	cry_reverse Cry_Remoraid
	cry_reverse Cry_Octillery
.endif @ P_FAMILY_REMORAID
.if P_FAMILY_DELIBIRD == TRUE
	cry_reverse Cry_Delibird
.endif @ P_FAMILY_DELIBIRD
.if P_FAMILY_MANTINE == TRUE
.if P_GEN_4_CROSS_EVOS == TRUE
	cry_reverse Cry_Mantyke
.endif @ P_GEN_4_CROSS_EVOS
	cry_reverse Cry_Mantine
.endif @ P_FAMILY_MANTINE
.if P_FAMILY_SKARMORY == TRUE
	cry_reverse Cry_Skarmory
.endif @ P_FAMILY_SKARMORY
.if P_FAMILY_HOUNDOUR == TRUE
	cry_reverse Cry_Houndour
	cry_reverse Cry_Houndoom
.if P_MEGA_EVOLUTIONS == TRUE
	cry_reverse Cry_HoundoomMega
.endif @ P_MEGA_EVOLUTIONS
.endif @ P_FAMILY_HOUNDOUR
.if P_FAMILY_PHANPY == TRUE
	cry_reverse Cry_Phanpy
	cry_reverse Cry_Donphan
.endif @ P_FAMILY_PHANPY
.if P_FAMILY_STANTLER == TRUE
	cry_reverse Cry_Stantler
.if P_GEN_8_CROSS_EVOS == TRUE
	cry_reverse Cry_Wyrdeer
.endif @ P_GEN_8_CROSS_EVOS
.endif @ P_FAMILY_STANTLER
.if P_FAMILY_SMEARGLE == TRUE
	cry_reverse Cry_Smeargle
.endif @ P_FAMILY_SMEARGLE
.if P_FAMILY_MILTANK == TRUE
	cry_reverse Cry_Miltank
.endif @ P_FAMILY_MILTANK
.if P_FAMILY_RAIKOU == TRUE
	cry_reverse Cry_Raikou
.endif @ P_FAMILY_RAIKOU
.if P_FAMILY_ENTEI == TRUE
	cry_reverse Cry_Entei
.endif @ P_FAMILY_ENTEI
.if P_FAMILY_SUICUNE == TRUE
	cry_reverse Cry_Suicune
.endif @ P_FAMILY_SUICUNE
.if P_FAMILY_LARVITAR == TRUE
	cry_reverse Cry_Larvitar
	cry_reverse Cry_Pupitar
	cry_reverse Cry_Tyranitar
.if P_MEGA_EVOLUTIONS == TRUE
	cry_reverse Cry_TyranitarMega
.endif @ P_MEGA_EVOLUTIONS
.endif @ P_FAMILY_LARVITAR
.if P_FAMILY_LUGIA == TRUE
	cry_reverse Cry_Lugia
.endif @ P_FAMILY_LUGIA
.if P_FAMILY_HO_OH == TRUE
	cry_reverse Cry_HoOh
.endif @ P_FAMILY_HO_OH
.if P_FAMILY_CELEBI == TRUE
	cry_reverse Cry_Celebi
.endif @ P_FAMILY_CELEBI
.if P_FAMILY_TREECKO == TRUE
	cry_reverse Cry_Treecko
	cry_reverse Cry_Grovyle
	cry_reverse Cry_Sceptile
.if P_MEGA_EVOLUTIONS == TRUE
	cry_reverse Cry_SceptileMega
.endif @ P_MEGA_EVOLUTIONS
.endif @ P_FAMILY_TREECKO
.if P_FAMILY_TORCHIC == TRUE
	cry_reverse Cry_Torchic
	cry_reverse Cry_Combusken
	cry_reverse Cry_Blaziken
.if P_MEGA_EVOLUTIONS == TRUE
	cry_reverse Cry_BlazikenMega
.endif @ P_MEGA_EVOLUTIONS
.endif @ P_FAMILY_TORCHIC
.if P_FAMILY_MUDKIP == TRUE
	cry_reverse Cry_Mudkip
	cry_reverse Cry_Marshtomp
	cry_reverse Cry_Swampert
.if P_MEGA_EVOLUTIONS == TRUE
	cry_reverse Cry_SwampertMega
.endif @ P_MEGA_EVOLUTIONS
.endif @ P_FAMILY_MUDKIP
.if P_FAMILY_POOCHYENA == TRUE
	cry_reverse Cry_Poochyena
	cry_reverse Cry_Mightyena
.endif @ P_FAMILY_POOCHYENA
.if P_FAMILY_ZIGZAGOON == TRUE
	cry_reverse Cry_Zigzagoon
	cry_reverse Cry_Linoone
.if P_GALARIAN_FORMS == TRUE
	cry_reverse Cry_Obstagoon
.endif @ P_GALARIAN_FORMS
.endif @ P_FAMILY_ZIGZAGOON
.if P_FAMILY_WURMPLE == TRUE
	cry_reverse Cry_Wurmple
	cry_reverse Cry_Silcoon
	cry_reverse Cry_Beautifly
	cry_reverse Cry_Cascoon
	cry_reverse Cry_Dustox
.endif @ P_FAMILY_WURMPLE
.if P_FAMILY_LOTAD == TRUE
	cry_reverse Cry_Lotad
	cry_reverse Cry_Lombre
	cry_reverse Cry_Ludicolo
.endif @ P_FAMILY_LOTAD
.if P_FAMILY_SEEDOT == TRUE
	cry_reverse Cry_Seedot
	cry_reverse Cry_Nuzleaf
	cry_reverse Cry_Shiftry
.endif @ P_FAMILY_SEEDOT
.if P_FAMILY_TAILLOW == TRUE
	cry_reverse Cry_Taillow
	cry_reverse Cry_Swellow
.endif @ P_FAMILY_TAILLOW
.if P_FAMILY_WINGULL == TRUE
	cry_reverse Cry_Wingull
	cry_reverse Cry_Pelipper
.endif @ P_FAMILY_WINGULL
.if P_FAMILY_RALTS == TRUE
	cry_reverse Cry_Ralts
	cry_reverse Cry_Kirlia
	cry_reverse Cry_Gardevoir
.if P_MEGA_EVOLUTIONS == TRUE
	cry_reverse Cry_GardevoirMega
.endif @ P_MEGA_EVOLUTIONS
.if P_GEN_4_CROSS_EVOS == TRUE
	cry_reverse Cry_Gallade
.if P_MEGA_EVOLUTIONS == TRUE
	cry_reverse Cry_GalladeMega
.endif @ P_MEGA_EVOLUTIONS
.endif @ P_GEN_4_CROSS_EVOS
.endif @ P_FAMILY_RALTS
.if P_FAMILY_SURSKIT == TRUE
	cry_reverse Cry_Surskit
	cry_reverse Cry_Masquerain
.endif @ P_FAMILY_SURSKIT
.if P_FAMILY_SHROOMISH == TRUE
	cry_reverse Cry_Shroomish
	cry_reverse Cry_Breloom
.endif @ P_FAMILY_SHROOMISH
.if P_FAMILY_SLAKOTH == TRUE
	cry_reverse Cry_Slakoth
	cry_reverse Cry_Vigoroth
	cry_reverse Cry_Slaking
.endif @ P_FAMILY_SLAKOTH
.if P_FAMILY_NINCADA == TRUE
	cry_reverse Cry_Nincada
	cry_reverse Cry_Ninjask
	cry_reverse Cry_Shedinja
.endif @ P_FAMILY_NINCADA
.if P_FAMILY_WHISMUR == TRUE
	cry_reverse Cry_Whismur
	cry_reverse Cry_Loudred
	cry_reverse Cry_Exploud
.endif @ P_FAMILY_WHISMUR
.if P_FAMILY_MAKUHITA == TRUE
	cry_reverse Cry_Makuhita
	cry_reverse Cry_Hariyama
.endif @ P_FAMILY_MAKUHITA
.if P_FAMILY_NOSEPASS == TRUE
	cry_reverse Cry_Nosepass
.if P_GEN_4_CROSS_EVOS == TRUE
	cry_reverse Cry_Probopass
.endif @ P_GEN_4_CROSS_EVOS
.endif @ P_FAMILY_NOSEPASS
.if P_FAMILY_SKITTY == TRUE
	cry_reverse Cry_Skitty
	cry_reverse Cry_Delcatty
.endif @ P_FAMILY_SKITTY
.if P_FAMILY_SABLEYE == TRUE
	cry_reverse Cry_Sableye
.if P_MEGA_EVOLUTIONS == TRUE
	cry_reverse Cry_SableyeMega
.endif @ P_MEGA_EVOLUTIONS
.endif @ P_FAMILY_SABLEYE
.if P_FAMILY_MAWILE == TRUE
	cry_reverse Cry_Mawile
.if P_MEGA_EVOLUTIONS == TRUE
	cry_reverse Cry_MawileMega
.endif @ P_MEGA_EVOLUTIONS
.endif @ P_FAMILY_MAWILE
.if P_FAMILY_ARON == TRUE
	cry_reverse Cry_Aron
	cry_reverse Cry_Lairon
	cry_reverse Cry_Aggron
.if P_MEGA_EVOLUTIONS == TRUE
	cry_reverse Cry_AggronMega
.endif @ P_MEGA_EVOLUTIONS
.endif @ P_FAMILY_ARON
.if P_FAMILY_MEDITITE == TRUE
	cry_reverse Cry_Meditite
	cry_reverse Cry_Medicham
.if P_MEGA_EVOLUTIONS == TRUE
	cry_reverse Cry_MedichamMega
.endif @ P_MEGA_EVOLUTIONS
.endif @ P_FAMILY_MEDITITE
.if P_FAMILY_ELECTRIKE == TRUE
	cry_reverse Cry_Electrike
	cry_reverse Cry_Manectric
.if P_MEGA_EVOLUTIONS == TRUE
	cry_reverse Cry_ManectricMega
.endif @ P_MEGA_EVOLUTIONS
.endif @ P_FAMILY_ELECTRIKE
.if P_FAMILY_PLUSLE == TRUE
	cry_reverse Cry_Plusle
.endif @ P_FAMILY_PLUSLE
.if P_FAMILY_MINUN == TRUE
	cry_reverse Cry_Minun
.endif @ P_FAMILY_MINUN
.if P_FAMILY_VOLBEAT_ILLUMISE == TRUE
	cry_reverse Cry_Volbeat
	cry_reverse Cry_Illumise
.endif @ P_FAMILY_VOLBEAT_ILLUMISE
.if P_FAMILY_ROSELIA == TRUE
.if P_GEN_4_CROSS_EVOS == TRUE
	cry_reverse Cry_Budew
.endif @ P_GEN_4_CROSS_EVOS
	cry_reverse Cry_Roselia
.if P_GEN_4_CROSS_EVOS == TRUE
	cry_reverse Cry_Roserade
.endif @ P_GEN_4_CROSS_EVOS
.endif @ P_FAMILY_ROSELIA
.if P_FAMILY_GULPIN == TRUE
	cry_reverse Cry_Gulpin
	cry_reverse Cry_Swalot
.endif @ P_FAMILY_GULPIN
.if P_FAMILY_CARVANHA == TRUE
	cry_reverse Cry_Carvanha
	cry_reverse Cry_Sharpedo
.if P_MEGA_EVOLUTIONS == TRUE
	cry_reverse Cry_SharpedoMega
.endif @ P_MEGA_EVOLUTIONS
.endif @ P_FAMILY_CARVANHA
.if P_FAMILY_WAILMER == TRUE
	cry_reverse Cry_Wailmer
	cry_reverse Cry_Wailord
.endif @ P_FAMILY_WAILMER
.if P_FAMILY_NUMEL == TRUE
	cry_reverse Cry_Numel
	cry_reverse Cry_Camerupt
.if P_MEGA_EVOLUTIONS == TRUE
	cry_reverse Cry_CameruptMega
.endif @ P_MEGA_EVOLUTIONS
.endif @ P_FAMILY_NUMEL
.if P_FAMILY_TORKOAL == TRUE
	cry_reverse Cry_Torkoal
.endif @ P_FAMILY_TORKOAL
.if P_FAMILY_SPOINK == TRUE
	cry_reverse Cry_Spoink
	cry_reverse Cry_Grumpig
.endif @ P_FAMILY_SPOINK
.if P_FAMILY_SPINDA == TRUE
	cry_reverse Cry_Spinda
.endif @ P_FAMILY_SPINDA
.if P_FAMILY_TRAPINCH == TRUE
	cry_reverse Cry_Trapinch
	cry_reverse Cry_Vibrava
	cry_reverse Cry_Flygon
.endif @ P_FAMILY_TRAPINCH
.if P_FAMILY_CACNEA == TRUE
	cry_reverse Cry_Cacnea
	cry_reverse Cry_Cacturne
.endif @ P_FAMILY_CACNEA
.if P_FAMILY_SWABLU == TRUE
	cry_reverse Cry_Swablu
	cry_reverse Cry_Altaria
.if P_MEGA_EVOLUTIONS == TRUE
	cry_reverse Cry_AltariaMega
.endif @ P_MEGA_EVOLUTIONS
.endif @ P_FAMILY_SWABLU
.if P_FAMILY_ZANGOOSE == TRUE
	cry_reverse Cry_Zangoose
.endif @ P_FAMILY_ZANGOOSE
.if P_FAMILY_SEVIPER == TRUE
	cry_reverse Cry_Seviper
.endif @ P_FAMILY_SEVIPER
.if P_FAMILY_LUNATONE == TRUE
	cry_reverse Cry_Lunatone
.endif @ P_FAMILY_LUNATONE
.if P_FAMILY_SOLROCK == TRUE
	cry_reverse Cry_Solrock
.endif @ P_FAMILY_SOLROCK
.if P_FAMILY_BARBOACH == TRUE
	cry_reverse Cry_Barboach
	cry_reverse Cry_Whiscash
.endif @ P_FAMILY_BARBOACH
.if P_FAMILY_CORPHISH == TRUE
	cry_reverse Cry_Corphish
	cry_reverse Cry_Crawdaunt
.endif @ P_FAMILY_CORPHISH
.if P_FAMILY_BALTOY == TRUE
	cry_reverse Cry_Baltoy
	cry_reverse Cry_Claydol
.endif @ P_FAMILY_BALTOY
.if P_FAMILY_LILEEP == TRUE
	cry_reverse Cry_Lileep
	cry_reverse Cry_Cradily
.endif @ P_FAMILY_LILEEP
.if P_FAMILY_ANORITH == TRUE
	cry_reverse Cry_Anorith
	cry_reverse Cry_Armaldo
.endif @ P_FAMILY_ANORITH
.if P_FAMILY_FEEBAS == TRUE
	cry_reverse Cry_Feebas
	cry_reverse Cry_Milotic
.endif @ P_FAMILY_FEEBAS
.if P_FAMILY_CASTFORM == TRUE
	cry_reverse Cry_Castform
.endif @ P_FAMILY_CASTFORM
.if P_FAMILY_KECLEON == TRUE
	cry_reverse Cry_Kecleon
.endif @ P_FAMILY_KECLEON
.if P_FAMILY_SHUPPET == TRUE
	cry_reverse Cry_Shuppet
	cry_reverse Cry_Banette
.if P_MEGA_EVOLUTIONS == TRUE
	cry_reverse Cry_BanetteMega
.endif @ P_MEGA_EVOLUTIONS
.endif @ P_FAMILY_SHUPPET
.if P_FAMILY_DUSKULL == TRUE
	cry_reverse Cry_Duskull
	cry_reverse Cry_Dusclops
.if P_GEN_4_CROSS_EVOS == TRUE
	cry_reverse Cry_Dusknoir
.endif @ P_GEN_4_CROSS_EVOS
.endif @ P_FAMILY_DUSKULL
.if P_FAMILY_TROPIUS == TRUE
	cry_reverse Cry_Tropius
.endif @ P_FAMILY_TROPIUS
.if P_FAMILY_CHIMECHO == TRUE
.if P_GEN_4_CROSS_EVOS == TRUE
	cry_reverse Cry_Chingling
.endif @ P_GEN_4_CROSS_EVOS
	cry_reverse Cry_Chimecho
.endif @ P_FAMILY_CHIMECHO
.if P_FAMILY_ABSOL == TRUE
	cry_reverse Cry_Absol
.if P_MEGA_EVOLUTIONS == TRUE
	cry_reverse Cry_AbsolMega
.endif @ P_MEGA_EVOLUTIONS
.endif @ P_FAMILY_ABSOL
.if P_FAMILY_SNORUNT == TRUE
	cry_reverse Cry_Snorunt
	cry_reverse Cry_Glalie
.if P_MEGA_EVOLUTIONS == TRUE
	cry_reverse Cry_GlalieMega
.endif @ P_MEGA_EVOLUTIONS
.if P_GEN_4_CROSS_EVOS == TRUE
	cry_reverse Cry_Froslass
.endif @ P_GEN_4_CROSS_EVOS
.endif @ P_FAMILY_SNORUNT
.if P_FAMILY_SPHEAL == TRUE
	cry_reverse Cry_Spheal
	cry_reverse Cry_Sealeo
	cry_reverse Cry_Walrein
.endif @ P_FAMILY_SPHEAL
.if P_FAMILY_CLAMPERL == TRUE
	cry_reverse Cry_Clamperl
	cry_reverse Cry_Huntail
	cry_reverse Cry_Gorebyss
.endif @ P_FAMILY_CLAMPERL
.if P_FAMILY_RELICANTH == TRUE
	cry_reverse Cry_Relicanth
.endif @ P_FAMILY_RELICANTH
.if P_FAMILY_LUVDISC == TRUE
	cry_reverse Cry_Luvdisc
.endif @ P_FAMILY_LUVDISC
.if P_FAMILY_BAGON == TRUE
	cry_reverse Cry_Bagon
	cry_reverse Cry_Shelgon
	cry_reverse Cry_Salamence
.if P_MEGA_EVOLUTIONS == TRUE
	cry_reverse Cry_SalamenceMega
.endif @ P_MEGA_EVOLUTIONS
.endif @ P_FAMILY_BAGON
.if P_FAMILY_BELDUM == TRUE
	cry_reverse Cry_Beldum
	cry_reverse Cry_Metang
	cry_reverse Cry_Metagross
.if P_MEGA_EVOLUTIONS == TRUE
	cry_reverse Cry_MetagrossMega
.endif @ P_MEGA_EVOLUTIONS
.endif @ P_FAMILY_BELDUM
.if P_FAMILY_REGIROCK == TRUE
	cry_reverse Cry_Regirock
.endif @ P_FAMILY_REGIROCK
.if P_FAMILY_REGICE == TRUE
	cry_reverse Cry_Regice
.endif @ P_FAMILY_REGICE
.if P_FAMILY_REGISTEEL == TRUE
	cry_reverse Cry_Registeel
.endif @ P_FAMILY_REGISTEEL
.if P_FAMILY_LATIAS == TRUE
	cry_reverse Cry_Latias
.if P_MEGA_EVOLUTIONS == TRUE
	cry_reverse Cry_LatiasMega
.endif @ P_MEGA_EVOLUTIONS
.endif @ P_FAMILY_LATIAS
.if P_FAMILY_LATIOS == TRUE
	cry_reverse Cry_Latios
.if P_MEGA_EVOLUTIONS == TRUE
	cry_reverse Cry_LatiosMega
.endif @ P_MEGA_EVOLUTIONS
.endif @ P_FAMILY_LATIOS
.if P_FAMILY_KYOGRE == TRUE
	cry_reverse Cry_Kyogre
.if P_PRIMAL_REVERSIONS == TRUE
	cry_reverse Cry_KyogrePrimal
.endif @ P_PRIMAL_REVERSIONS
.endif @ P_FAMILY_KYOGRE
.if P_FAMILY_GROUDON == TRUE
	cry_reverse Cry_Groudon
.if P_PRIMAL_REVERSIONS == TRUE
	cry_reverse Cry_GroudonPrimal
.endif @ P_PRIMAL_REVERSIONS
.endif @ P_FAMILY_GROUDON
.if P_FAMILY_RAYQUAZA == TRUE
	cry_reverse Cry_Rayquaza
.if P_MEGA_EVOLUTIONS == TRUE
	cry_reverse Cry_RayquazaMega
.endif @ P_MEGA_EVOLUTIONS
.endif @ P_FAMILY_RAYQUAZA
.if P_FAMILY_JIRACHI == TRUE
	cry_reverse Cry_Jirachi
.endif @ P_FAMILY_JIRACHI
.if P_FAMILY_DEOXYS == TRUE
	cry_reverse Cry_Deoxys
.endif @ P_FAMILY_DEOXYS
.if P_FAMILY_TURTWIG == TRUE
	cry_reverse Cry_Turtwig
	cry_reverse Cry_Grotle
	cry_reverse Cry_Torterra
.endif @ P_FAMILY_TURTWIG
.if P_FAMILY_CHIMCHAR == TRUE
	cry_reverse Cry_Chimchar
	cry_reverse Cry_Monferno
	cry_reverse Cry_Infernape
.endif @ P_FAMILY_CHIMCHAR
.if P_FAMILY_PIPLUP == TRUE
	cry_reverse Cry_Piplup
	cry_reverse Cry_Prinplup
	cry_reverse Cry_Empoleon
.endif @ P_FAMILY_PIPLUP
.if P_FAMILY_STARLY == TRUE
	cry_reverse Cry_Starly
	cry_reverse Cry_Staravia
	cry_reverse Cry_Staraptor
.endif @ P_FAMILY_STARLY
.if P_FAMILY_BIDOOF == TRUE
	cry_reverse Cry_Bidoof
	cry_reverse Cry_Bibarel
.endif @ P_FAMILY_BIDOOF
.if P_FAMILY_KRICKETOT == TRUE
	cry_reverse Cry_Kricketot
	cry_reverse Cry_Kricketune
.endif @ P_FAMILY_KRICKETOT
.if P_FAMILY_SHINX == TRUE
	cry_reverse Cry_Shinx
	cry_reverse Cry_Luxio
	cry_reverse Cry_Luxray
.endif @ P_FAMILY_SHINX
.if P_FAMILY_CRANIDOS == TRUE
	cry_reverse Cry_Cranidos
	cry_reverse Cry_Rampardos
.endif @ P_FAMILY_CRANIDOS
.if P_FAMILY_SHIELDON == TRUE
	cry_reverse Cry_Shieldon
	cry_reverse Cry_Bastiodon
.endif @ P_FAMILY_SHIELDON
.if P_FAMILY_BURMY == TRUE
	cry_reverse Cry_Burmy
	cry_reverse Cry_Wormadam
	cry_reverse Cry_Mothim
.endif @ P_FAMILY_BURMY
.if P_FAMILY_COMBEE == TRUE
	cry_reverse Cry_Combee
	cry_reverse Cry_Vespiquen
.endif @ P_FAMILY_COMBEE
.if P_FAMILY_PACHIRISU == TRUE
	cry_reverse Cry_Pachirisu
.endif @ P_FAMILY_PACHIRISU
.if P_FAMILY_BUIZEL == TRUE
	cry_reverse Cry_Buizel
	cry_reverse Cry_Floatzel
.endif @ P_FAMILY_BUIZEL
.if P_FAMILY_CHERUBI == TRUE
	cry_reverse Cry_Cherubi
	cry_reverse Cry_Cherrim
.endif @ P_FAMILY_CHERUBI
.if P_FAMILY_SHELLOS == TRUE
	cry_reverse Cry_Shellos
	cry_reverse Cry_Gastrodon
.endif @ P_FAMILY_SHELLOS
.if P_FAMILY_DRIFLOON == TRUE
	cry_reverse Cry_Drifloon
	cry_reverse Cry_Drifblim
.endif @ P_FAMILY_DRIFLOON
.if P_FAMILY_BUNEARY == TRUE
	cry_reverse Cry_Buneary
	cry_reverse Cry_Lopunny
.if P_MEGA_EVOLUTIONS == TRUE
	cry_reverse Cry_LopunnyMega
.endif @ P_MEGA_EVOLUTIONS
.endif @ P_FAMILY_BUNEARY
.if P_FAMILY_GLAMEOW == TRUE
	cry_reverse Cry_Glameow
	cry_reverse Cry_Purugly
.endif @ P_FAMILY_GLAMEOW
.if P_FAMILY_STUNKY == TRUE
	cry_reverse Cry_Stunky
	cry_reverse Cry_Skuntank
.endif @ P_FAMILY_STUNKY
.if P_FAMILY_BRONZOR == TRUE
	cry_reverse Cry_Bronzor
	cry_reverse Cry_Bronzong
.endif @ P_FAMILY_BRONZOR
.if P_FAMILY_CHATOT == TRUE
	cry_reverse Cry_Chatot
.endif @ P_FAMILY_CHATOT
.if P_FAMILY_SPIRITOMB == TRUE
	cry_reverse Cry_Spiritomb
.endif @ P_FAMILY_SPIRITOMB
.if P_FAMILY_GIBLE == TRUE
	cry_reverse Cry_Gible
	cry_reverse Cry_Gabite
	cry_reverse Cry_Garchomp
.if P_MEGA_EVOLUTIONS == TRUE
	cry_reverse Cry_GarchompMega
.endif @ P_MEGA_EVOLUTIONS
.endif @ P_FAMILY_GIBLE
.if P_FAMILY_RIOLU == TRUE
	cry_reverse Cry_Riolu
	cry_reverse Cry_Lucario
.if P_MEGA_EVOLUTIONS == TRUE
	cry_reverse Cry_LucarioMega
.endif @ P_MEGA_EVOLUTIONS
.endif @ P_FAMILY_RIOLU
.if P_FAMILY_HIPPOPOTAS == TRUE
	cry_reverse Cry_Hippopotas
	cry_reverse Cry_Hippowdon
.endif @ P_FAMILY_HIPPOPOTAS
.if P_FAMILY_SKORUPI == TRUE
	cry_reverse Cry_Skorupi
	cry_reverse Cry_Drapion
.endif @ P_FAMILY_SKORUPI
.if P_FAMILY_CROAGUNK == TRUE
	cry_reverse Cry_Croagunk
	cry_reverse Cry_Toxicroak
.endif @ P_FAMILY_CROAGUNK
.if P_FAMILY_CARNIVINE == TRUE
	cry_reverse Cry_Carnivine
.endif @ P_FAMILY_CARNIVINE
.if P_FAMILY_FINNEON == TRUE
	cry_reverse Cry_Finneon
	cry_reverse Cry_Lumineon
.endif @ P_FAMILY_FINNEON
.if P_FAMILY_SNOVER == TRUE
	cry_reverse Cry_Snover
	cry_reverse Cry_Abomasnow
.if P_MEGA_EVOLUTIONS == TRUE
	cry_reverse Cry_AbomasnowMega
.endif @ P_MEGA_EVOLUTIONS
.endif @ P_FAMILY_SNOVER
.if P_FAMILY_ROTOM == TRUE
	cry_reverse Cry_Rotom
.endif @ P_FAMILY_ROTOM
.if P_FAMILY_UXIE == TRUE
	cry_reverse Cry_Uxie
.endif @ P_FAMILY_UXIE
.if P_FAMILY_MESPRIT == TRUE
	cry_reverse Cry_Mesprit
.endif @ P_FAMILY_MESPRIT
.if P_FAMILY_AZELF == TRUE
	cry_reverse Cry_Azelf
.endif @ P_FAMILY_AZELF
.if P_FAMILY_DIALGA == TRUE
	cry_reverse Cry_Dialga
.endif @ P_FAMILY_DIALGA
.if P_FAMILY_PALKIA == TRUE
	cry_reverse Cry_Palkia
.endif @ P_FAMILY_PALKIA
.if P_FAMILY_HEATRAN == TRUE
	cry_reverse Cry_Heatran
.endif @ P_FAMILY_HEATRAN
.if P_FAMILY_REGIGIGAS == TRUE
	cry_reverse Cry_Regigigas
.endif @ P_FAMILY_REGIGIGAS
.if P_FAMILY_GIRATINA == TRUE
	cry_reverse Cry_Giratina
.endif @ P_FAMILY_GIRATINA
.if P_FAMILY_CRESSELIA == TRUE
	cry_reverse Cry_Cresselia
.endif @ P_FAMILY_CRESSELIA
.if P_FAMILY_MANAPHY == TRUE
	cry_reverse Cry_Phione
	cry_reverse Cry_Manaphy
.endif @ P_FAMILY_MANAPHY
.if P_FAMILY_DARKRAI == TRUE
	cry_reverse Cry_Darkrai
.endif @ P_FAMILY_DARKRAI
.if P_FAMILY_SHAYMIN == TRUE
	cry_reverse Cry_ShayminLand
	cry_reverse Cry_ShayminSky
.endif @ P_FAMILY_SHAYMIN
.if P_FAMILY_ARCEUS == TRUE
	cry_reverse Cry_Arceus
.endif @ P_FAMILY_ARCEUS
.if P_FAMILY_VICTINI == TRUE
	cry_reverse Cry_Victini
.endif @ P_FAMILY_VICTINI
.if P_FAMILY_SNIVY == TRUE
	cry_reverse Cry_Snivy
	cry_reverse Cry_Servine
	cry_reverse Cry_Serperior
.endif @ P_FAMILY_SNIVY
.if P_FAMILY_TEPIG == TRUE
	cry_reverse Cry_Tepig
	cry_reverse Cry_Pignite
	cry_reverse Cry_Emboar
.endif @ P_FAMILY_TEPIG
.if P_FAMILY_OSHAWOTT == TRUE
	cry_reverse Cry_Oshawott
	cry_reverse Cry_Dewott
	cry_reverse Cry_Samurott
.endif @ P_FAMILY_OSHAWOTT
.if P_FAMILY_PATRAT == TRUE
	cry_reverse Cry_Patrat
	cry_reverse Cry_Watchog
.endif @ P_FAMILY_PATRAT
.if P_FAMILY_LILLIPUP == TRUE
	cry_reverse Cry_Lillipup
	cry_reverse Cry_Herdier
	cry_reverse Cry_Stoutland
.endif @ P_FAMILY_LILLIPUP
.if P_FAMILY_PURRLOIN == TRUE
	cry_reverse Cry_Purrloin
	cry_reverse Cry_Liepard
.endif @ P_FAMILY_PURRLOIN
.if P_FAMILY_PANSAGE == TRUE
	cry_reverse Cry_Pansage
	cry_reverse Cry_Simisage
.endif @ P_FAMILY_PANSAGE
.if P_FAMILY_PANSEAR == TRUE
	cry_reverse Cry_Pansear
	cry_reverse Cry_Simisear
.endif @ P_FAMILY_PANSEAR
.if P_FAMILY_PANPOUR == TRUE
	cry_reverse Cry_Panpour
	cry_reverse Cry_Simipour
.endif @ P_FAMILY_PANPOUR
.if P_FAMILY_MUNNA == TRUE
	cry_reverse Cry_Munna
	cry_reverse Cry_Musharna
.endif @ P_FAMILY_MUNNA
.if P_FAMILY_PIDOVE == TRUE
	cry_reverse Cry_Pidove
	cry_reverse Cry_Tranquill
	cry_reverse Cry_Unfezant
.endif @ P_FAMILY_PIDOVE
.if P_FAMILY_BLITZLE == TRUE
	cry_reverse Cry_Blitzle
	cry_reverse Cry_Zebstrika
.endif @ P_FAMILY_BLITZLE
.if P_FAMILY_ROGGENROLA == TRUE
	cry_reverse Cry_Roggenrola
	cry_reverse Cry_Boldore
	cry_reverse Cry_Gigalith
.endif @ P_FAMILY_ROGGENROLA
.if P_FAMILY_WOOBAT == TRUE
	cry_reverse Cry_Woobat
	cry_reverse Cry_Swoobat
.endif @ P_FAMILY_WOOBAT
.if P_FAMILY_DRILBUR == TRUE
	cry_reverse Cry_Drilbur
	cry_reverse Cry_Excadrill
.endif @ P_FAMILY_DRILBUR
.if P_FAMILY_AUDINO == TRUE
	cry_reverse Cry_Audino
.if P_MEGA_EVOLUTIONS == TRUE
	cry_reverse Cry_AudinoMega
.endif @ P_MEGA_EVOLUTIONS
.endif @ P_FAMILY_AUDINO
.if P_FAMILY_TIMBURR == TRUE
	cry_reverse Cry_Timburr
	cry_reverse Cry_Gurdurr
	cry_reverse Cry_Conkeldurr
.endif @ P_FAMILY_TIMBURR
.if P_FAMILY_TYMPOLE == TRUE
	cry_reverse Cry_Tympole
	cry_reverse Cry_Palpitoad
	cry_reverse Cry_Seismitoad
.endif @ P_FAMILY_TYMPOLE
.if P_FAMILY_THROH == TRUE
	cry_reverse Cry_Throh
.endif @ P_FAMILY_THROH
.if P_FAMILY_SAWK == TRUE
	cry_reverse Cry_Sawk
.endif @ P_FAMILY_SAWK
.if P_FAMILY_SEWADDLE == TRUE
	cry_reverse Cry_Sewaddle
	cry_reverse Cry_Swadloon
	cry_reverse Cry_Leavanny
.endif @ P_FAMILY_SEWADDLE
.if P_FAMILY_VENIPEDE == TRUE
	cry_reverse Cry_Venipede
	cry_reverse Cry_Whirlipede
	cry_reverse Cry_Scolipede
.endif @ P_FAMILY_VENIPEDE
.if P_FAMILY_COTTONEE == TRUE
	cry_reverse Cry_Cottonee
	cry_reverse Cry_Whimsicott
.endif @ P_FAMILY_COTTONEE
.if P_FAMILY_PETILIL == TRUE
	cry_reverse Cry_Petilil
	cry_reverse Cry_Lilligant
.endif @ P_FAMILY_PETILIL
.if P_FAMILY_BASCULIN == TRUE
	cry_reverse Cry_Basculin
.if P_HISUIAN_FORMS == TRUE
	cry_reverse Cry_Basculegion
.endif @ P_HISUIAN_FORMS
.endif @ P_FAMILY_BASCULIN
.if P_FAMILY_SANDILE == TRUE
	cry_reverse Cry_Sandile
	cry_reverse Cry_Krokorok
	cry_reverse Cry_Krookodile
.endif @ P_FAMILY_SANDILE
.if P_FAMILY_DARUMAKA == TRUE
	cry_reverse Cry_Darumaka
	cry_reverse Cry_Darmanitan
.endif @ P_FAMILY_DARUMAKA
.if P_FAMILY_MARACTUS == TRUE
	cry_reverse Cry_Maractus
.endif @ P_FAMILY_MARACTUS
.if P_FAMILY_DWEBBLE == TRUE
	cry_reverse Cry_Dwebble
	cry_reverse Cry_Crustle
.endif @ P_FAMILY_DWEBBLE
.if P_FAMILY_SCRAGGY == TRUE
	cry_reverse Cry_Scraggy
	cry_reverse Cry_Scrafty
.endif @ P_FAMILY_SCRAGGY
.if P_FAMILY_SIGILYPH == TRUE
	cry_reverse Cry_Sigilyph
.endif @ P_FAMILY_SIGILYPH
.if P_FAMILY_YAMASK == TRUE
	cry_reverse Cry_Yamask
	cry_reverse Cry_Cofagrigus
.if P_GALARIAN_FORMS == TRUE
	cry_reverse Cry_Runerigus
.endif @ P_GALARIAN_FORMS
.endif @ P_FAMILY_YAMASK
.if P_FAMILY_TIRTOUGA == TRUE
	cry_reverse Cry_Tirtouga
	cry_reverse Cry_Carracosta
.endif @ P_FAMILY_TIRTOUGA
.if P_FAMILY_ARCHEN == TRUE
	cry_reverse Cry_Archen
	cry_reverse Cry_Archeops
.endif @ P_FAMILY_ARCHEN
.if P_FAMILY_TRUBBISH == TRUE
	cry_reverse Cry_Trubbish
	cry_reverse Cry_Garbodor
.endif @ P_FAMILY_TRUBBISH
.if P_FAMILY_ZORUA == TRUE
	cry_reverse Cry_Zorua
	cry_reverse Cry_Zoroark
.endif @ P_FAMILY_ZORUA
.if P_FAMILY_MINCCINO == TRUE
	cry_reverse Cry_Minccino
	cry_reverse Cry_Cinccino
.endif @ P_FAMILY_MINCCINO
.if P_FAMILY_GOTHITA == TRUE
	cry_reverse Cry_Gothita
	cry_reverse Cry_Gothorita
	cry_reverse Cry_Gothitelle
.endif @ P_FAMILY_GOTHITA
.if P_FAMILY_SOLOSIS == TRUE
	cry_reverse Cry_Solosis
	cry_reverse Cry_Duosion
	cry_reverse Cry_Reuniclus
.endif @ P_FAMILY_SOLOSIS
.if P_FAMILY_DUCKLETT == TRUE
	cry_reverse Cry_Ducklett
	cry_reverse Cry_Swanna
.endif @ P_FAMILY_DUCKLETT
.if P_FAMILY_VANILLITE == TRUE
	cry_reverse Cry_Vanillite
	cry_reverse Cry_Vanillish
	cry_reverse Cry_Vanilluxe
.endif @ P_FAMILY_VANILLITE
.if P_FAMILY_DEERLING == TRUE
	cry_reverse Cry_Deerling
	cry_reverse Cry_Sawsbuck
.endif @ P_FAMILY_DEERLING
.if P_FAMILY_EMOLGA == TRUE
	cry_reverse Cry_Emolga
.endif @ P_FAMILY_EMOLGA
.if P_FAMILY_KARRABLAST == TRUE
	cry_reverse Cry_Karrablast
	cry_reverse Cry_Escavalier
.endif @ P_FAMILY_KARRABLAST
.if P_FAMILY_FOONGUS == TRUE
	cry_reverse Cry_Foongus
	cry_reverse Cry_Amoonguss
.endif @ P_FAMILY_FOONGUS
.if P_FAMILY_FRILLISH == TRUE
	cry_reverse Cry_Frillish
	cry_reverse Cry_Jellicent
.endif @ P_FAMILY_FRILLISH
.if P_FAMILY_ALOMOMOLA == TRUE
	cry_reverse Cry_Alomomola
.endif @ P_FAMILY_ALOMOMOLA
.if P_FAMILY_JOLTIK == TRUE
	cry_reverse Cry_Joltik
	cry_reverse Cry_Galvantula
.endif @ P_FAMILY_JOLTIK
.if P_FAMILY_FERROSEED == TRUE
	cry_reverse Cry_Ferroseed
	cry_reverse Cry_Ferrothorn
.endif @ P_FAMILY_FERROSEED
.if P_FAMILY_KLINK == TRUE
	cry_reverse Cry_Klink
	cry_reverse Cry_Klang
	cry_reverse Cry_Klinklang
.endif @ P_FAMILY_KLINK
.if P_FAMILY_TYNAMO == TRUE
	cry_reverse Cry_Tynamo
	cry_reverse Cry_Eelektrik
	cry_reverse Cry_Eelektross
.endif @ P_FAMILY_TYNAMO
.if P_FAMILY_ELGYEM == TRUE
	cry_reverse Cry_Elgyem
	cry_reverse Cry_Beheeyem
.endif @ P_FAMILY_ELGYEM
.if P_FAMILY_LITWICK == TRUE
	cry_reverse Cry_Litwick
	cry_reverse Cry_Lampent
	cry_reverse Cry_Chandelure
.endif @ P_FAMILY_LITWICK
.if P_FAMILY_AXEW == TRUE
	cry_reverse Cry_Axew
	cry_reverse Cry_Fraxure
	cry_reverse Cry_Haxorus
.endif @ P_FAMILY_AXEW
.if P_FAMILY_CUBCHOO == TRUE
	cry_reverse Cry_Cubchoo
	cry_reverse Cry_Beartic
.endif @ P_FAMILY_CUBCHOO
.if P_FAMILY_CRYOGONAL == TRUE
	cry_reverse Cry_Cryogonal
.endif @ P_FAMILY_CRYOGONAL
.if P_FAMILY_SHELMET == TRUE
	cry_reverse Cry_Shelmet
	cry_reverse Cry_Accelgor
.endif @ P_FAMILY_SHELMET
.if P_FAMILY_STUNFISK == TRUE
	cry_reverse Cry_Stunfisk
.endif @ P_FAMILY_STUNFISK
.if P_FAMILY_MIENFOO == TRUE
	cry_reverse Cry_Mienfoo
	cry_reverse Cry_Mienshao
.endif @ P_FAMILY_MIENFOO
.if P_FAMILY_DRUDDIGON == TRUE
	cry_reverse Cry_Druddigon
.endif @ P_FAMILY_DRUDDIGON
.if P_FAMILY_GOLETT == TRUE
	cry_reverse Cry_Golett
	cry_reverse Cry_Golurk
.endif @ P_FAMILY_GOLETT
.if P_FAMILY_PAWNIARD == TRUE
	cry_reverse Cry_Pawniard
	cry_reverse Cry_Bisharp
.if P_GEN_9_CROSS_EVOS == TRUE
	cry_reverse Cry_Kingambit
.endif @ P_GEN_9_CROSS_EVOS
.endif @ P_FAMILY_PAWNIARD
.if P_FAMILY_BOUFFALANT == TRUE
	cry_reverse Cry_Bouffalant
.endif @ P_FAMILY_BOUFFALANT
.if P_FAMILY_RUFFLET == TRUE
	cry_reverse Cry_Rufflet
	cry_reverse Cry_Braviary
.endif @ P_FAMILY_RUFFLET
.if P_FAMILY_VULLABY == TRUE
	cry_reverse Cry_Vullaby
	cry_reverse Cry_Mandibuzz
.endif @ P_FAMILY_VULLABY
.if P_FAMILY_HEATMOR == TRUE
	cry_reverse Cry_Heatmor
.endif @ P_FAMILY_HEATMOR
.if P_FAMILY_DURANT == TRUE
	cry_reverse Cry_Durant
.endif @ P_FAMILY_DURANT
.if P_FAMILY_DEINO == TRUE
	cry_reverse Cry_Deino
	cry_reverse Cry_Zweilous
	cry_reverse Cry_Hydreigon
.endif @ P_FAMILY_DEINO
.if P_FAMILY_LARVESTA == TRUE
	cry_reverse Cry_Larvesta
	cry_reverse Cry_Volcarona
.endif @ P_FAMILY_LARVESTA
.if P_FAMILY_COBALION == TRUE
	cry_reverse Cry_Cobalion
.endif @ P_FAMILY_COBALION
.if P_FAMILY_TERRAKION == TRUE
	cry_reverse Cry_Terrakion
.endif @ P_FAMILY_TERRAKION
.if P_FAMILY_VIRIZION == TRUE
	cry_reverse Cry_Virizion
.endif @ P_FAMILY_VIRIZION
.if P_FAMILY_TORNADUS == TRUE
	cry_reverse Cry_TornadusIncarnate
	cry_reverse Cry_TornadusTherian
.endif @ P_FAMILY_TORNADUS
.if P_FAMILY_THUNDURUS == TRUE
	cry_reverse Cry_ThundurusIncarnate
	cry_reverse Cry_ThundurusTherian
.endif @ P_FAMILY_THUNDURUS
.if P_FAMILY_RESHIRAM == TRUE
	cry_reverse Cry_Reshiram
.endif @ P_FAMILY_RESHIRAM
.if P_FAMILY_ZEKROM == TRUE
	cry_reverse Cry_Zekrom
.endif @ P_FAMILY_ZEKROM
.if P_FAMILY_LANDORUS == TRUE
	cry_reverse Cry_LandorusIncarnate
	cry_reverse Cry_LandorusTherian
.endif @ P_FAMILY_LANDORUS
.if P_FAMILY_KYUREM == TRUE
	cry_reverse Cry_Kyurem
.if P_FUSION_FORMS == TRUE
	cry_reverse Cry_KyuremWhite
	cry_reverse Cry_KyuremBlack
.endif @ P_FUSION_FORMS
.endif @ P_FAMILY_KYUREM
.if P_FAMILY_KELDEO == TRUE
	cry_reverse Cry_Keldeo
.endif @ P_FAMILY_KELDEO
.if P_FAMILY_MELOETTA == TRUE
	cry_reverse Cry_Meloetta
.endif @ P_FAMILY_MELOETTA
.if P_FAMILY_GENESECT == TRUE
	cry_reverse Cry_Genesect
.endif @ P_FAMILY_GENESECT
.if P_FAMILY_CHESPIN == TRUE
	cry_reverse Cry_Chespin
	cry_reverse Cry_Quilladin
	cry_reverse Cry_Chesnaught
.endif @ P_FAMILY_CHESPIN
.if P_FAMILY_FENNEKIN == TRUE
	cry_reverse Cry_Fennekin
	cry_reverse Cry_Braixen
	cry_reverse Cry_Delphox
.endif @ P_FAMILY_FENNEKIN
.if P_FAMILY_FROAKIE == TRUE
	cry_reverse Cry_Froakie
	cry_reverse Cry_Frogadier
	cry_reverse Cry_Greninja
.endif @ P_FAMILY_FROAKIE
.if P_FAMILY_BUNNELBY == TRUE
	cry_reverse Cry_Bunnelby
	cry_reverse Cry_Diggersby
.endif @ P_FAMILY_BUNNELBY
.if P_FAMILY_FLETCHLING == TRUE
	cry_reverse Cry_Fletchling
	cry_reverse Cry_Fletchinder
	cry_reverse Cry_Talonflame
.endif @ P_FAMILY_FLETCHLING
.if P_FAMILY_SCATTERBUG == TRUE
	cry_reverse Cry_Scatterbug
	cry_reverse Cry_Spewpa
	cry_reverse Cry_Vivillon
.endif @ P_FAMILY_SCATTERBUG
.if P_FAMILY_LITLEO == TRUE
	cry_reverse Cry_Litleo
	cry_reverse Cry_Pyroar
.endif @ P_FAMILY_LITLEO
.if P_FAMILY_FLABEBE == TRUE
	cry_reverse Cry_Flabebe
	cry_reverse Cry_Floette
	cry_reverse Cry_FloetteEternalFlower
	cry_reverse Cry_Florges
.endif @ P_FAMILY_FLABEBE
.if P_FAMILY_SKIDDO == TRUE
	cry_reverse Cry_Skiddo
	cry_reverse Cry_Gogoat
.endif @ P_FAMILY_SKIDDO
.if P_FAMILY_PANCHAM == TRUE
	cry_reverse Cry_Pancham
	cry_reverse Cry_Pangoro
.endif @ P_FAMILY_PANCHAM
.if P_FAMILY_FURFROU == TRUE
	cry_reverse Cry_Furfrou
.endif @ P_FAMILY_FURFROU
.if P_FAMILY_ESPURR == TRUE
	cry_reverse Cry_Espurr
	cry_reverse Cry_Meowstic
.endif @ P_FAMILY_ESPURR
.if P_FAMILY_HONEDGE == TRUE
	cry_reverse Cry_Honedge
	cry_reverse Cry_Doublade
	cry_reverse Cry_Aegislash
.endif @ P_FAMILY_HONEDGE
.if P_FAMILY_SPRITZEE == TRUE
	cry_reverse Cry_Spritzee
	cry_reverse Cry_Aromatisse
.endif @ P_FAMILY_SPRITZEE
.if P_FAMILY_SWIRLIX == TRUE
	cry_reverse Cry_Swirlix
	cry_reverse Cry_Slurpuff
.endif @ P_FAMILY_SWIRLIX
.if P_FAMILY_INKAY == TRUE
	cry_reverse Cry_Inkay
	cry_reverse Cry_Malamar
.endif @ P_FAMILY_INKAY
.if P_FAMILY_BINACLE == TRUE
	cry_reverse Cry_Binacle
	cry_reverse Cry_Barbaracle
.endif @ P_FAMILY_BINACLE
.if P_FAMILY_SKRELP == TRUE
	cry_reverse Cry_Skrelp
	cry_reverse Cry_Dragalge
.endif @ P_FAMILY_SKRELP
.if P_FAMILY_CLAUNCHER == TRUE
	cry_reverse Cry_Clauncher
	cry_reverse Cry_Clawitzer
.endif @ P_FAMILY_CLAUNCHER
.if P_FAMILY_HELIOPTILE == TRUE
	cry_reverse Cry_Helioptile
	cry_reverse Cry_Heliolisk
.endif @ P_FAMILY_HELIOPTILE
.if P_FAMILY_TYRUNT == TRUE
	cry_reverse Cry_Tyrunt
	cry_reverse Cry_Tyrantrum
.endif @ P_FAMILY_TYRUNT
.if P_FAMILY_AMAURA == TRUE
	cry_reverse Cry_Amaura
	cry_reverse Cry_Aurorus
.endif @ P_FAMILY_AMAURA
.if P_FAMILY_HAWLUCHA == TRUE
	cry_reverse Cry_Hawlucha
.endif @ P_FAMILY_HAWLUCHA
.if P_FAMILY_DEDENNE == TRUE
	cry_reverse Cry_Dedenne
.endif @ P_FAMILY_DEDENNE
.if P_FAMILY_CARBINK == TRUE
	cry_reverse Cry_Carbink
.endif @ P_FAMILY_CARBINK
.if P_FAMILY_GOOMY == TRUE
	cry_reverse Cry_Goomy
	cry_reverse Cry_Sliggoo
	cry_reverse Cry_Goodra
.endif @ P_FAMILY_GOOMY
.if P_FAMILY_KLEFKI == TRUE
	cry_reverse Cry_Klefki
.endif @ P_FAMILY_KLEFKI
.if P_FAMILY_PHANTUMP == TRUE
	cry_reverse Cry_Phantump
	cry_reverse Cry_Trevenant
.endif @ P_FAMILY_PHANTUMP
.if P_FAMILY_PUMPKABOO == TRUE
	cry_reverse Cry_Pumpkaboo
	cry_reverse Cry_PumpkabooSuper
	cry_reverse Cry_Gourgeist
	cry_reverse Cry_GourgeistSuper
.endif @ P_FAMILY_PUMPKABOO
.if P_FAMILY_BERGMITE == TRUE
	cry_reverse Cry_Bergmite
	cry_reverse Cry_Avalugg
.endif @ P_FAMILY_BERGMITE
.if P_FAMILY_NOIBAT == TRUE
	cry_reverse Cry_Noibat
	cry_reverse Cry_Noivern
.endif @ P_FAMILY_NOIBAT
.if P_FAMILY_XERNEAS == TRUE
	cry_reverse Cry_Xerneas
.endif @ P_FAMILY_XERNEAS
.if P_FAMILY_YVELTAL == TRUE
	cry_reverse Cry_Yveltal
.endif @ P_FAMILY_YVELTAL
.if P_FAMILY_ZYGARDE == TRUE
	cry_reverse Cry_Zygarde50
	cry_reverse Cry_Zygarde10
	cry_reverse Cry_ZygardeComplete
.endif @ P_FAMILY_ZYGARDE
.if P_FAMILY_DIANCIE == TRUE
	cry_reverse Cry_Diancie
.if P_MEGA_EVOLUTIONS == TRUE
	cry_reverse Cry_DiancieMega
.endif @ P_MEGA_EVOLUTIONS
.endif @ P_FAMILY_DIANCIE
.if P_FAMILY_HOOPA == TRUE
	cry_reverse Cry_HoopaConfined
	cry_reverse Cry_HoopaUnbound
.endif @ P_FAMILY_HOOPA
.if P_FAMILY_VOLCANION == TRUE
	cry_reverse Cry_Volcanion
.endif @ P_FAMILY_VOLCANION
.if P_FAMILY_ROWLET == TRUE
	cry_reverse Cry_Rowlet
	cry_reverse Cry_Dartrix
	cry_reverse Cry_Decidueye
.endif @ P_FAMILY_ROWLET
.if P_FAMILY_LITTEN == TRUE
	cry_reverse Cry_Litten
	cry_reverse Cry_Torracat
	cry_reverse Cry_Incineroar
.endif @ P_FAMILY_LITTEN
.if P_FAMILY_POPPLIO == TRUE
	cry_reverse Cry_Popplio
	cry_reverse Cry_Brionne
	cry_reverse Cry_Primarina
.endif @ P_FAMILY_POPPLIO
.if P_FAMILY_PIKIPEK == TRUE
	cry_reverse Cry_Pikipek
	cry_reverse Cry_Trumbeak
	cry_reverse Cry_Toucannon
.endif @ P_FAMILY_PIKIPEK
.if P_FAMILY_YUNGOOS == TRUE
	cry_reverse Cry_Yungoos
	cry_reverse Cry_Gumshoos
.endif @ P_FAMILY_YUNGOOS
.if P_FAMILY_GRUBBIN == TRUE
	cry_reverse Cry_Grubbin
	cry_reverse Cry_Charjabug
	cry_reverse Cry_Vikavolt
.endif @ P_FAMILY_GRUBBIN
.if P_FAMILY_CRABRAWLER == TRUE
	cry_reverse Cry_Crabrawler
	cry_reverse Cry_Crabominable
.endif @ P_FAMILY_CRABRAWLER
.if P_FAMILY_ORICORIO == TRUE
	cry_reverse Cry_OricorioBaile
	cry_reverse Cry_OricorioPomPom
	cry_reverse Cry_OricorioPau
	cry_reverse Cry_OricorioSensu
.endif @ P_FAMILY_ORICORIO
.if P_FAMILY_CUTIEFLY == TRUE
	cry_reverse Cry_Cutiefly
	cry_reverse Cry_Ribombee
.endif @ P_FAMILY_CUTIEFLY
.if P_FAMILY_ROCKRUFF == TRUE
	cry_reverse Cry_Rockruff
	cry_reverse Cry_LycanrocMidday
	cry_reverse Cry_LycanrocMidnight
	cry_reverse Cry_LycanrocDusk
.endif @ P_FAMILY_ROCKRUFF
.if P_FAMILY_WISHIWASHI == TRUE
	cry_reverse Cry_WishiwashiSolo
	cry_reverse Cry_WishiwashiSchool
.endif @ P_FAMILY_WISHIWASHI
.if P_FAMILY_MAREANIE == TRUE
	cry_reverse Cry_Mareanie
	cry_reverse Cry_Toxapex
.endif @ P_FAMILY_MAREANIE
.if P_FAMILY_MUDBRAY == TRUE
	cry_reverse Cry_Mudbray
	cry_reverse Cry_Mudsdale
.endif @ P_FAMILY_MUDBRAY
.if P_FAMILY_DEWPIDER == TRUE
	cry_reverse Cry_Dewpider
	cry_reverse Cry_Araquanid
.endif @ P_FAMILY_DEWPIDER
.if P_FAMILY_FOMANTIS == TRUE
	cry_reverse Cry_Fomantis
	cry_reverse Cry_Lurantis
.endif @ P_FAMILY_FOMANTIS
.if P_FAMILY_MORELULL == TRUE
	cry_reverse Cry_Morelull
	cry_reverse Cry_Shiinotic
.endif @ P_FAMILY_MORELULL
.if P_FAMILY_SALANDIT == TRUE
	cry_reverse Cry_Salandit
	cry_reverse Cry_Salazzle
.endif @ P_FAMILY_SALANDIT
.if P_FAMILY_STUFFUL == TRUE
	cry_reverse Cry_Stufful
	cry_reverse Cry_Bewear
.endif @ P_FAMILY_STUFFUL
.if P_FAMILY_BOUNSWEET == TRUE
	cry_reverse Cry_Bounsweet
	cry_reverse Cry_Steenee
	cry_reverse Cry_Tsareena
.endif @ P_FAMILY_BOUNSWEET
.if P_FAMILY_COMFEY == TRUE
	cry_reverse Cry_Comfey
.endif @ P_FAMILY_COMFEY
.if P_FAMILY_ORANGURU == TRUE
	cry_reverse Cry_Oranguru
.endif @ P_FAMILY_ORANGURU
.if P_FAMILY_PASSIMIAN == TRUE
	cry_reverse Cry_Passimian
.endif @ P_FAMILY_PASSIMIAN
.if P_FAMILY_WIMPOD == TRUE
	cry_reverse Cry_Wimpod
	cry_reverse Cry_Golisopod
.endif @ P_FAMILY_WIMPOD
.if P_FAMILY_SANDYGAST == TRUE
	cry_reverse Cry_Sandygast
	cry_reverse Cry_Palossand
.endif @ P_FAMILY_SANDYGAST
.if P_FAMILY_PYUKUMUKU == TRUE
	cry_reverse Cry_Pyukumuku
.endif @ P_FAMILY_PYUKUMUKU
.if P_FAMILY_TYPE_NULL == TRUE
	cry_reverse Cry_TypeNull
	cry_reverse Cry_Silvally
.endif @ P_FAMILY_TYPE_NULL
.if P_FAMILY_MINIOR == TRUE
	cry_reverse Cry_Minior
.endif @ P_FAMILY_MINIOR
.if P_FAMILY_KOMALA == TRUE
	cry_reverse Cry_Komala
.endif @ P_FAMILY_KOMALA
.if P_FAMILY_TURTONATOR == TRUE
	cry_reverse Cry_Turtonator
.endif @ P_FAMILY_TURTONATOR
.if P_FAMILY_TOGEDEMARU == TRUE
	cry_reverse Cry_Togedemaru
.endif @ P_FAMILY_TOGEDEMARU
.if P_FAMILY_MIMIKYU == TRUE
	cry_reverse Cry_Mimikyu
.endif @ P_FAMILY_MIMIKYU
.if P_FAMILY_BRUXISH == TRUE
	cry_reverse Cry_Bruxish
.endif @ P_FAMILY_BRUXISH
.if P_FAMILY_DRAMPA == TRUE
	cry_reverse Cry_Drampa
.endif @ P_FAMILY_DRAMPA
.if P_FAMILY_DHELMISE == TRUE
	cry_reverse Cry_Dhelmise
.endif @ P_FAMILY_DHELMISE
.if P_FAMILY_JANGMO_O == TRUE
	cry_reverse Cry_JangmoO
	cry_reverse Cry_HakamoO
	cry_reverse Cry_KommoO
.endif @ P_FAMILY_JANGMO_O
.if P_FAMILY_TAPU_KOKO == TRUE
	cry_reverse Cry_TapuKoko
.endif @ P_FAMILY_TAPU_KOKO
.if P_FAMILY_TAPU_LELE == TRUE
	cry_reverse Cry_TapuLele
.endif @ P_FAMILY_TAPU_LELE
.if P_FAMILY_TAPU_BULU == TRUE
	cry_reverse Cry_TapuBulu
.endif @ P_FAMILY_TAPU_BULU
.if P_FAMILY_TAPU_FINI == TRUE
	cry_reverse Cry_TapuFini
.endif @ P_FAMILY_TAPU_FINI
.if P_FAMILY_COSMOG == TRUE
	cry_reverse Cry_Cosmog
	cry_reverse Cry_Cosmoem
	cry_reverse Cry_Solgaleo
	cry_reverse Cry_Lunala
.endif @ P_FAMILY_COSMOG
.if P_FAMILY_NIHILEGO == TRUE
	cry_reverse Cry_Nihilego
.endif @ P_FAMILY_NIHILEGO
.if P_FAMILY_BUZZWOLE == TRUE
	cry_reverse Cry_Buzzwole
.endif @ P_FAMILY_BUZZWOLE
.if P_FAMILY_PHEROMOSA == TRUE
	cry_reverse Cry_Pheromosa
.endif @ P_FAMILY_PHEROMOSA
.if P_FAMILY_XURKITREE == TRUE
	cry_reverse Cry_Xurkitree
.endif @ P_FAMILY_XURKITREE
.if P_FAMILY_CELESTEELA == TRUE
	cry_reverse Cry_Celesteela
.endif @ P_FAMILY_CELESTEELA
.if P_FAMILY_KARTANA == TRUE
	cry_reverse Cry_Kartana
.endif @ P_FAMILY_KARTANA
.if P_FAMILY_GUZZLORD == TRUE
	cry_reverse Cry_Guzzlord
.endif @ P_FAMILY_GUZZLORD
.if P_FAMILY_NECROZMA == TRUE
	cry_reverse Cry_Necrozma
.if P_FUSION_FORMS == TRUE
	cry_reverse Cry_NecrozmaDuskMane
	cry_reverse Cry_NecrozmaDawnWings
.if P_ULTRA_BURST_FORMS == TRUE
	cry_reverse Cry_NecrozmaUltra
.endif @ P_ULTRA_BURST_FORMS
.endif @ P_FUSION_FORMS
.endif @ P_FAMILY_NECROZMA
.if P_FAMILY_MAGEARNA == TRUE
	cry_reverse Cry_Magearna
.endif @ P_FAMILY_MAGEARNA
.if P_FAMILY_MARSHADOW == TRUE
	cry_reverse Cry_Marshadow
.endif @ P_FAMILY_MARSHADOW
.if P_FAMILY_POIPOLE == TRUE
	cry_reverse Cry_Poipole
	cry_reverse Cry_Naganadel
.endif @ P_FAMILY_POIPOLE
.if P_FAMILY_STAKATAKA == TRUE
	cry_reverse Cry_Stakataka
.endif @ P_FAMILY_STAKATAKA
.if P_FAMILY_BLACEPHALON == TRUE
	cry_reverse Cry_Blacephalon
.endif @ P_FAMILY_BLACEPHALON
.if P_FAMILY_ZERAORA == TRUE
	cry_reverse Cry_Zeraora
.endif @ P_FAMILY_ZERAORA
.if P_FAMILY_MELTAN == TRUE
	cry_reverse Cry_Meltan
	cry_reverse Cry_Melmetal
.endif @ P_FAMILY_MELTAN
.if P_FAMILY_GROOKEY == TRUE
	cry_reverse Cry_Grookey
	cry_reverse Cry_Thwackey
	cry_reverse Cry_Rillaboom
.endif @ P_FAMILY_GROOKEY
.if P_FAMILY_SCORBUNNY == TRUE
	cry_reverse Cry_Scorbunny
	cry_reverse Cry_Raboot
	cry_reverse Cry_Cinderace
.endif @ P_FAMILY_SCORBUNNY
.if P_FAMILY_SOBBLE == TRUE
	cry_reverse Cry_Sobble
	cry_reverse Cry_Drizzile
	cry_reverse Cry_Inteleon
.endif @ P_FAMILY_SOBBLE
.if P_FAMILY_SKWOVET == TRUE
	cry_reverse Cry_Skwovet
	cry_reverse Cry_Greedent
.endif @ P_FAMILY_SKWOVET
.if P_FAMILY_ROOKIDEE == TRUE
	cry_reverse Cry_Rookidee
	cry_reverse Cry_Corvisquire
	cry_reverse Cry_Corviknight
.endif @ P_FAMILY_ROOKIDEE
.if P_FAMILY_BLIPBUG == TRUE
	cry_reverse Cry_Blipbug
	cry_reverse Cry_Dottler
	cry_reverse Cry_Orbeetle
.endif @ P_FAMILY_BLIPBUG
.if P_FAMILY_NICKIT == TRUE
	cry_reverse Cry_Nickit
	cry_reverse Cry_Thievul
.endif @ P_FAMILY_NICKIT
.if P_FAMILY_GOSSIFLEUR == TRUE
	cry_reverse Cry_Gossifleur
	cry_reverse Cry_Eldegoss
.endif @ P_FAMILY_GOSSIFLEUR
.if P_FAMILY_WOOLOO == TRUE
	cry_reverse Cry_Wooloo
	cry_reverse Cry_Dubwool
.endif @ P_FAMILY_WOOLOO
.if P_FAMILY_CHEWTLE == TRUE
	cry_reverse Cry_Chewtle
	cry_reverse Cry_Drednaw
.endif @ P_FAMILY_CHEWTLE
.if P_FAMILY_YAMPER == TRUE
	cry_reverse Cry_Yamper
	cry_reverse Cry_Boltund
.endif @ P_FAMILY_YAMPER
.if P_FAMILY_ROLYCOLY == TRUE
	cry_reverse Cry_Rolycoly
	cry_reverse Cry_Carkol
	cry_reverse Cry_Coalossal
.endif @ P_FAMILY_ROLYCOLY
.if P_FAMILY_APPLIN == TRUE
	cry_reverse Cry_Applin
	cry_reverse Cry_Flapple
	cry_reverse Cry_Appletun
.if P_GEN_9_CROSS_EVOS == TRUE
	cry_reverse Cry_Dipplin
.endif @ P_GEN_9_CROSS_EVOS
.endif @ P_FAMILY_APPLIN
.if P_FAMILY_SILICOBRA == TRUE
	cry_reverse Cry_Silicobra
	cry_reverse Cry_Sandaconda
.endif @ P_FAMILY_SILICOBRA
.if P_FAMILY_CRAMORANT == TRUE
	cry_reverse Cry_Cramorant
.endif @ P_FAMILY_CRAMORANT
.if P_FAMILY_ARROKUDA == TRUE
	cry_reverse Cry_Arrokuda
	cry_reverse Cry_Barraskewda
.endif @ P_FAMILY_ARROKUDA
.if P_FAMILY_TOXEL == TRUE
	cry_reverse Cry_Toxel
	cry_reverse Cry_ToxtricityAmped
	cry_reverse Cry_ToxtricityLowKey
.endif @ P_FAMILY_TOXEL
.if P_FAMILY_SIZZLIPEDE == TRUE
	cry_reverse Cry_Sizzlipede
	cry_reverse Cry_Centiskorch
.endif @ P_FAMILY_SIZZLIPEDE
.if P_FAMILY_CLOBBOPUS == TRUE
	cry_reverse Cry_Clobbopus
	cry_reverse Cry_Grapploct
.endif @ P_FAMILY_CLOBBOPUS
.if P_FAMILY_SINISTEA == TRUE
	cry_reverse Cry_Sinistea
	cry_reverse Cry_Polteageist
.endif @ P_FAMILY_SINISTEA
.if P_FAMILY_HATENNA == TRUE
	cry_reverse Cry_Hatenna
	cry_reverse Cry_Hattrem
	cry_reverse Cry_Hatterene
.endif @ P_FAMILY_HATENNA
.if P_FAMILY_IMPIDIMP == TRUE
	cry_reverse Cry_Impidimp
	cry_reverse Cry_Morgrem
	cry_reverse Cry_Grimmsnarl
.endif @ P_FAMILY_IMPIDIMP
.if P_FAMILY_MILCERY == TRUE
	cry_reverse Cry_Milcery
	cry_reverse Cry_Alcremie
.endif @ P_FAMILY_MILCERY
.if P_FAMILY_FALINKS == TRUE
	cry_reverse Cry_Falinks
.endif @ P_FAMILY_FALINKS
.if P_FAMILY_PINCURCHIN == TRUE
	cry_reverse Cry_Pincurchin
.endif @ P_FAMILY_PINCURCHIN
.if P_FAMILY_SNOM == TRUE
	cry_reverse Cry_Snom
	cry_reverse Cry_Frosmoth
.endif @ P_FAMILY_SNOM
.if P_FAMILY_STONJOURNER == TRUE
	cry_reverse Cry_Stonjourner
.endif @ P_FAMILY_STONJOURNER
.if P_FAMILY_EISCUE == TRUE
	cry_reverse Cry_EiscueIceFace
	cry_reverse Cry_EiscueNoiceFace
.endif @ P_FAMILY_EISCUE
.if P_FAMILY_INDEEDEE == TRUE
	cry_reverse Cry_IndeedeeMale
	cry_reverse Cry_IndeedeeFemale
.endif @ P_FAMILY_INDEEDEE
.if P_FAMILY_MORPEKO == TRUE
	cry_reverse Cry_MorpekoFullBelly
	cry_reverse Cry_MorpekoHangry
.endif @ P_FAMILY_MORPEKO
.if P_FAMILY_CUFANT == TRUE
	cry_reverse Cry_Cufant
	cry_reverse Cry_Copperajah
.endif @ P_FAMILY_CUFANT
.if P_FAMILY_DRACOZOLT == TRUE
	cry_reverse Cry_Dracozolt
.endif @ P_FAMILY_DRACOZOLT
.if P_FAMILY_ARCTOZOLT == TRUE
	cry_reverse Cry_Arctozolt
.endif @ P_FAMILY_ARCTOZOLT
.if P_FAMILY_DRACOVISH == TRUE
	cry_reverse Cry_Dracovish
.endif @ P_FAMILY_DRACOVISH
.if P_FAMILY_ARCTOVISH == TRUE
	cry_reverse Cry_Arctovish
.endif @ P_FAMILY_ARCTOVISH
.if P_FAMILY_DURALUDON == TRUE
	cry_reverse Cry_Duraludon
.endif @ P_FAMILY_DURALUDON
.if P_FAMILY_DREEPY == TRUE
	cry_reverse Cry_Dreepy
	cry_reverse Cry_Drakloak
	cry_reverse Cry_Dragapult
.endif @ P_FAMILY_DREEPY
.if P_FAMILY_ZACIAN == TRUE
	cry_reverse Cry_ZacianHeroOfManyBattles
	cry_reverse Cry_ZacianCrownedSword
.endif @ P_FAMILY_ZACIAN
.if P_FAMILY_ZAMAZENTA == TRUE
	cry_reverse Cry_ZamazentaHeroOfManyBattles
	cry_reverse Cry_ZamazentaCrownedShield
.endif @ P_FAMILY_ZAMAZENTA
.if P_FAMILY_ETERNATUS == TRUE
	cry_reverse Cry_Eternatus
	cry_reverse Cry_EternatusEternamax
.endif @ P_FAMILY_ETERNATUS
.if P_FAMILY_KUBFU == TRUE
	cry_reverse Cry_Kubfu
	cry_reverse Cry_UrshifuSingleStrikeStyle
	cry_reverse Cry_UrshifuRapidStrikeStyle
.endif @ P_FAMILY_KUBFU
.if P_FAMILY_ZARUDE == TRUE
	cry_reverse Cry_Zarude
.endif @ P_FAMILY_ZARUDE
.if P_FAMILY_REGIELEKI == TRUE
	cry_reverse Cry_Regieleki
.endif @ P_FAMILY_REGIELEKI
.if P_FAMILY_REGIDRAGO == TRUE
	cry_reverse Cry_Regidrago
.endif @ P_FAMILY_REGIDRAGO
.if P_FAMILY_GLASTRIER == TRUE
	cry_reverse Cry_Glastrier
.endif @ P_FAMILY_GLASTRIER
.if P_FAMILY_SPECTRIER == TRUE
	cry_reverse Cry_Spectrier
.endif @ P_FAMILY_SPECTRIER
.if P_FAMILY_CALYREX == TRUE
	cry_reverse Cry_Calyrex
.if P_FUSION_FORMS == TRUE
	cry_reverse Cry_CalyrexIceRider
	cry_reverse Cry_CalyrexShadowRider
.endif @ P_FUSION_FORMS
.endif @ P_FAMILY_CALYREX
.if P_FAMILY_ENAMORUS == TRUE
	cry_reverse Cry_EnamorusIncarnate
	cry_reverse Cry_EnamorusTherian
.endif @ P_FAMILY_ENAMORUS
.if P_FAMILY_SPRIGATITO == TRUE
	cry_reverse Cry_Sprigatito
	cry_reverse Cry_Floragato
	cry_reverse Cry_Meowscarada
.endif @ P_FAMILY_SPRIGATITO
.if P_FAMILY_FUECOCO == TRUE
	cry_reverse Cry_Fuecoco
	cry_reverse Cry_Crocalor
	cry_reverse Cry_Skeledirge
.endif @ P_FAMILY_FUECOCO
.if P_FAMILY_QUAXLY == TRUE
	cry_reverse Cry_Quaxly
	cry_reverse Cry_Quaxwell
	cry_reverse Cry_Quaquaval
.endif @ P_FAMILY_QUAXLY
.if P_FAMILY_LECHONK == TRUE
	cry_reverse Cry_Lechonk
	cry_reverse Cry_OinkologneMale
	cry_reverse Cry_OinkologneFemale
.endif @ P_FAMILY_LECHONK
.if P_FAMILY_TAROUNTULA == TRUE
	cry_reverse Cry_Tarountula
	cry_reverse Cry_Spidops
.endif @ P_FAMILY_TAROUNTULA
.if P_FAMILY_NYMBLE == TRUE
	cry_reverse Cry_Nymble
	cry_reverse Cry_Lokix
.endif @ P_FAMILY_NYMBLE
.if P_FAMILY_PAWMI == TRUE
	cry_reverse Cry_Pawmi
	cry_reverse Cry_Pawmo
	cry_reverse Cry_Pawmot
.endif @ P_FAMILY_PAWMI
.if P_FAMILY_TANDEMAUS == TRUE
	cry_reverse Cry_Tandemaus
	cry_reverse Cry_MausholdFamilyOfThree
	cry_reverse Cry_MausholdFamilyOfFour
.endif @ P_FAMILY_TANDEMAUS
.if P_FAMILY_FIDOUGH == TRUE
	cry_reverse Cry_Fidough
	cry_reverse Cry_Dachsbun
.endif @ P_FAMILY_FIDOUGH
.if P_FAMILY_SMOLIV == TRUE
	cry_reverse Cry_Smoliv
	cry_reverse Cry_Dolliv
	cry_reverse Cry_Arboliva
.endif @ P_FAMILY_SMOLIV
.if P_FAMILY_SQUAWKABILLY == TRUE
	cry_reverse Cry_Squawkabilly
.endif @ P_FAMILY_SQUAWKABILLY
.if P_FAMILY_NACLI == TRUE
	cry_reverse Cry_Nacli
	cry_reverse Cry_Naclstack
	cry_reverse Cry_Garganacl
.endif @ P_FAMILY_NACLI
.if P_FAMILY_CHARCADET == TRUE
	cry_reverse Cry_Charcadet
	cry_reverse Cry_Armarouge
	cry_reverse Cry_Ceruledge
.endif @ P_FAMILY_CHARCADET
.if P_FAMILY_TADBULB == TRUE
	cry_reverse Cry_Tadbulb
	cry_reverse Cry_Bellibolt
.endif @ P_FAMILY_TADBULB
.if P_FAMILY_WATTREL == TRUE
	cry_reverse Cry_Wattrel
	cry_reverse Cry_Kilowattrel
.endif @ P_FAMILY_WATTREL
.if P_FAMILY_MASCHIFF == TRUE
	cry_reverse Cry_Maschiff
	cry_reverse Cry_Mabosstiff
.endif @ P_FAMILY_MASCHIFF
.if P_FAMILY_SHROODLE == TRUE
	cry_reverse Cry_Shroodle
	cry_reverse Cry_Grafaiai
.endif @ P_FAMILY_SHROODLE
.if P_FAMILY_BRAMBLIN == TRUE
	cry_reverse Cry_Bramblin
	cry_reverse Cry_Brambleghast
.endif @ P_FAMILY_BRAMBLIN
.if P_FAMILY_TOEDSCOOL == TRUE
	cry_reverse Cry_Toedscool
	cry_reverse Cry_Toedscruel
.endif @ P_FAMILY_TOEDSCOOL
.if P_FAMILY_KLAWF == TRUE
	cry_reverse Cry_Klawf
.endif @ P_FAMILY_KLAWF
.if P_FAMILY_CAPSAKID == TRUE
	cry_reverse Cry_Capsakid
	cry_reverse Cry_Scovillain
.endif @ P_FAMILY_CAPSAKID
.if P_FAMILY_RELLOR == TRUE
	cry_reverse Cry_Rellor
	cry_reverse Cry_Rabsca
.endif @ P_FAMILY_RELLOR
.if P_FAMILY_FLITTLE == TRUE
	cry_reverse Cry_Flittle
	cry_reverse Cry_Espathra
.endif @ P_FAMILY_FLITTLE
.if P_FAMILY_TINKATINK == TRUE
	cry_reverse Cry_Tinkatink
	cry_reverse Cry_Tinkatuff
	cry_reverse Cry_Tinkaton
.endif @ P_FAMILY_TINKATINK
.if P_FAMILY_WIGLETT == TRUE
	cry_reverse Cry_Wiglett
	cry_reverse Cry_Wugtrio
.endif @ P_FAMILY_WIGLETT
.if P_FAMILY_BOMBIRDIER == TRUE
	cry_reverse Cry_Bombirdier
.endif @ P_FAMILY_BOMBIRDIER
.if P_FAMILY_FINIZEN == TRUE
	cry_reverse Cry_Finizen
	cry_reverse Cry_PalafinZero
	cry_reverse Cry_PalafinHero
.endif @ P_FAMILY_FINIZEN
.if P_FAMILY_VAROOM == TRUE
	cry_reverse Cry_Varoom
	cry_reverse Cry_Revavroom
.endif @ P_FAMILY_VAROOM
.if P_FAMILY_CYCLIZAR == TRUE
	cry_reverse Cry_Cyclizar
.endif @ P_FAMILY_CYCLIZAR
.if P_FAMILY_ORTHWORM == TRUE
	cry_reverse Cry_Orthworm
.endif @ P_FAMILY_ORTHWORM
.if P_FAMILY_GLIMMET == TRUE
	cry_reverse Cry_Glimmet
	cry_reverse Cry_Glimmora
.endif @ P_FAMILY_GLIMMET
.if P_FAMILY_GREAVARD == TRUE
	cry_reverse Cry_Greavard
	cry_reverse Cry_Houndstone
.endif @ P_FAMILY_GREAVARD
.if P_FAMILY_FLAMIGO == TRUE
	cry_reverse Cry_Flamigo
.endif @ P_FAMILY_FLAMIGO
.if P_FAMILY_CETODDLE == TRUE
	cry_reverse Cry_Cetoddle
	cry_reverse Cry_Cetitan
.endif @ P_FAMILY_CETODDLE
.if P_FAMILY_VELUZA == TRUE
	cry_reverse Cry_Veluza
.endif @ P_FAMILY_VELUZA
.if P_FAMILY_DONDOZO == TRUE
	cry_reverse Cry_Dondozo
.endif @ P_FAMILY_DONDOZO
.if P_FAMILY_TATSUGIRI == TRUE
	cry_reverse Cry_TatsugiriCurly
	cry_reverse Cry_TatsugiriDroopy
	cry_reverse Cry_TatsugiriStretchy
.endif @ P_FAMILY_TATSUGIRI
.if P_FAMILY_GREAT_TUSK == TRUE
	cry_reverse Cry_GreatTusk
.endif @ P_FAMILY_GREAT_TUSK
.if P_FAMILY_SCREAM_TAIL == TRUE
	cry_reverse Cry_ScreamTail
.endif @ P_FAMILY_SCREAM_TAIL
.if P_FAMILY_BRUTE_BONNET == TRUE
	cry_reverse Cry_BruteBonnet
.endif @ P_FAMILY_BRUTE_BONNET
.if P_FAMILY_FLUTTER_MANE == TRUE
	cry_reverse Cry_FlutterMane
.endif @ P_FAMILY_FLUTTER_MANE
.if P_FAMILY_SLITHER_WING == TRUE
	cry_reverse Cry_SlitherWing
.endif @ P_FAMILY_SLITHER_WING
.if P_FAMILY_SANDY_SHOCKS == TRUE
	cry_reverse Cry_SandyShocks
.endif @ P_FAMILY_SANDY_SHOCKS
.if P_FAMILY_IRON_TREADS == TRUE
	cry_reverse Cry_IronTreads
.endif @ P_FAMILY_IRON_TREADS
.if P_FAMILY_IRON_BUNDLE == TRUE
	cry_reverse Cry_IronBundle
.endif @ P_FAMILY_IRON_BUNDLE
.if P_FAMILY_IRON_HANDS == TRUE
	cry_reverse Cry_IronHands
.endif @ P_FAMILY_IRON_HANDS
.if P_FAMILY_IRON_JUGULIS == TRUE
	cry_reverse Cry_IronJugulis
.endif @ P_FAMILY_IRON_JUGULIS
.if P_FAMILY_IRON_MOTH == TRUE
	cry_reverse Cry_IronMoth
.endif @ P_FAMILY_IRON_MOTH
.if P_FAMILY_IRON_THORNS == TRUE
	cry_reverse Cry_IronThorns
.endif @ P_FAMILY_IRON_THORNS
.if P_FAMILY_FRIGIBAX == TRUE
	cry_reverse Cry_Frigibax
	cry_reverse Cry_Arctibax
	cry_reverse Cry_Baxcalibur
.endif @ P_FAMILY_FRIGIBAX
.if P_FAMILY_GIMMIGHOUL == TRUE
	cry_reverse Cry_Gimmighoul
	cry_reverse Cry_Gholdengo
.endif @ P_FAMILY_GIMMIGHOUL
.if P_FAMILY_WO_CHIEN == TRUE
	cry_reverse Cry_WoChien
.endif @ P_FAMILY_WO_CHIEN
.if P_FAMILY_CHIEN_PAO == TRUE
	cry_reverse Cry_ChienPao
.endif @ P_FAMILY_CHIEN_PAO
.if P_FAMILY_TING_LU == TRUE
	cry_reverse Cry_TingLu
.endif @ P_FAMILY_TING_LU
.if P_FAMILY_CHI_YU == TRUE
	cry_reverse Cry_ChiYu
.endif @ P_FAMILY_CHI_YU
.if P_FAMILY_ROARING_MOON == TRUE
	cry_reverse Cry_RoaringMoon
.endif @ P_FAMILY_ROARING_MOON
.if P_FAMILY_IRON_VALIANT == TRUE
	cry_reverse Cry_IronValiant
.endif @ P_FAMILY_IRON_VALIANT
.if P_FAMILY_KORAIDON == TRUE
	cry_reverse Cry_Koraidon
.endif @ P_FAMILY_KORAIDON
.if P_FAMILY_MIRAIDON == TRUE
	cry_reverse Cry_Miraidon
.endif @ P_FAMILY_MIRAIDON
.if P_FAMILY_WALKING_WAKE == TRUE
	cry_reverse Cry_WalkingWake
.endif @ P_FAMILY_WALKING_WAKE
.if P_FAMILY_IRON_LEAVES == TRUE
	cry_reverse Cry_IronLeaves
.endif @ P_FAMILY_IRON_LEAVES
.if P_FAMILY_POLTCHAGEIST == TRUE
	cry_reverse Cry_Poltchageist
	cry_reverse Cry_Sinistcha
.endif @ P_FAMILY_POLTCHAGEIST
.if P_FAMILY_OKIDOGI == TRUE
	cry_reverse Cry_Okidogi
.endif @ P_FAMILY_OKIDOGI
.if P_FAMILY_MUNKIDORI == TRUE
	cry_reverse Cry_Munkidori
.endif @ P_FAMILY_MUNKIDORI
.if P_FAMILY_FEZANDIPITI == TRUE
	cry_reverse Cry_Fezandipiti
.endif @ P_FAMILY_FEZANDIPITI
.if P_FAMILY_OGERPON == TRUE
	cry_reverse Cry_Ogerpon
.endif @ P_FAMILY_OGERPON

cry Cry_Guthling
cry Cry_Guthbird
cry Cry_Guthraptor
cry Cry_Zamling
cry Cry_Zambird
cry Cry_Zamohawk
cry Cry_Saraling
cry Cry_Sarabird
cry Cry_Saraowl
cry Cry_Chick
cry Cry_Chicken_Normal_Form
cry Cry_Dreadfowl
cry Cry_Chicken_Varrock_Form
cry Cry_Chicken_Diving_Form
cry Cry_Chicken_Karamja_Form
cry Cry_Chicken_Death_Form
cry Cry_Chicken_Bandosian_Form
cry Cry_Chicken_War_Form
cry Cry_Rooster_Normal_Form
cry Cry_Ernest
cry Cry_Rooster_Karamja_Form
cry Cry_Oomlie
cry Cry_Rooster_Bandosian_Form
cry Cry_Chicken_Famine_Form
cry Cry_Rooster_Varrock_Form
cry Cry_Chicken_Pestilence_Form
cry Cry_Chicken_Lizard_Form
cry Cry_Chicken_Undead_Form
cry Cry_Chicken_Mystery_Form
cry Cry_EvilChicken
cry Cry_Swordchick
cry Cry_Newtroost
cry Cry_Calf
cry Cry_Cow
cry Cry_Super_Cow
cry Cry_Cow_Dairy_Form
cry Cry_Cow_Undead_Form
cry Cry_Cow_Chocolate_Form
cry Cry_Cow_Strawberry_Form
cry Cry_Cow_Vanilla_Form
cry Cry_Cow_Harlequin_Form
cry Cry_SkeletalOx_Female_Form
cry Cry_Bull
cry Cry_Bull_Elder_Form
cry Cry_SkeletalOx_Male_Form
cry Cry_Trojan_Cow
cry Cry_Cow_Plague_Form
cry Cry_Minotaur_Normal_Form
cry Cry_Minotaur_Rune_Form
cry Cry_Unicow
cry Cry_Rat_Normal_Form
cry Cry_Giant_Rat_Normal_Form
cry Cry_Brine_Rat
cry Cry_Giant_Rat_Blessed_Form
cry Cry_Rat_Hell_Form
cry Cry_Giant_Rat_Hell_Form
cry Cry_Shell_Rat
cry Cry_Rat_Crypt_Form
cry Cry_Giant_Rat_Crypt_Form
cry Cry_Warped_Rat
cry Cry_Zombie_Rat
cry Cry_Giant_Rat_Dungeon_Form
cry Cry_Rat_King_Form
cry Cry_Giant_Rat_King_Form
cry Cry_Albino_Rat
cry Cry_Angry_Rat
cry Cry_Experiment_2_Form
cry Cry_Lamb
cry Cry_Sheep_White_Form
cry Cry_Sheep_Plague_Form
cry Cry_Sheep_Black_Form
cry Cry_Ram_Fluffy_Form
cry Cry_Ram_Shaggy_Form
cry Cry_Ram_Golden_Form
cry Cry_Sheep_Pirate_Form
cry Cry_Goat_Billy_Form
cry Cry_Goat_Desert_Form
cry Cry_Goat_Mountain_Form
cry Cry_Gorak
cry Cry_Sardine
cry Cry_Herring
cry Cry_Trout_Normal_Form
cry Cry_Swordfish
cry Cry_Trout_Leaping_Form
cry Cry_Sturgeon
cry Cry_Trout_Tropical_Form
cry Cry_Sailfish
cry Cry_Thallasus
cry Cry_Bass
cry Cry_Salmon_Normal_Form
cry Cry_Shark_Normal_Form
cry Cry_Fury_Shark
cry Cry_Salmon_Leaping_Form
cry Cry_Shark_GreatWhite_Form
cry Cry_Shark_Tiger_Form
cry Cry_Mackerel
cry Cry_Catfish
cry Cry_Shark_Baron_Form
cry Cry_Tarpon
cry Cry_Seerfish
cry Cry_DesertSole
cry Cry_Sillago
cry Cry_Wobbegong
cry Cry_Karambwanj
cry Cry_Karambwan
cry Cry_Whitefish
cry Cry_Beltfish
cry Cry_Manta_Ray
cry Cry_Cod
cry Cry_Rainbow
cry Cry_Shark_Golden_Form
cry Cry_Pike
cry Cry_Monkfish_Normal_Form
cry Cry_AnglerFish
cry Cry_Giant_Carp
cry Cry_Monkfish_Fresh_Form
cry Cry_Monkfish_Golden_Form
cry Cry_GoblinFish
cry Cry_Pet_Fish
cry Cry_Gilbert
cry Cry_Cavefish
cry Cry_Rocktail
cry Cry_Eel_Slimy_Form
cry Cry_Eel_Cave_Form
cry Cry_Eel_Sacred_Form
cry Cry_Eel_Lava_Form
cry Cry_Eel_Infernal_Form
cry Cry_Eel_Mottled_Form
cry Cry_Eel_Short_Finned_Form
cry Cry_Eel_Salve_Form
cry Cry_Eel_Dusk_Form
cry Cry_Cave_Moray
cry Cry_Vile_Fish
cry Cry_Piglet
cry Cry_Pig
cry Cry_Pigzilla
cry Cry_Puppy_Pup_Form
cry Cry_Puppy_Mutt_Form
cry Cry_Terrier
cry Cry_Sheepdog
cry Cry_Dalmatian
cry Cry_Greyhound
cry Cry_Bulldog
cry Cry_Labrador
cry Cry_Corgi
cry Cry_Terror_Dog
cry Cry_Stray_Dog
cry Cry_Muncher
cry Cry_Hellpuppy
cry Cry_Hellhound
cry Cry_Cerberus
cry Cry_Kitten
cry Cry_Cat_Normal_Form
cry Cry_Cat_Overgrown_Form
cry Cry_Cat_Lazy_Form
cry Cry_Cat_Wily_Form
cry Cry_Cat_Purple_Form
cry Cry_Cat_Hell_Form
cry Cry_Cat_Post_Form
cry Cry_Cat_Sunken_Form
cry Cry_Bob
cry Cry_Evil_Bob
cry Cry_Pet_Rock
cry Cry_Rock_Polished_Form
cry Cry_Pillar
cry Cry_Rock_Soup
cry Cry_Slagilith
cry Cry_Rock_Strange_Form
cry Cry_Rock_Golden_Form
cry Cry_Party_Rock
cry Cry_Strykewyrm_Freezy_Form
cry Cry_Strykewyrm_Leafy_Form
cry Cry_Strykewyrm_Sandy_Form
cry Cry_Strykewyrm_Wildy_Form
cry Cry_Scorpling
cry Cry_Scorpion_Normal_Form
cry Cry_Scorpion_Pit_Form
cry Cry_Scorpion_Poison_Form
cry Cry_Scorpion_King_Form
cry Cry_Scorpion_Grave_Form
cry Cry_Scorpion_Corrupted_Form
cry Cry_Scorpion_Reanimated_Form
cry Cry_Scorpion_Gauntlet_Crystalline_Form
cry Cry_Scorpion_Gauntlet_Corrupted_Form
cry Cry_Scorpion_Khazard_Form
cry Cry_Scorpion_Spirit_Form
cry Cry_Scorpia
cry Cry_Dreadnip
cry Cry_Peepling
cry Cry_Sneakrpeep
cry Cry_Runtstable
cry Cry_Basilisk
cry Cry_Baby_Mole
cry Cry_Giant_Mole
cry Cry_Squirrel
cry Cry_Ravenling
cry Cry_Raven_Normal_Form
cry Cry_Raven_Nevermore_Form
cry Cry_Raven_Spooky_Form
cry Cry_Raven_Crystal_Form
cry Cry_Crow
cry Cry_Magpie
cry Cry_Chinchompa_Grey_Form
cry Cry_Chinchompa_Red_Form
cry Cry_Chinchompa_Gold_Form
cry Cry_Vultling
cry Cry_Vulture
cry Cry_Pengling
cry Cry_Penguin
cry Cry_Penguin_Clockwork_Form
cry Cry_The_Thing
cry Cry_Ping
cry Cry_Pong
cry Cry_Penguin_McGraw_Form
cry Cry_Penguin_Spy_Form
cry Cry_Penguin_Agent_Form
cry Cry_Penguin_Disguise_Cactus_Form
cry Cry_Penguin_Disguise_Rock_Form
cry Cry_Penguin_Disguise_Bush_Form
cry Cry_Penguin_Disguise_Box_Form
cry Cry_ExExParrot
cry Cry_Broav
cry Cry_Tooths
cry Cry_Rune_Guardian
cry Cry_Gnomey
cry Cry_Sparkles
cry Cry_Bat
cry Cry_Giant_Bat
cry Cry_Warped_Bat
cry Cry_Albino_Bat
cry Cry_Bat_Box_Form
cry Cry_Fruit_Bat
cry Cry_VampyreBat
cry Cry_Deathwing
cry Cry_Shaikah
cry Cry_Growler
cry Cry_Phoenling_Rebirth_Form
cry Cry_Phoenling_Reborn_Form
cry Cry_Phoenix_Rebirth_Form
cry Cry_Phoenix_Reborn_Form
cry Cry_Plant_Strange_Form
cry Cry_Plant_Stranger_Form
cry Cry_EvilTurnip
cry Cry_Creature_Cute_Form
cry Cry_Creature_Evil_Form
cry Cry_Baby_Yak
cry Cry_Yak_Normal_Form
cry Cry_Yak_Pack_Form
cry Cry_Yak_Sacred_Form
cry Cry_Yak_ClueScroll_Form
cry Cry_Yak_Undead_Form
cry Cry_Yak_Snack_Form
cry Cry_Minitrice
cry Cry_Cockatrice
cry Cry_Guthatrice
cry Cry_Zamatrice
cry Cry_Saratrice
cry Cry_Corxatrice
cry Cry_Vulatrice
cry Cry_Pengatrice
cry Cry_Chocatrice
cry Cry_Sproutling_Summer_Form
cry Cry_Sproutling_Spring_Form
cry Cry_Sproutling_Winter_Form
cry Cry_Sproutling_Autumn_Form
cry Cry_Rue
cry Cry_Monty
cry Cry_Zygomite
cry Cry_Abyssaling
cry Cry_Abyssal_Minion_Form
cry Cry_Abyssal_Demon_Form
cry Cry_Abyssal_Sire_Form
cry Cry_Abyssal_Leech_Form
cry Cry_Abyssal_Parasite_Form
cry Cry_Abyssal_Lurker_Form
cry Cry_Abyssal_Walker_Form
cry Cry_Abyssal_Titan_Form
cry Cry_Tz_Kih
cry Cry_Tz_Kek
cry Cry_Tok_Xil
cry Cry_Tz_Kih_Spirit_Form
cry Cry_Ket_Dill
cry Cry_Ket_Zek
cry Cry_Yt_HurKot
cry Cry_Yt_MejKot
cry Cry_TzRek_Jad
cry Cry_TzTok_Jad
cry Cry_JalTok_Jad
cry Cry_Jal_MejRah
cry Cry_Jal_Ak
cry Cry_Jal_Xil
cry Cry_Jal_Nib
cry Cry_Jal_ImKot
cry Cry_Jal_Zek
cry Cry_TzKal_Zuk
cry Cry_Duckling
cry Cry_Swan
cry Cry_Duck_Normal_Form
cry Cry_Mega_Duck
cry Cry_Duck_Cart_Form
cry Cry_Platypode
cry Cry_Platypus
cry Cry_Fledgling
cry Cry_Dagannoth_Normal_Form
cry Cry_Dagannoth_Guardian_Form
cry Cry_Dagannoth_King_Range_Form
cry Cry_Dagannoth_King_Magic_Form
cry Cry_Dagannoth_King_Melee_Form
cry Cry_Dagannoth_King_Range_Mega_Form
cry Cry_Dagannoth_King_Magic_Mega_Form
cry Cry_Dagannoth_King_Melee_Mega_Form
cry Cry_Chaos_Ele
cry Cry_Chaos_Ele_Mega_Form
cry Cry_Bandling
cry Cry_Bandbird
cry Cry_Bandeagle
cry Cry_Zaroling
cry Cry_Zarobird
cry Cry_Zaraven
cry Cry_Sereling
cry Cry_Serebird
cry Cry_Serepea
cry Cry_Frogspawn
cry Cry_Frog_Normal_Form
cry Cry_Giant_Frog_Normal_Form
cry Cry_Giant_Frog_Royal_Form
cry Cry_Frog_Bloated_Form
cry Cry_Frog_Balloon_Form
cry Cry_Toad_Barker_Form
cry Cry_Frogeel
cry Cry_Spiderling
cry Cry_Spider_Giant_Form
cry Cry_Spider_DeadlyRed_Form
cry Cry_Spider_Jungle_Form
cry Cry_Spider_Blessed_Form
cry Cry_Spider_Huge_Form
cry Cry_Spider_Night_Form
cry Cry_Spider_Ice_Form
cry Cry_Spider_Spirit_Form
cry Cry_Eek
cry Cry_MinstrlWeb
cry Cry_Sarachnis
cry Cry_Venenatis
cry Cry_Spidine
cry Cry_Crayfish
cry Cry_Shrimp
cry Cry_Lobster_Normal_Form
cry Cry_Lobster_Golden_Form
cry Cry_Lobster_Giant_Form
cry Cry_Lobster_Heim_Form
cry Cry_Lobster_Obsidian_Form
cry Cry_Crab_Red_Form
cry Cry_Giant_Crab_Red_Form
cry Cry_Crab_Moss_Form
cry Cry_Giant_Crab_Moss_Form
cry Cry_Crab_RumPumped_Form
cry Cry_Giant_Crab_RumPumped_Form
cry Cry_Crab_Dark_Form
cry Cry_Giant_Crab_Dark_Form
cry Cry_Crab_Grey_Form
cry Cry_Giant_Crab_Grey_Form
cry Cry_Knife_Crab
cry Cry_Heim_Crab
cry Cry_WebSnipper
cry Cry_Blue_Crab
cry Cry_Crablet_First_Form
cry Cry_Crablet_Second_Form
cry Cry_Crablet_Third_Form
cry Cry_Crablet_Forth_Form
cry Cry_Crablet_Fifth_Form
cry Cry_Crawler_Cave_Form
cry Cry_Crawler_Chasm_Form
cry Cry_Crawler_Monstrous_Form
cry Cry_Winston
cry Cry_Tortoise_Normal_Form
cry Cry_Tortoise_Warped_Form
cry Cry_Tortoise_War_Form
cry Cry_Valluta
cry Cry_Sea_Turtle
cry Cry_Sea_Turtle_Treasure_Form
cry Cry_Herbert
cry Cry_Xinachto
cry Cry_Cave_Slime
cry Cry_Jelly_Normal_Form
cry Cry_Jelly_Warped_Form
cry Cry_Jelly_Spirit_Form
cry Cry_AbbySpectr
cry Cry_Salamander_Green_Form
cry Cry_Salamander_Orange_Form
cry Cry_Salamander_Red_Form
cry Cry_Salamander_Black_Form
cry Cry_Salamander_Augmented_Form
cry Cry_Gecko
cry Cry_Chameleon
cry Cry_Bloodveld
cry Cry_Bloodveld_Insatiable_Physical_Form
cry Cry_Bloodveld_Insatiable_Special_Form
cry Cry_Bloodveld_Mutated_Physical_Form
cry Cry_Bloodveld_Mutated_Special_Form
cry Cry_Reaver
cry Cry_Armaling
cry Cry_Armabird
cry Cry_Armafalcon
cry Cry_Ungodling
cry Cry_Ungodbird
cry Cry_Ungodgeon
cry Cry_Tumekling
cry Cry_Tumekbird
cry Cry_Tumekibis
cry Cry_Kerrit
cry Cry_Snuffle
cry Cry_Popoca
cry Cry_Choloa
cry Cry_Durzag
cry Cry_Yakamaru
cry Cry_Chompy
cry Cry_Jubbly
cry Cry_Jubster
cry Cry_Terrorbird_Normal_Form
cry Cry_Terrorbird_Warped_Form
cry Cry_Terrorbird_Spirit_Form
cry Cry_Wolf_Juvenile_Form
cry Cry_Wolf_Normal_Form
cry Cry_Wolf_Fenris_Form
cry Cry_Wolf_White_Form
cry Cry_Rover
cry Cry_Wolf_Dire_Form
cry Cry_Wolf_Jungle_Form
cry Cry_Wolf_Skoll_Form
cry Cry_Wolf_Desert_Form
cry Cry_Wolf_Hati_Hati
cry Cry_Wolf_Spirit_Form
cry Cry_Fox
cry Cry_Inari
cry Cry_Helwyr
cry Cry_Bird_Nest
cry Cry_Birds_Nest_God_Form
cry Cry_Pigeon
cry Cry_Pheasant
cry Cry_Rocling
cry Cry_Roc
cry Cry_Foal
cry Cry_Unicorn_White_Form
cry Cry_Unicorn_Stallion_Form
cry Cry_Unicorn_Black_Form
cry Cry_Unicorn_Angry_Form
cry Cry_Unicorn_Reanimated_Form
cry Cry_Starlight
cry Cry_Pawya
cry Cry_Grenwall
cry Cry_Bear_Cub
cry Cry_Bear_Normal_Form
cry Cry_Bear_Reanimated_Form
cry Cry_Bear_Gauntlet_Crystalline_Form
cry Cry_Callisto
cry Cry_Polar_Bear_Normal_Form
cry Cry_Polar_Bear_PBJ_Agent_Form
cry Cry_Polar_Bear_Arctic_Form
cry Cry_Polar_Bear_Nanuq_Form
cry Cry_Bear_Grizzly_Form
cry Cry_Kendall
cry Cry_Bear_Gauntlet_Corrupted_Form
cry Cry_Bear_Angry_Form
cry Cry_Graahk_Normal_Form
cry Cry_Graahk_Spirit_Form
cry Cry_Dust_Devil
cry Cry_SmokeDevil
cry Cry_SmokeDevil_Nuclear_Form
cry Cry_ChokeDevil
cry Cry_SmokeDevil_Thermonuclear_Form
cry Cry_Hatchling
cry Cry_Dragonling_Green_Form
cry Cry_Dragon_Green_Form
cry Cry_Dragon_Brutal_Green_Form
cry Cry_Dragonling_Blue_Form
cry Cry_Dragon_Blue_Form
cry Cry_Dragon_Brutal_Blue_Form
cry Cry_Dragonling_Red_Form
cry Cry_Dragon_Red_Form
cry Cry_Dragon_Brutal_Red_Form
cry Cry_Dragonling_Black_Form
cry Cry_Dragon_Black_Form
cry Cry_Dragon_Brutal_Black_Form
cry Cry_Dragon_ThreeHeaded_Form
cry Cry_Elvarg
cry Cry_Dragon_King_Black_Form
cry Cry_Dragon_Queen_Black_Form
cry Cry_Hand_Creeping_Form
cry Cry_Hand_Crawling_Form
cry Cry_Hand_Skeletal_Form
cry Cry_Hand_Crushing_Form
cry Cry_Hand_Zombie_Form
cry Cry_Turoth
cry Cry_Turoth_Mightiest_Form
cry Cry_Big_Turoth
cry Cry_Sockroth
cry Cry_Lilrask
cry Cry_Kurask
cry Cry_Kurask_King_Form
cry Cry_Kurask_Overlord_Form
cry Cry_Kebbit
cry Cry_Kebbit_Polar_Form
cry Cry_Kebbit_Sabre_Form
cry Cry_Kebbit_Spotted_Form
cry Cry_Kebbit_Dark_Form
cry Cry_Kebbit_Dashing_Form
cry Cry_Kebbit_Wild_Form
cry Cry_Kebbit_Prickly_Form
cry Cry_Kebbit_Razor_Form
cry Cry_Kebbit_Big_Form
cry Cry_Kebbit_DesertDevil_Form
cry Cry_Kebbit_Feldip_Weasel_Form
cry Cry_Kebbit_Barbed_Form
cry Cry_Kebbit_Diseased_Form
cry Cry_Kebbit_Chocolate_Form
cry Cry_Monkey_Normal_Form
cry Cry_Monkey_Ninja_Form
cry Cry_Gorilla_Normal_Form
cry Cry_Monkey_Zombie_Form
cry Cry_Gorilla_Ancient_Form
cry Cry_Monkey_Harmless_Form
cry Cry_Monkey_Ghost_Form
cry Cry_Gorilla_Ayuni_Form
cry Cry_Gorilla_Leeuni_Form
cry Cry_Gorilla_Eruni_Form
cry Cry_Monkey_Karamja_Baby_Form
cry Cry_Monkey_Karamja_Adult_Form
cry Cry_Larupia_Normal_Form
cry Cry_Larupia_Spirit_Form
cry Cry_Kyatt_Normal_Form
cry Cry_Kyatt_Spirit_Form
cry Cry_Crabling
cry Cry_Rock_Crab_Normal_Form
cry Cry_Rock_Crab_Giant_Normal_Form
cry Cry_Rock_Crab_Ammonite_Form
cry Cry_Rock_Crab_Giant_Ammonite_Form
cry Cry_Rock_Crab_Sand_Form
cry Cry_Rock_Crab_Giant_Sand_Form
cry Cry_Rock_Crab_Swamp_Form
cry Cry_Rock_Crab_Giant_Swamp_Form
cry Cry_Crab_Granite_Form
cry Cry_Lobster_Granite_Form
cry Cry_Lobster_Rock_Form
cry Cry_Rabbit
cry Cry_Wolperting
cry Cry_Bunyip
cry Cry_TalonBeast_Talon_Form
cry Cry_TalonBeast_Nail_Form
cry Cry_Ferret
cry Cry_Toy_Mouse
cry Cry_Toy_Doll
cry Cry_Toy_Soldier
cry Cry_Cat_Clockwork_Form
cry Cry_Magicarpet
cry Cry_Anichair
cry Cry_Exoraxe
cry Cry_Spookaxe
cry Cry_Dobbin
cry Cry_Marionette
cry Cry_DragonKite
cry Cry_Animour
cry Cry_Dead_Tree
cry Cry_Jadinko
cry Cry_Killerwatt
cry Cry_Mackers
cry Cry_Turkey_Female_Form
cry Cry_Turkey_Male_Form
cry Cry_Turkey_Protestor_Form
cry Cry_Toucan_Tenacious_Male_Form
cry Cry_Toucan_Tenacious_Female_Form
cry Cry_Toucan_Tuai_Leit_Form
cry Cry_Jellyfish_Blubber_Form
cry Cry_Jellyfish
cry Cry_Pure
cry Cry_Rune
cry Cry_Essence
cry Cry_Seagull_Normal_Form
cry Cry_Pelican
cry Cry_Albatross
cry Cry_Seagull_Hattenkrapper_Form
cry Cry_Seagull_Koppenploppen_Form
cry Cry_Seagull_Steven_Form
cry Cry_Ibis
cry Cry_DesertWyrm
cry Cry_Wyrm
cry Cry_Snake_Normal_Form
cry Cry_Cobra_Normal_Form
cry Cry_Cobra_Spirit_Form
cry Cry_Juna
cry Cry_Snake_Sea_Form
cry Cry_Big_Snake_Sea_Form
cry Cry_Thingumwut
cry Cry_Experiment_3_Form
cry Cry_Cabbage
cry Cry_Ughtanki
cry Cry_Camel
cry Cry_Camel_Warrior_Form
cry Cry_BalanceEle
cry Cry_Kalphite_Larva_Form
cry Cry_Kalphite_Worker_Form
cry Cry_Kalphite_Soldier_Form
cry Cry_Kalphite_Spirit_Form
cry Cry_Kalphite_Guardian_Form
cry Cry_Kalphite_Queen_Form
cry Cry_Kalphite_Queen_Mega_Form
cry Cry_Kalphite_Paragon_Form
cry Cry_Kalphite_Corrupted_Form
cry Cry_Kalphite_Marauder_Form
cry Cry_Kalphite_King_Form
cry Cry_Kalphite_Dung_Form
cry Cry_Kalphite_Reanimated_Form
cry Cry_Abyssal_Demon_Reanimated_Form
cry Cry_Bat_Gauntlet_Corrupted_Form
cry Cry_Bat_Gauntlet_Crystalline_Form
cry Cry_Bloodveld_Reanimated_Form
cry Cry_Dark_Beast_Gauntlet_Corrupted_Form
cry Cry_Dark_Beast_Gauntlet_Crystalline_Form
cry Cry_Dark_Beast_Pup_Form
cry Cry_Dark_Beast_Normal_Form
cry Cry_Dark_Beast_Sotetseg_Form
cry Cry_Experiment_4_Form
cry Cry_Experiment_5_Form
cry Cry_Ganodermic_Beast
cry Cry_Grifolapine
cry Cry_Grifolaroo
cry Cry_Sporaxe
cry Cry_Headless_Beast
cry Cry_Behemoth_Normal_Form
cry Cry_Behemoth_Adolscent_Form
cry Cry_Siege_Beast
cry Cry_Bulwark_Beast
cry Cry_Behemoth_Gluttonous_Form
cry Cry_Behemoth_Runebound_Form
cry Cry_Stomp
cry Cry_Hope_Devourer
cry Cry_Karamthulu_Overlord
cry Cry_Light_Creature
cry Cry_Minotaur_Reanimated_Form
cry Cry_Monkey_Reanimated_Form
cry Cry_Rat_Gauntlet_Corrupted_Form
cry Cry_Rat_Gauntlet_Crystalline_Form
cry Cry_Rat_Fungal_Form
cry Cry_Sparky
cry Cry_Spider_Corpse_Form
cry Cry_Spider_Fever_Form
cry Cry_Spider_Lava_Form
cry Cry_Spider_Shadow_Form
cry Cry_Stalker
cry Cry_Soulseeker
cry Cry_Stalker_Sentinel_Form
cry Cry_Night_Gazer
cry Cry_Plane_Freezer
cry Cry_World_Gorger
cry Cry_Flesh_Spoiler_Covered_Form
cry Cry_Shadow_Forger
cry Cry_Veil_Ripper
cry Cry_Unicorn_Gauntlet_Corrupted_Form
cry Cry_Unicorn_Gauntlet_Crystalline_Form
cry Cry_Wolf_Cave_Form
cry Cry_Wolf_Dragon_Form
cry Cry_Shadow_Hound
cry Cry_Border_Collie
cry Cry_Bloodhound
cry Cry_Guard_Dog
cry Cry_Lycurgus
cry Cry_Yak_Moorrissey_Form
cry Cry_Yak_Robin_Form
cry Cry_Yak_Yaktrick_Form
cry Cry_Cabbage_Sister_Form
cry Cry_Cabbage_Crispy_Form
cry Cry_Strykewyrm_Mini_Form
cry Cry_Crocodile_Normal_Form
cry Cry_Crocodile_Mutadile_Form
cry Cry_Crocodile_Ankh_Form
cry Cry_Crocodile_Ukunduka_Form
cry Cry_Bloodveld_Insatiable_Mutated_Form
cry Cry_Bloodveld_Acidic_Form
cry Cry_Bloodveld_Vampiric_Form
cry Cry_Bloodveld_RS3_Form
cry Cry_Beaver
cry Cry_Giant_Beaver
cry Cry_Racoon
cry Cry_Ralph
cry Cry_Rocky
cry Cry_Honey_Badger
cry Cry_Squirrel_Giant_Form
cry Cry_Squirrel_Australian_Form
cry Cry_Jade_Vine
cry Cry_Klik
cry Cry_Jackalope
cry Cry_Imp
cry Cry_Demon_Lesser_RS3_Form
cry Cry_Demon_Greater_RS3_Form
cry Cry_Demon_Kalgerion_Form
cry Cry_Demon_Thundereous_Form
cry Cry_Demon_Ripper_Form
cry Cry_Demon_Lesser_OSRS_Form
cry Cry_Demon_Greater_OSRS_Form
cry Cry_Demon_Tstanon_Form
cry Cry_Demon_Tormented_Form
cry Cry_Delrith
cry Cry_Demon_Lesser_Tongue_Form
cry Cry_Demon_Greater_Tongue_Form
cry Cry_Demon_Zakln_Form
cry Cry_Demon_Pummeler_Form
cry Cry_Demon_Chocolate_Form
cry Cry_Demon_Lesser_Black_Form
cry Cry_Demon_Greater_Black_Form
cry Cry_Demon_Balfrug_Form
cry Cry_Demon_Jungle_Form
cry Cry_Demon_Riftsplitter_Form
cry Cry_Snow_Imp
cry Cry_Demon_Ice_OSRS_Form
cry Cry_Demon_Ice_RS3_Form
cry Cry_Demon_Bloodchiller_Form
cry Cry_Demon_Reanimated_Form
cry Cry_Kril_Tsutsaroth
cry Cry_Pyrefiend
cry Cry_Pyrelord
cry Cry_Waterfiend
cry Cry_Waterlord
cry Cry_Icefiend
cry Cry_Icelord
cry Cry_Impling_Baby_Form
cry Cry_Impling_Magpie_Form
cry Cry_Impling_Dragon_Form
cry Cry_Impling_Kingly_Form
cry Cry_Impling_Lucky_Form
cry Cry_Penance_Spawn
cry Cry_Penance_Healer
cry Cry_Penance_Ranger
cry Cry_Penance_Runner
cry Cry_Penance_Fighter
cry Cry_Penance_Queen
cry Cry_Penance_King
cry Cry_Void_Leech
cry Cry_Void_Torcher
cry Cry_Void_Shifter
cry Cry_Void_Brawler
cry Cry_Void_Defiler
cry Cry_Void_Splatter
cry Cry_Void_Ravager
cry Cry_Void_Spinner
cry Cry_Void_Drone
cry Cry_Void_Queen
cry Cry_Anchovy
cry Cry_Anchovy_Pizza_Form
cry Cry_Red_Eye
cry Cry_Flatfish
cry Cry_Bouldabass
cry Cry_Mudskipper
cry Cry_Basilisk_Baby_Form
cry Cry_Basilisk_RS3_Form
cry Cry_Basilisk_OSRS_Form
cry Cry_Basilisk_Knight_Form
cry Cry_Spider_Ungael_Form
cry Cry_Spider_Crypt_Form
cry Cry_Spider_Temple_Form
cry Cry_Spider_ApeAtoll_Form
cry Cry_Catablepon
cry Cry_Protomastyx
cry Cry_Tyrannomastyx
cry Cry_Pig_War_Form
cry Cry_Pig_Prayer_Form
cry Cry_Pig_Pack_Form
cry Cry_Herbiboar
cry Cry_Goat_Clay_Form
cry Cry_Goat_SacredClay_Form
cry Cry_Goat_PrimordialClay_Form
cry Cry_Shadeel
cry Cry_Golem_Titan
cry Cry_Moss_Titan
cry Cry_Iron_Titan
cry Cry_Steel_Titan
cry Cry_Lava_Titan
cry Cry_Obsidian_Golem
cry Cry_Swamp_Titan
cry Cry_Ice_Titan
cry Cry_Fire_Titan
cry Cry_Geysir_Titan
cry Cry_Dark_Core
cry Cry_Corporeal_Beast
cry Cry_Corporeal_Beast_Zanik_Form
cry Cry_Compost_Mound
cry Cry_Ent
cry Cry_Derwen
cry Cry_Cockroach_Drone
cry Cry_Cockroach_Worker
cry Cry_Cockroach_Soldier
cry Cry_Cockroach_Warped_Form
cry Cry_Fiara
cry Cry_Cave_Bug
cry Cry_Malcolm
cry Cry_Meerkats
cry Cry_Origami_Balloon
cry Cry_Krill_Balloon
cry Cry_Balloon_Goat
cry Cry_Dagannoth_Mother
cry Cry_Gelatinnoth
cry Cry_Dagannoth_Daughter
cry Cry_Dagannoth_Reanimated_Form
cry Cry_Dagannoth_Spirit_Form
cry Cry_Flambeed
cry Cry_AgrithNaNa
cry Cry_Karamel
cry Cry_Dessourt
cry Cry_Sharkizard
cry Cry_Basstoise
cry Cry_Raventzhaar
cry Cry_Wall_Beast
cry Cry_Wall_Beast_Mega_Form
cry Cry_Sourhog
cry Cry_Hand_Farmhand_Form
cry Cry_Hand_Stuffed_Form
cry Cry_Hand_BrokenFingers_Form
cry Cry_Hand_DeadHand_Form
cry Cry_Hand_Dungeoneering_Form
cry Cry_Snake_Desert_Form
cry Cry_Snake_Poison_Form
cry Cry_Snake_Swamp_Form
cry Cry_Icxan
cry Cry_Skeletal_Wyvern
cry Cry_Wyvern
cry Cry_Impling_Gourmet_Form
cry Cry_Impling_Earth_Form
cry Cry_Impling_Young_Form
cry Cry_Impling_Pirate_Form
cry Cry_Impling_Ninja_Form
cry Cry_Impling_Zombie_Form
cry Cry_Impling_Eclectic_Form
cry Cry_Impling_Crystal_Form
cry Cry_Impling_Nature_Form
cry Cry_Impling_Essence_Form
cry Cry_Impling_Divine_Form
cry Cry_Impling_Spirit_Form
cry Cry_Araxyte_Baby
cry Cry_Araxyte_Acidic
cry Cry_Araxyte_Mirrorback
cry Cry_Araxyte_Pulsing
cry Cry_Araxxor
cry Cry_Araxxi
cry Cry_Glacor_Enduring_Form
cry Cry_Glacor_Sapping_Form
cry Cry_Glacor_Unstable_Form
cry Cry_Glacor
cry Cry_Glacor_Arch_Form
cry Cry_Jadinko_Common_Form
cry Cry_Jadinko_Male_Form
cry Cry_Jadinko_Queen
cry Cry_Ruby_Harvest
cry Cry_Sapphire_Glacialis
cry Cry_Snow_Knight
cry Cry_Black_Warlock
cry Cry_Forge_Regent
cry Cry_Guthixian_Butterfly
cry Cry_Charming_Moth
cry Cry_Treborn
cry Cry_Draugen
cry Cry_Macaw
cry Cry_The_Illusive
cry Cry_Doubt
cry Cry_Everlasting
cry Cry_Untouchable
cry Cry_Inadequancy
cry Cry_Chinchompa_Baby
cry Cry_Chinchompa_Grey_Baby
cry Cry_Chinchompa_Red_Baby
cry Cry_Chinchompa_Cobalt
cry Cry_Chinchompa_Viridian
cry Cry_Chinchompa_Crystal
cry Cry_Chinchompa_Plutonial
cry Cry_Chinchompa_Mechanized
cry Cry_Chinchompa_Crimson
cry Cry_Chinchompa_Black
cry Cry_Chinchompa_Giant
cry Cry_Vulture_RSHD_Form
cry Cry_Vulture_Pink_Form
cry Cry_Vulture_OSRS_Form
cry Cry_Vulture_RS3_Form
cry Cry_Beagle
cry Cry_Pug
cry Cry_Huskie
cry Cry_Shiba
cry Cry_Polar_Bear_Punished
cry Cry_Lobstrocity
cry Cry_Salamander_Yellow_Form
cry Cry_Abyssal_DeepSea_Walker
cry Cry_Abyssal_DeepSea_Leech
cry Cry_Abyssal_DeepSea_Guardian
cry Cry_Rift_Guardian
cry Cry_Coral_Guardian
cry Cry_Rewards_Guardian
cry Cry_Baboon_Normal_Form
cry Cry_Baboon_Mage_Form
cry Cry_Baboon_Shaman_Form
cry Cry_Baboon_Thrower_Form
cry Cry_Baboon_Cursed_Form
cry Cry_Baboon_Thrall_Form
cry Cry_Baboon_Volatile_Form
cry Cry_Baboon_BaBa_Form
cry Cry_Scarab_Spitting_Form
cry Cry_Scarab_Soldier_Form
cry Cry_Scarab_Arcane_Form
cry Cry_Scarab_Kephri_Form
cry Cry_Crocodile_Red_Form
cry Cry_Zebak
cry Cry_Camel_Bank_Form
cry Cry_Slime_LilGloop
cry Cry_Slime_King
cry Cry_Graahk_Forsaken_Form
cry Cry_Zygomite_Magical_Form
cry Cry_Zygomite_Zanarian_Form
cry Cry_Zygomite_Arcspore_Form
cry Cry_Zygomite_Daemoncap_Form
cry Cry_Zygomite_Ancient_Form
cry Cry_Zulrah_Serpentine_Form
cry Cry_Zulrah_Magma_Form
cry Cry_Zulrah_Tanzanite_Form
cry Cry_Pig_Summoning_Form
cry Cry_TzTok_Jad_HD_Mega_Form
cry Cry_TzTok_Jad_RS3_Mega_Form
cry Cry_Abyssal_Guardian
cry Cry_Slime_Queen
cry Cry_Airut
cry Cry_Skotizo
cry Cry_Scurrius_Melee_Form
cry Cry_Scurrius_Ranged_Form
cry Cry_Scurrius_Magic_Form
cry Cry_Broav_Zombie_Form
cry Cry_Impling_Easter_Form
cry Cry_Impling_Snow_Form
cry Cry_Impling_Wandering_Form
cry Cry_Impling_Ghost_Form
cry Cry_Vorkath
cry Cry_Fox_Pyre
cry Cry_Fox_RecruitmentDrive
cry Cry_Fox_Fennec
cry Cry_Salamander_Tecu
cry Cry_Jerboa
cry Cry_Jerboa_Embertail
cry Cry_Antelope_Sunlight_Form
cry Cry_Antelope_Moonlight_Form
cry Cry_Capybara
cry Cry_Capybara_Orange
cry Cry_Entling
cry Cry_Piggles
cry Cry_Wolpertinger_Mega_Form
cry Cry_Flesh_Spoiler_Naked_Form
cry Cry_Flesh_Spoiler_Spawnling
cry Cry_Caustic_Gazer
cry Cry_Iris_Stalker
cry Cry_Animated_Book
cry Cry_Tome_of_Strength
cry Cry_Tome_of_Ranged
cry Cry_Tome_of_Magic
cry Cry_Luminescent_Icefiend
cry Cry_Warped_Galuga
cry Cry_Submastyx
cry Cry_Paramastyx
cry Cry_Archaemastyx
cry Cry_Dromomastyx
cry Cry_Spinomastyx
cry Cry_Gallimastyx
cry Cry_Stegomastyx
cry Cry_Megamastyx
cry Cry_Jelly_Alternate_Form
cry Cry_Jelly_Dungeoneering_Form
cry Cry_Jelly_Trollweiss_Form
cry Cry_Jelly_Vitreous_Form
cry Cry_Jelly_Warped_Vitreous_Form
cry Cry_Moth_Sunlight_Form
cry Cry_Moth_Moonlight_Form
cry Cry_Stone_of_Jas_Mega_Form
cry Cry_Spirit_Warrior
cry Cry_Spirit_Ranger
cry Cry_Spirit_Mage
cry Cry_Essling
cry Cry_Esshound
cry Cry_Esswraith
cry Cry_Harpy_Eagle
cry Cry_Reborn_Warrior
cry Cry_Reborn_Ranger
cry Cry_Reborn_Mage
cry Cry_Jaguar_Orange_Form
cry Cry_Jaguar_Black_Form
cry Cry_Tortle
cry Cry_Cockatrice_OSRS_Form
cry Cry_Cockathrice
cry Cry_Cockatrice_Moonlight 
cry Cry_Revenant_Imp
cry Cry_Revenant_Dragon
cry Cry_Maledictus

cry_reverse Cry_Guthling
cry_reverse Cry_Guthbird
cry_reverse Cry_Guthraptor
cry_reverse Cry_Zamling
cry_reverse Cry_Zambird
cry_reverse Cry_Zamohawk
cry_reverse Cry_Saraling
cry_reverse Cry_Sarabird
cry_reverse Cry_Saraowl
cry_reverse Cry_Chick
cry_reverse Cry_Chicken_Normal_Form
cry_reverse Cry_Dreadfowl
cry_reverse Cry_Chicken_Varrock_Form
cry_reverse Cry_Chicken_Diving_Form
cry_reverse Cry_Chicken_Karamja_Form
cry_reverse Cry_Chicken_Death_Form
cry_reverse Cry_Chicken_Bandosian_Form
cry_reverse Cry_Chicken_War_Form
cry_reverse Cry_Rooster_Normal_Form
cry_reverse Cry_Ernest
cry_reverse Cry_Rooster_Karamja_Form
cry_reverse Cry_Oomlie
cry_reverse Cry_Rooster_Bandosian_Form
cry_reverse Cry_Chicken_Famine_Form
cry_reverse Cry_Rooster_Varrock_Form
cry_reverse Cry_Chicken_Pestilence_Form
cry_reverse Cry_Chicken_Lizard_Form
cry_reverse Cry_Chicken_Undead_Form
cry_reverse Cry_Chicken_Mystery_Form
cry_reverse Cry_EvilChicken
cry_reverse Cry_Swordchick
cry_reverse Cry_Newtroost
cry_reverse Cry_Calf
cry_reverse Cry_Cow
cry_reverse Cry_Super_Cow
cry_reverse Cry_Cow_Dairy_Form
cry_reverse Cry_Cow_Undead_Form
cry_reverse Cry_Cow_Chocolate_Form
cry_reverse Cry_Cow_Strawberry_Form
cry_reverse Cry_Cow_Vanilla_Form
cry_reverse Cry_Cow_Harlequin_Form
cry_reverse Cry_SkeletalOx_Female_Form
cry_reverse Cry_Bull
cry_reverse Cry_Bull_Elder_Form
cry_reverse Cry_SkeletalOx_Male_Form
cry_reverse Cry_Trojan_Cow
cry_reverse Cry_Cow_Plague_Form
cry_reverse Cry_Minotaur_Normal_Form
cry_reverse Cry_Minotaur_Rune_Form
cry_reverse Cry_Unicow
cry_reverse Cry_Rat_Normal_Form
cry_reverse Cry_Giant_Rat_Normal_Form
cry_reverse Cry_Brine_Rat
cry_reverse Cry_Giant_Rat_Blessed_Form
cry_reverse Cry_Rat_Hell_Form
cry_reverse Cry_Giant_Rat_Hell_Form
cry_reverse Cry_Shell_Rat
cry_reverse Cry_Rat_Crypt_Form
cry_reverse Cry_Giant_Rat_Crypt_Form
cry_reverse Cry_Warped_Rat
cry_reverse Cry_Zombie_Rat
cry_reverse Cry_Giant_Rat_Dungeon_Form
cry_reverse Cry_Rat_King_Form
cry_reverse Cry_Giant_Rat_King_Form
cry_reverse Cry_Albino_Rat
cry_reverse Cry_Angry_Rat
cry_reverse Cry_Experiment_2_Form
cry_reverse Cry_Lamb
cry_reverse Cry_Sheep_White_Form
cry_reverse Cry_Sheep_Plague_Form
cry_reverse Cry_Sheep_Black_Form
cry_reverse Cry_Ram_Fluffy_Form
cry_reverse Cry_Ram_Shaggy_Form
cry_reverse Cry_Ram_Golden_Form
cry_reverse Cry_Sheep_Pirate_Form
cry_reverse Cry_Goat_Billy_Form
cry_reverse Cry_Goat_Desert_Form
cry_reverse Cry_Goat_Mountain_Form
cry_reverse Cry_Gorak
cry_reverse Cry_Sardine
cry_reverse Cry_Herring
cry_reverse Cry_Trout_Normal_Form
cry_reverse Cry_Swordfish
cry_reverse Cry_Trout_Leaping_Form
cry_reverse Cry_Sturgeon
cry_reverse Cry_Trout_Tropical_Form
cry_reverse Cry_Sailfish
cry_reverse Cry_Thallasus
cry_reverse Cry_Bass
cry_reverse Cry_Salmon_Normal_Form
cry_reverse Cry_Shark_Normal_Form
cry_reverse Cry_Fury_Shark
cry_reverse Cry_Salmon_Leaping_Form
cry_reverse Cry_Shark_GreatWhite_Form
cry_reverse Cry_Shark_Tiger_Form
cry_reverse Cry_Mackerel
cry_reverse Cry_Catfish
cry_reverse Cry_Shark_Baron_Form
cry_reverse Cry_Tarpon
cry_reverse Cry_Seerfish
cry_reverse Cry_DesertSole
cry_reverse Cry_Sillago
cry_reverse Cry_Wobbegong
cry_reverse Cry_Karambwanj
cry_reverse Cry_Karambwan
cry_reverse Cry_Whitefish
cry_reverse Cry_Beltfish
cry_reverse Cry_Manta_Ray
cry_reverse Cry_Cod
cry_reverse Cry_Rainbow
cry_reverse Cry_Shark_Golden_Form
cry_reverse Cry_Pike
cry_reverse Cry_Monkfish_Normal_Form
cry_reverse Cry_AnglerFish
cry_reverse Cry_Giant_Carp
cry_reverse Cry_Monkfish_Fresh_Form
cry_reverse Cry_Monkfish_Golden_Form
cry_reverse Cry_GoblinFish
cry_reverse Cry_Pet_Fish
cry_reverse Cry_Gilbert
cry_reverse Cry_Cavefish
cry_reverse Cry_Rocktail
cry_reverse Cry_Eel_Slimy_Form
cry_reverse Cry_Eel_Cave_Form
cry_reverse Cry_Eel_Sacred_Form
cry_reverse Cry_Eel_Lava_Form
cry_reverse Cry_Eel_Infernal_Form
cry_reverse Cry_Eel_Mottled_Form
cry_reverse Cry_Eel_Short_Finned_Form
cry_reverse Cry_Eel_Salve_Form
cry_reverse Cry_Eel_Dusk_Form
cry_reverse Cry_Cave_Moray
cry_reverse Cry_Vile_Fish
cry_reverse Cry_Piglet
cry_reverse Cry_Pig
cry_reverse Cry_Pigzilla
cry_reverse Cry_Puppy_Pup_Form
cry_reverse Cry_Puppy_Mutt_Form
cry_reverse Cry_Terrier
cry_reverse Cry_Sheepdog
cry_reverse Cry_Dalmatian
cry_reverse Cry_Greyhound
cry_reverse Cry_Bulldog
cry_reverse Cry_Labrador
cry_reverse Cry_Corgi
cry_reverse Cry_Terror_Dog
cry_reverse Cry_Stray_Dog
cry_reverse Cry_Muncher
cry_reverse Cry_Hellpuppy
cry_reverse Cry_Hellhound
cry_reverse Cry_Cerberus
cry_reverse Cry_Kitten
cry_reverse Cry_Cat_Normal_Form
cry_reverse Cry_Cat_Overgrown_Form
cry_reverse Cry_Cat_Lazy_Form
cry_reverse Cry_Cat_Wily_Form
cry_reverse Cry_Cat_Purple_Form
cry_reverse Cry_Cat_Hell_Form
cry_reverse Cry_Cat_Post_Form
cry_reverse Cry_Cat_Sunken_Form
cry_reverse Cry_Bob
cry_reverse Cry_Evil_Bob
cry_reverse Cry_Pet_Rock
cry_reverse Cry_Rock_Polished_Form
cry_reverse Cry_Pillar
cry_reverse Cry_Rock_Soup
cry_reverse Cry_Slagilith
cry_reverse Cry_Rock_Strange_Form
cry_reverse Cry_Rock_Golden_Form
cry_reverse Cry_Party_Rock
cry_reverse Cry_Strykewyrm_Freezy_Form
cry_reverse Cry_Strykewyrm_Leafy_Form
cry_reverse Cry_Strykewyrm_Sandy_Form
cry_reverse Cry_Strykewyrm_Wildy_Form
cry_reverse Cry_Scorpling
cry_reverse Cry_Scorpion_Normal_Form
cry_reverse Cry_Scorpion_Pit_Form
cry_reverse Cry_Scorpion_Poison_Form
cry_reverse Cry_Scorpion_King_Form
cry_reverse Cry_Scorpion_Grave_Form
cry_reverse Cry_Scorpion_Corrupted_Form
cry_reverse Cry_Scorpion_Reanimated_Form
cry_reverse Cry_Scorpion_Gauntlet_Crystalline_Form
cry_reverse Cry_Scorpion_Gauntlet_Corrupted_Form
cry_reverse Cry_Scorpion_Khazard_Form
cry_reverse Cry_Scorpion_Spirit_Form
cry_reverse Cry_Scorpia
cry_reverse Cry_Dreadnip
cry_reverse Cry_Peepling
cry_reverse Cry_Sneakrpeep
cry_reverse Cry_Runtstable
cry_reverse Cry_Basilisk
cry_reverse Cry_Baby_Mole
cry_reverse Cry_Giant_Mole
cry_reverse Cry_Squirrel
cry_reverse Cry_Ravenling
cry_reverse Cry_Raven_Normal_Form
cry_reverse Cry_Raven_Nevermore_Form
cry_reverse Cry_Raven_Spooky_Form
cry_reverse Cry_Raven_Crystal_Form
cry_reverse Cry_Crow
cry_reverse Cry_Magpie
cry_reverse Cry_Chinchompa_Grey_Form
cry_reverse Cry_Chinchompa_Red_Form
cry_reverse Cry_Chinchompa_Gold_Form
cry_reverse Cry_Vultling
cry_reverse Cry_Vulture
cry_reverse Cry_Pengling
cry_reverse Cry_Penguin
cry_reverse Cry_Penguin_Clockwork_Form
cry_reverse Cry_The_Thing
cry_reverse Cry_Ping
cry_reverse Cry_Pong
cry_reverse Cry_Penguin_McGraw_Form
cry_reverse Cry_Penguin_Spy_Form
cry_reverse Cry_Penguin_Agent_Form
cry_reverse Cry_Penguin_Disguise_Cactus_Form
cry_reverse Cry_Penguin_Disguise_Rock_Form
cry_reverse Cry_Penguin_Disguise_Bush_Form
cry_reverse Cry_Penguin_Disguise_Box_Form
cry_reverse Cry_ExExParrot
cry_reverse Cry_Broav
cry_reverse Cry_Tooths
cry_reverse Cry_Rune_Guardian
cry_reverse Cry_Gnomey
cry_reverse Cry_Sparkles
cry_reverse Cry_Bat
cry_reverse Cry_Giant_Bat
cry_reverse Cry_Warped_Bat
cry_reverse Cry_Albino_Bat
cry_reverse Cry_Bat_Box_Form
cry_reverse Cry_Fruit_Bat
cry_reverse Cry_VampyreBat
cry_reverse Cry_Deathwing
cry_reverse Cry_Shaikah
cry_reverse Cry_Growler
cry_reverse Cry_Phoenling_Rebirth_Form
cry_reverse Cry_Phoenling_Reborn_Form
cry_reverse Cry_Phoenix_Rebirth_Form
cry_reverse Cry_Phoenix_Reborn_Form
cry_reverse Cry_Plant_Strange_Form
cry_reverse Cry_Plant_Stranger_Form
cry_reverse Cry_EvilTurnip
cry_reverse Cry_Creature_Cute_Form
cry_reverse Cry_Creature_Evil_Form
cry_reverse Cry_Baby_Yak
cry_reverse Cry_Yak_Normal_Form
cry_reverse Cry_Yak_Pack_Form
cry_reverse Cry_Yak_Sacred_Form
cry_reverse Cry_Yak_ClueScroll_Form
cry_reverse Cry_Yak_Undead_Form
cry_reverse Cry_Yak_Snack_Form
cry_reverse Cry_Minitrice
cry_reverse Cry_Cockatrice
cry_reverse Cry_Guthatrice
cry_reverse Cry_Zamatrice
cry_reverse Cry_Saratrice
cry_reverse Cry_Corxatrice
cry_reverse Cry_Vulatrice
cry_reverse Cry_Pengatrice
cry_reverse Cry_Chocatrice
cry_reverse Cry_Sproutling_Summer_Form
cry_reverse Cry_Sproutling_Spring_Form
cry_reverse Cry_Sproutling_Winter_Form
cry_reverse Cry_Sproutling_Autumn_Form
cry_reverse Cry_Rue
cry_reverse Cry_Monty
cry_reverse Cry_Zygomite
cry_reverse Cry_Abyssaling
cry_reverse Cry_Abyssal_Minion_Form
cry_reverse Cry_Abyssal_Demon_Form
cry_reverse Cry_Abyssal_Sire_Form
cry_reverse Cry_Abyssal_Leech_Form
cry_reverse Cry_Abyssal_Parasite_Form
cry_reverse Cry_Abyssal_Lurker_Form
cry_reverse Cry_Abyssal_Walker_Form
cry_reverse Cry_Abyssal_Titan_Form
cry_reverse Cry_Tz_Kih
cry_reverse Cry_Tz_Kek
cry_reverse Cry_Tok_Xil
cry_reverse Cry_Tz_Kih_Spirit_Form
cry_reverse Cry_Ket_Dill
cry_reverse Cry_Ket_Zek
cry_reverse Cry_Yt_HurKot
cry_reverse Cry_Yt_MejKot
cry_reverse Cry_TzRek_Jad
cry_reverse Cry_TzTok_Jad
cry_reverse Cry_JalTok_Jad
cry_reverse Cry_Jal_MejRah
cry_reverse Cry_Jal_Ak
cry_reverse Cry_Jal_Xil
cry_reverse Cry_Jal_Nib
cry_reverse Cry_Jal_ImKot
cry_reverse Cry_Jal_Zek
cry_reverse Cry_TzKal_Zuk
cry_reverse Cry_Duckling
cry_reverse Cry_Swan
cry_reverse Cry_Duck_Normal_Form
cry_reverse Cry_Mega_Duck
cry_reverse Cry_Duck_Cart_Form
cry_reverse Cry_Platypode
cry_reverse Cry_Platypus
cry_reverse Cry_Fledgling
cry_reverse Cry_Dagannoth_Normal_Form
cry_reverse Cry_Dagannoth_Guardian_Form
cry_reverse Cry_Dagannoth_King_Range_Form
cry_reverse Cry_Dagannoth_King_Magic_Form
cry_reverse Cry_Dagannoth_King_Melee_Form
cry_reverse Cry_Dagannoth_King_Range_Mega_Form
cry_reverse Cry_Dagannoth_King_Magic_Mega_Form
cry_reverse Cry_Dagannoth_King_Melee_Mega_Form
cry_reverse Cry_Chaos_Ele
cry_reverse Cry_Chaos_Ele_Mega_Form
cry_reverse Cry_Bandling
cry_reverse Cry_Bandbird
cry_reverse Cry_Bandeagle
cry_reverse Cry_Zaroling
cry_reverse Cry_Zarobird
cry_reverse Cry_Zaraven
cry_reverse Cry_Sereling
cry_reverse Cry_Serebird
cry_reverse Cry_Serepea
cry_reverse Cry_Frogspawn
cry_reverse Cry_Frog_Normal_Form
cry_reverse Cry_Giant_Frog_Normal_Form
cry_reverse Cry_Giant_Frog_Royal_Form
cry_reverse Cry_Frog_Bloated_Form
cry_reverse Cry_Frog_Balloon_Form
cry_reverse Cry_Toad_Barker_Form
cry_reverse Cry_Frogeel
cry_reverse Cry_Spiderling
cry_reverse Cry_Spider_Giant_Form
cry_reverse Cry_Spider_DeadlyRed_Form
cry_reverse Cry_Spider_Jungle_Form
cry_reverse Cry_Spider_Blessed_Form
cry_reverse Cry_Spider_Huge_Form
cry_reverse Cry_Spider_Night_Form
cry_reverse Cry_Spider_Ice_Form
cry_reverse Cry_Spider_Spirit_Form
cry_reverse Cry_Eek
cry_reverse Cry_MinstrlWeb
cry_reverse Cry_Sarachnis
cry_reverse Cry_Venenatis
cry_reverse Cry_Spidine
cry_reverse Cry_Crayfish
cry_reverse Cry_Shrimp
cry_reverse Cry_Lobster_Normal_Form
cry_reverse Cry_Lobster_Golden_Form
cry_reverse Cry_Lobster_Giant_Form
cry_reverse Cry_Lobster_Heim_Form
cry_reverse Cry_Lobster_Obsidian_Form
cry_reverse Cry_Crab_Red_Form
cry_reverse Cry_Giant_Crab_Red_Form
cry_reverse Cry_Crab_Moss_Form
cry_reverse Cry_Giant_Crab_Moss_Form
cry_reverse Cry_Crab_RumPumped_Form
cry_reverse Cry_Giant_Crab_RumPumped_Form
cry_reverse Cry_Crab_Dark_Form
cry_reverse Cry_Giant_Crab_Dark_Form
cry_reverse Cry_Crab_Grey_Form
cry_reverse Cry_Giant_Crab_Grey_Form
cry_reverse Cry_Knife_Crab
cry_reverse Cry_Heim_Crab
cry_reverse Cry_WebSnipper
cry_reverse Cry_Blue_Crab
cry_reverse Cry_Crablet_First_Form
cry_reverse Cry_Crablet_Second_Form
cry_reverse Cry_Crablet_Third_Form
cry_reverse Cry_Crablet_Forth_Form
cry_reverse Cry_Crablet_Fifth_Form
cry_reverse Cry_Crawler_Cave_Form
cry_reverse Cry_Crawler_Chasm_Form
cry_reverse Cry_Crawler_Monstrous_Form
cry_reverse Cry_Winston
cry_reverse Cry_Tortoise_Normal_Form
cry_reverse Cry_Tortoise_Warped_Form
cry_reverse Cry_Tortoise_War_Form
cry_reverse Cry_Valluta
cry_reverse Cry_Sea_Turtle
cry_reverse Cry_Sea_Turtle_Treasure_Form
cry_reverse Cry_Herbert
cry_reverse Cry_Xinachto
cry_reverse Cry_Cave_Slime
cry_reverse Cry_Jelly_Normal_Form
cry_reverse Cry_Jelly_Warped_Form
cry_reverse Cry_Jelly_Spirit_Form
cry_reverse Cry_AbbySpectr
cry_reverse Cry_Salamander_Green_Form
cry_reverse Cry_Salamander_Orange_Form
cry_reverse Cry_Salamander_Red_Form
cry_reverse Cry_Salamander_Black_Form
cry_reverse Cry_Salamander_Augmented_Form
cry_reverse Cry_Gecko
cry_reverse Cry_Chameleon
cry_reverse Cry_Bloodveld
cry_reverse Cry_Bloodveld_Insatiable_Physical_Form
cry_reverse Cry_Bloodveld_Insatiable_Special_Form
cry_reverse Cry_Bloodveld_Mutated_Physical_Form
cry_reverse Cry_Bloodveld_Mutated_Special_Form
cry_reverse Cry_Reaver
cry_reverse Cry_Armaling
cry_reverse Cry_Armabird
cry_reverse Cry_Armafalcon
cry_reverse Cry_Ungodling
cry_reverse Cry_Ungodbird
cry_reverse Cry_Ungodgeon
cry_reverse Cry_Tumekling
cry_reverse Cry_Tumekbird
cry_reverse Cry_Tumekibis
cry_reverse Cry_Kerrit
cry_reverse Cry_Snuffle
cry_reverse Cry_Popoca
cry_reverse Cry_Choloa
cry_reverse Cry_Durzag
cry_reverse Cry_Yakamaru
cry_reverse Cry_Chompy
cry_reverse Cry_Jubbly
cry_reverse Cry_Jubster
cry_reverse Cry_Terrorbird_Normal_Form
cry_reverse Cry_Terrorbird_Warped_Form
cry_reverse Cry_Terrorbird_Spirit_Form
cry_reverse Cry_Wolf_Juvenile_Form
cry_reverse Cry_Wolf_Normal_Form
cry_reverse Cry_Wolf_Fenris_Form
cry_reverse Cry_Wolf_White_Form
cry_reverse Cry_Rover
cry_reverse Cry_Wolf_Dire_Form
cry_reverse Cry_Wolf_Jungle_Form
cry_reverse Cry_Wolf_Skoll_Form
cry_reverse Cry_Wolf_Desert_Form
cry_reverse Cry_Wolf_Hati_Hati
cry_reverse Cry_Wolf_Spirit_Form
cry_reverse Cry_Fox
cry_reverse Cry_Inari
cry_reverse Cry_Helwyr
cry_reverse Cry_Bird_Nest
cry_reverse Cry_Birds_Nest_God_Form
cry_reverse Cry_Pigeon
cry_reverse Cry_Pheasant
cry_reverse Cry_Rocling
cry_reverse Cry_Roc
cry_reverse Cry_Foal
cry_reverse Cry_Unicorn_White_Form
cry_reverse Cry_Unicorn_Stallion_Form
cry_reverse Cry_Unicorn_Black_Form
cry_reverse Cry_Unicorn_Angry_Form
cry_reverse Cry_Unicorn_Reanimated_Form
cry_reverse Cry_Starlight
cry_reverse Cry_Pawya
cry_reverse Cry_Grenwall
cry_reverse Cry_Bear_Cub
cry_reverse Cry_Bear_Normal_Form
cry_reverse Cry_Bear_Reanimated_Form
cry_reverse Cry_Bear_Gauntlet_Crystalline_Form
cry_reverse Cry_Callisto
cry_reverse Cry_Polar_Bear_Normal_Form
cry_reverse Cry_Polar_Bear_PBJ_Agent_Form
cry_reverse Cry_Polar_Bear_Arctic_Form
cry_reverse Cry_Polar_Bear_Nanuq_Form
cry_reverse Cry_Bear_Grizzly_Form
cry_reverse Cry_Kendall
cry_reverse Cry_Bear_Gauntlet_Corrupted_Form
cry_reverse Cry_Bear_Angry_Form
cry_reverse Cry_Graahk_Normal_Form
cry_reverse Cry_Graahk_Spirit_Form
cry_reverse Cry_Dust_Devil
cry_reverse Cry_SmokeDevil
cry_reverse Cry_SmokeDevil_Nuclear_Form
cry_reverse Cry_ChokeDevil
cry_reverse Cry_SmokeDevil_Thermonuclear_Form
cry_reverse Cry_Hatchling
cry_reverse Cry_Dragonling_Green_Form
cry_reverse Cry_Dragon_Green_Form
cry_reverse Cry_Dragon_Brutal_Green_Form
cry_reverse Cry_Dragonling_Blue_Form
cry_reverse Cry_Dragon_Blue_Form
cry_reverse Cry_Dragon_Brutal_Blue_Form
cry_reverse Cry_Dragonling_Red_Form
cry_reverse Cry_Dragon_Red_Form
cry_reverse Cry_Dragon_Brutal_Red_Form
cry_reverse Cry_Dragonling_Black_Form
cry_reverse Cry_Dragon_Black_Form
cry_reverse Cry_Dragon_Brutal_Black_Form
cry_reverse Cry_Dragon_ThreeHeaded_Form
cry_reverse Cry_Elvarg
cry_reverse Cry_Dragon_King_Black_Form
cry_reverse Cry_Dragon_Queen_Black_Form
cry_reverse Cry_Hand_Creeping_Form
cry_reverse Cry_Hand_Crawling_Form
cry_reverse Cry_Hand_Skeletal_Form
cry_reverse Cry_Hand_Crushing_Form
cry_reverse Cry_Hand_Zombie_Form
cry_reverse Cry_Turoth
cry_reverse Cry_Turoth_Mightiest_Form
cry_reverse Cry_Big_Turoth
cry_reverse Cry_Sockroth
cry_reverse Cry_Lilrask
cry_reverse Cry_Kurask
cry_reverse Cry_Kurask_King_Form
cry_reverse Cry_Kurask_Overlord_Form
cry_reverse Cry_Kebbit
cry_reverse Cry_Kebbit_Polar_Form
cry_reverse Cry_Kebbit_Sabre_Form
cry_reverse Cry_Kebbit_Spotted_Form
cry_reverse Cry_Kebbit_Dark_Form
cry_reverse Cry_Kebbit_Dashing_Form
cry_reverse Cry_Kebbit_Wild_Form
cry_reverse Cry_Kebbit_Prickly_Form
cry_reverse Cry_Kebbit_Razor_Form
cry_reverse Cry_Kebbit_Big_Form
cry_reverse Cry_Kebbit_DesertDevil_Form
cry_reverse Cry_Kebbit_Feldip_Weasel_Form
cry_reverse Cry_Kebbit_Barbed_Form
cry_reverse Cry_Kebbit_Diseased_Form
cry_reverse Cry_Kebbit_Chocolate_Form
cry_reverse Cry_Monkey_Normal_Form
cry_reverse Cry_Monkey_Ninja_Form
cry_reverse Cry_Gorilla_Normal_Form
cry_reverse Cry_Monkey_Zombie_Form
cry_reverse Cry_Gorilla_Ancient_Form
cry_reverse Cry_Monkey_Harmless_Form
cry_reverse Cry_Monkey_Ghost_Form
cry_reverse Cry_Gorilla_Ayuni_Form
cry_reverse Cry_Gorilla_Leeuni_Form
cry_reverse Cry_Gorilla_Eruni_Form
cry_reverse Cry_Monkey_Karamja_Baby_Form
cry_reverse Cry_Monkey_Karamja_Adult_Form
cry_reverse Cry_Larupia_Normal_Form
cry_reverse Cry_Larupia_Spirit_Form
cry_reverse Cry_Kyatt_Normal_Form
cry_reverse Cry_Kyatt_Spirit_Form
cry_reverse Cry_Crabling
cry_reverse Cry_Rock_Crab_Normal_Form
cry_reverse Cry_Rock_Crab_Giant_Normal_Form
cry_reverse Cry_Rock_Crab_Ammonite_Form
cry_reverse Cry_Rock_Crab_Giant_Ammonite_Form
cry_reverse Cry_Rock_Crab_Sand_Form
cry_reverse Cry_Rock_Crab_Giant_Sand_Form
cry_reverse Cry_Rock_Crab_Swamp_Form
cry_reverse Cry_Rock_Crab_Giant_Swamp_Form
cry_reverse Cry_Crab_Granite_Form
cry_reverse Cry_Lobster_Granite_Form
cry_reverse Cry_Lobster_Rock_Form
cry_reverse Cry_Rabbit
cry_reverse Cry_Wolperting
cry_reverse Cry_Bunyip
cry_reverse Cry_TalonBeast_Talon_Form
cry_reverse Cry_TalonBeast_Nail_Form
cry_reverse Cry_Ferret
cry_reverse Cry_Toy_Mouse
cry_reverse Cry_Toy_Doll
cry_reverse Cry_Toy_Soldier
cry_reverse Cry_Cat_Clockwork_Form
cry_reverse Cry_Magicarpet
cry_reverse Cry_Anichair
cry_reverse Cry_Exoraxe
cry_reverse Cry_Spookaxe
cry_reverse Cry_Dobbin
cry_reverse Cry_Marionette
cry_reverse Cry_DragonKite
cry_reverse Cry_Animour
cry_reverse Cry_Dead_Tree
cry_reverse Cry_Jadinko
cry_reverse Cry_Killerwatt
cry_reverse Cry_Mackers
cry_reverse Cry_Turkey_Female_Form
cry_reverse Cry_Turkey_Male_Form
cry_reverse Cry_Turkey_Protestor_Form
cry_reverse Cry_Toucan_Tenacious_Male_Form
cry_reverse Cry_Toucan_Tenacious_Female_Form
cry_reverse Cry_Toucan_Tuai_Leit_Form
cry_reverse Cry_Jellyfish_Blubber_Form
cry_reverse Cry_Jellyfish
cry_reverse Cry_Pure
cry_reverse Cry_Rune
cry_reverse Cry_Essence
cry_reverse Cry_Seagull_Normal_Form
cry_reverse Cry_Pelican
cry_reverse Cry_Albatross
cry_reverse Cry_Seagull_Hattenkrapper_Form
cry_reverse Cry_Seagull_Koppenploppen_Form
cry_reverse Cry_Seagull_Steven_Form
cry_reverse Cry_Ibis
cry_reverse Cry_DesertWyrm
cry_reverse Cry_Wyrm
cry_reverse Cry_Snake_Normal_Form
cry_reverse Cry_Cobra_Normal_Form
cry_reverse Cry_Cobra_Spirit_Form
cry_reverse Cry_Juna
cry_reverse Cry_Snake_Sea_Form
cry_reverse Cry_Big_Snake_Sea_Form
cry_reverse Cry_Thingumwut
cry_reverse Cry_Experiment_3_Form
cry_reverse Cry_Cabbage
cry_reverse Cry_Ughtanki
cry_reverse Cry_Camel
cry_reverse Cry_Camel_Warrior_Form
cry_reverse Cry_BalanceEle
cry_reverse Cry_Kalphite_Larva_Form
cry_reverse Cry_Kalphite_Worker_Form
cry_reverse Cry_Kalphite_Soldier_Form
cry_reverse Cry_Kalphite_Spirit_Form
cry_reverse Cry_Kalphite_Guardian_Form
cry_reverse Cry_Kalphite_Queen_Form
cry_reverse Cry_Kalphite_Queen_Mega_Form
cry_reverse Cry_Kalphite_Paragon_Form
cry_reverse Cry_Kalphite_Corrupted_Form
cry_reverse Cry_Kalphite_Marauder_Form
cry_reverse Cry_Kalphite_King_Form
cry_reverse Cry_Kalphite_Dung_Form
cry_reverse Cry_Kalphite_Reanimated_Form
cry_reverse Cry_Abyssal_Demon_Reanimated_Form
cry_reverse Cry_Bat_Gauntlet_Corrupted_Form
cry_reverse Cry_Bat_Gauntlet_Crystalline_Form
cry_reverse Cry_Bloodveld_Reanimated_Form
cry_reverse Cry_Dark_Beast_Gauntlet_Corrupted_Form
cry_reverse Cry_Dark_Beast_Gauntlet_Crystalline_Form
cry_reverse Cry_Dark_Beast_Pup_Form
cry_reverse Cry_Dark_Beast_Normal_Form
cry_reverse Cry_Dark_Beast_Sotetseg_Form
cry_reverse Cry_Experiment_4_Form
cry_reverse Cry_Experiment_5_Form
cry_reverse Cry_Ganodermic_Beast
cry_reverse Cry_Grifolapine
cry_reverse Cry_Grifolaroo
cry_reverse Cry_Sporaxe
cry_reverse Cry_Headless_Beast
cry_reverse Cry_Behemoth_Normal_Form
cry_reverse Cry_Behemoth_Adolscent_Form
cry_reverse Cry_Siege_Beast
cry_reverse Cry_Bulwark_Beast
cry_reverse Cry_Behemoth_Gluttonous_Form
cry_reverse Cry_Behemoth_Runebound_Form
cry_reverse Cry_Stomp
cry_reverse Cry_Hope_Devourer
cry_reverse Cry_Karamthulu_Overlord
cry_reverse Cry_Light_Creature
cry_reverse Cry_Minotaur_Reanimated_Form
cry_reverse Cry_Monkey_Reanimated_Form
cry_reverse Cry_Rat_Gauntlet_Corrupted_Form
cry_reverse Cry_Rat_Gauntlet_Crystalline_Form
cry_reverse Cry_Rat_Fungal_Form
cry_reverse Cry_Sparky
cry_reverse Cry_Spider_Corpse_Form
cry_reverse Cry_Spider_Fever_Form
cry_reverse Cry_Spider_Lava_Form
cry_reverse Cry_Spider_Shadow_Form
cry_reverse Cry_Stalker
cry_reverse Cry_Soulseeker
cry_reverse Cry_Stalker_Sentinel_Form
cry_reverse Cry_Night_Gazer
cry_reverse Cry_Plane_Freezer
cry_reverse Cry_World_Gorger
cry_reverse Cry_Flesh_Spoiler_Covered_Form
cry_reverse Cry_Shadow_Forger
cry_reverse Cry_Veil_Ripper
cry_reverse Cry_Unicorn_Gauntlet_Corrupted_Form
cry_reverse Cry_Unicorn_Gauntlet_Crystalline_Form
cry_reverse Cry_Wolf_Cave_Form
cry_reverse Cry_Wolf_Dragon_Form
cry_reverse Cry_Shadow_Hound
cry_reverse Cry_Border_Collie
cry_reverse Cry_Bloodhound
cry_reverse Cry_Guard_Dog
cry_reverse Cry_Lycurgus
cry_reverse Cry_Yak_Moorrissey_Form
cry_reverse Cry_Yak_Robin_Form
cry_reverse Cry_Yak_Yaktrick_Form
cry_reverse Cry_Cabbage_Sister_Form
cry_reverse Cry_Cabbage_Crispy_Form
cry_reverse Cry_Strykewyrm_Mini_Form
cry_reverse Cry_Crocodile_Normal_Form
cry_reverse Cry_Crocodile_Mutadile_Form
cry_reverse Cry_Crocodile_Ankh_Form
cry_reverse Cry_Crocodile_Ukunduka_Form
cry_reverse Cry_Bloodveld_Insatiable_Mutated_Form
cry_reverse Cry_Bloodveld_Acidic_Form
cry_reverse Cry_Bloodveld_Vampiric_Form
cry_reverse Cry_Bloodveld_RS3_Form
cry_reverse Cry_Beaver
cry_reverse Cry_Giant_Beaver
cry_reverse Cry_Racoon
cry_reverse Cry_Ralph
cry_reverse Cry_Rocky
cry_reverse Cry_Honey_Badger
cry_reverse Cry_Squirrel_Giant_Form
cry_reverse Cry_Squirrel_Australian_Form
cry_reverse Cry_Jade_Vine
cry_reverse Cry_Klik
cry_reverse Cry_Jackalope
cry_reverse Cry_Imp
cry_reverse Cry_Demon_Lesser_RS3_Form
cry_reverse Cry_Demon_Greater_RS3_Form
cry_reverse Cry_Demon_Kalgerion_Form
cry_reverse Cry_Demon_Thundereous_Form
cry_reverse Cry_Demon_Ripper_Form
cry_reverse Cry_Demon_Lesser_OSRS_Form
cry_reverse Cry_Demon_Greater_OSRS_Form
cry_reverse Cry_Demon_Tstanon_Form
cry_reverse Cry_Demon_Tormented_Form
cry_reverse Cry_Delrith
cry_reverse Cry_Demon_Lesser_Tongue_Form
cry_reverse Cry_Demon_Greater_Tongue_Form
cry_reverse Cry_Demon_Zakln_Form
cry_reverse Cry_Demon_Pummeler_Form
cry_reverse Cry_Demon_Chocolate_Form
cry_reverse Cry_Demon_Lesser_Black_Form
cry_reverse Cry_Demon_Greater_Black_Form
cry_reverse Cry_Demon_Balfrug_Form
cry_reverse Cry_Demon_Jungle_Form
cry_reverse Cry_Demon_Riftsplitter_Form
cry_reverse Cry_Snow_Imp
cry_reverse Cry_Demon_Ice_OSRS_Form
cry_reverse Cry_Demon_Ice_RS3_Form
cry_reverse Cry_Demon_Bloodchiller_Form
cry_reverse Cry_Demon_Reanimated_Form
cry_reverse Cry_Kril_Tsutsaroth
cry_reverse Cry_Pyrefiend
cry_reverse Cry_Pyrelord
cry_reverse Cry_Waterfiend
cry_reverse Cry_Waterlord
cry_reverse Cry_Icefiend
cry_reverse Cry_Icelord
cry_reverse Cry_Impling_Baby_Form
cry_reverse Cry_Impling_Magpie_Form
cry_reverse Cry_Impling_Dragon_Form
cry_reverse Cry_Impling_Kingly_Form
cry_reverse Cry_Impling_Lucky_Form
cry_reverse Cry_Penance_Spawn
cry_reverse Cry_Penance_Healer
cry_reverse Cry_Penance_Ranger
cry_reverse Cry_Penance_Runner
cry_reverse Cry_Penance_Fighter
cry_reverse Cry_Penance_Queen
cry_reverse Cry_Penance_King
cry_reverse Cry_Void_Leech
cry_reverse Cry_Void_Torcher
cry_reverse Cry_Void_Shifter
cry_reverse Cry_Void_Brawler
cry_reverse Cry_Void_Defiler
cry_reverse Cry_Void_Splatter
cry_reverse Cry_Void_Ravager
cry_reverse Cry_Void_Spinner
cry_reverse Cry_Void_Drone
cry_reverse Cry_Void_Queen
cry_reverse Cry_Anchovy
cry_reverse Cry_Anchovy_Pizza_Form
cry_reverse Cry_Red_Eye
cry_reverse Cry_Flatfish
cry_reverse Cry_Bouldabass
cry_reverse Cry_Mudskipper
cry_reverse Cry_Basilisk_Baby_Form
cry_reverse Cry_Basilisk_RS3_Form
cry_reverse Cry_Basilisk_OSRS_Form
cry_reverse Cry_Basilisk_Knight_Form
cry_reverse Cry_Spider_Ungael_Form
cry_reverse Cry_Spider_Crypt_Form
cry_reverse Cry_Spider_Temple_Form
cry_reverse Cry_Spider_ApeAtoll_Form
cry_reverse Cry_Catablepon
cry_reverse Cry_Protomastyx
cry_reverse Cry_Tyrannomastyx
cry_reverse Cry_Pig_War_Form
cry_reverse Cry_Pig_Prayer_Form
cry_reverse Cry_Pig_Pack_Form
cry_reverse Cry_Herbiboar
cry_reverse Cry_Goat_Clay_Form
cry_reverse Cry_Goat_SacredClay_Form
cry_reverse Cry_Goat_PrimordialClay_Form
cry_reverse Cry_Shadeel
cry_reverse Cry_Golem_Titan
cry_reverse Cry_Moss_Titan
cry_reverse Cry_Iron_Titan
cry_reverse Cry_Steel_Titan
cry_reverse Cry_Lava_Titan
cry_reverse Cry_Obsidian_Golem
cry_reverse Cry_Swamp_Titan
cry_reverse Cry_Ice_Titan
cry_reverse Cry_Fire_Titan
cry_reverse Cry_Geysir_Titan
cry_reverse Cry_Dark_Core
cry_reverse Cry_Corporeal_Beast
cry_reverse Cry_Corporeal_Beast_Zanik_Form
cry_reverse Cry_Compost_Mound
cry_reverse Cry_Ent
cry_reverse Cry_Derwen
cry_reverse Cry_Cockroach_Drone
cry_reverse Cry_Cockroach_Worker
cry_reverse Cry_Cockroach_Soldier
cry_reverse Cry_Cockroach_Warped_Form
cry_reverse Cry_Fiara
cry_reverse Cry_Cave_Bug
cry_reverse Cry_Malcolm
cry_reverse Cry_Meerkats
cry_reverse Cry_Origami_Balloon
cry_reverse Cry_Krill_Balloon
cry_reverse Cry_Balloon_Goat
cry_reverse Cry_Dagannoth_Mother
cry_reverse Cry_Gelatinnoth
cry_reverse Cry_Dagannoth_Daughter
cry_reverse Cry_Dagannoth_Reanimated_Form
cry_reverse Cry_Dagannoth_Spirit_Form
cry_reverse Cry_Flambeed
cry_reverse Cry_AgrithNaNa
cry_reverse Cry_Karamel
cry_reverse Cry_Dessourt
cry_reverse Cry_Sharkizard
cry_reverse Cry_Basstoise
cry_reverse Cry_Raventzhaar
cry_reverse Cry_Wall_Beast
cry_reverse Cry_Wall_Beast_Mega_Form
cry_reverse Cry_Sourhog
cry_reverse Cry_Hand_Farmhand_Form
cry_reverse Cry_Hand_Stuffed_Form
cry_reverse Cry_Hand_BrokenFingers_Form
cry_reverse Cry_Hand_DeadHand_Form
cry_reverse Cry_Hand_Dungeoneering_Form
cry_reverse Cry_Snake_Desert_Form
cry_reverse Cry_Snake_Poison_Form
cry_reverse Cry_Snake_Swamp_Form
cry_reverse Cry_Icxan
cry_reverse Cry_Skeletal_Wyvern
cry_reverse Cry_Wyvern
cry_reverse Cry_Impling_Gourmet_Form
cry_reverse Cry_Impling_Earth_Form
cry_reverse Cry_Impling_Young_Form
cry_reverse Cry_Impling_Pirate_Form
cry_reverse Cry_Impling_Ninja_Form
cry_reverse Cry_Impling_Zombie_Form
cry_reverse Cry_Impling_Eclectic_Form
cry_reverse Cry_Impling_Crystal_Form
cry_reverse Cry_Impling_Nature_Form
cry_reverse Cry_Impling_Essence_Form
cry_reverse Cry_Impling_Divine_Form
cry_reverse Cry_Impling_Spirit_Form
cry_reverse Cry_Araxyte_Baby
cry_reverse Cry_Araxyte_Acidic
cry_reverse Cry_Araxyte_Mirrorback
cry_reverse Cry_Araxyte_Pulsing
cry_reverse Cry_Araxxor
cry_reverse Cry_Araxxi
cry_reverse Cry_Glacor_Enduring_Form
cry_reverse Cry_Glacor_Sapping_Form
cry_reverse Cry_Glacor_Unstable_Form
cry_reverse Cry_Glacor
cry_reverse Cry_Glacor_Arch_Form
cry_reverse Cry_Jadinko_Common_Form
cry_reverse Cry_Jadinko_Male_Form
cry_reverse Cry_Jadinko_Queen
cry_reverse Cry_Ruby_Harvest
cry_reverse Cry_Sapphire_Glacialis
cry_reverse Cry_Snow_Knight
cry_reverse Cry_Black_Warlock
cry_reverse Cry_Forge_Regent
cry_reverse Cry_Guthixian_Butterfly
cry_reverse Cry_Charming_Moth
cry_reverse Cry_Treborn
cry_reverse Cry_Draugen
cry_reverse Cry_Macaw
cry_reverse Cry_The_Illusive
cry_reverse Cry_Doubt
cry_reverse Cry_Everlasting
cry_reverse Cry_Untouchable
cry_reverse Cry_Inadequancy
cry_reverse Cry_Chinchompa_Baby
cry_reverse Cry_Chinchompa_Grey_Baby
cry_reverse Cry_Chinchompa_Red_Baby
cry_reverse Cry_Chinchompa_Cobalt
cry_reverse Cry_Chinchompa_Viridian
cry_reverse Cry_Chinchompa_Crystal
cry_reverse Cry_Chinchompa_Plutonial
cry_reverse Cry_Chinchompa_Mechanized
cry_reverse Cry_Chinchompa_Crimson
cry_reverse Cry_Chinchompa_Black
cry_reverse Cry_Chinchompa_Giant
cry_reverse Cry_Vulture_RSHD_Form
cry_reverse Cry_Vulture_Pink_Form
cry_reverse Cry_Vulture_OSRS_Form
cry_reverse Cry_Vulture_RS3_Form
cry_reverse Cry_Beagle
cry_reverse Cry_Pug
cry_reverse Cry_Huskie
cry_reverse Cry_Shiba
cry_reverse Cry_Polar_Bear_Punished
cry_reverse Cry_Lobstrocity
cry_reverse Cry_Salamander_Yellow_Form
cry_reverse Cry_Abyssal_DeepSea_Walker
cry_reverse Cry_Abyssal_DeepSea_Leech
cry_reverse Cry_Abyssal_DeepSea_Guardian
cry_reverse Cry_Rift_Guardian
cry_reverse Cry_Coral_Guardian
cry_reverse Cry_Rewards_Guardian
cry_reverse Cry_Baboon_Normal_Form
cry_reverse Cry_Baboon_Mage_Form
cry_reverse Cry_Baboon_Shaman_Form
cry_reverse Cry_Baboon_Thrower_Form
cry_reverse Cry_Baboon_Cursed_Form
cry_reverse Cry_Baboon_Thrall_Form
cry_reverse Cry_Baboon_Volatile_Form
cry_reverse Cry_Baboon_BaBa_Form
cry_reverse Cry_Scarab_Spitting_Form
cry_reverse Cry_Scarab_Soldier_Form
cry_reverse Cry_Scarab_Arcane_Form
cry_reverse Cry_Scarab_Kephri_Form
cry_reverse Cry_Crocodile_Red_Form
cry_reverse Cry_Zebak
cry_reverse Cry_Camel_Bank_Form
cry_reverse Cry_Slime_LilGloop
cry_reverse Cry_Slime_King
cry_reverse Cry_Graahk_Forsaken_Form
cry_reverse Cry_Zygomite_Magical_Form
cry_reverse Cry_Zygomite_Zanarian_Form
cry_reverse Cry_Zygomite_Arcspore_Form
cry_reverse Cry_Zygomite_Daemoncap_Form
cry_reverse Cry_Zygomite_Ancient_Form
cry_reverse Cry_Zulrah_Serpentine_Form
cry_reverse Cry_Zulrah_Magma_Form
cry_reverse Cry_Zulrah_Tanzanite_Form
cry_reverse Cry_Pig_Summoning_Form
cry_reverse Cry_TzTok_Jad_HD_Mega_Form
cry_reverse Cry_TzTok_Jad_RS3_Mega_Form
cry_reverse Cry_Abyssal_Guardian
cry_reverse Cry_Slime_Queen
cry_reverse Cry_Airut
cry_reverse Cry_Skotizo
cry_reverse Cry_Scurrius_Melee_Form
cry_reverse Cry_Scurrius_Ranged_Form
cry_reverse Cry_Scurrius_Magic_Form
cry_reverse Cry_Broav_Zombie_Form
cry_reverse Cry_Impling_Easter_Form
cry_reverse Cry_Impling_Snow_Form
cry_reverse Cry_Impling_Wandering_Form
cry_reverse Cry_Impling_Ghost_Form
cry_reverse Cry_Vorkath
cry_reverse Cry_Fox_Pyre
cry_reverse Cry_Fox_RecruitmentDrive
cry_reverse Cry_Fox_Fennec
cry_reverse Cry_Salamander_Tecu
cry_reverse Cry_Jerboa
cry_reverse Cry_Jerboa_Embertail
cry_reverse Cry_Antelope_Sunlight_Form
cry_reverse Cry_Antelope_Moonlight_Form
cry_reverse Cry_Capybara
cry_reverse Cry_Capybara_Orange
cry_reverse Cry_Entling
cry_reverse Cry_Piggles
cry_reverse Cry_Wolpertinger_Mega_Form
cry_reverse Cry_Flesh_Spoiler_Naked_Form
cry_reverse Cry_Flesh_Spoiler_Spawnling
cry_reverse Cry_Caustic_Gazer
cry_reverse Cry_Iris_Stalker
cry_reverse Cry_Animated_Book
cry_reverse Cry_Tome_of_Strength
cry_reverse Cry_Tome_of_Ranged
cry_reverse Cry_Tome_of_Magic
cry_reverse Cry_Luminescent_Icefiend
cry_reverse Cry_Warped_Galuga
cry_reverse Cry_Submastyx
cry_reverse Cry_Paramastyx
cry_reverse Cry_Archaemastyx
cry_reverse Cry_Dromomastyx
cry_reverse Cry_Spinomastyx
cry_reverse Cry_Gallimastyx
cry_reverse Cry_Stegomastyx
cry_reverse Cry_Megamastyx
cry_reverse Cry_Jelly_Alternate_Form
cry_reverse Cry_Jelly_Dungeoneering_Form
cry_reverse Cry_Jelly_Trollweiss_Form
cry_reverse Cry_Jelly_Vitreous_Form
cry_reverse Cry_Jelly_Warped_Vitreous_Form
cry_reverse Cry_Moth_Sunlight_Form
cry_reverse Cry_Moth_Moonlight_Form
cry_reverse Cry_Stone_of_Jas_Mega_Form
cry_reverse Cry_Spirit_Warrior
cry_reverse Cry_Spirit_Ranger
cry_reverse Cry_Spirit_Mage
cry_reverse Cry_Essling
cry_reverse Cry_Esshound
cry_reverse Cry_Esswraith
cry_reverse Cry_Harpy_Eagle
cry_reverse Cry_Reborn_Warrior
cry_reverse Cry_Reborn_Ranger
cry_reverse Cry_Reborn_Mage
cry_reverse Cry_Jaguar_Orange_Form
cry_reverse Cry_Jaguar_Black_Form
cry_reverse Cry_Tortle
cry_reverse Cry_Cockatrice_OSRS_Form
cry_reverse Cry_Cockathrice
cry_reverse Cry_Cockatrice_Moonlight 
cry_reverse Cry_Revenant_Imp
cry_reverse Cry_Revenant_Dragon
cry_reverse Cry_Maledictus
