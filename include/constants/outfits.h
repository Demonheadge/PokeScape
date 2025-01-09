#ifndef GUARD_CONSTANTS_OUTFITS_H
#define GUARD_CONSTANTS_OUTFITS_H

//! macro modes

// ScrCmd_getoutfitstatus
#define OUTFIT_CHECK_FLAG 0
#define OUTFIT_CHECK_USED 1
// ScrCmd_toggleoutfit
#define OUTFIT_TOGGLE_UNLOCK 0
#define OUTFIT_TOGGLE_LOCK 1
// BufferOutfitStrings
#define OUTFIT_BUFFER_NAME  0
#define OUTFIT_BUFFER_DESC  1

//! outfits
#define OUTFIT_NONE 0
#define OUTFIT_USUAL_GREEN 1
#define OUTFIT_UNUSUAL_RED 2
#define OUTFIT_HAM 3
#define OUTFIT_BRONZE_ARMOUR 4
#define OUTFIT_GUARD 5
#define OUTFIT_ZANIK 6
#define OUTFIT_ARIANE 7

#define OUTFIT_COUNT 8

// inclusive
#define OUTFIT_BEGIN OUTFIT_USUAL_GREEN
#define OUTFIT_END   OUTFIT_ARIANE

#define DEFAULT_OUTFIT OUTFIT_USUAL_GREEN

#endif //! GUARD_CONSTANTS_OUTFITS_H
