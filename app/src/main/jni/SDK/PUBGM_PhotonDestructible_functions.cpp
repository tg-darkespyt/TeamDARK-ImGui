// Pubgm India-64bit (3.4.0) SDK by BangJO [Z] DM @isar_hackJO To Buy Tool SDK

#include "../SDK.hpp"

namespace SDK
{
//---------------------By BangJO---------------------------
//Functions
//---------------------By BangJO---------------------------

// Function PhotonDestructible.PhotonDestructibleSurfaceComponent.Server_ProcessHit
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FPhotonDestructibleSurfaceHitData HitData                        (ConstParm, Parm, OutParm, ReferenceParm)

void UPhotonDestructibleSurfaceComponent::Server_ProcessHit(const struct FPhotonDestructibleSurfaceHitData& HitData)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonDestructible.PhotonDestructibleSurfaceComponent.Server_ProcessHit");

	UPhotonDestructibleSurfaceComponent_Server_ProcessHit_Params params;
	params.HitData = HitData;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PhotonDestructible.PhotonDestructibleSurfaceComponent.OnRep_SurfaceNetData
// (Final, Native, Public)

void UPhotonDestructibleSurfaceComponent::OnRep_SurfaceNetData()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonDestructible.PhotonDestructibleSurfaceComponent.OnRep_SurfaceNetData");

	UPhotonDestructibleSurfaceComponent_OnRep_SurfaceNetData_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PhotonDestructible.PhotonDestructibleSurfaceComponent.Client_OnProcessHit
// (Net, NetReliable, Native, Event, NetMulticast, Public)
// Parameters:
// struct FPhotonDestructibleSurfaceHitData HitData                        (ConstParm, Parm, ReferenceParm)

void UPhotonDestructibleSurfaceComponent::Client_OnProcessHit(const struct FPhotonDestructibleSurfaceHitData& HitData)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonDestructible.PhotonDestructibleSurfaceComponent.Client_OnProcessHit");

	UPhotonDestructibleSurfaceComponent_Client_OnProcessHit_Params params;
	params.HitData = HitData;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PhotonDestructible.PhotonDestructibleInstancedSurfaceComponent.Server_ProcessHit
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FPhotonDestructibleSurfaceHitData HitData                        (ConstParm, Parm, OutParm, ReferenceParm)

void UPhotonDestructibleInstancedSurfaceComponent::Server_ProcessHit(const struct FPhotonDestructibleSurfaceHitData& HitData)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonDestructible.PhotonDestructibleInstancedSurfaceComponent.Server_ProcessHit");

	UPhotonDestructibleInstancedSurfaceComponent_Server_ProcessHit_Params params;
	params.HitData = HitData;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PhotonDestructible.PhotonDestructibleInstancedSurfaceComponent.OnRep_SurfaceNetData
// (Final, Native, Public)

void UPhotonDestructibleInstancedSurfaceComponent::OnRep_SurfaceNetData()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonDestructible.PhotonDestructibleInstancedSurfaceComponent.OnRep_SurfaceNetData");

	UPhotonDestructibleInstancedSurfaceComponent_OnRep_SurfaceNetData_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PhotonDestructible.PhotonDestructibleInstancedSurfaceComponent.Client_OnProcessHit
// (Net, NetReliable, Native, Event, NetMulticast, Public)
// Parameters:
// struct FPhotonDestructibleSurfaceHitData HitData                        (ConstParm, Parm, ReferenceParm)

void UPhotonDestructibleInstancedSurfaceComponent::Client_OnProcessHit(const struct FPhotonDestructibleSurfaceHitData& HitData)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonDestructible.PhotonDestructibleInstancedSurfaceComponent.Client_OnProcessHit");

	UPhotonDestructibleInstancedSurfaceComponent_Client_OnProcessHit_Params params;
	params.HitData = HitData;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PhotonDestructible.PhotonDestructiblePuppet.TriggerPuppetEvent
// (Native, Public, BlueprintCallable)
// Parameters:
// int                            EventID                        (Parm, ZeroConstructor, IsPlainOldData)

void UPhotonDestructiblePuppet::TriggerPuppetEvent(int EventID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonDestructible.PhotonDestructiblePuppet.TriggerPuppetEvent");

	UPhotonDestructiblePuppet_TriggerPuppetEvent_Params params;
	params.EventID = EventID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PhotonDestructible.PhotonDestructiblePuppetContainer.TriggerPuppetEvent
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 ObjectName                     (Parm, ZeroConstructor)
// int                            EventID                        (Parm, ZeroConstructor, IsPlainOldData)

void UPhotonDestructiblePuppetContainer::TriggerPuppetEvent(const struct FString& ObjectName, int EventID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonDestructible.PhotonDestructiblePuppetContainer.TriggerPuppetEvent");

	UPhotonDestructiblePuppetContainer_TriggerPuppetEvent_Params params;
	params.ObjectName = ObjectName;
	params.EventID = EventID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PhotonDestructible.PhotonDestructiblePuppetMgr.Client_TriggerPuppetEvent
// (Net, NetReliable, Native, Event, NetMulticast, Public, HasDefaults)
// Parameters:
// struct FGuid                   PuppetGUID                     (ConstParm, Parm, ReferenceParm, IsPlainOldData)
// int                            EventID                        (Parm, ZeroConstructor, IsPlainOldData)

void UPhotonDestructiblePuppetMgr::Client_TriggerPuppetEvent(const struct FGuid& PuppetGUID, int EventID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonDestructible.PhotonDestructiblePuppetMgr.Client_TriggerPuppetEvent");

	UPhotonDestructiblePuppetMgr_Client_TriggerPuppetEvent_Params params;
	params.PuppetGUID = PuppetGUID;
	params.EventID = EventID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

