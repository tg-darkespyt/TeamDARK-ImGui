#pragma once

// Pubgm India-64bit (3.4.0) SDK by BangJO [Z] DM @isar_hackJO To Buy Tool SDK

namespace SDK
{
//---------------------By BangJO---------------------------
//Classes
//---------------------By BangJO---------------------------

// Class ModularGameplay.GameFrameworkComponent
// 0x0000 (0x0118 - 0x0118)
class UGameFrameworkComponent : public UActorComponent
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class ModularGameplay.GameFrameworkComponent");
		return pStaticClass;
	}

};


// Class ModularGameplay.ControllerComponent
// 0x0000 (0x0118 - 0x0118)
class UControllerComponent : public UGameFrameworkComponent
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class ModularGameplay.ControllerComponent");
		return pStaticClass;
	}

};


// Class ModularGameplay.GameFrameworkComponentManager
// 0x00F0 (0x0120 - 0x0030)
class UGameFrameworkComponentManager : public UGameInstanceSubsystem
{
public:
	unsigned char                                      UnknownData00[0xF0];                                      // 0x0030(0x00F0) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class ModularGameplay.GameFrameworkComponentManager");
		return pStaticClass;
	}


	void RemoveReceiver(class AActor* Receiver);
	void AddReceiver(class AActor* Receiver, bool bAddOnlyInGameWorlds);
};


// Class ModularGameplay.GameStateComponent
// 0x0000 (0x0118 - 0x0118)
class UGameStateComponent : public UGameFrameworkComponent
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class ModularGameplay.GameStateComponent");
		return pStaticClass;
	}

};


// Class ModularGameplay.PawnComponent
// 0x0000 (0x0118 - 0x0118)
class UPawnComponent : public UGameFrameworkComponent
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class ModularGameplay.PawnComponent");
		return pStaticClass;
	}

};


// Class ModularGameplay.PlayerStateComponent
// 0x0000 (0x0118 - 0x0118)
class UPlayerStateComponent : public UGameFrameworkComponent
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class ModularGameplay.PlayerStateComponent");
		return pStaticClass;
	}

};


}

