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