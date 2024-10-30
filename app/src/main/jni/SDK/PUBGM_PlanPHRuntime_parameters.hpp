#pragma once

// Pubgm India-64bit (3.4.0) SDK by BangJO [Z] DM @isar_hackJO To Buy Tool SDK

#include "../SDK.hpp"

namespace SDK
{
//---------------------By BangJO---------------------------
//Parameters
//---------------------By BangJO---------------------------

// Function PlanPHRuntime.BinFileHelper.Init
struct UBinFileHelper_Init_Params
{
	int                                                z4BufferSize;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                zeroListSize;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PlanPHRuntime.MapBarrierWidget.SetMapStructureData
struct UMapBarrierWidget_SetMapStructureData_Params
{
	TArray<struct FStructureData>                      InMapStructureData;                                       // (ConstParm, Parm, ZeroConstructor)
};

// Function PlanPHRuntime.MapBarrierWidget.SetMapMidPoint
struct UMapBarrierWidget_SetMapMidPoint_Params
{
	struct FVector2D                                   InMapMidPoint;                                            // (Parm, OutParm, IsPlainOldData)
};

// Function PlanPHRuntime.MapBarrierWidget.SetLevelBoundExtent
struct UMapBarrierWidget_SetLevelBoundExtent_Params
{
	int                                                InLevelBoundExtent;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlanPHRuntime.MapBarrierWidget.SetGridSize
struct UMapBarrierWidget_SetGridSize_Params
{
	float                                              InGridSize;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlanPHRuntime.PlanPH_GameMode.HandleNavigationInfo
struct APlanPH_GameMode_HandleNavigationInfo_Params
{
	class AController*                                 Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlanPHRuntime.PlanPH_GameMode.GetPlayerStart
struct APlanPH_GameMode_GetPlayerStart_Params
{
	int                                                LandId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class ASTExtraPlayerStart*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PlanPHRuntime.PlanPH_GameMode.DSPlayerKickOut
struct APlanPH_GameMode_DSPlayerKickOut_Params
{
	uint64_t                                           UID;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       PlayerType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ExitReason;                                               // (Parm, ZeroConstructor)
};

// Function PlanPHRuntime.PlanPH_GameState.OnRep_PartyDanceLeadInfo_5
struct APlanPH_GameState_OnRep_PartyDanceLeadInfo_5_Params
{
};

// Function PlanPHRuntime.PlanPH_GameState.OnRep_PartyDanceLeadInfo_4
struct APlanPH_GameState_OnRep_PartyDanceLeadInfo_4_Params
{
};

// Function PlanPHRuntime.PlanPH_GameState.OnRep_PartyDanceLeadInfo_3
struct APlanPH_GameState_OnRep_PartyDanceLeadInfo_3_Params
{
};

// Function PlanPHRuntime.PlanPH_GameState.OnRep_PartyDanceLeadInfo_2
struct APlanPH_GameState_OnRep_PartyDanceLeadInfo_2_Params
{
};

// Function PlanPHRuntime.PlanPH_GameState.LuaOnRep_PartyDanceLeadInfo
struct APlanPH_GameState_LuaOnRep_PartyDanceLeadInfo_Params
{
	int                                                LandId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlanPHRuntime.PlanPH_GameState.ChangePartyLeadInfo
struct APlanPH_GameState_ChangePartyLeadInfo_Params
{
	int                                                LandId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bOccupied;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                BeginTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                EndTime;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     PlayerUID;                                                // (Parm, ZeroConstructor)
};

// Function PlanPHRuntime.PlanPH_PlayerState.RequestPaintDecal
struct APlanPH_PlayerState_RequestPaintDecal_Params
{
	int                                                DecalId;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  TargetTransform;                                          // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function PlanPHRuntime.PlanPH_PlayerState.OnRep_LandId
struct APlanPH_PlayerState_OnRep_LandId_Params
{
};

// Function PlanPHRuntime.PlanPH_PlayerState.InitLandId
struct APlanPH_PlayerState_InitLandId_Params
{
};

// Function PlanPHRuntime.PlanPH_PlayerState.CanPaintDecal
struct APlanPH_PlayerState_CanPaintDecal_Params
{
	int                                                DecalId;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PlanPHRuntime.PlanPHDoor.Refresh_DoorCollisionChanel
struct APlanPHDoor_Refresh_DoorCollisionChanel_Params
{
	class UStaticMeshComponent*                        StaticMeshComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bEnableCollision;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlanPHRuntime.PlanPHDoor.DoorAniFinish
struct APlanPHDoor_DoorAniFinish_Params
{
	class UStaticMeshComponent*                        InDoorCheckBox;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               Bright;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlanPHRuntime.PlanPHGameplayStatics.SpinEvaluate
struct UPlanPHGameplayStatics_SpinEvaluate_Params
{
	float                                              S;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              T;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PlanPHRuntime.PlanPHGameplayStatics.SetPlayerMovementBlendTime
struct UPlanPHGameplayStatics_SetPlayerMovementBlendTime_Params
{
	class ASTExtraPlayerCharacter*                     PlayerChar;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                nType;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              blendTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PlanPHRuntime.PlanPHGameplayStatics.ChangeLightChannel
struct UPlanPHGameplayStatics_ChangeLightChannel_Params
{
	class UPrimitiveComponent*                         InComponent;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                InChannelBitMask;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlanPHRuntime.PlanPHHomeArea.UpdateEditableArea
struct APlanPHHomeArea_UpdateEditableArea_Params
{
	struct FIntVector                                  InMinGridIndexXYZ;                                        // (Parm, IsPlainOldData)
	struct FIntVector                                  InMaxGridIndexXYZ;                                        // (Parm, IsPlainOldData)
};

// Function PlanPHRuntime.PlanPHHomeAreaVisualizationComponent.ShowGrids
struct UPlanPHHomeAreaVisualizationComponent_ShowGrids_Params
{
	bool                                               InBShow;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlanPHRuntime.PlanPHMapData.RemovePlayerItem
struct UPlanPHMapData_RemovePlayerItem_Params
{
	class ASTExtraPlayerCharacter*                     PlayerCharacterItem;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PlanPHRuntime.PlanPHMapData.AddPlayerItem
struct UPlanPHMapData_AddPlayerItem_Params
{
	class ASTExtraPlayerCharacter*                     PlayerCharacterItem;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class UWidget*                                     PlayerInfoBPItem;                                         // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidget*                                     PlayerInfoRotWidgetItem;                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     OffsetLocation;                                           // (ConstParm, Parm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PlanPHRuntime.PlanPHSpectatorPawn.OnSpectatorRestart
struct APlanPHSpectatorPawn_OnSpectatorRestart_Params
{
};

// Function PlanPHRuntime.PlanPHSpectatorPawn.MoveRight
struct APlanPHSpectatorPawn_MoveRight_Params
{
	float                                              Val;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlanPHRuntime.PlanPHSpectatorPawn.MoveForward
struct APlanPHSpectatorPawn_MoveForward_Params
{
	float                                              Val;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlanPHRuntime.PlanPHVisualGridComponent.ShowGrids
struct UPlanPHVisualGridComponent_ShowGrids_Params
{
	bool                                               InBShow;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlanPHRuntime.PlanPHVisualGridComponent.RefreshGrids
struct UPlanPHVisualGridComponent_RefreshGrids_Params
{
};

}

