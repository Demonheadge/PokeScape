#ifndef GUARD_MONEY_H
#define GUARD_MONEY_H

#define MAX_MONEY 999999

u32 GetMoney(u32 *moneyPtr);
void SetMoney(u32 *moneyPtr, u32 newValue);
bool8 IsEnoughMoney(u32 *moneyPtr, u32 cost);
void AddMoney(u32 *moneyPtr, u32 toAdd);
void RemoveMoney(u32 *moneyPtr, u32 toSub);
bool8 IsEnoughForCostInVar0x8005(void);
void SubtractMoneyFromVar0x8005(void);
void PrintMoneyAmountInMoneyBox(u8 windowId, int amount, u8 speed);
void PrintMoneyAmount(u8 windowId, u8 x, u8 y, int amount, u8 speed);
void PrintMoneyAmountInMoneyBoxWithBorder(u8 windowId, u16 tileStart, u8 pallete, int amount);
void ChangeAmountInMoneyBox(int amount);
void DrawMoneyBox(int amount, u8 x, u8 y);
void HideMoneyBox(void);
void AddMoneyLabelObject(u16 x, u16 y);
void RemoveMoneyLabelObject(void);
bool8 IsEnoughTokkul(u32 tokkul, u32 cost);
void SetTokkul(u32 *tokkulPtr, u32 newValue);
void RemoveTokkul(u32 *tokkulPtr, u32 toSub);
void AddTokkul(u32 *tokkulPtr, u32 toAdd);
void PrintTokkulAmountInTokkulBox(u8 windowId, int amount, u8 speed);
void PrintTokkulAmount(u8 windowId, u8 x, u8 y, int amount, u8 speed);
void PrintTokkulAmountInTokkulBoxWithBorder(u8 windowId, u16 tileStart, u8 pallete, int amount);
void ChangeAmountInTokkulBox(int amount);
void DrawTokkulBox(int amount, u8 x, u8 y);
#endif // GUARD_MONEY_H
