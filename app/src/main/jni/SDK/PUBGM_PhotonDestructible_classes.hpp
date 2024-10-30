#pragma once

// Pubgm India-64bit (3.4.0) SDK by BangJO [Z] DM @isar_hackJO To Buy Tool SDK

namespace SDK
{
//---------------------By BangJO---------------------------
//Classes
//---------------------By BangJO---------------------------

// Class PhotonDestructible.PhotonDestructibleSurfaceComponent
// 0x0070 (0x0A60 - 0x09F0)
class UPhotonDestructibleSurfaceComponent : public UStaticMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x09F0(0x0010) MISSED OFFSET
	TEnumAsByte<enum EFracturedAxis>                   MaskUAxis;                                                // 0x0A00(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<enum EFracturedAxis>                   MaskVAxis;                                                // 0x0A01(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0A02(0x0006) MISSED OFFSET
	class UTexture2D*                                  MaskTexture2D;                                            // 0x0A08(0x0008) (Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData)
	struct FPDSurfaceNetData                           SurfaceNetData;                                           // 0x0A10(0x0018) (Net)
	struct FGuid                                       TargetPuppetGUID;                                         // 0x0A28(0x0010) (Edit, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData02[0x28];                                      // 0x0A38(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PhotonDestructible.PhotonDestructibleSurfaceComponent");
		return pStaticClass;
	}


	void Server_ProcessHit(const struct FPhotonDestructibleSurfaceHitData& HitData);
	void OnRep_SurfaceNetData();
	void Client_OnProcessHit(const struct FPhotonDestructibleSurfaceHitData& HitData);
};


// Class PhotonDestructible.PhotonDestructibleInstancedSurfaceComponent
// 0x0070 (0x0CA0 - 0x0C30)
class UPhotonDestructibleInstancedSurfaceComponent : public UHierarchicalInstancedStaticMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0C30(0x0010) MISSED OFFSET
	TEnumAsByte<enum EFracturedAxis>                   MaskUAxis;                                                // 0x0C40(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<enum EFracturedAxis>                   MaskVAxis;                                                // 0x0C41(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0C42(0x0006) MISSED OFFSET
	class UMaterialInterface*                          Texture2DArrayMaterial;                                   // 0x0C48(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          AtlasMaterial;                                            // 0x0C50(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FPDSurfaceNetData                           SurfaceNetData;                                           // 0x0C58(0x0018) (Net)
	TArray<struct FGuid>                               TargetPuppetGUID;                                         // 0x0C70(0x0010) (Edit, ZeroConstructor, EditConst)
	unsigned char                                      UnknownData02[0x20];                                      // 0x0C80(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PhotonDestructible.PhotonDestructibleInstancedSurfaceComponent");
		return pStaticClass;
	}


	void Server_ProcessHit(const struct FPhotonDestructibleSurfaceHitData& HitData);
	void OnRep_SurfaceNetData();
	void Client_OnProcessHit(const struct FPhotonDestructibleSurfaceHitData& HitData);
};


// Class PhotonDestructible.FEdgeData
// 0x0000 (0x0028 - 0x0028)
class UFEdgeData : public UObject
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PhotonDestructible.FEdgeData");
		return pStaticClass;
	}

};


// Class PhotonDestructible.FracturedFragmentInfo
// 0x0058 (0x0080 - 0x0028)
class UFracturedFragmentInfo : public UObject
{
public:
	TArray<struct FKConvexElem>                        ConvexElemForCollision;                                   // 0x0028(0x0010) (ZeroConstructor)
	struct FVector                                     centerPoint;                                              // 0x0038(0x000C) (IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
	TArray<int>                                        neighbors;                                                // 0x0048(0x0010) (ZeroConstructor)
	TArray<struct FPlane>                              FacePlaneData;                                            // 0x0058(0x0010) (ZeroConstructor)
	TArray<struct FVector>                             PolygonVertex;                                            // 0x0068(0x0010) (ZeroConstructor)
	unsigned char                                      CanDestroy : 1;                                           // 0x0078(0x0001) (Edit)
	unsigned char                                      HasTriangle : 1;                                          // 0x0078(0x0001) (Edit, EditConst)
	unsigned char                                      IsBorder : 1;                                             // 0x0078(0x0001) (Edit, EditConst)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0079(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PhotonDestructible.FracturedFragmentInfo");
		return pStaticClass;
	}

};


// Class PhotonDestructible.MaterialExpressionObjectLocalPosition
// 0x0000 (0x0060 - 0x0060)
class UMaterialExpressionObjectLocalPosition : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PhotonDestructible.MaterialExpressionObjectLocalPosition");
		return pStaticClass;
	}

};


// Class PhotonDestructible.MaterialExpressionGetPDInstancedSurfaceMask
// 0x0000 (0x0060 - 0x0060)
class UMaterialExpressionGetPDInstancedSurfaceMask : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PhotonDestructible.MaterialExpressionGetPDInstancedSurfaceMask");
		return pStaticClass;
	}

};


// Class PhotonDestructible.PhotonDestructibleAtlasPool
// 0x0010 (0x0128 - 0x0118)
class UPhotonDestructibleAtlasPool : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0118(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PhotonDestructible.PhotonDestructibleAtlasPool");
		return pStaticClass;
	}

};


