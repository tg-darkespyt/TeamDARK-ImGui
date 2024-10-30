#pragma once

// Pubgm India-64bit (3.4.0) SDK by BangJO [Z] DM @isar_hackJO To Buy Tool SDK

namespace SDK
{
//---------------------By BangJO---------------------------
//Classes
//---------------------By BangJO---------------------------

// Class PhotonBlast.PhotonReplicationStaticMeshComponent
// 0x00E0 (0x0AD0 - 0x09F0)
class UPhotonReplicationStaticMeshComponent : public UStaticMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x09F0(0x0058) MISSED OFFSET
	int                                                ClusterUniqueID;                                          // 0x0A48(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData)
	bool                                               bCanMove;                                                 // 0x0A4C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EAOIEntityType                                     AOIEntityType;                                            // 0x0A4D(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EClusterEntityState                                AOIEntityState;                                           // 0x0A4E(0x0001) (Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData)
	unsigned char                                      ClusterReplicationOpen : 1;                               // 0x0A4F(0x0001) (Edit, BlueprintVisible)
	class UDestructionSubsystem*                       SubsystemPtr;                                             // 0x0A50(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0A58(0x0008) MISSED OFFSET
	struct FLuaNetSerialization                        LuaNetSerialization;                                      // 0x0A60(0x0050) (Net)
	struct FString                                     LuaFilePath;                                              // 0x0AB0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData02[0x10];                                      // 0x0AC0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PhotonBlast.PhotonReplicationStaticMeshComponent");
		return pStaticClass;
	}


	void UnRegistLuaTick();
	void UnRegisterFromCluster();
	void SetMoveable(bool Value);
	void SetClusterUniqueID(int InClusterID);
	void SetClusterEntityState(EClusterEntityState EntityState);
	void RegistLuaTick(float TickInterval);
	void RegisterToCluster();
	void MarkPropDirty(int PropIndex);
};


// Class PhotonBlast.PhotonDestructibleMeshComponent
// 0x0120 (0x0BF0 - 0x0AD0)
class UPhotonDestructibleMeshComponent : public UPhotonReplicationStaticMeshComponent
{
public:
	unsigned char                                      EnableImpactDamage : 1;                                   // 0x0AD0(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0AD1(0x0003) MISSED OFFSET
	struct FPhotonDestructibleImpactParam              ImpactParam;                                              // 0x0AD4(0x0008) (Edit)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0ADC(0x0004) MISSED OFFSET
	class UPhotonDestructibleMesh*                     PhotonDestructibleMesh;                                   // 0x0AE0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<enum ECollisionEnabled>                FragmentsCollisionEnabled;                                // 0x0AE8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0AE9(0x0007) MISSED OFFSET
	struct FName                                       FragmentsCollisionProfileName;                            // 0x0AF0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      InitialVisible : 1;                                       // 0x0AF8(0x0001) (Edit)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0AF9(0x0007) MISSED OFFSET
	TArray<EPhotonFracturedMeshFragmentState>          TargetFragmentsState;                                     // 0x0B00(0x0010) (Net, ZeroConstructor)
	struct FPhotonImpactReplicationData                ImpactReplicationData;                                    // 0x0B10(0x0030) (Net)
	float                                              FragmentsMaxHp;                                           // 0x0B40(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0xAC];                                      // 0x0B44(0x00AC) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PhotonBlast.PhotonDestructibleMeshComponent");
		return pStaticClass;
	}


	void SetupFragmentsMaxHp(float HP);
	void SetServerDamagedDelegate(const struct FScriptDelegate& InDelegate);
	void SetFracturedMesh(class UPhotonDestructibleMesh* InFracturedMesh, bool Force);
	void Server_OnComponentHitAction(class UPrimitiveComponent* HitComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	bool Server_DamageFragmentsByRadius(const struct FVector4& WorldImpactVelocity, const struct FVector& HitPoint, float HP, float Radius, bool Attenuation, TEnumAsByte<enum EPhotonWeaponType> WeaponType);
	bool Server_DamageFragmentsByHp(TArray<int> FragmentsIndex, TArray<float> HP, const struct FVector& WorldImpactPoint, const struct FVector4& WorldImpactVelocity);
	void OnRep_ImpactData();
	void OnRep_FragmentsState();
	bool IsFragmentCanDestroy(int FragmentItemIndex);
	bool IsFragmentCanBeDamaged(int FragmentItemIndex);
	class UPhotonDestructibleMesh* GetPhotonDestructibleMesh();
	bool GetFragmentTransform(int FragmentIndex, bool WorldSpace, struct FTransform* OutTransform);
	bool GetFragmentsWorldPosition(int FragmentIndex, struct FVector* FragmentPosition);
	bool GetFragmentsByRadius(const struct FVector& HitPoint, float Radius, TArray<int>* FragmentsIndex, TArray<float>* ImpactDistance);
	int GetFragmentItemCount();
	bool GetFragmentBounds(int FragmentIndex, bool WorldSpace, struct FBox* OutBox);
	class UPhotonFracturedMesh* GetFracturedMesh();
};


