#pragma once

// Pubgm India-64bit (3.4.0) SDK by BangJO [Z] DM @isar_hackJO To Buy Tool SDK

namespace SDK
{
//---------------------By BangJO---------------------------
//Classes
//---------------------By BangJO---------------------------

// Class PlanPHRuntime.BinFileHelper
// 0x0000 (0x0028 - 0x0028)
class UBinFileHelper : public UObject
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PlanPHRuntime.BinFileHelper");
		return pStaticClass;
	}


	int Init(int z4BufferSize, int zeroListSize);
};


// Class PlanPHRuntime.MapBarrierWidget
// 0x0030 (0x0130 - 0x0100)
class UMapBarrierWidget : public UWidget
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0100(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PlanPHRuntime.MapBarrierWidget");
		return pStaticClass;
	}


	void SetMapStructureData(TArray<struct FStructureData> InMapStructureData);
	void SetMapMidPoint(struct FVector2D* InMapMidPoint);
	void SetLevelBoundExtent(int InLevelBoundExtent);
	void SetGridSize(float InGridSize);
};


// Class PlanPHRuntime.PlanPH_GameMode
// 0x0008 (0x2128 - 0x2120)
class APlanPH_GameMode : public ABattleRoyaleGameMode
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x2120(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PlanPHRuntime.PlanPH_GameMode");
		return pStaticClass;
	}


	void HandleNavigationInfo(class AController* Controller);
	class ASTExtraPlayerStart* GetPlayerStart(int LandId);
	void DSPlayerKickOut(uint64_t UID, const struct FName& PlayerType, const struct FString& ExitReason);
};


// Class PlanPHRuntime.PlanPH_GameModeState_Active
// 0x0000 (0x00C0 - 0x00C0)
class UPlanPH_GameModeState_Active : public UGameModeStateActive
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PlanPHRuntime.PlanPH_GameModeState_Active");
		return pStaticClass;
	}

};


// Class PlanPHRuntime.PlanPH_GameModeState_Fighting
// 0x0000 (0x00D0 - 0x00D0)
class UPlanPH_GameModeState_Fighting : public UGameModeStateFightingTeam
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PlanPHRuntime.PlanPH_GameModeState_Fighting");
		return pStaticClass;
	}

};


// Class PlanPHRuntime.PlanPH_GameState
// 0x0090 (0x14B8 - 0x1428)
class APlanPH_GameState : public ASTExtraGameStateBase
{
public:
	struct FScriptMulticastDelegate                    OnIslandPlayerChangeDelegate;                             // 0x1428(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FPlanPH_CommonOccupy                        PartyDanceLeadInfo_2;                                     // 0x1438(0x0020) (Net)
	struct FPlanPH_CommonOccupy                        PartyDanceLeadInfo_3;                                     // 0x1458(0x0020) (Net)
	struct FPlanPH_CommonOccupy                        PartyDanceLeadInfo_4;                                     // 0x1478(0x0020) (Net)
	struct FPlanPH_CommonOccupy                        PartyDanceLeadInfo_5;                                     // 0x1498(0x0020) (Net)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PlanPHRuntime.PlanPH_GameState");
		return pStaticClass;
	}


	void OnRep_PartyDanceLeadInfo_5();
	void OnRep_PartyDanceLeadInfo_4();
	void OnRep_PartyDanceLeadInfo_3();
	void OnRep_PartyDanceLeadInfo_2();
	void LuaOnRep_PartyDanceLeadInfo(int LandId);
	void ChangePartyLeadInfo(int LandId, bool bOccupied, int BeginTime, int EndTime, const struct FString& PlayerUID);
};


// Class PlanPHRuntime.PlanPH_PlayerState
// 0x0000 (0x1B58 - 0x1B58)
class APlanPH_PlayerState : public ASTExtraPlayerState
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PlanPHRuntime.PlanPH_PlayerState");
		return pStaticClass;
	}


	void RequestPaintDecal(int DecalId, const struct FTransform& TargetTransform);
	void OnRep_LandId();
	void InitLandId();
	bool CanPaintDecal(int DecalId);
};


