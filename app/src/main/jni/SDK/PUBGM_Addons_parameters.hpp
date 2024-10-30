#pragma once

// Pubgm India-64bit (3.4.0) SDK by BangJO [Z] DM @isar_hackJO To Buy Tool SDK

#include "../SDK.hpp"

namespace SDK
{
//---------------------By BangJO---------------------------
//Parameters
//---------------------By BangJO---------------------------

// Function Addons.AdditiveCurveMoveObj.LeaveAdditiveCurveMove
struct UAdditiveCurveMoveObj_LeaveAdditiveCurveMove_Params
{
};

// Function Addons.AdditiveCurveMoveObj.EnterAdditiveCurveMove
struct UAdditiveCurveMoveObj_EnterAdditiveCurveMove_Params
{
};

// Function Addons.AmphibiousBoatDust.OnEnterWater
struct UAmphibiousBoatDust_OnEnterWater_Params
{
	bool                                               IsInWater;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.AmphibiousBoatAudioMovement.OnVehiclePhysicsWakeUp
struct UAmphibiousBoatAudioMovement_OnVehiclePhysicsWakeUp_Params
{
	class UPrimitiveComponent*                         WakingComponent;                                          // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.AmphibiousBoatAudioMovement.OnVehiclePhysicsSleep
struct UAmphibiousBoatAudioMovement_OnVehiclePhysicsSleep_Params
{
	class UPrimitiveComponent*                         SleepingComponent;                                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.AmphibiousBoatAudioMovement.OnSimulatePhysicsChange
struct UAmphibiousBoatAudioMovement_OnSimulatePhysicsChange_Params
{
	bool                                               bSimulatePhysics;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.AmphibiousSlidingVehicle.OnRep_WaterState
struct AAmphibiousSlidingVehicle_OnRep_WaterState_Params
{
};

// Function Addons.AmphibiousSlidingVehicle.OnRep_UseSyncatClient
struct AAmphibiousSlidingVehicle_OnRep_UseSyncatClient_Params
{
};

// Function Addons.AmphibiousSlidingVehicle.HandleContactWater
struct AAmphibiousSlidingVehicle_HandleContactWater_Params
{
	bool                                               bInContactingWater;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.AmphibiousSlidingVehicle.GetFloatingVehicleMovement
struct AAmphibiousSlidingVehicle_GetFloatingVehicleMovement_Params
{
	class UFloatingVehicleVehicleMovementComponent2*   ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Addons.AnimInstanceDiving.OnHandlePlayerAnimMontagePlayDelegate
struct UAnimInstanceDiving_OnHandlePlayerAnimMontagePlayDelegate_Params
{
	class UAnimMontage*                                MontageToPlay;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bWantsPlay;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              PlayRate;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       StartSection;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              StartPos;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bOnlyJumpToSectionWhilePlaying;                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       IgnoreStopSection;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.AnimInstanceLeggedAnimal.SetRunStop
struct UAnimInstanceLeggedAnimal_SetRunStop_Params
{
};

// Function Addons.AnimInstanceLeggedAnimal.SetJump
struct UAnimInstanceLeggedAnimal_SetJump_Params
{
	int                                                JumpCount;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.AnimInstanceLeggedAnimal.SetAnimVault
struct UAnimInstanceLeggedAnimal_SetAnimVault_Params
{
};

// Function Addons.AnimInstanceLeggedAnimal.ResetRunStop
struct UAnimInstanceLeggedAnimal_ResetRunStop_Params
{
};

// Function Addons.AnimInstanceLeggedAnimal.ResetJump
struct UAnimInstanceLeggedAnimal_ResetJump_Params
{
};

// Function Addons.AnimInstanceLeggedAnimal.ResetAnimVault
struct UAnimInstanceLeggedAnimal_ResetAnimVault_Params
{
};

// Function Addons.AnimInstanceLeggedAnimal.HandlePlayerAnimMontageExtraPlayDelegate
struct UAnimInstanceLeggedAnimal_HandlePlayerAnimMontageExtraPlayDelegate_Params
{
	class UAnimMontage*                                MontageToPlay;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bWantsPlay;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              PlayRate;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       StartSection;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              StartPos;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bOnlyJumpToSectionWhilePlaying;                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       IgnoreStopSection;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.AnimInstanceLeggedAnimal.CalcWallRunParams
struct UAnimInstanceLeggedAnimal_CalcWallRunParams_Params
{
};

// Function Addons.AnimInstanceLeggedAnimal.CalcMoveDirection
struct UAnimInstanceLeggedAnimal_CalcMoveDirection_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.AnimInstanceLeggedAnimal.CalcHurtDir
struct UAnimInstanceLeggedAnimal_CalcHurtDir_Params
{
};

// Function Addons.AnimInstanceLeggedAnimal.CalcGaitAndStride
struct UAnimInstanceLeggedAnimal_CalcGaitAndStride_Params
{
};

// Function Addons.AnimInstanceWingFlyAnimal.InitSyncNode
struct UAnimInstanceWingFlyAnimal_InitSyncNode_Params
{
};

// Function Addons.AnimNotifyState_EarlyBlendOutBase.Received_CanBlendOut
struct UAnimNotifyState_EarlyBlendOutBase_Received_CanBlendOut_Params
{
	class USkeletalMeshComponent*                      MeshComponent;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAnimMontage*                                InMontage;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.AutoTestManagerBPLibrary.StopMergedTest
struct UAutoTestManagerBPLibrary_StopMergedTest_Params
{
};

// Function Addons.AutoTestManagerBPLibrary.StartMergedTestFromFileWithNum
struct UAutoTestManagerBPLibrary_StartMergedTestFromFileWithNum_Params
{
	float                                              TestIntervel;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                MergedNum;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                OriginNum;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.AutoTestManagerBPLibrary.StartMergedTestFromFile
struct UAutoTestManagerBPLibrary_StartMergedTestFromFile_Params
{
	float                                              TestIntervel;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.AutoTestManagerBPLibrary.StartMergedTestFromAISuitNum
struct UAutoTestManagerBPLibrary_StartMergedTestFromAISuitNum_Params
{
	float                                              TestIntervel;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                MergedNum;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                OriginNum;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.AutoTestManagerBPLibrary.StartMergedRandomTestWithNum
struct UAutoTestManagerBPLibrary_StartMergedRandomTestWithNum_Params
{
	float                                              TestIntervel;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                TestNum;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                MergedNum;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                OriginNum;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.AutoTestManagerBPLibrary.StartMergedRandomTest
struct UAutoTestManagerBPLibrary_StartMergedRandomTest_Params
{
	float                                              TestIntervel;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                TestNum;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.AutoTestManagerBPLibrary.StartMergedAllTestWithNum
struct UAutoTestManagerBPLibrary_StartMergedAllTestWithNum_Params
{
	float                                              TestIntervel;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                MergedNum;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                OriginNum;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.AutoTestManagerBPLibrary.StartMergedAllTest
struct UAutoTestManagerBPLibrary_StartMergedAllTest_Params
{
	float                                              TestIntervel;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.AutoTestManagerBPLibrary.ResumeMergedTest
struct UAutoTestManagerBPLibrary_ResumeMergedTest_Params
{
};

// Function Addons.AutoTestManagerBPLibrary.PauseMergedTest
struct UAutoTestManagerBPLibrary_PauseMergedTest_Params
{
};

// Function Addons.AutoTestManagerBPLibrary.GetMergedTestState
struct UAutoTestManagerBPLibrary_GetMergedTestState_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.AvatarMergeUnit.OnAvatarMeshMaterialApplyed
struct UAvatarMergeUnit_OnAvatarMeshMaterialApplyed_Params
{
	class UMeshComponent*                              MeshComponent;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Addons.AvatarMergeUnit.OnAvatarMeshBeforeLoaded
struct UAvatarMergeUnit_OnAvatarMeshBeforeLoaded_Params
{
};

// Function Addons.AvatarMergeUnit.OnAvatarAsyncTaskFinished
struct UAvatarMergeUnit_OnAvatarAsyncTaskFinished_Params
{
	uint32_t                                           RequestID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.AvatarMergeUnit.OnAvatarAllMeshLoaded
struct UAvatarMergeUnit_OnAvatarAllMeshLoaded_Params
{
};

// Function Addons.BeamEffectMoveActor.SetBeamEffectData
struct ABeamEffectMoveActor_SetBeamEffectData_Params
{
	struct FBeamEffectDataParams                       InBeamEffectData;                                         // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Addons.BeamEffectMoveActor.RefreshEffectLocation
struct ABeamEffectMoveActor_RefreshEffectLocation_Params
{
};

// Function Addons.BeamEffectMoveActor.OnRep_BeamMoveEffectData
struct ABeamEffectMoveActor_OnRep_BeamMoveEffectData_Params
{
};

// Function Addons.BioVehicleMovementComponent.UnpackAccelerationToInput
struct UBioVehicleMovementComponent_UnpackAccelerationToInput_Params
{
	struct FVector                                     InAccel;                                                  // (Parm, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.ShouldRecordPosition
struct UBioVehicleMovementComponent_ShouldRecordPosition_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.SetWalkableFloorZ
struct UBioVehicleMovementComponent_SetWalkableFloorZ_Params
{
	float                                              InWalkableFloorZ;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.SetWalkableFloorAngle
struct UBioVehicleMovementComponent_SetWalkableFloorAngle_Params
{
	float                                              InWalkableFloorAngle;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.SetThrottleInput
struct UBioVehicleMovementComponent_SetThrottleInput_Params
{
	float                                              rate;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.SetSteeringInput
struct UBioVehicleMovementComponent_SetSteeringInput_Params
{
	float                                              rate;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.SetRisingInput
struct UBioVehicleMovementComponent_SetRisingInput_Params
{
	float                                              rate;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.SetNeedLerpRequestedVelocity
struct UBioVehicleMovementComponent_SetNeedLerpRequestedVelocity_Params
{
	bool                                               bin;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.SetMovementMode
struct UBioVehicleMovementComponent_SetMovementMode_Params
{
	TEnumAsByte<enum EMovementMode>                    NewMovementMode;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      NewCustomMode;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.SetGroupsToIgnoreMask
struct UBioVehicleMovementComponent_SetGroupsToIgnoreMask_Params
{
	struct FNavAvoidanceMask                           GroupMask;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.SetGroupsToIgnore
struct UBioVehicleMovementComponent_SetGroupsToIgnore_Params
{
	int                                                GroupFlags;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.SetGroupsToAvoidMask
struct UBioVehicleMovementComponent_SetGroupsToAvoidMask_Params
{
	struct FNavAvoidanceMask                           GroupMask;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.SetGroupsToAvoid
struct UBioVehicleMovementComponent_SetGroupsToAvoid_Params
{
	int                                                GroupFlags;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.SetAvoidanceGroupMask
struct UBioVehicleMovementComponent_SetAvoidanceGroupMask_Params
{
	struct FNavAvoidanceMask                           GroupMask;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.SetAvoidanceGroup
struct UBioVehicleMovementComponent_SetAvoidanceGroup_Params
{
	int                                                GroupFlags;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.SetAvoidanceEnabled
struct UBioVehicleMovementComponent_SetAvoidanceEnabled_Params
{
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.SetAcceptInput
struct UBioVehicleMovementComponent_SetAcceptInput_Params
{
	bool                                               bIsAccept;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.ServerSetThrottleInput
struct UBioVehicleMovementComponent_ServerSetThrottleInput_Params
{
	float                                              rate;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.ServerSetSteeringInput
struct UBioVehicleMovementComponent_ServerSetSteeringInput_Params
{
	float                                              rate;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.ServerSetRisingInput
struct UBioVehicleMovementComponent_ServerSetRisingInput_Params
{
	float                                              rate;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.ServerMoveOld
struct UBioVehicleMovementComponent_ServerMoveOld_Params
{
	float                                              OldTimeStamp;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector_NetQuantize10                       OldAccel;                                                 // (Parm)
	unsigned char                                      OldMoveFlags;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.ServerMoveDualHybridRootMotion
struct UBioVehicleMovementComponent_ServerMoveDualHybridRootMotion_Params
{
	float                                              TimeStamp0;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector_NetQuantize10                       InAccel0;                                                 // (Parm)
	unsigned char                                      PendingFlags;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	uint32_t                                           View0;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeStamp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector_NetQuantize10                       InAccel;                                                  // (Parm)
	struct FVector_NetQuantize100                      ClientLoc;                                                // (Parm)
	unsigned char                                      NewFlags;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ClientRoll;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	uint32_t                                           View;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         ClientMovementBase;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       ClientBaseBoneName;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ClientMovementMode;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.ServerMoveDual
struct UBioVehicleMovementComponent_ServerMoveDual_Params
{
	float                                              TimeStamp0;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector_NetQuantize10                       InAccel0;                                                 // (Parm)
	unsigned char                                      PendingFlags;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	uint32_t                                           View0;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeStamp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector_NetQuantize10                       InAccel;                                                  // (Parm)
	struct FVector_NetQuantize100                      ClientLoc;                                                // (Parm)
	unsigned char                                      NewFlags;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ClientRoll;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	uint32_t                                           View;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         ClientMovementBase;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       ClientBaseBoneName;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ClientMovementMode;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.ServerMove
struct UBioVehicleMovementComponent_ServerMove_Params
{
	float                                              TimeStamp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector_NetQuantize10                       InAccel;                                                  // (Parm)
	struct FVector_NetQuantize100                      ClientLoc;                                                // (Parm)
	unsigned char                                      CompressedMoveFlags;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ClientRoll;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	uint32_t                                           View;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         ClientMovementBase;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       ClientBaseBoneName;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ClientMovementMode;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.PackInputToAcceleration
struct UBioVehicleMovementComponent_PackInputToAcceleration_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.OnRep_HandBrakeRate
struct UBioVehicleMovementComponent_OnRep_HandBrakeRate_Params
{
	float                                              OldValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.OnRecoverOnServer
struct UBioVehicleMovementComponent_OnRecoverOnServer_Params
{
};

// Function Addons.BioVehicleMovementComponent.K2_GetWalkableFloorZ
struct UBioVehicleMovementComponent_K2_GetWalkableFloorZ_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.K2_GetWalkableFloorAngle
struct UBioVehicleMovementComponent_K2_GetWalkableFloorAngle_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.K2_GetModifiedMaxAcceleration
struct UBioVehicleMovementComponent_K2_GetModifiedMaxAcceleration_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.K2_FindFloor
struct UBioVehicleMovementComponent_K2_FindFloor_Params
{
	struct FVector                                     CapsuleLocation;                                          // (Parm, IsPlainOldData)
	struct FFindFloorResult                            FloorResult;                                              // (Parm, OutParm)
};

// Function Addons.BioVehicleMovementComponent.K2_ComputeFloorDist
struct UBioVehicleMovementComponent_K2_ComputeFloorDist_Params
{
	struct FVector                                     CapsuleLocation;                                          // (Parm, IsPlainOldData)
	float                                              LineDistance;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              SweepDistance;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              SweepRadius;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FFindFloorResult                            FloorResult;                                              // (Parm, OutParm)
};

// Function Addons.BioVehicleMovementComponent.IsWalking
struct UBioVehicleMovementComponent_IsWalking_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.IsWalkable
struct UBioVehicleMovementComponent_IsWalkable_Params
{
	struct FHitResult                                  Hit;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.IsSwimming
struct UBioVehicleMovementComponent_IsSwimming_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.IsSeriousInjuriedAllowJumping
struct UBioVehicleMovementComponent_IsSeriousInjuriedAllowJumping_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.HandleOnSeatDetached
struct UBioVehicleMovementComponent_HandleOnSeatDetached_Params
{
	class ASTExtraPlayerCharacter*                     Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	ESTExtraVehicleSeatType                            SeatType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SeatIdx;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.HandleOnSeatChanged
struct UBioVehicleMovementComponent_HandleOnSeatChanged_Params
{
	class ASTExtraPlayerCharacter*                     Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	ESTExtraVehicleSeatType                            LastSeatType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                LastSeatIdx;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	ESTExtraVehicleSeatType                            NewSeatType;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NewSeatIdx;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.HandleOnSeatAttached
struct UBioVehicleMovementComponent_HandleOnSeatAttached_Params
{
	class ASTExtraPlayerCharacter*                     Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	ESTExtraVehicleSeatType                            SeatType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SeatIdx;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.HandleOnExitVehicleAnim
struct UBioVehicleMovementComponent_HandleOnExitVehicleAnim_Params
{
	class ASTExtraPlayerCharacter*                     Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SeatInx;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.GetWalkingDecResistance
struct UBioVehicleMovementComponent_GetWalkingDecResistance_Params
{
	float                                              Speed;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.GetWalkingAccResistance
struct UBioVehicleMovementComponent_GetWalkingAccResistance_Params
{
	float                                              Speed;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.GetValidPerchRadius
struct UBioVehicleMovementComponent_GetValidPerchRadius_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.GetThrottleInput
struct UBioVehicleMovementComponent_GetThrottleInput_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.GetSteeringInput
struct UBioVehicleMovementComponent_GetSteeringInput_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.GetSlopeSpeedFactor
struct UBioVehicleMovementComponent_GetSlopeSpeedFactor_Params
{
	float                                              Slope;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.GetRisingInput
struct UBioVehicleMovementComponent_GetRisingInput_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.GetPredictVelocity
struct UBioVehicleMovementComponent_GetPredictVelocity_Params
{
	float                                              PredictTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.GetPerchRadiusThreshold
struct UBioVehicleMovementComponent_GetPerchRadiusThreshold_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.GetMovementBase
struct UBioVehicleMovementComponent_GetMovementBase_Params
{
	class UPrimitiveComponent*                         ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.GetMinAnalogSpeed
struct UBioVehicleMovementComponent_GetMinAnalogSpeed_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.GetMaxJumpHeightWithJumpTime
struct UBioVehicleMovementComponent_GetMaxJumpHeightWithJumpTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.GetMaxJumpHeight
struct UBioVehicleMovementComponent_GetMaxJumpHeight_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.GetMaxBrakingDeceleration
struct UBioVehicleMovementComponent_GetMaxBrakingDeceleration_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.GetMaxAcceleration
struct UBioVehicleMovementComponent_GetMaxAcceleration_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.GetJumpVelocityZ
struct UBioVehicleMovementComponent_GetJumpVelocityZ_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.GetJumpingHeightBySpeed
struct UBioVehicleMovementComponent_GetJumpingHeightBySpeed_Params
{
	float                                              Speed;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.GetJumpingHeightByObsHeight
struct UBioVehicleMovementComponent_GetJumpingHeightByObsHeight_Params
{
	float                                              ObsHeight;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.GetImpartedMovementBaseVelocity
struct UBioVehicleMovementComponent_GetImpartedMovementBaseVelocity_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.GetDesireAcceleration
struct UBioVehicleMovementComponent_GetDesireAcceleration_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.GetCurrentSecuritySpeedRatio
struct UBioVehicleMovementComponent_GetCurrentSecuritySpeedRatio_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.GetCurrentMaxAllowedSpeed
struct UBioVehicleMovementComponent_GetCurrentMaxAllowedSpeed_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.GetCurrentAcceleration
struct UBioVehicleMovementComponent_GetCurrentAcceleration_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.GetBreakAcceleration
struct UBioVehicleMovementComponent_GetBreakAcceleration_Params
{
	float                                              Speed;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.GetAngularVelocityByCurve
struct UBioVehicleMovementComponent_GetAngularVelocityByCurve_Params
{
	float                                              Speed;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               AsForce;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.GetAnalogInputModifier
struct UBioVehicleMovementComponent_GetAnalogInputModifier_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.GetAcceptInput
struct UBioVehicleMovementComponent_GetAcceptInput_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.DisableMovement
struct UBioVehicleMovementComponent_DisableMovement_Params
{
};

// Function Addons.BioVehicleMovementComponent.DealWithCustomAction
struct UBioVehicleMovementComponent_DealWithCustomAction_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.ClientVeryShortAdjustPosition
struct UBioVehicleMovementComponent_ClientVeryShortAdjustPosition_Params
{
	float                                              TimeStamp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NewLoc;                                                   // (Parm, IsPlainOldData)
	class UPrimitiveComponent*                         NewBase;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       NewBaseBoneName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bHasBase;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bBaseRelativePosition;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ServerMovementMode;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.ClientAdjustRootMotionSourcePosition
struct UBioVehicleMovementComponent_ClientAdjustRootMotionSourcePosition_Params
{
	float                                              TimeStamp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRootMotionSourceGroup                      ServerRootMotion;                                         // (Parm)
	bool                                               bHasAnimRootMotion;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ServerMontageTrackPosition;                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ServerLoc;                                                // (Parm, IsPlainOldData)
	struct FVector_NetQuantizeNormal                   ServerRotation;                                           // (Parm)
	float                                              ServerVelZ;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         ServerBase;                                               // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       ServerBoneName;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bHasBase;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bBaseRelativePosition;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ServerMovementMode;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.ClientAdjustRootMotionPosition
struct UBioVehicleMovementComponent_ClientAdjustRootMotionPosition_Params
{
	float                                              TimeStamp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ServerMontageTrackPosition;                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ServerLoc;                                                // (Parm, IsPlainOldData)
	struct FVector_NetQuantizeNormal                   ServerRotation;                                           // (Parm)
	float                                              ServerVelZ;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         ServerBase;                                               // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       ServerBoneName;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bHasBase;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bBaseRelativePosition;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ServerMovementMode;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.ClientAdjustPositionAndRotation
struct UBioVehicleMovementComponent_ClientAdjustPositionAndRotation_Params
{
	float                                              TimeStamp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NewLoc;                                                   // (Parm, IsPlainOldData)
	struct FRotator                                    NewRot;                                                   // (Parm, IsPlainOldData)
	struct FVector                                     NewVel;                                                   // (Parm, IsPlainOldData)
	class UPrimitiveComponent*                         NewBase;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       NewBaseBoneName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bHasBase;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bBaseRelativePosition;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ServerMovementMode;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.ClientAdjustPosition
struct UBioVehicleMovementComponent_ClientAdjustPosition_Params
{
	float                                              TimeStamp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NewLoc;                                                   // (Parm, IsPlainOldData)
	struct FVector                                     NewVel;                                                   // (Parm, IsPlainOldData)
	class UPrimitiveComponent*                         NewBase;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       NewBaseBoneName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bHasBase;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bBaseRelativePosition;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ServerMovementMode;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.ClientAckGoodMove
struct UBioVehicleMovementComponent_ClientAckGoodMove_Params
{
	float                                              TimeStamp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.ClearAccumulatedForces
struct UBioVehicleMovementComponent_ClearAccumulatedForces_Params
{
};

// Function Addons.BioVehicleMovementComponent.CapsuleTouched
struct UBioVehicleMovementComponent_CapsuleTouched_Params
{
	class UPrimitiveComponent*                         OverlappedComp;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      Other;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.CalcVelocity
struct UBioVehicleMovementComponent_CalcVelocity_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Friction;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFluid;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              BrakingDeceleration;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.CalculateVelocityWithResistance
struct UBioVehicleMovementComponent_CalculateVelocityWithResistance_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFluid;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.CalculateCurrentForwardSpeed
struct UBioVehicleMovementComponent_CalculateCurrentForwardSpeed_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.AddImpulse
struct UBioVehicleMovementComponent_AddImpulse_Params
{
	struct FVector                                     Impulse;                                                  // (Parm, IsPlainOldData)
	bool                                               bVelocityChange;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.AddForce
struct UBioVehicleMovementComponent_AddForce_Params
{
	struct FVector                                     Force;                                                    // (Parm, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.AddDirectionalBrakingAcceleration
struct UBioVehicleMovementComponent_AddDirectionalBrakingAcceleration_Params
{
	struct FVector                                     BrakingAcceleration;                                      // (Parm, IsPlainOldData)
};

// Function Addons.BioBaseFlyComponent.StartTakingOff
struct UBioBaseFlyComponent_StartTakingOff_Params
{
};

// Function Addons.BioBaseFlyComponent.StartLanding
struct UBioBaseFlyComponent_StartLanding_Params
{
};

// Function Addons.BioBaseFlyComponent.SetMovementMode
struct UBioBaseFlyComponent_SetMovementMode_Params
{
	TEnumAsByte<enum EMovementMode>                    NewMovementMode;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      NewCustomMode;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.BioBaseFlyComponent.IsTakingOff
struct UBioBaseFlyComponent_IsTakingOff_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.BioBaseFlyComponent.IsLanding
struct UBioBaseFlyComponent_IsLanding_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.BioBaseFlyComponent.IsCurveMoving
struct UBioBaseFlyComponent_IsCurveMoving_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.BioBaseFlyComponent.GetMoveState
struct UBioBaseFlyComponent_GetMoveState_Params
{
	EFlyBioVehicleBaseMoveMode                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.BioBaseFlyComponent.GetFlyingConfig
struct UBioBaseFlyComponent_GetFlyingConfig_Params
{
	struct FFlyBioVehicleFlyingConfig                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Addons.BioBaseFlyComponent.GetDistanceToLand
struct UBioBaseFlyComponent_GetDistanceToLand_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.BioBaseFlyComponent.ExitLanding
struct UBioBaseFlyComponent_ExitLanding_Params
{
};

// Function Addons.BioBaseFlyComponent.EndTakingOff
struct UBioBaseFlyComponent_EndTakingOff_Params
{
};

// Function Addons.BioBaseFlyComponent.EndLanding
struct UBioBaseFlyComponent_EndLanding_Params
{
};

// Function Addons.BioBaseFlyComponent.CalculateFlyingVelocity
struct UBioBaseFlyComponent_CalculateFlyingVelocity_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.BioBaseFlyComponent.CalculateFlyingAcceleration
struct UBioBaseFlyComponent_CalculateFlyingAcceleration_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.BioFlyMovementComponentBase.UpdateVerticalHeight
struct UBioFlyMovementComponentBase_UpdateVerticalHeight_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.BioFlyMovementComponentBase.StartTakingOff
struct UBioFlyMovementComponentBase_StartTakingOff_Params
{
};

// Function Addons.BioFlyMovementComponentBase.SetMovementMode
struct UBioFlyMovementComponentBase_SetMovementMode_Params
{
	TEnumAsByte<enum EMovementMode>                    NewMovementMode;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      NewCustomMode;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.BioFlyMovementComponentBase.IsTakingOff
struct UBioFlyMovementComponentBase_IsTakingOff_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.BioFlyMovementComponentBase.IsCurveMoving
struct UBioFlyMovementComponentBase_IsCurveMoving_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.BioFlyMovementComponentBase.GetMoveState
struct UBioFlyMovementComponentBase_GetMoveState_Params
{
	EFlyBioVehicleMoveMode                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.BioFlyMovementComponentBase.GetDistanceToLand
struct UBioFlyMovementComponentBase_GetDistanceToLand_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.BioFlyMovementComponentBase.EndTakingOff
struct UBioFlyMovementComponentBase_EndTakingOff_Params
{
};

// Function Addons.BioFlyMovementComponentBase.CalculateFlyingVelocity
struct UBioFlyMovementComponentBase_CalculateFlyingVelocity_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.BioFlyMovementComponentBase.CalculateFlyingAcceleration
struct UBioFlyMovementComponentBase_CalculateFlyingAcceleration_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.BioVehicleBase.UseAIControl
struct ABioVehicleBase_UseAIControl_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.BioVehicleBase.UpdateFuelState
struct ABioVehicleBase_UpdateFuelState_Params
{
};

// Function Addons.BioVehicleBase.UnregisterRiderAnimInstance
struct ABioVehicleBase_UnregisterRiderAnimInstance_Params
{
	class UBioVehicleRiderAnimInstanceBase*            InInstance;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.BioVehicleBase.StopJumping
struct ABioVehicleBase_StopJumping_Params
{
};

// Function Addons.BioVehicleBase.SetReplicateMovement
struct ABioVehicleBase_SetReplicateMovement_Params
{
	bool                                               bInReplicateMovement;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.BioVehicleBase.SetHandBrake
struct ABioVehicleBase_SetHandBrake_Params
{
	float                                              rate;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.BioVehicleBase.ServerResetToPosition
struct ABioVehicleBase_ServerResetToPosition_Params
{
	struct FVector                                     NewLocation;                                              // (Parm, IsPlainOldData)
	struct FRotator                                    NewRotation;                                              // (Parm, IsPlainOldData)
	bool                                               bResetVelocity;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.BioVehicleBase.RegisterRiderAnimInstance
struct ABioVehicleBase_RegisterRiderAnimInstance_Params
{
	class UBioVehicleRiderAnimInstanceBase*            InInstance;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.BioVehicleBase.ProcessPenetration
struct ABioVehicleBase_ProcessPenetration_Params
{
};

// Function Addons.BioVehicleBase.PlayerDelayAlready
struct ABioVehicleBase_PlayerDelayAlready_Params
{
	class ASTExtraBaseCharacter*                       Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.BioVehicleBase.OnWalkingOffLedge
struct ABioVehicleBase_OnWalkingOffLedge_Params
{
	struct FVector                                     PreviousFloorImpactNormal;                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     PreviousFloorContactNormal;                               // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     PreviousLocation;                                         // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              TimeDelta;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.BioVehicleBase.OnTakingDamage
struct ABioVehicleBase_OnTakingDamage_Params
{
	class AActor*                                      HitActor;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      HitInstigator;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  HitInfo;                                                  // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     ImpulseDir;                                               // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.BioVehicleBase.OnRep_ReplicatedBasedMovement
struct ABioVehicleBase_OnRep_ReplicatedBasedMovement_Params
{
};

// Function Addons.BioVehicleBase.OnRep_HasBeenTamed
struct ABioVehicleBase_OnRep_HasBeenTamed_Params
{
};

// Function Addons.BioVehicleBase.OnRep_FuelExhausted
struct ABioVehicleBase_OnRep_FuelExhausted_Params
{
	bool                                               bPrevFuelExhausted;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.BioVehicleBase.OnLaunched
struct ABioVehicleBase_OnLaunched_Params
{
	struct FVector                                     LaunchVelocity;                                           // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               bXYOverride;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bZOverride;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.BioVehicleBase.OnLanded
struct ABioVehicleBase_OnLanded_Params
{
	struct FHitResult                                  Hit;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Addons.BioVehicleBase.OnJumped
struct ABioVehicleBase_OnJumped_Params
{
};

// Function Addons.BioVehicleBase.OnExitingVehicleOnServer
struct ABioVehicleBase_OnExitingVehicleOnServer_Params
{
};

// Function Addons.BioVehicleBase.OnEnteringVehicleOnServer
struct ABioVehicleBase_OnEnteringVehicleOnServer_Params
{
	bool                                               IsSucc;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.BioVehicleBase.OnClientTakeDamage
struct ABioVehicleBase_OnClientTakeDamage_Params
{
	class AActor*                                      HitActor;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      HitInstigator;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  HitInfo;                                                  // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     ImpulseDir;                                               // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.BioVehicleBase.MulticastTakingDamage
struct ABioVehicleBase_MulticastTakingDamage_Params
{
	float                                              Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent                                DamageEvent;                                              // (ConstParm, Parm, ReferenceParm)
	class AController*                                 EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.BioVehicleBase.MoveUp
struct ABioVehicleBase_MoveUp_Params
{
	float                                              rate;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.BioVehicleBase.LuaCanPlayMountMontage
struct ABioVehicleBase_LuaCanPlayMountMontage_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.BioVehicleBase.LaunchCharacter
struct ABioVehicleBase_LaunchCharacter_Params
{
	struct FVector                                     LaunchVelocity;                                           // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               bXYOverride;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bZOverride;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.BioVehicleBase.K2_UpdateCustomMovement
struct ABioVehicleBase_K2_UpdateCustomMovement_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.BioVehicleBase.K2_OnMovementModeChanged
struct ABioVehicleBase_K2_OnMovementModeChanged_Params
{
	TEnumAsByte<enum EMovementMode>                    PrevMovementMode;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<enum EMovementMode>                    NewMovementMode;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      PrevCustomMode;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      NewCustomMode;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.BioVehicleBase.Jump
struct ABioVehicleBase_Jump_Params
{
};

// Function Addons.BioVehicleBase.IsPlayingRootMotion
struct ABioVehicleBase_IsPlayingRootMotion_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.BioVehicleBase.IsLocallyControlled
struct ABioVehicleBase_IsLocallyControlled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.BioVehicleBase.IsJumpProvidingForce
struct ABioVehicleBase_IsJumpProvidingForce_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.BioVehicleBase.IsInAgentMove
struct ABioVehicleBase_IsInAgentMove_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.BioVehicleBase.IsHostingMove
struct ABioVehicleBase_IsHostingMove_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.BioVehicleBase.IsFollowingTarget
struct ABioVehicleBase_IsFollowingTarget_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.BioVehicleBase.IsAIControlling
struct ABioVehicleBase_IsAIControlling_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.BioVehicleBase.IsAgentMoveEnabled
struct ABioVehicleBase_IsAgentMoveEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.BioVehicleBase.HandleOnSeatPreAttached
struct ABioVehicleBase_HandleOnSeatPreAttached_Params
{
	class ASTExtraPlayerCharacter*                     Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	ESTExtraVehicleSeatType                            SeatType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SeatIdx;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.BioVehicleBase.HandleOnRiderAnimInstanceActive
struct ABioVehicleBase_HandleOnRiderAnimInstanceActive_Params
{
	class UAnimInstance*                               ActivedAnimInstance;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.BioVehicleBase.HandleOnClientBeenTamed
struct ABioVehicleBase_HandleOnClientBeenTamed_Params
{
};

// Function Addons.BioVehicleBase.HandleDeviceLevel
struct ABioVehicleBase_HandleDeviceLevel_Params
{
	int                                                DeviceLevel;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.BioVehicleBase.GetVehicleOriginToLand
struct ABioVehicleBase_GetVehicleOriginToLand_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.BioVehicleBase.GetVehicleBreakOutState
struct ABioVehicleBase_GetVehicleBreakOutState_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.BioVehicleBase.GetRotationInputDir
struct ABioVehicleBase_GetRotationInputDir_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Addons.BioVehicleBase.GetPlayerLookAtRotation
struct ABioVehicleBase_GetPlayerLookAtRotation_Params
{
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Addons.BioVehicleBase.GetMountMontage
struct ABioVehicleBase_GetMountMontage_Params
{
	class ASTExtraBaseCharacter*                       Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<enum EMountFromDirection>              FromDirection;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FMountMontagePair                           ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Addons.BioVehicleBase.GetMountFromDirection
struct ABioVehicleBase_GetMountFromDirection_Params
{
	struct FVector                                     CheckedLocation;                                          // (Parm, IsPlainOldData)
	TEnumAsByte<enum EMountFromDirection>              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.BioVehicleBase.GetInVehicleLocalPlayer
struct ABioVehicleBase_GetInVehicleLocalPlayer_Params
{
	class ASTExtraBaseCharacter*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.BioVehicleBase.GetFollowTarget
struct ABioVehicleBase_GetFollowTarget_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.BioVehicleBase.GetDisMountMontage
struct ABioVehicleBase_GetDisMountMontage_Params
{
	class ASTExtraBaseCharacter*                       Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<enum EMountFromDirection>              FromDirection;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FMountMontagePair                           ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Addons.BioVehicleBase.GetConsumeFuelRate
struct ABioVehicleBase_GetConsumeFuelRate_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.BioVehicleBase.GetBodyShapeComponent
struct ABioVehicleBase_GetBodyShapeComponent_Params
{
	class UBoxComponent*                               ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Addons.BioVehicleBase.GetBioVehicleMovement
struct ABioVehicleBase_GetBioVehicleMovement_Params
{
	class UBioVehicleMovementComponent*                ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Addons.BioVehicleBase.GetBioVehicleAIC
struct ABioVehicleBase_GetBioVehicleAIC_Params
{
	class ABioVehicleAIController*                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.BioVehicleBase.GetBioAgentMoveComp
struct ABioVehicleBase_GetBioAgentMoveComp_Params
{
	class UBioVehicleAgentMoveComponent*               ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Addons.BioVehicleBase.GetBaseTranslationOffset
struct ABioVehicleBase_GetBaseTranslationOffset_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Addons.BioVehicleBase.GetAnimListComponent
struct ABioVehicleBase_GetAnimListComponent_Params
{
	class UBioVehicleAnimListComponent*                ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Addons.BioVehicleBase.GetActivedRiderAnimInstances
struct ABioVehicleBase_GetActivedRiderAnimInstances_Params
{
	TArray<class UBioVehicleRiderAnimInstanceBase*>    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Addons.BioVehicleBase.ExitVehicle
struct ABioVehicleBase_ExitVehicle_Params
{
};

// Function Addons.BioVehicleBase.EnterVehicle
struct ABioVehicleBase_EnterVehicle_Params
{
	bool                                               IsSucc;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.BioVehicleBase.ConsumeNeedPlayMountMontage
struct ABioVehicleBase_ConsumeNeedPlayMountMontage_Params
{
	class ASTExtraBaseCharacter*                       Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                PlayerMountMontage;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.BioVehicleBase.ClientEnterVehicle
struct ABioVehicleBase_ClientEnterVehicle_Params
{
	class ASTExtraPlayerCharacter*                     Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	ESTExtraVehicleSeatType                            SeatType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.BioVehicleBase.CanJumpInternal
struct ABioVehicleBase_CanJumpInternal_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.BioVehicleBase.CanJump
struct ABioVehicleBase_CanJump_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.BioVehicleBase.CanConsumeFuel
struct ABioVehicleBase_CanConsumeFuel_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.BioVehicleBase.CacheInitialMeshOffset
struct ABioVehicleBase_CacheInitialMeshOffset_Params
{
	struct FVector                                     MeshRelativeLocation;                                     // (Parm, IsPlainOldData)
	struct FRotator                                    MeshRelativeRotation;                                     // (Parm, IsPlainOldData)
};

// Function Addons.BioVehicleBase.BroadCastPlayMountMontage
struct ABioVehicleBase_BroadCastPlayMountMontage_Params
{
	class ASTExtraPlayerCharacter*                     Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<enum EMountFromDirection>              MountFromDirection;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.BioVehicleBase.BroadCastPlayingRandomIdleAnim
struct ABioVehicleBase_BroadCastPlayingRandomIdleAnim_Params
{
	int                                                RandomIdleAnim;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.BioVehicleBase.BpHandleDeviceLevel
struct ABioVehicleBase_BpHandleDeviceLevel_Params
{
	int                                                DeviceLevel;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.BioVehicleBase.ActiveRagDoll
struct ABioVehicleBase_ActiveRagDoll_Params
{
};

// Function Addons.BioVehicleBase.ActiveFootParticleEffect
struct ABioVehicleBase_ActiveFootParticleEffect_Params
{
	struct FName                                       EffectName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ActivedLocation;                                          // (Parm, IsPlainOldData)
};

// Function Addons.BioFlyVehicleBase.OnClientExitFromBioFlyVehicle
struct ABioFlyVehicleBase_OnClientExitFromBioFlyVehicle_Params
{
	class ASTExtraPlayerCharacter*                     Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	ESTExtraVehicleSeatType                            SeatType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.BioFlyVehicleBase.HandleVehicleHealthDestroy
struct ABioFlyVehicleBase_HandleVehicleHealthDestroy_Params
{
};

// Function Addons.BioFlyVehicleBase.GetBioFlyMovementComponent
struct ABioFlyVehicleBase_GetBioFlyMovementComponent_Params
{
	class UBioBaseFlyComponent*                        ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Addons.BioVehicleAgentMoveComponent.ServerHostingMove
struct UBioVehicleAgentMoveComponent_ServerHostingMove_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.BioVehicleAgentMoveComponent.ServerForceFinishAgentMove
struct UBioVehicleAgentMoveComponent_ServerForceFinishAgentMove_Params
{
};

// Function Addons.BioVehicleAgentMoveComponent.ServerFollowTarget
struct UBioVehicleAgentMoveComponent_ServerFollowTarget_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.BioVehicleAgentMoveComponent.RspAgentMove
struct UBioVehicleAgentMoveComponent_RspAgentMove_Params
{
	bool                                               bSuccess;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FBioVHAgentMove                             InMoveData;                                               // (ConstParm, Parm, ReferenceParm)
};

// Function Addons.BioVehicleAgentMoveComponent.ResetAgentMove
struct UBioVehicleAgentMoveComponent_ResetAgentMove_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.BioVehicleAgentMoveComponent.ReqFinishAgentMove
struct UBioVehicleAgentMoveComponent_ReqFinishAgentMove_Params
{
};

// Function Addons.BioVehicleAgentMoveComponent.ReqBeginAgentMove
struct UBioVehicleAgentMoveComponent_ReqBeginAgentMove_Params
{
	struct FBioVHAgentMove                             InMoveData;                                               // (ConstParm, Parm, ReferenceParm)
};

// Function Addons.BioVehicleAgentMoveComponent.OnRep_ReplicatedBioAgentMoveData
struct UBioVehicleAgentMoveComponent_OnRep_ReplicatedBioAgentMoveData_Params
{
};

// Function Addons.BioVehicleAgentMoveComponent.OnRep_bHasNearyTargetToFollow
struct UBioVehicleAgentMoveComponent_OnRep_bHasNearyTargetToFollow_Params
{
	bool                                               PreValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.BioVehicleAgentMoveComponent.OnCharacterLeaveVehicle
struct UBioVehicleAgentMoveComponent_OnCharacterLeaveVehicle_Params
{
	class ASTExtraPlayerCharacter*                     Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	ESTExtraVehicleSeatType                            SeatType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SeatIdx;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.BioVehicleAgentMoveComponent.OnCharacterEnterVehicle
struct UBioVehicleAgentMoveComponent_OnCharacterEnterVehicle_Params
{
	class ASTExtraPlayerCharacter*                     Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	ESTExtraVehicleSeatType                            SeatType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SeatIdx;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.BioVehicleAgentMoveComponent.IsUnderFollowMinDistance
struct UBioVehicleAgentMoveComponent_IsUnderFollowMinDistance_Params
{
	float                                              InDistance;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.BioVehicleAgentMoveComponent.IsTargetCanFollow
struct UBioVehicleAgentMoveComponent_IsTargetCanFollow_Params
{
	class AActor*                                      InTarget;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.BioVehicleAgentMoveComponent.IsInAgentMove
struct UBioVehicleAgentMoveComponent_IsInAgentMove_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.BioVehicleAgentMoveComponent.IsFollowingTarget
struct UBioVehicleAgentMoveComponent_IsFollowingTarget_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.BioVehicleAgentMoveComponent.IsAgentMoveEnabled
struct UBioVehicleAgentMoveComponent_IsAgentMoveEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.BioVehicleAgentMoveComponent.GetTargetMoveSpeed
struct UBioVehicleAgentMoveComponent_GetTargetMoveSpeed_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Addons.BioVehicleAgentMoveComponent.GetFollowTarget
struct UBioVehicleAgentMoveComponent_GetFollowTarget_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.BioVehicleAgentMoveComponent.GetDistanceToTarget
struct UBioVehicleAgentMoveComponent_GetDistanceToTarget_Params
{
	class AActor*                                      InTarget;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.BioVehicleAgentMoveComponent.FindNearestFollowTarget
struct UBioVehicleAgentMoveComponent_FindNearestFollowTarget_Params
{
	class APawn*                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.BioVehicleAgentMoveComponent.CheckFollowTargetIsValid
struct UBioVehicleAgentMoveComponent_CheckFollowTargetIsValid_Params
{
	class AActor*                                      InTarget;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     OutReason;                                                // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.BioVehicleAgentMoveComponent.ChangeFollowTarget
struct UBioVehicleAgentMoveComponent_ChangeFollowTarget_Params
{
	class AActor*                                      InTarget;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.BioVehicleAgentMoveComponent.CanAgentMove
struct UBioVehicleAgentMoveComponent_CanAgentMove_Params
{
	struct FBioVHAgentMove                             InMoveData;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.BioVehicleAgentMoveComponent.CalculateHostingMoveVelocity
struct UBioVehicleAgentMoveComponent_CalculateHostingMoveVelocity_Params
{
	struct FVector                                     InVelocity;                                               // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Addons.BioVehicleAgentMoveComponent.CalculateFollowingVelocity
struct UBioVehicleAgentMoveComponent_CalculateFollowingVelocity_Params
{
	struct FVector                                     InVelocity;                                               // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     OutAccel;                                                 // (Parm, OutParm, IsPlainOldData)
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Addons.BioVehicleAIController.SetMoveTargetLoc
struct ABioVehicleAIController_SetMoveTargetLoc_Params
{
	struct FVector                                     TargetLoc;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Addons.BioVehicleAIController.SetCaughtOwner
struct ABioVehicleAIController_SetCaughtOwner_Params
{
	class AActor*                                      CaughtOwner;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.BioVehicleAIController.RunBehaviorTreeWithIndex
struct ABioVehicleAIController_RunBehaviorTreeWithIndex_Params
{
	int                                                TreeIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.BioVehicleAIController.OnAirDropLandGroup
struct ABioVehicleAIController_OnAirDropLandGroup_Params
{
	class AActor*                                      AirDropBoxActor;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsInWater;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.BioVehicleAnimInstanceBase.SlotIsActived
struct UBioVehicleAnimInstanceBase_SlotIsActived_Params
{
	struct FName                                       SlotName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.BioVehicleAnimInstanceBase.LuaOnAnimLodChanged
struct UBioVehicleAnimInstanceBase_LuaOnAnimLodChanged_Params
{
	int                                                NewAnimLod;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.BioVehicleAnimInstanceBase.LuaInitializeWithDeviceLevel
struct UBioVehicleAnimInstanceBase_LuaInitializeWithDeviceLevel_Params
{
	int                                                DeviceLevel;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.BioVehicleAnimInstanceBase.LuaInitializeAnimation
struct UBioVehicleAnimInstanceBase_LuaInitializeAnimation_Params
{
};

// Function Addons.BioVehicleRiderAnimInstanceBase.SlotIsActived
struct UBioVehicleRiderAnimInstanceBase_SlotIsActived_Params
{
	struct FName                                       SlotName;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.BlanketDanceComponent.OnRep_BlanketDanceData
struct UBlanketDanceComponent_OnRep_BlanketDanceData_Params
{
};

// Function Addons.BlanketDanceComponent.OnEnterNewDanceState
struct UBlanketDanceComponent_OnEnterNewDanceState_Params
{
	TEnumAsByte<enum EBlanketDanceState>               NewState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.BlanketDanceComponent.BroadCastFaceLookAtPlayer
struct UBlanketDanceComponent_BroadCastFaceLookAtPlayer_Params
{
	struct FRotator                                    InTargetRotator;                                          // (Parm, IsPlainOldData)
};

// Function Addons.LandingCreatureDriverAnimInstance.OnCreatureJumped
struct ULandingCreatureDriverAnimInstance_OnCreatureJumped_Params
{
};

// Function Addons.BlanketDriverAnimInstance.OnBeginFlying
struct UBlanketDriverAnimInstance_OnBeginFlying_Params
{
	bool                                               bIsLowFlying;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.BlanketDriverAnimInstance.OnBeginDiving
struct UBlanketDriverAnimInstance_OnBeginDiving_Params
{
	bool                                               bStart;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.BlanketMovementComponent.StartFlyingDive
struct UBlanketMovementComponent_StartFlyingDive_Params
{
};

// Function Addons.BlanketMovementComponent.SetServerDiveDirection
struct UBlanketMovementComponent_SetServerDiveDirection_Params
{
	struct FVector                                     ClientDivDirection;                                       // (Parm, IsPlainOldData)
};

// Function Addons.BlanketMovementComponent.SetMovementMode
struct UBlanketMovementComponent_SetMovementMode_Params
{
	TEnumAsByte<enum EMovementMode>                    NewMovementMode;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      NewCustomMode;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.BlanketMovementComponent.IsRisingToHigh
struct UBlanketMovementComponent_IsRisingToHigh_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.BlanketMovementComponent.IsLowFlying
struct UBlanketMovementComponent_IsLowFlying_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.BlanketMovementComponent.IsHighFlying
struct UBlanketMovementComponent_IsHighFlying_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.BlanketMovementComponent.IsDroppingToLow
struct UBlanketMovementComponent_IsDroppingToLow_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.BlanketMovementComponent.IsDiving
struct UBlanketMovementComponent_IsDiving_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.BlanketMovementComponent.IsCurveMoving
struct UBlanketMovementComponent_IsCurveMoving_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.BlanketMovementComponent.IsAutoLanding
struct UBlanketMovementComponent_IsAutoLanding_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.BlanketMovementComponent.GetFlyingConfig
struct UBlanketMovementComponent_GetFlyingConfig_Params
{
	struct FFlyBioVehicleFlyingConfig                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Addons.BlanketMovementComponent.GetBlanketMoveState
struct UBlanketMovementComponent_GetBlanketMoveState_Params
{
	EBlankVehicleBaseMoveMode                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.BlanketMovementComponent.EndFlyingDive
struct UBlanketMovementComponent_EndFlyingDive_Params
{
};

// Function Addons.BlanketMovementComponent.DealWithCustomAction
struct UBlanketMovementComponent_DealWithCustomAction_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.BlanketMovementComponent.CheckVehicleCanSwitchMoveMode
struct UBlanketMovementComponent_CheckVehicleCanSwitchMoveMode_Params
{
	bool                                               bRiseToHigh;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.BlanketMovementComponent.CheckCanStartFlyingDive
struct UBlanketMovementComponent_CheckCanStartFlyingDive_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.BlanketMovementComponent.CalculateDivingVelocity
struct UBlanketMovementComponent_CalculateDivingVelocity_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.BlanketVehicle.TryVehicleDive
struct ABlanketVehicle_TryVehicleDive_Params
{
	bool                                               bStart;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.BlanketVehicle.TrySwitchFlyingHeightMode
struct ABlanketVehicle_TrySwitchFlyingHeightMode_Params
{
};

// Function Addons.BlanketVehicle.OnRep_BlanketDiveCDChanged
struct ABlanketVehicle_OnRep_BlanketDiveCDChanged_Params
{
	bool                                               bPrevState;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.BlanketVehicle.GetConsumeFuelRate
struct ABlanketVehicle_GetConsumeFuelRate_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.BlanketVehicle.EnableSwitchModeCameraModifier
struct ABlanketVehicle_EnableSwitchModeCameraModifier_Params
{
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.BlanketVehicle.EnableDiveCameraModifier
struct ABlanketVehicle_EnableDiveCameraModifier_Params
{
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.BlanketVehicle.DoSwitchFlyingHeightMode
struct ABlanketVehicle_DoSwitchFlyingHeightMode_Params
{
	bool                                               bRiseToHigh;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.BlanketVehicle.DestroyAllCachedParticleEffect
struct ABlanketVehicle_DestroyAllCachedParticleEffect_Params
{
};

// Function Addons.BlanketVehicle.CanUpdateMovementInput
struct ABlanketVehicle_CanUpdateMovementInput_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.BlanketVehicle.CanConsumeFuel
struct ABlanketVehicle_CanConsumeFuel_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.BlanketVehicle.CanBlanketSwitchMoveMode
struct ABlanketVehicle_CanBlanketSwitchMoveMode_Params
{
	bool                                               bRiseToHigh;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.BlanketVehicle.CanBlanketDive
struct ABlanketVehicle_CanBlanketDive_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.BlanketVehicle.CallServerSwitch
struct ABlanketVehicle_CallServerSwitch_Params
{
	bool                                               bRiseToHigh;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.LandingCreatureAnimInstance.SetJump
struct ULandingCreatureAnimInstance_SetJump_Params
{
};

// Function Addons.LandingCreatureAnimInstance.ResetStop
struct ULandingCreatureAnimInstance_ResetStop_Params
{
};

// Function Addons.LandingCreatureAnimInstance.ResetJump
struct ULandingCreatureAnimInstance_ResetJump_Params
{
};

// Function Addons.LandingCreatureAnimInstance.ResetDoRandomIdle
struct ULandingCreatureAnimInstance_ResetDoRandomIdle_Params
{
};

// Function Addons.LandingCreatureAnimInstance.DoRandomIdle
struct ULandingCreatureAnimInstance_DoRandomIdle_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.BlanketVehicleAnimInstance.Turn
struct UBlanketVehicleAnimInstance_Turn_Params
{
	struct FRotator                                    TargetRotator;                                            // (Parm, IsPlainOldData)
};

// Function Addons.BlanketVehicleAnimInstance.OnOwnerBlanketChangeDanceState
struct UBlanketVehicleAnimInstance_OnOwnerBlanketChangeDanceState_Params
{
	struct FBlanketDanceData                           InBlanketData;                                            // (Parm)
};

// Function Addons.BlanketVehicleAnimInstance.OnBeginFlying
struct UBlanketVehicleAnimInstance_OnBeginFlying_Params
{
	bool                                               bIsLowFlying;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.BlanketVehicleAnimInstance.OnBeginDiving
struct UBlanketVehicleAnimInstance_OnBeginDiving_Params
{
	bool                                               bStart;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.BuffNodeBlackboardInterface.SetSkillBlackboardValue
struct UBuffNodeBlackboardInterface_SetSkillBlackboardValue_Params
{
	struct FName                                       InBBKeyName;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int                                                SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FBuffNodeBlackboardSetting                  InBBSetting;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               bExecuteOrEnd;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.BuffNodeBlackboardInterface.SetAIBlackboardValue
struct UBuffNodeBlackboardInterface_SetAIBlackboardValue_Params
{
	struct FName                                       InBBKeyName;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FBuffNodeBlackboardSetting                  InBBSetting;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               bExecuteOrEnd;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.CameraModifier_MechaCombineSmooth.ActiveMechaSmoothModifier
struct UCameraModifier_MechaCombineSmooth_ActiveMechaSmoothModifier_Params
{
	class ASTExtraBaseCharacter*                       OwnerPlayer;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              LerpTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UCameraModifier_MechaCombineSmooth*          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.ControllableDashMoveObj.LeaveControllableDashMove
struct UControllableDashMoveObj_LeaveControllableDashMove_Params
{
};

// Function Addons.ControllableDashMoveObj.EnterControllableDashMove
struct UControllableDashMoveObj_EnterControllableDashMove_Params
{
	struct FVector                                     InInitDir;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Addons.CustomVehicleBearerUnit.OnVehicleBeforeWheelDestroy
struct UCustomVehicleBearerUnit_OnVehicleBeforeWheelDestroy_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.CustomVehicleBearerUnit.OnVehicleAvatarEquiped
struct UCustomVehicleBearerUnit_OnVehicleAvatarEquiped_Params
{
};

// Function Addons.CustomVehicleBearerUnit.OnUpdateSeatGUI
struct UCustomVehicleBearerUnit_OnUpdateSeatGUI_Params
{
};

// Function Addons.CustomVehicleBearerUnit.OnAvatarAllMeshLoaded
struct UCustomVehicleBearerUnit_OnAvatarAllMeshLoaded_Params
{
};

// Function Addons.DistanceMatchingComponent.TryMatchDistance
struct UDistanceMatchingComponent_TryMatchDistance_Params
{
};

// Function Addons.DistanceMatchingComponent.ServerEndMatchDistance
struct UDistanceMatchingComponent_ServerEndMatchDistance_Params
{
};

// Function Addons.DistanceMatchingComponent.ServerBeginMatchDistance
struct UDistanceMatchingComponent_ServerBeginMatchDistance_Params
{
	struct FVector                                     InPredictedStopLocation;                                  // (Parm, IsPlainOldData)
};

// Function Addons.DistanceMatchingComponent.PredictStopLocation
struct UDistanceMatchingComponent_PredictStopLocation_Params
{
	struct FVector                                     OutLocation;                                              // (Parm, OutParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.DistanceMatchingComponent.OnTickMatchDistance
struct UDistanceMatchingComponent_OnTickMatchDistance_Params
{
	float                                              DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.DistanceMatchingComponent.OnEndMatchDistance
struct UDistanceMatchingComponent_OnEndMatchDistance_Params
{
};

// Function Addons.DistanceMatchingComponent.OnBeginMatchDistance
struct UDistanceMatchingComponent_OnBeginMatchDistance_Params
{
	struct FVector                                     InPredictedStopLocation;                                  // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Addons.DistanceMatchingComponent.MulticastEndMatchDistance
struct UDistanceMatchingComponent_MulticastEndMatchDistance_Params
{
};

// Function Addons.DistanceMatchingComponent.MulticastBeginMatchDistance
struct UDistanceMatchingComponent_MulticastBeginMatchDistance_Params
{
	struct FVector                                     InPredictedStopLocation;                                  // (Parm, IsPlainOldData)
};

// Function Addons.DistanceMatchingComponent.ForceInterruptMatchDistance
struct UDistanceMatchingComponent_ForceInterruptMatchDistance_Params
{
};

// Function Addons.DistanceMatchingComponent.CheckMatchDistanceState
struct UDistanceMatchingComponent_CheckMatchDistanceState_Params
{
};

// Function Addons.DistanceMatchingInterface.SetExternalTimerAccumulator
struct UDistanceMatchingInterface_SetExternalTimerAccumulator_Params
{
	float                                              InTimerAccumulator;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.EventDataCollectionKeys.GetTimestamp
struct UEventDataCollectionKeys_GetTimestamp_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys.GetTeammatePositions
struct UEventDataCollectionKeys_GetTeammatePositions_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys.GetSelfPosition
struct UEventDataCollectionKeys_GetSelfPosition_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues.GetTeammatePositionsFromContext
struct UEventDataCollectionValues_GetTeammatePositionsFromContext_Params
{
	class AActor*                                      ActorContext;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Addons.EventDataCollectionValues.GetTeammatePositions
struct UEventDataCollectionValues_GetTeammatePositions_Params
{
	class ASTExtraPlayerState*                         STExtraPlayerState;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Addons.EventDataCollectionValues.GetTeammateOpenIds
struct UEventDataCollectionValues_GetTeammateOpenIds_Params
{
	class ASTExtraPlayerState*                         STExtraPlayerState;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Addons.EventDataCollectionKeys_RankingScore.GetViewType
struct UEventDataCollectionKeys_RankingScore_GetViewType_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_RankingScore.GetTreatment
struct UEventDataCollectionKeys_RankingScore_GetTreatment_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_RankingScore.GetTime
struct UEventDataCollectionKeys_RankingScore_GetTime_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_RankingScore.GetTeammates
struct UEventDataCollectionKeys_RankingScore_GetTeammates_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_RankingScore.GetSurvivalTime
struct UEventDataCollectionKeys_RankingScore_GetSurvivalTime_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_RankingScore.GetRescureCount
struct UEventDataCollectionKeys_RankingScore_GetRescureCount_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_RankingScore.GetRescueTimes
struct UEventDataCollectionKeys_RankingScore_GetRescueTimes_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_RankingScore.GetRank
struct UEventDataCollectionKeys_RankingScore_GetRank_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_RankingScore.GetPlayerName
struct UEventDataCollectionKeys_RankingScore_GetPlayerName_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_RankingScore.GetMaxKillDistance
struct UEventDataCollectionKeys_RankingScore_GetMaxKillDistance_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_RankingScore.GetMarchDistance
struct UEventDataCollectionKeys_RankingScore_GetMarchDistance_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_RankingScore.GetMapId
struct UEventDataCollectionKeys_RankingScore_GetMapId_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_RankingScore.GetKnockouts
struct UEventDataCollectionKeys_RankingScore_GetKnockouts_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_RankingScore.GetKillNumInVehicle
struct UEventDataCollectionKeys_RankingScore_GetKillNumInVehicle_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_RankingScore.GetKillNumByGrenade
struct UEventDataCollectionKeys_RankingScore_GetKillNumByGrenade_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_RankingScore.GetKillNum
struct UEventDataCollectionKeys_RankingScore_GetKillNum_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_RankingScore.GetKill
struct UEventDataCollectionKeys_RankingScore_GetKill_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_RankingScore.GetInDamage
struct UEventDataCollectionKeys_RankingScore_GetInDamage_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_RankingScore.GetHurt
struct UEventDataCollectionKeys_RankingScore_GetHurt_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_RankingScore.GetHeal
struct UEventDataCollectionKeys_RankingScore_GetHeal_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_RankingScore.GetHeadShotNum
struct UEventDataCollectionKeys_RankingScore_GetHeadShotNum_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_RankingScore.GetGotAirDropNum
struct UEventDataCollectionKeys_RankingScore_GetGotAirDropNum_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_RankingScore.GetGameID
struct UEventDataCollectionKeys_RankingScore_GetGameID_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_RankingScore.GetDriveDistance
struct UEventDataCollectionKeys_RankingScore_GetDriveDistance_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_RankingScore.GetDamage
struct UEventDataCollectionKeys_RankingScore_GetDamage_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_RankingScore.GetAssists
struct UEventDataCollectionKeys_RankingScore_GetAssists_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_RankingScore.GetAliveTeamNum
struct UEventDataCollectionKeys_RankingScore_GetAliveTeamNum_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_RankingScore.GetAlivePlayerNum
struct UEventDataCollectionKeys_RankingScore_GetAlivePlayerNum_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_GameStatus.GetWorldLocation
struct UEventDataCollectionKeys_GameStatus_GetWorldLocation_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_GameStatus.GetWeather
struct UEventDataCollectionKeys_GameStatus_GetWeather_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_GameStatus.GetTotalPlayerCount
struct UEventDataCollectionKeys_GameStatus_GetTotalPlayerCount_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_GameStatus.GetToPlaneCarryLeftTime
struct UEventDataCollectionKeys_GameStatus_GetToPlaneCarryLeftTime_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_GameStatus.GetTeamId
struct UEventDataCollectionKeys_GameStatus_GetTeamId_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_GameStatus.GetPlaneRouteStop
struct UEventDataCollectionKeys_GameStatus_GetPlaneRouteStop_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_GameStatus.GetPlaneRouteStart
struct UEventDataCollectionKeys_GameStatus_GetPlaneRouteStart_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_GameStatus.GetOpenId
struct UEventDataCollectionKeys_GameStatus_GetOpenId_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_GameStatus.GetGameStatus
struct UEventDataCollectionKeys_GameStatus_GetGameStatus_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_GameStatus.GetAlivePlayerCount
struct UEventDataCollectionKeys_GameStatus_GetAlivePlayerCount_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues_GameStatus_GameStatus.GetWin
struct UEventDataCollectionValues_GameStatus_GameStatus_GetWin_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues_GameStatus_GameStatus.GetWaitingOnLobby
struct UEventDataCollectionValues_GameStatus_GameStatus_GetWaitingOnLobby_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues_GameStatus_GameStatus.GetQualityPlaza
struct UEventDataCollectionValues_GameStatus_GameStatus_GetQualityPlaza_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues_GameStatus_GameStatus.GetPlaneCarrying
struct UEventDataCollectionValues_GameStatus_GameStatus_GetPlaneCarrying_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues_GameStatus_GameStatus.GetParachuteOpen
struct UEventDataCollectionValues_GameStatus_GameStatus_GetParachuteOpen_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues_GameStatus_GameStatus.GetParachuteJumping
struct UEventDataCollectionValues_GameStatus_GameStatus_GetParachuteJumping_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues_GameStatus_GameStatus.GetMatching
struct UEventDataCollectionValues_GameStatus_GameStatus_GetMatching_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues_GameStatus_GameStatus.GetLanding
struct UEventDataCollectionValues_GameStatus_GameStatus_GetLanding_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues_GameStatus_GameStatus.GetFireWorking
struct UEventDataCollectionValues_GameStatus_GameStatus_GetFireWorking_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues_GameStatus_GameStatus.GetFighting
struct UEventDataCollectionValues_GameStatus_GameStatus_GetFighting_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues_GameStatus_GameStatus.GetCake
struct UEventDataCollectionValues_GameStatus_GameStatus_GetCake_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_StartMatching.GetViewType
struct UEventDataCollectionKeys_StartMatching_GetViewType_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_StartMatching.GetTeamCount
struct UEventDataCollectionKeys_StartMatching_GetTeamCount_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_StartMatching.GetPlayerCountInGameMode
struct UEventDataCollectionKeys_StartMatching_GetPlayerCountInGameMode_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_StartMatching.GetMapId
struct UEventDataCollectionKeys_StartMatching_GetMapId_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_StartMatching.GetGameMode
struct UEventDataCollectionKeys_StartMatching_GetGameMode_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_StartMatching.GetFullTeamCount
struct UEventDataCollectionKeys_StartMatching_GetFullTeamCount_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_PlaneCarrying.GetStartPosition
struct UEventDataCollectionKeys_PlaneCarrying_GetStartPosition_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_PlaneCarrying.GetEndPosition
struct UEventDataCollectionKeys_PlaneCarrying_GetEndPosition_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_PuttingDownCakeFireWorks.GetFireWorksOpenId
struct UEventDataCollectionKeys_PuttingDownCakeFireWorks_GetFireWorksOpenId_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_PuttingDownCakeFireWorks.GetCakeOpenId
struct UEventDataCollectionKeys_PuttingDownCakeFireWorks_GetCakeOpenId_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_TakeDropItem.GetType
struct UEventDataCollectionKeys_TakeDropItem_GetType_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_TakeDropItem.GetReason
struct UEventDataCollectionKeys_TakeDropItem_GetReason_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_TakeDropItem.GetPlayerName
struct UEventDataCollectionKeys_TakeDropItem_GetPlayerName_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_TakeDropItem.GetOpenId
struct UEventDataCollectionKeys_TakeDropItem_GetOpenId_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_TakeDropItem.GetItemInstanceId
struct UEventDataCollectionKeys_TakeDropItem_GetItemInstanceId_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_TakeDropItem.GetItemId
struct UEventDataCollectionKeys_TakeDropItem_GetItemId_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_TakeDropItem.GetItemCount
struct UEventDataCollectionKeys_TakeDropItem_GetItemCount_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_TakeDropItem.GetHoldingCount
struct UEventDataCollectionKeys_TakeDropItem_GetHoldingCount_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_TakeDropItem.GetBulletCount
struct UEventDataCollectionKeys_TakeDropItem_GetBulletCount_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_TakeDropItem.GetBackpackAvatarItemDurability
struct UEventDataCollectionKeys_TakeDropItem_GetBackpackAvatarItemDurability_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues_TakeDropItem_Type.GetTaking
struct UEventDataCollectionValues_TakeDropItem_Type_GetTaking_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues_TakeDropItem_Type.GetDropping
struct UEventDataCollectionValues_TakeDropItem_Type_GetDropping_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_UsingItem.GetStatus
struct UEventDataCollectionKeys_UsingItem_GetStatus_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_UsingItem.GetPredictLine
struct UEventDataCollectionKeys_UsingItem_GetPredictLine_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_UsingItem.GetPlayerName
struct UEventDataCollectionKeys_UsingItem_GetPlayerName_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_UsingItem.GetOpenId
struct UEventDataCollectionKeys_UsingItem_GetOpenId_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_UsingItem.GetItemLeftCount
struct UEventDataCollectionKeys_UsingItem_GetItemLeftCount_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_UsingItem.GetItemId
struct UEventDataCollectionKeys_UsingItem_GetItemId_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues_UsingItem_Status.GetLeading
struct UEventDataCollectionValues_UsingItem_Status_GetLeading_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues_UsingItem_Status.GetInteruption
struct UEventDataCollectionValues_UsingItem_Status_GetInteruption_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues_UsingItem_Status.GetCompletion
struct UEventDataCollectionValues_UsingItem_Status_GetCompletion_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_Falling.GetType
struct UEventDataCollectionKeys_Falling_GetType_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_Falling.GetStatus
struct UEventDataCollectionKeys_Falling_GetStatus_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues_Falling_Type.GetStart
struct UEventDataCollectionValues_Falling_Type_GetStart_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues_Falling_Type.GetEnd
struct UEventDataCollectionValues_Falling_Type_GetEnd_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues_Falling_Status.GetNonDriving
struct UEventDataCollectionValues_Falling_Status_GetNonDriving_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues_Falling_Status.GetDriving
struct UEventDataCollectionValues_Falling_Status_GetDriving_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_InFieldOfView.GetUniqueIdentifier
struct UEventDataCollectionKeys_InFieldOfView_GetUniqueIdentifier_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_InFieldOfView.GetTargetWorldLocation
struct UEventDataCollectionKeys_InFieldOfView_GetTargetWorldLocation_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_InFieldOfView.GetOldFieldOfViewNotificationStatus
struct UEventDataCollectionKeys_InFieldOfView_GetOldFieldOfViewNotificationStatus_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_InFieldOfView.GetMyWorldLocation
struct UEventDataCollectionKeys_InFieldOfView_GetMyWorldLocation_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_InFieldOfView.GetMinimalScreenLocation
struct UEventDataCollectionKeys_InFieldOfView_GetMinimalScreenLocation_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_InFieldOfView.GetMaximumScreenLocation
struct UEventDataCollectionKeys_InFieldOfView_GetMaximumScreenLocation_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_InFieldOfView.GetFieldOfViewTargetCategory
struct UEventDataCollectionKeys_InFieldOfView_GetFieldOfViewTargetCategory_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_InFieldOfView.GetCurrentFieldOfViewNotificationStatus
struct UEventDataCollectionKeys_InFieldOfView_GetCurrentFieldOfViewNotificationStatus_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues_InFieldOfView_FieldOfView.GetTombBox
struct UEventDataCollectionValues_InFieldOfView_FieldOfView_GetTombBox_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues_InFieldOfView_FieldOfView.GetTeammateVehicle
struct UEventDataCollectionValues_InFieldOfView_FieldOfView_GetTeammateVehicle_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues_InFieldOfView_FieldOfView.GetTeammate
struct UEventDataCollectionValues_InFieldOfView_FieldOfView_GetTeammate_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues_InFieldOfView_FieldOfView.GetSmog
struct UEventDataCollectionValues_InFieldOfView_FieldOfView_GetSmog_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues_InFieldOfView_FieldOfView.GetFireWorks
struct UEventDataCollectionValues_InFieldOfView_FieldOfView_GetFireWorks_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues_InFieldOfView_FieldOfView.GetEnemyVehicle
struct UEventDataCollectionValues_InFieldOfView_FieldOfView_GetEnemyVehicle_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues_InFieldOfView_FieldOfView.GetEnemy
struct UEventDataCollectionValues_InFieldOfView_FieldOfView_GetEnemy_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues_InFieldOfView_FieldOfView.GetCake
struct UEventDataCollectionValues_InFieldOfView_FieldOfView_GetCake_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues_InFieldOfView_FieldOfView.GetBombing
struct UEventDataCollectionValues_InFieldOfView_FieldOfView_GetBombing_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues_InFieldOfView_FieldOfView.GetAirDroping
struct UEventDataCollectionValues_InFieldOfView_FieldOfView_GetAirDroping_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_UnderEnermyAttack.GetValue
struct UEventDataCollectionKeys_UnderEnermyAttack_GetValue_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_UnderEnermyAttack.GetTargetPart
struct UEventDataCollectionKeys_UnderEnermyAttack_GetTargetPart_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_UnderEnermyAttack.GetResult2
struct UEventDataCollectionKeys_UnderEnermyAttack_GetResult2_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_UnderEnermyAttack.GetResult
struct UEventDataCollectionKeys_UnderEnermyAttack_GetResult_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_UnderEnermyAttack.GetReason
struct UEventDataCollectionKeys_UnderEnermyAttack_GetReason_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_UnderEnermyAttack.GetHurtUniqueIdentifier
struct UEventDataCollectionKeys_UnderEnermyAttack_GetHurtUniqueIdentifier_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_UnderEnermyAttack.GetHurtUid
struct UEventDataCollectionKeys_UnderEnermyAttack_GetHurtUid_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_UnderEnermyAttack.GetHurtPosture
struct UEventDataCollectionKeys_UnderEnermyAttack_GetHurtPosture_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_UnderEnermyAttack.GetHurtPosition
struct UEventDataCollectionKeys_UnderEnermyAttack_GetHurtPosition_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_UnderEnermyAttack.GetHurtPlayerTeamId
struct UEventDataCollectionKeys_UnderEnermyAttack_GetHurtPlayerTeamId_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_UnderEnermyAttack.GetHurtPlayerName
struct UEventDataCollectionKeys_UnderEnermyAttack_GetHurtPlayerName_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_UnderEnermyAttack.GetHurtOpenId
struct UEventDataCollectionKeys_UnderEnermyAttack_GetHurtOpenId_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_UnderEnermyAttack.GetHurtMaxBulletCountInClip
struct UEventDataCollectionKeys_UnderEnermyAttack_GetHurtMaxBulletCountInClip_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_UnderEnermyAttack.GetHurtIsInHouse
struct UEventDataCollectionKeys_UnderEnermyAttack_GetHurtIsInHouse_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_UnderEnermyAttack.GetHurtHealth
struct UEventDataCollectionKeys_UnderEnermyAttack_GetHurtHealth_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_UnderEnermyAttack.GetHurtEquipId
struct UEventDataCollectionKeys_UnderEnermyAttack_GetHurtEquipId_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_UnderEnermyAttack.GetHurtDirection
struct UEventDataCollectionKeys_UnderEnermyAttack_GetHurtDirection_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_UnderEnermyAttack.GetHurtCarForwardSpeed
struct UEventDataCollectionKeys_UnderEnermyAttack_GetHurtCarForwardSpeed_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_UnderEnermyAttack.GetHurtBulletCountInClip
struct UEventDataCollectionKeys_UnderEnermyAttack_GetHurtBulletCountInClip_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_UnderEnermyAttack.GetHurtBulletCountInBarrel
struct UEventDataCollectionKeys_UnderEnermyAttack_GetHurtBulletCountInBarrel_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_UnderEnermyAttack.GetHurtAim
struct UEventDataCollectionKeys_UnderEnermyAttack_GetHurtAim_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_UnderEnermyAttack.GetDph
struct UEventDataCollectionKeys_UnderEnermyAttack_GetDph_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_UnderEnermyAttack.GetDistance
struct UEventDataCollectionKeys_UnderEnermyAttack_GetDistance_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_UnderEnermyAttack.GetCarValue
struct UEventDataCollectionKeys_UnderEnermyAttack_GetCarValue_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_UnderEnermyAttack.GetCarHealth
struct UEventDataCollectionKeys_UnderEnermyAttack_GetCarHealth_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_UnderEnermyAttack.GetBeHurtUniqueIdentifier
struct UEventDataCollectionKeys_UnderEnermyAttack_GetBeHurtUniqueIdentifier_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_UnderEnermyAttack.GetBeHurtUid
struct UEventDataCollectionKeys_UnderEnermyAttack_GetBeHurtUid_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_UnderEnermyAttack.GetBeHurtPosture
struct UEventDataCollectionKeys_UnderEnermyAttack_GetBeHurtPosture_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_UnderEnermyAttack.GetBeHurtPosition
struct UEventDataCollectionKeys_UnderEnermyAttack_GetBeHurtPosition_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_UnderEnermyAttack.GetBeHurtPlayerTeamId
struct UEventDataCollectionKeys_UnderEnermyAttack_GetBeHurtPlayerTeamId_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_UnderEnermyAttack.GetBeHurtPlayerName
struct UEventDataCollectionKeys_UnderEnermyAttack_GetBeHurtPlayerName_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_UnderEnermyAttack.GetBeHurtOpenId
struct UEventDataCollectionKeys_UnderEnermyAttack_GetBeHurtOpenId_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_UnderEnermyAttack.GetBeHurtLastHealth
struct UEventDataCollectionKeys_UnderEnermyAttack_GetBeHurtLastHealth_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_UnderEnermyAttack.GetBeHurtJacketDurabilityReduction
struct UEventDataCollectionKeys_UnderEnermyAttack_GetBeHurtJacketDurabilityReduction_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_UnderEnermyAttack.GetBeHurtJacketDurability
struct UEventDataCollectionKeys_UnderEnermyAttack_GetBeHurtJacketDurability_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_UnderEnermyAttack.GetBeHurtJacket
struct UEventDataCollectionKeys_UnderEnermyAttack_GetBeHurtJacket_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_UnderEnermyAttack.GetBeHurtIsInHouse
struct UEventDataCollectionKeys_UnderEnermyAttack_GetBeHurtIsInHouse_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_UnderEnermyAttack.GetBeHurtHelmetDurabilityReduction
struct UEventDataCollectionKeys_UnderEnermyAttack_GetBeHurtHelmetDurabilityReduction_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_UnderEnermyAttack.GetBeHurtHelmetDurability
struct UEventDataCollectionKeys_UnderEnermyAttack_GetBeHurtHelmetDurability_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_UnderEnermyAttack.GetBeHurtHelmet
struct UEventDataCollectionKeys_UnderEnermyAttack_GetBeHurtHelmet_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_UnderEnermyAttack.GetBeHurtHealth
struct UEventDataCollectionKeys_UnderEnermyAttack_GetBeHurtHealth_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_UnderEnermyAttack.GetBeHurtEquipId
struct UEventDataCollectionKeys_UnderEnermyAttack_GetBeHurtEquipId_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_UnderEnermyAttack.GetBeHurtDirection
struct UEventDataCollectionKeys_UnderEnermyAttack_GetBeHurtDirection_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_UnderEnermyAttack.GetBeHurtCarForwardSpeed
struct UEventDataCollectionKeys_UnderEnermyAttack_GetBeHurtCarForwardSpeed_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_UnderEnermyAttack.GetAce
struct UEventDataCollectionKeys_UnderEnermyAttack_GetAce_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues_UnderEnermyAttack_Result.GetWeedingOut
struct UEventDataCollectionValues_UnderEnermyAttack_Result_GetWeedingOut_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues_UnderEnermyAttack_Result.GetReducingHealth
struct UEventDataCollectionValues_UnderEnermyAttack_Result_GetReducingHealth_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues_UnderEnermyAttack_Result.GetKnockingOutReducingHealth
struct UEventDataCollectionValues_UnderEnermyAttack_Result_GetKnockingOutReducingHealth_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues_UnderEnermyAttack_Result.GetKnockingOut
struct UEventDataCollectionValues_UnderEnermyAttack_Result_GetKnockingOut_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues_UnderEnermyAttack_Result2.GetWeedingOut2
struct UEventDataCollectionValues_UnderEnermyAttack_Result2_GetWeedingOut2_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues_UnderEnermyAttack_Reason.GetVehicleColliding
struct UEventDataCollectionValues_UnderEnermyAttack_Reason_GetVehicleColliding_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues_UnderEnermyAttack_Reason.GetVehicleBombing
struct UEventDataCollectionValues_UnderEnermyAttack_Reason_GetVehicleBombing_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues_UnderEnermyAttack_Reason.GetPoison
struct UEventDataCollectionValues_UnderEnermyAttack_Reason_GetPoison_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues_UnderEnermyAttack_Reason.GetLastBreathWithoutRescue
struct UEventDataCollectionValues_UnderEnermyAttack_Reason_GetLastBreathWithoutRescue_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues_UnderEnermyAttack_Reason.GetFalling
struct UEventDataCollectionValues_UnderEnermyAttack_Reason_GetFalling_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues_UnderEnermyAttack_Reason.GetDrowning
struct UEventDataCollectionValues_UnderEnermyAttack_Reason_GetDrowning_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues_UnderEnermyAttack_Reason.GetBombing
struct UEventDataCollectionValues_UnderEnermyAttack_Reason_GetBombing_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues_UnderEnermyAttack_Reason.GetAirAttacking
struct UEventDataCollectionValues_UnderEnermyAttack_Reason_GetAirAttacking_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues_UnderEnermyAttack_Reason.FromDamageEvent
struct UEventDataCollectionValues_UnderEnermyAttack_Reason_FromDamageEvent_Params
{
	struct FDamageEvent                                DamageEvent;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues_UnderEnermyAttack_BeHurtPosture.GetWalking
struct UEventDataCollectionValues_UnderEnermyAttack_BeHurtPosture_GetWalking_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues_UnderEnermyAttack_BeHurtPosture.GetTurningHead
struct UEventDataCollectionValues_UnderEnermyAttack_BeHurtPosture_GetTurningHead_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues_UnderEnermyAttack_BeHurtPosture.GetStanding
struct UEventDataCollectionValues_UnderEnermyAttack_BeHurtPosture_GetStanding_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues_UnderEnermyAttack_BeHurtPosture.GetRunning
struct UEventDataCollectionValues_UnderEnermyAttack_BeHurtPosture_GetRunning_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues_UnderEnermyAttack_BeHurtPosture.GetProning
struct UEventDataCollectionValues_UnderEnermyAttack_BeHurtPosture_GetProning_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues_UnderEnermyAttack_BeHurtPosture.GetJumping
struct UEventDataCollectionValues_UnderEnermyAttack_BeHurtPosture_GetJumping_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues_UnderEnermyAttack_BeHurtPosture.GetDying
struct UEventDataCollectionValues_UnderEnermyAttack_BeHurtPosture_GetDying_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues_UnderEnermyAttack_BeHurtPosture.GetDriving
struct UEventDataCollectionValues_UnderEnermyAttack_BeHurtPosture_GetDriving_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues_UnderEnermyAttack_BeHurtPosture.GetCrouching
struct UEventDataCollectionValues_UnderEnermyAttack_BeHurtPosture_GetCrouching_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues_UnderEnermyAttack_BeHurtPosture.GetCarriging
struct UEventDataCollectionValues_UnderEnermyAttack_BeHurtPosture_GetCarriging_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues_UnderEnermyAttack_BeHurtPosture.FromPawnStates
struct UEventDataCollectionValues_UnderEnermyAttack_BeHurtPosture_FromPawnStates_Params
{
	int64_t                                            PawnStates;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues_UnderEnermyAttack_BeHurtPosture.FromPawnState
struct UEventDataCollectionValues_UnderEnermyAttack_BeHurtPosture_FromPawnState_Params
{
	EPawnState                                         PawnState;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues_UnderEnermyAttack_HurtAim.Get
struct UEventDataCollectionValues_UnderEnermyAttack_HurtAim_Get_Params
{
	class ASTExtraBaseCharacter*                       AttackerSTExtraBaseCharacter;                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Addons.EventDataCollectionKeys_TakingDamage.GetResult
struct UEventDataCollectionKeys_TakingDamage_GetResult_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_TakingDamage.GetReason
struct UEventDataCollectionKeys_TakingDamage_GetReason_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_TakingDamage.GetPlayerName
struct UEventDataCollectionKeys_TakingDamage_GetPlayerName_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_TakingDamage.GetOpenId
struct UEventDataCollectionKeys_TakingDamage_GetOpenId_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_TakingDamage.GetLeftHealth
struct UEventDataCollectionKeys_TakingDamage_GetLeftHealth_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues_TakingDamage_Reason.GetVehicleColliding
struct UEventDataCollectionValues_TakingDamage_Reason_GetVehicleColliding_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues_TakingDamage_Reason.GetVehicleBombing
struct UEventDataCollectionValues_TakingDamage_Reason_GetVehicleBombing_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues_TakingDamage_Reason.GetPoison
struct UEventDataCollectionValues_TakingDamage_Reason_GetPoison_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues_TakingDamage_Reason.GetLastBreathWithoutRescue
struct UEventDataCollectionValues_TakingDamage_Reason_GetLastBreathWithoutRescue_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues_TakingDamage_Reason.GetFalling
struct UEventDataCollectionValues_TakingDamage_Reason_GetFalling_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues_TakingDamage_Reason.GetDrowning
struct UEventDataCollectionValues_TakingDamage_Reason_GetDrowning_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues_TakingDamage_Reason.GetBombing
struct UEventDataCollectionValues_TakingDamage_Reason_GetBombing_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues_TakingDamage_Reason.GetAirAttacking
struct UEventDataCollectionValues_TakingDamage_Reason_GetAirAttacking_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues_TakingDamage_Reason.FromDamageEvent
struct UEventDataCollectionValues_TakingDamage_Reason_FromDamageEvent_Params
{
	struct FDamageEvent                                DamageEvent;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_CircleReducing.GetOpenId
struct UEventDataCollectionKeys_CircleReducing_GetOpenId_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_CircleChange.GetWorldLocation
struct UEventDataCollectionKeys_CircleChange_GetWorldLocation_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_CircleChange.GetOldCircleRadius
struct UEventDataCollectionKeys_CircleChange_GetOldCircleRadius_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_CircleChange.GetOldCircleCenter
struct UEventDataCollectionKeys_CircleChange_GetOldCircleCenter_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_CircleChange.GetNewCircleRadius
struct UEventDataCollectionKeys_CircleChange_GetNewCircleRadius_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_CircleChange.GetNewCircleCenter
struct UEventDataCollectionKeys_CircleChange_GetNewCircleCenter_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_Rescue.GetStatus
struct UEventDataCollectionKeys_Rescue_GetStatus_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_Rescue.GetRescuePlayerName
struct UEventDataCollectionKeys_Rescue_GetRescuePlayerName_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_Rescue.GetRescueOpenId
struct UEventDataCollectionKeys_Rescue_GetRescueOpenId_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_Rescue.GetBeRescuePlayerName
struct UEventDataCollectionKeys_Rescue_GetBeRescuePlayerName_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_Rescue.GetBeRescueOpenId
struct UEventDataCollectionKeys_Rescue_GetBeRescueOpenId_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_DrivingVehicle.GetVehicleId
struct UEventDataCollectionKeys_DrivingVehicle_GetVehicleId_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_DrivingVehicle.GetTire
struct UEventDataCollectionKeys_DrivingVehicle_GetTire_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_DrivingVehicle.GetStatus
struct UEventDataCollectionKeys_DrivingVehicle_GetStatus_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_DrivingVehicle.GetSpeed
struct UEventDataCollectionKeys_DrivingVehicle_GetSpeed_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_DrivingVehicle.GetPassengerOpenId
struct UEventDataCollectionKeys_DrivingVehicle_GetPassengerOpenId_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_DrivingVehicle.GetOil
struct UEventDataCollectionKeys_DrivingVehicle_GetOil_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_DrivingVehicle.GetDrivingType
struct UEventDataCollectionKeys_DrivingVehicle_GetDrivingType_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_DrivingVehicle.GetDriverUId
struct UEventDataCollectionKeys_DrivingVehicle_GetDriverUId_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_DrivingVehicle.GetDriverPlayerName
struct UEventDataCollectionKeys_DrivingVehicle_GetDriverPlayerName_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_DrivingVehicle.GetDriverOpenId
struct UEventDataCollectionKeys_DrivingVehicle_GetDriverOpenId_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues_DrivingVehicle_DrivingType.GetPassanger
struct UEventDataCollectionValues_DrivingVehicle_DrivingType_GetPassanger_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues_DrivingVehicle_DrivingType.GetDriver
struct UEventDataCollectionValues_DrivingVehicle_DrivingType_GetDriver_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues_DrivingVehicle_Status.GetOn
struct UEventDataCollectionValues_DrivingVehicle_Status_GetOn_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues_DrivingVehicle_Status.GetOff
struct UEventDataCollectionValues_DrivingVehicle_Status_GetOff_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_ReloadingBullet.GetMaxBulletCountInClip
struct UEventDataCollectionKeys_ReloadingBullet_GetMaxBulletCountInClip_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_ReloadingBullet.GetBulletCountInClip
struct UEventDataCollectionKeys_ReloadingBullet_GetBulletCountInClip_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_ReloadingBullet.GetBulletCountInBarrel
struct UEventDataCollectionKeys_ReloadingBullet_GetBulletCountInBarrel_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_AirDrop.GetType
struct UEventDataCollectionKeys_AirDrop_GetType_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_AirDrop.GetPosition
struct UEventDataCollectionKeys_AirDrop_GetPosition_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_AirDrop.GetLandedPosition
struct UEventDataCollectionKeys_AirDrop_GetLandedPosition_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues_AirDrop_Type.GetSuper
struct UEventDataCollectionValues_AirDrop_Type_GetSuper_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues_AirDrop_Type.GetNormal
struct UEventDataCollectionValues_AirDrop_Type_GetNormal_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_ItemAttach.GetState
struct UEventDataCollectionKeys_ItemAttach_GetState_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_ItemAttach.GetOpenId
struct UEventDataCollectionKeys_ItemAttach_GetOpenId_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_ItemAttach.GetItemId
struct UEventDataCollectionKeys_ItemAttach_GetItemId_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_ItemAttach.GetAttachmentId
struct UEventDataCollectionKeys_ItemAttach_GetAttachmentId_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues_ItemAttach_State.GetDetaching
struct UEventDataCollectionValues_ItemAttach_State_GetDetaching_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues_ItemAttach_State.GetAttaching
struct UEventDataCollectionValues_ItemAttach_State_GetAttaching_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_PlayerInfo.GetSex
struct UEventDataCollectionKeys_PlayerInfo_GetSex_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_PlayerInfo.GetPlayerName
struct UEventDataCollectionKeys_PlayerInfo_GetPlayerName_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_PlayerInfo.GetAvatars
struct UEventDataCollectionKeys_PlayerInfo_GetAvatars_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues_PlayerInfo_Sex.GetMale
struct UEventDataCollectionValues_PlayerInfo_Sex_GetMale_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues_PlayerInfo_Sex.GetFemale
struct UEventDataCollectionValues_PlayerInfo_Sex_GetFemale_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_MiniMapShowInfo.GetVoiceCheck
struct UEventDataCollectionKeys_MiniMapShowInfo_GetVoiceCheck_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_MiniMapShowInfo.GetPosition
struct UEventDataCollectionKeys_MiniMapShowInfo_GetPosition_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues_MiniMapShowInfo_VoiceCheck.GetWeapon
struct UEventDataCollectionValues_MiniMapShowInfo_VoiceCheck_GetWeapon_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues_MiniMapShowInfo_VoiceCheck.GetTyre
struct UEventDataCollectionValues_MiniMapShowInfo_VoiceCheck_GetTyre_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues_MiniMapShowInfo_VoiceCheck.GetSilentWeapon
struct UEventDataCollectionValues_MiniMapShowInfo_VoiceCheck_GetSilentWeapon_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues_MiniMapShowInfo_VoiceCheck.GetGlass
struct UEventDataCollectionValues_MiniMapShowInfo_VoiceCheck_GetGlass_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues_MiniMapShowInfo_VoiceCheck.GetFootPrint
struct UEventDataCollectionValues_MiniMapShowInfo_VoiceCheck_GetFootPrint_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_Following.GetFollowType
struct UEventDataCollectionKeys_Following_GetFollowType_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_Following.GetFollowerOpenId
struct UEventDataCollectionKeys_Following_GetFollowerOpenId_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_Following.GetFolloweeOpenId
struct UEventDataCollectionKeys_Following_GetFolloweeOpenId_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues_Following_FollowType.GetRefuse
struct UEventDataCollectionValues_Following_FollowType_GetRefuse_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues_Following_FollowType.GetInvitation
struct UEventDataCollectionValues_Following_FollowType_GetInvitation_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues_Following_FollowType.GetFollowing
struct UEventDataCollectionValues_Following_FollowType_GetFollowing_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues_Following_FollowType.GetCancellation
struct UEventDataCollectionValues_Following_FollowType_GetCancellation_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues_Following_FollowType.GetAcception
struct UEventDataCollectionValues_Following_FollowType_GetAcception_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_MiniMapPinning.GetType
struct UEventDataCollectionKeys_MiniMapPinning_GetType_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_MiniMapPinning.GetPinPosition
struct UEventDataCollectionKeys_MiniMapPinning_GetPinPosition_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_MiniMapPinning.GetOpenId
struct UEventDataCollectionKeys_MiniMapPinning_GetOpenId_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues_MiniMapPinning_Type.GetPinning
struct UEventDataCollectionValues_MiniMapPinning_Type_GetPinning_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues_MiniMapPinning_Type.GetNonPinning
struct UEventDataCollectionValues_MiniMapPinning_Type_GetNonPinning_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_Blocking.GetType
struct UEventDataCollectionKeys_Blocking_GetType_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_Blocking.GetBlockerOpenId
struct UEventDataCollectionKeys_Blocking_GetBlockerOpenId_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_Blocking.GetBlockerIndex
struct UEventDataCollectionKeys_Blocking_GetBlockerIndex_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_Blocking.GetBlockeeOpenId
struct UEventDataCollectionKeys_Blocking_GetBlockeeOpenId_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_Blocking.GetBlockeeIndex
struct UEventDataCollectionKeys_Blocking_GetBlockeeIndex_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues_Blocking_Type.GetNonBlocking
struct UEventDataCollectionValues_Blocking_Type_GetNonBlocking_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues_Blocking_Type.GetBlocking
struct UEventDataCollectionValues_Blocking_Type_GetBlocking_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_Dancing.GetDancerOpenId
struct UEventDataCollectionKeys_Dancing_GetDancerOpenId_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_Dancing.GetDanceId
struct UEventDataCollectionKeys_Dancing_GetDanceId_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_PickingupTombBox.GetOpenId
struct UEventDataCollectionKeys_PickingupTombBox_GetOpenId_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_PickingupTombBox.GetItemIDs
struct UEventDataCollectionKeys_PickingupTombBox_GetItemIDs_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_PickingupTombBox.GetItemId
struct UEventDataCollectionKeys_PickingupTombBox_GetItemId_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_PickingupTombBox.GetItemCounts
struct UEventDataCollectionKeys_PickingupTombBox_GetItemCounts_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_PickingupTombBox.GetItemCount
struct UEventDataCollectionKeys_PickingupTombBox_GetItemCount_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_PickingupTombBox.GetBoxName
struct UEventDataCollectionKeys_PickingupTombBox_GetBoxName_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_AirAttacking.GetWorldLocation
struct UEventDataCollectionKeys_AirAttacking_GetWorldLocation_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_AirAttacking.GetCenter
struct UEventDataCollectionKeys_AirAttacking_GetCenter_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_CurrentWeapon.GetMaxBulletCountInClip
struct UEventDataCollectionKeys_CurrentWeapon_GetMaxBulletCountInClip_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_CurrentWeapon.GetItemId
struct UEventDataCollectionKeys_CurrentWeapon_GetItemId_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_CurrentWeapon.GetBulletCountInClip
struct UEventDataCollectionKeys_CurrentWeapon_GetBulletCountInClip_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_CurrentWeapon.GetBulletCountInBarrel
struct UEventDataCollectionKeys_CurrentWeapon_GetBulletCountInBarrel_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_SceneInfo.GetIsInHouse
struct UEventDataCollectionKeys_SceneInfo_GetIsInHouse_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues_SceneInfo_IsInHouse.GetYes
struct UEventDataCollectionValues_SceneInfo_IsInHouse_GetYes_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues_SceneInfo_IsInHouse.GetNo
struct UEventDataCollectionValues_SceneInfo_IsInHouse_GetNo_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_TeamInfo.GetTeammateUIds
struct UEventDataCollectionKeys_TeamInfo_GetTeammateUIds_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_TeamInfo.GetTeammateOpenIds
struct UEventDataCollectionKeys_TeamInfo_GetTeammateOpenIds_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_TeamInfo.GetTeamId
struct UEventDataCollectionKeys_TeamInfo_GetTeamId_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_EnteringLeavingTeam.GetTeamId
struct UEventDataCollectionKeys_EnteringLeavingTeam_GetTeamId_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_EnteringLeavingTeam.GetOpenId
struct UEventDataCollectionKeys_EnteringLeavingTeam_GetOpenId_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_EnteringLeavingTeam.GetAction
struct UEventDataCollectionKeys_EnteringLeavingTeam_GetAction_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues_EnteringLeavingTeam_Action.GetLeaving
struct UEventDataCollectionValues_EnteringLeavingTeam_Action_GetLeaving_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues_EnteringLeavingTeam_Action.GetEntering
struct UEventDataCollectionValues_EnteringLeavingTeam_Action_GetEntering_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_OnOffline.GetType
struct UEventDataCollectionKeys_OnOffline_GetType_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_OnOffline.GetOpenId
struct UEventDataCollectionKeys_OnOffline_GetOpenId_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues_OnOffline_Type.GetOnline
struct UEventDataCollectionValues_OnOffline_Type_GetOnline_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues_OnOffline_Type.GetOffline
struct UEventDataCollectionValues_OnOffline_Type_GetOffline_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_RankList.GetType
struct UEventDataCollectionKeys_RankList_GetType_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_RankList.GetState
struct UEventDataCollectionKeys_RankList_GetState_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_RankList.GetOpenId
struct UEventDataCollectionKeys_RankList_GetOpenId_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues_RankList_State.GetOn
struct UEventDataCollectionValues_RankList_State_GetOn_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues_RankList_State.GetOff
struct UEventDataCollectionValues_RankList_State_GetOff_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_TextMessage.GetText
struct UEventDataCollectionKeys_TextMessage_GetText_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_TextMessage.GetOpenId
struct UEventDataCollectionKeys_TextMessage_GetOpenId_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_TextMessage.GetItemPosition
struct UEventDataCollectionKeys_TextMessage_GetItemPosition_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_TextMessage.GetItemId
struct UEventDataCollectionKeys_TextMessage_GetItemId_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_PawnState.IsInterestedPawnStates
struct UEventDataCollectionKeys_PawnState_IsInterestedPawnStates_Params
{
	EPawnState                                         PawnState;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.EventDataCollectionKeys_PawnState.GetType
struct UEventDataCollectionKeys_PawnState_GetType_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_PawnState.GetStates
struct UEventDataCollectionKeys_PawnState_GetStates_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_PawnState.GetOpenId
struct UEventDataCollectionKeys_PawnState_GetOpenId_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_PawnState.GetChangedState
struct UEventDataCollectionKeys_PawnState_GetChangedState_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues_PawnState_State.GetLeaving
struct UEventDataCollectionValues_PawnState_State_GetLeaving_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues_PawnState_State.GetEntering
struct UEventDataCollectionValues_PawnState_State_GetEntering_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_OpenCloseDoor.GetRightState
struct UEventDataCollectionKeys_OpenCloseDoor_GetRightState_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_OpenCloseDoor.GetOpenId
struct UEventDataCollectionKeys_OpenCloseDoor_GetOpenId_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_OpenCloseDoor.GetLeftState
struct UEventDataCollectionKeys_OpenCloseDoor_GetLeftState_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues_OpenCloseDoor_RightState.GetOpen
struct UEventDataCollectionValues_OpenCloseDoor_RightState_GetOpen_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues_OpenCloseDoor_RightState.GetClose
struct UEventDataCollectionValues_OpenCloseDoor_RightState_GetClose_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues_OpenCloseDoor_RightState.GetBroken
struct UEventDataCollectionValues_OpenCloseDoor_RightState_GetBroken_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_MicSpeakerState.GetSpeaker
struct UEventDataCollectionKeys_MicSpeakerState_GetSpeaker_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_MicSpeakerState.GetOpenId
struct UEventDataCollectionKeys_MicSpeakerState_GetOpenId_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_MicSpeakerState.GetMic
struct UEventDataCollectionKeys_MicSpeakerState_GetMic_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_VehicleState.GetWheelStates
struct UEventDataCollectionKeys_VehicleState_GetWheelStates_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_VehicleState.GetHp
struct UEventDataCollectionKeys_VehicleState_GetHp_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_VehicleState.GetFuel
struct UEventDataCollectionKeys_VehicleState_GetFuel_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_VehicleState.GetForwardSpeed
struct UEventDataCollectionKeys_VehicleState_GetForwardSpeed_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.FloatingCapsuleVehicle.VehicleBreakOutVelocity
struct AFloatingCapsuleVehicle_VehicleBreakOutVelocity_Params
{
	struct FVector                                     ApplyVelocity;                                            // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               bAddVelocity;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.FloatingCapsuleVehicle.SetTargetFloatState
struct AFloatingCapsuleVehicle_SetTargetFloatState_Params
{
	bool                                               bUpState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.FloatingCapsuleVehicle.SetServerPrecentPenetratingEnabled
struct AFloatingCapsuleVehicle_SetServerPrecentPenetratingEnabled_Params
{
	bool                                               Enabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.FloatingCapsuleVehicle.ServerBreakOut
struct AFloatingCapsuleVehicle_ServerBreakOut_Params
{
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.FloatingCapsuleVehicle.OnRep_BreakOutState
struct AFloatingCapsuleVehicle_OnRep_BreakOutState_Params
{
	bool                                               bPrevState;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.FloatingCapsuleVehicle.MoveWheelHeight
struct AFloatingCapsuleVehicle_MoveWheelHeight_Params
{
	float                                              DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.FloatingCapsuleVehicle.GetFloatingVehicleMovement
struct AFloatingCapsuleVehicle_GetFloatingVehicleMovement_Params
{
	class USTExtraFloatingVehicleMovementComponentBase* ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Addons.FloatingCapsuleVehicle.GetEnterDistanceSq
struct AFloatingCapsuleVehicle_GetEnterDistanceSq_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.FloatingCapsuleVehicle.DoBreakOut
struct AFloatingCapsuleVehicle_DoBreakOut_Params
{
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.FloatingCapsuleVehicle.BreakOut
struct AFloatingCapsuleVehicle_BreakOut_Params
{
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.FloatingCapsuleVehicle.BPTryCheckSimulatePhysics
struct AFloatingCapsuleVehicle_BPTryCheckSimulatePhysics_Params
{
};

// Function Addons.FloatingMechaAnimInstance.TryUncombineWithMecha
struct UFloatingMechaAnimInstance_TryUncombineWithMecha_Params
{
};

// Function Addons.FloatingMechaAnimInstance.TryCombineWithMecha
struct UFloatingMechaAnimInstance_TryCombineWithMecha_Params
{
	class USkeletalMeshComponent*                      SourceMechaMesh;                                          // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     InRelativeLocation;                                       // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FRotator                                    InRelativeRotation;                                       // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Addons.FloatingMechaAnimInstance.HandleOnPlayerEnterVehicle
struct UFloatingMechaAnimInstance_HandleOnPlayerEnterVehicle_Params
{
	class ASTExtraPlayerCharacter*                     Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	ESTExtraVehicleSeatType                            SeatType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.FloatingMechaAnimInstance.HandleOnNitrogenAccelStateChanged
struct UFloatingMechaAnimInstance_HandleOnNitrogenAccelStateChanged_Params
{
	ENitrogenAccelState                                State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	ENitrogenAccelState                                preState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class ASTExtraVehicleBase*                         Vehile;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.FloatingMechaAnimInstance.GetLuaDebugString
struct UFloatingMechaAnimInstance_GetLuaDebugString_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Addons.FlyingArmorMoveObj.SetRisingInput
struct UFlyingArmorMoveObj_SetRisingInput_Params
{
	float                                              rate;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.FlyingArmorMoveObj.SetActiveState
struct UFlyingArmorMoveObj_SetActiveState_Params
{
	EFAMActiveState                                    NewState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.FlyingArmorMoveObj.OnLeaveFly
struct UFlyingArmorMoveObj_OnLeaveFly_Params
{
};

// Function Addons.FlyingArmorMoveObj.OnEnterFly
struct UFlyingArmorMoveObj_OnEnterFly_Params
{
};

// Function Addons.FlyingArmorMoveObj.LeaveFly
struct UFlyingArmorMoveObj_LeaveFly_Params
{
};

// Function Addons.FlyingArmorMoveObj.EnterFly
struct UFlyingArmorMoveObj_EnterFly_Params
{
};

// Function Addons.FreeViewPawn.UnbindPlayerInputDelegate
struct AFreeViewPawn_UnbindPlayerInputDelegate_Params
{
};

// Function Addons.FreeViewPawn.SetController
struct AFreeViewPawn_SetController_Params
{
	class ASTExtraPlayerController*                    InController;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.FreeViewPawn.MoveUp
struct AFreeViewPawn_MoveUp_Params
{
	float                                              Val;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.FreeViewPawn.MoveRight
struct AFreeViewPawn_MoveRight_Params
{
	float                                              Val;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.FreeViewPawn.MoveForward
struct AFreeViewPawn_MoveForward_Params
{
	float                                              Val;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.FreeViewPawn.GetFreeViewOrigin
struct AFreeViewPawn_GetFreeViewOrigin_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Addons.FreeViewPawn.BindPlayerInputDelegate
struct AFreeViewPawn_BindPlayerInputDelegate_Params
{
};

// Function Addons.HorseAnimInstance.OnTakeDamage
struct UHorseAnimInstance_OnTakeDamage_Params
{
	class AActor*                                      HitActor;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      HitInstigator;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  HitInfo;                                                  // (ConstParm, Parm, IsPlainOldData)
	struct FVector                                     ImpulseDir;                                               // (ConstParm, Parm, IsPlainOldData)
	float                                              Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.HorseAnimInstance.OnHorseSuddenStop
struct UHorseAnimInstance_OnHorseSuddenStop_Params
{
	float                                              StopDuration;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.HorseAnimInstance.OnHorseShocked
struct UHorseAnimInstance_OnHorseShocked_Params
{
};

// Function Addons.HorseAnimInstance.HandleOnHorseSuddenStop
struct UHorseAnimInstance_HandleOnHorseSuddenStop_Params
{
};

// Function Addons.HorseAnimInstance.HandleOnHorseJumped
struct UHorseAnimInstance_HandleOnHorseJumped_Params
{
	int                                                JumpCount;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSpecialJump;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.HorseAnimInstance.HandleOnHorseFeeded
struct UHorseAnimInstance_HandleOnHorseFeeded_Params
{
};

// Function Addons.HorseAnimInstance.HandleOnHorseAccelerate
struct UHorseAnimInstance_HandleOnHorseAccelerate_Params
{
};

// Function Addons.HorseAnimInstance.HandleOnEndMatchDistance
struct UHorseAnimInstance_HandleOnEndMatchDistance_Params
{
	float                                              StopDuration;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.HorseAnimInstance.HandleOnBeginMatchDistance
struct UHorseAnimInstance_HandleOnBeginMatchDistance_Params
{
	struct FVector                                     PredictedStopLocation;                                    // (Parm, IsPlainOldData)
};

// Function Addons.HorseAnimInstance.GetLuaDebugString
struct UHorseAnimInstance_GetLuaDebugString_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Addons.HorseAnimInstance.BpOnTakeDamage
struct UHorseAnimInstance_BpOnTakeDamage_Params
{
	class AActor*                                      HitActor;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      HitInstigator;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  HitInfo;                                                  // (ConstParm, Parm, IsPlainOldData)
	struct FVector                                     ImpulseDir;                                               // (ConstParm, Parm, IsPlainOldData)
	float                                              Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.HorseAnimInstance.BpOnHorseShocked
struct UHorseAnimInstance_BpOnHorseShocked_Params
{
};

// Function Addons.HorseAnimInstance.BpHandleOnHorseJumped
struct UHorseAnimInstance_BpHandleOnHorseJumped_Params
{
	int                                                JumpCount;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.HorseAnimInstance.BpHandleOnHorseFeeded
struct UHorseAnimInstance_BpHandleOnHorseFeeded_Params
{
};

// Function Addons.HorseAnimInstance.BpHandleOnHorseAccelerate
struct UHorseAnimInstance_BpHandleOnHorseAccelerate_Params
{
};

// Function Addons.HorseDistanceMatchingComponent.HandleOnSetHandBrake
struct UHorseDistanceMatchingComponent_HandleOnSetHandBrake_Params
{
	float                                              NewRate;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.HorseRiderAnimInstance.OnTakeDamage
struct UHorseRiderAnimInstance_OnTakeDamage_Params
{
	class AActor*                                      HitActor;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      HitInstigator;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  HitInfo;                                                  // (ConstParm, Parm, IsPlainOldData)
	struct FVector                                     ImpulseDir;                                               // (ConstParm, Parm, IsPlainOldData)
	float                                              Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.HorseRiderAnimInstance.OnHorseShocked
struct UHorseRiderAnimInstance_OnHorseShocked_Params
{
};

// Function Addons.HorseRiderAnimInstance.HandlePlayerWeaponStateChanged
struct UHorseRiderAnimInstance_HandlePlayerWeaponStateChanged_Params
{
	TEnumAsByte<enum EFreshWeaponStateType>            NewState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.HorseRiderAnimInstance.HandleOnHorseSuddenStop
struct UHorseRiderAnimInstance_HandleOnHorseSuddenStop_Params
{
};

// Function Addons.HorseRiderAnimInstance.HandleOnHorseJumped
struct UHorseRiderAnimInstance_HandleOnHorseJumped_Params
{
	int                                                JumpCount;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSpecialJump;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.HorseRiderAnimInstance.HandleOnHorseFeeded
struct UHorseRiderAnimInstance_HandleOnHorseFeeded_Params
{
};

// Function Addons.HorseRiderAnimInstance.HandleOnHorseAccelerate
struct UHorseRiderAnimInstance_HandleOnHorseAccelerate_Params
{
};

// Function Addons.HorseRiderAnimInstance.DoRandomIdle
struct UHorseRiderAnimInstance_DoRandomIdle_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.HorseRiderAnimInstance.BpOnTakeDamage
struct UHorseRiderAnimInstance_BpOnTakeDamage_Params
{
	class AActor*                                      HitActor;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      HitInstigator;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  HitInfo;                                                  // (ConstParm, Parm, IsPlainOldData)
	struct FVector                                     ImpulseDir;                                               // (ConstParm, Parm, IsPlainOldData)
	float                                              Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.HorseRiderAnimInstance.BpOnHorseShocked
struct UHorseRiderAnimInstance_BpOnHorseShocked_Params
{
};

// Function Addons.HorseRiderAnimInstance.BpHandleOnHorseSuddenStop
struct UHorseRiderAnimInstance_BpHandleOnHorseSuddenStop_Params
{
};

// Function Addons.HorseRiderAnimInstance.BpHandleOnHorseJumped
struct UHorseRiderAnimInstance_BpHandleOnHorseJumped_Params
{
	int                                                JumpCount;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.HorseRiderAnimInstance.BpHandleOnHorseFeeded
struct UHorseRiderAnimInstance_BpHandleOnHorseFeeded_Params
{
};

// Function Addons.HorseRiderAnimInstance.BpHandleOnHorseAccelerate
struct UHorseRiderAnimInstance_BpHandleOnHorseAccelerate_Params
{
};

// Function Addons.HorsePassengerAnimInstance.HandleOnPreExit
struct UHorsePassengerAnimInstance_HandleOnPreExit_Params
{
	class ASTExtraBaseCharacter*                       Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.HorsePassengerAnimInstance.BpHandleOnPreExit
struct UHorsePassengerAnimInstance_BpHandleOnPreExit_Params
{
	class ASTExtraBaseCharacter*                       Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.HorsePlayerCurvedUpdateComponent.RegisterCurvedUpdateForPlayer
struct UHorsePlayerCurvedUpdateComponent_RegisterCurvedUpdateForPlayer_Params
{
	class ASTExtraBaseCharacter*                       Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UCurveVector*                                LocationCurve;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UCurveVector*                                RotationCurve;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              rate;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     RealExitLocation;                                         // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              StartTime;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              CameraLerpStartTime;                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              CameraLerpDuration;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.HorsePlayerCurvedUpdateComponent.IsPlayerCurvedUpdating
struct UHorsePlayerCurvedUpdateComponent_IsPlayerCurvedUpdating_Params
{
	class ASTExtraBaseCharacter*                       Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.HorsePlayerCurvedUpdateComponent.ForceStopAndRemoveUpdateDataForPlayer
struct UHorsePlayerCurvedUpdateComponent_ForceStopAndRemoveUpdateDataForPlayer_Params
{
	class ASTExtraBaseCharacter*                       Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.HorsePlayerCurvedUpdateComponent.CanUpdatePlayer
struct UHorsePlayerCurvedUpdateComponent_CanUpdatePlayer_Params
{
	class ASTExtraBaseCharacter*                       Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.HorseSeatComponent.CheckSocketLocationIsValid
struct UHorseSeatComponent_CheckSocketLocationIsValid_Params
{
	struct FVector                                     OutLocation;                                              // (Parm, OutParm, IsPlainOldData)
	struct FName                                       SocketName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class ASTExtraPlayerCharacter*                     Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      HorseMesh;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     EnterSocketPos;                                           // (Parm, IsPlainOldData)
	float                                              CheckedHalfRadius;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              CheckedHalfHeight;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IgnoreVehicle;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.HorseSeatComponent.AddExitHorseSocketsSetting
struct UHorseSeatComponent_AddExitHorseSocketsSetting_Params
{
	struct FExitHorseSockets                           Sockets;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Addons.HorseVehicle.UpdateTransformingEffect
struct AHorseVehicle_UpdateTransformingEffect_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.HorseVehicle.SetHorseMaxWalkSpeed
struct AHorseVehicle_SetHorseMaxWalkSpeed_Params
{
	float                                              NewSpeed;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.HorseVehicle.SetHandBrake
struct AHorseVehicle_SetHandBrake_Params
{
	float                                              rate;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.HorseVehicle.ServerTransform
struct AHorseVehicle_ServerTransform_Params
{
	class ASTExtraBaseCharacter*                       InPlayer;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHorseTransformData                         InTranformData;                                           // (Parm)
};

// Function Addons.HorseVehicle.ServerSetHorseMaxWalkSpeed
struct AHorseVehicle_ServerSetHorseMaxWalkSpeed_Params
{
	float                                              NewSpeed;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.HorseVehicle.ServerSetHandBrake
struct AHorseVehicle_ServerSetHandBrake_Params
{
	float                                              rate;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.HorseVehicle.OnRep_HorseTransformData
struct AHorseVehicle_OnRep_HorseTransformData_Params
{
};

// DelegateFunction Addons.HorseVehicle.OnHorseTransformDelegate__DelegateSignature
struct AHorseVehicle_OnHorseTransformDelegate__DelegateSignature_Params
{
	class ASTExtraBaseCharacter*                       Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	EHorseTransformType                                TransformType;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.HorseVehicle.MulticastDoJump
struct AHorseVehicle_MulticastDoJump_Params
{
	int                                                JumpCount;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSpecialJump;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.HorseVehicle.LuaShouldHandleExitVehicleProcess
struct AHorseVehicle_LuaShouldHandleExitVehicleProcess_Params
{
	class ASTExtraPlayerController*                    PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.HorseVehicle.Jump
struct AHorseVehicle_Jump_Params
{
};

// Function Addons.HorseVehicle.IsTransforming
struct AHorseVehicle_IsTransforming_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.HorseVehicle.HandleVehicleHealthDestroy
struct AHorseVehicle_HandleVehicleHealthDestroy_Params
{
};

// Function Addons.HorseVehicle.HandleOnSeatDetached
struct AHorseVehicle_HandleOnSeatDetached_Params
{
	class ASTExtraPlayerCharacter*                     Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	ESTExtraVehicleSeatType                            SeatType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SeatIdx;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.HorseVehicle.HandleOnPreExitVehicleFinished
struct AHorseVehicle_HandleOnPreExitVehicleFinished_Params
{
	class ASTExtraBaseCharacter*                       Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	ESTExtraVehicleSeatType                            SeatType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ExitLocation;                                             // (Parm, IsPlainOldData)
};

// Function Addons.HorseVehicle.HandleOnPreExitVehicle
struct AHorseVehicle_HandleOnPreExitVehicle_Params
{
	class ASTExtraBaseCharacter*                       Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	ESTExtraVehicleSeatType                            SeatType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ExitLocation;                                             // (Parm, IsPlainOldData)
};

// Function Addons.HorseVehicle.HandleOnHorseJumped
struct AHorseVehicle_HandleOnHorseJumped_Params
{
	int                                                JumpCount;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.HorseVehicle.HandleOnDelayFinishHandBrake
struct AHorseVehicle_HandleOnDelayFinishHandBrake_Params
{
};

// Function Addons.HorseVehicle.HandleOnDeathDestroy
struct AHorseVehicle_HandleOnDeathDestroy_Params
{
};

// Function Addons.HorseVehicle.HandleOnClientExitVehicle
struct AHorseVehicle_HandleOnClientExitVehicle_Params
{
	class ASTExtraPlayerCharacter*                     Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	ESTExtraVehicleSeatType                            SeatType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.HorseVehicle.HandleOnClientEnterVehicle
struct AHorseVehicle_HandleOnClientEnterVehicle_Params
{
	class ASTExtraPlayerCharacter*                     Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	ESTExtraVehicleSeatType                            SeatType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.HorseVehicle.GetQueryIgnoreActors
struct AHorseVehicle_GetQueryIgnoreActors_Params
{
	TArray<class AActor*>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Addons.HorseVehicle.GetHorseRiders
struct AHorseVehicle_GetHorseRiders_Params
{
	class ASTExtraBaseCharacter*                       OutRider;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class ASTExtraBaseCharacter*                       OutPassenger;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.HorseVehicle.GetHorseMovementComponent
struct AHorseVehicle_GetHorseMovementComponent_Params
{
	class UHorseVehicleMovementComponent*              ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Addons.HorseVehicle.GetHorseDistanceMatchingComponent
struct AHorseVehicle_GetHorseDistanceMatchingComponent_Params
{
	class UHorseDistanceMatchingComponent*             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Addons.HorseVehicle.GetCanDoSpecialJump
struct AHorseVehicle_GetCanDoSpecialJump_Params
{
	int                                                JumpCount;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.HorseVehicle.FeedHorse
struct AHorseVehicle_FeedHorse_Params
{
};

// Function Addons.HorseVehicle.ClearTransformingEffect
struct AHorseVehicle_ClearTransformingEffect_Params
{
};

// Function Addons.HorseVehicle.BPShouldStopNearPrecipice
struct AHorseVehicle_BPShouldStopNearPrecipice_Params
{
	struct FRepPrecipiceInfo                           InPrecipiceInfo;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.HorseVehicle.BpHandlePreExitVehicleFinished
struct AHorseVehicle_BpHandlePreExitVehicleFinished_Params
{
	class ASTExtraBaseCharacter*                       Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	ESTExtraVehicleSeatType                            SeatType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.HorseVehicle.BpHandlePreExitVehicle
struct AHorseVehicle_BpHandlePreExitVehicle_Params
{
	class ASTExtraBaseCharacter*                       Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	ESTExtraVehicleSeatType                            SeatType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<enum EMountFromDirection>              Direction;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.HorseVehicle.BPCanJumpObstacle
struct AHorseVehicle_BPCanJumpObstacle_Params
{
	struct FVector                                     OriginLoc;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FRotator                                    InRotation;                                               // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	TArray<struct FHitResult>                          HitResults;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              HalfHeight;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     InVelocity;                                               // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.HorseVehicle.BPCanAvoidVelocity
struct AHorseVehicle_BPCanAvoidVelocity_Params
{
	struct FVector                                     OriginLoc;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FRotator                                    InRotation;                                               // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	TArray<struct FHitResult>                          HitResults;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              HalfHeight;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     InVelocity;                                               // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.HorseVehicle.AddTransformingEffect
struct AHorseVehicle_AddTransformingEffect_Params
{
	struct FTransformMatConfig                         MatConfig;                                                // (Parm)
};

// Function Addons.HorseWaterSplash.OnEnterWater
struct UHorseWaterSplash_OnEnterWater_Params
{
	class ABioVehicleBase*                             BioVehicle;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<enum EMovementMode>                    PrevMovementMode;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      PreviousCustomMode;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.HorseVehicleMovementComponent.ShouldStopNearPrecipice
struct UHorseVehicleMovementComponent_ShouldStopNearPrecipice_Params
{
	struct FRepPrecipiceInfo                           InPrecipiceInfo;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.HorseVehicleMovementComponent.ShouldOptimizeTick
struct UHorseVehicleMovementComponent_ShouldOptimizeTick_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.HorseVehicleMovementComponent.ServerSuddenStopNearPrecipice
struct UHorseVehicleMovementComponent_ServerSuddenStopNearPrecipice_Params
{
	struct FRepPrecipiceInfo                           InPrecipiceInfo;                                          // (ConstParm, Parm, ReferenceParm)
};

// Function Addons.HorseVehicleMovementComponent.ServerAvoidObstacle
struct UHorseVehicleMovementComponent_ServerAvoidObstacle_Params
{
	struct FCustomVOHelper                             InVO;                                                     // (ConstParm, Parm, ReferenceParm)
};

// Function Addons.HorseVehicleMovementComponent.OnVehicleUpdateInAIWorldVolume
struct UHorseVehicleMovementComponent_OnVehicleUpdateInAIWorldVolume_Params
{
};

// Function Addons.HorseVehicleMovementComponent.OnRecoverOnServer
struct UHorseVehicleMovementComponent_OnRecoverOnServer_Params
{
};

// Function Addons.HorseVehicleMovementComponent.NetMulticast_SuddenStop
struct UHorseVehicleMovementComponent_NetMulticast_SuddenStop_Params
{
};

// Function Addons.HorseVehicleMovementComponent.NetMulticast_DoJumpObstacle
struct UHorseVehicleMovementComponent_NetMulticast_DoJumpObstacle_Params
{
	struct FVector                                     InVelocity;                                               // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
};

// Function Addons.HorseVehicleMovementComponent.DoSuddenStop
struct UHorseVehicleMovementComponent_DoSuddenStop_Params
{
};

// Function Addons.HorseVehicleMovementComponent.ClientUpdatePrecipiceInfo
struct UHorseVehicleMovementComponent_ClientUpdatePrecipiceInfo_Params
{
	TArray<struct FRepPrecipiceInfo>                   InPrecipiceInfos;                                         // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
};

// Function Addons.HoveringVehicle.SetBoosting
struct AHoveringVehicle_SetBoosting_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.HoveringVehicle.OnVehicleRefuelWhenNoFuel
struct AHoveringVehicle_OnVehicleRefuelWhenNoFuel_Params
{
	float                                              PreFuel;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Increment;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.HoveringVehicle.OnVehicleFuelRunOut
struct AHoveringVehicle_OnVehicleFuelRunOut_Params
{
	float                                              InMaxFuel;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.HoveringVehicle.OnSkeletalMeshSleep
struct AHoveringVehicle_OnSkeletalMeshSleep_Params
{
	class UPrimitiveComponent*                         SleepingComponent;                                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.HoveringVehicle.OnSkeletalMeshAwake
struct AHoveringVehicle_OnSkeletalMeshAwake_Params
{
	class UPrimitiveComponent*                         WakingComponent;                                          // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.HoveringVehicle.OnRep_SimulateViewData
struct AHoveringVehicle_OnRep_SimulateViewData_Params
{
};

// Function Addons.HoveringVehicle.OnRep_bHoveringActive
struct AHoveringVehicle_OnRep_bHoveringActive_Params
{
	bool                                               PreHoveringState;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.HoveringVehicle.OnDriverStateChanged
struct AHoveringVehicle_OnDriverStateChanged_Params
{
	class ASTExtraPlayerCharacter*                     Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               isOn;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.HoveringVehicle.OnClientExit
struct AHoveringVehicle_OnClientExit_Params
{
	class ASTExtraPlayerCharacter*                     Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	ESTExtraVehicleSeatType                            SeatType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.HoveringVehicle.OnClientEnter
struct AHoveringVehicle_OnClientEnter_Params
{
	class ASTExtraPlayerCharacter*                     Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	ESTExtraVehicleSeatType                            SeatType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.HoveringVehicle.OnClientChangeSeat
struct AHoveringVehicle_OnClientChangeSeat_Params
{
	class ASTExtraPlayerCharacter*                     Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	ESTExtraVehicleSeatType                            OldSeatType;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	ESTExtraVehicleSeatType                            NewSeatType;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.HoveringVehicle.InitHoveringSpots
struct AHoveringVehicle_InitHoveringSpots_Params
{
};

// Function Addons.HoveringVehicle.HandleVehicleHealthDestroy
struct AHoveringVehicle_HandleVehicleHealthDestroy_Params
{
};

// Function Addons.HoveringVehicle.HandleOnSeatDetached
struct AHoveringVehicle_HandleOnSeatDetached_Params
{
	class ASTExtraPlayerCharacter*                     Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	ESTExtraVehicleSeatType                            SeatType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SeatIdx;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.HoveringVehicle.HandleOnSeatChanged
struct AHoveringVehicle_HandleOnSeatChanged_Params
{
	class ASTExtraPlayerCharacter*                     Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	ESTExtraVehicleSeatType                            LastSeatType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                LastSeatIdx;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	ESTExtraVehicleSeatType                            NewSeatType;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NewSeatIdx;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.HoveringVehicle.HandleOnSeatAttached
struct AHoveringVehicle_HandleOnSeatAttached_Params
{
	class ASTExtraPlayerCharacter*                     Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	ESTExtraVehicleSeatType                            SeatType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SeatIdx;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.HoveringVehicle.HandleOnMeshHit
struct AHoveringVehicle_HandleOnMeshHit_Params
{
	class UPrimitiveComponent*                         HitComponent;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     NormalImpulse;                                            // (Parm, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Addons.HoveringVehicle.GetViewRotation
struct AHoveringVehicle_GetViewRotation_Params
{
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Addons.HoveringVehicle.GetSpotLocation
struct AHoveringVehicle_GetSpotLocation_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Addons.HoveringVehicle.GetHoveringMovement
struct AHoveringVehicle_GetHoveringMovement_Params
{
	class UHoveringVehicleMovementComponent*           ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Addons.HoveringVehicle.GetForwardSpeed
struct AHoveringVehicle_GetForwardSpeed_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.HoveringVehicle.DeactivateHoveringSimulate
struct AHoveringVehicle_DeactivateHoveringSimulate_Params
{
};

// Function Addons.HoveringVehicle.CanActivateHoveringSimulate
struct AHoveringVehicle_CanActivateHoveringSimulate_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.HoveringVehicle.CalcFinalMomentum
struct AHoveringVehicle_CalcFinalMomentum_Params
{
	class UClass*                                      DamageTypeClass;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              BaseMomentun;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.HoveringVehicle.ActivateHoveringSimulate
struct AHoveringVehicle_ActivateHoveringSimulate_Params
{
};

// Function Addons.HoveringMecha.StateToString
struct AHoveringMecha_StateToString_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Addons.HoveringMecha.SetWeaponState
struct AHoveringMecha_SetWeaponState_Params
{
	TEnumAsByte<enum EMechaWeaponState>                InState;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.HoveringMecha.SetEnterVehicleDistance
struct AHoveringMecha_SetEnterVehicleDistance_Params
{
	float                                              InNewEnterDistance;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.HoveringMecha.SetCollisionResponseForBody
struct AHoveringMecha_SetCollisionResponseForBody_Params
{
	TEnumAsByte<enum ECollisionChannel>                Channel;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<enum ECollisionResponse>               NewResponse;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.HoveringMecha.OpenVehicleLogic
struct AHoveringMecha_OpenVehicleLogic_Params
{
};

// Function Addons.HoveringMecha.OnRep_UncombineHelper
struct AHoveringMecha_OnRep_UncombineHelper_Params
{
	struct FUncombineHelper                            OldUncombineHelper;                                       // (Parm)
};

// Function Addons.HoveringMecha.OnRep_MechaStates
struct AHoveringMecha_OnRep_MechaStates_Params
{
	uint32_t                                           OldStates;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.HoveringMecha.OnRep_CombineProcess
struct AHoveringMecha_OnRep_CombineProcess_Params
{
	float                                              OldProcess;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.HoveringMecha.OnInitHoveringSpots
struct AHoveringMecha_OnInitHoveringSpots_Params
{
};

// Function Addons.HoveringMecha.OnBeCachedCPlus
struct AHoveringMecha_OnBeCachedCPlus_Params
{
	class AActor*                                      SourceCatcher;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.HoveringMecha.LeaveState
struct AHoveringMecha_LeaveState_Params
{
	EMechaState                                        State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.HoveringMecha.InterruptState
struct AHoveringMecha_InterruptState_Params
{
	EMechaState                                        State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	EMechaState                                        InterruptBy;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.HoveringMecha.InitHoveringSpots
struct AHoveringMecha_InitHoveringSpots_Params
{
};

// Function Addons.HoveringMecha.HasState
struct AHoveringMecha_HasState_Params
{
	EMechaState                                        State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.HoveringMecha.HasCombined
struct AHoveringMecha_HasCombined_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.HoveringMecha.GetInVehicleLocalPlayer
struct AHoveringMecha_GetInVehicleLocalPlayer_Params
{
	class ASTExtraBaseCharacter*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.HoveringMecha.GetCombineState
struct AHoveringMecha_GetCombineState_Params
{
	TEnumAsByte<enum ECombineState>                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.HoveringMecha.GetCombinedVehicle
struct AHoveringMecha_GetCombinedVehicle_Params
{
	class ASTExtraVehicleBase*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.HoveringMecha.GetCombineComponent
struct AHoveringMecha_GetCombineComponent_Params
{
	class UMechaSmoothAttachComponent*                 ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Addons.HoveringMecha.EnterState
struct AHoveringMecha_EnterState_Params
{
	EMechaState                                        State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.HoveringMecha.EnableNitrogenAccelCameraModifier
struct AHoveringMecha_EnableNitrogenAccelCameraModifier_Params
{
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class ASTExtraPlayerCharacter*                     Passenger;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.HoveringMecha.CloseVehicleLogic
struct AHoveringMecha_CloseVehicleLogic_Params
{
};

// Function Addons.HoveringMecha.AllowState
struct AHoveringMecha_AllowState_Params
{
	EMechaState                                        State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.HoveringVehicleMovementComponent.UpdateSimulate
struct UHoveringVehicleMovementComponent_UpdateSimulate_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.HoveringVehicleMovementComponent.UpdateSimpleHover
struct UHoveringVehicleMovementComponent_UpdateSimpleHover_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.HoveringVehicleMovementComponent.UpdateRotationAutoAdapt
struct UHoveringVehicleMovementComponent_UpdateRotationAutoAdapt_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.HoveringVehicleMovementComponent.UpdatePreCheck
struct UHoveringVehicleMovementComponent_UpdatePreCheck_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.HoveringVehicleMovementComponent.UpdateNitrogenAccel
struct UHoveringVehicleMovementComponent_UpdateNitrogenAccel_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.HoveringVehicleMovementComponent.UpdateMovement2
struct UHoveringVehicleMovementComponent_UpdateMovement2_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.HoveringVehicleMovementComponent.UpdateMovement
struct UHoveringVehicleMovementComponent_UpdateMovement_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.HoveringVehicleMovementComponent.UpdateInput
struct UHoveringVehicleMovementComponent_UpdateInput_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.HoveringVehicleMovementComponent.UpdateHoverSimulation_WeakFeedback
struct UHoveringVehicleMovementComponent_UpdateHoverSimulation_WeakFeedback_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.HoveringVehicleMovementComponent.UpdateHoverSimulation
struct UHoveringVehicleMovementComponent_UpdateHoverSimulation_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.HoveringVehicleMovementComponent.UpdateDrifting
struct UHoveringVehicleMovementComponent_UpdateDrifting_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.HoveringVehicleMovementComponent.UpdateDistToLand
struct UHoveringVehicleMovementComponent_UpdateDistToLand_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.HoveringVehicleMovementComponent.SetThrottleInput
struct UHoveringVehicleMovementComponent_SetThrottleInput_Params
{
	float                                              rate;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.HoveringVehicleMovementComponent.SetSteeringInput
struct UHoveringVehicleMovementComponent_SetSteeringInput_Params
{
	float                                              rate;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.HoveringVehicleMovementComponent.SetNitrogenAccelState
struct UHoveringVehicleMovementComponent_SetNitrogenAccelState_Params
{
	ENitrogenAccelState                                NewState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.HoveringVehicleMovementComponent.ServerUpdatePassiveAccel
struct UHoveringVehicleMovementComponent_ServerUpdatePassiveAccel_Params
{
	struct FNitrogenAccelData                          NAData;                                                   // (ConstParm, Parm, ReferenceParm)
};

// Function Addons.HoveringVehicleMovementComponent.ServerUpdateInput
struct UHoveringVehicleMovementComponent_ServerUpdateInput_Params
{
	float                                              InSteeringInput;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InThrottleInput;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    InCameraRot;                                              // (Parm, IsPlainOldData)
};

// Function Addons.HoveringVehicleMovementComponent.ServerNitrogenAccel
struct UHoveringVehicleMovementComponent_ServerNitrogenAccel_Params
{
};

// Function Addons.HoveringVehicleMovementComponent.Reset
struct UHoveringVehicleMovementComponent_Reset_Params
{
};

// Function Addons.HoveringVehicleMovementComponent.OnRep_NitrogenAccelState
struct UHoveringVehicleMovementComponent_OnRep_NitrogenAccelState_Params
{
	ENitrogenAccelState                                PrevState;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.HoveringVehicleMovementComponent.OnRecoverOnServer
struct UHoveringVehicleMovementComponent_OnRecoverOnServer_Params
{
};

// Function Addons.HoveringVehicleMovementComponent.IsShouldDsControl
struct UHoveringVehicleMovementComponent_IsShouldDsControl_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.HoveringVehicleMovementComponent.IsInNitrogenAccel
struct UHoveringVehicleMovementComponent_IsInNitrogenAccel_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.HoveringVehicleMovementComponent.IsHasPower
struct UHoveringVehicleMovementComponent_IsHasPower_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.HoveringVehicleMovementComponent.Internal_DoNitrogenAccel
struct UHoveringVehicleMovementComponent_Internal_DoNitrogenAccel_Params
{
};

// Function Addons.HoveringVehicleMovementComponent.HandleActorHit
struct UHoveringVehicleMovementComponent_HandleActorHit_Params
{
	class AActor*                                      SelfActor;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NormalImpulse;                                            // (Parm, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Addons.HoveringVehicleMovementComponent.ForceCorrectClientNitroAccelState
struct UHoveringVehicleMovementComponent_ForceCorrectClientNitroAccelState_Params
{
	ENitrogenAccelState                                NewState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              CD;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.HoveringVehicleMovementComponent.ClientUpdateDistToLand
struct UHoveringVehicleMovementComponent_ClientUpdateDistToLand_Params
{
	struct FVector                                     TargetLoc;                                                // (Parm, IsPlainOldData)
};

// Function Addons.HoveringVehicleMovementComponent.ClientTryNitrogenAccel
struct UHoveringVehicleMovementComponent_ClientTryNitrogenAccel_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.HoveringVehicleMovementComponent.ClientAddForceAfterContinuousHit
struct UHoveringVehicleMovementComponent_ClientAddForceAfterContinuousHit_Params
{
	struct FVector                                     Force;                                                    // (Parm, IsPlainOldData)
};

// Function Addons.HoveringVehicleMovementComponent.CanPassiveNitrogenAccel
struct UHoveringVehicleMovementComponent_CanPassiveNitrogenAccel_Params
{
	struct FString                                     FailedCode;                                               // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.HoveringVehicleMovementComponent.CalculateHoverSimulation
struct UHoveringVehicleMovementComponent_CalculateHoverSimulation_Params
{
	struct FHoveringSimulateData                       SimData;                                                  // (Parm, OutParm)
	struct FVector                                     SpotWorldLoc;                                             // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     OwnerLoc;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.LadderMovementComponent.StartPhaseMoving
struct ULadderMovementComponent_StartPhaseMoving_Params
{
};

// Function Addons.LadderMovementComponent.ShowDebugInformation
struct ULadderMovementComponent_ShowDebugInformation_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.LadderMovementComponent.ServerMove
struct ULadderMovementComponent_ServerMove_Params
{
	struct FLadderMoveData                             LadderMoveData;                                           // (Parm)
	int                                                MoveDirection;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                EnterOrLeave;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.LadderMovementComponent.ServerCheckClientError
struct ULadderMovementComponent_ServerCheckClientError_Params
{
	struct FLadderMoveData                             LadderMoveData;                                           // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.LadderMovementComponent.RequestCurrentLadderState
struct ULadderMovementComponent_RequestCurrentLadderState_Params
{
};

// Function Addons.LadderMovementComponent.ReceiveExitLadder
struct ULadderMovementComponent_ReceiveExitLadder_Params
{
};

// Function Addons.LadderMovementComponent.ReceiveEnterLadder
struct ULadderMovementComponent_ReceiveEnterLadder_Params
{
};

// Function Addons.LadderMovementComponent.PushBackSimAction
struct ULadderMovementComponent_PushBackSimAction_Params
{
	struct FLadderMoveData                             InData;                                                   // (Parm)
};

// Function Addons.LadderMovementComponent.PopFirstSimAction
struct ULadderMovementComponent_PopFirstSimAction_Params
{
};

// Function Addons.LadderMovementComponent.OnRep_NetLadderMoveState
struct ULadderMovementComponent_OnRep_NetLadderMoveState_Params
{
};

// Function Addons.LadderMovementComponent.OnCharacterExitLadder
struct ULadderMovementComponent_OnCharacterExitLadder_Params
{
};

// Function Addons.LadderMovementComponent.OnCharacterEnterLadder
struct ULadderMovementComponent_OnCharacterEnterLadder_Params
{
	class ALadderActor*                                Ladder;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.LadderMovementComponent.LadderMoveInput
struct ULadderMovementComponent_LadderMoveInput_Params
{
	float                                              rate;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.LadderMovementComponent.IsLeaving
struct ULadderMovementComponent_IsLeaving_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.LadderMovementComponent.IsEntering
struct ULadderMovementComponent_IsEntering_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.LadderMovementComponent.InitLadderParams
struct ULadderMovementComponent_InitLadderParams_Params
{
	class ALadderActor*                                Ladder;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.LadderMovementComponent.HandleJump
struct ULadderMovementComponent_HandleJump_Params
{
};

// Function Addons.LadderMovementComponent.HandleInput
struct ULadderMovementComponent_HandleInput_Params
{
};

// Function Addons.LadderMovementComponent.GetStateName
struct ULadderMovementComponent_GetStateName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Addons.LadderMovementComponent.GetNextMoveData
struct ULadderMovementComponent_GetNextMoveData_Params
{
	struct FLadderMoveData                             Cur;                                                      // (Parm)
	int8_t                                             movedir;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLadderMoveData                             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Addons.LadderMovementComponent.GetLadderAnimSequence
struct ULadderMovementComponent_GetLadderAnimSequence_Params
{
	class UAnimSequence*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.LadderMovementComponent.GatherCurrentLadderState
struct ULadderMovementComponent_GatherCurrentLadderState_Params
{
};

// Function Addons.LadderMovementComponent.ExitLadder
struct ULadderMovementComponent_ExitLadder_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.LadderMovementComponent.EnterLadder
struct ULadderMovementComponent_EnterLadder_Params
{
	class ALadderActor*                                Ladder;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bTop;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.LadderMovementComponent.EndPhaseMoving
struct ULadderMovementComponent_EndPhaseMoving_Params
{
};

// Function Addons.LadderMovementComponent.EnableCharacterMovement
struct ULadderMovementComponent_EnableCharacterMovement_Params
{
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.LadderMovementComponent.ClimbUpOneStepInternal
struct ULadderMovementComponent_ClimbUpOneStepInternal_Params
{
};

// Function Addons.LadderMovementComponent.ClimbDownOneStepInternal
struct ULadderMovementComponent_ClimbDownOneStepInternal_Params
{
};

// Function Addons.LadderMovementComponent.CheckValidPositionOnLadder
struct ULadderMovementComponent_CheckValidPositionOnLadder_Params
{
	class AActor*                                      Ladder;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                StepNum;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.LadderMovementComponent.CheckValidPosition
struct ULadderMovementComponent_CheckValidPosition_Params
{
	struct FVector                                     Pos;                                                      // (Parm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.LadderMovementComponent.CheckEnterOrExitLadder
struct ULadderMovementComponent_CheckEnterOrExitLadder_Params
{
};

// Function Addons.LadderMovementComponent.CheckAutoEnterLadder
struct ULadderMovementComponent_CheckAutoEnterLadder_Params
{
};

// Function Addons.LadderMovementComponent.CatchUp
struct ULadderMovementComponent_CatchUp_Params
{
	struct FLadderMoveData                             LadderMoveData;                                           // (Parm)
};

// Function Addons.LadderMovementComponent.CalcLocationOnLadder
struct ULadderMovementComponent_CalcLocationOnLadder_Params
{
	class AActor*                                      Ladder;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                StepNum;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Addons.LadderMovementComponent.BuildActionQueue
struct ULadderMovementComponent_BuildActionQueue_Params
{
	struct FLadderMoveData                             Target;                                                   // (Parm)
};

// Function Addons.LadderMovementComponent.BindPlayerMoveInput
struct ULadderMovementComponent_BindPlayerMoveInput_Params
{
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.LadderMovementComponent.AdjustClient
struct ULadderMovementComponent_AdjustClient_Params
{
	struct FLadderMoveData                             LadderMoveData;                                           // (Parm)
};

// Function Addons.LifterControlMoveObj.Setup
struct ULifterControlMoveObj_Setup_Params
{
	int                                                InVelocityZ;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                InMinZ;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                InMaxZ;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.LifterControlMoveObj.SetMoveState
struct ULifterControlMoveObj_SetMoveState_Params
{
	int                                                InMoveState;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.LifterControlMoveObj.Leave
struct ULifterControlMoveObj_Leave_Params
{
};

// Function Addons.LifterControlMoveObj.IsMovingUp
struct ULifterControlMoveObj_IsMovingUp_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.LifterControlMoveObj.Enter
struct ULifterControlMoveObj_Enter_Params
{
};

// Function Addons.LifterControlMoveObj.CalculateVelocity
struct ULifterControlMoveObj_CalculateVelocity_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.MainCharacterBearerUnit.OnWaitForDoMerge
struct UMainCharacterBearerUnit_OnWaitForDoMerge_Params
{
	int                                                RequestID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.MainCharacterBearerUnit.OnAvatarMeshMaterialApplyed
struct UMainCharacterBearerUnit_OnAvatarMeshMaterialApplyed_Params
{
	class UMeshComponent*                              MeshComponent;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Addons.MainCharacterBearerUnit.OnAvatarMeshBeforeLoaded
struct UMainCharacterBearerUnit_OnAvatarMeshBeforeLoaded_Params
{
};

// Function Addons.MainCharacterBearerUnit.OnAvatarAllMeshLoaded
struct UMainCharacterBearerUnit_OnAvatarAllMeshLoaded_Params
{
};

// Function Addons.MainWeaponBearerUnit.OnWeaponAvatarLoaded
struct UMainWeaponBearerUnit_OnWeaponAvatarLoaded_Params
{
	int                                                Val;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FItemDefineID                               ID;                                                       // (Parm)
};

// Function Addons.MainWeaponBearerUnit.OnWeaponAttachAvatarLoaded
struct UMainWeaponBearerUnit_OnWeaponAttachAvatarLoaded_Params
{
	int                                                Val;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FItemDefineID                               ID;                                                       // (Parm)
};

// Function Addons.MechaAimCircle.RefreshActorLocationFromBlackBoard
struct AMechaAimCircle_RefreshActorLocationFromBlackBoard_Params
{
};

// Function Addons.MechaAimCircle.HasCharacterInCircle
struct AMechaAimCircle_HasCharacterInCircle_Params
{
	class UObject*                                     ContextObject;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Center;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              Raius;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Height;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.MechaAimCircle.GetBlackBoardScale
struct AMechaAimCircle_GetBlackBoardScale_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.MechaAimCircle.CreateNewDecalComponent
struct AMechaAimCircle_CreateNewDecalComponent_Params
{
	struct FName                                       InName;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              InSize;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInstance*                           InMaterial;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InExistsTime;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UCustomDecalComponent*                       ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Addons.MechaAnimInstanceBase.TryUncombineWithMecha
struct UMechaAnimInstanceBase_TryUncombineWithMecha_Params
{
};

// Function Addons.MechaAnimInstanceBase.TryCombineWithMecha
struct UMechaAnimInstanceBase_TryCombineWithMecha_Params
{
	bool                                               bShouldPlayAnimation;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.MechaAnimInstanceBase.StopMechaMontage
struct UMechaAnimInstanceBase_StopMechaMontage_Params
{
	struct FName                                       InGroupName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              BlendOutTime;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.MechaAnimInstanceBase.ResetMechaGlidingToFalling
struct UMechaAnimInstanceBase_ResetMechaGlidingToFalling_Params
{
};

// Function Addons.MechaAnimInstanceBase.PlayMechaMontage
struct UMechaAnimInstanceBase_PlayMechaMontage_Params
{
	class UAnimMontage*                                Montage;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              PlayRate;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.MechaAnimInstanceBase.OnMechaStartMoving
struct UMechaAnimInstanceBase_OnMechaStartMoving_Params
{
};

// Function Addons.MechaAnimInstanceBase.OnMechaStartFire
struct UMechaAnimInstanceBase_OnMechaStartFire_Params
{
};

// Function Addons.MechaAnimInstanceBase.OnMechaReloadFinish
struct UMechaAnimInstanceBase_OnMechaReloadFinish_Params
{
};

// Function Addons.MechaAnimInstanceBase.OnMechaHit
struct UMechaAnimInstanceBase_OnMechaHit_Params
{
	struct FVector                                     HitDir;                                                   // (Parm, IsPlainOldData)
	bool                                               bHugeHit;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.MechaAnimInstanceBase.MechaEnterFlying
struct UMechaAnimInstanceBase_MechaEnterFlying_Params
{
};

// Function Addons.MechaAnimInstanceBase.HandleOnMechaGlidingToFalling
struct UMechaAnimInstanceBase_HandleOnMechaGlidingToFalling_Params
{
};

// Function Addons.MechaAnimInstanceBase.HandleOnMechaAirGliding
struct UMechaAnimInstanceBase_HandleOnMechaAirGliding_Params
{
	bool                                               bAirGliding;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.MechaAnimInstanceBase.GetLuaDebugString
struct UMechaAnimInstanceBase_GetLuaDebugString_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Addons.MechaAnimInstanceBase.GetActivedMontageNames
struct UMechaAnimInstanceBase_GetActivedMontageNames_Params
{
	TArray<struct FString>                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Addons.MechaAnimInstanceBase.CanLockFoot
struct UMechaAnimInstanceBase_CanLockFoot_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.MechaDamageComponent.RepulseVehicle
struct UMechaDamageComponent_RepulseVehicle_Params
{
	class ASTExtraVehicleBase*                         OtherVehicle;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  InHit;                                                    // (Parm, OutParm, IsPlainOldData)
};

// Function Addons.MechaDamageComponent.RepulseCharacter
struct UMechaDamageComponent_RepulseCharacter_Params
{
	class ASTExtraBaseCharacter*                       OtherCharacter;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  InHit;                                                    // (Parm, OutParm, IsPlainOldData)
};

// Function Addons.MechaDamageComponent.RegisterCollisionShapes
struct UMechaDamageComponent_RegisterCollisionShapes_Params
{
};

// Function Addons.MechaDamageComponent.MulticastRPC_RepulseVehicle
struct UMechaDamageComponent_MulticastRPC_RepulseVehicle_Params
{
	class ASTExtraVehicleBase*                         OtherVehicle;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Vel;                                                      // (Parm, IsPlainOldData)
	struct FVector                                     HitPoint;                                                 // (Parm, IsPlainOldData)
};

// Function Addons.MechaDamageComponent.MulticastRPC_RepulseCharacter
struct UMechaDamageComponent_MulticastRPC_RepulseCharacter_Params
{
	class ASTExtraBaseCharacter*                       OtherCharacter;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Vel;                                                      // (Parm, IsPlainOldData)
	struct FVector                                     HitPoint;                                                 // (Parm, IsPlainOldData)
};

// Function Addons.MechaDamageComponent.DetectBlockedPawn
struct UMechaDamageComponent_DetectBlockedPawn_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.MechaDamageComponent.DealWithVehicleHit
struct UMechaDamageComponent_DealWithVehicleHit_Params
{
	class UPrimitiveComponent*                         SelfComp;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FHitResult                                  InHit;                                                    // (Parm, OutParm, IsPlainOldData)
};

// Function Addons.MechaDamageComponent.DealWithCharacterHit
struct UMechaDamageComponent_DealWithCharacterHit_Params
{
	class UPrimitiveComponent*                         SelfComp;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FHitResult                                  InHit;                                                    // (Parm, OutParm, IsPlainOldData)
};

// Function Addons.MechaMovementComponent.UpdateDistanceToLand
struct UMechaMovementComponent_UpdateDistanceToLand_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.MechaMovementComponent.ShouldOptimizeTick
struct UMechaMovementComponent_ShouldOptimizeTick_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.MechaMovementComponent.HasContinuousMove
struct UMechaMovementComponent_HasContinuousMove_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.MechaMovementComponent.DrawDebugInfo
struct UMechaMovementComponent_DrawDebugInfo_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.MechaMovementComponent.ApplyContinuousMove
struct UMechaMovementComponent_ApplyContinuousMove_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Addons.MechaSeatComponent.UpdateMechaSeatGUI
struct UMechaSeatComponent_UpdateMechaSeatGUI_Params
{
};

// Function Addons.MechaSeatComponent.UncombineVehicleSeats
struct UMechaSeatComponent_UncombineVehicleSeats_Params
{
	class ASTExtraVehicleBase*                         OtherVehicle;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.MechaSeatComponent.HandleUncombined
struct UMechaSeatComponent_HandleUncombined_Params
{
	class ASTExtraVehicleBase*                         OtherVehicle;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.MechaSeatComponent.HandleCombined
struct UMechaSeatComponent_HandleCombined_Params
{
	class ASTExtraVehicleBase*                         OtherVehicle;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.MechaSeatComponent.GetVehicleUserComponentBase
struct UMechaSeatComponent_GetVehicleUserComponentBase_Params
{
	class ASTExtraBaseCharacter*                       SeatOccupier;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UVehicleUserComponentBase*                   ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Addons.MechaSeatComponent.CombineVehicleSeats
struct UMechaSeatComponent_CombineVehicleSeats_Params
{
	class ASTExtraVehicleBase*                         OtherVehicle;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.MechaCombineInterface.GetCombineState
struct UMechaCombineInterface_GetCombineState_Params
{
	TEnumAsByte<enum ECombineState>                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.MechaCombineInterface.GetCombinedVehicle
struct UMechaCombineInterface_GetCombinedVehicle_Params
{
	class ASTExtraVehicleBase*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.MechaCombineInterface.GetCombineComponent
struct UMechaCombineInterface_GetCombineComponent_Params
{
	class UMechaSmoothAttachComponent*                 ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Addons.MechaSmoothAttachComponent.TryUnCombine
struct UMechaSmoothAttachComponent_TryUnCombine_Params
{
};

// Function Addons.MechaSmoothAttachComponent.TryCombine
struct UMechaSmoothAttachComponent_TryCombine_Params
{
	class ASTExtraVehicleBase*                         OtherVehicle;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.MechaSmoothAttachComponent.ServerTryUnCombine
struct UMechaSmoothAttachComponent_ServerTryUnCombine_Params
{
};

// Function Addons.MechaSmoothAttachComponent.ServerTryCombine
struct UMechaSmoothAttachComponent_ServerTryCombine_Params
{
	class ASTExtraVehicleBase*                         OtherVehicle;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bRequested;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.MechaSmoothAttachComponent.ProcessUncombine
struct UMechaSmoothAttachComponent_ProcessUncombine_Params
{
	class ASTExtraVehicleBase*                         OtherVehicle;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.MechaSmoothAttachComponent.ProcessCombine
struct UMechaSmoothAttachComponent_ProcessCombine_Params
{
	class ASTExtraVehicleBase*                         OtherVehicle;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.MechaSmoothAttachComponent.OnUncombinedFinished
struct UMechaSmoothAttachComponent_OnUncombinedFinished_Params
{
};

// Function Addons.MechaSmoothAttachComponent.OnUncombined
struct UMechaSmoothAttachComponent_OnUncombined_Params
{
	class ASTExtraVehicleBase*                         OldCombinedMecha;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.MechaSmoothAttachComponent.OnRep_CombineState
struct UMechaSmoothAttachComponent_OnRep_CombineState_Params
{
	TEnumAsByte<enum ECombineState>                    OldCombineState;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.MechaSmoothAttachComponent.OnRep_CombinedOtherMecha
struct UMechaSmoothAttachComponent_OnRep_CombinedOtherMecha_Params
{
	class ASTExtraVehicleBase*                         OldCombinedVehicle;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.MechaSmoothAttachComponent.OnRep_bCanCombine
struct UMechaSmoothAttachComponent_OnRep_bCanCombine_Params
{
};

// Function Addons.MechaSmoothAttachComponent.OnPreAttachTo
struct UMechaSmoothAttachComponent_OnPreAttachTo_Params
{
	class ASTExtraVehicleBase*                         AttachedVehicle;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.MechaSmoothAttachComponent.OnCombinedFinished
struct UMechaSmoothAttachComponent_OnCombinedFinished_Params
{
};

// Function Addons.MechaSmoothAttachComponent.OnCombined
struct UMechaSmoothAttachComponent_OnCombined_Params
{
	class ASTExtraVehicleBase*                         OtherVehicle;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.MechaSmoothAttachComponent.OnAttachedTo
struct UMechaSmoothAttachComponent_OnAttachedTo_Params
{
	class ASTExtraVehicleBase*                         AttachedVehicle;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.MechaSmoothAttachComponent.MulticastSetRequestedCombine
struct UMechaSmoothAttachComponent_MulticastSetRequestedCombine_Params
{
	bool                                               bRequested;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.MechaSmoothAttachComponent.LuaCheckUncombinePosition
struct UMechaSmoothAttachComponent_LuaCheckUncombinePosition_Params
{
	struct FVector                                     InPosition;                                               // (Parm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.MechaSmoothAttachComponent.K2_ProcessUncombine
struct UMechaSmoothAttachComponent_K2_ProcessUncombine_Params
{
	class ASTExtraVehicleBase*                         OtherVehicle;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.MechaSmoothAttachComponent.K2_ProcessCombine
struct UMechaSmoothAttachComponent_K2_ProcessCombine_Params
{
	class ASTExtraVehicleBase*                         OtherVehicle;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.MechaSmoothAttachComponent.K2_OnRep_CombineState
struct UMechaSmoothAttachComponent_K2_OnRep_CombineState_Params
{
	TEnumAsByte<enum ECombineState>                    OldCombineState;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.MechaSmoothAttachComponent.K2_OnRep_CombinedOtherMecha
struct UMechaSmoothAttachComponent_K2_OnRep_CombinedOtherMecha_Params
{
	class ASTExtraVehicleBase*                         OldCombinedVehicle;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.MechaSmoothAttachComponent.K2_OnRep_bCanCombine
struct UMechaSmoothAttachComponent_K2_OnRep_bCanCombine_Params
{
};

// Function Addons.MechaSmoothAttachComponent.HasCombined
struct UMechaSmoothAttachComponent_HasCombined_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.MechaSmoothAttachComponent.HandleOnFatalUncombineError
struct UMechaSmoothAttachComponent_HandleOnFatalUncombineError_Params
{
	class ASTExtraVehicleBase*                         HighPriorityVehicle;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class ASTExtraVehicleBase*                         OtherVehicle;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.MechaSmoothAttachComponent.HandleOnFatalCombineError
struct UMechaSmoothAttachComponent_HandleOnFatalCombineError_Params
{
	class ASTExtraVehicleBase*                         HighPriorityVehicle;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class ASTExtraVehicleBase*                         OtherVehicle;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.MechaSmoothAttachComponent.GetNearbyValidCombineVehicles
struct UMechaSmoothAttachComponent_GetNearbyValidCombineVehicles_Params
{
	TArray<class ASTExtraVehicleBase*>                 ValidCombineVehicles;                                     // (Parm, OutParm, ZeroConstructor)
};

// Function Addons.MechaSmoothAttachComponent.GetLuaDebugString
struct UMechaSmoothAttachComponent_GetLuaDebugString_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Addons.MechaSmoothAttachComponent.FindValidateUncombinePosition
struct UMechaSmoothAttachComponent_FindValidateUncombinePosition_Params
{
	struct FVector                                     StartLocation;                                            // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     ForwardDirection;                                         // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     BoxExtent;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Addons.MechaSmoothAttachComponent.ExitFreeCamera
struct UMechaSmoothAttachComponent_ExitFreeCamera_Params
{
};

// Function Addons.MechaSmoothAttachComponent.ClientDrawDebugString
struct UMechaSmoothAttachComponent_ClientDrawDebugString_Params
{
	struct FString                                     DebugString;                                              // (Parm, ZeroConstructor)
	struct FColor                                      Color;                                                    // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.MechaSmoothAttachComponent.ClientDrawDebugCapsule
struct UMechaSmoothAttachComponent_ClientDrawDebugCapsule_Params
{
	struct FVector                                     Center;                                                   // (Parm, IsPlainOldData)
	float                                              HalfHeight;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FColor                                      Color;                                                    // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Thickness;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.MechaSmoothAttachComponent.ClientDrawDebugBox
struct UMechaSmoothAttachComponent_ClientDrawDebugBox_Params
{
	struct FVector                                     Center;                                                   // (Parm, IsPlainOldData)
	struct FVector                                     Extent;                                                   // (Parm, IsPlainOldData)
	struct FQuat                                       Quat;                                                     // (Parm, IsPlainOldData)
	struct FColor                                      Color;                                                    // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Thickness;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.MechaSmoothAttachComponent.ClientDrawDebugArrow
struct UMechaSmoothAttachComponent_ClientDrawDebugArrow_Params
{
	struct FVector                                     from;                                                     // (Parm, IsPlainOldData)
	struct FVector                                     to;                                                       // (Parm, IsPlainOldData)
	struct FColor                                      Color;                                                    // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Thickness;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.MechaSmoothAttachComponent.CanUnCombineWith
struct UMechaSmoothAttachComponent_CanUnCombineWith_Params
{
	class ASTExtraVehicleBase*                         OtherVehicle;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.MechaSmoothAttachComponent.CanCombineWith
struct UMechaSmoothAttachComponent_CanCombineWith_Params
{
	class ASTExtraVehicleBase*                         OtherVehicle;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.MechaSpringArmComponent.HandleUncombined
struct UMechaSpringArmComponent_HandleUncombined_Params
{
};

// Function Addons.MechaSpringArmComponent.HandleCombined
struct UMechaSpringArmComponent_HandleCombined_Params
{
};

// Function Addons.MechaUtils.GetMeshInfo
struct UMechaUtils_GetMeshInfo_Params
{
	class USkeletalMeshComponent*                      InSkeletalMesh;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Addons.MechaVehicle.UncombineHealthAndFuel
struct AMechaVehicle_UncombineHealthAndFuel_Params
{
	class ASTExtraVehicleBase*                         OtherHover;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.MechaVehicle.StopMechaMontage
struct AMechaVehicle_StopMechaMontage_Params
{
	float                                              BlendOutTime;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Montage;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.MechaVehicle.StateToString
struct AMechaVehicle_StateToString_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Addons.MechaVehicle.StartAirGliding
struct AMechaVehicle_StartAirGliding_Params
{
};

// Function Addons.MechaVehicle.ShouldApplyVehicleImpulse
struct AMechaVehicle_ShouldApplyVehicleImpulse_Params
{
	class ASTExtraVehicleBase*                         OtherVehicle;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         MyPrimComp;                                               // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     NormalImpulse;                                            // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.MechaVehicle.SetWeaponState
struct AMechaVehicle_SetWeaponState_Params
{
	TEnumAsByte<enum EMechaWeaponState>                InState;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.MechaVehicle.ServerUpdateControlRotation
struct AMechaVehicle_ServerUpdateControlRotation_Params
{
	struct FRotator                                    ControlRotation;                                          // (Parm, IsPlainOldData)
};

// Function Addons.MechaVehicle.ProcessAirGlidingLanded
struct AMechaVehicle_ProcessAirGlidingLanded_Params
{
};

// Function Addons.MechaVehicle.PlayMechaMontage
struct AMechaVehicle_PlayMechaMontage_Params
{
	class UAnimMontage*                                Montage;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.MechaVehicle.OnRep_NetControlRotation
struct AMechaVehicle_OnRep_NetControlRotation_Params
{
};

// Function Addons.MechaVehicle.OnRep_MechaStates
struct AMechaVehicle_OnRep_MechaStates_Params
{
	uint32_t                                           OldStates;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.MechaVehicle.OnRep_bAirGliding
struct AMechaVehicle_OnRep_bAirGliding_Params
{
};

// Function Addons.MechaVehicle.OnPlayerExitMecha
struct AMechaVehicle_OnPlayerExitMecha_Params
{
	class ASTExtraPlayerCharacter*                     Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	ESTExtraVehicleSeatType                            SeatType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.MechaVehicle.OnPlayerEnterMecha
struct AMechaVehicle_OnPlayerEnterMecha_Params
{
	class ASTExtraPlayerCharacter*                     Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	ESTExtraVehicleSeatType                            SeatType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.MechaVehicle.OnDriverLeaveMecha
struct AMechaVehicle_OnDriverLeaveMecha_Params
{
	class ASTExtraCharacter*                           LeaveDriver;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.MechaVehicle.OnDriverEnterMecha
struct AMechaVehicle_OnDriverEnterMecha_Params
{
	class ASTExtraCharacter*                           EnterDriver;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.MechaVehicle.OnDeadMechaFallingToGrounded
struct AMechaVehicle_OnDeadMechaFallingToGrounded_Params
{
};

// Function Addons.MechaVehicle.OnBeCachedCPlus
struct AMechaVehicle_OnBeCachedCPlus_Params
{
	class AActor*                                      SourceCatcher;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.MechaVehicle.MulticastRPC_AddContinuousMove
struct AMechaVehicle_MulticastRPC_AddContinuousMove_Params
{
	class UCurveFloat*                                 MoveCurve;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Speed;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     movedir;                                                  // (Parm, IsPlainOldData)
	float                                              Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.MechaVehicle.MulticastDrawDebugBox
struct AMechaVehicle_MulticastDrawDebugBox_Params
{
	struct FVector                                     Center;                                                   // (Parm, IsPlainOldData)
	struct FVector                                     Extent;                                                   // (Parm, IsPlainOldData)
	struct FQuat                                       Rotation;                                                 // (Parm, IsPlainOldData)
	struct FColor                                      Color;                                                    // (Parm, IsPlainOldData)
	float                                              LifeTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Thickness;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAutonomousOnly;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.MechaVehicle.MulticastDrawDebugArrow
struct AMechaVehicle_MulticastDrawDebugArrow_Params
{
	struct FVector                                     LineStart;                                                // (Parm, IsPlainOldData)
	struct FVector                                     LineEnd;                                                  // (Parm, IsPlainOldData)
	float                                              ArrowSize;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FColor                                      Color;                                                    // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Thickness;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAutonomousOnly;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.MechaVehicle.MulticastDoJump
struct AMechaVehicle_MulticastDoJump_Params
{
};

// Function Addons.MechaVehicle.LeaveState
struct AMechaVehicle_LeaveState_Params
{
	EMechaState                                        State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.MechaVehicle.InterruptState
struct AMechaVehicle_InterruptState_Params
{
	EMechaState                                        State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	EMechaState                                        InterruptBy;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.MechaVehicle.HasState
struct AMechaVehicle_HasState_Params
{
	EMechaState                                        State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.MechaVehicle.HasCombined
struct AMechaVehicle_HasCombined_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.MechaVehicle.HandleOnDestroyBy
struct AMechaVehicle_HandleOnDestroyBy_Params
{
	float                                              DamageAmount;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent                                DamageEvent;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	class AController*                                 EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.MechaVehicle.GetMechaMovement
struct AMechaVehicle_GetMechaMovement_Params
{
	class UMechaMovementComponent*                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Addons.MechaVehicle.GetInVehicleLocalPlayer
struct AMechaVehicle_GetInVehicleLocalPlayer_Params
{
	class ASTExtraBaseCharacter*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.MechaVehicle.GetHeight
struct AMechaVehicle_GetHeight_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.MechaVehicle.GetCombineState
struct AMechaVehicle_GetCombineState_Params
{
	TEnumAsByte<enum ECombineState>                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.MechaVehicle.GetCombinedVehicle
struct AMechaVehicle_GetCombinedVehicle_Params
{
	class ASTExtraVehicleBase*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.MechaVehicle.GetCombineComponent
struct AMechaVehicle_GetCombineComponent_Params
{
	class UMechaSmoothAttachComponent*                 ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Addons.MechaVehicle.EnterState
struct AMechaVehicle_EnterState_Params
{
	EMechaState                                        State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.MechaVehicle.EndAirGliding
struct AMechaVehicle_EndAirGliding_Params
{
};

// Function Addons.MechaVehicle.EnableMechaResolvePenetration
struct AMechaVehicle_EnableMechaResolvePenetration_Params
{
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.MechaVehicle.DrawDebugInfo
struct AMechaVehicle_DrawDebugInfo_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.MechaVehicle.DoJump
struct AMechaVehicle_DoJump_Params
{
};

// Function Addons.MechaVehicle.CombineHealthAndFuel
struct AMechaVehicle_CombineHealthAndFuel_Params
{
	class ASTExtraVehicleBase*                         OtherHover;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.MechaVehicle.CheckDriverState
struct AMechaVehicle_CheckDriverState_Params
{
};

// Function Addons.MechaVehicle.CanHitVehicle
struct AMechaVehicle_CanHitVehicle_Params
{
	class ASTExtraVehicleBase*                         HitVehicle;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  InHit;                                                    // (Parm, OutParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.MechaVehicle.CanHitCharacter
struct AMechaVehicle_CanHitCharacter_Params
{
	class ASTExtraBaseCharacter*                       HitCharacter;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  InHit;                                                    // (Parm, OutParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.MechaVehicle.CacheMaxHealthAndFuel
struct AMechaVehicle_CacheMaxHealthAndFuel_Params
{
};

// Function Addons.MechaVehicle.ApplyVehicleImpulse
struct AMechaVehicle_ApplyVehicleImpulse_Params
{
	struct FVector                                     ApplyImpulse;                                             // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               bVelocityChange;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.MechaVehicle.AllowState
struct AMechaVehicle_AllowState_Params
{
	EMechaState                                        State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.MechaVehicle.AddContinuousSpeedMove
struct AMechaVehicle_AddContinuousSpeedMove_Params
{
	float                                              Speed;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     movedir;                                                  // (Parm, IsPlainOldData)
	float                                              Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.MechaVehicle.AddContinuousCurveMove
struct AMechaVehicle_AddContinuousCurveMove_Params
{
	class UCurveFloat*                                 MoveCurve;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     movedir;                                                  // (Parm, IsPlainOldData)
	float                                              Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.MechaWeaponSeekAndLockUI.SetCompassMat
struct UMechaWeaponSeekAndLockUI_SetCompassMat_Params
{
	class UMaterialInstanceDynamic*                    InCompassMat;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.MechaWeaponSeekAndLockUI.IsTextNotEqualTo
struct UMechaWeaponSeekAndLockUI_IsTextNotEqualTo_Params
{
	struct FText                                       SelfValue;                                                // (Parm)
	struct FText                                       OtherText;                                                // (Parm)
	bool                                               ReverseResult;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.MechaWeaponSeekAndLockUI.IsStrNotEqualToText
struct UMechaWeaponSeekAndLockUI_IsStrNotEqualToText_Params
{
	struct FString                                     InValue;                                                  // (Parm, ZeroConstructor)
	struct FText                                       InText;                                                   // (Parm)
	bool                                               ReverseResult;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.MechaWeaponSeekAndLockUI.IsModToZero
struct UMechaWeaponSeekAndLockUI_IsModToZero_Params
{
	int                                                InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ModValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.MechaWeaponSeekAndLockUI.IsIntNotEqualToText
struct UMechaWeaponSeekAndLockUI_IsIntNotEqualToText_Params
{
	int                                                InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       InText;                                                   // (Parm)
	bool                                               ReverseResult;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.MechaWeaponSeekAndLockUI.InitWeapon
struct UMechaWeaponSeekAndLockUI_InitWeapon_Params
{
	class AActor*                                      OwnerWeapon;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.MechaWeaponSeekAndLockUI.HandleChangeTraceTarget
struct UMechaWeaponSeekAndLockUI_HandleChangeTraceTarget_Params
{
	struct FHitResult                                  HitInfo;                                                  // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Addons.MechaWeaponSeekAndLockUI.HandleChangeSeekAndLockStageTip
struct UMechaWeaponSeekAndLockUI_HandleChangeSeekAndLockStageTip_Params
{
	struct FString                                     Tip;                                                      // (Parm, ZeroConstructor)
};

// Function Addons.MechaWeaponSeekAndLockUI.GetPlayerLookRotation
struct UMechaWeaponSeekAndLockUI_GetPlayerLookRotation_Params
{
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Addons.MechaWeaponSeekAndLockUI.ExtraForGuidedMissileRenderStyle
struct UMechaWeaponSeekAndLockUI_ExtraForGuidedMissileRenderStyle_Params
{
	bool                                               bSet;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.MechaWeaponSeekAndLockUI.BPChangeTraceTargetDis
struct UMechaWeaponSeekAndLockUI_BPChangeTraceTargetDis_Params
{
	float                                              Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.MechaWeaponSeekAndLockUI.BPChangeSeekAndLockStageTip
struct UMechaWeaponSeekAndLockUI_BPChangeSeekAndLockStageTip_Params
{
	struct FString                                     Tip;                                                      // (Parm, ZeroConstructor)
};

// Function Addons.MechaWeaponSeekAndLockUI.AfterShow
struct UMechaWeaponSeekAndLockUI_AfterShow_Params
{
};

// Function Addons.MechaWeaponSeekAndLockUI.AfterHide
struct UMechaWeaponSeekAndLockUI_AfterHide_Params
{
};

// Function Addons.MonsterRaptorAnimInstance.OnResetPlayedIdleIndex
struct UMonsterRaptorAnimInstance_OnResetPlayedIdleIndex_Params
{
	int                                                NewIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.OBHttpComponent.ServerGetBackPackInfo
struct UOBHttpComponent_ServerGetBackPackInfo_Params
{
	int                                                TeamID;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.OBHttpComponent.ServerGetAllPlayerThrowInfo
struct UOBHttpComponent_ServerGetAllPlayerThrowInfo_Params
{
};

// Function Addons.OBHttpComponent.PostTeamWeaponInfo
struct UOBHttpComponent_PostTeamWeaponInfo_Params
{
	struct FString                                     TeamWeaponInfoJsonStr;                                    // (Parm, ZeroConstructor)
};

// Function Addons.OBHttpComponent.PostTeamBackPackInfoByTeamID
struct UOBHttpComponent_PostTeamBackPackInfoByTeamID_Params
{
	int                                                TeamID;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.OBHttpComponent.PostTDMResultInfo
struct UOBHttpComponent_PostTDMResultInfo_Params
{
	struct FString                                     TDMResultInfoJsonStr;                                     // (Parm, ZeroConstructor)
};

// Function Addons.OBHttpComponent.PostPlayersAMInfo
struct UOBHttpComponent_PostPlayersAMInfo_Params
{
	struct FString                                     PlayerAMInfoJsonStr;                                      // (Parm, ZeroConstructor)
};

// Function Addons.OBHttpComponent.OnRep_RealTimeAPIList
struct UOBHttpComponent_OnRep_RealTimeAPIList_Params
{
};

// Function Addons.OBHttpComponent.OnRep_AfterMatchAPIList
struct UOBHttpComponent_OnRep_AfterMatchAPIList_Params
{
};

// Function Addons.OBHttpComponent.ClientUpdateTeammateItemList
struct UOBHttpComponent_ClientUpdateTeammateItemList_Params
{
};

// Function Addons.OBHttpComponent.ClientGetPlayerUseSightInfo
struct UOBHttpComponent_ClientGetPlayerUseSightInfo_Params
{
	TArray<struct FPlayerSightUsageInfoCompress>       PlayerSightUsageInfoCompress;                             // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
};

// Function Addons.OBHttpComponent.ClientGetPlayerPickUpInfo
struct UOBHttpComponent_ClientGetPlayerPickUpInfo_Params
{
	uint32_t                                           PlayerKey;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FPlayerPickUpInfo                           PickupInfo;                                               // (ConstParm, Parm)
};

// Function Addons.OBHttpComponent.ClientGetBackPackInfo
struct UOBHttpComponent_ClientGetBackPackInfo_Params
{
	TArray<struct FPlayerBackPackInfo>                 TeamBackPackInfo;                                         // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
};

// Function Addons.OBHttpComponent.ClientGetAllPlayerThrowInfo
struct UOBHttpComponent_ClientGetAllPlayerThrowInfo_Params
{
	TArray<struct FPlayerThrowInfo>                    AllPlayerThrowInfo;                                       // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
};

// Function Addons.OBHttpComponent.ClientGetAirDropBoxInfo
struct UOBHttpComponent_ClientGetAirDropBoxInfo_Params
{
	unsigned char                                      AirDropId;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FAirDropBoxDataItem>                 AirDropBoxDataList;                                       // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
};

// Function Addons.OBModeAirDropWidget.SetAirDrop
struct UOBModeAirDropWidget_SetAirDrop_Params
{
	class AAirDropBoxActor*                            DropBox;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.OBModeAirDropWidget.OnItemClicked
struct UOBModeAirDropWidget_OnItemClicked_Params
{
};

// Function Addons.OBModePlayerHeadList.GetHeadItem
struct UOBModePlayerHeadList_GetHeadItem_Params
{
	struct FString                                     PlayerName;                                               // (Parm, ZeroConstructor)
	int                                                TeamID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsWithCreate;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UOBModePositionWidget*                       ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Addons.OBModePlayerHeadList.DynamicSortPlayerHeadWidget
struct UOBModePlayerHeadList_DynamicSortPlayerHeadWidget_Params
{
};

// Function Addons.OBModePlayerHeadList.CreateHeadItem
struct UOBModePlayerHeadList_CreateHeadItem_Params
{
	struct FString                                     PlayerName;                                               // (Parm, ZeroConstructor)
	struct FHeadItem                                   HeadItem;                                                 // (Parm, OutParm)
};

// Function Addons.OBModePositionWidget.SetPlayerCharacter
struct UOBModePositionWidget_SetPlayerCharacter_Params
{
	class ASTExtraPlayerController*                    Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                idx;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.OBModePositionWidget.RefreshWeaponIconStatusDetail
struct UOBModePositionWidget_RefreshWeaponIconStatusDetail_Params
{
	struct FItemDefineID                               DefineItem;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Addons.OBModePositionWidget.RefreshWeaponBulletStatus
struct UOBModePositionWidget_RefreshWeaponBulletStatus_Params
{
	bool                                               bHasBullet;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.OBModePositionWidget.RefreshPlayerHealth
struct UOBModePositionWidget_RefreshPlayerHealth_Params
{
	float                                              hpRatio;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              breathRatio;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsNearDeath;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.OBModePositionWidget.RefreshOpenWeaponIconStatus
struct UOBModePositionWidget_RefreshOpenWeaponIconStatus_Params
{
	bool                                               IsOpen;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.OBModePositionWidget.RefreshDistance
struct UOBModePositionWidget_RefreshDistance_Params
{
	int                                                Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              fovDistance;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.OBModePositionWidget.ReceiveUseWeseeStyle
struct UOBModePositionWidget_ReceiveUseWeseeStyle_Params
{
	ERelationshipWithTarget                            RelationshipWithTarget;                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Addons.OBModePositionWidget.OpenShowWeaponIcon
struct UOBModePositionWidget_OpenShowWeaponIcon_Params
{
};

// Function Addons.OBModePositionWidget.OnItemClicked
struct UOBModePositionWidget_OnItemClicked_Params
{
};

// Function Addons.OBModePositionWidget.HandleWeaponChange
struct UOBModePositionWidget_HandleWeaponChange_Params
{
};

// Function Addons.OBModePositionWidget.HandleCheckCurWeaponBulletChange
struct UOBModePositionWidget_HandleCheckCurWeaponBulletChange_Params
{
};

// Function Addons.OBModePositionWidget.GetWidgetID
struct UOBModePositionWidget_GetWidgetID_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.OBModePositionWidget.GetOpacityByDistance
struct UOBModePositionWidget_GetOpacityByDistance_Params
{
	float                                              Distance3D;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.OBModePositionWidget.GetCachedPlayerCharacter
struct UOBModePositionWidget_GetCachedPlayerCharacter_Params
{
	class ASTExtraBaseCharacter*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.OBModePositionWidget.DisplayFinalDamage
struct UOBModePositionWidget_DisplayFinalDamage_Params
{
	float                                              FinalDamage;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                AttackerTeamID;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.OBModePositionWidget.CloseShowWeaponIcon
struct UOBModePositionWidget_CloseShowWeaponIcon_Params
{
};

// Function Addons.OBModePositionWidget.CheckOwnWeaponStatus
struct UOBModePositionWidget_CheckOwnWeaponStatus_Params
{
};

// Function Addons.ObserverProbeComponent.PostInfoAfterMatch
struct UObserverProbeComponent_PostInfoAfterMatch_Params
{
};

// Function Addons.ObserverProbeComponent.OpenOBMLAIDebug
struct UObserverProbeComponent_OpenOBMLAIDebug_Params
{
};

// Function Addons.ObserverProbeComponent.OnTerminatorEndGame
struct UObserverProbeComponent_OnTerminatorEndGame_Params
{
	class AController*                                 Killer;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 Victim;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                DamageType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ExtraParam;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.ObserverProbeComponent.CollectSightUseTime
struct UObserverProbeComponent_CollectSightUseTime_Params
{
	uint32_t                                           PlayerKey;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SightId;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bUse;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.OceanVehicle.TryVehicleDive
struct AOceanVehicle_TryVehicleDive_Params
{
	bool                                               bStart;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.OceanVehicle.TickSyncCameraInfo
struct AOceanVehicle_TickSyncCameraInfo_Params
{
	float                                              Delta;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.OceanVehicle.StopAllBlanketSfx
struct AOceanVehicle_StopAllBlanketSfx_Params
{
};

// Function Addons.OceanVehicle.OnRep_UpOnSpecialWater
struct AOceanVehicle_OnRep_UpOnSpecialWater_Params
{
	bool                                               bPrevState;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.OceanVehicle.OnRep_OceanVehicleDiveCDChanged
struct AOceanVehicle_OnRep_OceanVehicleDiveCDChanged_Params
{
	bool                                               bPrevState;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.OceanVehicle.OnRep_InSpecialWater
struct AOceanVehicle_OnRep_InSpecialWater_Params
{
	bool                                               bPrevState;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.OceanVehicle.IsOceanVehicleInWater
struct AOceanVehicle_IsOceanVehicleInWater_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.OceanVehicle.GetUnitUID
struct AOceanVehicle_GetUnitUID_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.OceanVehicle.GetConsumeFuelRate
struct AOceanVehicle_GetConsumeFuelRate_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.OceanVehicle.EnableWaterModeCameraModifier
struct AOceanVehicle_EnableWaterModeCameraModifier_Params
{
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.OceanVehicle.EnableDiveCameraModifier
struct AOceanVehicle_EnableDiveCameraModifier_Params
{
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.OceanVehicle.DestroyAllCachedParticleEffect
struct AOceanVehicle_DestroyAllCachedParticleEffect_Params
{
};

// Function Addons.OceanVehicle.CanUpdateMovementInput
struct AOceanVehicle_CanUpdateMovementInput_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.OceanVehicle.CanOceanVehicleDive
struct AOceanVehicle_CanOceanVehicleDive_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.OceanVehicle.CanConsumeFuel
struct AOceanVehicle_CanConsumeFuel_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.OceanVehicle.CanAutoIncreaseFuel
struct AOceanVehicle_CanAutoIncreaseFuel_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.OceanVehicleMovementComponent.StartFlyingDive
struct UOceanVehicleMovementComponent_StartFlyingDive_Params
{
};

// Function Addons.OceanVehicleMovementComponent.SetServerDiveDirection
struct UOceanVehicleMovementComponent_SetServerDiveDirection_Params
{
	struct FVector                                     ClientDivDirection;                                       // (Parm, IsPlainOldData)
};

// Function Addons.OceanVehicleMovementComponent.SetMovementMode
struct UOceanVehicleMovementComponent_SetMovementMode_Params
{
	TEnumAsByte<enum EMovementMode>                    NewMovementMode;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      NewCustomMode;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.OceanVehicleMovementComponent.OnInSpecialWaterStateChange
struct UOceanVehicleMovementComponent_OnInSpecialWaterStateChange_Params
{
	bool                                               bInEnterWater;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.OceanVehicleMovementComponent.IsLowFlying
struct UOceanVehicleMovementComponent_IsLowFlying_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.OceanVehicleMovementComponent.IsLocationInSpecialWater
struct UOceanVehicleMovementComponent_IsLocationInSpecialWater_Params
{
	struct FVector                                     InLoc;                                                    // (Parm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.OceanVehicleMovementComponent.IsDiving
struct UOceanVehicleMovementComponent_IsDiving_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.OceanVehicleMovementComponent.IsCurveMoving
struct UOceanVehicleMovementComponent_IsCurveMoving_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.OceanVehicleMovementComponent.IsAutoLanding
struct UOceanVehicleMovementComponent_IsAutoLanding_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.OceanVehicleMovementComponent.GetOceanVehicleMoveState
struct UOceanVehicleMovementComponent_GetOceanVehicleMoveState_Params
{
	EOceanVehicleBaseMoveMode                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.OceanVehicleMovementComponent.GetFlyingConfig
struct UOceanVehicleMovementComponent_GetFlyingConfig_Params
{
	struct FFlyBioVehicleFlyingConfig                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Addons.OceanVehicleMovementComponent.EndFlyingDive
struct UOceanVehicleMovementComponent_EndFlyingDive_Params
{
};

// Function Addons.OceanVehicleMovementComponent.DealWithCustomAction
struct UOceanVehicleMovementComponent_DealWithCustomAction_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.OceanVehicleMovementComponent.CheckCanStartFlyingDive
struct UOceanVehicleMovementComponent_CheckCanStartFlyingDive_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.OceanVehicleMovementComponent.CanDiving
struct UOceanVehicleMovementComponent_CanDiving_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.OceanVehicleMovementComponent.CalculateFlyingVelocity
struct UOceanVehicleMovementComponent_CalculateFlyingVelocity_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.OceanVehicleMovementComponent.CalculateFlyingAcceleration
struct UOceanVehicleMovementComponent_CalculateFlyingAcceleration_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.OceanVehicleMovementComponent.CalculateDivingVelocity
struct UOceanVehicleMovementComponent_CalculateDivingVelocity_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.OtherCharacterBearerUnit.OnAvatarAllMeshLoaded
struct UOtherCharacterBearerUnit_OnAvatarAllMeshLoaded_Params
{
};

// Function Addons.OtherWeaponBearerUnit.OnWeaponAvatarLoaded
struct UOtherWeaponBearerUnit_OnWeaponAvatarLoaded_Params
{
	int                                                Val;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FItemDefineID                               ID;                                                       // (Parm)
};

// Function Addons.OtherWeaponBearerUnit.OnWeaponAttachAvatarLoaded
struct UOtherWeaponBearerUnit_OnWeaponAttachAvatarLoaded_Params
{
	int                                                Val;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FItemDefineID                               ID;                                                       // (Parm)
};

// Function Addons.ParachuteWarterActor.CollisionQueryParamsAddIgnoredActor
struct AParachuteWarterActor_CollisionQueryParamsAddIgnoredActor_Params
{
	class AActor*                                      InIgnoreActor;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.ParachuteWarterActor.ChangeAboveSpecicalAreaType
struct AParachuteWarterActor_ChangeAboveSpecicalAreaType_Params
{
	class ASTExtraBaseCharacter*                       DellActor;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAboveSpecicalAreaIn;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.ParachuteWarterActor.AddOrRemoveCheckActor
struct AParachuteWarterActor_AddOrRemoveCheckActor_Params
{
	int                                                PlayerKey;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class ASTExtraBaseCharacter*                       checkActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Add;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.PCOBCommonComponent.TrackingEnd
struct UPCOBCommonComponent_TrackingEnd_Params
{
};

// Function Addons.PCOBCommonComponent.PCOBTerminator
struct UPCOBCommonComponent_PCOBTerminator_Params
{
	class ASTExtraBaseCharacter*                       Causer;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class ASTExtraBaseCharacter*                       Victim;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.PCOBCommonComponent.OnLoadAllLevelChanged
struct UPCOBCommonComponent_OnLoadAllLevelChanged_Params
{
	bool                                               bLoadAllLevel;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.PterosaurAnimInstance.ResetStartFlying
struct UPterosaurAnimInstance_ResetStartFlying_Params
{
};

// Function Addons.PterosaurAnimInstance.OnStartFlying
struct UPterosaurAnimInstance_OnStartFlying_Params
{
};

// Function Addons.PterosaurMovementComponent.UpdateVerticalHeight
struct UPterosaurMovementComponent_UpdateVerticalHeight_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.PterosaurMovementComponent.StartTakingOff
struct UPterosaurMovementComponent_StartTakingOff_Params
{
};

// Function Addons.PterosaurMovementComponent.StartSwoopDown
struct UPterosaurMovementComponent_StartSwoopDown_Params
{
	struct FVector                                     TargetLocation;                                           // (Parm, IsPlainOldData)
};

// Function Addons.PterosaurMovementComponent.StartLanding
struct UPterosaurMovementComponent_StartLanding_Params
{
};

// Function Addons.PterosaurMovementComponent.StartFlyingDive
struct UPterosaurMovementComponent_StartFlyingDive_Params
{
};

// Function Addons.PterosaurMovementComponent.SetServerDiveDirection
struct UPterosaurMovementComponent_SetServerDiveDirection_Params
{
	struct FVector                                     Direction;                                                // (Parm, IsPlainOldData)
};

// Function Addons.PterosaurMovementComponent.SetMovementMode
struct UPterosaurMovementComponent_SetMovementMode_Params
{
	TEnumAsByte<enum EMovementMode>                    NewMovementMode;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      NewCustomMode;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.PterosaurMovementComponent.SetAutoLanding
struct UPterosaurMovementComponent_SetAutoLanding_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.PterosaurMovementComponent.IsTakingOff
struct UPterosaurMovementComponent_IsTakingOff_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.PterosaurMovementComponent.IsSwoopDown
struct UPterosaurMovementComponent_IsSwoopDown_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.PterosaurMovementComponent.IsSwoopCatching
struct UPterosaurMovementComponent_IsSwoopCatching_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.PterosaurMovementComponent.IsStrugglingToLand
struct UPterosaurMovementComponent_IsStrugglingToLand_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.PterosaurMovementComponent.IsLocalSwoopingDown
struct UPterosaurMovementComponent_IsLocalSwoopingDown_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.PterosaurMovementComponent.IsLandingWalking
struct UPterosaurMovementComponent_IsLandingWalking_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.PterosaurMovementComponent.IsLanding
struct UPterosaurMovementComponent_IsLanding_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.PterosaurMovementComponent.IsDiving
struct UPterosaurMovementComponent_IsDiving_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.PterosaurMovementComponent.IsCurveMoving
struct UPterosaurMovementComponent_IsCurveMoving_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.PterosaurMovementComponent.GetMoveState
struct UPterosaurMovementComponent_GetMoveState_Params
{
	EPterosaurMoveMode                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.PterosaurMovementComponent.GetDistanceToLand
struct UPterosaurMovementComponent_GetDistanceToLand_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.PterosaurMovementComponent.ExitSwoopDown
struct UPterosaurMovementComponent_ExitSwoopDown_Params
{
};

// Function Addons.PterosaurMovementComponent.ExitLanding
struct UPterosaurMovementComponent_ExitLanding_Params
{
};

// Function Addons.PterosaurMovementComponent.EndTakingOff
struct UPterosaurMovementComponent_EndTakingOff_Params
{
};

// Function Addons.PterosaurMovementComponent.EndSwoopDown
struct UPterosaurMovementComponent_EndSwoopDown_Params
{
	bool                                               bRestVelocity;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.PterosaurMovementComponent.EndLanding
struct UPterosaurMovementComponent_EndLanding_Params
{
};

// Function Addons.PterosaurMovementComponent.EndFlyingDive
struct UPterosaurMovementComponent_EndFlyingDive_Params
{
};

// Function Addons.PterosaurMovementComponent.DealWithCustomAction
struct UPterosaurMovementComponent_DealWithCustomAction_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.PterosaurMovementComponent.CheckCanStartFlyingDive
struct UPterosaurMovementComponent_CheckCanStartFlyingDive_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.PterosaurMovementComponent.CalculateFlyingVelocity
struct UPterosaurMovementComponent_CalculateFlyingVelocity_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.PterosaurMovementComponent.CalculateFlyingAcceleration
struct UPterosaurMovementComponent_CalculateFlyingAcceleration_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.PterosaurMovementComponent.CalculateDivingVelocity
struct UPterosaurMovementComponent_CalculateDivingVelocity_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.PterosaurVehicle.TryFlyingDive
struct APterosaurVehicle_TryFlyingDive_Params
{
	bool                                               bTry;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.PterosaurVehicle.TryCancelSwoopDown
struct APterosaurVehicle_TryCancelSwoopDown_Params
{
};

// Function Addons.PterosaurVehicle.ServerSwoopDown
struct APterosaurVehicle_ServerSwoopDown_Params
{
	struct FVector                                     TargetLocation;                                           // (Parm, IsPlainOldData)
	bool                                               IsForceEnd;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.PterosaurVehicle.ServerReleaseCharacter
struct APterosaurVehicle_ServerReleaseCharacter_Params
{
	class ASTExtraBaseCharacter*                       Requester;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.PterosaurVehicle.OnRep_SyncSwoopCatchState
struct APterosaurVehicle_OnRep_SyncSwoopCatchState_Params
{
};

// Function Addons.PterosaurVehicle.OnPterosaurSwoopStateChanged
struct APterosaurVehicle_OnPterosaurSwoopStateChanged_Params
{
	EPterosaurSwoopStage                               NewStage;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     TargetLocation;                                           // (Parm, IsPlainOldData)
};

// Function Addons.PterosaurVehicle.OnPterosaurPrepareCatch
struct APterosaurVehicle_OnPterosaurPrepareCatch_Params
{
};

// Function Addons.PterosaurVehicle.OnClientExitFromPterosaur
struct APterosaurVehicle_OnClientExitFromPterosaur_Params
{
	class ASTExtraPlayerCharacter*                     Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	ESTExtraVehicleSeatType                            SeatType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.PterosaurVehicle.MultiCast_SwoopDown
struct APterosaurVehicle_MultiCast_SwoopDown_Params
{
	struct FVector                                     TargetLocation;                                           // (Parm, IsPlainOldData)
};

// Function Addons.PterosaurVehicle.MultiCast_SplineCorrect
struct APterosaurVehicle_MultiCast_SplineCorrect_Params
{
	struct FVector                                     SyncLocation;                                             // (Parm, IsPlainOldData)
	struct FVector                                     TargetLocation;                                           // (Parm, IsPlainOldData)
	TArray<struct FVector>                             SplinePoints;                                             // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
};

// Function Addons.PterosaurVehicle.IsSwoopDown
struct APterosaurVehicle_IsSwoopDown_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.PterosaurVehicle.IsSwoopCoolDown
struct APterosaurVehicle_IsSwoopCoolDown_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.PterosaurVehicle.IsSwoopCatching
struct APterosaurVehicle_IsSwoopCatching_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.PterosaurVehicle.HandleOnSeatDetached
struct APterosaurVehicle_HandleOnSeatDetached_Params
{
	class ASTExtraPlayerCharacter*                     Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	ESTExtraVehicleSeatType                            SeatType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SeatIdx;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.PterosaurVehicle.HandleOnSeatAttached
struct APterosaurVehicle_HandleOnSeatAttached_Params
{
	class ASTExtraPlayerCharacter*                     Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	ESTExtraVehicleSeatType                            SeatType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SeatIdx;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.PterosaurVehicle.GetPterosaurMovementComponent
struct APterosaurVehicle_GetPterosaurMovementComponent_Params
{
	class UPterosaurMovementComponent*                 ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Addons.PterosaurVehicle.GetConsumeFuelRate
struct APterosaurVehicle_GetConsumeFuelRate_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.PterosaurVehicle.ForceCatchCharacter
struct APterosaurVehicle_ForceCatchCharacter_Params
{
	class ASTExtraBaseCharacter*                       Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.PterosaurVehicle.DoSwoopDown
struct APterosaurVehicle_DoSwoopDown_Params
{
	struct FVector                                     TargetLocation;                                           // (Parm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.PterosaurVehicle.CanConsumeFuel
struct APterosaurVehicle_CanConsumeFuel_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.PterosaurVehicle.BroadCastOnPterosaurPrepareCatch
struct APterosaurVehicle_BroadCastOnPterosaurPrepareCatch_Params
{
};

// Function Addons.PterosaurVehicle.BPOnPterosaurSwoopStateChanged
struct APterosaurVehicle_BPOnPterosaurSwoopStateChanged_Params
{
	unsigned char                                      NewStage;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.RaptorMovementComponent.GetWalkingAccResistance
struct URaptorMovementComponent_GetWalkingAccResistance_Params
{
	float                                              Speed;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.RaptorMovementComponent.GetMaxAcceleration
struct URaptorMovementComponent_GetMaxAcceleration_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.RaptorVehicle.SetHandBrake
struct ARaptorVehicle_SetHandBrake_Params
{
	float                                              rate;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.RaptorVehicle.ServerSetHandBrake
struct ARaptorVehicle_ServerSetHandBrake_Params
{
	float                                              rate;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.RaptorVehicle.MulticastDoJump
struct ARaptorVehicle_MulticastDoJump_Params
{
};

// Function Addons.RaptorVehicle.GetRaptorMovementComponent
struct ARaptorVehicle_GetRaptorMovementComponent_Params
{
	class URaptorMovementComponent*                    ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Addons.RaptorVehicle.DoJump
struct ARaptorVehicle_DoJump_Params
{
};

// Function Addons.RaysFishAnimInstance.OnBeginFlying
struct URaysFishAnimInstance_OnBeginFlying_Params
{
	bool                                               bIsLowFlying;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.RaysFishAnimInstance.HandleOnOceanVehicleDive
struct URaysFishAnimInstance_HandleOnOceanVehicleDive_Params
{
	bool                                               bEnter;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     InDirection;                                              // (Parm, IsPlainOldData)
};

// Function Addons.RaysFishAnimInstance.HandleOnOceanVehicleBubbleSkill
struct URaysFishAnimInstance_HandleOnOceanVehicleBubbleSkill_Params
{
	struct FVector                                     TargetLocation;                                           // (Parm, IsPlainOldData)
};

// Function Addons.RaysFishRiderAnimInstance.OnBeginFlying
struct URaysFishRiderAnimInstance_OnBeginFlying_Params
{
	bool                                               bIsLowFlying;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.RaysFishRiderAnimInstance.HandleOnOceanVehicleDive
struct URaysFishRiderAnimInstance_HandleOnOceanVehicleDive_Params
{
	bool                                               bEnter;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     InDirection;                                              // (Parm, IsPlainOldData)
};

// Function Addons.RaysFishRiderAnimInstance.HandleOnOceanVehicleBubbleSkill
struct URaysFishRiderAnimInstance_HandleOnOceanVehicleBubbleSkill_Params
{
	struct FVector                                     TargetLocation;                                           // (Parm, IsPlainOldData)
};

// Function Addons.RegionOverlapComponent.SetPlayAreaComponent
struct URegionOverlapComponent_SetPlayAreaComponent_Params
{
	class UPrimitiveComponent*                         AreaComponent;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Addons.RegionOverlapComponent.GetOverlappingActors
struct URegionOverlapComponent_GetOverlappingActors_Params
{
	TArray<class AActor*>                              OverlappingActors;                                        // (Parm, OutParm, ZeroConstructor)
	class UClass*                                      ClassFilter;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bForceQuery;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<enum ECollisionChannel>                CollisionChannel;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.ReindeerBioVehicle.TryAttachToOtherVehicle
struct AReindeerBioVehicle_TryAttachToOtherVehicle_Params
{
};

// Function Addons.ReindeerBioVehicle.OnClientExitFromAttachedVehicle
struct AReindeerBioVehicle_OnClientExitFromAttachedVehicle_Params
{
	class ASTExtraPlayerCharacter*                     Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	ESTExtraVehicleSeatType                            SeatType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.ReindeerBioVehicle.MulticastDoJump
struct AReindeerBioVehicle_MulticastDoJump_Params
{
};

// Function Addons.ReindeerBioVehicle.K2_OnClientAttachWithReindeerCart
struct AReindeerBioVehicle_K2_OnClientAttachWithReindeerCart_Params
{
	class ASTExtraVehicleBase*                         OtherVehicle;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.ReindeerBioVehicle.HandleVehicleHealthDestroy
struct AReindeerBioVehicle_HandleVehicleHealthDestroy_Params
{
};

// Function Addons.ReindeerBioVehicle.GetVehicleAttachState
struct AReindeerBioVehicle_GetVehicleAttachState_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.ReindeerBioVehicle.GetVehicleAttachComp
struct AReindeerBioVehicle_GetVehicleAttachComp_Params
{
	class UVehicleAttachmentComponent*                 ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Addons.ReindeerBioVehicle.GetBioFlyMovementComponent
struct AReindeerBioVehicle_GetBioFlyMovementComponent_Params
{
	class UBioFlyMovementComponentBase*                ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Addons.ReindeerBioVehicle.GetAttachedVehicle
struct AReindeerBioVehicle_GetAttachedVehicle_Params
{
	class ASTExtraVehicleBase*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.ReindeerBioVehicle.DoJump
struct AReindeerBioVehicle_DoJump_Params
{
};

// Function Addons.ReindeerBioVehicle.DoAttachLogic
struct AReindeerBioVehicle_DoAttachLogic_Params
{
	class ASTExtraVehicleBase*                         OtherVehicle;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.ReindeerCartVehicle.UpdateParticleState
struct AReindeerCartVehicle_UpdateParticleState_Params
{
};

// Function Addons.ReindeerCartVehicle.TryAttachToOtherVehicle
struct AReindeerCartVehicle_TryAttachToOtherVehicle_Params
{
};

// Function Addons.ReindeerCartVehicle.SetMovingParticleActived
struct AReindeerCartVehicle_SetMovingParticleActived_Params
{
	bool                                               Inactive;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.ReindeerCartVehicle.SetFloatingParticleActived
struct AReindeerCartVehicle_SetFloatingParticleActived_Params
{
	bool                                               Inactive;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.ReindeerCartVehicle.OnParticleEffectLoadingFinished
struct AReindeerCartVehicle_OnParticleEffectLoadingFinished_Params
{
};

// Function Addons.ReindeerCartVehicle.OnClientExitFromAttachedVehicle
struct AReindeerCartVehicle_OnClientExitFromAttachedVehicle_Params
{
	class ASTExtraPlayerCharacter*                     Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	ESTExtraVehicleSeatType                            SeatType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.ReindeerCartVehicle.LoadParticleEffect
struct AReindeerCartVehicle_LoadParticleEffect_Params
{
};

// Function Addons.ReindeerCartVehicle.K2_OnClientAttachToReindeer
struct AReindeerCartVehicle_K2_OnClientAttachToReindeer_Params
{
	class ASTExtraVehicleBase*                         OtherVehicle;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.ReindeerCartVehicle.HandleVehicleHealthDestroy
struct AReindeerCartVehicle_HandleVehicleHealthDestroy_Params
{
};

// Function Addons.ReindeerCartVehicle.HandleOnSeatAttached
struct AReindeerCartVehicle_HandleOnSeatAttached_Params
{
	class ASTExtraPlayerCharacter*                     Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	ESTExtraVehicleSeatType                            SeatType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SeatIdx;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.ReindeerCartVehicle.GetVehicleAttachState
struct AReindeerCartVehicle_GetVehicleAttachState_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.ReindeerCartVehicle.GetVehicleAttachComp
struct AReindeerCartVehicle_GetVehicleAttachComp_Params
{
	class UVehicleAttachmentComponent*                 ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Addons.ReindeerCartVehicle.GetForwardSpeed
struct AReindeerCartVehicle_GetForwardSpeed_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.ReindeerCartVehicle.GetAttachedVehicle
struct AReindeerCartVehicle_GetAttachedVehicle_Params
{
	class ASTExtraVehicleBase*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.ReindeerCartVehicle.DoAttachLogic
struct AReindeerCartVehicle_DoAttachLogic_Params
{
	class ASTExtraVehicleBase*                         OtherVehicle;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.ReindeerCartVehicle.DestroyAllCachedParticleEffect
struct AReindeerCartVehicle_DestroyAllCachedParticleEffect_Params
{
};

// Function Addons.ReindeerCartVehicle.CloseWheelsCollision
struct AReindeerCartVehicle_CloseWheelsCollision_Params
{
};

// Function Addons.ReindeerSeatComponent.GetTotalSeatsNum
struct UReindeerSeatComponent_GetTotalSeatsNum_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.ScanAvatar.ScanAndPrint
struct AScanAvatar_ScanAndPrint_Params
{
};

// Function Addons.SmartBearerManager.OnRenderQualityChange
struct USmartBearerManager_OnRenderQualityChange_Params
{
	bool                                               bLoadMap;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.SmartBearerManager.OnPreMatchSuccess
struct USmartBearerManager_OnPreMatchSuccess_Params
{
	int                                                InSubMode;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.SmartBearerManagerBPLibrary.SetUseSkipMapForDistacneFactor
struct USmartBearerManagerBPLibrary_SetUseSkipMapForDistacneFactor_Params
{
	class USkinnedMeshComponent*                       InMeshComponent;                                          // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.SmartBearerManagerBPLibrary.SetStaticMeshMinLOD
struct USmartBearerManagerBPLibrary_SetStaticMeshMinLOD_Params
{
	class UStaticMeshComponent*                        InMeshComponent;                                          // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                NewLOD;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.SmartBearerManagerBPLibrary.SetSkinnedMeshUpdateFlag
struct USmartBearerManagerBPLibrary_SetSkinnedMeshUpdateFlag_Params
{
	class USkinnedMeshComponent*                       InMeshComponent;                                          // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                UpdateFlag;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.SmartBearerManagerBPLibrary.SetSkinnedMeshMinLOD
struct USmartBearerManagerBPLibrary_SetSkinnedMeshMinLOD_Params
{
	class USkinnedMeshComponent*                       InMeshComponent;                                          // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                NewLOD;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.SmartBearerManagerBPLibrary.SetPrimitiveVisibile
struct USmartBearerManagerBPLibrary_SetPrimitiveVisibile_Params
{
	class UPrimitiveComponent*                         InComponent;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bVisible;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.SmartBearerManagerBPLibrary.SetParticleSystemMinTimeBetweenTick
struct USmartBearerManagerBPLibrary_SetParticleSystemMinTimeBetweenTick_Params
{
	class UParticleSystemComponent*                    InParticleSystem;                                         // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                TickTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.SmartBearerManagerBPLibrary.RemoveSubSquenceFromSequence
struct USmartBearerManagerBPLibrary_RemoveSubSquenceFromSequence_Params
{
	class ALevelSequenceActor*                         seqActor;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     SubSequenceName;                                          // (Parm, ZeroConstructor)
};

// Function Addons.SmartBearerManagerBPLibrary.ReleaseTexture2D
struct USmartBearerManagerBPLibrary_ReleaseTexture2D_Params
{
	class UTexture2D*                                  TextureToRelease;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.SmartBearerManagerBPLibrary.MarkRenderStateDirty
struct USmartBearerManagerBPLibrary_MarkRenderStateDirty_Params
{
	class UPrimitiveComponent*                         InComponent;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Addons.SmartBearerManagerBPLibrary.IsUMGBlurEnabled
struct USmartBearerManagerBPLibrary_IsUMGBlurEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.SmartBearerManagerBPLibrary.IsTickAsyncLoadingOptSpecialFullOpen
struct USmartBearerManagerBPLibrary_IsTickAsyncLoadingOptSpecialFullOpen_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.SmartBearerManagerBPLibrary.IsSuperFrameOptSwitcherEnable
struct USmartBearerManagerBPLibrary_IsSuperFrameOptSwitcherEnable_Params
{
	int                                                Switcher;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.SmartBearerManagerBPLibrary.IsStreamingOptSpecialFullOpen
struct USmartBearerManagerBPLibrary_IsStreamingOptSpecialFullOpen_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.SmartBearerManagerBPLibrary.IsSmartBearerOptSwitcherEnable
struct USmartBearerManagerBPLibrary_IsSmartBearerOptSwitcherEnable_Params
{
	int                                                Switcher;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.SmartBearerManagerBPLibrary.IsActorChanCleanUpOptSpecialFullOpen
struct USmartBearerManagerBPLibrary_IsActorChanCleanUpOptSpecialFullOpen_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.SmartBearerManagerBPLibrary.GetOrLoadFromCahceMap
struct USmartBearerManagerBPLibrary_GetOrLoadFromCahceMap_Params
{
	int                                                GroudID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     PathToLoad;                                               // (Parm, ZeroConstructor)
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.SmartBearerManagerBPLibrary.GetCurrentNormalCharacterSkinShow
struct USmartBearerManagerBPLibrary_GetCurrentNormalCharacterSkinShow_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.SmartBearerManagerBPLibrary.GetCurrentGradeLevel
struct USmartBearerManagerBPLibrary_GetCurrentGradeLevel_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.SmartBearerManagerBPLibrary.GetCurrentDeviceLevel
struct USmartBearerManagerBPLibrary_GetCurrentDeviceLevel_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.SmartBearerManagerBPLibrary.GetCurrentBearerNum
struct USmartBearerManagerBPLibrary_GetCurrentBearerNum_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.SmartBearerManagerBPLibrary.ClearFromResCacheMap
struct USmartBearerManagerBPLibrary_ClearFromResCacheMap_Params
{
	int                                                GroudID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.SmartBearerManagerBPLibrary.AddPrefixName
struct USmartBearerManagerBPLibrary_AddPrefixName_Params
{
	class UObject*                                     Object;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     PrefixName;                                               // (Parm, ZeroConstructor)
};

// Function Addons.SmartBearerManagerLuaBridge.SetSuperFrameOptSwitcher
struct USmartBearerManagerLuaBridge_SetSuperFrameOptSwitcher_Params
{
	int                                                State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.SmartBearerManagerLuaBridge.SetSmartBearerOptSwitcher
struct USmartBearerManagerLuaBridge_SetSmartBearerOptSwitcher_Params
{
	int                                                State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.SmartBearerManagerLuaBridge.SetSmartBearerNumData
struct USmartBearerManagerLuaBridge_SetSmartBearerNumData_Params
{
	struct FString                                     Data;                                                     // (Parm, ZeroConstructor)
};

// Function Addons.SmartBearerManagerLuaBridge.SetPostLoadThreadSwitcher
struct USmartBearerManagerLuaBridge_SetPostLoadThreadSwitcher_Params
{
	int                                                State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.SmartBearerManagerLuaBridge.SetOverrideSmartBearerNumData
struct USmartBearerManagerLuaBridge_SetOverrideSmartBearerNumData_Params
{
	struct FString                                     Data;                                                     // (Parm, ZeroConstructor)
};

// Function Addons.SmartBearerManagerLuaBridge.SetIsMyTeam
struct USmartBearerManagerLuaBridge_SetIsMyTeam_Params
{
	struct FScriptDelegate                             IsMyTeamDel;                                              // (Parm, ZeroConstructor)
};

// Function Addons.SmartBearerManagerLuaBridge.SetIsMyFriend
struct USmartBearerManagerLuaBridge_SetIsMyFriend_Params
{
	struct FScriptDelegate                             IsMyFriendDel;                                            // (Parm, ZeroConstructor)
};

// Function Addons.SmartBearerManagerLuaBridge.SetClientBackEndSwitcherC
struct USmartBearerManagerLuaBridge_SetClientBackEndSwitcherC_Params
{
	int                                                State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.SmartBearerManagerLuaBridge.SetClientBackEndSwitcherB
struct USmartBearerManagerLuaBridge_SetClientBackEndSwitcherB_Params
{
	int                                                State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.SmartBearerManagerLuaBridge.SetClientBackEndSwitcherA
struct USmartBearerManagerLuaBridge_SetClientBackEndSwitcherA_Params
{
	int                                                State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.SmartBearerManagerLuaBridge.OnPreMatchSuccess
struct USmartBearerManagerLuaBridge_OnPreMatchSuccess_Params
{
	int                                                submode_id;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.SmartBearerManagerLuaBridge.OnChatUIVisibleChange
struct USmartBearerManagerLuaBridge_OnChatUIVisibleChange_Params
{
	bool                                               bVisible;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.SmartBearerManagerLuaBridge.IsClientBackEndSwitcherBEnable
struct USmartBearerManagerLuaBridge_IsClientBackEndSwitcherBEnable_Params
{
	int                                                Switcher;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.SpecialMoveObj_LeggedAnimal.WallRunVerticalStepUp
struct USpecialMoveObj_LeggedAnimal_WallRunVerticalStepUp_Params
{
	struct FVector                                     Delta;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FHitResult                                  InHit;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.SpecialMoveObj_LeggedAnimal.StartWallRun
struct USpecialMoveObj_LeggedAnimal_StartWallRun_Params
{
};

// Function Addons.SpecialMoveObj_LeggedAnimal.SpecialMoveSetCharacterOwner
struct USpecialMoveObj_LeggedAnimal_SpecialMoveSetCharacterOwner_Params
{
	class ASTExtraBaseCharacter*                       InOwner;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.SpecialMoveObj_LeggedAnimal.SetAnimRunStop
struct USpecialMoveObj_LeggedAnimal_SetAnimRunStop_Params
{
};

// Function Addons.SpecialMoveObj_LeggedAnimal.OnStartWallRun
struct USpecialMoveObj_LeggedAnimal_OnStartWallRun_Params
{
};

// Function Addons.SpecialMoveObj_LeggedAnimal.OnLuaStartWallRun
struct USpecialMoveObj_LeggedAnimal_OnLuaStartWallRun_Params
{
};

// Function Addons.SpecialMoveObj_LeggedAnimal.OnLuaRunStop
struct USpecialMoveObj_LeggedAnimal_OnLuaRunStop_Params
{
};

// Function Addons.SpecialMoveObj_LeggedAnimal.OnLuaEndWallRun
struct USpecialMoveObj_LeggedAnimal_OnLuaEndWallRun_Params
{
};

// Function Addons.SpecialMoveObj_LeggedAnimal.OnEndWallRun
struct USpecialMoveObj_LeggedAnimal_OnEndWallRun_Params
{
};

// Function Addons.SpecialMoveObj_LeggedAnimal.OnClientWallRunEnd
struct USpecialMoveObj_LeggedAnimal_OnClientWallRunEnd_Params
{
};

// Function Addons.SpecialMoveObj_LeggedAnimal.LuaAnimalVaultExit
struct USpecialMoveObj_LeggedAnimal_LuaAnimalVaultExit_Params
{
};

// Function Addons.SpecialMoveObj_LeggedAnimal.LuaAnimalVault
struct USpecialMoveObj_LeggedAnimal_LuaAnimalVault_Params
{
	struct FDirectMoveData                             MoveData;                                                 // (Parm)
};

// Function Addons.SpecialMoveObj_LeggedAnimal.HandleOnWallRunChanged
struct USpecialMoveObj_LeggedAnimal_HandleOnWallRunChanged_Params
{
	bool                                               bWallRun;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.SpecialMoveObj_LeggedAnimal.HandleOnJump
struct USpecialMoveObj_LeggedAnimal_HandleOnJump_Params
{
};

// Function Addons.SpecialMoveObj_LeggedAnimal.GetSpeedRate
struct USpecialMoveObj_LeggedAnimal_GetSpeedRate_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.SpecialMoveObj_LeggedAnimal.GetMaxRunSpeed
struct USpecialMoveObj_LeggedAnimal_GetMaxRunSpeed_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.SpecialMoveObj_LeggedAnimal.EndWallRun
struct USpecialMoveObj_LeggedAnimal_EndWallRun_Params
{
};

// Function Addons.SpecialMoveObj_LeggedAnimal.CheckForwardWall
struct USpecialMoveObj_LeggedAnimal_CheckForwardWall_Params
{
	float                                              Dt;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.SpecialMoveObj_LeggedAnimal.CheckForwardInputOnWall
struct USpecialMoveObj_LeggedAnimal_CheckForwardInputOnWall_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.SpecialMoveObj_LeggedAnimal.CalcWaterHeightOffset
struct USpecialMoveObj_LeggedAnimal_CalcWaterHeightOffset_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.SpecialMoveObj_LeggedAnimal.CalcCoolDown
struct USpecialMoveObj_LeggedAnimal_CalcCoolDown_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.SpecialMoveObj_LeggedAnimal.AnimalVaultExit
struct USpecialMoveObj_LeggedAnimal_AnimalVaultExit_Params
{
};

// Function Addons.SpecialMoveObj_LeggedAnimal.AnimalVault
struct USpecialMoveObj_LeggedAnimal_AnimalVault_Params
{
	struct FVector                                     StartPos;                                                 // (Parm, IsPlainOldData)
	struct FVector                                     VaultDir;                                                 // (Parm, IsPlainOldData)
	struct FVector                                     EndPos;                                                   // (Parm, IsPlainOldData)
};

// Function Addons.SplineMoveObj.UpdateTuring
struct USplineMoveObj_UpdateTuring_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.SplineMoveObj.UpdateSplineMoveTurning
struct USplineMoveObj_UpdateSplineMoveTurning_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.SplineMoveObj.UpdateMoveSound
struct USplineMoveObj_UpdateMoveSound_Params
{
};

// Function Addons.SplineMoveObj.UpdateFocusRotation
struct USplineMoveObj_UpdateFocusRotation_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.SplineMoveObj.UpdateCameraLag
struct USplineMoveObj_UpdateCameraLag_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.SplineMoveObj.TryEnterSpline
struct USplineMoveObj_TryEnterSpline_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.SplineMoveObj.StopMoveSound
struct USplineMoveObj_StopMoveSound_Params
{
};

// Function Addons.SplineMoveObj.StartSplineMoveCameraLag
struct USplineMoveObj_StartSplineMoveCameraLag_Params
{
};

// Function Addons.SplineMoveObj.SplineMoveTurningEnd
struct USplineMoveObj_SplineMoveTurningEnd_Params
{
};

// Function Addons.SplineMoveObj.SplineMoveTurningBegin
struct USplineMoveObj_SplineMoveTurningBegin_Params
{
	struct FVector                                     InTargetDir;                                              // (Parm, IsPlainOldData)
	bool                                               bIsLeft;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.SplineMoveObj.SpecialMoveSetCharacterOwner
struct USplineMoveObj_SpecialMoveSetCharacterOwner_Params
{
	class ASTExtraBaseCharacter*                       InOwner;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.SplineMoveObj.SetSplineMoveState
struct USplineMoveObj_SetSplineMoveState_Params
{
	TEnumAsByte<enum ECustomMovmentMode>               InMoveState;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.SplineMoveObj.SetSpline
struct USplineMoveObj_SetSpline_Params
{
	class USplineComponent*                            InSpline;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Addons.SplineMoveObj.ServerPlayerTryEnterSpline
struct USplineMoveObj_ServerPlayerTryEnterSpline_Params
{
	class USplineComponent*                            InSpline;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     EnterLocation;                                            // (Parm, IsPlainOldData)
	struct FRotator                                    EnterRot;                                                 // (Parm, IsPlainOldData)
};

// Function Addons.SplineMoveObj.PlayMoveSound
struct USplineMoveObj_PlayMoveSound_Params
{
};

// Function Addons.SplineMoveObj.PlayerLeaveSpline
struct USplineMoveObj_PlayerLeaveSpline_Params
{
	class USplineComponent*                            InSpline;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	TEnumAsByte<enum EMovementMode>                    InMovementMode;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.SplineMoveObj.PlayerEnterSpline
struct USplineMoveObj_PlayerEnterSpline_Params
{
	class USplineComponent*                            InSpline;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     EnterLoc;                                                 // (Parm, IsPlainOldData)
	struct FRotator                                    EnterRot;                                                 // (Parm, IsPlainOldData)
};

// Function Addons.SplineMoveObj.OwnerJump
struct USplineMoveObj_OwnerJump_Params
{
};

// Function Addons.SplineMoveObj.OwnerHasWeapon
struct USplineMoveObj_OwnerHasWeapon_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.SplineMoveObj.OnSplineMoveHit
struct USplineMoveObj_OnSplineMoveHit_Params
{
	struct FHitResult                                  Hit;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Addons.SplineMoveObj.OnSpecialMoveCharacterJump
struct USplineMoveObj_OnSpecialMoveCharacterJump_Params
{
};

// Function Addons.SplineMoveObj.OnSimulateCharStateChanged
struct USplineMoveObj_OnSimulateCharStateChanged_Params
{
	uint64_t                                           InCurrentStates;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	uint64_t                                           InPrevStates;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.SplineMoveObj.OnPlayerRespawn
struct USplineMoveObj_OnPlayerRespawn_Params
{
	class AUAEPlayerController*                        PC;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.SplineMoveObj.OnPawnStateInterrupted
struct USplineMoveObj_OnPawnStateInterrupted_Params
{
	EPawnState                                         State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	EPawnState                                         InterruptedBy;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.SplineMoveObj.OnPawnLeaveState
struct USplineMoveObj_OnPawnLeaveState_Params
{
	EPawnState                                         LeaveState;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.SplineMoveObj.OnPawnEnterState
struct USplineMoveObj_OnPawnEnterState_Params
{
	EPawnState                                         EnterState;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.SplineMoveObj.MoveAlongSplineError
struct USplineMoveObj_MoveAlongSplineError_Params
{
};

// Function Addons.SplineMoveObj.InteractEnterSpline
struct USplineMoveObj_InteractEnterSpline_Params
{
	class USplineComponent*                            InSpline;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Addons.SplineMoveObj.InSplineMoveState
struct USplineMoveObj_InSplineMoveState_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.SplineMoveObj.HandleBeginTouchScreen
struct USplineMoveObj_HandleBeginTouchScreen_Params
{
	struct FVector2D                                   Loc;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Addons.SplineMoveObj.GetSplineMoveState
struct USplineMoveObj_GetSplineMoveState_Params
{
	TEnumAsByte<enum ECustomMovmentMode>               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.SplineMoveObj.GetProjectionLocationOnSpline
struct USplineMoveObj_GetProjectionLocationOnSpline_Params
{
	class USplineComponent*                            InSpline;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     InLocation;                                               // (Parm, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Addons.SplineMoveObj.GetPlayerEnterSplineRotation
struct USplineMoveObj_GetPlayerEnterSplineRotation_Params
{
	class USplineComponent*                            InSpline;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Addons.SplineMoveObj.GetPlayerEnterSplineLocation
struct USplineMoveObj_GetPlayerEnterSplineLocation_Params
{
	class USplineComponent*                            InSpline;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Addons.SplineMoveObj.GetDistanceAlongSplineAtWorldLocation
struct USplineMoveObj_GetDistanceAlongSplineAtWorldLocation_Params
{
	class USplineComponent*                            InSpline;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     InLoc;                                                    // (Parm, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.SplineMoveObj.GetCurrentTime
struct USplineMoveObj_GetCurrentTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.SplineMoveObj.GetCharacterOwner
struct USplineMoveObj_GetCharacterOwner_Params
{
	class ASTExtraBaseCharacter*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.SplineMoveObj.ForceLeaveSpline
struct USplineMoveObj_ForceLeaveSpline_Params
{
	class USplineComponent*                            InSpline;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Addons.SplineMoveObj.EndSplineMoveCameraLag
struct USplineMoveObj_EndSplineMoveCameraLag_Params
{
};

// Function Addons.SplineMoveObj.EnableFocusRotation
struct USplineMoveObj_EnableFocusRotation_Params
{
	bool                                               InEnable;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.SplineMoveObj.CustomModeIsSplineMove
struct USplineMoveObj_CustomModeIsSplineMove_Params
{
	unsigned char                                      InCustomMode;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.SplineMoveObj.ClientPlayerLeaveSpline
struct USplineMoveObj_ClientPlayerLeaveSpline_Params
{
	class USplineComponent*                            InSpline;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Addons.SplineMoveObj.AsyncLoadSoundResourceFinish
struct USplineMoveObj_AsyncLoadSoundResourceFinish_Params
{
};

// Function Addons.SplineMoveObj.AsyncLoadSoundResource
struct USplineMoveObj_AsyncLoadSoundResource_Params
{
};

// Function Addons.SplineMoveObj.AllowTryEnterSpline
struct USplineMoveObj_AllowTryEnterSpline_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.StandradVehicleBearerUnit.OnVehicleBeforeWheelDestroy
struct UStandradVehicleBearerUnit_OnVehicleBeforeWheelDestroy_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.StandradVehicleBearerUnit.OnVehicleAvatarEquiped
struct UStandradVehicleBearerUnit_OnVehicleAvatarEquiped_Params
{
};

// Function Addons.StandradVehicleBearerUnit.OnUpdateSeatGUI
struct UStandradVehicleBearerUnit_OnUpdateSeatGUI_Params
{
};

// Function Addons.STBuffAction_AddItem.OnExecute
struct USTBuffAction_AddItem_OnExecute_Params
{
};

// Function Addons.STBuffAction_AddItem.OnEnd
struct USTBuffAction_AddItem_OnEnd_Params
{
};

// Function Addons.STBuffAction_AddRecoveryPrompt.OnTick
struct USTBuffAction_AddRecoveryPrompt_OnTick_Params
{
	float                                              DetalTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.STBuffAction_AddRecoveryPrompt.OnExecute
struct USTBuffAction_AddRecoveryPrompt_OnExecute_Params
{
};

// Function Addons.STBuffAction_AddRecoveryPrompt.OnEnd
struct USTBuffAction_AddRecoveryPrompt_OnEnd_Params
{
};

// Function Addons.STBuffAction_AddRemoveBuff.OnTick
struct USTBuffAction_AddRemoveBuff_OnTick_Params
{
	float                                              DetalTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.STBuffAction_AddRemoveBuff.OnExecute
struct USTBuffAction_AddRemoveBuff_OnExecute_Params
{
};

// Function Addons.STBuffAction_AddRemoveMapMarkForActorClass.OnTick
struct USTBuffAction_AddRemoveMapMarkForActorClass_OnTick_Params
{
	float                                              DetalTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.STBuffAction_AddRemoveMapMarkForActorClass.OnExecute
struct USTBuffAction_AddRemoveMapMarkForActorClass_OnExecute_Params
{
};

// Function Addons.STBuffAction_AddRemoveMapMarkForActorClass.OnEnd
struct USTBuffAction_AddRemoveMapMarkForActorClass_OnEnd_Params
{
};

// Function Addons.STBuffAction_AddRemoveMapMarkForSelfPawn.OnTick
struct USTBuffAction_AddRemoveMapMarkForSelfPawn_OnTick_Params
{
	float                                              DetalTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.STBuffAction_AddRemoveMapMarkForSelfPawn.OnExecute
struct USTBuffAction_AddRemoveMapMarkForSelfPawn_OnExecute_Params
{
};

// Function Addons.STBuffAction_AddRemoveMapMarkForSelfPawn.OnEnd
struct USTBuffAction_AddRemoveMapMarkForSelfPawn_OnEnd_Params
{
};

// Function Addons.STBuffAction_AdjustStunPostMat.OnTick
struct USTBuffAction_AdjustStunPostMat_OnTick_Params
{
	float                                              DetalTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.STBuffAction_AdjustStunPostMat.OnInitialize
struct USTBuffAction_AdjustStunPostMat_OnInitialize_Params
{
};

// Function Addons.STBuffAction_AdjustStunPostMat.OnExecute
struct USTBuffAction_AdjustStunPostMat_OnExecute_Params
{
};

// Function Addons.STBuffAction_AdjustStunPostMat.OnEnd
struct USTBuffAction_AdjustStunPostMat_OnEnd_Params
{
};

// Function Addons.STBuffAction_AIMoveToLocation.OnTakeDamageEvent
struct USTBuffAction_AIMoveToLocation_OnTakeDamageEvent_Params
{
	float                                              Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent                                DamageEvent;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	class AActor*                                      Victim;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Causer;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UActorComponent*                             BuffComponent;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                InstID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.STBuffAction_AIMoveToLocation.OnInitialize
struct USTBuffAction_AIMoveToLocation_OnInitialize_Params
{
};

// Function Addons.STBuffAction_AIMoveToLocation.OnForceMoveToLocationEvent
struct USTBuffAction_AIMoveToLocation_OnForceMoveToLocationEvent_Params
{
	struct FVector                                     MoveToPos;                                                // (Parm, IsPlainOldData)
	class UActorComponent*                             BuffComponent;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                InstID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.STBuffAction_AIMoveToLocation.OnExecute
struct USTBuffAction_AIMoveToLocation_OnExecute_Params
{
};

// Function Addons.STBuffAction_AIMoveToLocation.OnDestroy
struct USTBuffAction_AIMoveToLocation_OnDestroy_Params
{
};

// Function Addons.STBuffAction_AIMoveToLocation.DoForceMoveToLocation
struct USTBuffAction_AIMoveToLocation_DoForceMoveToLocation_Params
{
	bool                                               bStart;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.STBuffAction_Attachment.OnExecute
struct USTBuffAction_Attachment_OnExecute_Params
{
};

// Function Addons.STBuffAction_Attachment.OnEnd
struct USTBuffAction_Attachment_OnEnd_Params
{
};

// Function Addons.STBuffAction_Attachment.OnDestroy
struct USTBuffAction_Attachment_OnDestroy_Params
{
};

// Function Addons.STBuffAction_Attachment.DestroyAttachment
struct USTBuffAction_Attachment_DestroyAttachment_Params
{
};

// Function Addons.STBuffAction_Attachment.CreateAttachment
struct USTBuffAction_Attachment_CreateAttachment_Params
{
};

// Function Addons.STBuffAction_Attachment.AsyncLoadFinish
struct USTBuffAction_Attachment_AsyncLoadFinish_Params
{
	class UActorComponent*                             BuffComponent;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                InstID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.STBuffAction_Attachment.AsyncLoad
struct USTBuffAction_Attachment_AsyncLoad_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.STBuffAction_AttrConversion.OnResetExecute
struct USTBuffAction_AttrConversion_OnResetExecute_Params
{
	bool                                               IgnoreEnd;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.STBuffAction_AttrConversion.OnInitialize
struct USTBuffAction_AttrConversion_OnInitialize_Params
{
};

// Function Addons.STBuffAction_AttrConversion.OnExecute
struct USTBuffAction_AttrConversion_OnExecute_Params
{
};

// Function Addons.STBuffAction_AttrConversion.OnEnd
struct USTBuffAction_AttrConversion_OnEnd_Params
{
};

// Function Addons.STBuffAction_AttrConversion.GetAttrModify
struct USTBuffAction_AttrConversion_GetAttrModify_Params
{
	class UAttrModifyComponent*                        ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Addons.STBuffAction_AttrModifier.OnResetExecute
struct USTBuffAction_AttrModifier_OnResetExecute_Params
{
	bool                                               IgnoreEnd;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.STBuffAction_AttrModifier.OnInitialize
struct USTBuffAction_AttrModifier_OnInitialize_Params
{
};

// Function Addons.STBuffAction_AttrModifier.OnExecute
struct USTBuffAction_AttrModifier_OnExecute_Params
{
};

// Function Addons.STBuffAction_AttrModifier.OnEnd
struct USTBuffAction_AttrModifier_OnEnd_Params
{
};

// Function Addons.STBuffAction_AttrModifier.GetAttrModify
struct USTBuffAction_AttrModifier_GetAttrModify_Params
{
	class UAttrModifyComponent*                        ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Addons.STBuffAction_BaseHitFilter.FilterGun
struct USTBuffAction_BaseHitFilter_FilterGun_Params
{
	class AActor*                                      Shooter;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.STBuffAction_BaseHitFilter.FilterBullet
struct USTBuffAction_BaseHitFilter_FilterBullet_Params
{
	class AActor*                                      Shooter;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.STBuffAction_BaseHitFilter.CheckFilter
struct USTBuffAction_BaseHitFilter_CheckFilter_Params
{
	class AActor*                                      Shooter;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.STBuffAction_BPCallEvent.OnInitialize
struct USTBuffAction_BPCallEvent_OnInitialize_Params
{
};

// Function Addons.STBuffAction_BPCallEvent.OnExecute
struct USTBuffAction_BPCallEvent_OnExecute_Params
{
};

// Function Addons.STBuffAction_BPCallEvent.OnEnd
struct USTBuffAction_BPCallEvent_OnEnd_Params
{
};

// Function Addons.STBuffAction_BPCallEvent.BPInitialize
struct USTBuffAction_BPCallEvent_BPInitialize_Params
{
};

// Function Addons.STBuffAction_BPCallEvent.BPGetOwner
struct USTBuffAction_BPCallEvent_BPGetOwner_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.STBuffAction_CameraAnim.OnExecute
struct USTBuffAction_CameraAnim_OnExecute_Params
{
};

// Function Addons.STBuffAction_CameraAnim.OnEnd
struct USTBuffAction_CameraAnim_OnEnd_Params
{
};

// Function Addons.STBuffAction_CameraTracker.OnExecute
struct USTBuffAction_CameraTracker_OnExecute_Params
{
};

// Function Addons.STBuffAction_CameraTracker.OnEnd
struct USTBuffAction_CameraTracker_OnEnd_Params
{
};

// Function Addons.STBuffAction_ChangeParticleParam.OnExecute
struct USTBuffAction_ChangeParticleParam_OnExecute_Params
{
};

// Function Addons.STBuffAction_ChangeParticleParam.OnEnd
struct USTBuffAction_ChangeParticleParam_OnEnd_Params
{
};

// Function Addons.STBuffAction_ChangeRectiftAvatar.OnExecute
struct USTBuffAction_ChangeRectiftAvatar_OnExecute_Params
{
};

// Function Addons.STBuffAction_ChangeRectiftAvatar.OnEnd
struct USTBuffAction_ChangeRectiftAvatar_OnEnd_Params
{
};

// Function Addons.STBuffAction_CustomCondDamage.OnInitialize
struct USTBuffAction_CustomCondDamage_OnInitialize_Params
{
};

// Function Addons.STBuffAction_CustomCondDamage.OnExecute
struct USTBuffAction_CustomCondDamage_OnExecute_Params
{
};

// Function Addons.STBuffAction_CustomCondDamage.OnEnd
struct USTBuffAction_CustomCondDamage_OnEnd_Params
{
};

// Function Addons.STBuffAction_CustomCondDamage.OnDestroy
struct USTBuffAction_CustomCondDamage_OnDestroy_Params
{
};

// Function Addons.STBuffAction_CustomCondDamage.OnAttackerPreTakeDamage
struct USTBuffAction_CustomCondDamage_OnAttackerPreTakeDamage_Params
{
	class AActor*                                      VictimActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UCustomDamageableInfo*                       uCustomDamageInfo;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.STBuffAction_CustomCondDamage.GetCustomTypeDamageData
struct USTBuffAction_CustomCondDamage_GetCustomTypeDamageData_Params
{
	class AActor*                                      VictimActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UCustomDamageableInfo*                       uCustomDamageInfo;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FBACustomTypeDamageData                     OutData;                                                  // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.STBuffAction_CustomCondDamage.GetCustomHpDamageData
struct USTBuffAction_CustomCondDamage_GetCustomHpDamageData_Params
{
	class AActor*                                      VictimActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UCustomDamageableInfo*                       uCustomDamageInfo;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FBACustomHpDamageData                       OutData;                                                  // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.STBuffAction_CustomCondDamage.GetCustomDistDamageData
struct USTBuffAction_CustomCondDamage_GetCustomDistDamageData_Params
{
	class AActor*                                      VictimActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UCustomDamageableInfo*                       uCustomDamageInfo;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FBACustomDistDamageData                     OutData;                                                  // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.STBuffAction_DirectMove.OnTick
struct USTBuffAction_DirectMove_OnTick_Params
{
	float                                              DetalTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.STBuffAction_DirectMove.OnExecute
struct USTBuffAction_DirectMove_OnExecute_Params
{
};

// Function Addons.STBuffAction_DirectMove.OnEnd
struct USTBuffAction_DirectMove_OnEnd_Params
{
};

// Function Addons.STBuffAction_DisablePawnState.OnExecute
struct USTBuffAction_DisablePawnState_OnExecute_Params
{
};

// Function Addons.STBuffAction_DisablePawnState.OnEnd
struct USTBuffAction_DisablePawnState_OnEnd_Params
{
};

// Function Addons.STBuffAction_Dot.TakeDotValue
struct USTBuffAction_Dot_TakeDotValue_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.STBuffAction_Dot.OnTick
struct USTBuffAction_Dot_OnTick_Params
{
	float                                              DetalTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.STBuffAction_Dot.OnExecute
struct USTBuffAction_Dot_OnExecute_Params
{
};

// Function Addons.STBuffAction_DotBullet.TakeDotValue
struct USTBuffAction_DotBullet_TakeDotValue_Params
{
};

// Function Addons.STBuffAction_DotBullet.OnTick
struct USTBuffAction_DotBullet_OnTick_Params
{
	float                                              DetalTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.STBuffAction_DotBullet.OnExecute
struct USTBuffAction_DotBullet_OnExecute_Params
{
};

// Function Addons.STBuffAction_DotBullet.CaculateDotValue
struct USTBuffAction_DotBullet_CaculateDotValue_Params
{
	float                                              OriginValue;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.STBuffAction_DotSkillBlackboard.TakeDotValue
struct USTBuffAction_DotSkillBlackboard_TakeDotValue_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.STBuffAction_DotSkillBlackboard.OnInitialize
struct USTBuffAction_DotSkillBlackboard_OnInitialize_Params
{
};

// Function Addons.STBuffAction_EnableMove.OnExecute
struct USTBuffAction_EnableMove_OnExecute_Params
{
};

// Function Addons.STBuffAction_EnableMove.OnEnd
struct USTBuffAction_EnableMove_OnEnd_Params
{
};

// Function Addons.STBuffAction_EnemySense.OnTick
struct USTBuffAction_EnemySense_OnTick_Params
{
	float                                              DetalTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.STBuffAction_EnemySense.OnInitialize
struct USTBuffAction_EnemySense_OnInitialize_Params
{
};

// Function Addons.STBuffAction_EnemySense.OnExecute
struct USTBuffAction_EnemySense_OnExecute_Params
{
};

// Function Addons.STBuffAction_EnterState.OnExecute
struct USTBuffAction_EnterState_OnExecute_Params
{
};

// Function Addons.STBuffAction_EnterState.OnEnd
struct USTBuffAction_EnterState_OnEnd_Params
{
};

// Function Addons.STBuffAction_EquipmentWeightAttr.OnTick
struct USTBuffAction_EquipmentWeightAttr_OnTick_Params
{
	float                                              DetalTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.STBuffAction_EquipmentWeightAttr.OnInitialize
struct USTBuffAction_EquipmentWeightAttr_OnInitialize_Params
{
};

// Function Addons.STBuffAction_EquipmentWeightAttr.OnExecute
struct USTBuffAction_EquipmentWeightAttr_OnExecute_Params
{
};

// Function Addons.STBuffAction_EquipmentWeightAttr.OnEnd
struct USTBuffAction_EquipmentWeightAttr_OnEnd_Params
{
};

// Function Addons.STBuffAction_GameTipWithMsg.OnExecute
struct USTBuffAction_GameTipWithMsg_OnExecute_Params
{
};

// Function Addons.STBuffAction_GenBulletHitEffect.SpawnExplodeActor
struct USTBuffAction_GenBulletHitEffect_SpawnExplodeActor_Params
{
	struct FVector                                     SpawnEffActorPos;                                         // (Parm, IsPlainOldData)
};

// Function Addons.STBuffAction_GenBulletHitEffect.SpawnEffectActor
struct USTBuffAction_GenBulletHitEffect_SpawnEffectActor_Params
{
	struct FVector                                     SpawnEffActorPos;                                         // (Parm, IsPlainOldData)
};

// Function Addons.STBuffAction_GenBulletHitEffect.OnServerBulleteHitEvent
struct USTBuffAction_GenBulletHitEffect_OnServerBulleteHitEvent_Params
{
	class AActor*                                      Causer;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Victim;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitPos;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class UActorComponent*                             BuffComponent;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                InstID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.STBuffAction_GenBulletHitEffect.OnInitialize
struct USTBuffAction_GenBulletHitEffect_OnInitialize_Params
{
};

// Function Addons.STBuffAction_GenBulletHitEffect.OnExecute
struct USTBuffAction_GenBulletHitEffect_OnExecute_Params
{
};

// Function Addons.STBuffAction_GenBulletHitEffect.OnDestroy
struct USTBuffAction_GenBulletHitEffect_OnDestroy_Params
{
};

// Function Addons.STBuffAction_GenBulletHitEffect.OnClientBulleteHitEvent
struct USTBuffAction_GenBulletHitEffect_OnClientBulleteHitEvent_Params
{
	class AActor*                                      Causer;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Victim;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitPos;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class UActorComponent*                             BuffComponent;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                InstID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.STBuffAction_GenBulletHitEffect.AddScreenEdgeEff
struct USTBuffAction_GenBulletHitEffect_AddScreenEdgeEff_Params
{
};

// Function Addons.STBuffAction_GenBulletHitExplode.RemoveExplodeEffect
struct USTBuffAction_GenBulletHitExplode_RemoveExplodeEffect_Params
{
};

// Function Addons.STBuffAction_GenBulletHitExplode.OnServerBulleteHitEvent
struct USTBuffAction_GenBulletHitExplode_OnServerBulleteHitEvent_Params
{
	class AActor*                                      Causer;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Victim;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitPos;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class UActorComponent*                             BuffComponent;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                InstID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.STBuffAction_GenBulletHitExplode.OnInitialize
struct USTBuffAction_GenBulletHitExplode_OnInitialize_Params
{
};

// Function Addons.STBuffAction_GenBulletHitExplode.OnDestroy
struct USTBuffAction_GenBulletHitExplode_OnDestroy_Params
{
};

// Function Addons.STBuffAction_GenBulletHitExplode.OnClientBulleteHitEvent
struct USTBuffAction_GenBulletHitExplode_OnClientBulleteHitEvent_Params
{
	class AActor*                                      Causer;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Victim;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitPos;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class UActorComponent*                             BuffComponent;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                InstID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.STBuffAction_GenBulletHitExplode.AddScreenEdgeEff
struct USTBuffAction_GenBulletHitExplode_AddScreenEdgeEff_Params
{
};

// Function Addons.STBuffAction_GenBulletPosionHitEffect.OnServerBulleteHitEvent
struct USTBuffAction_GenBulletPosionHitEffect_OnServerBulleteHitEvent_Params
{
	class AActor*                                      Causer;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Victim;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitPos;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class UActorComponent*                             BuffComponent;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                InstID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.STBuffAction_GenBulletPosionHitEffect.OnInitialize
struct USTBuffAction_GenBulletPosionHitEffect_OnInitialize_Params
{
};

// Function Addons.STBuffAction_GenBulletPosionHitEffect.OnDestroy
struct USTBuffAction_GenBulletPosionHitEffect_OnDestroy_Params
{
};

// Function Addons.STBuffAction_GenBulletPosionHitEffect.OnClientBulleteHitEvent
struct USTBuffAction_GenBulletPosionHitEffect_OnClientBulleteHitEvent_Params
{
	class AActor*                                      Causer;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Victim;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitPos;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class UActorComponent*                             BuffComponent;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                InstID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.STBuffAction_GenCureAmplifier.OnInitialize
struct USTBuffAction_GenCureAmplifier_OnInitialize_Params
{
};

// Function Addons.STBuffAction_GenCureAmplifier.OnExecute
struct USTBuffAction_GenCureAmplifier_OnExecute_Params
{
};

// Function Addons.STBuffAction_GenCureAmplifier.OnDestroy
struct USTBuffAction_GenCureAmplifier_OnDestroy_Params
{
};

// Function Addons.STBuffAction_GenCureAmplifier.GenCureEffect
struct USTBuffAction_GenCureAmplifier_GenCureEffect_Params
{
};

// Function Addons.STBuffAction_GenEffectAtPosition.OnParticleSystemFinished
struct USTBuffAction_GenEffectAtPosition_OnParticleSystemFinished_Params
{
	class UParticleSystemComponent*                    PSC;                                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Addons.STBuffAction_GenEffectAtPosition.OnInitialize
struct USTBuffAction_GenEffectAtPosition_OnInitialize_Params
{
};

// Function Addons.STBuffAction_GenEffectAtPosition.OnDestroy
struct USTBuffAction_GenEffectAtPosition_OnDestroy_Params
{
};

// Function Addons.STBuffAction_GenEffectAtPosition.OnClientTakeDamageEvent
struct USTBuffAction_GenEffectAtPosition_OnClientTakeDamageEvent_Params
{
	float                                              Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent                                DamageEvent;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	class AActor*                                      Victim;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Causer;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UActorComponent*                             BuffComponent;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                InstID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.STBuffAction_GenEffectAtPosition.OnClientPushDamageEvent
struct USTBuffAction_GenEffectAtPosition_OnClientPushDamageEvent_Params
{
	float                                              Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent                                DamageEvent;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	class AActor*                                      Causer;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Victim;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.STBuffAction_GenEffectAtPosition.GenDieEffect
struct USTBuffAction_GenEffectAtPosition_GenDieEffect_Params
{
	struct FVector                                     GenPosition;                                              // (Parm, IsPlainOldData)
};

// Function Addons.STBuffAction_GenNoiseAmplifier.SpawnEffectActor
struct USTBuffAction_GenNoiseAmplifier_SpawnEffectActor_Params
{
	struct FVector                                     SpawnEffActorPos;                                         // (Parm, IsPlainOldData)
};

// Function Addons.STBuffAction_GenNoiseAmplifier.OnServerBulleteHitEvent
struct USTBuffAction_GenNoiseAmplifier_OnServerBulleteHitEvent_Params
{
	class AActor*                                      Causer;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Victim;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitPos;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class UActorComponent*                             BuffComponent;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                InstID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.STBuffAction_GenNoiseAmplifier.OnInitialize
struct USTBuffAction_GenNoiseAmplifier_OnInitialize_Params
{
};

// Function Addons.STBuffAction_GenNoiseAmplifier.OnExecute
struct USTBuffAction_GenNoiseAmplifier_OnExecute_Params
{
};

// Function Addons.STBuffAction_GenNoiseAmplifier.OnDestroy
struct USTBuffAction_GenNoiseAmplifier_OnDestroy_Params
{
};

// Function Addons.STBuffAction_GenNoiseAmplifier.OnClientBulleteHitEvent
struct USTBuffAction_GenNoiseAmplifier_OnClientBulleteHitEvent_Params
{
	class AActor*                                      Causer;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Victim;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitPos;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class UActorComponent*                             BuffComponent;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                InstID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.STBuffAction_GenNoiseAmplifier.GenBulletHitEffect
struct USTBuffAction_GenNoiseAmplifier_GenBulletHitEffect_Params
{
	struct FVector                                     GenPosition;                                              // (Parm, IsPlainOldData)
};

// Function Addons.STBuffAction_GenNoiseAmplifier.AddScreenEdgeEff
struct USTBuffAction_GenNoiseAmplifier_AddScreenEdgeEff_Params
{
};

// Function Addons.STBuffAction_GenSmokeAmplifier.RemoveSmokeEffect
struct USTBuffAction_GenSmokeAmplifier_RemoveSmokeEffect_Params
{
};

// Function Addons.STBuffAction_GenSmokeAmplifier.OnInitialize
struct USTBuffAction_GenSmokeAmplifier_OnInitialize_Params
{
};

// Function Addons.STBuffAction_GenSmokeAmplifier.OnExecute
struct USTBuffAction_GenSmokeAmplifier_OnExecute_Params
{
};

// Function Addons.STBuffAction_GenSmokeAmplifier.OnDestroy
struct USTBuffAction_GenSmokeAmplifier_OnDestroy_Params
{
};

// Function Addons.STBuffAction_GenSmokeAmplifier.GenSmokeEffect
struct USTBuffAction_GenSmokeAmplifier_GenSmokeEffect_Params
{
};

// Function Addons.STBuffAction_HangInAir.OnTick
struct USTBuffAction_HangInAir_OnTick_Params
{
	float                                              DetalTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.STBuffAction_HangInAir.OnExecute
struct USTBuffAction_HangInAir_OnExecute_Params
{
};

// Function Addons.STBuffAction_HangInAir.OnEnd
struct USTBuffAction_HangInAir_OnEnd_Params
{
};

// Function Addons.STBuffAction_InGameUIMsg.OnExecute
struct USTBuffAction_InGameUIMsg_OnExecute_Params
{
};

// Function Addons.STBuffAction_InGameUIMsg.OnEnd
struct USTBuffAction_InGameUIMsg_OnEnd_Params
{
};

// Function Addons.STBuffAction_Invincible.OnExecute
struct USTBuffAction_Invincible_OnExecute_Params
{
};

// Function Addons.STBuffAction_Invincible.OnEnd
struct USTBuffAction_Invincible_OnEnd_Params
{
};

// Function Addons.STBuffAction_LauchCharacter.OnTick
struct USTBuffAction_LauchCharacter_OnTick_Params
{
	float                                              DetalTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.STBuffAction_LauchCharacter.OnExecute
struct USTBuffAction_LauchCharacter_OnExecute_Params
{
};

// Function Addons.STBuffAction_LauchCharacter.OnEnd
struct USTBuffAction_LauchCharacter_OnEnd_Params
{
};

// Function Addons.STBuffAction_Log.OnTick
struct USTBuffAction_Log_OnTick_Params
{
	float                                              DetalTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.STBuffAction_Log.OnExecute
struct USTBuffAction_Log_OnExecute_Params
{
};

// Function Addons.STBuffAction_Log.OnEnd
struct USTBuffAction_Log_OnEnd_Params
{
};

// Function Addons.STBuffAction_MaintenanceVehicle.OnExecute
struct USTBuffAction_MaintenanceVehicle_OnExecute_Params
{
};

// Function Addons.STBuffAction_ModifyDuration.OnInitialize
struct USTBuffAction_ModifyDuration_OnInitialize_Params
{
};

// Function Addons.STBuffAction_ModifyProperty.OnExecute
struct USTBuffAction_ModifyProperty_OnExecute_Params
{
};

// Function Addons.STBuffAction_ModifyProperty.OnEnd
struct USTBuffAction_ModifyProperty_OnEnd_Params
{
};

// Function Addons.STBuffAction_MPCSpeedScale.OnTick
struct USTBuffAction_MPCSpeedScale_OnTick_Params
{
	float                                              DetalTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.STBuffAction_MPCSpeedScale.OnInitialize
struct USTBuffAction_MPCSpeedScale_OnInitialize_Params
{
};

// Function Addons.STBuffAction_MPCSpeedScale.OnExecute
struct USTBuffAction_MPCSpeedScale_OnExecute_Params
{
};

// Function Addons.STBuffAction_MPCSpeedScale.OnEnd
struct USTBuffAction_MPCSpeedScale_OnEnd_Params
{
};

// Function Addons.STBuffAction_MPCSpeedScale.OnDestroy
struct USTBuffAction_MPCSpeedScale_OnDestroy_Params
{
};

// Function Addons.STBuffAction_MultiAttrModifier.OnInitialize
struct USTBuffAction_MultiAttrModifier_OnInitialize_Params
{
};

// Function Addons.STBuffAction_MultiAttrModifier.OnExecute
struct USTBuffAction_MultiAttrModifier_OnExecute_Params
{
};

// Function Addons.STBuffAction_MultiAttrModifier.OnEnd
struct USTBuffAction_MultiAttrModifier_OnEnd_Params
{
};

// Function Addons.STBuffAction_MultiAttrModifier.GetAttrModify
struct USTBuffAction_MultiAttrModifier_GetAttrModify_Params
{
	class UAttrModifyComponent*                        ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Addons.STBuffAction_OverrideSkill.OnExecute
struct USTBuffAction_OverrideSkill_OnExecute_Params
{
};

// Function Addons.STBuffAction_OverrideSkill.OnEnd
struct USTBuffAction_OverrideSkill_OnEnd_Params
{
};

// Function Addons.STBuffAction_PetVisible.OnInitialize
struct USTBuffAction_PetVisible_OnInitialize_Params
{
};

// Function Addons.STBuffAction_PetVisible.OnExecute
struct USTBuffAction_PetVisible_OnExecute_Params
{
};

// Function Addons.STBuffAction_PetVisible.OnEnd
struct USTBuffAction_PetVisible_OnEnd_Params
{
};

// Function Addons.STBuffAction_PlayAkAudio.OnTick
struct USTBuffAction_PlayAkAudio_OnTick_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.STBuffAction_PlayAkAudio.OnInitialize
struct USTBuffAction_PlayAkAudio_OnInitialize_Params
{
};

// Function Addons.STBuffAction_PlayAkAudio.OnExecute
struct USTBuffAction_PlayAkAudio_OnExecute_Params
{
};

// Function Addons.STBuffAction_PlayAkAudio.OnEnd
struct USTBuffAction_PlayAkAudio_OnEnd_Params
{
};

// Function Addons.STBuffAction_PlayEmote.OnExecute
struct USTBuffAction_PlayEmote_OnExecute_Params
{
};

// Function Addons.STBuffAction_PlayerInvincibleEffect.OnResetExecute
struct USTBuffAction_PlayerInvincibleEffect_OnResetExecute_Params
{
	bool                                               IgnoreEnd;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.STBuffAction_PlayerInvincibleEffect.OnInitialize
struct USTBuffAction_PlayerInvincibleEffect_OnInitialize_Params
{
};

// Function Addons.STBuffAction_PlayerInvincibleEffect.OnExecute
struct USTBuffAction_PlayerInvincibleEffect_OnExecute_Params
{
};

// Function Addons.STBuffAction_PlayerInvincibleEffect.OnEnd
struct USTBuffAction_PlayerInvincibleEffect_OnEnd_Params
{
};

// Function Addons.STBuffAction_PlayMontage.OnTick
struct USTBuffAction_PlayMontage_OnTick_Params
{
	float                                              DetalTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.STBuffAction_PlayMontage.OnInitialize
struct USTBuffAction_PlayMontage_OnInitialize_Params
{
};

// Function Addons.STBuffAction_PlayMontage.OnExecute
struct USTBuffAction_PlayMontage_OnExecute_Params
{
};

// Function Addons.STBuffAction_PlayMontage.OnEnd
struct USTBuffAction_PlayMontage_OnEnd_Params
{
};

// Function Addons.STBuffAction_PlayMontage_Pose.OnTick
struct USTBuffAction_PlayMontage_Pose_OnTick_Params
{
	float                                              DetalTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.STBuffAction_PlayMontage_Pose.OnInitialize
struct USTBuffAction_PlayMontage_Pose_OnInitialize_Params
{
};

// Function Addons.STBuffAction_PlayMontage_Pose.OnExecute
struct USTBuffAction_PlayMontage_Pose_OnExecute_Params
{
};

// Function Addons.STBuffAction_PlayMontage_Pose.OnEnd
struct USTBuffAction_PlayMontage_Pose_OnEnd_Params
{
};

// Function Addons.STBuffAction_PlayMontage_Pose_IsArmed.OnTick
struct USTBuffAction_PlayMontage_Pose_IsArmed_OnTick_Params
{
	float                                              DetalTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.STBuffAction_PlayMontage_Pose_IsArmed.OnInitialize
struct USTBuffAction_PlayMontage_Pose_IsArmed_OnInitialize_Params
{
};

// Function Addons.STBuffAction_PlayMontage_Pose_IsArmed.OnExecute
struct USTBuffAction_PlayMontage_Pose_IsArmed_OnExecute_Params
{
};

// Function Addons.STBuffAction_PlayMontage_Pose_IsArmed.OnEnd
struct USTBuffAction_PlayMontage_Pose_IsArmed_OnEnd_Params
{
};

// Function Addons.STBuffAction_PlayParticleScreenEffect.OnExecute
struct USTBuffAction_PlayParticleScreenEffect_OnExecute_Params
{
};

// Function Addons.STBuffAction_PlayParticleScreenEffect.OnEnd
struct USTBuffAction_PlayParticleScreenEffect_OnEnd_Params
{
};

// Function Addons.STBuffAction_PlayScreenAppearance.OnExecute
struct USTBuffAction_PlayScreenAppearance_OnExecute_Params
{
};

// Function Addons.STBuffAction_PlayScreenAppearance.OnEnd
struct USTBuffAction_PlayScreenAppearance_OnEnd_Params
{
};

// Function Addons.STBuffAction_PlayScreenEffect.OnExecute
struct USTBuffAction_PlayScreenEffect_OnExecute_Params
{
};

// Function Addons.STBuffAction_PlayScreenEffect.OnEnd
struct USTBuffAction_PlayScreenEffect_OnEnd_Params
{
};

// Function Addons.STBuffAction_Recovery.OnTick
struct USTBuffAction_Recovery_OnTick_Params
{
	float                                              DetalTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.STBuffAction_Recovery.OnExecute
struct USTBuffAction_Recovery_OnExecute_Params
{
};

// Function Addons.STBuffAction_Recovery.OnEnd
struct USTBuffAction_Recovery_OnEnd_Params
{
};

// Function Addons.STBuffAction_ReplaceAvatarMaterial.OnTick
struct USTBuffAction_ReplaceAvatarMaterial_OnTick_Params
{
	float                                              DetalTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.STBuffAction_ReplaceAvatarMaterial.OnInitialize
struct USTBuffAction_ReplaceAvatarMaterial_OnInitialize_Params
{
};

// Function Addons.STBuffAction_ReplaceAvatarMaterial.OnEnd
struct USTBuffAction_ReplaceAvatarMaterial_OnEnd_Params
{
};

// Function Addons.STBuffAction_ReplaceCharAnim.OnExecute
struct USTBuffAction_ReplaceCharAnim_OnExecute_Params
{
};

// Function Addons.STBuffAction_ReplaceCharAnim.OnEnd
struct USTBuffAction_ReplaceCharAnim_OnEnd_Params
{
};

// Function Addons.STBuffAction_ReplaceCharAvatarAnim.OnExecute
struct USTBuffAction_ReplaceCharAvatarAnim_OnExecute_Params
{
};

// Function Addons.STBuffAction_ReplaceCharAvatarAnim.OnEnd
struct USTBuffAction_ReplaceCharAvatarAnim_OnEnd_Params
{
};

// Function Addons.STBuffAction_SetEyeEffect.OnExecute
struct USTBuffAction_SetEyeEffect_OnExecute_Params
{
};

// Function Addons.STBuffAction_SetEyeEffect.OnEnd
struct USTBuffAction_SetEyeEffect_OnEnd_Params
{
};

// Function Addons.STBuffAction_SetMaterialParameter.SetMatParameter
struct USTBuffAction_SetMaterialParameter_SetMatParameter_Params
{
	class UMeshComponent*                              MeshComp;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FCustomMatConfig                            Config;                                                   // (Parm)
	bool                                               End;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                MeshConfigIndex;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.STBuffAction_SetMaterialParameter.OnExecute
struct USTBuffAction_SetMaterialParameter_OnExecute_Params
{
};

// Function Addons.STBuffAction_SetMaterialParameter.OnEnd
struct USTBuffAction_SetMaterialParameter_OnEnd_Params
{
};

// Function Addons.STBuffAction_SetMaterialParameterInterp.SetMatParameterInterp
struct USTBuffAction_SetMaterialParameterInterp_SetMatParameterInterp_Params
{
	class UMeshComponent*                              MeshComp;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FCustomMatConfig                            Config;                                                   // (Parm)
	float                                              DetalTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.STBuffAction_SetMaterialParameterInterp.SetMatParameter
struct USTBuffAction_SetMaterialParameterInterp_SetMatParameter_Params
{
	class UMeshComponent*                              MeshComp;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FCustomMatConfig                            Config;                                                   // (Parm)
	bool                                               End;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                MeshConfigIndex;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.STBuffAction_SetMaterialParameterInterp.SaveMatParameter
struct USTBuffAction_SetMaterialParameterInterp_SaveMatParameter_Params
{
	class UMeshComponent*                              MeshComp;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FCustomMatConfig                            Config;                                                   // (Parm)
};

// Function Addons.STBuffAction_SetMaterialParameterInterp.OnTick
struct USTBuffAction_SetMaterialParameterInterp_OnTick_Params
{
	float                                              DetalTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.STBuffAction_SetMaterialParameterInterp.OnExecute
struct USTBuffAction_SetMaterialParameterInterp_OnExecute_Params
{
};

// Function Addons.STBuffAction_SetMaterialParameterInterp.OnEnd
struct USTBuffAction_SetMaterialParameterInterp_OnEnd_Params
{
};

// Function Addons.STBuffAction_SetMoveable.OnExecute
struct USTBuffAction_SetMoveable_OnExecute_Params
{
};

// Function Addons.STBuffAction_SetMoveable.OnEnd
struct USTBuffAction_SetMoveable_OnEnd_Params
{
};

// Function Addons.STBuffAction_SetRecoveryPrompt.OnTick
struct USTBuffAction_SetRecoveryPrompt_OnTick_Params
{
	float                                              DetalTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.STBuffAction_SetRecoveryPrompt.OnExecute
struct USTBuffAction_SetRecoveryPrompt_OnExecute_Params
{
};

// Function Addons.STBuffAction_SetRecoveryPrompt.OnEnd
struct USTBuffAction_SetRecoveryPrompt_OnEnd_Params
{
};

// Function Addons.STBuffAction_SpawnActor.OnInitialize
struct USTBuffAction_SpawnActor_OnInitialize_Params
{
};

// Function Addons.STBuffAction_SpawnActor.OnExecute
struct USTBuffAction_SpawnActor_OnExecute_Params
{
};

// Function Addons.STBuffAction_SpawnActor.OnEnd
struct USTBuffAction_SpawnActor_OnEnd_Params
{
};

// Function Addons.STBuffAction_SpawnActor.AsyncLoadFinish
struct USTBuffAction_SpawnActor_AsyncLoadFinish_Params
{
	class UActorComponent*                             BuffComponent;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                InstID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.STBuffAction_StunGrenade.OnTick
struct USTBuffAction_StunGrenade_OnTick_Params
{
	float                                              DetalTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.STBuffAction_StunGrenade.OnExecute
struct USTBuffAction_StunGrenade_OnExecute_Params
{
};

// Function Addons.STBuffAction_StunGrenade.OnEnd
struct USTBuffAction_StunGrenade_OnEnd_Params
{
};

// Function Addons.STBuffAction_VehicleAddImpulse.OnTick
struct USTBuffAction_VehicleAddImpulse_OnTick_Params
{
	float                                              DetalTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.STBuffAction_VehicleAddImpulse.OnExecute
struct USTBuffAction_VehicleAddImpulse_OnExecute_Params
{
};

// Function Addons.STBuffAction_VehicleAddImpulse.OnEnd
struct USTBuffAction_VehicleAddImpulse_OnEnd_Params
{
};

// Function Addons.STBuffAction_VehicleBoostingEffect.OnInitialize
struct USTBuffAction_VehicleBoostingEffect_OnInitialize_Params
{
};

// Function Addons.STBuffAction_VehicleBoostingEffect.OnExecute
struct USTBuffAction_VehicleBoostingEffect_OnExecute_Params
{
};

// Function Addons.STBuffAction_VehicleBoostingEffect.OnEnd
struct USTBuffAction_VehicleBoostingEffect_OnEnd_Params
{
};

// Function Addons.STBuffAction_VehicleDisablePhysicsTimer.OnExecute
struct USTBuffAction_VehicleDisablePhysicsTimer_OnExecute_Params
{
};

// Function Addons.STBuffAction_VehicleDisablePhysicsTimer.OnEnd
struct USTBuffAction_VehicleDisablePhysicsTimer_OnEnd_Params
{
};

// Function Addons.STBuffAction_VehicleEngineSetup.OnTick
struct USTBuffAction_VehicleEngineSetup_OnTick_Params
{
	float                                              DetalTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.STBuffAction_VehicleEngineSetup.OnInitialize
struct USTBuffAction_VehicleEngineSetup_OnInitialize_Params
{
};

// Function Addons.STBuffAction_VehicleEngineSetup.OnExecute
struct USTBuffAction_VehicleEngineSetup_OnExecute_Params
{
};

// Function Addons.STBuffAction_VehicleEngineSetup.OnEnd
struct USTBuffAction_VehicleEngineSetup_OnEnd_Params
{
};

// Function Addons.STBuffAction_VehicleFastStart.OnTick
struct USTBuffAction_VehicleFastStart_OnTick_Params
{
	float                                              DetalTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.STBuffAction_VehicleFastStart.OnExecute
struct USTBuffAction_VehicleFastStart_OnExecute_Params
{
};

// Function Addons.STBuffAction_VehicleFastStart.OnEnd
struct USTBuffAction_VehicleFastStart_OnEnd_Params
{
};

// Function Addons.STBuffAction_VehicleSetLinearVelocity.OnTick
struct USTBuffAction_VehicleSetLinearVelocity_OnTick_Params
{
	float                                              DetalTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.STBuffAction_VehicleSetLinearVelocity.OnExecute
struct USTBuffAction_VehicleSetLinearVelocity_OnExecute_Params
{
};

// Function Addons.STBuffAction_VehicleSetLinearVelocity.OnEnd
struct USTBuffAction_VehicleSetLinearVelocity_OnEnd_Params
{
};

// Function Addons.STBuffAction_VehicleTriggerFastStart.OnTick
struct USTBuffAction_VehicleTriggerFastStart_OnTick_Params
{
	float                                              DetalTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.STBuffAction_VehicleTriggerFastStart.OnExecute
struct USTBuffAction_VehicleTriggerFastStart_OnExecute_Params
{
};

// Function Addons.STBuffAction_VehicleTriggerFastStart.OnEnd
struct USTBuffAction_VehicleTriggerFastStart_OnEnd_Params
{
};

// Function Addons.STBuffAction_WeaponAttrModifier.UndoAllWeaponAttrModifier
struct USTBuffAction_WeaponAttrModifier_UndoAllWeaponAttrModifier_Params
{
};

// Function Addons.STBuffAction_WeaponAttrModifier.OnResetExecute
struct USTBuffAction_WeaponAttrModifier_OnResetExecute_Params
{
	bool                                               IgnoreEnd;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.STBuffAction_WeaponAttrModifier.OnNewWeapon
struct USTBuffAction_WeaponAttrModifier_OnNewWeapon_Params
{
	class ASTExtraWeapon*                              Weapon;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.STBuffAction_WeaponAttrModifier.OnInitialize
struct USTBuffAction_WeaponAttrModifier_OnInitialize_Params
{
};

// Function Addons.STBuffAction_WeaponAttrModifier.OnExecute
struct USTBuffAction_WeaponAttrModifier_OnExecute_Params
{
};

// Function Addons.STBuffAction_WeaponAttrModifier.OnEnd
struct USTBuffAction_WeaponAttrModifier_OnEnd_Params
{
};

// Function Addons.STBuffAction_WeaponAttrModifier.OnDestroy
struct USTBuffAction_WeaponAttrModifier_OnDestroy_Params
{
};

// Function Addons.STBuffAction_WeaponAttrModifier.IsValidWeapon
struct USTBuffAction_WeaponAttrModifier_IsValidWeapon_Params
{
	class ASTExtraShootWeapon*                         ShootWeapon;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.STBuffAction_WeaponAttrModifier.DoWeaponAttrModifier
struct USTBuffAction_WeaponAttrModifier_DoWeaponAttrModifier_Params
{
	class ASTExtraShootWeapon*                         ShootWeapon;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.STBuffAction_WeaponAttrModifier.DoAllWeaponAttrModifier
struct USTBuffAction_WeaponAttrModifier_DoAllWeaponAttrModifier_Params
{
};

// Function Addons.STBuffAction_WeaponAttrModifier.AfterAttrModify
struct USTBuffAction_WeaponAttrModifier_AfterAttrModify_Params
{
	class ASTExtraShootWeapon*                         ShootWeapon;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              OldValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              NewValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FBAWeaponAttrModifyConfig                   AttrModifyCfg;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Addons.STBuffCondition_BlackboardValueComparison.CheckIsTrue
struct USTBuffCondition_BlackboardValueComparison_CheckIsTrue_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.STBuffCondition_BuffLevel.OnInitialize
struct USTBuffCondition_BuffLevel_OnInitialize_Params
{
};

// Function Addons.STBuffCondition_BuffLevel.CheckIsTrue
struct USTBuffCondition_BuffLevel_CheckIsTrue_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.STBuffCondition_Drowning.OnInitialize
struct USTBuffCondition_Drowning_OnInitialize_Params
{
};

// Function Addons.STBuffCondition_Drowning.CheckIsTrue
struct USTBuffCondition_Drowning_CheckIsTrue_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.STBuffCondition_HeightGround.OnInitialize
struct USTBuffCondition_HeightGround_OnInitialize_Params
{
};

// Function Addons.STBuffCondition_HeightGround.CheckIsTrue
struct USTBuffCondition_HeightGround_CheckIsTrue_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.STBuffCondition_InPoisonFog.OnInitialize
struct USTBuffCondition_InPoisonFog_OnInitialize_Params
{
};

// Function Addons.STBuffCondition_InPoisonFog.CheckIsTrue
struct USTBuffCondition_InPoisonFog_CheckIsTrue_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.STBuffCondition_IsAI.CheckIsTrue
struct USTBuffCondition_IsAI_CheckIsTrue_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.STBuffCondition_IsHealthOn.OnInitialize
struct USTBuffCondition_IsHealthOn_OnInitialize_Params
{
};

// Function Addons.STBuffCondition_IsHealthOn.CheckIsTrue
struct USTBuffCondition_IsHealthOn_CheckIsTrue_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.STBuffCondition_IsHit.OnTakeDamageEvent
struct USTBuffCondition_IsHit_OnTakeDamageEvent_Params
{
	float                                              Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent                                DamageEvent;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	class AActor*                                      Victim;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Causer;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UActorComponent*                             BuffComponent;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                InstID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.STBuffCondition_IsHit.OnPushDamageEvent
struct USTBuffCondition_IsHit_OnPushDamageEvent_Params
{
	float                                              Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent                                DamageEvent;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	class AActor*                                      Causer;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Victim;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UActorComponent*                             BuffComponent;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                InstID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.STBuffCondition_IsHit.OnPostTakeDamageEvent
struct USTBuffCondition_IsHit_OnPostTakeDamageEvent_Params
{
	float                                              Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent                                DamageEvent;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	class AController*                                 Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                DamageType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.STBuffCondition_IsHit.OnInitialize
struct USTBuffCondition_IsHit_OnInitialize_Params
{
};

// Function Addons.STBuffCondition_IsHit.OnDestroy
struct USTBuffCondition_IsHit_OnDestroy_Params
{
};

// Function Addons.STBuffCondition_IsHit.IsFilterBullet
struct USTBuffCondition_IsHit_IsFilterBullet_Params
{
	class AActor*                                      Shooter;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.STBuffCondition_IsHit.HandleDamageEvent
struct USTBuffCondition_IsHit_HandleDamageEvent_Params
{
	float                                              Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent                                DamageEvent;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	class AActor*                                      Victim;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Causer;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.STBuffCondition_IsHit.CheckIsTrue
struct USTBuffCondition_IsHit_CheckIsTrue_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.STBuffCondition_IsInDoor.OnInitialize
struct USTBuffCondition_IsInDoor_OnInitialize_Params
{
};

// Function Addons.STBuffCondition_IsInDoor.CheckIsTrue
struct USTBuffCondition_IsInDoor_CheckIsTrue_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.STBuffCondition_IsKeepInState.OnTakeDamageEvent
struct USTBuffCondition_IsKeepInState_OnTakeDamageEvent_Params
{
	float                                              Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent                                DamageEvent;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	class AController*                                 Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                DamageType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.STBuffCondition_IsKeepInState.OnInitialize
struct USTBuffCondition_IsKeepInState_OnInitialize_Params
{
};

// Function Addons.STBuffCondition_IsKeepInState.OnDestroy
struct USTBuffCondition_IsKeepInState_OnDestroy_Params
{
};

// Function Addons.STBuffCondition_IsKeepInState.OnCharacterTakeDamageEvent
struct USTBuffCondition_IsKeepInState_OnCharacterTakeDamageEvent_Params
{
	class ASTExtraBaseCharacter*                       TakeDamageChar;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.STBuffCondition_IsKeepInState.IsInState
struct USTBuffCondition_IsKeepInState_IsInState_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.STBuffCondition_IsKeepInState.HandlePlayerStateChanged
struct USTBuffCondition_IsKeepInState_HandlePlayerStateChanged_Params
{
	EPawnState                                         NewState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.STBuffCondition_IsKeepInState.CheckIsTrue
struct USTBuffCondition_IsKeepInState_CheckIsTrue_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.STBuffCondition_IsKill.OnTakeDamageEvent
struct USTBuffCondition_IsKill_OnTakeDamageEvent_Params
{
	float                                              Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent                                DamageEvent;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	class AActor*                                      Victim;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Causer;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UActorComponent*                             BuffComponent;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                InstID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.STBuffCondition_IsKill.OnPushDamageEvent
struct USTBuffCondition_IsKill_OnPushDamageEvent_Params
{
	float                                              Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent                                DamageEvent;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	class AActor*                                      Causer;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Victim;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UActorComponent*                             BuffComponent;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                InstID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.STBuffCondition_IsKill.OnInitialize
struct USTBuffCondition_IsKill_OnInitialize_Params
{
};

// Function Addons.STBuffCondition_IsKill.OnDestroy
struct USTBuffCondition_IsKill_OnDestroy_Params
{
};

// Function Addons.STBuffCondition_IsKill.IsFilterGun
struct USTBuffCondition_IsKill_IsFilterGun_Params
{
	class AActor*                                      Shooter;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.STBuffCondition_IsKill.IsFilterBullet
struct USTBuffCondition_IsKill_IsFilterBullet_Params
{
	class AActor*                                      Shooter;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.STBuffCondition_IsKill.HandleDamageEvent
struct USTBuffCondition_IsKill_HandleDamageEvent_Params
{
	float                                              Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent                                DamageEvent;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	class AActor*                                      Victim;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Causer;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.STBuffCondition_IsKill.CheckIsTrue
struct USTBuffCondition_IsKill_CheckIsTrue_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.STBuffCondition_IsKillSomeOne.OnRealDeathEvent
struct USTBuffCondition_IsKillSomeOne_OnRealDeathEvent_Params
{
	class AActor*                                      Victim;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UActorComponent*                             BuffComponent;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                InstID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.STBuffCondition_IsKillSomeOne.OnNearDeathEvent
struct USTBuffCondition_IsKillSomeOne_OnNearDeathEvent_Params
{
	class APawn*                                       Victim;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 Causer;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.STBuffCondition_IsKillSomeOne.OnInitialize
struct USTBuffCondition_IsKillSomeOne_OnInitialize_Params
{
};

// Function Addons.STBuffCondition_IsKillSomeOne.OnDestroy
struct USTBuffCondition_IsKillSomeOne_OnDestroy_Params
{
};

// Function Addons.STBuffCondition_IsKillSomeOne.CheckIsTrue
struct USTBuffCondition_IsKillSomeOne_CheckIsTrue_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.STBuffCondition_IsLanded.OnMovementChanged
struct USTBuffCondition_IsLanded_OnMovementChanged_Params
{
	class ACharacter*                                  Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<enum EMovementMode>                    PrevMovementMode;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      PreviousCustomMode;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.STBuffCondition_IsLanded.OnInitialize
struct USTBuffCondition_IsLanded_OnInitialize_Params
{
};

// Function Addons.STBuffCondition_IsLanded.OnDestroy
struct USTBuffCondition_IsLanded_OnDestroy_Params
{
};

// Function Addons.STBuffCondition_IsLanded.CheckIsTrue
struct USTBuffCondition_IsLanded_CheckIsTrue_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.STBuffCondition_IsMoving.OnInitialize
struct USTBuffCondition_IsMoving_OnInitialize_Params
{
};

// Function Addons.STBuffCondition_IsMoving.CheckIsTrue
struct USTBuffCondition_IsMoving_CheckIsTrue_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.STBuffCondition_IsNearDeath.OnInitialize
struct USTBuffCondition_IsNearDeath_OnInitialize_Params
{
};

// Function Addons.STBuffCondition_IsNearDeath.OnDestroy
struct USTBuffCondition_IsNearDeath_OnDestroy_Params
{
};

// Function Addons.STBuffCondition_IsNearDeath.IsEnterNearDeath
struct USTBuffCondition_IsNearDeath_IsEnterNearDeath_Params
{
	bool                                               IsEnter;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.STBuffCondition_IsNearDeath.CheckIsTrue
struct USTBuffCondition_IsNearDeath_CheckIsTrue_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.STBuffCondition_IsOnVehicle.OnInitialize
struct USTBuffCondition_IsOnVehicle_OnInitialize_Params
{
};

// Function Addons.STBuffCondition_IsOnVehicle.OnEnterVehicle
struct USTBuffCondition_IsOnVehicle_OnEnterVehicle_Params
{
	bool                                               IsEnter;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Vehicle;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.STBuffCondition_IsOnVehicle.OnDestroy
struct USTBuffCondition_IsOnVehicle_OnDestroy_Params
{
};

// Function Addons.STBuffCondition_IsOnVehicle.CheckIsTrue
struct USTBuffCondition_IsOnVehicle_CheckIsTrue_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.STBuffCondition_IsOnWater.OnInitialize
struct USTBuffCondition_IsOnWater_OnInitialize_Params
{
};

// Function Addons.STBuffCondition_IsOnWater.OnDestroy
struct USTBuffCondition_IsOnWater_OnDestroy_Params
{
};

// Function Addons.STBuffCondition_IsOnWater.CheckIsTrue
struct USTBuffCondition_IsOnWater_CheckIsTrue_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.STBuffCondition_IsPlayer.OnInitialize
struct USTBuffCondition_IsPlayer_OnInitialize_Params
{
};

// Function Addons.STBuffCondition_IsPlayer.OnDestroy
struct USTBuffCondition_IsPlayer_OnDestroy_Params
{
};

// Function Addons.STBuffCondition_IsPlayer.CheckIsTrue
struct USTBuffCondition_IsPlayer_CheckIsTrue_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.STBuffCondition_IsRescueFinish.OnInitialize
struct USTBuffCondition_IsRescueFinish_OnInitialize_Params
{
};

// Function Addons.STBuffCondition_IsRescueFinish.OnDestroy
struct USTBuffCondition_IsRescueFinish_OnDestroy_Params
{
};

// Function Addons.STBuffCondition_IsRescueFinish.IsRescueFinish
struct USTBuffCondition_IsRescueFinish_IsRescueFinish_Params
{
	class UActorComponent*                             BuffComponent;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                InstID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.STBuffCondition_IsRescueFinish.CheckIsTrue
struct USTBuffCondition_IsRescueFinish_CheckIsTrue_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.STBuffCondition_IsRescueOther.OnRescueOther
struct USTBuffCondition_IsRescueOther_OnRescueOther_Params
{
	class APawn*                                       SelfActor;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bNearDeath;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                TypeId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Killer;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.STBuffCondition_IsRescueOther.OnInitialize
struct USTBuffCondition_IsRescueOther_OnInitialize_Params
{
};

// Function Addons.STBuffCondition_IsRescueOther.OnDestroy
struct USTBuffCondition_IsRescueOther_OnDestroy_Params
{
};

// Function Addons.STBuffCondition_IsRescueOther.CheckIsTrue
struct USTBuffCondition_IsRescueOther_CheckIsTrue_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.STBuffCondition_IsStartRescue.OnInitialize
struct USTBuffCondition_IsStartRescue_OnInitialize_Params
{
};

// Function Addons.STBuffCondition_IsStartRescue.OnDestroy
struct USTBuffCondition_IsStartRescue_OnDestroy_Params
{
};

// Function Addons.STBuffCondition_IsStartRescue.IsStartRescue
struct USTBuffCondition_IsStartRescue_IsStartRescue_Params
{
	class AActor*                                      BeRescue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsStart;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.STBuffCondition_IsStartRescue.CheckIsTrue
struct USTBuffCondition_IsStartRescue_CheckIsTrue_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.STBuffCondition_IsVisible.CheckIsTrue
struct USTBuffCondition_IsVisible_CheckIsTrue_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.STBuffCondition_IsWeaponEquip.OnInitialize
struct USTBuffCondition_IsWeaponEquip_OnInitialize_Params
{
};

// Function Addons.STBuffCondition_IsWeaponEquip.OnDestroy
struct USTBuffCondition_IsWeaponEquip_OnDestroy_Params
{
};

// Function Addons.STBuffCondition_IsWeaponEquip.IsUnEquipWeapon
struct USTBuffCondition_IsWeaponEquip_IsUnEquipWeapon_Params
{
	class ASTExtraWeapon*                              Weapon;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.STBuffCondition_IsWeaponEquip.IsEquipWeapon
struct USTBuffCondition_IsWeaponEquip_IsEquipWeapon_Params
{
	class ASTExtraWeapon*                              Weapon;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<enum ESurviveWeaponPropSlot>           Slot;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.STBuffCondition_IsWeaponEquip.CheckIsTrue
struct USTBuffCondition_IsWeaponEquip_CheckIsTrue_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.STBuffCondition_ItemOperation.OnInitialize
struct USTBuffCondition_ItemOperation_OnInitialize_Params
{
};

// Function Addons.STBuffCondition_ItemOperation.OnDestroy
struct USTBuffCondition_ItemOperation_OnDestroy_Params
{
};

// Function Addons.STBuffCondition_ItemOperation.HandleItemOperate
struct USTBuffCondition_ItemOperation_HandleItemOperate_Params
{
	struct FItemDefineID                               DefineID;                                                 // (Parm)
	EBattleItemOperationType                           InOperationType;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Reason;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.STBuffCondition_ItemOperation.HandleItemCountChanged
struct USTBuffCondition_ItemOperation_HandleItemCountChanged_Params
{
	struct FItemDefineID                               DefineID;                                                 // (Parm)
	EBattleItemOperationType                           InOperationType;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Count;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.STBuffCondition_ItemOperation.CheckIsTrue
struct USTBuffCondition_ItemOperation_CheckIsTrue_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.STBuffCondition_LayerEqual.CheckIsTrue
struct USTBuffCondition_LayerEqual_CheckIsTrue_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.STBuffCondition_LayerMax.CheckIsTrue
struct USTBuffCondition_LayerMax_CheckIsTrue_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.STBuffCondition_LayerSpecific.CheckIsTrue
struct USTBuffCondition_LayerSpecific_CheckIsTrue_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.STBuffCondition_MovementMode.OnMovementChanged
struct USTBuffCondition_MovementMode_OnMovementChanged_Params
{
	class ACharacter*                                  Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<enum EMovementMode>                    PrevMovementMode;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      PreviousCustomMode;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.STBuffCondition_MovementMode.OnInitialize
struct USTBuffCondition_MovementMode_OnInitialize_Params
{
};

// Function Addons.STBuffCondition_MovementMode.OnDestroy
struct USTBuffCondition_MovementMode_OnDestroy_Params
{
};

// Function Addons.STBuffCondition_MovementMode.CheckIsTrue
struct USTBuffCondition_MovementMode_CheckIsTrue_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.STBuffCondition_PlayerState.OnInitialize
struct USTBuffCondition_PlayerState_OnInitialize_Params
{
};

// Function Addons.STBuffCondition_PlayerState.CheckIsTrue
struct USTBuffCondition_PlayerState_CheckIsTrue_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.STBuffCondition_PropertyLimit.OnInitialize
struct USTBuffCondition_PropertyLimit_OnInitialize_Params
{
};

// Function Addons.STBuffCondition_PropertyLimit.CheckIsTrue
struct USTBuffCondition_PropertyLimit_CheckIsTrue_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.STBuffCondition_TeammateDistance.CheckIsTrue
struct USTBuffCondition_TeammateDistance_CheckIsTrue_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.STBuffCondition_Timer.OnInitialize
struct USTBuffCondition_Timer_OnInitialize_Params
{
};

// Function Addons.STBuffCondition_Timer.CheckIsTrue
struct USTBuffCondition_Timer_CheckIsTrue_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.STBuffCondition_VehicleAvatarChanged.OnInitialize
struct USTBuffCondition_VehicleAvatarChanged_OnInitialize_Params
{
};

// Function Addons.STBuffCondition_VehicleAvatarChanged.OnDestroy
struct USTBuffCondition_VehicleAvatarChanged_OnDestroy_Params
{
};

// Function Addons.STBuffCondition_VehicleAvatarChanged.OnAvatarChanged
struct USTBuffCondition_VehicleAvatarChanged_OnAvatarChanged_Params
{
};

// Function Addons.STBuffCondition_VehicleAvatarChanged.CheckIsTrue
struct USTBuffCondition_VehicleAvatarChanged_CheckIsTrue_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.STBuffCondition_WeaponPropSlot.OnInitialize
struct USTBuffCondition_WeaponPropSlot_OnInitialize_Params
{
};

// Function Addons.STBuffCondition_WeaponPropSlot.CheckIsTrue
struct USTBuffCondition_WeaponPropSlot_CheckIsTrue_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.STBuffCondition_WeaponType.OnInitialize
struct USTBuffCondition_WeaponType_OnInitialize_Params
{
};

// Function Addons.STBuffCondition_WeaponType.CheckIsTrue
struct USTBuffCondition_WeaponType_CheckIsTrue_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.STDestructionSubSystem.SetDestructibleEnable
struct USTDestructionSubSystem_SetDestructibleEnable_Params
{
	class ASTExtraGameStateBase*                       GameState;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.STDestructionSubSystem.OnVehicleHit
struct USTDestructionSubSystem_OnVehicleHit_Params
{
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      HitActor;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         HitComp;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     DestroyCenter;                                            // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Addons.STDestructionSubSystem.OnSTGameStateBeginPlay
struct USTDestructionSubSystem_OnSTGameStateBeginPlay_Params
{
	class AGameState*                                  GameState;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.STDestructionSubSystem.OnServerRifleHit
struct USTDestructionSubSystem_OnServerRifleHit_Params
{
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      HitActor;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         HitComp;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     DestroyCenter;                                            // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              OriginDamage;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.STDestructionSubSystem.OnServerMeleeHit
struct USTDestructionSubSystem_OnServerMeleeHit_Params
{
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     DestroyCenter;                                            // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              OriginDamage;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.STDestructionSubSystem.OnServerGrenadeExplosion
struct USTDestructionSubSystem_OnServerGrenadeExplosion_Params
{
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     DestroyCenter;                                            // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              OriginRange;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              OriginDamage;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.STDestructionSubSystem.OnServerExplosin
struct USTDestructionSubSystem_OnServerExplosin_Params
{
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              OriginRange;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              OriginDamage;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.STDestructionUtils.SetDestructionEnable
struct USTDestructionUtils_SetDestructionEnable_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.STDestructionUtils.GetBPUtils
struct USTDestructionUtils_GetBPUtils_Params
{
	class USTDestructionBPUtils*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.SyncOBDataActor.OnRep_TotalPlayersStaticInfo
struct ASyncOBDataActor_OnRep_TotalPlayersStaticInfo_Params
{
};

// Function Addons.SyncOBDataActor.OnRep_RefreshTotalPlayers
struct ASyncOBDataActor_OnRep_RefreshTotalPlayers_Params
{
};

// Function Addons.SyncOBDataActor.OnRep_RefreshAirDropBox
struct ASyncOBDataActor_OnRep_RefreshAirDropBox_Params
{
};

// Function Addons.SyncOBDataActor.OnRep_RealTimeAPIListForReplay
struct ASyncOBDataActor_OnRep_RealTimeAPIListForReplay_Params
{
};

// Function Addons.SyncOBDataActor.OnRep_PlayerFiringList
struct ASyncOBDataActor_OnRep_PlayerFiringList_Params
{
};

// Function Addons.SyncOBDataActor.OnRep_PlayerBreathInfoList
struct ASyncOBDataActor_OnRep_PlayerBreathInfoList_Params
{
};

// Function Addons.SyncOBDataActor.OnRep_AfterMatchAPIListForReplay
struct ASyncOBDataActor_OnRep_AfterMatchAPIListForReplay_Params
{
};

// Function Addons.SyncOBDataActor.GetPlayerInfoInOBByPlayerKey
struct ASyncOBDataActor_GetPlayerInfoInOBByPlayerKey_Params
{
	uint32_t                                           InPlayerKey;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FPlayerInfoInOB                             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Addons.SyncOBDataActor.GetPlayerInfoInOBByName
struct ASyncOBDataActor_GetPlayerInfoInOBByName_Params
{
	struct FString                                     InPlayerName;                                             // (Parm, ZeroConstructor)
	struct FPlayerInfoInOB                             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Addons.SyncOBDataActor.GetNewestAirDropBoxPos
struct ASyncOBDataActor_GetNewestAirDropBoxPos_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Addons.SyncOBDataActor.GetNearPlayerList
struct ASyncOBDataActor_GetNearPlayerList_Params
{
	TArray<struct FPlayerInfoInOB>                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Addons.SyncOBDataActor.GetCustomPlayerNameByPlayerName
struct ASyncOBDataActor_GetCustomPlayerNameByPlayerName_Params
{
	struct FString                                     PlayerName;                                               // (ConstParm, Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Addons.SyncOBDataActor.GetBreath
struct ASyncOBDataActor_GetBreath_Params
{
	uint32_t                                           InPlayerKey;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.SyncOBDataActor.GetAirDropBoxList
struct ASyncOBDataActor_GetAirDropBoxList_Params
{
	TArray<struct FAirDropBoxInOb>                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Addons.TPlanSyncOBDataActor.SetTPlanPlayerUnderground
struct ATPlanSyncOBDataActor_SetTPlanPlayerUnderground_Params
{
	uint32_t                                           PlayerKey;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsUnderground;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.TPlanSyncOBDataActor.SetTPlanPlayerInfoWorth
struct ATPlanSyncOBDataActor_SetTPlanPlayerInfoWorth_Params
{
	int                                                TeamID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	uint32_t                                           PlayerKey;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Worth;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.TPlanSyncOBDataActor.SetTPlanPlayerInfoState
struct ATPlanSyncOBDataActor_SetTPlanPlayerInfoState_Params
{
	int                                                TeamID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	uint32_t                                           PlayerKey;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.TPlanSyncOBDataActor.SetTPlanPlayerInfoKills
struct ATPlanSyncOBDataActor_SetTPlanPlayerInfoKills_Params
{
	int                                                TeamID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	uint32_t                                           PlayerKey;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      Kills;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.TPlanSyncOBDataActor.OnRep_TeamInfos
struct ATPlanSyncOBDataActor_OnRep_TeamInfos_Params
{
};

// Function Addons.TPlanSyncOBDataActor.OnRep_PlayerUndergroundList
struct ATPlanSyncOBDataActor_OnRep_PlayerUndergroundList_Params
{
};

// Function Addons.TPlanSyncOBDataActor.OnRefreshTeamInfos
struct ATPlanSyncOBDataActor_OnRefreshTeamInfos_Params
{
};

// Function Addons.TPlanSyncOBDataActor.GetTPlanTeamInfo
struct ATPlanSyncOBDataActor_GetTPlanTeamInfo_Params
{
	int                                                TeamID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTPlanTeamInfo                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Addons.TPlanSyncOBDataActor.GetTPlanPlayerInfo
struct ATPlanSyncOBDataActor_GetTPlanPlayerInfo_Params
{
	int                                                TeamID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	uint32_t                                           PlayerKey;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTPlanPlayerInfo                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Addons.TRexVehicleDamageComponent.HandleFootOverlapVehicle
struct UTRexVehicleDamageComponent_HandleFootOverlapVehicle_Params
{
	class ASTExtraVehicleBase*                         OverlappedVehicle;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class UShapeComponent*                             DamageCollision;                                          // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FOverlapResult                              OverlapResult;                                            // (Parm, OutParm, IsPlainOldData)
};

// Function Addons.TRexVehicleDamageComponent.HandleFootOverlapCharacter
struct UTRexVehicleDamageComponent_HandleFootOverlapCharacter_Params
{
	class ASTExtraBaseCharacter*                       OverlappedCharacter;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class UShapeComponent*                             DamageCollision;                                          // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FOverlapResult                              OverlapResult;                                            // (Parm, OutParm, IsPlainOldData)
};

// Function Addons.TyrannosaurusRexAnimInstance.ResetStartMoving
struct UTyrannosaurusRexAnimInstance_ResetStartMoving_Params
{
};

// Function Addons.TyrannosaurusRexVehicle.ShowRoarOverSpeedTips
struct ATyrannosaurusRexVehicle_ShowRoarOverSpeedTips_Params
{
};

// Function Addons.TyrannosaurusRexVehicle.ShakeNearbyPlayerCamera
struct ATyrannosaurusRexVehicle_ShakeNearbyPlayerCamera_Params
{
	class UClass*                                      CameraShakeClass;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.TyrannosaurusRexVehicle.ServerStopRoar
struct ATyrannosaurusRexVehicle_ServerStopRoar_Params
{
};

// Function Addons.TyrannosaurusRexVehicle.ServerRoar
struct ATyrannosaurusRexVehicle_ServerRoar_Params
{
};

// Function Addons.TyrannosaurusRexVehicle.ServerBreakOut
struct ATyrannosaurusRexVehicle_ServerBreakOut_Params
{
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.TyrannosaurusRexVehicle.PrepareApplyRoarAttack
struct ATyrannosaurusRexVehicle_PrepareApplyRoarAttack_Params
{
};

// Function Addons.TyrannosaurusRexVehicle.OnTRexHPCHanged
struct ATyrannosaurusRexVehicle_OnTRexHPCHanged_Params
{
	float                                              NewHP;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              HPMax;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.TyrannosaurusRexVehicle.OnRoarFinished
struct ATyrannosaurusRexVehicle_OnRoarFinished_Params
{
	TEnumAsByte<enum EBioVehicleSkillStopReason>       Reason;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.TyrannosaurusRexVehicle.OnRep_bIsRoaring
struct ATyrannosaurusRexVehicle_OnRep_bIsRoaring_Params
{
};

// Function Addons.TyrannosaurusRexVehicle.GetVehicleMovement
struct ATyrannosaurusRexVehicle_GetVehicleMovement_Params
{
	class URaptorMovementComponent*                    ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Addons.TyrannosaurusRexVehicle.GetVehicleBreakOutState
struct ATyrannosaurusRexVehicle_GetVehicleBreakOutState_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.TyrannosaurusRexVehicle.GetNearlyPlayers
struct ATyrannosaurusRexVehicle_GetNearlyPlayers_Params
{
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class ASTExtraBaseCharacter*>               Results;                                                  // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.TyrannosaurusRexVehicle.EndRoarAttack
struct ATyrannosaurusRexVehicle_EndRoarAttack_Params
{
};

// Function Addons.TyrannosaurusRexVehicle.ClientHandleVehicleDead
struct ATyrannosaurusRexVehicle_ClientHandleVehicleDead_Params
{
	bool                                               VehicleDeadDirection;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.TyrannosaurusRexVehicle.CheckCanApplyDamageTo
struct ATyrannosaurusRexVehicle_CheckCanApplyDamageTo_Params
{
	class ASTExtraBaseCharacter*                       Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.TyrannosaurusRexVehicle.CallClientDrawDebugSphere
struct ATyrannosaurusRexVehicle_CallClientDrawDebugSphere_Params
{
	struct FVector                                     Location;                                                 // (Parm, IsPlainOldData)
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.TyrannosaurusRexVehicle.BroadCastStopMontage
struct ATyrannosaurusRexVehicle_BroadCastStopMontage_Params
{
};

// Function Addons.TyrannosaurusRexVehicle.BroadCastPlayRoarMontage
struct ATyrannosaurusRexVehicle_BroadCastPlayRoarMontage_Params
{
};

// Function Addons.TyrannosaurusRexVehicle.BroadCastClientDrawSphere
struct ATyrannosaurusRexVehicle_BroadCastClientDrawSphere_Params
{
	struct FVector                                     Center;                                                   // (Parm, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.TyrannosaurusRexVehicle.BreakOut
struct ATyrannosaurusRexVehicle_BreakOut_Params
{
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.TyrannosaurusRexVehicle.ApplyRoarAttackToSpecifiedCharacter
struct ATyrannosaurusRexVehicle_ApplyRoarAttackToSpecifiedCharacter_Params
{
	class ASTExtraBaseCharacter*                       TargetCharacter;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.TyrannosaurusRexVehicle.ApplyRoarAttack
struct ATyrannosaurusRexVehicle_ApplyRoarAttack_Params
{
};

// Function Addons.UAERotatingMovementComponent.SetRotationToTarget
struct UUAERotatingMovementComponent_SetRotationToTarget_Params
{
	struct FRotator                                    InTargetRotation;                                         // (Parm, IsPlainOldData)
	float                                              MoveSeconds;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     TargetLocation;                                           // (Parm, IsPlainOldData)
};

// Function Addons.UAERotatingMovementComponent.FaceToTarget
struct UUAERotatingMovementComponent_FaceToTarget_Params
{
	class ASTExtraBaseCharacter*                       InTargetCharacter;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.UAERotatingMovementComponent.EnableRotationToTarget
struct UUAERotatingMovementComponent_EnableRotationToTarget_Params
{
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.UAERotatingMovementComponent.EnableRotation
struct UUAERotatingMovementComponent_EnableRotation_Params
{
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.UAESkillAction_ActorJump.OnActorLanded
struct UUAESkillAction_ActorJump_OnActorLanded_Params
{
	struct FHitResult                                  InHitResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Addons.UAESkillAction_ActorJump.HandleOnActorHit
struct UUAESkillAction_ActorJump_HandleOnActorHit_Params
{
	class AActor*                                      SelfActor;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NormalImpulse;                                            // (Parm, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Addons.UAESkillAction_ActorMove.HandleOnActorHit
struct UUAESkillAction_ActorMove_HandleOnActorHit_Params
{
	class AActor*                                      SelfActor;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NormalImpulse;                                            // (Parm, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Addons.UAESkillAction_ActorMoveToLocation.HandleOnActorHit
struct UUAESkillAction_ActorMoveToLocation_HandleOnActorHit_Params
{
	class AActor*                                      SelfActor;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NormalImpulse;                                            // (Parm, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Addons.UAESkillAction_BindDelegate.OnDelegateBindCallback
struct UUAESkillAction_BindDelegate_OnDelegateBindCallback_Params
{
};

// Function Addons.UAESkillAction_CharMoveByPath.HandleOnActorHit
struct UUAESkillAction_CharMoveByPath_HandleOnActorHit_Params
{
	class AActor*                                      SelfActor;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NormalImpulse;                                            // (Parm, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Addons.UAESkillAction_ConsumeHandleItem.PostInitSkill
struct UUAESkillAction_ConsumeHandleItem_PostInitSkill_Params
{
	class UUTSkillManagerComponent*                    SkillManagerComponent;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AUTSkill*                                    CurOwnerSkill;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.UAESkillAction_EnableMove.UndoAction_Internal
struct UUAESkillAction_EnableMove_UndoAction_Internal_Params
{
};

// Function Addons.UAESkillAction_EnableMove.RealDoAction_Internal
struct UUAESkillAction_EnableMove_RealDoAction_Internal_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.UAESkillAction_FaceTarget.OnFaceActionEnd
struct UUAESkillAction_FaceTarget_OnFaceActionEnd_Params
{
	class UUTSkillManagerComponent*                    SkillMgr;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Addons.UAESkillAction_FollowMoveActor.HandleOnActorHit
struct UUAESkillAction_FollowMoveActor_HandleOnActorHit_Params
{
	class AActor*                                      SelfActor;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NormalImpulse;                                            // (Parm, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Addons.UAESkillAction_Invincible.UndoAction_Internal
struct UUAESkillAction_Invincible_UndoAction_Internal_Params
{
};

// Function Addons.UAESkillAction_Invincible.RealDoAction_Internal
struct UUAESkillAction_Invincible_RealDoAction_Internal_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.UAESkillAction_JumpByStages.Rising
struct UUAESkillAction_JumpByStages_Rising_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.UAESkillAction_JumpByStages.OnActorLanded
struct UUAESkillAction_JumpByStages_OnActorLanded_Params
{
	struct FHitResult                                  InHitResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Addons.UAESkillAction_JumpByStages.Hovering
struct UUAESkillAction_JumpByStages_Hovering_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.UAESkillAction_JumpByStages.HandleOnActorHit
struct UUAESkillAction_JumpByStages_HandleOnActorHit_Params
{
	class AActor*                                      SelfActor;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NormalImpulse;                                            // (Parm, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Addons.UAESkillAction_JumpByStages.FreeFalling
struct UUAESkillAction_JumpByStages_FreeFalling_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.UAESkillAction_JumpByStages.Diving
struct UUAESkillAction_JumpByStages_Diving_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.UAESkillAction_JumpPhaseWithState.HandleChangeCurrentUsingWeapon
struct UUAESkillAction_JumpPhaseWithState_HandleChangeCurrentUsingWeapon_Params
{
	TEnumAsByte<enum ESurviveWeaponPropSlot>           TargetChangeSlot;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.UAESkillAction_Log.UndoAction_Internal
struct UUAESkillAction_Log_UndoAction_Internal_Params
{
};

// Function Addons.UAESkillAction_MarkCurrentUseWeapon.RealDoAction_Internal
struct UUAESkillAction_MarkCurrentUseWeapon_RealDoAction_Internal_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.UAESkillAction_MoveToRelativeLocation.HandleOnActorHit
struct UUAESkillAction_MoveToRelativeLocation_HandleOnActorHit_Params
{
	class AActor*                                      SelfActor;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NormalImpulse;                                            // (Parm, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Addons.UAESkillAction_PeriodAction.UndoPeriodAction
struct UUAESkillAction_PeriodAction_UndoPeriodAction_Params
{
	class UActorComponent*                             SkillManagerComponent;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Addons.UAESkillAction_PeriodAction.DoPeriodAction
struct UUAESkillAction_PeriodAction_DoPeriodAction_Params
{
	class UActorComponent*                             SkillManagerComponent;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Addons.UAESkillAction_PlayAvatarAction.OnAsyncLoadHandlesDone
struct UUAESkillAction_PlayAvatarAction_OnAsyncLoadHandlesDone_Params
{
	int                                                InAsyncLoadIndex;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UBattleItemHandleBase*>               AvatarHandles;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FItemDefineID>                       DefineIDList;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Addons.UAESkillAction_PlayMontage_IsArmed.OnAsyncLoadAnimResFinished
struct UUAESkillAction_PlayMontage_IsArmed_OnAsyncLoadAnimResFinished_Params
{
	struct FPlayMontageAsyncloadParams                 LoadParams;                                               // (Parm)
};

// Function Addons.UAESkillAction_PlayMontage_Pose_IsArmed.OnAsyncLoadAnimResFinished
struct UUAESkillAction_PlayMontage_Pose_IsArmed_OnAsyncLoadAnimResFinished_Params
{
	struct FPlayMontageAsyncloadParams                 LoadParams;                                               // (Parm)
};

// Function Addons.UAESkillAction_SetCameraData.ResetCameraData
struct UUAESkillAction_SetCameraData_ResetCameraData_Params
{
	class UActorComponent*                             NewOwnerActorComponent;                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Addons.UAESkillAction_UIMessage.UndoAction_Internal
struct UUAESkillAction_UIMessage_UndoAction_Internal_Params
{
};

// Function Addons.UAESkillAction_UIMessage.RealDoAction_Internal
struct UUAESkillAction_UIMessage_RealDoAction_Internal_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.UAESkillAction_UIMessage.GetOwernPawnController
struct UUAESkillAction_UIMessage_GetOwernPawnController_Params
{
	class ASTExtraPlayerController*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.UAESkillAction_UpdateSyncBlackboardV.OnReceiveUpdateSyncBlackboardV
struct UUAESkillAction_UpdateSyncBlackboardV_OnReceiveUpdateSyncBlackboardV_Params
{
	class UUTSkillManagerComponent*                    SkillMgr;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                nSkillID;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.UTSkillAppearance_AddParticle.UndoAction_Internal
struct UUTSkillAppearance_AddParticle_UndoAction_Internal_Params
{
};

// Function Addons.UTSkillAppearance_AddParticle.Reset_Internal
struct UUTSkillAppearance_AddParticle_Reset_Internal_Params
{
};

// Function Addons.UTSkillAppearance_AddParticle.OnParticleSystemFinished
struct UUTSkillAppearance_AddParticle_OnParticleSystemFinished_Params
{
	class UParticleSystemComponent*                    PSC;                                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Addons.UTSkillAppearance_ParticleSystem.StopParticleSystem
struct UUTSkillAppearance_ParticleSystem_StopParticleSystem_Params
{
	class UUTSkillManagerComponent*                    SkillManagerComponent;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Addons.UTSkillAppearance_ParticleSystem.RealDoActionWrapper
struct UUTSkillAppearance_ParticleSystem_RealDoActionWrapper_Params
{
	class UUTSkillManagerComponent*                    SkillManagerComponent;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Addons.UTSkillAppearance_ParticleSystem.OnHurtAppearanceParticleSystemFinished
struct UUTSkillAppearance_ParticleSystem_OnHurtAppearanceParticleSystemFinished_Params
{
	class UParticleSystemComponent*                    PSC;                                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Addons.UTSkillAppearance_ParticleSystem.OnAppearanceParticleSystemFinished
struct UUTSkillAppearance_ParticleSystem_OnAppearanceParticleSystemFinished_Params
{
	class UParticleSystemComponent*                    PSC;                                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Addons.UTSkillAppearance_ParticleSystem.GetPlayRateScale
struct UUTSkillAppearance_ParticleSystem_GetPlayRateScale_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.UTSkillAppearance_RemoveAllParticle.UndoAction_Internal
struct UUTSkillAppearance_RemoveAllParticle_UndoAction_Internal_Params
{
};

// Function Addons.UTSkillAppearance_RemoveAllParticle.Reset_Internal
struct UUTSkillAppearance_RemoveAllParticle_Reset_Internal_Params
{
};

// Function Addons.UTSkillAppearance_RemoveAllParticle.RealDoAction_Internal
struct UUTSkillAppearance_RemoveAllParticle_RealDoAction_Internal_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.UTSkillAppearance_RomoveParticle.UndoAction_Internal
struct UUTSkillAppearance_RomoveParticle_UndoAction_Internal_Params
{
};

// Function Addons.UTSkillAppearance_RomoveParticle.Reset_Internal
struct UUTSkillAppearance_RomoveParticle_Reset_Internal_Params
{
};

// Function Addons.UTSkillAppearance_RomoveParticle.RealDoAction_Internal
struct UUTSkillAppearance_RomoveParticle_RealDoAction_Internal_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.UTSkillAppearance_SimpleParticleSystem.RealDoActionWrapper
struct UUTSkillAppearance_SimpleParticleSystem_RealDoActionWrapper_Params
{
	class UUTSkillManagerComponent*                    SkillManagerComponent;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Addons.UTSkillAppearance_SkillWarning.UndoAction_Internal
struct UUTSkillAppearance_SkillWarning_UndoAction_Internal_Params
{
};

// Function Addons.VehicleAttachmentComponent.TryToAttachOtherVehicle
struct UVehicleAttachmentComponent_TryToAttachOtherVehicle_Params
{
};

// Function Addons.VehicleAttachmentComponent.SetAttachState
struct UVehicleAttachmentComponent_SetAttachState_Params
{
	class ASTExtraVehicleBase*                         OtherVehicle;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.VehicleAttachmentComponent.ServerDoAttachVehicle
struct UVehicleAttachmentComponent_ServerDoAttachVehicle_Params
{
	class ASTExtraVehicleBase*                         OtherVehicle;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.VehicleAttachmentComponent.OnRep_AttachedVehicle
struct UVehicleAttachmentComponent_OnRep_AttachedVehicle_Params
{
	class ASTExtraVehicleBase*                         PrevVehicle;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.VehicleAttachmentComponent.GetAttachState
struct UVehicleAttachmentComponent_GetAttachState_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.VehicleAttachmentComponent.GetAttachedVehicle
struct UVehicleAttachmentComponent_GetAttachedVehicle_Params
{
	class ASTExtraVehicleBase*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.VehicleAttachmentComponent.DoAttachVehicle
struct UVehicleAttachmentComponent_DoAttachVehicle_Params
{
	class ASTExtraVehicleBase*                         OtherVehicle;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.VehicleAttachmentComponent.CheckSurroundingVehicle
struct UVehicleAttachmentComponent_CheckSurroundingVehicle_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.VehicleAttachmentComponent.CanInteractedByOther
struct UVehicleAttachmentComponent_CanInteractedByOther_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.VehicleAttachmentComponent.CanAttachVehicle
struct UVehicleAttachmentComponent_CanAttachVehicle_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.VehicleAttachmentComponent.CallServerToAttach
struct UVehicleAttachmentComponent_CallServerToAttach_Params
{
};

// Function Addons.VehicleAttachmentComponent.BroadcastClientVehicleAttachment
struct UVehicleAttachmentComponent_BroadcastClientVehicleAttachment_Params
{
	class ASTExtraVehicleBase*                         OtherVehicle;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.VehicleHitBioVHComponent.OnTriggeredBy
struct UVehicleHitBioVHComponent_OnTriggeredBy_Params
{
	class AActor*                                      Other;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTriggerEvent                               TriggerEvent;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Addons.VehicleHitBioVHComponent.GetTriggerForVehicle
struct UVehicleHitBioVHComponent_GetTriggerForVehicle_Params
{
	class UCapsuleComponent*                           ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Addons.VehicleLODlimitActor.OnVehicleEndPlay
struct AVehicleLODlimitActor_OnVehicleEndPlay_Params
{
	class ASTExtraVehicleBase*                         Vehicle;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.VehicleLODlimitActor.OnVehicleBeginPlay
struct AVehicleLODlimitActor_OnVehicleBeginPlay_Params
{
	class ASTExtraVehicleBase*                         Vehicle;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.VehicleLODlimitActor.OnUpdateSeatGUI
struct AVehicleLODlimitActor_OnUpdateSeatGUI_Params
{
};

// Function Addons.VehicleRubberDuck.GetVehicleMovement
struct AVehicleRubberDuck_GetVehicleMovement_Params
{
	class UFloatingVehicleVehicleMovementComponent2*   ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Addons.VehicleRubberDuck.GetForwardSpeed
struct AVehicleRubberDuck_GetForwardSpeed_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.VehicleSyncComponent_Hover.SendServerHoverMoveToClient
struct UVehicleSyncComponent_Hover_SendServerHoverMoveToClient_Params
{
	float                                              ServerAcceleration;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ServerMaxSpeed;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ServerMaxAcceleration;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.VehicleSyncComponent_Hover.Correct
struct UVehicleSyncComponent_Hover_Correct_Params
{
	bool                                               bIsSnap;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bPlayerChannel;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ZAdjustValue;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.VenomArmAnimInstance.UnbindDelegate
struct UVenomArmAnimInstance_UnbindDelegate_Params
{
};

// Function Addons.VenomArmAnimInstance.HandleOnOwnerPlayerPlayMontage
struct UVenomArmAnimInstance_HandleOnOwnerPlayerPlayMontage_Params
{
	class UAnimMontage*                                PlayedMontage;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.VenomArmAnimInstance.HandleOnOwnerPlayerEndMontage
struct UVenomArmAnimInstance_HandleOnOwnerPlayerEndMontage_Params
{
	class UAnimMontage*                                EndedMontage;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInterrupted;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.VenomArmAnimInstance.BpOnTargetLocationFound
struct UVenomArmAnimInstance_BpOnTargetLocationFound_Params
{
};

// Function Addons.VenomArmAnimInstance.BpHandleOnPlayerPullObjEnd
struct UVenomArmAnimInstance_BpHandleOnPlayerPullObjEnd_Params
{
};

// Function Addons.VenomArmAnimInstance.BpHandleOnPlayerPullObj
struct UVenomArmAnimInstance_BpHandleOnPlayerPullObj_Params
{
};

// Function Addons.VenomArmAnimInstance.BpHandleOnPlayerCatchObjEnd
struct UVenomArmAnimInstance_BpHandleOnPlayerCatchObjEnd_Params
{
};

// Function Addons.VenomArmAnimInstance.BpHandleOnPlayerCatchObj
struct UVenomArmAnimInstance_BpHandleOnPlayerCatchObj_Params
{
};

// Function Addons.VenomArmAnimInstance.BpHandleOnPlayerCatchFlyEnd
struct UVenomArmAnimInstance_BpHandleOnPlayerCatchFlyEnd_Params
{
};

// Function Addons.VenomArmAnimInstance.BpHandleOnPlayerCatchFly
struct UVenomArmAnimInstance_BpHandleOnPlayerCatchFly_Params
{
};

// Function Addons.VenomArmAnimInstance.BpHandleOnPlayerAirCatchFlyEnd
struct UVenomArmAnimInstance_BpHandleOnPlayerAirCatchFlyEnd_Params
{
};

// Function Addons.VenomArmAnimInstance.BpHandleOnPlayerAirCatchFly
struct UVenomArmAnimInstance_BpHandleOnPlayerAirCatchFly_Params
{
};

// Function Addons.VenomArmAnimInstance.BindDelegate
struct UVenomArmAnimInstance_BindDelegate_Params
{
};

// Function Addons.VenomTwoArmAnimInstance.DoIKTrace
struct UVenomTwoArmAnimInstance_DoIKTrace_Params
{
};

// Function Addons.VisualDebugComponent.StopContinuous
struct UVisualDebugComponent_StopContinuous_Params
{
	int                                                TaskId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.VisualDebugComponent.RPC_DrawDebug_Text
struct UVisualDebugComponent_RPC_DrawDebug_Text_Params
{
	struct FDrawShape_Text                             Text;                                                     // (ConstParm, Parm, ReferenceParm)
};

// Function Addons.VisualDebugComponent.RPC_DrawDebug_StopMultiShapes
struct UVisualDebugComponent_RPC_DrawDebug_StopMultiShapes_Params
{
	int                                                TaskId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.VisualDebugComponent.RPC_DrawDebug_Sphere
struct UVisualDebugComponent_RPC_DrawDebug_Sphere_Params
{
	struct FDrawShape_Sphere                           Sphere;                                                   // (ConstParm, Parm, ReferenceParm)
};

// Function Addons.VisualDebugComponent.RPC_DrawDebug_MultiShapes
struct UVisualDebugComponent_RPC_DrawDebug_MultiShapes_Params
{
	TArray<struct FDrawShape_Sphere>                   Spheres;                                                  // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
	TArray<struct FDrawShape_Line>                     Lines;                                                    // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
};

// Function Addons.VisualDebugComponent.RPC_DrawDebug_Line
struct UVisualDebugComponent_RPC_DrawDebug_Line_Params
{
	struct FDrawShape_Line                             Line;                                                     // (ConstParm, Parm, ReferenceParm)
};

// Function Addons.VisualDebugComponent.RPC_DrawDebug_Cylinder
struct UVisualDebugComponent_RPC_DrawDebug_Cylinder_Params
{
	struct FDrawShape_Cylinder                         Cylinder;                                                 // (ConstParm, Parm, ReferenceParm)
};

// Function Addons.VisualDebugComponent.RPC_DrawDebug_Capsule
struct UVisualDebugComponent_RPC_DrawDebug_Capsule_Params
{
	struct FDrawShape_Capsule                          Capsule;                                                  // (ConstParm, Parm, ReferenceParm)
};

// Function Addons.VisualDebugComponent.RPC_DrawDebug_Box
struct UVisualDebugComponent_RPC_DrawDebug_Box_Params
{
	struct FDrawShape_Box                              Box;                                                      // (ConstParm, Parm, ReferenceParm)
};

// Function Addons.VisualDebugComponent.NetMulticast_DrawDebug_Sphere
struct UVisualDebugComponent_NetMulticast_DrawDebug_Sphere_Params
{
	struct FDrawShape_Sphere                           Sphere;                                                   // (ConstParm, Parm, ReferenceParm)
};

// Function Addons.VisualDebugComponent.NetMulticast_DrawDebug_Line
struct UVisualDebugComponent_NetMulticast_DrawDebug_Line_Params
{
	struct FDrawShape_Line                             Line;                                                     // (ConstParm, Parm, ReferenceParm)
};

// Function Addons.VisualDebugComponent.NetMulticast_DrawDebug_Cylinder
struct UVisualDebugComponent_NetMulticast_DrawDebug_Cylinder_Params
{
	struct FDrawShape_Cylinder                         Cylinder;                                                 // (ConstParm, Parm, ReferenceParm)
};

// Function Addons.VisualDebugComponent.NetMulticast_DrawDebug_Capsule
struct UVisualDebugComponent_NetMulticast_DrawDebug_Capsule_Params
{
	struct FDrawShape_Capsule                          Capsule;                                                  // (ConstParm, Parm, ReferenceParm)
};

// Function Addons.VisualDebugComponent.NetMulticast_DrawDebug_Box
struct UVisualDebugComponent_NetMulticast_DrawDebug_Box_Params
{
	struct FDrawShape_Box                              Box;                                                      // (ConstParm, Parm, ReferenceParm)
};

// Function Addons.VisualDebugComponent.MarkContinuousEnd
struct UVisualDebugComponent_MarkContinuousEnd_Params
{
};

// Function Addons.VisualDebugComponent.MarkContinuousBegin
struct UVisualDebugComponent_MarkContinuousBegin_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.VisualDebugComponent.DrawString
struct UVisualDebugComponent_DrawString_Params
{
	struct FVector                                     TextLocation;                                             // (ConstParm, Parm, IsPlainOldData)
	struct FString                                     Text;                                                     // (Parm, ZeroConstructor)
	class AActor*                                      TestBaseActor;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FColor                                      TextColor;                                                // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.VisualDebugComponent.DrawSphere
struct UVisualDebugComponent_DrawSphere_Params
{
	struct FVector                                     Center;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FColor                                      Color;                                                    // (Parm, IsPlainOldData)
	float                                              LifeTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Thickness;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.VisualDebugComponent.DrawLine
struct UVisualDebugComponent_DrawLine_Params
{
	struct FVector                                     Start;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     End;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FColor                                      Color;                                                    // (Parm, IsPlainOldData)
	float                                              LifeTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Thickness;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.VisualDebugComponent.DrawCylinder
struct UVisualDebugComponent_DrawCylinder_Params
{
	struct FVector                                     Start;                                                    // (ConstParm, Parm, IsPlainOldData)
	struct FVector                                     End;                                                      // (ConstParm, Parm, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Segments;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FColor                                      Color;                                                    // (Parm, IsPlainOldData)
	float                                              LifeTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Thickness;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.VisualDebugComponent.DrawCapsule
struct UVisualDebugComponent_DrawCapsule_Params
{
	class APawn*                                       Requester;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Center;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              HalfHeight;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FQuat                                       Rotation;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FColor                                      Color;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              LifeTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Thickness;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.VisualDebugComponent.DrawBox
struct UVisualDebugComponent_DrawBox_Params
{
	struct FVector                                     Center;                                                   // (ConstParm, Parm, IsPlainOldData)
	struct FVector                                     Extent;                                                   // (Parm, IsPlainOldData)
	struct FColor                                      Color;                                                    // (Parm, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (ConstParm, Parm, IsPlainOldData)
	float                                              LifeTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Thickness;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.VisualDebugLibrary.StopDrawContinuous
struct UVisualDebugLibrary_StopDrawContinuous_Params
{
	class APawn*                                       Requester;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                TaskId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.VisualDebugLibrary.MarkContinuousEnd
struct UVisualDebugLibrary_MarkContinuousEnd_Params
{
	class APawn*                                       Requester;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.VisualDebugLibrary.MarkContinuousBegin
struct UVisualDebugLibrary_MarkContinuousBegin_Params
{
	class APawn*                                       Requester;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.VisualDebugLibrary.DrawText
struct UVisualDebugLibrary_DrawText_Params
{
	class APawn*                                       Requester;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     TextLocation;                                             // (ConstParm, Parm, IsPlainOldData)
	struct FString                                     Text;                                                     // (Parm, ZeroConstructor)
	class AActor*                                      TestBaseActor;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FColor                                      Color;                                                    // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.VisualDebugLibrary.DrawSphere
struct UVisualDebugLibrary_DrawSphere_Params
{
	class APawn*                                       Requester;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Center;                                                   // (ConstParm, Parm, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Segments;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FColor                                      Color;                                                    // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Thickness;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.VisualDebugLibrary.DrawLine
struct UVisualDebugLibrary_DrawLine_Params
{
	class APawn*                                       Requester;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LineStart;                                                // (ConstParm, Parm, IsPlainOldData)
	struct FVector                                     LineEnd;                                                  // (ConstParm, Parm, IsPlainOldData)
	struct FColor                                      Color;                                                    // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Thickness;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.VisualDebugLibrary.DrawCylinder
struct UVisualDebugLibrary_DrawCylinder_Params
{
	class APawn*                                       Requester;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Start;                                                    // (ConstParm, Parm, IsPlainOldData)
	struct FVector                                     End;                                                      // (ConstParm, Parm, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Segments;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FColor                                      Color;                                                    // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Thickness;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.VisualDebugLibrary.DrawCapsule
struct UVisualDebugLibrary_DrawCapsule_Params
{
	class APawn*                                       Requester;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Center;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              HalfHeight;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FQuat                                       Rotation;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FColor                                      Color;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              LifeTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Thickness;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.VisualDebugLibrary.DrawBox
struct UVisualDebugLibrary_DrawBox_Params
{
	class APawn*                                       Requester;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Center;                                                   // (ConstParm, Parm, IsPlainOldData)
	struct FVector                                     Extent;                                                   // (Parm, IsPlainOldData)
	struct FColor                                      Color;                                                    // (Parm, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (ConstParm, Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Thickness;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

}