// Class PhotonBlast.PhotonReplicationInstancedStaticMeshComponent
// 0x00E0 (0x0C20 - 0x0B40)
class UPhotonReplicationInstancedStaticMeshComponent : public UInstancedStaticMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0B40(0x0058) MISSED OFFSET
	int                                                ClusterUniqueID;                                          // 0x0B98(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData)
	bool                                               bCanMove;                                                 // 0x0B9C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EAOIEntityType                                     AOIEntityType;                                            // 0x0B9D(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EClusterEntityState                                AOIEntityState;                                           // 0x0B9E(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ClusterReplicationOpen : 1;                               // 0x0B9F(0x0001) (Edit, BlueprintVisible)
	class UDestructionSubsystem*                       SubsystemPtr;                                             // 0x0BA0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0BA8(0x0008) MISSED OFFSET
	struct FLuaNetSerialization                        LuaNetSerialization;                                      // 0x0BB0(0x0050) (Net)
	struct FString                                     LuaFilePath;                                              // 0x0C00(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData02[0x10];                                      // 0x0C10(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PhotonBlast.PhotonReplicationInstancedStaticMeshComponent");
		return pStaticClass;
	}


	void UnRegistLuaTick();
	void UnRegisterFromCluster();
	void SetMoveable(bool Value);
	void SetClusterUniqueID(int InClusterID);
	void SetClusterEntityState(EClusterEntityState EntityState);
	void RegistLuaTick(float TickInterval);
	void RegisterToCluster();
	void MarkPropDirty(int PropIndex);
};


// Class PhotonBlast.PhotonInstancedDestructibleMeshComponent
// 0x01A0 (0x0DC0 - 0x0C20)
class UPhotonInstancedDestructibleMeshComponent : public UPhotonReplicationInstancedStaticMeshComponent
{
public:
	unsigned char                                      EnableImpactDamage : 1;                                   // 0x0C20(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0C21(0x0003) MISSED OFFSET
	struct FPhotonDestructibleImpactParam              ImpactParam;                                              // 0x0C24(0x0008) (Edit)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0C2C(0x0004) MISSED OFFSET
	class UPhotonDestructibleMesh*                     PhotonDestructibleMesh;                                   // 0x0C30(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<enum ECollisionEnabled>                FragmentsCollisionEnabled;                                // 0x0C38(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0C39(0x0007) MISSED OFFSET
	struct FName                                       FragmentsCollisionProfileName;                            // 0x0C40(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FPhotonDestructibleFragmentStatetData> TargetInstanceFragmentsState;                             // 0x0C48(0x0010) (Net, ZeroConstructor)
	TArray<struct FPhotonDestructibleImpactData>       InstanceImpactData;                                       // 0x0C58(0x0010) (Net, ZeroConstructor)
	float                                              FragmentsMaxHp;                                           // 0x0C68(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x154];                                     // 0x0C6C(0x0154) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PhotonBlast.PhotonInstancedDestructibleMeshComponent");
		return pStaticClass;
	}


	void SetupFragmentsMaxHp(float HP);
	void SetServerDamagedDelegate(const struct FScriptDelegate& InDelegate);
	void SetFracturedMesh(class UPhotonDestructibleMesh* InFracturedMesh, bool Force);
	void Server_OnComponentHitAction(class UPrimitiveComponent* HitComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	bool Server_DamageFragmentsByRadius(const struct FVector4& WorldImpactVelocity, const struct FVector& HitPoint, float HP, float Radius, bool Attenuation, TEnumAsByte<enum EPhotonWeaponType> WeaponType);
	TArray<int> ReplaceAllInstances(TArray<struct FTransform> InstanceTransforms, bool bShouldReturnIndices);
	void OnRep_ImpactData();
	void OnRep_FragmentsState();
	bool IsFragmentCanDestroy(int InstanceIndex, int FragmentItemIndex);
	class UPhotonDestructibleMesh* GetPhotonDestructibleMesh();
	int GetInstanceItemCount();
	bool GetFragmentTransform(int InstanceIndex, int FragmentIndex, bool WorldSpace, struct FTransform* OutTransform);
	bool GetFragmentsWorldPosition(int InstanceIndex, int FragmentIndex, struct FVector* FragmentPosition);
	int GetFragmentItemCount();
	class UPhotonFracturedMesh* GetFracturedMesh();
	int AddInstanceWorldSpace(const struct FTransform& WorldTransform);
	TArray<int> AddInstances(TArray<struct FTransform> InstanceTransforms, bool bShouldReturnIndices, bool bMarkRenderStateDirty);
	int AddInstance(const struct FTransform& InstanceTransform);
};


