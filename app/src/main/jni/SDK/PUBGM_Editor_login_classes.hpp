#pragma once

// Pubgm India-64bit (3.4.0) SDK by BangJO [Z] DM @isar_hackJO To Buy Tool SDK

namespace SDK
{
//---------------------By BangJO---------------------------
//Classes
//---------------------By BangJO---------------------------

// BlueprintGeneratedClass Editor_login.Editor_login_C
// 0x0008 (0x0440 - 0x0438)
class AEditor_login_C : public ALevelScriptActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0438(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("BlueprintGeneratedClass Editor_login.Editor_login_C");
		return pStaticClass;
	}


	void SetFpsByIndex(int idx);
	void InpActEvt_Android_Back_K2Node_InputKeyEvent_10(const struct FKey& Key);
	void InpActEvt_E_K2Node_InputKeyEvent_9(const struct FKey& Key);
	void InpActEvt_BackSpace_K2Node_InputKeyEvent_8(const struct FKey& Key);
	void InpActEvt_B_K2Node_InputKeyEvent_7(const struct FKey& Key);
	void InpActEvt_G_K2Node_InputKeyEvent_6(const struct FKey& Key);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_Editor_login(int EntryPoint);
};


}

