// Pubgm India-64bit (3.4.0) SDK by BangJO [Z] DM @isar_hackJO To Buy Tool SDK

#include "../SDK.hpp"

namespace SDK
{
//---------------------By BangJO---------------------------
//Functions
//---------------------By BangJO---------------------------

// Function TPlanGame.BackpackComponentTPlan.PickupItemFromWrapperDetail
// (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemDefineID           DefineID                       (ConstParm, Parm, OutParm, ReferenceParm)
// struct FBattleItemPickupInfo   PickupInfo                     (ConstParm, Parm, OutParm, ReferenceParm)
// EBattleItemPickupReason        Reason                         (Parm, ZeroConstructor, IsPlainOldData)
// EBattleItemClientPickupType    BattleItemClientPickupType     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBackpackComponentTPlan::PickupItemFromWrapperDetail(const struct FItemDefineID& DefineID, const struct FBattleItemPickupInfo& PickupInfo, EBattleItemPickupReason Reason, EBattleItemClientPickupType BattleItemClientPickupType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TPlanGame.BackpackComponentTPlan.PickupItemFromWrapperDetail");

	UBackpackComponentTPlan_PickupItemFromWrapperDetail_Params params;
	params.DefineID = DefineID;
	params.PickupInfo = PickupInfo;
	params.Reason = Reason;
	params.BattleItemClientPickupType = BattleItemClientPickupType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TPlanGame.BackpackComponentTPlan.PickItem_IntoSafetyBox
// (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemDefineID           DefineID                       (ConstParm, Parm, OutParm, ReferenceParm)
// struct FBattleItemPickupInfo   PickupInfo                     (ConstParm, Parm, OutParm, ReferenceParm)
// EBattleItemPickupReason        Reason                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBackpackComponentTPlan::PickItem_IntoSafetyBox(const struct FItemDefineID& DefineID, const struct FBattleItemPickupInfo& PickupInfo, EBattleItemPickupReason Reason)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TPlanGame.BackpackComponentTPlan.PickItem_IntoSafetyBox");

