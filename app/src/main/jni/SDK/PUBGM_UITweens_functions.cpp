// Pubgm India-64bit (3.4.0) SDK by BangJO [Z] DM @isar_hackJO To Buy Tool SDK

#include "../SDK.hpp"

namespace SDK
{
//---------------------By BangJO---------------------------
//Functions
//---------------------By BangJO---------------------------

// Function UITweens.TweenManager.TweenScale
// (Final, Native, Public, HasDefaults)
// Parameters:
// class UWidget*                 Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector2D               from                           (Parm, IsPlainOldData)
// struct FVector2D               to                             (Parm, IsPlainOldData)
// float                          Timespan                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            Type                           (Parm, ZeroConstructor, IsPlainOldData)

void UTweenManager::TweenScale(class UWidget* Widget, const struct FVector2D& from, const struct FVector2D& to, float Timespan, int Type)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UITweens.TweenManager.TweenScale");

	UTweenManager_TweenScale_Params params;
	params.Widget = Widget;
	params.from = from;
	params.to = to;
	params.Timespan = Timespan;
	params.Type = Type;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function UITweens.TweenManager.TweenPosition
// (Final, Native, Public, HasDefaults)
// Parameters:
// class UWidget*                 Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector2D               from                           (Parm, IsPlainOldData)
// struct FVector2D               to                             (Parm, IsPlainOldData)
// float                          Timespan                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            Type                           (Parm, ZeroConstructor, IsPlainOldData)

void UTweenManager::TweenPosition(class UWidget* Widget, const struct FVector2D& from, const struct FVector2D& to, float Timespan, int Type)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UITweens.TweenManager.TweenPosition");

	UTweenManager_TweenPosition_Params params;
	params.Widget = Widget;
	params.from = from;
	params.to = to;
	params.Timespan = Timespan;
	params.Type = Type;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function UITweens.TweenManager.TweenAlpha
// (Final, Native, Public)
// Parameters:
// class UWidget*                 Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          from                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          to                             (Parm, ZeroConstructor, IsPlainOldData)
// float                          Timespan                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            Type                           (Parm, ZeroConstructor, IsPlainOldData)

void UTweenManager::TweenAlpha(class UWidget* Widget, float from, float to, float Timespan, int Type)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UITweens.TweenManager.TweenAlpha");

	UTweenManager_TweenAlpha_Params params;
	params.Widget = Widget;
	params.from = from;
	params.to = to;
	params.Timespan = Timespan;
	params.Type = Type;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function UITweens.TweenManager.Tick
// (Final, Native, Public)
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void UTweenManager::Tick(float DeltaTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UITweens.TweenManager.Tick");

	UTweenManager_Tick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