// Class PlanPHRuntime.PlanPHDoor
// 0x0018 (0x0510 - 0x04F8)
class APlanPHDoor : public ALuaActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x04F8(0x0008) MISSED OFFSET
	struct FVector                                     TransformDirVector;                                       // 0x0500(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x050C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PlanPHRuntime.PlanPHDoor");
		return pStaticClass;
	}


	void Refresh_DoorCollisionChanel(class UStaticMeshComponent* StaticMeshComponent, bool bEnableCollision);
	void DoorAniFinish(class UStaticMeshComponent* InDoorCheckBox, bool Bright);
};


// Class PlanPHRuntime.PlanPHGameplayStatics
// 0x0000 (0x0028 - 0x0028)
class UPlanPHGameplayStatics : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PlanPHRuntime.PlanPHGameplayStatics");
		return pStaticClass;
	}


	float SpinEvaluate(float S, float T);
	bool SetPlayerMovementBlendTime(class ASTExtraPlayerCharacter* PlayerChar, int nType, float blendTime);
	void ChangeLightChannel(class UPrimitiveComponent* InComponent, int InChannelBitMask);
};


// Class PlanPHRuntime.PlanPHHomeArea
// 0x0038 (0x0530 - 0x04F8)
class APlanPHHomeArea : public ALuaActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x04F8(0x0008) MISSED OFFSET
	struct FIntVector                                  BlockNumXYZ;                                              // 0x0500(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FIntVector                                  MinGridIndexXYZ;                                          // 0x050C(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FIntVector                                  MaxGridIndexXYZ;                                          // 0x0518(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0524(0x0004) MISSED OFFSET
	class UPlanPHHomeAreaVisualizationComponent*       VisComponent;                                             // 0x0528(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PlanPHRuntime.PlanPHHomeArea");
		return pStaticClass;
	}


	void UpdateEditableArea(const struct FIntVector& InMinGridIndexXYZ, const struct FIntVector& InMaxGridIndexXYZ);
};


// Class PlanPHRuntime.PlanPHHomeAreaVisualizationComponent
// 0x0010 (0x0840 - 0x0830)
class UPlanPHHomeAreaVisualizationComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0830(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PlanPHRuntime.PlanPHHomeAreaVisualizationComponent");
		return pStaticClass;
	}


	void ShowGrids(bool InBShow);
};


// Class PlanPHRuntime.PlanPHMapData
// 0x0020 (0x00B8 - 0x0098)
class UPlanPHMapData : public UMapDataBase
{
public:
	TArray<class ASTExtraPlayerCharacter*>             PlayerCharacterArrayC;                                    // 0x0098(0x0010) (BlueprintVisible, ZeroConstructor)
	TArray<struct FVector>                             OffsetLocations;                                          // 0x00A8(0x0010) (BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PlanPHRuntime.PlanPHMapData");
		return pStaticClass;
	}


	bool RemovePlayerItem(class ASTExtraPlayerCharacter* PlayerCharacterItem);
	bool AddPlayerItem(class ASTExtraPlayerCharacter* PlayerCharacterItem, class UWidget* PlayerInfoBPItem, class UWidget* PlayerInfoRotWidgetItem, const struct FVector& OffsetLocation);
};


// Class PlanPHRuntime.PlanPHSpectatorPawn
// 0x0070 (0x0530 - 0x04C0)
class APlanPHSpectatorPawn : public ASpectatorPawn
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x04C0(0x0058) MISSED OFFSET
	struct FString                                     LuaFilePath;                                              // 0x0518(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	float                                              PlaneMoveMaxSpeed;                                        // 0x0528(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              VerticalMoveMaxSpeed;                                     // 0x052C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PlanPHRuntime.PlanPHSpectatorPawn");
		return pStaticClass;
	}


	void OnSpectatorRestart();
	void MoveRight(float Val);
	void MoveForward(float Val);
};


// Class PlanPHRuntime.PlanPHVisualGridComponent
// 0x0060 (0x0890 - 0x0830)
class UPlanPHVisualGridComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0830(0x0004) MISSED OFFSET
	struct FIntVector                                  BlockNumXYZ;                                              // 0x0834(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                XColor;                                                   // 0x0840(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                YColor;                                                   // 0x0850(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                ZColor;                                                   // 0x0860(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              LineThickness;                                            // 0x0870(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x0874(0x000C) MISSED OFFSET
	bool                                               bShouldShowGrids;                                         // 0x0880(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0xF];                                       // 0x0881(0x000F) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PlanPHRuntime.PlanPHVisualGridComponent");
		return pStaticClass;
	}


	void ShowGrids(bool InBShow);
	void RefreshGrids();
};


}

