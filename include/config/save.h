#ifndef GUARD_CONFIG_SAVE_H
#define GUARD_CONFIG_SAVE_H

// free saveblock 1 defines
#define FREE_EXTRA_SEEN_FLAGS               TRUE   //free up extra pokedex seen flags. Frees up 104 bytes
#define FREE_TRAINER_HILL                   FALSE   //frees up trainer hill data. 28 bytes.                         WARNING THIS HAS BEEN SHOWN TO BREAK MULTI BATTLES
#define FREE_MYSTERY_EVENT_BUFFERS          TRUE   //frees up mystery event and ramScript. roughly 1880 bytes       Needed by FREE_BATTLE_TOWER_E_READER
#define FREE_MATCH_CALL                     TRUE   //frees up match call data. 104 bytes
#define FREE_UNION_ROOM_CHAT                TRUE   //frees up field unk3C88. 210 bytes
#define FREE_ENIGMA_BERRY                   TRUE   //frees up enigma berry. 52 bytes
#define FREE_LINK_BATTLE_RECORDS            TRUE   //frees link battle record data. 88 bytes
#define FREE_MYSTERY_GIFT                   TRUE   // Frees up Mystery Gift data (876 bytes).                       Needed by FREE_MYSTERY_EVENT_BUFFERS
                                            // saveblock1 total: 1846 bytes
//free saveblock 2 defines
#define FREE_BATTLE_TOWER_E_READER          TRUE   //frees up battle tower e reader trainer data. 188 bytes.        WARNING THIS HAS BEEN SHOWN TO BREAK THE POKÉ MARTS' QUESTIONNAIRE
#define FREE_POKEMON_JUMP                   TRUE   //frees up pokemon jump data. 16 bytes
#define FREE_RECORD_MIXING_HALL_RECORDS     TRUE   //frees up hall records for record mixing. 1032 bytes
                                        // saveblock2 total: 1236 bytes

                                        //grand total: 3082

#endif // GUARD_CONFIG_DECAP_H