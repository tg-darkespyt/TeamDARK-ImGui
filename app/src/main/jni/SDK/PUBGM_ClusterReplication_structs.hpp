#pragma once

// Pubgm India-64bit (3.4.0) SDK by BangJO [Z] DM @isar_hackJO To Buy Tool SDK

namespace SDK
{
//---------------------By BangJO---------------------------
//Enums
//---------------------By BangJO---------------------------

// Enum ClusterReplication.EClusterEntityState
enum class EClusterEntityState : uint8_t
{
	EClusterEntityState__STATE_Original = 0,
	EClusterEntityState__STATE_WithData = 1,
	EClusterEntityState__STATE_WithNoData = 2,
	EClusterEntityState__STATE_MAX = 3
};


// Enum ClusterReplication.EAOIEntityType
enum class EAOIEntityType : uint8_t
{
	EAOIEntityType__Static         = 0,
	EAOIEntityType__Static_UGC     = 1,
	EAOIEntityType__Dynamic        = 2,
	EAOIEntityType__Dynamic_Custom = 3,
	EAOIEntityType__EAOIEntityType_MAX = 4
};



//---------------------By BangJO---------------------------
//Script Structs
//---------------------By BangJO---------------------------

// ScriptStruct ClusterReplication.ClusterAOIConfig
// 0x0030
struct FClusterAOIConfig
{
	float                                              AOIClusterSize;                                           // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AOIClusterTolerantSize;                                   // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                AOIClusterRelativeIterator;                               // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int16_t                                            SelectedGroup;                                            // 0x000C(0x0002) (Edit, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x000E(0x0002) MISSED OFFSET
	struct FVector2D                                   AOIMinPoint;                                              // 0x0010(0x0008) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FVector2D                                   AOIMaxPoint;                                              // 0x0018(0x0008) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	TArray<int16_t>                                    AOIEntityCounts;                                          // 0x0020(0x0010) (ZeroConstructor)
};

}

