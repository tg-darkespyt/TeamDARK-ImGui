#pragma once

// Pubgm India-64bit (3.4.0) SDK by BangJO [Z] DM @isar_hackJO To Buy Tool SDK

#include "../SDK.hpp"

namespace SDK
{
//---------------------By BangJO---------------------------
//Parameters
//---------------------By BangJO---------------------------

// Function UIParticleSystem2.ParticleSystemWidget2.SetParticleSystem
struct UParticleSystemWidget2_SetParticleSystem_Params
{
	class UParticleSystem*                             ParticleSystem;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UIParticleSystem2.ParticleSystemWidget2.SetNiagaraSystem
struct UParticleSystemWidget2_SetNiagaraSystem_Params
{
	class UNiagaraSystem*                              ParticleSystem;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UIParticleSystem2.ParticleSystemWidget2.SetActivate
struct UParticleSystemWidget2_SetActivate_Params
{
	bool                                               bIsActivate;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UIParticleSystem2.ParticleSystemWidget2.GetParticleComponent
struct UParticleSystemWidget2_GetParticleComponent_Params
{
	class UParticleSystemComponent*                    ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function UIParticleSystem2.ParticleSystemWidget2.GetNiagaraComponent
struct UParticleSystemWidget2_GetNiagaraComponent_Params
{
	class UNiagaraComponent*                           ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

}

