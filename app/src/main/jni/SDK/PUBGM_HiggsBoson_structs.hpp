#pragma once

// Pubgm India-64bit (3.4.0) SDK by BangJO [Z] DM @isar_hackJO To Buy Tool SDK

namespace SDK
{
//---------------------By BangJO---------------------------
//Enums
//---------------------By BangJO---------------------------

// Enum HiggsBoson.EGymOpType
enum class EGymOpType : uint8_t
{
	EGymOpType__None               = 0,
	EGymOpType__La                 = 1,
	EGymOpType__Sm                 = 2,
	EGymOpType__El                 = 3,
	EGymOpType__No                 = 4,
	EGymOpType__EGymOpType_MAX     = 5
};


// Enum HiggsBoson.EGaraType
enum class EGaraType : uint8_t
{
	EGaraType__Invalid             = 0,
	EGaraType__Alpha               = 1,
	EGaraType__Whale               = 2,
	EGaraType__EGaraType_MAX       = 3
};


// Enum HiggsBoson.EUpdateParamsType
enum class EUpdateParamsType : uint8_t
{
	EUpdateParamsType__RotateLockShooting = 0,
	EUpdateParamsType__WeaponFastReload = 1,
	EUpdateParamsType__Parachute   = 2,
	EUpdateParamsType__SetGameModeMoveSpeedBase = 3,
	EUpdateParamsType__SetGameModeMoveSpeedModifier = 4,
	EUpdateParamsType__MoveUtils   = 5,
	EUpdateParamsType__MoveUtilsSkipSkillID = 6,
	EUpdateParamsType__ClientShootReviewSystem = 7,
	EUpdateParamsType__ClientGlueHiaSystem = 8,
	EUpdateParamsType__RecoilOnWeaponShoot = 9,
	EUpdateParamsType__RecoilOnKickBack = 10,
	EUpdateParamsType__EUpdateParamsType_MAX = 11
};


// Enum HiggsBoson.ECharacterFitnessType
enum class ECharacterFitnessType : uint8_t
{
	ECharacterFitnessType__None    = 0,
	ECharacterFitnessType__DistanceXY = 1,
	ECharacterFitnessType__DistanceZ = 2,
	ECharacterFitnessType__Distance3D = 3,
	ECharacterFitnessType__ABS     = 4,
	ECharacterFitnessType__ContinuousID = 5,
	ECharacterFitnessType__ContinuousInterval = 6,
	ECharacterFitnessType__SourceSpeedZ = 7,
	ECharacterFitnessType__SourceSpeedZBS = 8,
	ECharacterFitnessType__SourceSpeedXY = 9,
	ECharacterFitnessType__SourceSpeed3D = 10,
	ECharacterFitnessType__TargetSpeedZ = 11,
	ECharacterFitnessType__TargetSpeedZBS = 12,
	ECharacterFitnessType__TargetSpeedXY = 13,
	ECharacterFitnessType__TargetSpeed3D = 14,
	ECharacterFitnessType__BeAttachedToParentTime = 15,
	ECharacterFitnessType__SourcePawnState = 16,
	ECharacterFitnessType__TargetPawnState = 17,
	ECharacterFitnessType__Weapon  = 18,
	ECharacterFitnessType__BBAngle = 19,
	ECharacterFitnessType__RelativeSpeedZ = 20,
	ECharacterFitnessType__RelativeSpeedZBS = 21,
	ECharacterFitnessType__RelativeSpeedXY = 22,
	ECharacterFitnessType__RelativeSpeed3D = 23,
	ECharacterFitnessType__SourceMovementMode = 24,
	ECharacterFitnessType__TargetMovementMode = 25,
	ECharacterFitnessType__SourceMovementBase = 26,
	ECharacterFitnessType__TargetMovementBase = 27,
	ECharacterFitnessType__Half    = 28,
	ECharacterFitnessType__Alpha   = 29,
	ECharacterFitnessType__HealthStatus = 30,
	ECharacterFitnessType__HiPart  = 31,
	ECharacterFitnessType__Accuse  = 32,
	ECharacterFitnessType__BullySpeed = 33,
	ECharacterFitnessType__EGameModeType = 34,
	ECharacterFitnessType__EParachuteState = 35,
	ECharacterFitnessType__RelativeTangentSpeed = 36,
	ECharacterFitnessType__RelativeAngleSpeed = 37,
	ECharacterFitnessType__SinceLastProne = 38,
	ECharacterFitnessType__Full    = 39,
	ECharacterFitnessType__FFAngle = 40,
	ECharacterFitnessType__CHAngle = 41,
	ECharacterFitnessType__CVAngle = 42,
	ECharacterFitnessType__SACount = 43,
	ECharacterFitnessType__MaxDev  = 44,
	ECharacterFitnessType__RandDev = 45,
	ECharacterFitnessType__WeedType = 46,
	ECharacterFitnessType__Dura1   = 47,
	ECharacterFitnessType__Dura2   = 48,
	ECharacterFitnessType__AccEv   = 49,
	ECharacterFitnessType__AccAd   = 50,
	ECharacterFitnessType__ECharacterFitnessType_MAX = 51
};


// Enum HiggsBoson.ECoronaClientData
enum class ECoronaClientData : uint8_t
{
	ECoronaClientData__Invalid     = 0,
	ECoronaClientData__BulletFireSpeed = 1,
	ECoronaClientData__CurrentWeaponID = 2,
	ECoronaClientData__GravityZ    = 3,
	ECoronaClientData__MinUndilatedFrameTime = 4,
	ECoronaClientData__ActorTimeDilation = 5,
	ECoronaClientData__ShootInterval = 6,
	ECoronaClientData__ExtraHitPerformScale = 7,
	ECoronaClientData__SwitchWeaponSpeedScale = 8,
	ECoronaClientData__AnimationKick = 9,
	ECoronaClientData__RecoilKickADS = 10,
	ECoronaClientData__AccessoriesVRecoilFactor = 11,
	ECoronaClientData__AccessoriesHRecoilFactor = 12,
	ECoronaClientData__AccessoriesRecoveryFactor = 13,
	ECoronaClientData__JumpMaxCount = 14,
	ECoronaClientData__JumpZVelocity = 15,
	ECoronaClientData__TimeDilation = 16,
	ECoronaClientData__MaxAcceleration = 17,
	ECoronaClientData__ConfigCollisionDistSqAngle = 18,
	ECoronaClientData__ECoronaClientData_MAX = 19
};



//---------------------By BangJO---------------------------
//Script Structs
//---------------------By BangJO---------------------------

// ScriptStruct HiggsBoson.PendingJudgeStruct
// 0x0050
struct FPendingJudgeStruct
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) UNKNOWN PROPERTY: SetProperty HiggsBoson.PendingJudgeStruct.IntervalSet
};

// ScriptStruct HiggsBoson.PatchPoint
// 0x000C
struct FPatchPoint
{
	int                                                Offset;                                                   // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           Old;                                                      // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           New;                                                      // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct HiggsBoson.MoveInput
// 0x0020
struct FMoveInput
{
	float                                              TimeSeconds;                                              // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              ForwardInputRate;                                         // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              RightInputRate;                                           // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	uint64_t                                           CurrentStates;                                            // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                ZeroMoveInputCount;                                       // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

}