// Class PhotonDestructible.PhotonDestructibleMgr
// 0x0028 (0x0460 - 0x0438)
class APhotonDestructibleMgr : public AActor
{
public:
	class UPhotonDestructibleTexturePool*              TexturePool;                                              // 0x0438(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UPhotonDestructibleAtlasPool*                AtlasPool;                                                // 0x0440(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UPhotonDestructibleTexture2DArrayManager*    Texture2DArrayManager;                                    // 0x0448(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UPhotonDestructibleSurfaceConfig*            SurfaceConfig;                                            // 0x0450(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UPhotonDestructiblePuppetMgr*                PuppetMgr;                                                // 0x0458(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PhotonDestructible.PhotonDestructibleMgr");
		return pStaticClass;
	}

};


// Class PhotonDestructible.PhotonDestructiblePuppet
// 0x0010 (0x0350 - 0x0340)
class UPhotonDestructiblePuppet : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0340(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PhotonDestructible.PhotonDestructiblePuppet");
		return pStaticClass;
	}


	void TriggerPuppetEvent(int EventID);
};


// Class PhotonDestructible.PhotonDestructiblePuppetContainer
// 0x0020 (0x0360 - 0x0340)
class UPhotonDestructiblePuppetContainer : public USceneComponent
{
public:
	TArray<struct FGuid>                               TargetsPuppetGUID;                                        // 0x0340(0x0010) (Edit, ZeroConstructor, EditConst)
	TArray<struct FString>                             TargetsName;                                              // 0x0350(0x0010) (Edit, ZeroConstructor, EditConst)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PhotonDestructible.PhotonDestructiblePuppetContainer");
		return pStaticClass;
	}


	void TriggerPuppetEvent(const struct FString& ObjectName, int EventID);
};


// Class PhotonDestructible.PhotonDestructiblePuppetMgr
// 0x0050 (0x0168 - 0x0118)
class UPhotonDestructiblePuppetMgr : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0118(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PhotonDestructible.PhotonDestructiblePuppetMgr");
		return pStaticClass;
	}


	void Client_TriggerPuppetEvent(const struct FGuid& PuppetGUID, int EventID);
};


// Class PhotonDestructible.PhotonDestructiblePuppetTarget
// 0x0000 (0x0028 - 0x0028)
class UPhotonDestructiblePuppetTarget : public UInterface
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PhotonDestructible.PhotonDestructiblePuppetTarget");
		return pStaticClass;
	}

};


// Class PhotonDestructible.PhotonDestructibleSurfaceActor
// 0x0010 (0x0448 - 0x0438)
class APhotonDestructibleSurfaceActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0438(0x0008) MISSED OFFSET
	class UPhotonDestructibleSurfaceComponent*         SurfaceComponent;                                         // 0x0440(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PhotonDestructible.PhotonDestructibleSurfaceActor");
		return pStaticClass;
	}

};


// Class PhotonDestructible.PhotonDestructibleInstancedSurfaceActor
// 0x0010 (0x0448 - 0x0438)
class APhotonDestructibleInstancedSurfaceActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0438(0x0008) MISSED OFFSET
	class UPhotonDestructibleInstancedSurfaceComponent* InstancedSurfaceComponent;                                // 0x0440(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PhotonDestructible.PhotonDestructibleInstancedSurfaceActor");
		return pStaticClass;
	}

};


// Class PhotonDestructible.PhotonDestructibleSurfaceActorBase
// 0x0000 (0x0028 - 0x0028)
class UPhotonDestructibleSurfaceActorBase : public UInterface
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PhotonDestructible.PhotonDestructibleSurfaceActorBase");
		return pStaticClass;
	}

};


// Class PhotonDestructible.PhotonDestructibleInstancedSurfaceActorBase
// 0x0000 (0x0028 - 0x0028)
class UPhotonDestructibleInstancedSurfaceActorBase : public UInterface
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PhotonDestructible.PhotonDestructibleInstancedSurfaceActorBase");
		return pStaticClass;
	}

};


// Class PhotonDestructible.PhotonDestructibleSurfaceBase
// 0x0000 (0x0028 - 0x0028)
class UPhotonDestructibleSurfaceBase : public UInterface
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PhotonDestructible.PhotonDestructibleSurfaceBase");
		return pStaticClass;
	}

};


// Class PhotonDestructible.PhotonDestructibleSurfaceConfig
// 0x0010 (0x0128 - 0x0118)
class UPhotonDestructibleSurfaceConfig : public UActorComponent
{
public:
	TArray<class UPhotonDestructibleSurfaceMask*>      TextureMaskData;                                          // 0x0118(0x0010) (Edit, ZeroConstructor, EditConst)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PhotonDestructible.PhotonDestructibleSurfaceConfig");
		return pStaticClass;
	}

};


// Class PhotonDestructible.PhotonDestructibleSurfaceMask
// 0x0020 (0x0048 - 0x0028)
class UPhotonDestructibleSurfaceMask : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	struct FIntPoint                                   MaskSize;                                                 // 0x0030(0x0008) (IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0038(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PhotonDestructible.PhotonDestructibleSurfaceMask");
		return pStaticClass;
	}

};


// Class PhotonDestructible.PhotonDestructibleTexture2DArrayManager
// 0x0028 (0x0140 - 0x0118)
class UPhotonDestructibleTexture2DArrayManager : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0118(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PhotonDestructible.PhotonDestructibleTexture2DArrayManager");
		return pStaticClass;
	}

};


// Class PhotonDestructible.PhotonDestructibleTexturePool
// 0x0020 (0x0138 - 0x0118)
class UPhotonDestructibleTexturePool : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0118(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PhotonDestructible.PhotonDestructibleTexturePool");
		return pStaticClass;
	}

};


}

