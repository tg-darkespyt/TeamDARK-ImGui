#pragma once

// Pubgm India-64bit (3.4.0) SDK by BangJO [Z] DM @isar_hackJO To Buy Tool SDK

namespace SDK
{
//---------------------By BangJO---------------------------
//Enums
//---------------------By BangJO---------------------------

// Enum slua_unreal.EPropertyClass
enum class EPropertyClass : uint8_t
{
	EPropertyClass__Byte           = 0,
	EPropertyClass__Int8           = 1,
	EPropertyClass__Int16          = 2,
	EPropertyClass__Int            = 3,
	EPropertyClass__Int64          = 4,
	EPropertyClass__UInt16         = 5,
	EPropertyClass__UInt32         = 6,
	EPropertyClass__UInt64         = 7,
	EPropertyClass__UnsizedInt     = 8,
	EPropertyClass__UnsizedUInt    = 9,
	EPropertyClass__Float          = 10,
	EPropertyClass__Double         = 11,
	EPropertyClass__Bool           = 12,
	EPropertyClass__SoftClass      = 13,
	EPropertyClass__WeakObject     = 14,
	EPropertyClass__LazyObject     = 15,
	EPropertyClass__SoftObject     = 16,
	EPropertyClass__Class          = 17,
	EPropertyClass__Object         = 18,
	EPropertyClass__Interface      = 19,
	EPropertyClass__Name           = 20,
	EPropertyClass__Str            = 21,
	EPropertyClass__Array          = 22,
	EPropertyClass__Map            = 23,
	EPropertyClass__Set            = 24,
	EPropertyClass__Struct         = 25,
	EPropertyClass__Delegate       = 26,
	EPropertyClass__MulticastDelegate = 27,
	EPropertyClass__Text           = 28,
	EPropertyClass__Enum           = 29,
	EPropertyClass__EPropertyClass_MAX = 30
};



//---------------------By BangJO---------------------------
//Script Structs
//---------------------By BangJO---------------------------

// ScriptStruct slua_unreal.LuaNetSerialization
// 0x0050
struct FLuaNetSerialization
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) MISSED OFFSET
};

// ScriptStruct slua_unreal.SluaBPVar
// 0x0020
struct FSluaBPVar
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct slua_unreal.LuaFunctionDefine
// 0x000C
struct FLuaFunctionDefine
{
	uint32_t                                           fileNameIndex;                                            // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           functionNameIndex;                                        // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                lineDefined;                                              // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct slua_unreal.unctionProfileCallInfo
// 0x0030
struct FunctionProfileCallInfo
{
	struct FLuaFunctionDefine                          functionDefine;                                           // 0x0000(0x000C)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	int64_t                                            begTime;                                                  // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsCoroutineBegin;                                        // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x17];                                      // 0x0019(0x0017) MISSED OFFSET
};

// ScriptStruct slua_unreal.unctionProfileNode
// 0x0030
struct FunctionProfileNode
{
	struct FLuaFunctionDefine                          functionDefine;                                           // 0x0000(0x000C)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	int64_t                                            costTime;                                                 // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                countOfCalls;                                             // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                layerIdx;                                                 // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0020(0x0010) MISSED OFFSET
};

// ScriptStruct slua_unreal.ileMemInfo
// 0x0010
struct FileMemInfo
{
	uint32_t                                           fileNameIndex;                                            // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                LineNumber;                                               // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Size;                                                     // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              difference;                                               // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
};

}

