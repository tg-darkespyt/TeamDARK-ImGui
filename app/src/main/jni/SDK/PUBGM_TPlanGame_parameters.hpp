#pragma once

// Pubgm India-64bit (3.4.0) SDK by BangJO [Z] DM @isar_hackJO To Buy Tool SDK

#include "../SDK.hpp"

namespace SDK
{
//---------------------By BangJO---------------------------
//Parameters
//---------------------By BangJO---------------------------

// Function TPlanGame.BackpackComponentTPlan.PickupItemFromWrapperDetail
struct UBackpackComponentTPlan_PickupItemFromWrapperDetail_Params
{
	struct FItemDefineID                               DefineID;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FBattleItemPickupInfo                       PickupInfo;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	EBattleItemPickupReason                            Reason;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	EBattleItemClientPickupType                        BattleItemClientPickupType;                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TPlanGame.BackpackComponentTPlan.PickItem_IntoSafetyBox
struct UBackpackComponentTPlan_PickItem_IntoSafetyBox_Params
{
	struct FItemDefineID                               DefineID;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FBattleItemPickupInfo                       PickupInfo;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	EBattleItemPickupReason                            Reason;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TPlanGame.BackpackComponentTPlan.NotifyItemUpdated
struct UBackpackComponentTPlan_NotifyItemUpdated_Params
{
	struct FItemDefineID                               DefineID;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function TPlanGame.BackpackComponentTPlan.NotifyItemRemoved
struct UBackpackComponentTPlan_NotifyItemRemoved_Params
{
	struct FItemDefineID                               DefineID;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function TPlanGame.BackpackComponentTPlan.NotifyItemListUpdated
struct UBackpackComponentTPlan_NotifyItemListUpdated_Params
{
};

// Function TPlanGame.BackpackTPlanUtils.UnRegisterInvokeClass
struct UBackpackTPlanUtils_UnRegisterInvokeClass_Params
{
};

// Function TPlanGame.BackpackTPlanUtils.RegisterInvokeClass
struct UBackpackTPlanUtils_RegisterInvokeClass_Params
{
};

// Function TPlanGame.BackpackTPlanUtils.RealGetBPUtils
struct UBackpackTPlanUtils_RealGetBPUtils_Params
{
	class UBackpackBlueprintTPlanUtils*                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TPlanGame.MetroStoreComponent.OnRep_StoreID
struct UMetroStoreComponent_OnRep_StoreID_Params
{
};

// Function TPlanGame.MetroStoreComponent.OnRep_Status
struct UMetroStoreComponent_OnRep_Status_Params
{
};

// Function TPlanGame.MetroStoreComponent.OnRep_GoodsNum
struct UMetroStoreComponent_OnRep_GoodsNum_Params
{
};

// Function TPlanGame.MetroStoreComponent.OnRep_GoodsListNum
struct UMetroStoreComponent_OnRep_GoodsListNum_Params
{
};

// Function TPlanGame.MetroStoreComponent.OnRep_GoodsList
struct UMetroStoreComponent_OnRep_GoodsList_Params
{
};

// Function TPlanGame.MetroStoreComponent.OnRep_CurrencyList
struct UMetroStoreComponent_OnRep_CurrencyList_Params
{
};

// Function TPlanGame.MetroStoreComponent.OnRep_BuyFrequence
struct UMetroStoreComponent_OnRep_BuyFrequence_Params
{
};

// Function TPlanGame.XTGameMode.SetStateLeftTime
struct AXTGameMode_SetStateLeftTime_Params
{
	int                                                LeftTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TPlanGame.XTGameMode.SetPlayerStartOccupied
struct AXTGameMode_SetPlayerStartOccupied_Params
{
	class AActor*                                      PlayerStart;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TPlanGame.XTGameMode.RevisePlayerTombBoxDropWrapperList
struct AXTGameMode_RevisePlayerTombBoxDropWrapperList_Params
{
	class ASTExtraBaseCharacter*                       Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FPickUpItemData>                     OutItemDataList;                                          // (Parm, OutParm, ZeroConstructor)
	class ASTExtraBaseCharacter*                       DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                InstanceIDCnt;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TPlanGame.XTGameMode.NotifyPlayerExitWhenNotStarted
struct AXTGameMode_NotifyPlayerExitWhenNotStarted_Params
{
	uint32_t                                           PlayerKey;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       PlayerType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Reason;                                                   // (Parm, ZeroConstructor)
};

// Function TPlanGame.XTGameMode.NotifyPlayerExit
struct AXTGameMode_NotifyPlayerExit_Params
{
	uint32_t                                           PlayerKey;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       PlayerType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bDestroyPlayerController;                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bDestroyCharacter;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSendFailure;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     FailureMessage;                                           // (Parm, ZeroConstructor)
	struct FName                                       ParamState;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ParamReason;                                              // (Parm, ZeroConstructor)
};

// Function TPlanGame.XTGameMode.NotifyGameModeInit
struct AXTGameMode_NotifyGameModeInit_Params
{
};

// Function TPlanGame.XTGameMode.LoadMapFinished
struct AXTGameMode_LoadMapFinished_Params
{
};

// Function TPlanGame.XTGameMode.IsNeedRestPlayerStart
struct AXTGameMode_IsNeedRestPlayerStart_Params
{
	class AController*                                 Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TPlanGame.XTGameMode.GMShowSpawner
struct AXTGameMode_GMShowSpawner_Params
{
};

// Function TPlanGame.XTGameMode.GMShowEnterExit
struct AXTGameMode_GMShowEnterExit_Params
{
};

// Function TPlanGame.XTGameMode.GMShowAssetBox
struct AXTGameMode_GMShowAssetBox_Params
{
};

// Function TPlanGame.XTGameMode.GMSetPVEAIMax
struct AXTGameMode_GMSetPVEAIMax_Params
{
	int                                                Num;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TPlanGame.XTGameMode.GetOccupiedPlayerStartGroupList
struct AXTGameMode_GetOccupiedPlayerStartGroupList_Params
{
	TArray<class AActor*>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function TPlanGame.XTGameMode.CheckNoHumanExist
struct AXTGameMode_CheckNoHumanExist_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TPlanGame.XTGameMode.CheckAIActive
struct AXTGameMode_CheckAIActive_Params
{
};

// Function TPlanGame.XTGameState.ResetLeftTime
struct AXTGameState_ResetLeftTime_Params
{
};

// Function TPlanGame.XTGameState.PreLoadPreciousItemsMap
struct AXTGameState_PreLoadPreciousItemsMap_Params
{
};

// Function TPlanGame.XTGameState.OnRep_LastLeaveTime
struct AXTGameState_OnRep_LastLeaveTime_Params
{
};

// Function TPlanGame.XTGameState.GetPlayerMilitartyOnClient
struct AXTGameState_GetPlayerMilitartyOnClient_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TPlanGame.XTGameState.CheckPreciousItemPrice
struct AXTGameState_CheckPreciousItemPrice_Params
{
	int                                                TypeSpecificID;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TPlanGame.XTGameState.BroadcastClimbHelicopter
struct AXTGameState_BroadcastClimbHelicopter_Params
{
	class ASTExtraPlayerCharacter*                     Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ExitActor;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TPlanGame.XTPlayerState.OnRepXTBetrayInfo
struct AXTPlayerState_OnRepXTBetrayInfo_Params
{
};

// Function TPlanGame.XTPlayerState.OnRepRelevantPlayerTaskNotifyBP
struct AXTPlayerState_OnRepRelevantPlayerTaskNotifyBP_Params
{
};

// Function TPlanGame.XTPlayerState.OnRepEscapePosition
struct AXTPlayerState_OnRepEscapePosition_Params
{
};

// Function TPlanGame.XTPlayerState.OnRepAssetPointsCheckedByTeammate
struct AXTPlayerState_OnRepAssetPointsCheckedByTeammate_Params
{
};

// Function TPlanGame.XTPlayerState.OnRep_RelevantPlayerTaskNotify
struct AXTPlayerState_OnRep_RelevantPlayerTaskNotify_Params
{
};

// Function TPlanGame.XTPlayerState.OnRep_IsRunAway
struct AXTPlayerState_OnRep_IsRunAway_Params
{
};

// Function TPlanGame.XTPlayerState.OnRep_IsEscaped
struct AXTPlayerState_OnRep_IsEscaped_Params
{
};

// Function TPlanGame.XTPlayerState.OnRep_Gold
struct AXTPlayerState_OnRep_Gold_Params
{
};

// Function TPlanGame.XTPlayerState.OnRep_EscapePosiNotify
struct AXTPlayerState_OnRep_EscapePosiNotify_Params
{
};

// Function TPlanGame.XTPlayerState.OnRep_BetrayInfo
struct AXTPlayerState_OnRep_BetrayInfo_Params
{
};

// Function TPlanGame.XTPlayerState.OnRep_AssetPointsCheckedByTeammate
struct AXTPlayerState_OnRep_AssetPointsCheckedByTeammate_Params
{
};

// Function TPlanGame.XTPlayerState.OnPlayerEscaped
struct AXTPlayerState_OnPlayerEscaped_Params
{
};

// Function TPlanGame.XTPlayerState.IsInGame
struct AXTPlayerState_IsInGame_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TPlanGame.XTPlayerState.IsInBetrayState
struct AXTPlayerState_IsInBetrayState_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TPlanGame.XTPlayerState.GetAllPreciousItemsList
struct AXTPlayerState_GetAllPreciousItemsList_Params
{
	TArray<struct FPreciousItem>                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

}

