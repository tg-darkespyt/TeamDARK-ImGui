#pragma once

// Pubgm India-64bit (3.4.0) SDK by BangJO [Z] DM @isar_hackJO To Buy Tool SDK

namespace SDK
{
//---------------------By BangJO---------------------------
//Classes
//---------------------By BangJO---------------------------

// Class HelpshiftUE4.HelpshiftUE4Settings
// 0x0048 (0x0070 - 0x0028)
class UHelpshiftUE4Settings : public UObject
{
public:
	struct FString                                     APIKey;                                                   // 0x0028(0x0010) (Edit, ZeroConstructor, Config)
	struct FString                                     DomainName;                                               // 0x0038(0x0010) (Edit, ZeroConstructor, Config)
	struct FString                                     AppID_iOS;                                                // 0x0048(0x0010) (Edit, ZeroConstructor, Config)
	struct FString                                     AppID_Android;                                            // 0x0058(0x0010) (Edit, ZeroConstructor, Config)
	bool                                               FirebaseIntegration;                                      // 0x0068(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               EnableLogging;                                            // 0x0069(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x006A(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class HelpshiftUE4.HelpshiftUE4Settings");
		return pStaticClass;
	}

};


}

