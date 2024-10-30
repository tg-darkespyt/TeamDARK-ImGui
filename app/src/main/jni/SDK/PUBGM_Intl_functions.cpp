// Pubgm India-64bit (3.4.0) SDK by BangJO [Z] DM @isar_hackJO To Buy Tool SDK

#include "../SDK.hpp"

namespace SDK
{
//---------------------By BangJO---------------------------
//Functions
//---------------------By BangJO---------------------------

// Function Intl.StatManager.ReportRevenue
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            InPurchaseEventType            (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 InCurrencyCode                 (Parm, ZeroConstructor)
// struct FString                 InExpense                      (Parm, ZeroConstructor)
// TMap<struct FString, struct FString> InParams                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FString                 InExtraJson                    (Parm, ZeroConstructor)

void UStatManager::ReportRevenue(int InPurchaseEventType, const struct FString& InCurrencyCode, const struct FString& InExpense, TMap<struct FString, struct FString> InParams, const struct FString& InExtraJson)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Intl.StatManager.ReportRevenue");

	UStatManager_ReportRevenue_Params params;
	params.InPurchaseEventType = InPurchaseEventType;
	params.InCurrencyCode = InCurrencyCode;
	params.InExpense = InExpense;
	params.InParams = InParams;
	params.InExtraJson = InExtraJson;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Intl.StatManager.ReportPurchase
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            InPurchaseEventType            (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 InCurrencyCode                 (Parm, ZeroConstructor)
// struct FString                 InExpense                      (Parm, ZeroConstructor)
// bool                           isRealTime                     (Parm, ZeroConstructor, IsPlainOldData)

void UStatManager::ReportPurchase(int InPurchaseEventType, const struct FString& InCurrencyCode, const struct FString& InExpense, bool isRealTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Intl.StatManager.ReportPurchase");

	UStatManager_ReportPurchase_Params params;
	params.InPurchaseEventType = InPurchaseEventType;
	params.InCurrencyCode = InCurrencyCode;
	params.InExpense = InExpense;
	params.isRealTime = isRealTime;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Intl.StatManager.ReportEventWithString
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            EventType                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 _eventBody                     (Parm, ZeroConstructor)
// bool                           isRealTime                     (Parm, ZeroConstructor, IsPlainOldData)

void UStatManager::ReportEventWithString(int EventType, const struct FString& _eventBody, bool isRealTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Intl.StatManager.ReportEventWithString");

	UStatManager_ReportEventWithString_Params params;
	params.EventType = EventType;
	params._eventBody = _eventBody;
	params.isRealTime = isRealTime;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Intl.StatManager.ReportEventWithParam
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            EventType                      (Parm, ZeroConstructor, IsPlainOldData)
// TMap<struct FString, struct FString> _params                        (Parm, ZeroConstructor)
// bool                           isRealTime                     (Parm, ZeroConstructor, IsPlainOldData)

void UStatManager::ReportEventWithParam(int EventType, TMap<struct FString, struct FString> _params, bool isRealTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Intl.StatManager.ReportEventWithParam");

	UStatManager_ReportEventWithParam_Params params;
	params.EventType = EventType;
	params._params = _params;
	params.isRealTime = isRealTime;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Intl.StatManager.ReportEventWithNoParam
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            EventType                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           isRealTime                     (Parm, ZeroConstructor, IsPlainOldData)

void UStatManager::ReportEventWithNoParam(int EventType, bool isRealTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Intl.StatManager.ReportEventWithNoParam");

	UStatManager_ReportEventWithNoParam_Params params;
	params.EventType = EventType;
	params.isRealTime = isRealTime;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Intl.StatManager.GetInstance
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UStatManager*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UStatManager* UStatManager::GetInstance()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Intl.StatManager.GetInstance");

	UStatManager_GetInstance_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


}

