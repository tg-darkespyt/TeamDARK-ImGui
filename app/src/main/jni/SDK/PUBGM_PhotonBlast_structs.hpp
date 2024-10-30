#pragma once

// Pubgm India-64bit (3.4.0) SDK by BangJO [Z] DM @isar_hackJO To Buy Tool SDK

namespace SDK
{
//---------------------By BangJO---------------------------
//Enums
//---------------------By BangJO---------------------------

// Enum PhotonBlast.ESlicedAxis
enum class ESlicedAxis : uint8_t
{
	SlicedAxis_X                   = 0,
	SlicedAxis_Y                   = 1,
	SlicedAxis_Z                   = 2,
	SlicedAxis_NX                  = 3,
	SlicedAxis_NY                  = 4,
	SlicedAxis_NZ                  = 5,
	SlicedAxis_MAX                 = 6
};


// Enum PhotonBlast.EFragmentHideRenderType
enum class EFragmentHideRenderType : uint8_t
{
	EFragmentHideRenderType_Matrix = 0,
	EFragmentHideRenderType_Bit    = 1,
	EFragmentHideRenderType_MAX    = 2
};


// Enum PhotonBlast.EPhotonCollisionType
enum class EPhotonCollisionType : uint8_t
{
	PhotonCollisionType_Simple     = 0,
	PhotonCollisionType_Complex    = 1,
	PhotonCollisionType_MAX        = 2
};


// Enum PhotonBlast.EPhotonDestructibleAction
enum class EPhotonDestructibleAction : uint8_t
{
	PhotonDestructibleAction_Hide  = 0,
	PhotonDestructibleAction_Detach = 1,
	PhotonDestructibleAction_Slide = 2,
	PhotonDestructibleAction_MAX   = 3
};


// Enum PhotonBlast.EPhotonFracturedMeshFragmentState
enum class EPhotonFracturedMeshFragmentState : uint8_t
{
	EPhotonFracturedMeshFragmentState__PhotonFracturedMesh_Initial = 0,
	EPhotonFracturedMeshFragmentState__PhotonFracturedMesh_UnderDestruction = 1,
	EPhotonFracturedMeshFragmentState__PhotonFracturedMesh_Damaged = 2,
	EPhotonFracturedMeshFragmentState__PhotonFracturedMesh_MAX = 3
};


// Enum PhotonBlast.EPhotonMeshFragmentType
enum class EPhotonMeshFragmentType : uint8_t
{
	EPhotonMeshFragmentType__Indestructible = 0,
	EPhotonMeshFragmentType__Disappear = 1,
	EPhotonMeshFragmentType__Collapse = 2,
	EPhotonMeshFragmentType__EPhotonMeshFragmentType_MAX = 3
};


// Enum PhotonBlast.EPhotonFracturedMeshDestructibleAction
enum class EPhotonFracturedMeshDestructibleAction : uint8_t
{
	PhotonFracturedDAction_Hide    = 0,
	PhotonFracturedDAction_Detach  = 1,
	PhotonFracturedDAction_DetachByFragment = 2,
	PhotonFracturedDAction_DetachByStepFragment = 3,
	PhotonFracturedDAction_MAX     = 4
};


// Enum PhotonBlast.EPhotonWeaponType
enum class EPhotonWeaponType : uint8_t
{
	EPhotonWeaponType_None         = 0,
	EPhotonWeaponType_ExplosionProjectile = 1,
	EPhotonWeaponType_ShootWeapon  = 2,
	EPhotonWeaponType_Melee        = 3,
	EPhotonWeaponType_Grenade      = 4,
	EPhotonWeaponType_Vehicle      = 5,
	EPhotonWeaponType_MAX          = 6
};



//---------------------By BangJO---------------------------
//Script Structs
//---------------------By BangJO---------------------------

// ScriptStruct PhotonBlast.PhotonDestructibleImpactParam
// 0x0008
struct FPhotonDestructibleImpactParam
{
	float                                              ImpactDamageHp;                                           // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ImpactDamageSpreadRadius;                                 // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct PhotonBlast.PhotonImpactReplicationData
// 0x0030
struct FPhotonImpactReplicationData
{
	struct FVector                                     LocalImpactPoint;                                         // 0x0000(0x000C) (IsPlainOldData)
	bool                                               Visible;                                                  // 0x000C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	struct FVector4                                    LocalImpactVelocity;                                      // 0x0010(0x0010) (IsPlainOldData)
	EPhotonFracturedMeshFragmentState                  FragmentState;                                            // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xF];                                       // 0x0021(0x000F) MISSED OFFSET
};

// ScriptStruct PhotonBlast.PhotonDestructibleFragmentStatetData
// 0x0010
struct FPhotonDestructibleFragmentStatetData
{
	TArray<EPhotonFracturedMeshFragmentState>          TargetFragmentsState;                                     // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct PhotonBlast.PhotonDestructibleImpactData
// 0x0030
struct FPhotonDestructibleImpactData
{
	struct FVector                                     ImpactPoint;                                              // 0x0000(0x000C) (IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FVector4                                    Velocity;                                                 // 0x0010(0x0010) (IsPlainOldData)
	EPhotonFracturedMeshFragmentState                  TargetFragmentsState;                                     // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xF];                                       // 0x0021(0x000F) MISSED OFFSET
};

// ScriptStruct PhotonBlast.ClusterReplicationProxy
// 0x0010
struct FClusterReplicationProxy
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct PhotonBlast.PhotonDestructibleMeshPhysicsDetachData
// 0x0020
struct FPhotonDestructibleMeshPhysicsDetachData
{
	float                                              TimeSpeed;                                                // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Gravity;                                                  // 0x0004(0x000C) (Edit, IsPlainOldData)
	float                                              SpreadSpeed;                                              // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              VelocitySpeed;                                            // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RotationSpeed;                                            // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              VisibleTime;                                              // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct PhotonBlast.BitMatrix
// 0x0028
struct FBitMatrix
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct PhotonBlast.FragmentConvexElem
// 0x0010
struct FFragmentConvexElem
{
	TArray<struct FKConvexElem>                        ConvexElem;                                               // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct PhotonBlast.ReplicationEvent
// 0x0018
struct FReplicationEvent
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct PhotonBlast.PhotonDestructionParam
// 0x0018
struct FPhotonDestructionParam
{
	struct FString                                     UGCInstanceID;                                            // 0x0000(0x0010) (ZeroConstructor)
	bool                                               EnableDestructible;                                       // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               CanBeDamagedByMelee;                                      // 0x0011(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               CanBeDamagedByRocketLauncher;                             // 0x0012(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               CanBeDamagedByThrowable;                                  // 0x0013(0x0001) (ZeroConstructor, IsPlainOldData)
	float                                              Health;                                                   // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
};

}

