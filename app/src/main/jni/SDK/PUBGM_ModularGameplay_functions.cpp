// Pubgm India-64bit (3.4.0) SDK by BangJO [Z] DM @isar_hackJO To Buy Tool SDK

#include "../SDK.hpp"

namespace SDK
{
//---------------------By BangJO---------------------------
//Functions
//---------------------By BangJO---------------------------

// Function ModularGameplay.GameFrameworkComponentManager.RemoveReceiver
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Receiver                       (Parm, ZeroConstructor, IsPlainOldData)

void UGameFrameworkComponentManager::RemoveReceiver(class AActor* Receiver)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ModularGameplay.GameFrameworkComponentManager.RemoveReceiver");

	UGameFrameworkComponentManager_RemoveReceiver_Params params;
	params.Receiver = Receiver;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ModularGameplay.GameFrameworkComponentManager.AddReceiver
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Receiver                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAddOnlyInGameWorlds           (Parm, ZeroConstructor, IsPlainOldData)

void UGameFrameworkComponentManager::AddReceiver(class AActor* Receiver, bool bAddOnlyInGameWorlds)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ModularGameplay.GameFrameworkComponentManager.AddReceiver");

	UGameFrameworkComponentManager_AddReceiver_Params params;
	params.Receiver = Receiver;
	params.bAddOnlyInGameWorlds = bAddOnlyInGameWorlds;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

