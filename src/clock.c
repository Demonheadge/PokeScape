#include "global.h"
#include "event_data.h"
#include "rtc.h"
#include "time_events.h"
#include "field_specials.h"
#include "lottery_corner.h"
#include "dewford_trend.h"
#include "tv.h"
#include "field_weather.h"
#include "berry.h"
#include "main.h"
#include "overworld.h"
#include "wallclock.h"
#include "constants/form_change_types.h"
#include "random.h"

static void UpdatePerDay(struct Time *localTime);
static void UpdatePerMinute(struct Time *localTime);
static void FormChangeTimeUpdate();
void PokeScape_CallDailyEvents();
static u32 GetSeededResultWeather();
static u32 GetSeededResultGrotto();

void InitTimeBasedEvents(void)
{
    FlagSet(FLAG_SYS_CLOCK_SET);
    RtcCalcLocalTime();
    gSaveBlock2Ptr->lastBerryTreeUpdate = gLocalTime;
    VarSet(VAR_DAYS, gLocalTime.days);
}

void DoTimeBasedEvents(void)
{
    if (FlagGet(FLAG_SYS_CLOCK_SET) && !InPokemonCenter())
    {
        RtcCalcLocalTime();
        UpdatePerDay(&gLocalTime);
        UpdatePerMinute(&gLocalTime);
    }
}

static void UpdatePerDay(struct Time *localTime)
{
    u16 *days = GetVarPointer(VAR_DAYS);
    u16 daysSince;

    if (*days != localTime->days && *days <= localTime->days)
    {
        daysSince = localTime->days - *days;
        ClearDailyFlags();
        UpdateDewfordTrendPerDay(daysSince);
        UpdateTVShowsPerDay(daysSince);
        UpdateWeatherPerDay(daysSince);
        UpdatePartyPokerusTime(daysSince);
        UpdateMirageRnd(daysSince);
        UpdateBirchState(daysSince);
        UpdateFrontierManiac(daysSince);
        UpdateFrontierGambler(daysSince);
        SetShoalItemFlag(daysSince);
        SetRandomLotteryNumber(daysSince);
        *days = localTime->days;
    }
}

static void UpdatePerMinute(struct Time *localTime)
{
    struct Time difference;
    int minutes;

    CalcTimeDifference(&difference, &gSaveBlock2Ptr->lastBerryTreeUpdate, localTime);
    minutes = 24 * 60 * difference.days + 60 * difference.hours + difference.minutes;
    if (minutes != 0)
    {
        if (minutes >= 0)
        {
            BerryTreeTimeUpdate(minutes);
            gSaveBlock2Ptr->lastBerryTreeUpdate = *localTime;
            FormChangeTimeUpdate();
            PokeScape_CallDailyEvents();
        }
    }
}

static void FormChangeTimeUpdate()
{
    s32 i;
    for (i = 0; i < PARTY_SIZE; i++)
    {
        struct Pokemon *mon = &gPlayerParty[i];
        u16 targetSpecies = GetFormChangeTargetSpecies(mon, FORM_CHANGE_TIME_OF_DAY, 0);
        
        if (targetSpecies != SPECIES_NONE)
        {
            SetMonData(mon, MON_DATA_SPECIES, &targetSpecies);
            CalculateMonStats(mon);
        }
    }
}

static void ReturnFromStartWallClock(void)
{
    InitTimeBasedEvents();
    SetMainCallback2(CB2_ReturnToFieldContinueScriptPlayMapMusic);
}

void StartWallClock(void)
{
    SetMainCallback2(CB2_StartWallClock);
    gMain.savedCallback = ReturnFromStartWallClock;
}

u32 GetSeededResultWeather(void)
{
    u16 randomSEED = (Random() % 128);
    u32 result = (randomSEED % 10);
    VarSet(VAR_STORE_WEATHER_SEED_RESULT, result);
    return result;
}