	UBackpackComponentTPlan_PickItem_IntoSafetyBox_Params params;
	params.DefineID = DefineID;
	params.PickupInfo = PickupInfo;
	params.Reason = Reason;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TPlanGame.BackpackComponentTPlan.NotifyItemUpdated
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FItemDefineID           DefineID                       (ConstParm, Parm, OutParm, ReferenceParm)

void UBackpackComponentTPlan::NotifyItemUpdated(const struct FItemDefineID& DefineID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TPlanGame.BackpackComponentTPlan.NotifyItemUpdated");

	UBackpackComponentTPlan_NotifyItemUpdated_Params params;
	params.DefineID = DefineID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function TPlanGame.BackpackComponentTPlan.NotifyItemRemoved
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FItemDefineID           DefineID                       (ConstParm, Parm, OutParm, ReferenceParm)

void UBackpackComponentTPlan::NotifyItemRemoved(const struct FItemDefineID& DefineID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TPlanGame.BackpackComponentTPlan.NotifyItemRemoved");

	UBackpackComponentTPlan_NotifyItemRemoved_Params params;
	params.DefineID = DefineID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function TPlanGame.BackpackComponentTPlan.NotifyItemListUpdated
// (Native, Public, BlueprintCallable)

void UBackpackComponentTPlan::NotifyItemListUpdated()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TPlanGame.BackpackComponentTPlan.NotifyItemListUpdated");

	UBackpackComponentTPlan_NotifyItemListUpdated_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function TPlanGame.BackpackTPlanUtils.UnRegisterInvokeClass
// (Final, Native, Static, Public, BlueprintCallable)

void UBackpackTPlanUtils::UnRegisterInvokeClass()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TPlanGame.BackpackTPlanUtils.UnRegisterInvokeClass");

	UBackpackTPlanUtils_UnRegisterInvokeClass_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function TPlanGame.BackpackTPlanUtils.RegisterInvokeClass
// (Final, Native, Static, Public, BlueprintCallable)

void UBackpackTPlanUtils::RegisterInvokeClass()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TPlanGame.BackpackTPlanUtils.RegisterInvokeClass");

	UBackpackTPlanUtils_RegisterInvokeClass_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function TPlanGame.BackpackTPlanUtils.RealGetBPUtils
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UBackpackBlueprintTPlanUtils* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UBackpackBlueprintTPlanUtils* UBackpackTPlanUtils::RealGetBPUtils()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TPlanGame.BackpackTPlanUtils.RealGetBPUtils");

	UBackpackTPlanUtils_RealGetBPUtils_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TPlanGame.MetroStoreComponent.OnRep_StoreID
// (Native, Event, Public, BlueprintEvent)

void UMetroStoreComponent::OnRep_StoreID()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TPlanGame.MetroStoreComponent.OnRep_StoreID");

	UMetroStoreComponent_OnRep_StoreID_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function TPlanGame.MetroStoreComponent.OnRep_Status
// (Native, Event, Public, BlueprintEvent)

void UMetroStoreComponent::OnRep_Status()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TPlanGame.MetroStoreComponent.OnRep_Status");

	UMetroStoreComponent_OnRep_Status_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function TPlanGame.MetroStoreComponent.OnRep_GoodsNum
// (Native, Event, Public, BlueprintEvent)

void UMetroStoreComponent::OnRep_GoodsNum()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TPlanGame.MetroStoreComponent.OnRep_GoodsNum");

	UMetroStoreComponent_OnRep_GoodsNum_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function TPlanGame.MetroStoreComponent.OnRep_GoodsListNum
// (Native, Event, Public, BlueprintEvent)

void UMetroStoreComponent::OnRep_GoodsListNum()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TPlanGame.MetroStoreComponent.OnRep_GoodsListNum");

	UMetroStoreComponent_OnRep_GoodsListNum_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function TPlanGame.MetroStoreComponent.OnRep_GoodsList
// (Native, Event, Public, BlueprintEvent)

void UMetroStoreComponent::OnRep_GoodsList()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TPlanGame.MetroStoreComponent.OnRep_GoodsList");

	UMetroStoreComponent_OnRep_GoodsList_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function TPlanGame.MetroStoreComponent.OnRep_CurrencyList
// (Native, Event, Public, BlueprintEvent)

void UMetroStoreComponent::OnRep_CurrencyList()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TPlanGame.MetroStoreComponent.OnRep_CurrencyList");

	UMetroStoreComponent_OnRep_CurrencyList_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function TPlanGame.MetroStoreComponent.OnRep_BuyFrequence
// (Native, Event, Public, BlueprintEvent)

void UMetroStoreComponent::OnRep_BuyFrequence()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TPlanGame.MetroStoreComponent.OnRep_BuyFrequence");

	UMetroStoreComponent_OnRep_BuyFrequence_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function TPlanGame.XTGameMode.SetStateLeftTime
// (Native, Public)
// Parameters:
// int                            LeftTime                       (Parm, ZeroConstructor, IsPlainOldData)

void AXTGameMode::SetStateLeftTime(int LeftTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TPlanGame.XTGameMode.SetStateLeftTime");

	AXTGameMode_SetStateLeftTime_Params params;
	params.LeftTime = LeftTime;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function TPlanGame.XTGameMode.SetPlayerStartOccupied
// (Final, Native, Public)
// Parameters:
// class AActor*                  PlayerStart                    (Parm, ZeroConstructor, IsPlainOldData)

void AXTGameMode::SetPlayerStartOccupied(class AActor* PlayerStart)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TPlanGame.XTGameMode.SetPlayerStartOccupied");

	AXTGameMode_SetPlayerStartOccupied_Params params;
	params.PlayerStart = PlayerStart;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function TPlanGame.XTGameMode.RevisePlayerTombBoxDropWrapperList
// (Native, Public, HasOutParms)
// Parameters:
// class ASTExtraBaseCharacter*   Character                      (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FPickUpItemData> OutItemDataList                (Parm, OutParm, ZeroConstructor)
// class ASTExtraBaseCharacter*   DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            InstanceIDCnt                  (Parm, ZeroConstructor, IsPlainOldData)

void AXTGameMode::RevisePlayerTombBoxDropWrapperList(class ASTExtraBaseCharacter* Character, class ASTExtraBaseCharacter* DamageCauser, int InstanceIDCnt, TArray<struct FPickUpItemData>* OutItemDataList)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TPlanGame.XTGameMode.RevisePlayerTombBoxDropWrapperList");

	AXTGameMode_RevisePlayerTombBoxDropWrapperList_Params params;
	params.Character = Character;
	params.DamageCauser = DamageCauser;
	params.InstanceIDCnt = InstanceIDCnt;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutItemDataList != nullptr)
		*OutItemDataList = params.OutItemDataList;
}


// Function TPlanGame.XTGameMode.NotifyPlayerExitWhenNotStarted
// (Native, Public)
// Parameters:
// uint32_t                       PlayerKey                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   PlayerType                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Reason                         (Parm, ZeroConstructor)

void AXTGameMode::NotifyPlayerExitWhenNotStarted(uint32_t PlayerKey, const struct FName& PlayerType, const struct FString& Reason)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TPlanGame.XTGameMode.NotifyPlayerExitWhenNotStarted");

	AXTGameMode_NotifyPlayerExitWhenNotStarted_Params params;
	params.PlayerKey = PlayerKey;
	params.PlayerType = PlayerType;
	params.Reason = Reason;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function TPlanGame.XTGameMode.NotifyPlayerExit
// (Native, Public)
// Parameters:
// uint32_t                       PlayerKey                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   PlayerType                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bDestroyPlayerController       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bDestroyCharacter              (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSendFailure                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 FailureMessage                 (Parm, ZeroConstructor)
// struct FName                   ParamState                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ParamReason                    (Parm, ZeroConstructor)

void AXTGameMode::NotifyPlayerExit(uint32_t PlayerKey, const struct FName& PlayerType, bool bDestroyPlayerController, bool bDestroyCharacter, bool bSendFailure, const struct FString& FailureMessage, const struct FName& ParamState, const struct FString& ParamReason)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TPlanGame.XTGameMode.NotifyPlayerExit");

	AXTGameMode_NotifyPlayerExit_Params params;
	params.PlayerKey = PlayerKey;
	params.PlayerType = PlayerType;
	params.bDestroyPlayerController = bDestroyPlayerController;
	params.bDestroyCharacter = bDestroyCharacter;
	params.bSendFailure = bSendFailure;
	params.FailureMessage = FailureMessage;
	params.ParamState = ParamState;
	params.ParamReason = ParamReason;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function TPlanGame.XTGameMode.NotifyGameModeInit
// (Native, Public)

void AXTGameMode::NotifyGameModeInit()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TPlanGame.XTGameMode.NotifyGameModeInit");

	AXTGameMode_NotifyGameModeInit_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function TPlanGame.XTGameMode.LoadMapFinished
// (Final, Native, Public, BlueprintCallable)

void AXTGameMode::LoadMapFinished()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TPlanGame.XTGameMode.LoadMapFinished");

	AXTGameMode_LoadMapFinished_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function TPlanGame.XTGameMode.IsNeedRestPlayerStart
// (Final, Native, Public)
// Parameters:
// class AController*             Player                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AXTGameMode::IsNeedRestPlayerStart(class AController* Player)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TPlanGame.XTGameMode.IsNeedRestPlayerStart");

	AXTGameMode_IsNeedRestPlayerStart_Params params;
	params.Player = Player;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TPlanGame.XTGameMode.GMShowSpawner
// (Final, Exec, Native, Public)

void AXTGameMode::GMShowSpawner()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TPlanGame.XTGameMode.GMShowSpawner");

	AXTGameMode_GMShowSpawner_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function TPlanGame.XTGameMode.GMShowEnterExit
// (Final, Exec, Native, Public)

void AXTGameMode::GMShowEnterExit()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TPlanGame.XTGameMode.GMShowEnterExit");

	AXTGameMode_GMShowEnterExit_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function TPlanGame.XTGameMode.GMShowAssetBox
// (Final, Exec, Native, Public)

void AXTGameMode::GMShowAssetBox()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TPlanGame.XTGameMode.GMShowAssetBox");

	AXTGameMode_GMShowAssetBox_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function TPlanGame.XTGameMode.GMSetPVEAIMax
// (Final, Exec, Native, Public)
// Parameters:
// int                            Num                            (Parm, ZeroConstructor, IsPlainOldData)

void AXTGameMode::GMSetPVEAIMax(int Num)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TPlanGame.XTGameMode.GMSetPVEAIMax");

	AXTGameMode_GMSetPVEAIMax_Params params;
	params.Num = Num;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function TPlanGame.XTGameMode.GetOccupiedPlayerStartGroupList
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<class AActor*>          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class AActor*> AXTGameMode::GetOccupiedPlayerStartGroupList()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TPlanGame.XTGameMode.GetOccupiedPlayerStartGroupList");

	AXTGameMode_GetOccupiedPlayerStartGroupList_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TPlanGame.XTGameMode.CheckNoHumanExist
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AXTGameMode::CheckNoHumanExist()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TPlanGame.XTGameMode.CheckNoHumanExist");

	AXTGameMode_CheckNoHumanExist_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TPlanGame.XTGameMode.CheckAIActive
// (Final, Native, Public)

void AXTGameMode::CheckAIActive()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TPlanGame.XTGameMode.CheckAIActive");

	AXTGameMode_CheckAIActive_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function TPlanGame.XTGameState.ResetLeftTime
// (Final, Native, Public)

void AXTGameState::ResetLeftTime()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TPlanGame.XTGameState.ResetLeftTime");

	AXTGameState_ResetLeftTime_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function TPlanGame.XTGameState.PreLoadPreciousItemsMap
// (Final, Native, Public)

void AXTGameState::PreLoadPreciousItemsMap()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TPlanGame.XTGameState.PreLoadPreciousItemsMap");

	AXTGameState_PreLoadPreciousItemsMap_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function TPlanGame.XTGameState.OnRep_LastLeaveTime
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void AXTGameState::OnRep_LastLeaveTime()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TPlanGame.XTGameState.OnRep_LastLeaveTime");

	AXTGameState_OnRep_LastLeaveTime_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function TPlanGame.XTGameState.GetPlayerMilitartyOnClient
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int AXTGameState::GetPlayerMilitartyOnClient()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TPlanGame.XTGameState.GetPlayerMilitartyOnClient");

	AXTGameState_GetPlayerMilitartyOnClient_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TPlanGame.XTGameState.CheckPreciousItemPrice
// (Final, Native, Public)
// Parameters:
// int                            TypeSpecificID                 (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int AXTGameState::CheckPreciousItemPrice(int TypeSpecificID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TPlanGame.XTGameState.CheckPreciousItemPrice");

	AXTGameState_CheckPreciousItemPrice_Params params;
	params.TypeSpecificID = TypeSpecificID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TPlanGame.XTGameState.BroadcastClimbHelicopter
// (Net, NetReliable, Native, Event, NetMulticast, Public, NetValidate)
// Parameters:
// class ASTExtraPlayerCharacter* Character                      (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  ExitActor                      (Parm, ZeroConstructor, IsPlainOldData)

void AXTGameState::BroadcastClimbHelicopter(class ASTExtraPlayerCharacter* Character, class AActor* ExitActor)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TPlanGame.XTGameState.BroadcastClimbHelicopter");

	AXTGameState_BroadcastClimbHelicopter_Params params;
	params.Character = Character;
	params.ExitActor = ExitActor;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function TPlanGame.XTPlayerState.OnRepXTBetrayInfo
// (Event, Public, BlueprintEvent)

void AXTPlayerState::OnRepXTBetrayInfo()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TPlanGame.XTPlayerState.OnRepXTBetrayInfo");

	AXTPlayerState_OnRepXTBetrayInfo_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function TPlanGame.XTPlayerState.OnRepRelevantPlayerTaskNotifyBP
// (Event, Public, BlueprintEvent)

void AXTPlayerState::OnRepRelevantPlayerTaskNotifyBP()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TPlanGame.XTPlayerState.OnRepRelevantPlayerTaskNotifyBP");

	AXTPlayerState_OnRepRelevantPlayerTaskNotifyBP_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function TPlanGame.XTPlayerState.OnRepEscapePosition
// (Event, Public, BlueprintEvent)

void AXTPlayerState::OnRepEscapePosition()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TPlanGame.XTPlayerState.OnRepEscapePosition");

	AXTPlayerState_OnRepEscapePosition_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function TPlanGame.XTPlayerState.OnRepAssetPointsCheckedByTeammate
// (Event, Public, BlueprintEvent)

void AXTPlayerState::OnRepAssetPointsCheckedByTeammate()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TPlanGame.XTPlayerState.OnRepAssetPointsCheckedByTeammate");

	AXTPlayerState_OnRepAssetPointsCheckedByTeammate_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function TPlanGame.XTPlayerState.OnRep_RelevantPlayerTaskNotify
// (Final, Native, Public)

void AXTPlayerState::OnRep_RelevantPlayerTaskNotify()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TPlanGame.XTPlayerState.OnRep_RelevantPlayerTaskNotify");

	AXTPlayerState_OnRep_RelevantPlayerTaskNotify_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function TPlanGame.XTPlayerState.OnRep_IsRunAway
// (Native, Event, Public, BlueprintEvent)

void AXTPlayerState::OnRep_IsRunAway()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TPlanGame.XTPlayerState.OnRep_IsRunAway");

	AXTPlayerState_OnRep_IsRunAway_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function TPlanGame.XTPlayerState.OnRep_IsEscaped
// (Native, Event, Public, BlueprintEvent)

void AXTPlayerState::OnRep_IsEscaped()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TPlanGame.XTPlayerState.OnRep_IsEscaped");

	AXTPlayerState_OnRep_IsEscaped_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function TPlanGame.XTPlayerState.OnRep_Gold
// (Native, Event, Public, BlueprintEvent)

void AXTPlayerState::OnRep_Gold()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TPlanGame.XTPlayerState.OnRep_Gold");

	AXTPlayerState_OnRep_Gold_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function TPlanGame.XTPlayerState.OnRep_EscapePosiNotify
// (Final, Native, Public)

void AXTPlayerState::OnRep_EscapePosiNotify()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TPlanGame.XTPlayerState.OnRep_EscapePosiNotify");

	AXTPlayerState_OnRep_EscapePosiNotify_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function TPlanGame.XTPlayerState.OnRep_BetrayInfo
// (Final, Native, Public)

void AXTPlayerState::OnRep_BetrayInfo()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TPlanGame.XTPlayerState.OnRep_BetrayInfo");

	AXTPlayerState_OnRep_BetrayInfo_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function TPlanGame.XTPlayerState.OnRep_AssetPointsCheckedByTeammate
// (Final, Native, Public)

void AXTPlayerState::OnRep_AssetPointsCheckedByTeammate()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TPlanGame.XTPlayerState.OnRep_AssetPointsCheckedByTeammate");

	AXTPlayerState_OnRep_AssetPointsCheckedByTeammate_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function TPlanGame.XTPlayerState.OnPlayerEscaped
// (Event, Public, BlueprintEvent)

void AXTPlayerState::OnPlayerEscaped()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TPlanGame.XTPlayerState.OnPlayerEscaped");

	AXTPlayerState_OnPlayerEscaped_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function TPlanGame.XTPlayerState.IsInGame
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AXTPlayerState::IsInGame()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TPlanGame.XTPlayerState.IsInGame");

	AXTPlayerState_IsInGame_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TPlanGame.XTPlayerState.IsInBetrayState
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AXTPlayerState::IsInBetrayState()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TPlanGame.XTPlayerState.IsInBetrayState");

	AXTPlayerState_IsInBetrayState_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TPlanGame.XTPlayerState.GetAllPreciousItemsList
// (Final, Native, Public)
// Parameters:
// TArray<struct FPreciousItem>   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FPreciousItem> AXTPlayerState::GetAllPreciousItemsList()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TPlanGame.XTPlayerState.GetAllPreciousItemsList");

	AXTPlayerState_GetAllPreciousItemsList_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


}

