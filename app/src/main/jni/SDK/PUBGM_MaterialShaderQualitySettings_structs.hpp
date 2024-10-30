#pragma once

// Pubgm India-64bit (3.4.0) SDK by BangJO [Z] DM @isar_hackJO To Buy Tool SDK

namespace SDK
{
//---------------------By BangJO---------------------------
//Enums
//---------------------By BangJO---------------------------

// Enum MaterialShaderQualitySettings.EMobileCSMQuality
enum class EMobileCSMQuality : uint8_t
{
	EMobileCSMQuality__NoFiltering = 0,
	EMobileCSMQuality__PCF_1x1     = 1,
	EMobileCSMQuality__PCF_2x2     = 2,
	EMobileCSMQuality__EMobileCSMQuality_MAX = 3
};



//---------------------By BangJO---------------------------
//Script Structs
//---------------------By BangJO---------------------------

// ScriptStruct MaterialShaderQualitySettings.MaterialQualityOverrides
// 0x0008
struct FMaterialQualityOverrides
{
	bool                                               bEnableOverride;                                          // 0x0000(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bForceFullyRough;                                         // 0x0001(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bForceNonMetal;                                           // 0x0002(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bForceDisableLMDirectionality;                            // 0x0003(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bForceLQReflections;                                      // 0x0004(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	EMobileCSMQuality                                  MobileCSMQuality;                                         // 0x0005(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	EMobileCSMQuality                                  MobilePointLightShadowQuality;                            // 0x0006(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	EMobileCSMQuality                                  MobilePhotonShadowQuality;                                // 0x0007(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
};

}

