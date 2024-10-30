#pragma once

// Pubgm India-64bit (3.4.0) SDK by BangJO [Z] DM @isar_hackJO To Buy Tool SDK

#include "../SDK.hpp"

namespace SDK
{
//---------------------By BangJO---------------------------
//Parameters
//---------------------By BangJO---------------------------

// Function Basic.UAENetActor.ReceivedPlayerActiveRegionsChanged
struct AUAENetActor_ReceivedPlayerActiveRegionsChanged_Params
{
	bool                                               bEnter;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic.ItemHandleBase.SetAssociation
struct UItemHandleBase_SetAssociation_Params
{
	int                                                AssociationType;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FItemAssociation                            Association;                                              // (Parm)
};

// Function Basic.ItemHandleBase.RemoveAssociation
struct UItemHandleBase_RemoveAssociation_Params
{
	int                                                AssociationType;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic.ItemHandleBase.Init
struct UItemHandleBase_Init_Params
{
	struct FItemDefineID                               InDefineID;                                               // (Parm)
};

// Function Basic.ItemHandleBase.GetDefineID
struct UItemHandleBase_GetDefineID_Params
{
	struct FItemDefineID                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Basic.ItemHandleBase.GetAssociationMap
struct UItemHandleBase_GetAssociationMap_Params
{
	TMap<int, struct FItemAssociation>                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Basic.ItemHandleBase.GetAssociationListByTargetType
struct UItemHandleBase_GetAssociationListByTargetType_Params
{
	int                                                Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FItemAssociation>                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Basic.ItemHandleBase.GetAssociationByTargetDefineID
struct UItemHandleBase_GetAssociationByTargetDefineID_Params
{
	struct FItemDefineID                               TargetDefineID;                                           // (Parm)
	struct FItemAssociation                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Basic.ItemHandleBase.GetAssociation
struct UItemHandleBase_GetAssociation_Params
{
	int                                                AssociationType;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FItemAssociation                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Basic.ItemHandleBase.Constuct
struct UItemHandleBase_Constuct_Params
{
	struct FItemDefineID                               InDefineID;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Basic.ItemHandleBase.CollectionNeedLoadSoftPath
struct UItemHandleBase_CollectionNeedLoadSoftPath_Params
{
	TArray<struct FSoftObjectPath>                     OutSoftPathList;                                          // (Parm, OutParm, ZeroConstructor)
};

// Function Basic.ItemHandleBase.AddAssociation
struct UItemHandleBase_AddAssociation_Params
{
	int                                                AssociationType;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FItemAssociation                            Association;                                              // (Parm)
};

// Function Basic.BattleItemHandleBase.UpdateAttributeModify
struct UBattleItemHandleBase_UpdateAttributeModify_Params
{
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic.BattleItemHandleBase.UnEquip
struct UBattleItemHandleBase_UnEquip_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.BattleItemHandleBase.HanldePickupAssociationData
struct UBattleItemHandleBase_HanldePickupAssociationData_Params
{
	TArray<struct FBattleItemAdditionalData>           PickupAdditionalData;                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.BattleItemHandleBase.HanldeDropAssociationData
struct UBattleItemHandleBase_HanldeDropAssociationData_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.BattleItemHandleBase.HanldeCleared
struct UBattleItemHandleBase_HanldeCleared_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.BattleItemHandleBase.HandleUse
struct UBattleItemHandleBase_HandleUse_Params
{
	struct FBattleItemUseTarget                        Target;                                                   // (Parm)
	EBattleItemUseReason                               Reason;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.BattleItemHandleBase.HandlePickup
struct UBattleItemHandleBase_HandlePickup_Params
{
	TScriptInterface<class UItemContainerInterface>    ItemContainer;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FBattleItemPickupInfo                       PickupInfo;                                               // (Parm)
	EBattleItemPickupReason                            Reason;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.BattleItemHandleBase.HandleEnable
struct UBattleItemHandleBase_HandleEnable_Params
{
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.BattleItemHandleBase.HandleDrop
struct UBattleItemHandleBase_HandleDrop_Params
{
	int                                                InCount;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	EBattleItemDropReason                              Reason;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.BattleItemHandleBase.HandleDisuse
struct UBattleItemHandleBase_HandleDisuse_Params
{
	EBattleItemDisuseReason                            Reason;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.BattleItemHandleBase.HandleChangeItemStoreArea
struct UBattleItemHandleBase_HandleChangeItemStoreArea_Params
{
	EItemStoreArea                                     InItemStoreArea;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.BattleItemHandleBase.HandleBindToTargetItem
struct UBattleItemHandleBase_HandleBindToTargetItem_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.BattleItemHandleBase.GetWorldInternal
struct UBattleItemHandleBase_GetWorldInternal_Params
{
	class UWorld*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.BattleItemHandleBase.GetCurrentWorld
struct UBattleItemHandleBase_GetCurrentWorld_Params
{
	class UWorld*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.BattleItemHandleBase.ExtractItemData
struct UBattleItemHandleBase_ExtractItemData_Params
{
	struct FBattleItemData                             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Basic.BattleItemHandleBase.ClearAdditionalData
struct UBattleItemHandleBase_ClearAdditionalData_Params
{
};

// Function Basic.BattleItemHandleBase.CheckCanUse
struct UBattleItemHandleBase_CheckCanUse_Params
{
	TScriptInterface<class UItemContainerInterface>    ItemContainer;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FBattleItemUseTarget                        Target;                                                   // (Parm)
	EBattleItemUseReason                               Reason;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.UAEGameInstance.SetLuaStateWrapper
struct UUAEGameInstance_SetLuaStateWrapper_Params
{
	class ULuaStateWrapper*                            TLuaStateWrapper;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic.UAEGameInstance.OpenAssetLoadLog
struct UUAEGameInstance_OpenAssetLoadLog_Params
{
};

// DelegateFunction Basic.UAEGameInstance.OnPreBattleResult__DelegateSignature
struct UUAEGameInstance_OnPreBattleResult__DelegateSignature_Params
{
};

// Function Basic.UAEGameInstance.LuaLeakDetect
struct UUAEGameInstance_LuaLeakDetect_Params
{
};

// Function Basic.UAEGameInstance.LuaDoString
struct UUAEGameInstance_LuaDoString_Params
{
	struct FString                                     LuaString;                                                // (Parm, ZeroConstructor)
};

// Function Basic.UAEGameInstance.GetWeatherTime
struct UUAEGameInstance_GetWeatherTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.UAEGameInstance.GetWeatherLevelName
struct UUAEGameInstance_GetWeatherLevelName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Basic.UAEGameInstance.GetWeatherID
struct UUAEGameInstance_GetWeatherID_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.UAEGameInstance.GetLuaStateWrapper
struct UUAEGameInstance_GetLuaStateWrapper_Params
{
	class ULuaStateWrapper*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.UAEGameInstance.GetLoadWeatherName
struct UUAEGameInstance_GetLoadWeatherName_Params
{
	struct FString                                     InWeatherName;                                            // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Basic.UAEGameInstance.GetIsHighWeatherLevel
struct UUAEGameInstance_GetIsHighWeatherLevel_Params
{
	struct FString                                     InWeatherLevelName;                                       // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.UAEGameInstance.GetGameID
struct UUAEGameInstance_GetGameID_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Basic.UAEGameInstance.GetDeviceLevel
struct UUAEGameInstance_GetDeviceLevel_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.UAEGameInstance.GetDataTable_Mod
struct UUAEGameInstance_GetDataTable_Mod_Params
{
	struct FString                                     tableName;                                                // (Parm, ZeroConstructor)
	class UUAEDataTable*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.UAEGameInstance.GetDataTable
struct UUAEGameInstance_GetDataTable_Params
{
	struct FString                                     tableName;                                                // (Parm, ZeroConstructor)
	class UUAEDataTable*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.UAEGameInstance.GetAssociatedFrontendHUD
struct UUAEGameInstance_GetAssociatedFrontendHUD_Params
{
	class UFrontendHUD*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.UAEGameInstance.CloseAssetLoadLog
struct UUAEGameInstance_CloseAssetLoadLog_Params
{
};

// Function Basic.AttrModifyComponent.SwitchAttrModifier
struct UAttrModifyComponent_SwitchAttrModifier_Params
{
	struct FString                                     AttrModifyItemName;                                       // (Parm, ZeroConstructor)
	bool                                               Enable;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.AttrModifyComponent.StartTimerToSyncRecordAttrValue
struct UAttrModifyComponent_StartTimerToSyncRecordAttrValue_Params
{
	float                                              Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic.AttrModifyComponent.SetValueToAttributeSafety
struct UAttrModifyComponent_SetValueToAttributeSafety_Params
{
	struct FString                                     AttrName;                                                 // (Parm, ZeroConstructor)
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ModifyRecordType;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic.AttrModifyComponent.SetOrignalValueToAttribute
struct UAttrModifyComponent_SetOrignalValueToAttribute_Params
{
	struct FString                                     AttrName;                                                 // (Parm, ZeroConstructor)
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic.AttrModifyComponent.SetAttrModifyStateValue
struct UAttrModifyComponent_SetAttrModifyStateValue_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic.AttrModifyComponent.SetAttributeMinValue
struct UAttrModifyComponent_SetAttributeMinValue_Params
{
	struct FString                                     AttrName;                                                 // (Parm, ZeroConstructor)
	float                                              MinValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic.AttrModifyComponent.SetAttributeMaxValue
struct UAttrModifyComponent_SetAttributeMaxValue_Params
{
	struct FString                                     AttrName;                                                 // (Parm, ZeroConstructor)
	float                                              MaxValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic.AttrModifyComponent.ServerSendExceptionType
struct UAttrModifyComponent_ServerSendExceptionType_Params
{
	struct FString                                     AttrName;                                                 // (Parm, ZeroConstructor)
	int                                                ExceptionType;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic.AttrModifyComponent.ServerRequestRecordAttrValue
struct UAttrModifyComponent_ServerRequestRecordAttrValue_Params
{
	struct FString                                     AttrName;                                                 // (Parm, ZeroConstructor)
};

// Function Basic.AttrModifyComponent.ResponeAttrValue
struct UAttrModifyComponent_ResponeAttrValue_Params
{
	struct FString                                     AttrName;                                                 // (Parm, ZeroConstructor)
	float                                              FinalValue;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic.AttrModifyComponent.RequestAttrValue
struct UAttrModifyComponent_RequestAttrValue_Params
{
	struct FString                                     AttrName;                                                 // (Parm, ZeroConstructor)
};

// Function Basic.AttrModifyComponent.RemoveModifyItemFromCache
struct UAttrModifyComponent_RemoveModifyItemFromCache_Params
{
	uint32_t                                           ModifyUID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.AttrModifyComponent.RemoveAttrListener
struct UAttrModifyComponent_RemoveAttrListener_Params
{
	struct FString                                     AttrName;                                                 // (Parm, ZeroConstructor)
	struct FSluaBPVar                                  Listener;                                                 // (Parm)
};

// Function Basic.AttrModifyComponent.RemoveAllDynamicModifier
struct UAttrModifyComponent_RemoveAllDynamicModifier_Params
{
	bool                                               bForce;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic.AttrModifyComponent.RegisterModifyAbleAttr
struct UAttrModifyComponent_RegisterModifyAbleAttr_Params
{
	TArray<struct FAttrRegisterItem>                   AttrRegists;                                              // (Parm, OutParm, ZeroConstructor)
	bool                                               bSetAttrByOrigin;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.AttrModifyComponent.RegistAttrModifyRecordList
struct UAttrModifyComponent_RegistAttrModifyRecordList_Params
{
	struct FString                                     AttrName;                                                 // (Parm, ZeroConstructor)
	int                                                RecordLen;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic.AttrModifyComponent.PushAttrModifyRecordItem
struct UAttrModifyComponent_PushAttrModifyRecordItem_Params
{
	struct FString                                     AttrName;                                                 // (Parm, ZeroConstructor)
	float                                              PreValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              CurValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ModifyRecordType;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ModifyDesc;                                               // (Parm, ZeroConstructor)
};

// Function Basic.AttrModifyComponent.OnRep_ModSimulateSyncList
struct UAttrModifyComponent_OnRep_ModSimulateSyncList_Params
{
};

// Function Basic.AttrModifyComponent.OnRep_ExceptionAttrModifyRecords
struct UAttrModifyComponent_OnRep_ExceptionAttrModifyRecords_Params
{
};

// Function Basic.AttrModifyComponent.OnRep_DynamicModifier
struct UAttrModifyComponent_OnRep_DynamicModifier_Params
{
};

// Function Basic.AttrModifyComponent.OnRep_AttrModifyStateList
struct UAttrModifyComponent_OnRep_AttrModifyStateList_Params
{
};

// DelegateFunction Basic.AttrModifyComponent.OnNeedSetSpeedOverLimit__DelegateSignature
struct UAttrModifyComponent_OnNeedSetSpeedOverLimit__DelegateSignature_Params
{
};

// DelegateFunction Basic.AttrModifyComponent.OnAttrModifiedEvent__DelegateSignature
struct UAttrModifyComponent_OnAttrModifiedEvent__DelegateSignature_Params
{
	TArray<struct FAttrAffected>                       AffectedAttrS;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Basic.AttrModifyComponent.LuaSetValueToAttributeSafety
struct UAttrModifyComponent_LuaSetValueToAttributeSafety_Params
{
	struct FString                                     AttrName;                                                 // (Parm, ZeroConstructor)
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic.AttrModifyComponent.IsAttrModifyStateValidIndex
struct UAttrModifyComponent_IsAttrModifyStateValidIndex_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.AttrModifyComponent.HasDynamicModifier
struct UAttrModifyComponent_HasDynamicModifier_Params
{
	struct FString                                     AttrModifyId;                                             // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.AttrModifyComponent.HandleExceptionAttrModify
struct UAttrModifyComponent_HandleExceptionAttrModify_Params
{
	struct FString                                     AttrName;                                                 // (Parm, ZeroConstructor)
	int                                                ExceptionType;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic.AttrModifyComponent.GetSubsystem
struct UAttrModifyComponent_GetSubsystem_Params
{
	class UAttrModifyModDataSubsystem*                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.AttrModifyComponent.GetMaxAttrName
struct UAttrModifyComponent_GetMaxAttrName_Params
{
	struct FString                                     AttrName;                                                 // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Basic.AttrModifyComponent.GetAttrModifyStateValue
struct UAttrModifyComponent_GetAttrModifyStateValue_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.AttrModifyComponent.GetAttrModifyStateNum
struct UAttrModifyComponent_GetAttrModifyStateNum_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.AttrModifyComponent.GetAttrModifyItemByItemName
struct UAttrModifyComponent_GetAttrModifyItemByItemName_Params
{
	struct FString                                     ItemName;                                                 // (Parm, ZeroConstructor)
	struct FAttrModifyItem                             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Basic.AttrModifyComponent.GetAttributeValue
struct UAttrModifyComponent_GetAttributeValue_Params
{
	struct FString                                     AttrName;                                                 // (Parm, ZeroConstructor)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.AttrModifyComponent.GetAttributeOrignalValue
struct UAttrModifyComponent_GetAttributeOrignalValue_Params
{
	struct FString                                     AttrName;                                                 // (Parm, ZeroConstructor)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.AttrModifyComponent.GetAttributeMaxValue
struct UAttrModifyComponent_GetAttributeMaxValue_Params
{
	struct FString                                     AttrName;                                                 // (Parm, ZeroConstructor)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.AttrModifyComponent.EnableAttrModifierByIndex
struct UAttrModifyComponent_EnableAttrModifierByIndex_Params
{
	int                                                ModifyConfigIndex;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.AttrModifyComponent.EnableAttrModifier
struct UAttrModifyComponent_EnableAttrModifier_Params
{
	struct FString                                     AttrModifyItemName;                                       // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.AttrModifyComponent.DisableAttrModifierByIndex
struct UAttrModifyComponent_DisableAttrModifierByIndex_Params
{
	int                                                ModifyConfigIndex;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.AttrModifyComponent.DisableAttrModifier
struct UAttrModifyComponent_DisableAttrModifier_Params
{
	struct FString                                     AttrModifyItemName;                                       // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.AttrModifyComponent.DisableAllAttrModifier
struct UAttrModifyComponent_DisableAllAttrModifier_Params
{
	bool                                               bForce;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.AttrModifyComponent.ConditionSyncRecordAttrValue
struct UAttrModifyComponent_ConditionSyncRecordAttrValue_Params
{
};

// Function Basic.AttrModifyComponent.ClientSyncRecordAttrValue
struct UAttrModifyComponent_ClientSyncRecordAttrValue_Params
{
	TArray<struct FAttrDesc>                           AttrDescs;                                                // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
};

// Function Basic.AttrModifyComponent.ClientSendRecordData
struct UAttrModifyComponent_ClientSendRecordData_Params
{
	struct FAttrModifyRecordItem                       RecordItem;                                               // (ConstParm, Parm, ReferenceParm)
	int                                                ExceptionType;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic.AttrModifyComponent.ClearAllAttrModify
struct UAttrModifyComponent_ClearAllAttrModify_Params
{
};

// Function Basic.AttrModifyComponent.AddValueToAttribute
struct UAttrModifyComponent_AddValueToAttribute_Params
{
	struct FString                                     AttrName;                                                 // (Parm, ZeroConstructor)
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic.AttrModifyComponent.AddModifyItemAndCache
struct UAttrModifyComponent_AddModifyItemAndCache_Params
{
	struct FString                                     AttrName;                                                 // (Parm, ZeroConstructor)
	EAttrModifyRefType                                 CModifyType;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              CValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     Causer;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bOldModify;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	uint32_t                                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.AttrModifyComponent.AddDynamicModifier
struct UAttrModifyComponent_AddDynamicModifier_Params
{
	struct FAttrModifyItem                             AttrModifyItem;                                           // (Parm, OutParm)
	bool                                               RepOnlyOwner;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic.AttrModifyComponent.AddBModifyAndCacheWithCParam
struct UAttrModifyComponent_AddBModifyAndCacheWithCParam_Params
{
	struct FString                                     AttrName;                                                 // (Parm, ZeroConstructor)
	EAttrModifyRefType                                 CModifyType;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              CValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	uint32_t                                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.AttrModifyComponent.AddBModifyAndCache
struct UAttrModifyComponent_AddBModifyAndCache_Params
{
	struct FString                                     AttrName;                                                 // (Parm, ZeroConstructor)
	EAttrOperator                                      ModifyType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	uint32_t                                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.AttrModifyComponent.AddAttrListener
struct UAttrModifyComponent_AddAttrListener_Params
{
	struct FString                                     AttrName;                                                 // (Parm, ZeroConstructor)
	struct FSluaBPVar                                  Listener;                                                 // (Parm)
};

// Function Basic.AttrModifyInterface.SetAttrValue
struct UAttrModifyInterface_SetAttrValue_Params
{
	struct FString                                     AttrName;                                                 // (Parm, ZeroConstructor)
	float                                              NewVal;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Reason;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic.AttrModifyInterface.RequestAttrValue
struct UAttrModifyInterface_RequestAttrValue_Params
{
	struct FString                                     AttrName;                                                 // (Parm, ZeroConstructor)
};

// Function Basic.AttrModifyInterface.RegisterModifiedAttributes
struct UAttrModifyInterface_RegisterModifiedAttributes_Params
{
};

// Function Basic.AttrModifyInterface.GetAttrValue
struct UAttrModifyInterface_GetAttrValue_Params
{
	struct FString                                     AttrName;                                                 // (Parm, ZeroConstructor)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.AttrModifyInterface.GetAttrModifyRelevantActors
struct UAttrModifyInterface_GetAttrModifyRelevantActors_Params
{
	TArray<class AActor*>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Basic.AttrModifyInterface.GetAttrModifyComponent
struct UAttrModifyInterface_GetAttrModifyComponent_Params
{
	class UAttrModifyComponent*                        ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Basic.AttrModifyInterface.GetAttributeValue
struct UAttrModifyInterface_GetAttributeValue_Params
{
	struct FString                                     AttrName;                                                 // (Parm, ZeroConstructor)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.AttrModifyInterface.AddAttrValue
struct UAttrModifyInterface_AddAttrValue_Params
{
	struct FString                                     AttrName;                                                 // (Parm, ZeroConstructor)
	float                                              AddVal;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Reason;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic.BPClassManager.ModifyClass
struct UBPClassManager_ModifyClass_Params
{
	class UClass*                                      InNativeClass;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ModTag;                                                   // (Parm, ZeroConstructor)
};

// Function Basic.BPClassManager.GetUClass
struct UBPClassManager_GetUClass_Params
{
	int                                                KeyIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.BPClassManager.GetBPClassOverrideByName
struct UBPClassManager_GetBPClassOverrideByName_Params
{
	struct FString                                     ClassTagName;                                             // (Parm, ZeroConstructor)
	struct FString                                     ModTag;                                                   // (Parm, ZeroConstructor)
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.BPClassManager.GetBPClassOverride
struct UBPClassManager_GetBPClassOverride_Params
{
	class UClass*                                      InNativeClass;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ModTag;                                                   // (Parm, ZeroConstructor)
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.BPClassManager.Get
struct UBPClassManager_Get_Params
{
	class UBPClassManager*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.DelayReplicationInterface.ReSendRPCAfterBeginPlay
struct UDelayReplicationInterface_ReSendRPCAfterBeginPlay_Params
{
};

// Function Basic.DelayReplicationInterface.ReCallRepAfterBeginPlay
struct UDelayReplicationInterface_ReCallRepAfterBeginPlay_Params
{
};

// Function Basic.ItemContainerInterface.GetOwningObject
struct UItemContainerInterface_GetOwningObject_Params
{
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.ItemContainerInterface.GetItemHandleListByDefineID
struct UItemContainerInterface_GetItemHandleListByDefineID_Params
{
	struct FItemDefineID                               DefineID;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
	TArray<class UItemHandleBase*>                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Basic.ItemContainerInterface.GetItemHandleByDefineID
struct UItemContainerInterface_GetItemHandleByDefineID_Params
{
	struct FItemDefineID                               DefineID;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
	class UItemHandleBase*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.ItemContainerInterface.GetItemDefineIDList
struct UItemContainerInterface_GetItemDefineIDList_Params
{
	TArray<struct FItemDefineID>                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Basic.ItemContainerInterface.GetFirstItemDefineBySpecificID
struct UItemContainerInterface_GetFirstItemDefineBySpecificID_Params
{
	int                                                ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FItemDefineID                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Basic.ItemContainerOwnerInterface.NotifyUpdateCustomAccessoriesData
struct UItemContainerOwnerInterface_NotifyUpdateCustomAccessoriesData_Params
{
	int                                                WeaponItemId;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ItemId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsSetOrRemove;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic.ItemContainerOwnerInterface.NotifyUpdateCapacity
struct UItemContainerOwnerInterface_NotifyUpdateCapacity_Params
{
	float                                              inBackPackCapacity;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              inOccupiedCapacity;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              inSafetyBoxCapacity;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              inSafetyBoxOccupiedCapacity;                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic.ItemContainerOwnerInterface.NotifyItemUpdated
struct UItemContainerOwnerInterface_NotifyItemUpdated_Params
{
	struct FItemDefineID                               DefineID;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FBattleItemData                             ItemData;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Basic.ItemContainerOwnerInterface.NotifyItemRemoved
struct UItemContainerOwnerInterface_NotifyItemRemoved_Params
{
	struct FItemDefineID                               DefineID;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FBattleItemData                             ItemData;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Basic.ItemContainerOwnerInterface.NotifyItemEmpty
struct UItemContainerOwnerInterface_NotifyItemEmpty_Params
{
};

// Function Basic.ItemContainerOwnerInterface.NotifyItemAdded
struct UItemContainerOwnerInterface_NotifyItemAdded_Params
{
	struct FItemDefineID                               DefineID;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FBattleItemData                             ItemData;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Basic.LuaAsyncTaskSubsystem.IsNeedClear
struct ULuaAsyncTaskSubsystem_IsNeedClear_Params
{
	class UFrontendHUD*                                FrontendHUD;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FSluaBPVar                                  Callback;                                                 // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.LuaEventBridgeFunction.UnRegisterEventByTarget
struct ULuaEventBridgeFunction_UnRegisterEventByTarget_Params
{
	class UObject*                                     ObjContext;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic.LuaEventBridgeFunction.UnRegisterEvent
struct ULuaEventBridgeFunction_UnRegisterEvent_Params
{
	struct FString                                     FEventType;                                               // (Parm, ZeroConstructor)
	struct FString                                     EventID;                                                  // (Parm, ZeroConstructor)
	class UObject*                                     ObjContext;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                EventHandle;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic.LuaEventBridgeFunction.RegistEvent
struct ULuaEventBridgeFunction_RegistEvent_Params
{
	struct FString                                     EventType;                                                // (Parm, ZeroConstructor)
	struct FString                                     EventID;                                                  // (Parm, ZeroConstructor)
	class UObject*                                     ObjContext;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     FunctionName;                                             // (Parm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.LuaEventBridge.SyncLuaRegisterEventNum
struct ULuaEventBridge_SyncLuaRegisterEventNum_Params
{
	struct FString                                     EventType;                                                // (Parm, ZeroConstructor)
	struct FString                                     EventID;                                                  // (Parm, ZeroConstructor)
	int                                                Number;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic.LuaEventBridge.GetCurrentParam
struct ULuaEventBridge_GetCurrentParam_Params
{
	TArray<class ULuaTemBPData*>                       ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Basic.LuaEventBridge.DeactivateEventsByFilterKey
struct ULuaEventBridge_DeactivateEventsByFilterKey_Params
{
	uint32_t                                           FilterKey;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Basic.LuaEventBridge.CheckNeedPostEventWithFilterKey
struct ULuaEventBridge_CheckNeedPostEventWithFilterKey_Params
{
	uint32_t                                           FilterKey;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FString                                     EventType;                                                // (Parm, ZeroConstructor)
	struct FString                                     EventID;                                                  // (Parm, ZeroConstructor)
	bool                                               bCheckNeedPostLua;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.LuaEventBridge.ActiveEventByFilterKey
struct ULuaEventBridge_ActiveEventByFilterKey_Params
{
	uint32_t                                           FilterKey;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FString                                     EventType;                                                // (Parm, ZeroConstructor)
	struct FString                                     EventID;                                                  // (Parm, ZeroConstructor)
	bool                                               bActive;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic.LuaEventSubsystem.UnRegistEvent
struct ULuaEventSubsystem_UnRegistEvent_Params
{
	int                                                EventHandle;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic.LuaEventSubsystem.SetBridgeFunction
struct ULuaEventSubsystem_SetBridgeFunction_Params
{
	struct FSluaBPVar                                  OnRegistEvent;                                            // (Parm)
	struct FSluaBPVar                                  OnUnRegistEvent;                                          // (Parm)
	struct FSluaBPVar                                  OnPostEvent;                                              // (Parm)
	struct FSluaBPVar                                  OnPostBlueprintEvent;                                     // (Parm)
};

// Function Basic.LuaEventSubsystem.RegistEvent
struct ULuaEventSubsystem_RegistEvent_Params
{
	struct FString                                     EventID;                                                  // (Parm, ZeroConstructor)
	struct FString                                     EventType;                                                // (Parm, ZeroConstructor)
	class UObject*                                     Object;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     FunctionName;                                             // (Parm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.PlayerReliableSequentialSyncActor.OnActorSpawned
struct APlayerReliableSequentialSyncActor_OnActorSpawned_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic.RenderFunctionLibrary.MarkComponentRenderStateDirty
struct URenderFunctionLibrary_MarkComponentRenderStateDirty_Params
{
	class UActorComponent*                             Comp;                                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Basic.STBaseBuffCarrierInterface.SyncInvincibleData
struct USTBaseBuffCarrierInterface_SyncInvincibleData_Params
{
	float                                              TotalTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic.STBaseBuffCarrierInterface.RemoveBuffBySkill
struct USTBaseBuffCarrierInterface_RemoveBuffBySkill_Params
{
	int                                                SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                LayerCount;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Causer;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.STBaseBuffCarrierInterface.RemoveBuffByID
struct USTBaseBuffCarrierInterface_RemoveBuffByID_Params
{
	int                                                BuffID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Causer;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                LayerCount;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                CauseSkillID;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.STBaseBuffCarrierInterface.IsSameTeamWithFirstPC
struct USTBaseBuffCarrierInterface_IsSameTeamWithFirstPC_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.STBaseBuffCarrierInterface.HasBuffID
struct USTBaseBuffCarrierInterface_HasBuffID_Params
{
	int                                                BuffID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.STBaseBuffCarrierInterface.GetBuffDuration
struct USTBaseBuffCarrierInterface_GetBuffDuration_Params
{
	int                                                InstID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                CauseSkillID;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.STBaseBuffCarrierInterface.CheckBuffTarget
struct USTBaseBuffCarrierInterface_CheckBuffTarget_Params
{
	class USTBuff*                                     Buff;                                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.STBaseBuffCarrierInterface.ChangeBuffDuration
struct USTBaseBuffCarrierInterface_ChangeBuffDuration_Params
{
	int                                                InstID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.STBaseBuffCarrierInterface.AddBuffBySkill
struct USTBaseBuffCarrierInterface_AddBuffBySkill_Params
{
	int                                                SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                LayerCount;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Causer;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Level;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.STBaseBuffCarrierInterface.AddBuffByID
struct USTBaseBuffCarrierInterface_AddBuffByID_Params
{
	int                                                BuffID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Causer;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                LayerCount;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                CauseSkillID;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Level;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.STBuff.TryGetParams
struct USTBuff_TryGetParams_Params
{
	int                                                CauseSkillID;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic.STBuff.Tick
struct USTBuff_Tick_Params
{
	class UActorComponent*                             BuffSystemComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                InstID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DetalTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeSeconds;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic.STBuff.ResetActionExecute
struct USTBuff_ResetActionExecute_Params
{
	class UActorComponent*                             BuffSystemComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                InstID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic.STBuff.OnMarkEnd
struct USTBuff_OnMarkEnd_Params
{
	class UActorComponent*                             BuffSystemComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                InstID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic.STBuff.OnCreate
struct USTBuff_OnCreate_Params
{
	class UActorComponent*                             BuffSystemComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                InstID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic.STBuff.Initialize
struct USTBuff_Initialize_Params
{
	class UActorComponent*                             BuffSystemComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                InstID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic.STBuff.End
struct USTBuff_End_Params
{
	class UActorComponent*                             BuffSystemComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                InstID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic.STBuff.Destroy
struct USTBuff_Destroy_Params
{
	class UActorComponent*                             BuffSystemComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                InstID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic.STBuff.CopyActions
struct USTBuff_CopyActions_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.STBuff.ChangeNotify
struct USTBuff_ChangeNotify_Params
{
	class UActorComponent*                             BuffSystemComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                InstID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic.STBuffAction.Tick
struct USTBuffAction_Tick_Params
{
	class UActorComponent*                             BuffSystemComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                InstID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DetalTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic.STBuffAction.SetEnabled
struct USTBuffAction_SetEnabled_Params
{
	class UActorComponent*                             BuffSystemComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                InstID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Enabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic.STBuffAction.ResetExecute
struct USTBuffAction_ResetExecute_Params
{
	class UActorComponent*                             BuffSystemComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                InstID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IgnoreEnd;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic.STBuffAction.OnTick
struct USTBuffAction_OnTick_Params
{
	float                                              DetalTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic.STBuffAction.OnResetExecute
struct USTBuffAction_OnResetExecute_Params
{
	bool                                               IgnoreEnd;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic.STBuffAction.OnInitialize
struct USTBuffAction_OnInitialize_Params
{
};

// Function Basic.STBuffAction.OnExecute
struct USTBuffAction_OnExecute_Params
{
};

// Function Basic.STBuffAction.OnEnd
struct USTBuffAction_OnEnd_Params
{
};

// Function Basic.STBuffAction.OnDestroy
struct USTBuffAction_OnDestroy_Params
{
};

// Function Basic.STBuffAction.OnCheckLinkActionEnabled
struct USTBuffAction_OnCheckLinkActionEnabled_Params
{
};

// Function Basic.STBuffAction.OnChangeNotify
struct USTBuffAction_OnChangeNotify_Params
{
};

// Function Basic.STBuffAction.Initialize
struct USTBuffAction_Initialize_Params
{
	class UActorComponent*                             BuffSystemComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                InstID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic.STBuffAction.GetTargetSharedActors
struct USTBuffAction_GetTargetSharedActors_Params
{
	TArray<class AActor*>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Basic.STBuffAction.GetRealOwnerRole
struct USTBuffAction_GetRealOwnerRole_Params
{
	TEnumAsByte<enum ENetRole>                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.STBuffAction.GetOwner
struct USTBuffAction_GetOwner_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.STBuffAction.GetCauser
struct USTBuffAction_GetCauser_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.STBuffAction.Execute
struct USTBuffAction_Execute_Params
{
	class UActorComponent*                             BuffSystemComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                InstID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic.STBuffAction.End
struct USTBuffAction_End_Params
{
	class UActorComponent*                             BuffSystemComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                InstID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic.STBuffAction.Destroy
struct USTBuffAction_Destroy_Params
{
	class UActorComponent*                             BuffSystemComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                InstID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic.STBuffAction.CheckLinkActionEnabled
struct USTBuffAction_CheckLinkActionEnabled_Params
{
	class UActorComponent*                             BuffSystemComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                InstID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic.STBuffAction.ChangeNotify
struct USTBuffAction_ChangeNotify_Params
{
	class UActorComponent*                             BuffSystemComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                InstID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic.STBuffAction_Lua.OnTick
struct USTBuffAction_Lua_OnTick_Params
{
	float                                              DetalTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic.STBuffAction_Lua.OnInitialize
struct USTBuffAction_Lua_OnInitialize_Params
{
};

// Function Basic.STBuffAction_Lua.OnExecute
struct USTBuffAction_Lua_OnExecute_Params
{
};

// Function Basic.STBuffAction_Lua.OnEnd
struct USTBuffAction_Lua_OnEnd_Params
{
};

// Function Basic.STBuffAction_Lua.OnDestroy
struct USTBuffAction_Lua_OnDestroy_Params
{
};

// Function Basic.STBuffAction_Lua.OnChangeNotify
struct USTBuffAction_Lua_OnChangeNotify_Params
{
};

// Function Basic.STBuffCondition.OnResetExecute
struct USTBuffCondition_OnResetExecute_Params
{
	bool                                               IgnoreEnd;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic.STBuffCondition.OnInitialize
struct USTBuffCondition_OnInitialize_Params
{
};

// Function Basic.STBuffCondition.OnDestroy
struct USTBuffCondition_OnDestroy_Params
{
};

// Function Basic.STBuffCondition.GetOwner
struct USTBuffCondition_GetOwner_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.STBuffCondition.GetCauser
struct USTBuffCondition_GetCauser_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.STBuffCondition.Copy
struct USTBuffCondition_Copy_Params
{
	class UObject*                                     Outer;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class USTBuffCondition*                            ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Basic.STBuffCondition.CheckIsTrue
struct USTBuffCondition_CheckIsTrue_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.STBuffCondition_Lua.OnInitialize
struct USTBuffCondition_Lua_OnInitialize_Params
{
};

// Function Basic.STBuffCondition_Lua.OnDestroy
struct USTBuffCondition_Lua_OnDestroy_Params
{
};

// Function Basic.STBuffCondition_Lua.CheckIsTrue
struct USTBuffCondition_Lua_CheckIsTrue_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.STBuffConditionComplex.OnInitialize
struct USTBuffConditionComplex_OnInitialize_Params
{
};

// Function Basic.STBuffConditionComplex.OnDestroy
struct USTBuffConditionComplex_OnDestroy_Params
{
};

// Function Basic.STBuffConditionComplex.Copy
struct USTBuffConditionComplex_Copy_Params
{
	class UObject*                                     Outer;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class USTBuffCondition*                            ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Basic.STBuffConditionComplex.CheckIsTrue
struct USTBuffConditionComplex_CheckIsTrue_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.STBuffConditionNot.OnInitialize
struct USTBuffConditionNot_OnInitialize_Params
{
};

// Function Basic.STBuffConditionNot.OnDestroy
struct USTBuffConditionNot_OnDestroy_Params
{
};

// Function Basic.STBuffConditionNot.Copy
struct USTBuffConditionNot_Copy_Params
{
	class UObject*                                     Outer;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class USTBuffCondition*                            ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Basic.STBuffConditionNot.CheckIsTrue
struct USTBuffConditionNot_CheckIsTrue_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.STBuffConditionAction.OnTick
struct USTBuffConditionAction_OnTick_Params
{
	float                                              DetalTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic.STBuffConditionAction.OnInitialize
struct USTBuffConditionAction_OnInitialize_Params
{
};

// Function Basic.STBuffConditionAction.OnDestroy
struct USTBuffConditionAction_OnDestroy_Params
{
};

// Function Basic.STBuffConditionAction.OnConditionTrue
struct USTBuffConditionAction_OnConditionTrue_Params
{
};

// Function Basic.STBuffConditionAction.OnConditionFalse
struct USTBuffConditionAction_OnConditionFalse_Params
{
};

// Function Basic.STBuffConditionAction.OnChangeNotify
struct USTBuffConditionAction_OnChangeNotify_Params
{
};

// Function Basic.STBuffConditionAction.CheckCondition
struct USTBuffConditionAction_CheckCondition_Params
{
};

// Function Basic.STBuffSystemComponent.UpdateClientBuff
struct USTBuffSystemComponent_UpdateClientBuff_Params
{
	struct FClientSyncBrief                            Brief;                                                    // (Parm)
};

// Function Basic.STBuffSystemComponent.RemoveClientBuff
struct USTBuffSystemComponent_RemoveClientBuff_Params
{
	int                                                InstID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic.STBuffSystemComponent.RemoveBuff
struct USTBuffSystemComponent_RemoveBuff_Params
{
	int                                                BuffID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                LayerCount;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Causer;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                CauseSkillID;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic.STBuffSystemComponent.RemoveAllBuffsWithExcludeArray
struct USTBuffSystemComponent_RemoveAllBuffsWithExcludeArray_Params
{
	TArray<int>                                        InExcludeArry;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Basic.STBuffSystemComponent.RemoveAllBuffs
struct USTBuffSystemComponent_RemoveAllBuffs_Params
{
};

// Function Basic.STBuffSystemComponent.OnRep_SyncBriefs
struct USTBuffSystemComponent_OnRep_SyncBriefs_Params
{
};

// Function Basic.STBuffSystemComponent.OnRep_OwnerSyncBriefs
struct USTBuffSystemComponent_OnRep_OwnerSyncBriefs_Params
{
};

// DelegateFunction Basic.STBuffSystemComponent.OnRemoveBuffEvent__DelegateSignature
struct USTBuffSystemComponent_OnRemoveBuffEvent__DelegateSignature_Params
{
	int                                                BuffID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Causer;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction Basic.STBuffSystemComponent.OnClientUpdateBuffEvent__DelegateSignature
struct USTBuffSystemComponent_OnClientUpdateBuffEvent__DelegateSignature_Params
{
	int                                                BuffID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                InstID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction Basic.STBuffSystemComponent.OnClientRemoveBuffEvent__DelegateSignature
struct USTBuffSystemComponent_OnClientRemoveBuffEvent__DelegateSignature_Params
{
	int                                                BuffID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                InstID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction Basic.STBuffSystemComponent.OnClientAddBuffEvent__DelegateSignature
struct USTBuffSystemComponent_OnClientAddBuffEvent__DelegateSignature_Params
{
	int                                                BuffID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                InstID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction Basic.STBuffSystemComponent.OnAddBuffEvent__DelegateSignature
struct USTBuffSystemComponent_OnAddBuffEvent__DelegateSignature_Params
{
	int                                                BuffID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsExist;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Causer;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic.STBuffSystemComponent.HasSkillID
struct USTBuffSystemComponent_HasSkillID_Params
{
	int                                                SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.STBuffSystemComponent.HasBuff
struct USTBuffSystemComponent_HasBuff_Params
{
	int                                                BuffID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.STBuffSystemComponent.GetSubsystem
struct USTBuffSystemComponent_GetSubsystem_Params
{
	class UBuffConfigSubsystem*                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.STBuffSystemComponent.GetSTBuffByBuffID
struct USTBuffSystemComponent_GetSTBuffByBuffID_Params
{
	int                                                BuffID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class USTBuff*                                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Basic.STBuffSystemComponent.GetRealOwnerRoleSafety
struct USTBuffSystemComponent_GetRealOwnerRoleSafety_Params
{
	TEnumAsByte<enum ENetRole>                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.STBuffSystemComponent.GetBuffLayerCount
struct USTBuffSystemComponent_GetBuffLayerCount_Params
{
	int                                                InstID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                CauseSkillID;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.STBuffSystemComponent.GetBuffInstBySkillID
struct USTBuffSystemComponent_GetBuffInstBySkillID_Params
{
	int                                                SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FSTBuffInstancedItem                        ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Basic.STBuffSystemComponent.GetBuffInfoByBuffID
struct USTBuffSystemComponent_GetBuffInfoByBuffID_Params
{
	int                                                BuffID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FBuffInstInfo>                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Basic.STBuffSystemComponent.GetBuffInfo
struct USTBuffSystemComponent_GetBuffInfo_Params
{
	int                                                InstID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FBuffInstInfo                               OutBuff;                                                  // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.STBuffSystemComponent.GetBuffDuration
struct USTBuffSystemComponent_GetBuffDuration_Params
{
	int                                                InstID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                CauseSkillID;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.STBuffSystemComponent.GetBuffDSEndTime
struct USTBuffSystemComponent_GetBuffDSEndTime_Params
{
	int                                                InstID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                CauseSkillID;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.STBuffSystemComponent.GetAllBuffInfo
struct USTBuffSystemComponent_GetAllBuffInfo_Params
{
	TArray<struct FBuffInstInfo>                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Basic.STBuffSystemComponent.ClearBuffs
struct USTBuffSystemComponent_ClearBuffs_Params
{
	bool                                               bClearAll;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bImmediately;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic.STBuffSystemComponent.ChangeDuration
struct USTBuffSystemComponent_ChangeDuration_Params
{
	int                                                InstID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.STBuffSystemComponent.AddBuff
struct USTBuffSystemComponent_AddBuff_Params
{
	int                                                BuffID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Causer;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                LayerCount;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                CauseSkillID;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Level;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.TableManagerSubsystem.SetModName
struct UTableManagerSubsystem_SetModName_Params
{
	struct FString                                     ModName;                                                  // (Parm, ZeroConstructor)
};

// Function Basic.TableManagerSubsystem.GetTableProxy
struct UTableManagerSubsystem_GetTableProxy_Params
{
	struct FName                                       tableName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bTempory;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UDataTableProxy*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.TableManagerSubsystem.GetTableDataField
struct UTableManagerSubsystem_GetTableDataField_Params
{
	struct FString                                     tableName;                                                // (Parm, ZeroConstructor)
	struct FTableRowBase                               Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FString                                     Field;                                                    // (Parm, ZeroConstructor)
	struct FTableRowBase                               Out;                                                      // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.TableManagerSubsystem.GetTableData
struct UTableManagerSubsystem_GetTableData_Params
{
	struct FString                                     tableName;                                                // (Parm, ZeroConstructor)
	struct FString                                     Key;                                                      // (Parm, ZeroConstructor)
	struct FTableRowBase                               OutRow;                                                   // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.TickOptimizationFocusComponent.ShouldTrack
struct UTickOptimizationFocusComponent_ShouldTrack_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.TickOptimizationTargetComponent.ShouldForceExecuteFirstTick
struct UTickOptimizationTargetComponent_ShouldForceExecuteFirstTick_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.TickOptimizationTargetComponent.SetTickSettings
struct UTickOptimizationTargetComponent_SetTickSettings_Params
{
	TArray<struct FTickOptimizationTickSettings>       InTickSettings;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Basic.TickOptimizationTargetComponent.SetSphereRadius
struct UTickOptimizationTargetComponent_SetSphereRadius_Params
{
	float                                              InRadius;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic.TickOptimizationTargetComponent.SetMidZoneSizes
struct UTickOptimizationTargetComponent_SetMidZoneSizes_Params
{
	TArray<float>                                      InMidZoneSizes;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Basic.TickOptimizationTargetComponent.SetForceExecuteFirstTick
struct UTickOptimizationTargetComponent_SetForceExecuteFirstTick_Params
{
	bool                                               bInForceExecuteFirstTick;                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic.TickOptimizationTargetComponent.SetDistanceMode
struct UTickOptimizationTargetComponent_SetDistanceMode_Params
{
	ETickOptimizationDistanceMode                      InDistanceMode;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic.TickOptimizationTargetComponent.SetComponentsTickControl
struct UTickOptimizationTargetComponent_SetComponentsTickControl_Params
{
	bool                                               bInComponentsTickControl;                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic.TickOptimizationTargetComponent.SetBufferSize
struct UTickOptimizationTargetComponent_SetBufferSize_Params
{
	float                                              InBufferSize;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic.TickOptimizationTargetComponent.SetActorTickControl
struct UTickOptimizationTargetComponent_SetActorTickControl_Params
{
	bool                                               bInActorTickControl;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic.TickOptimizationTargetComponent.RemoveComponentTickControl
struct UTickOptimizationTargetComponent_RemoveComponentTickControl_Params
{
	class UActorComponent*                             Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Basic.TickOptimizationTargetComponent.Release
struct UTickOptimizationTargetComponent_Release_Params
{
};

// Function Basic.TickOptimizationTargetComponent.IsForced
struct UTickOptimizationTargetComponent_IsForced_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.TickOptimizationTargetComponent.IsComponentsTickControl
struct UTickOptimizationTargetComponent_IsComponentsTickControl_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.TickOptimizationTargetComponent.IsActorTickControl
struct UTickOptimizationTargetComponent_IsActorTickControl_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.TickOptimizationTargetComponent.GetTickZone
struct UTickOptimizationTargetComponent_GetTickZone_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.TickOptimizationTargetComponent.GetTickSettings
struct UTickOptimizationTargetComponent_GetTickSettings_Params
{
	TArray<struct FTickOptimizationTickSettings>       ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Basic.TickOptimizationTargetComponent.GetSphereRadius
struct UTickOptimizationTargetComponent_GetSphereRadius_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.TickOptimizationTargetComponent.GetMidZoneSizes
struct UTickOptimizationTargetComponent_GetMidZoneSizes_Params
{
	TArray<float>                                      ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Basic.TickOptimizationTargetComponent.GetDistanceMode
struct UTickOptimizationTargetComponent_GetDistanceMode_Params
{
	ETickOptimizationDistanceMode                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.TickOptimizationTargetComponent.GetBufferSize
struct UTickOptimizationTargetComponent_GetBufferSize_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.TickOptimizationTargetComponent.Force
struct UTickOptimizationTargetComponent_Force_Params
{
	int                                                InZone;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic.TickOptimizationTargetComponent.AddComponentTickControl
struct UTickOptimizationTargetComponent_AddComponentTickControl_Params
{
	class UActorComponent*                             Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Basic.BPTable.GetWrapperPath
struct UBPTable_GetWrapperPath_Params
{
	int                                                ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Basic.BPTable.GetWrapperClass
struct UBPTable_GetWrapperClass_Params
{
	int                                                ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.BPTable.GetPath
struct UBPTable_GetPath_Params
{
	int                                                ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsLobby;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bForceLobby;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Basic.BPTable.GetObject
struct UBPTable_GetObject_Params
{
	int                                                ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     Outer;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsLobby;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsLowDevice;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.BPTable.GetModObject
struct UBPTable_GetModObject_Params
{
	int                                                ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     Outer;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsLobby;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.BPTable.GetModClass
struct UBPTable_GetModClass_Params
{
	int                                                ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsLobby;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.BPTable.GetCustom1Class
struct UBPTable_GetCustom1Class_Params
{
	int                                                ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.BPTable.GetClass
struct UBPTable_GetClass_Params
{
	int                                                ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsLobby;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsLowDevice;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.BPTable.ConvertPath
struct UBPTable_ConvertPath_Params
{
	int                                                ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic.UAELoadedClassManager.InitTableData
struct UUAELoadedClassManager_InitTableData_Params
{
};

// Function Basic.UAELoadedClassManager.InitialModTableItemMap
struct UUAELoadedClassManager_InitialModTableItemMap_Params
{
};

// Function Basic.UAELoadedClassManager.InitBPTableMap_Mod
struct UUAELoadedClassManager_InitBPTableMap_Mod_Params
{
};

// Function Basic.UAELoadedClassManager.InitBPTableMap
struct UUAELoadedClassManager_InitBPTableMap_Params
{
};

// Function Basic.UAELoadedClassManager.HandleTableModNameChanged
struct UUAELoadedClassManager_HandleTableModNameChanged_Params
{
	struct FString                                     InModName;                                                // (Parm, ZeroConstructor)
};

// Function Basic.UAELoadedClassManager.GetWrapperPath
struct UUAELoadedClassManager_GetWrapperPath_Params
{
	struct FString                                     BPTableName;                                              // (Parm, ZeroConstructor)
	int                                                ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Basic.UAELoadedClassManager.GetWrapperClass
struct UUAELoadedClassManager_GetWrapperClass_Params
{
	struct FString                                     BPTableName;                                              // (Parm, ZeroConstructor)
	int                                                ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.UAELoadedClassManager.GetPath
struct UUAELoadedClassManager_GetPath_Params
{
	struct FString                                     BPTableName;                                              // (Parm, ZeroConstructor)
	int                                                ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsLobby;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bForceLobby;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Basic.UAELoadedClassManager.GetObject
struct UUAELoadedClassManager_GetObject_Params
{
	struct FString                                     BPTableName;                                              // (Parm, ZeroConstructor)
	int                                                ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     Outer;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsLobby;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsLowDevice;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.UAELoadedClassManager.GetCustom1Class
struct UUAELoadedClassManager_GetCustom1Class_Params
{
	struct FString                                     BPTableName;                                              // (Parm, ZeroConstructor)
	int                                                ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.UAELoadedClassManager.GetClass
struct UUAELoadedClassManager_GetClass_Params
{
	struct FString                                     BPTableName;                                              // (Parm, ZeroConstructor)
	int                                                ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsLobby;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsLowDevice;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.UAELoadedClassManager.GetBPTableName
struct UUAELoadedClassManager_GetBPTableName_Params
{
	int                                                Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Basic.UAELoadedClassManager.GetAssetByAssetReferenceAsync
struct UUAELoadedClassManager_GetAssetByAssetReferenceAsync_Params
{
	struct FSoftObjectPath                             AssetReference;                                           // (Parm)
	struct FScriptDelegate                             AssetLoadSuccessDelegate;                                 // (Parm, ZeroConstructor)
};

// Function Basic.UAELoadedClassManager.GetAssetAsyncWithStringForManage
struct UUAELoadedClassManager_GetAssetAsyncWithStringForManage_Params
{
	struct FSoftObjectPath                             AssetReference;                                           // (Parm)
	struct FString                                     InputString;                                              // (Parm, ZeroConstructor)
	struct FScriptDelegate                             AssetLoadSuccessDelegate;                                 // (Parm, ZeroConstructor)
};

// Function Basic.UAELoadedClassManager.GetAssetAsyncForManage
struct UUAELoadedClassManager_GetAssetAsyncForManage_Params
{
	struct FSoftObjectPath                             AssetReference;                                           // (Parm)
	struct FScriptDelegate                             AssetLoadSuccessDelegate;                                 // (Parm, ZeroConstructor)
};

// Function Basic.UAELoadedClassManager.Get
struct UUAELoadedClassManager_Get_Params
{
	class UUAELoadedClassManager*                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.UAELoadedClassManager.CreateAndAddBPTable_Mod
struct UUAELoadedClassManager_CreateAndAddBPTable_Mod_Params
{
	struct FString                                     BPTableName;                                              // (Parm, ZeroConstructor)
	class UBPTable*                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.UAELoadedClassManager.CreateAndAddBPTable
struct UUAELoadedClassManager_CreateAndAddBPTable_Params
{
	struct FString                                     BPTableName;                                              // (Parm, ZeroConstructor)
	class UBPTable*                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.UAELoadedClassManager.ClearModTableItemMap
struct UUAELoadedClassManager_ClearModTableItemMap_Params
{
};

// Function Basic.UAELoadedClassManager.ClearBPTable_Mod
struct UUAELoadedClassManager_ClearBPTable_Mod_Params
{
};

// Function Basic.UAELoadedClassManager.ClearBPTable
struct UUAELoadedClassManager_ClearBPTable_Params
{
};

// Function Basic.UAELoadedClassManager.ClearAssetByAssetReferenceAsync
struct UUAELoadedClassManager_ClearAssetByAssetReferenceAsync_Params
{
	struct FScriptDelegate                             AssetLoadSuccessDelegate;                                 // (Parm, ZeroConstructor)
};

// Function Basic.UAELoadedClassManager.ClearAllHandle
struct UUAELoadedClassManager_ClearAllHandle_Params
{
};

// Function Basic.UAELoadedClassManager.ClearAllData
struct UUAELoadedClassManager_ClearAllData_Params
{
};

// Function Basic.UAEMeshComponent.GetPredictedLODLevel
struct UUAEMeshComponent_GetPredictedLODLevel_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.UAENetConnection.IsClosed
struct UUAENetConnection_IsClosed_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.UAENetConnection.HasSameRegion
struct UUAENetConnection_HasSameRegion_Params
{
	struct FVector                                     OldLoc;                                                   // (Parm, IsPlainOldData)
	struct FVector                                     NewLoc;                                                   // (Parm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.UAENetConnection.ForceRefreshRegionWeakNetUpdateObjects
struct UUAENetConnection_ForceRefreshRegionWeakNetUpdateObjects_Params
{
	float                                              WeakNetConsiderFrequency;                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic.UAETableManager.ReleaseTable
struct UUAETableManager_ReleaseTable_Params
{
	struct FName                                       TableFName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic.UAETableManager.GetTablePtr_Mod
struct UUAETableManager_GetTablePtr_Mod_Params
{
	struct FName                                       tableName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UUAEDataTable*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.UAETableManager.GetTablePtr
struct UUAETableManager_GetTablePtr_Params
{
	struct FName                                       tableName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bCheckModTable;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UUAEDataTable*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.UAETableManager.GetTableMap
struct UUAETableManager_GetTableMap_Params
{
	struct FString                                     tableName;                                                // (Parm, ZeroConstructor)
	class UBaseTableResMap*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.UAETableManager.GetTableData
struct UUAETableManager_GetTableData_Params
{
	struct FString                                     tableName;                                                // (Parm, ZeroConstructor)
	struct FString                                     Key;                                                      // (Parm, ZeroConstructor)
	struct FTableRowBase                               OutRow;                                                   // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.UAETableManager.GetInstance
struct UUAETableManager_GetInstance_Params
{
	class UUAETableManager*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.UAETableManager.GetDomainByID
struct UUAETableManager_GetDomainByID_Params
{
	int                                                ID;                                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Basic.UAETableManager.GetDataTableStatic_Mod
struct UUAETableManager_GetDataTableStatic_Mod_Params
{
	struct FString                                     tableName;                                                // (Parm, ZeroConstructor)
	class UUAEDataTable*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.UAETableManager.GetDataTableStatic
struct UUAETableManager_GetDataTableStatic_Params
{
	struct FString                                     tableName;                                                // (Parm, ZeroConstructor)
	class UUAEDataTable*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.UAETableManager.GetDataTableProxy
struct UUAETableManager_GetDataTableProxy_Params
{
	struct FName                                       tableName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bTempory;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UDataTableProxy*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.UELanguageUtilityMethods.SetDownLoadLanguageName
struct UUELanguageUtilityMethods_SetDownLoadLanguageName_Params
{
	struct FString                                     Language;                                                 // (Parm, ZeroConstructor)
};

// Function Basic.UELanguageUtilityMethods.IsJaguar
struct UUELanguageUtilityMethods_IsJaguar_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.UELanguageUtilityMethods.GetPublishRegion
struct UUELanguageUtilityMethods_GetPublishRegion_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Basic.UELanguageUtilityMethods.GetDownLoadLanguageName
struct UUELanguageUtilityMethods_GetDownLoadLanguageName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Basic.UELanguageUtilityMethods.GetCurrentLanguageName
struct UUELanguageUtilityMethods_GetCurrentLanguageName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Basic.UELanguageUtilityMethods.CheckLocalizationExist
struct UUELanguageUtilityMethods_CheckLocalizationExist_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.UEMathUtilityMethods.VectorNormalizeMultiple
struct UUEMathUtilityMethods_VectorNormalizeMultiple_Params
{
	struct FVector                                     Out;                                                      // (Parm, OutParm, IsPlainOldData)
	struct FVector                                     v1;                                                       // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              Multiple;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic.UEMathUtilityMethods.VectorMultiple
struct UUEMathUtilityMethods_VectorMultiple_Params
{
	struct FVector                                     Out;                                                      // (Parm, OutParm, IsPlainOldData)
	struct FVector                                     v1;                                                       // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              Multiple;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic.UEMathUtilityMethods.VectorMinus
struct UUEMathUtilityMethods_VectorMinus_Params
{
	struct FVector                                     Out;                                                      // (Parm, OutParm, IsPlainOldData)
	struct FVector                                     v1;                                                       // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     v2;                                                       // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Basic.UEMathUtilityMethods.VectorAdditive
struct UUEMathUtilityMethods_VectorAdditive_Params
{
	struct FVector                                     Out;                                                      // (Parm, OutParm, IsPlainOldData)
	struct FVector                                     v1;                                                       // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     v2;                                                       // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Basic.UEMathUtilityMethods.FilterOKForCurrentMode
struct UUEMathUtilityMethods_FilterOKForCurrentMode_Params
{
	unsigned char                                      ModeType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ModeOpenFlag;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ModeTypes;                                                // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.UEMathUtilityMethods.Conv_VectorToRotator
struct UUEMathUtilityMethods_Conv_VectorToRotator_Params
{
	struct FRotator                                    Out;                                                      // (Parm, OutParm, IsPlainOldData)
	struct FVector                                     Vec;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Basic.UEMathUtilityMethods.CalculateAngleToTargetAngle
struct UUEMathUtilityMethods_CalculateAngleToTargetAngle_Params
{
	float                                              StartAngle;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              targetAngle;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              stepAngle;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	EAngleRotationDirectionType                        Dir;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.UEMathUtilityMethods.BKDRHash
struct UUEMathUtilityMethods_BKDRHash_Params
{
	struct FString                                     StrToHash;                                                // (Parm, ZeroConstructor)
	int                                                Mod;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.UEMathUtilityMethods.AngleDis
struct UUEMathUtilityMethods_AngleDis_Params
{
	float                                              angleA;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              angleB;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.UEPathUtilityMethods.IsPathExist
struct UUEPathUtilityMethods_IsPathExist_Params
{
	struct FString                                     HandlePath;                                               // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.UEPathUtilityMethods.IsAvatarResPathExistRetODPakName
struct UUEPathUtilityMethods_IsAvatarResPathExistRetODPakName_Params
{
	struct FString                                     HandlePath;                                               // (Parm, ZeroConstructor)
	struct FString                                     OutODPakName;                                             // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.UEPathUtilityMethods.IsAvatarResPathExist
struct UUEPathUtilityMethods_IsAvatarResPathExist_Params
{
	struct FString                                     HandlePath;                                               // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.UEPathUtilityMethods.GetODPakFileName
struct UUEPathUtilityMethods_GetODPakFileName_Params
{
	struct FString                                     InODPakPath;                                              // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Basic.UEPathUtilityMethods.GetModName
struct UUEPathUtilityMethods_GetModName_Params
{
	class UObject*                                     WorldContext;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Basic.UEPathUtilityMethods.GetFullModName
struct UUEPathUtilityMethods_GetFullModName_Params
{
	class UObject*                                     WorldContext;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     MainMod;                                                  // (Parm, OutParm, ZeroConstructor)
	struct FString                                     SubMod;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function Basic.UEPathUtilityMethods.FilterOKForCurrentModeString
struct UUEPathUtilityMethods_FilterOKForCurrentModeString_Params
{
	struct FString                                     CurrentModeString;                                        // (Parm, ZeroConstructor)
	struct FString                                     CurrentExtraModeString;                                   // (Parm, ZeroConstructor)
	struct FString                                     ModStringInfo;                                            // (Parm, ZeroConstructor)
	unsigned char                                      ModeType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ModeOpenFlag;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