// Class PhotonBlast.PhotonDestructibleMeshActor
// 0x0010 (0x0448 - 0x0438)
class APhotonDestructibleMeshActor : public AActor
{
public:
	class UPhotonDestructibleMeshComponent*            PhotonDestructibleMeshComponent;                          // 0x0438(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	unsigned char                                      ClusterPeplicationOpend : 1;                              // 0x0440(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      DestructibleMeshActorReplication : 1;                     // 0x0440(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0441(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PhotonBlast.PhotonDestructibleMeshActor");
		return pStaticClass;
	}

};


// Class PhotonBlast.ClusterReplicationVolume
// 0x0048 (0x04B0 - 0x0468)
class AClusterReplicationVolume : public AVolume
{
public:
	bool                                               bForReplication;                                          // 0x0468(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bForClusterDivide;                                        // 0x0469(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x046A(0x0006) MISSED OFFSET
	struct FClusterAOIConfig                           ClusterConfig;                                            // 0x0470(0x0030) (Edit, BlueprintVisible)
	struct FClusterReplicationProxy                    ClusterReplication;                                       // 0x04A0(0x0010) (Net)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PhotonBlast.ClusterReplicationVolume");
		return pStaticClass;
	}

};


// Class PhotonBlast.ClusterReplicationSelectVolume
// 0x0008 (0x0470 - 0x0468)
class AClusterReplicationSelectVolume : public AVolume
{
public:
	int16_t                                            LevelGroup;                                               // 0x0468(0x0002) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x046A(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PhotonBlast.ClusterReplicationSelectVolume");
		return pStaticClass;
	}

};


// Class PhotonBlast.PhotonBlastMgr
// 0x0010 (0x0448 - 0x0438)
class APhotonBlastMgr : public AActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0438(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PhotonBlast.PhotonBlastMgr");
		return pStaticClass;
	}

};


// Class PhotonBlast.PhotonDestructibleMesh
// 0x00D8 (0x02B8 - 0x01E0)
class UPhotonDestructibleMesh : public UStaticMesh
{
public:
	class UPhotonFracturedMesh*                        FracturedMesh;                                            // 0x01E0(0x0008) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<enum EPhotonDestructibleAction>        DestructibleAction;                                       // 0x01E8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UseDefaultParameter : 1;                                  // 0x01E9(0x0001) (Edit)
	TEnumAsByte<enum EPhotonCollisionType>             FragmentCollisonType;                                     // 0x01EA(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x01EB(0x0001) MISSED OFFSET
	struct FPhotonDestructibleMeshPhysicsDetachData    PhysicsDetachData;                                        // 0x01EC(0x0020) (Edit)
	unsigned char                                      UnknownData01[0xAC];                                      // 0x020C(0x00AC) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PhotonBlast.PhotonDestructibleMesh");
		return pStaticClass;
	}

};


