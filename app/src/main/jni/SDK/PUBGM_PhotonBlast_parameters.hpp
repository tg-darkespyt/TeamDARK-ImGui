#pragma once

// Pubgm India-64bit (3.4.0) SDK by BangJO [Z] DM @isar_hackJO To Buy Tool SDK

#include "../SDK.hpp"

namespace SDK
{
//---------------------By BangJO---------------------------
//Parameters
//---------------------By BangJO---------------------------

// Function PhotonBlast.PhotonReplicationStaticMeshComponent.UnRegistLuaTick
struct UPhotonReplicationStaticMeshComponent_UnRegistLuaTick_Params
{
};

// Function PhotonBlast.PhotonReplicationStaticMeshComponent.UnRegisterFromCluster
struct UPhotonReplicationStaticMeshComponent_UnRegisterFromCluster_Params
{
};

// Function PhotonBlast.PhotonReplicationStaticMeshComponent.SetMoveable
struct UPhotonReplicationStaticMeshComponent_SetMoveable_Params
{
	bool                                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PhotonBlast.PhotonReplicationStaticMeshComponent.SetClusterUniqueID
struct UPhotonReplicationStaticMeshComponent_SetClusterUniqueID_Params
{
	int                                                InClusterID;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PhotonBlast.PhotonReplicationStaticMeshComponent.SetClusterEntityState
struct UPhotonReplicationStaticMeshComponent_SetClusterEntityState_Params
{
	EClusterEntityState                                EntityState;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PhotonBlast.PhotonReplicationStaticMeshComponent.RegistLuaTick
struct UPhotonReplicationStaticMeshComponent_RegistLuaTick_Params
{
	float                                              TickInterval;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PhotonBlast.PhotonReplicationStaticMeshComponent.RegisterToCluster
struct UPhotonReplicationStaticMeshComponent_RegisterToCluster_Params
{
};

// Function PhotonBlast.PhotonReplicationStaticMeshComponent.MarkPropDirty
struct UPhotonReplicationStaticMeshComponent_MarkPropDirty_Params
{
	int                                                PropIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PhotonBlast.PhotonDestructibleMeshComponent.SetupFragmentsMaxHp
struct UPhotonDestructibleMeshComponent_SetupFragmentsMaxHp_Params
{
	float                                              HP;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PhotonBlast.PhotonDestructibleMeshComponent.SetServerDamagedDelegate
struct UPhotonDestructibleMeshComponent_SetServerDamagedDelegate_Params
{
	struct FScriptDelegate                             InDelegate;                                               // (Parm, ZeroConstructor)
};

// Function PhotonBlast.PhotonDestructibleMeshComponent.SetFracturedMesh
struct UPhotonDestructibleMeshComponent_SetFracturedMesh_Params
{
	class UPhotonDestructibleMesh*                     InFracturedMesh;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Force;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PhotonBlast.PhotonDestructibleMeshComponent.Server_OnComponentHitAction
struct UPhotonDestructibleMeshComponent_Server_OnComponentHitAction_Params
{
	class UPrimitiveComponent*                         HitComp;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     NormalImpulse;                                            // (Parm, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function PhotonBlast.PhotonDestructibleMeshComponent.Server_DamageFragmentsByRadius
struct UPhotonDestructibleMeshComponent_Server_DamageFragmentsByRadius_Params
{
	struct FVector4                                    WorldImpactVelocity;                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     HitPoint;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              HP;                                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Attenuation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<enum EPhotonWeaponType>                WeaponType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PhotonBlast.PhotonDestructibleMeshComponent.Server_DamageFragmentsByHp
struct UPhotonDestructibleMeshComponent_Server_DamageFragmentsByHp_Params
{
	TArray<int>                                        FragmentsIndex;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<float>                                      HP;                                                       // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FVector                                     WorldImpactPoint;                                         // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector4                                    WorldImpactVelocity;                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PhotonBlast.PhotonDestructibleMeshComponent.OnRep_ImpactData
struct UPhotonDestructibleMeshComponent_OnRep_ImpactData_Params
{
};

// Function PhotonBlast.PhotonDestructibleMeshComponent.OnRep_FragmentsState
struct UPhotonDestructibleMeshComponent_OnRep_FragmentsState_Params
{
};

// Function PhotonBlast.PhotonDestructibleMeshComponent.IsFragmentCanDestroy
struct UPhotonDestructibleMeshComponent_IsFragmentCanDestroy_Params
{
	int                                                FragmentItemIndex;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PhotonBlast.PhotonDestructibleMeshComponent.IsFragmentCanBeDamaged
struct UPhotonDestructibleMeshComponent_IsFragmentCanBeDamaged_Params
{
	int                                                FragmentItemIndex;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PhotonBlast.PhotonDestructibleMeshComponent.GetPhotonDestructibleMesh
struct UPhotonDestructibleMeshComponent_GetPhotonDestructibleMesh_Params
{
	class UPhotonDestructibleMesh*                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PhotonBlast.PhotonDestructibleMeshComponent.GetFragmentTransform
struct UPhotonDestructibleMeshComponent_GetFragmentTransform_Params
{
	int                                                FragmentIndex;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  OutTransform;                                             // (Parm, OutParm, IsPlainOldData)
	bool                                               WorldSpace;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PhotonBlast.PhotonDestructibleMeshComponent.GetFragmentsWorldPosition
struct UPhotonDestructibleMeshComponent_GetFragmentsWorldPosition_Params
{
	int                                                FragmentIndex;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     FragmentPosition;                                         // (Parm, OutParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PhotonBlast.PhotonDestructibleMeshComponent.GetFragmentsByRadius
struct UPhotonDestructibleMeshComponent_GetFragmentsByRadius_Params
{
	struct FVector                                     HitPoint;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              Radius;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        FragmentsIndex;                                           // (Parm, OutParm, ZeroConstructor)
	TArray<float>                                      ImpactDistance;                                           // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PhotonBlast.PhotonDestructibleMeshComponent.GetFragmentItemCount
struct UPhotonDestructibleMeshComponent_GetFragmentItemCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PhotonBlast.PhotonDestructibleMeshComponent.GetFragmentBounds
struct UPhotonDestructibleMeshComponent_GetFragmentBounds_Params
{
	int                                                FragmentIndex;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FBox                                        OutBox;                                                   // (Parm, OutParm, IsPlainOldData)
	bool                                               WorldSpace;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PhotonBlast.PhotonDestructibleMeshComponent.GetFracturedMesh
struct UPhotonDestructibleMeshComponent_GetFracturedMesh_Params
{
	class UPhotonFracturedMesh*                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PhotonBlast.PhotonReplicationInstancedStaticMeshComponent.UnRegistLuaTick
struct UPhotonReplicationInstancedStaticMeshComponent_UnRegistLuaTick_Params
{
};

// Function PhotonBlast.PhotonReplicationInstancedStaticMeshComponent.UnRegisterFromCluster
struct UPhotonReplicationInstancedStaticMeshComponent_UnRegisterFromCluster_Params
{
};

// Function PhotonBlast.PhotonReplicationInstancedStaticMeshComponent.SetMoveable
struct UPhotonReplicationInstancedStaticMeshComponent_SetMoveable_Params
{
	bool                                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PhotonBlast.PhotonReplicationInstancedStaticMeshComponent.SetClusterUniqueID
struct UPhotonReplicationInstancedStaticMeshComponent_SetClusterUniqueID_Params
{
	int                                                InClusterID;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PhotonBlast.PhotonReplicationInstancedStaticMeshComponent.SetClusterEntityState
struct UPhotonReplicationInstancedStaticMeshComponent_SetClusterEntityState_Params
{
	EClusterEntityState                                EntityState;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PhotonBlast.PhotonReplicationInstancedStaticMeshComponent.RegistLuaTick
struct UPhotonReplicationInstancedStaticMeshComponent_RegistLuaTick_Params
{
	float                                              TickInterval;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PhotonBlast.PhotonReplicationInstancedStaticMeshComponent.RegisterToCluster
struct UPhotonReplicationInstancedStaticMeshComponent_RegisterToCluster_Params
{
};

// Function PhotonBlast.PhotonReplicationInstancedStaticMeshComponent.MarkPropDirty
struct UPhotonReplicationInstancedStaticMeshComponent_MarkPropDirty_Params
{
	int                                                PropIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PhotonBlast.PhotonInstancedDestructibleMeshComponent.SetupFragmentsMaxHp
struct UPhotonInstancedDestructibleMeshComponent_SetupFragmentsMaxHp_Params
{
	float                                              HP;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PhotonBlast.PhotonInstancedDestructibleMeshComponent.SetServerDamagedDelegate
struct UPhotonInstancedDestructibleMeshComponent_SetServerDamagedDelegate_Params
{
	struct FScriptDelegate                             InDelegate;                                               // (Parm, ZeroConstructor)
};

// Function PhotonBlast.PhotonInstancedDestructibleMeshComponent.SetFracturedMesh
struct UPhotonInstancedDestructibleMeshComponent_SetFracturedMesh_Params
{
	class UPhotonDestructibleMesh*                     InFracturedMesh;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Force;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PhotonBlast.PhotonInstancedDestructibleMeshComponent.Server_OnComponentHitAction
struct UPhotonInstancedDestructibleMeshComponent_Server_OnComponentHitAction_Params
{
	class UPrimitiveComponent*                         HitComp;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     NormalImpulse;                                            // (Parm, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function PhotonBlast.PhotonInstancedDestructibleMeshComponent.Server_DamageFragmentsByRadius
struct UPhotonInstancedDestructibleMeshComponent_Server_DamageFragmentsByRadius_Params
{
	struct FVector4                                    WorldImpactVelocity;                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     HitPoint;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              HP;                                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Attenuation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<enum EPhotonWeaponType>                WeaponType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PhotonBlast.PhotonInstancedDestructibleMeshComponent.ReplaceAllInstances
struct UPhotonInstancedDestructibleMeshComponent_ReplaceAllInstances_Params
{
	TArray<struct FTransform>                          InstanceTransforms;                                       // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               bShouldReturnIndices;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function PhotonBlast.PhotonInstancedDestructibleMeshComponent.OnRep_ImpactData
struct UPhotonInstancedDestructibleMeshComponent_OnRep_ImpactData_Params
{
};

// Function PhotonBlast.PhotonInstancedDestructibleMeshComponent.OnRep_FragmentsState
struct UPhotonInstancedDestructibleMeshComponent_OnRep_FragmentsState_Params
{
};

// Function PhotonBlast.PhotonInstancedDestructibleMeshComponent.IsFragmentCanDestroy
struct UPhotonInstancedDestructibleMeshComponent_IsFragmentCanDestroy_Params
{
	int                                                InstanceIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                FragmentItemIndex;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PhotonBlast.PhotonInstancedDestructibleMeshComponent.GetPhotonDestructibleMesh
struct UPhotonInstancedDestructibleMeshComponent_GetPhotonDestructibleMesh_Params
{
	class UPhotonDestructibleMesh*                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PhotonBlast.PhotonInstancedDestructibleMeshComponent.GetInstanceItemCount
struct UPhotonInstancedDestructibleMeshComponent_GetInstanceItemCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PhotonBlast.PhotonInstancedDestructibleMeshComponent.GetFragmentTransform
struct UPhotonInstancedDestructibleMeshComponent_GetFragmentTransform_Params
{
	int                                                InstanceIndex;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                FragmentIndex;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  OutTransform;                                             // (Parm, OutParm, IsPlainOldData)
	bool                                               WorldSpace;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PhotonBlast.PhotonInstancedDestructibleMeshComponent.GetFragmentsWorldPosition
struct UPhotonInstancedDestructibleMeshComponent_GetFragmentsWorldPosition_Params
{
	int                                                InstanceIndex;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                FragmentIndex;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     FragmentPosition;                                         // (Parm, OutParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PhotonBlast.PhotonInstancedDestructibleMeshComponent.GetFragmentItemCount
struct UPhotonInstancedDestructibleMeshComponent_GetFragmentItemCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PhotonBlast.PhotonInstancedDestructibleMeshComponent.GetFracturedMesh
struct UPhotonInstancedDestructibleMeshComponent_GetFracturedMesh_Params
{
	class UPhotonFracturedMesh*                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PhotonBlast.PhotonInstancedDestructibleMeshComponent.AddInstanceWorldSpace
struct UPhotonInstancedDestructibleMeshComponent_AddInstanceWorldSpace_Params
{
	struct FTransform                                  WorldTransform;                                           // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PhotonBlast.PhotonInstancedDestructibleMeshComponent.AddInstances
struct UPhotonInstancedDestructibleMeshComponent_AddInstances_Params
{
	TArray<struct FTransform>                          InstanceTransforms;                                       // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               bShouldReturnIndices;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bMarkRenderStateDirty;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function PhotonBlast.PhotonInstancedDestructibleMeshComponent.AddInstance
struct UPhotonInstancedDestructibleMeshComponent_AddInstance_Params
{
	struct FTransform                                  InstanceTransform;                                        // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PhotonBlast.PhotonReplicationSkeletalMeshComponent.UnRegistLuaTick
struct UPhotonReplicationSkeletalMeshComponent_UnRegistLuaTick_Params
{
};

// Function PhotonBlast.PhotonReplicationSkeletalMeshComponent.UnRegisterFromCluster
struct UPhotonReplicationSkeletalMeshComponent_UnRegisterFromCluster_Params
{
};

// Function PhotonBlast.PhotonReplicationSkeletalMeshComponent.SetMoveable
struct UPhotonReplicationSkeletalMeshComponent_SetMoveable_Params
{
	bool                                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PhotonBlast.PhotonReplicationSkeletalMeshComponent.SetClusterUniqueID
struct UPhotonReplicationSkeletalMeshComponent_SetClusterUniqueID_Params
{
	int                                                InClusterID;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PhotonBlast.PhotonReplicationSkeletalMeshComponent.SetClusterEntityState
struct UPhotonReplicationSkeletalMeshComponent_SetClusterEntityState_Params
{
	EClusterEntityState                                EntityState;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PhotonBlast.PhotonReplicationSkeletalMeshComponent.RegistLuaTick
struct UPhotonReplicationSkeletalMeshComponent_RegistLuaTick_Params
{
	float                                              TickInterval;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PhotonBlast.PhotonReplicationSkeletalMeshComponent.RegisterToCluster
struct UPhotonReplicationSkeletalMeshComponent_RegisterToCluster_Params
{
};

// Function PhotonBlast.PhotonReplicationSkeletalMeshComponent.MarkPropDirty
struct UPhotonReplicationSkeletalMeshComponent_MarkPropDirty_Params
{
	int                                                PropIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

}