void PokeScape_Reset_HiddenGrottos(void)
{
    FlagClear(FLAG_HIDDEN_GROTTO_1);
    FlagClear(FLAG_HIDDEN_GROTTO_2);
    FlagClear(FLAG_HIDDEN_GROTTO_3);
    FlagClear(FLAG_HIDDEN_GROTTO_4);
    FlagClear(FLAG_HIDDEN_GROTTO_5);
    FlagClear(FLAG_HIDDEN_GROTTO_6);
    FlagClear(FLAG_HIDDEN_GROTTO_7);
    FlagClear(FLAG_HIDDEN_GROTTO_8);
    FlagClear(FLAG_GOODIE_BAG);
}

u32 GetSeededResultGrotto(void)
{
    u16 randomSEED = (Random() % 128);
    u16 max = 25; //Determines which Mon you encounter.
    u16 result = ((randomSEED ^ (max * 31)) + max) % max;
    VarSet(VAR_STORE_SEED_RESULT, result);
    max = 100; //Determines which pool %.
    result = ((randomSEED ^ (max * 31)) + max) % max;
    VarSet(VAR_STORE_GROTTO_SEED_RESULT, result);

    /*u16 randomSEED = (Random() % 128);
    u32 result = (randomSEED % 25); //Determines which Mon you encounter.
    VarSet(VAR_STORE_SEED_RESULT, result);
    randomSEED = (Random() % 128);
    result = (randomSEED % 100); //Determines which Mon you encounter.
    VarSet(VAR_STORE_GROTTO_SEED_RESULT, result);*/
    return result;
}


extern const u8 RandomiseSeed_Weather[];
void PokeScape_CallDailyEvents(int result)
{
    UpdateTimeOfDay();
    if (gTimeOfDay == TIME_OF_DAY_MORNING) { // sets daily flag and does functions.
        if (FlagGet(FLAG_POKESCAPE_TIME_RESET_NIGHT) == TRUE) { //Resets NIGHT flag.
            FlagClear(FLAG_POKESCAPE_TIME_RESET_NIGHT);
        }
        if (FlagGet(FLAG_POKESCAPE_TIME_RESET_MORNING) == FALSE) { //MORNING EVENTS
            GetSeededResultWeather();
            GetSeededResultGrotto();
            PokeScape_Reset_HiddenGrottos();
            FlagSet(FLAG_POKESCAPE_TIME_RESET_MORNING);
        }
    }
    else if (gTimeOfDay == TIME_OF_DAY_NIGHT) { 
        if (FlagGet(FLAG_POKESCAPE_TIME_RESET_MORNING) == TRUE) { //Resets MORNING flag.
            FlagClear(FLAG_POKESCAPE_TIME_RESET_MORNING);
        }
        if (FlagGet(FLAG_POKESCAPE_TIME_RESET_DAY) == TRUE) { //Resets DAY flag.
            FlagClear(FLAG_POKESCAPE_TIME_RESET_DAY);
        }
        if (FlagGet(FLAG_POKESCAPE_TIME_RESET_EVENING) == TRUE) { //Resets EVENING flag.
            FlagClear(FLAG_POKESCAPE_TIME_RESET_EVENING);
        }
        if (FlagGet(FLAG_POKESCAPE_TIME_RESET_NIGHT) == FALSE) { //NIGHT EVENTS
            GetSeededResultWeather();
            GetSeededResultGrotto();
            PokeScape_Reset_HiddenGrottos();
            FlagSet(FLAG_POKESCAPE_TIME_RESET_NIGHT);
        }
    }
    else if (gTimeOfDay == TIME_OF_DAY_EVENING) { // sets daily flag and does functions.
        if (FlagGet(FLAG_POKESCAPE_TIME_RESET_EVENING) == FALSE) { //EVENING EVENTS
            GetSeededResultWeather();
            GetSeededResultGrotto();
            PokeScape_Reset_HiddenGrottos();
            FlagSet(FLAG_POKESCAPE_TIME_RESET_EVENING);
        }
    }
    else if (gTimeOfDay == TIME_OF_DAY_DAY) { // sets daily flag and does functions.
        if (FlagGet(FLAG_POKESCAPE_TIME_RESET_DAY) == FALSE) { //DAY EVENTS
            GetSeededResultWeather();
            GetSeededResultGrotto();
            PokeScape_Reset_HiddenGrottos();
            FlagSet(FLAG_POKESCAPE_TIME_RESET_DAY);
        }
    }

}