// Class PhotonBlast.DestructionSubsystem
// 0x0000 (0x03B0 - 0x03B0)
class UDestructionSubsystem : public UClusterReplicationSubsystem
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PhotonBlast.DestructionSubsystem");
		return pStaticClass;
	}

};


// Class PhotonBlast.PhotonFracturedMesh
// 0x00E8 (0x0110 - 0x0028)
class UPhotonFracturedMesh : public UObject
{
public:
	TArray<class UPhotonFracturedFragmentInfo*>        FracturedFragmentInfo;                                    // 0x0028(0x0010) (ZeroConstructor)
	TArray<int>                                        InsideMaterialIndex;                                      // 0x0038(0x0010) (Edit, ZeroConstructor)
	TMap<int, class UPhotonFracturedFragmentInfo*>     FragmentIndex2FragmentInfo;                               // 0x0048(0x0050) (ZeroConstructor)
	TMap<struct FName, class UPhotonFracturedFragmentInfo*> FragmentName2FragmentInfo;                                // 0x0098(0x0050) (ZeroConstructor)
	struct FBitMatrix                                  SupportGraph;                                             // 0x00E8(0x0028)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PhotonBlast.PhotonFracturedMesh");
		return pStaticClass;
	}

};


// Class PhotonBlast.PhotonFracturedMeshSettings
// 0x0000 (0x0028 - 0x0028)
class UPhotonFracturedMeshSettings : public UObject
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PhotonBlast.PhotonFracturedMeshSettings");
		return pStaticClass;
	}

};


// Class PhotonBlast.PhotonFEdgeData
// 0x0000 (0x0028 - 0x0028)
class UPhotonFEdgeData : public UObject
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PhotonBlast.PhotonFEdgeData");
		return pStaticClass;
	}

};


// Class PhotonBlast.PhotonFracturedFragmentInfo
// 0x0048 (0x0070 - 0x0028)
class UPhotonFracturedFragmentInfo : public UObject
{
public:
	int                                                FragmentItemIndex;                                        // 0x0028(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              MassOverride;                                             // 0x002C(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	struct FFragmentConvexElem                         ConvexElemForCollision;                                   // 0x0030(0x0010)
	struct FVector                                     centerPoint;                                              // 0x0040(0x000C) (IsPlainOldData)
	struct FBox                                        LocalBoundBox;                                            // 0x004C(0x001C) (IsPlainOldData)
	unsigned char                                      CanDestroy : 1;                                           // 0x0068(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0069(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PhotonBlast.PhotonFracturedFragmentInfo");
		return pStaticClass;
	}

};


// Class PhotonBlast.PhotonReplicationSkeletalMeshComponent
// 0x00E0 (0x1030 - 0x0F50)
class UPhotonReplicationSkeletalMeshComponent : public USkeletalMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0F50(0x0060) MISSED OFFSET
	int                                                ClusterUniqueID;                                          // 0x0FB0(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData)
	bool                                               bCanMove;                                                 // 0x0FB4(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EAOIEntityType                                     AOIEntityType;                                            // 0x0FB5(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EClusterEntityState                                AOIEntityState;                                           // 0x0FB6(0x0001) (Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData)
	unsigned char                                      ClusterReplicationOpen : 1;                               // 0x0FB7(0x0001) (Edit, BlueprintVisible)
	class UDestructionSubsystem*                       SubsystemPtr;                                             // 0x0FB8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0FC0(0x0008) MISSED OFFSET
	struct FLuaNetSerialization                        LuaNetSerialization;                                      // 0x0FC8(0x0050) (Net)
	struct FString                                     LuaFilePath;                                              // 0x1018(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData02[0x8];                                       // 0x1028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PhotonBlast.PhotonReplicationSkeletalMeshComponent");
		return pStaticClass;
	}


	void UnRegistLuaTick();
	void UnRegisterFromCluster();
	void SetMoveable(bool Value);
	void SetClusterUniqueID(int InClusterID);
	void SetClusterEntityState(EClusterEntityState EntityState);
	void RegistLuaTick(float TickInterval);
	void RegisterToCluster();
	void MarkPropDirty(int PropIndex);
};


}

