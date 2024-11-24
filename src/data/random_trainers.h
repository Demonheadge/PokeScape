const struct Trainer gRandomTrainers[] = {


//Tzhaar
    [RAND_PARTY_TZHAAR_1] =
    {
        .trainerClass = TRAINER_CLASS_TZHAAR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_tzhaar_ket,
        .trainerName = _("Ga'al"),
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
    },
    
    [RAND_PARTY_TZHAAR_2] =
    {
        .trainerClass = TRAINER_CLASS_TZHAAR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_ga_al,
        .trainerName = _("Tzhaar-Ket"),
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
    },
    
    [RAND_PARTY_TZHAAR_3] =
    {
        .trainerClass = TRAINER_CLASS_TZHAAR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_tzhaar,
        .trainerName = _("Tzhaar-Mej"),
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
    },
    
//J Mod    
    [RAND_PARTY_JMOD_1] =
    {
        .trainerClass = TRAINER_CLASS_JMOD,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_jmod_m,
        .trainerName = _("Mod Raven"),
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
    },

    [RAND_PARTY_JMOD_2] =
    {
        .trainerClass = TRAINER_CLASS_JMOD,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_jmod_m,
        .trainerName = _("Mod Spyro"),
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
    },
    
    [RAND_PARTY_JMOD_3] =
    {
        .trainerClass = TRAINER_CLASS_JMOD,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_jmod_f,
        .trainerName = _("Mod BlkWitch"),
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
    },
    
    [RAND_PARTY_JMOD_4] =
    {
        .trainerClass = TRAINER_CLASS_JMOD,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_jmod_m,
        .trainerName = _("Mod Camel"),
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
    },


};




enum
{
  RAND_PARTY_TZHAAR_1,
  RAND_PARTY_TZHAAR_2,
  RAND_PARTY_TZHAAR_3,
  RAND_PARTY_JMOD_1,
  RAND_PARTY_JMOD_2,
  RAND_PARTY_JMOD_3,
  RAND_PARTY_JMOD_4,
}


#define RAND_PARTY_TZHAAR_1                           464
#define RAND_PARTY_TZHAAR_2                           465
#define RAND_PARTY_TZHAAR_3                           466
#define RAND_PARTY_JMOD_1                           467
#define RAND_PARTY_JMOD_2                           468
#define RAND_PARTY_JMOD_3                           469
#define RAND_PARTY_JMOD_4                           470





generateRandomCatagory();
getCatagoryCount();
getCatagoryStart();


static u8 CreateNPCTrainerParty(struct Pokemon *party, u16 trainerNum, bool8 firstTrainer)
{
    u8 retVal;
    if (trainerNum == TRAINER_SECRET_BASE)
        return 0;
    retVal = CreateNPCTrainerPartyFromTrainer(party, &gTrainers[trainerNum], firstTrainer, gBattleTypeFlags);

    if (gBattleTypeFlags & BATTLE_TYPE_TRAINER && !(gBattleTypeFlags & (BATTLE_TYPE_FRONTIER
                                                                        | BATTLE_TYPE_EREADER_TRAINER
                                                                        | BATTLE_TYPE_TRAINER_HILL)))
    {
        gBattleTypeFlags |= gTrainers[trainerNum].doubleBattle;
    }
    return retVal;
}

void generateRandomCatagory(void) {
    
}
void getCatagoryCount(void) {
    
}
void getCatagoryStart(void) {
    
}



static void PopulateSpeciesFromTrainerParty(int matchCallId, u8 *destStr)
{
    //u16 trainerId;
    //const struct TrainerMon *party;
    //u8 monId;
    //const u8 *speciesName;

    //trainerId = GetLastBeatenRematchTrainerId(sMatchCallTrainers[matchCallId].trainerId);
    //party = gTrainers[trainerId].party;
    //monId = Random() % gTrainers[trainerId].partySize;
    //speciesName = GetSpeciesName(party[monId].species);

    //StringCopy(destStr, speciesName);
}

static void PopulateTrainerName(int matchCallId, u8 *destStr)
{
    //u32 i;
    //u16 trainerId = sMatchCallTrainers[matchCallId].trainerId;
    //for (i = 0; i < ARRAY_COUNT(sMultiTrainerMatchCallTexts); i++)
    //{
    //    if (sMultiTrainerMatchCallTexts[i].trainerId == trainerId)
    //    {
    //        StringCopy(destStr, sMultiTrainerMatchCallTexts[i].text);
    //        return;
    //    }
    //}

    //StringCopy(destStr, gTrainers[trainerId].trainerName);
}