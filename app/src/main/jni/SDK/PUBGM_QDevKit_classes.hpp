#pragma once

// Pubgm India-64bit (3.4.0) SDK by BangJO [Z] DM @isar_hackJO To Buy Tool SDK

namespace SDK
{
//---------------------By BangJO---------------------------
//Classes
//---------------------By BangJO---------------------------

// Class QDevKit.FirebaseHelper
// 0x0030 (0x0058 - 0x0028)
class UFirebaseHelper : public UObject
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0028(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class QDevKit.FirebaseHelper");
		return pStaticClass;
	}


	void SetConsent(TMap<int, int> InConsent);
	bool IsNotificationLaunchApp();
	struct FString GetNotificationLaunchAppExtraData(const struct FString& InKey);
	static class UFirebaseHelper* GetInstance();
	struct FString GetFIRInstallId();
	struct FString GetFIRAppInstanceId();
	struct FString GetFCMToken();
	void ConsumeNotificationLaunchApp();
};


// Class QDevKit.FirebaseRemoteConfigImpl
// 0x0090 (0x00B8 - 0x0028)
class UFirebaseRemoteConfigImpl : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	TArray<struct FString>                             QueryConfigNamesArray;                                    // 0x0030(0x0010) (ZeroConstructor, Config)
	unsigned char                                      UnknownData01[0x78];                                      // 0x0040(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class QDevKit.FirebaseRemoteConfigImpl");
		return pStaticClass;
	}


	EQFirebaseRemoteConfigStatus GetStatus();
	struct FString GetRemoteConfig(const struct FString& ConfigNameToQuery);
	static class UFirebaseRemoteConfigImpl* GetInstance();
};


// Class QDevKit.PhotoAlbumHelper
// 0x0020 (0x0048 - 0x0028)
class UPhotoAlbumHelper : public UObject
{
public:
	struct FScriptMulticastDelegate                    FetchAlbumImageInfoCompleteCallback;                      // 0x0028(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptMulticastDelegate                    GenerateImageFromAlbumCompleteCallback;                   // 0x0038(0x0010) (ZeroConstructor, InstancedReference)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class QDevKit.PhotoAlbumHelper");
		return pStaticClass;
	}


	void Initialize();
	static class UPhotoAlbumHelper* GetInstance();
	int GenerateImageFromAlbum(const struct FString& InFilePath, const struct FString& InThumbFilePath, int InThumbnailWidth, int InThumbnailHeight, bool InForceJPG, bool InOverride);
	void FetchAlbumImageInfo(int InStartIndex, int InLimitNum, int InThumbWidth, int InThumbHeight, const struct FString& InThumbPath, const struct FString& InExtraJson);
};


// Class QDevKit.SystemPermissionHelper
// 0x0060 (0x0088 - 0x0028)
class USystemPermissionHelper : public UObject
{
public:
	struct FScriptMulticastDelegate                    RequestPermissionResultCallback;                          // 0x0028(0x0010) (ZeroConstructor, InstancedReference)
	unsigned char                                      UnknownData00[0x50];                                      // 0x0038(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class QDevKit.SystemPermissionHelper");
		return pStaticClass;
	}


	bool RequestPermissions(int InPermissionType, int InRequestCode);
	bool IsPermissionGranted(int InPermissionType);
	void Initialize();
	static class USystemPermissionHelper* GetInstance();
	bool AndroidShouldShowRequestPermissionRationale(const struct FString& InPermission);
	bool AndroidRequestPermissions(const struct FString& InPermission, int InRequestCode);
	bool AndroidIsPermissionGranted(const struct FString& InPermission);
	bool AndroidHasDefinePermission(const struct FString& InPermssionName);
};


}

