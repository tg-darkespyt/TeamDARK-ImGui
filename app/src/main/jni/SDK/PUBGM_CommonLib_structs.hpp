#pragma once

// Pubgm India-64bit (3.4.0) SDK by BangJO [Z] DM @isar_hackJO To Buy Tool SDK

namespace SDK
{
//---------------------By BangJO---------------------------
//Enums
//---------------------By BangJO---------------------------

// Enum CommonLib.DownloadResult
enum class EDownloadResult : uint8_t
{
	SuccessDownloading             = 0,
	DownloadFailed                 = 1,
	SaveFailed                     = 2,
	DirectoryCreationFailed        = 3,
	DownloadResult_MAX             = 4
};



//---------------------By BangJO---------------------------
//Script Structs
//---------------------By BangJO---------------------------

// ScriptStruct CommonLib.ServiceCollection
// 0x0050
struct FServiceCollection
{
	TMap<struct FString, class UObject*>               ServiceMap;                                               // 0x0000(0x0050) (ZeroConstructor)
};

}

