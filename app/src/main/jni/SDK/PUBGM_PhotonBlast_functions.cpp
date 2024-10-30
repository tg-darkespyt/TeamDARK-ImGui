// Pubgm India-64bit (3.4.0) SDK by BangJO [Z] DM @isar_hackJO To Buy Tool SDK

#include "../SDK.hpp"

namespace SDK
{
//---------------------By BangJO---------------------------
//Functions
//---------------------By BangJO---------------------------

// Function PhotonBlast.PhotonReplicationStaticMeshComponent.UnRegistLuaTick
// (Final, Native, Public, BlueprintCallable)

void UPhotonReplicationStaticMeshComponent::UnRegistLuaTick()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonReplicationStaticMeshComponent.UnRegistLuaTick");

	UPhotonReplicationStaticMeshComponent_UnRegistLuaTick_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PhotonBlast.PhotonReplicationStaticMeshComponent.UnRegisterFromCluster
// (Final, Native, Public, BlueprintCallable)

void UPhotonReplicationStaticMeshComponent::UnRegisterFromCluster()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonReplicationStaticMeshComponent.UnRegisterFromCluster");

	UPhotonReplicationStaticMeshComponent_UnRegisterFromCluster_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PhotonBlast.PhotonReplicationStaticMeshComponent.SetMoveable
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UPhotonReplicationStaticMeshComponent::SetMoveable(bool Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonReplicationStaticMeshComponent.SetMoveable");

	UPhotonReplicationStaticMeshComponent_SetMoveable_Params params;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PhotonBlast.PhotonReplicationStaticMeshComponent.SetClusterUniqueID
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            InClusterID                    (Parm, ZeroConstructor, IsPlainOldData)

void UPhotonReplicationStaticMeshComponent::SetClusterUniqueID(int InClusterID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonReplicationStaticMeshComponent.SetClusterUniqueID");

	UPhotonReplicationStaticMeshComponent_SetClusterUniqueID_Params params;
	params.InClusterID = InClusterID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PhotonBlast.PhotonReplicationStaticMeshComponent.SetClusterEntityState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EClusterEntityState            EntityState                    (Parm, ZeroConstructor, IsPlainOldData)

void UPhotonReplicationStaticMeshComponent::SetClusterEntityState(EClusterEntityState EntityState)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonReplicationStaticMeshComponent.SetClusterEntityState");

	UPhotonReplicationStaticMeshComponent_SetClusterEntityState_Params params;
	params.EntityState = EntityState;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PhotonBlast.PhotonReplicationStaticMeshComponent.RegistLuaTick
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          TickInterval                   (Parm, ZeroConstructor, IsPlainOldData)

void UPhotonReplicationStaticMeshComponent::RegistLuaTick(float TickInterval)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonReplicationStaticMeshComponent.RegistLuaTick");

	UPhotonReplicationStaticMeshComponent_RegistLuaTick_Params params;
	params.TickInterval = TickInterval;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PhotonBlast.PhotonReplicationStaticMeshComponent.RegisterToCluster
// (Final, Native, Public, BlueprintCallable)

void UPhotonReplicationStaticMeshComponent::RegisterToCluster()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonReplicationStaticMeshComponent.RegisterToCluster");

	UPhotonReplicationStaticMeshComponent_RegisterToCluster_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PhotonBlast.PhotonReplicationStaticMeshComponent.MarkPropDirty
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            PropIndex                      (Parm, ZeroConstructor, IsPlainOldData)

void UPhotonReplicationStaticMeshComponent::MarkPropDirty(int PropIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonReplicationStaticMeshComponent.MarkPropDirty");

	UPhotonReplicationStaticMeshComponent_MarkPropDirty_Params params;
	params.PropIndex = PropIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PhotonBlast.PhotonDestructibleMeshComponent.SetupFragmentsMaxHp
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          HP                             (Parm, ZeroConstructor, IsPlainOldData)

void UPhotonDestructibleMeshComponent::SetupFragmentsMaxHp(float HP)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonDestructibleMeshComponent.SetupFragmentsMaxHp");

	UPhotonDestructibleMeshComponent_SetupFragmentsMaxHp_Params params;
	params.HP = HP;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PhotonBlast.PhotonDestructibleMeshComponent.SetServerDamagedDelegate
// (Final, Native, Public)
// Parameters:
// struct FScriptDelegate         InDelegate                     (Parm, ZeroConstructor)

void UPhotonDestructibleMeshComponent::SetServerDamagedDelegate(const struct FScriptDelegate& InDelegate)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonDestructibleMeshComponent.SetServerDamagedDelegate");

	UPhotonDestructibleMeshComponent_SetServerDamagedDelegate_Params params;
	params.InDelegate = InDelegate;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PhotonBlast.PhotonDestructibleMeshComponent.SetFracturedMesh
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UPhotonDestructibleMesh* InFracturedMesh                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Force                          (Parm, ZeroConstructor, IsPlainOldData)

void UPhotonDestructibleMeshComponent::SetFracturedMesh(class UPhotonDestructibleMesh* InFracturedMesh, bool Force)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonDestructibleMeshComponent.SetFracturedMesh");

	UPhotonDestructibleMeshComponent_SetFracturedMesh_Params params;
	params.InFracturedMesh = InFracturedMesh;
	params.Force = Force;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PhotonBlast.PhotonDestructibleMeshComponent.Server_OnComponentHitAction
// (Final, Native, Public, HasOutParms, HasDefaults)
// Parameters:
// class UPrimitiveComponent*     HitComp                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector                 NormalImpulse                  (Parm, IsPlainOldData)
// struct FHitResult              Hit                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UPhotonDestructibleMeshComponent::Server_OnComponentHitAction(class UPrimitiveComponent* HitComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonDestructibleMeshComponent.Server_OnComponentHitAction");

	UPhotonDestructibleMeshComponent_Server_OnComponentHitAction_Params params;
	params.HitComp = HitComp;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PhotonBlast.PhotonDestructibleMeshComponent.Server_DamageFragmentsByRadius
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector4                WorldImpactVelocity            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 HitPoint                       (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// float                          HP                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Attenuation                    (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<enum EPhotonWeaponType> WeaponType                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPhotonDestructibleMeshComponent::Server_DamageFragmentsByRadius(const struct FVector4& WorldImpactVelocity, const struct FVector& HitPoint, float HP, float Radius, bool Attenuation, TEnumAsByte<enum EPhotonWeaponType> WeaponType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonDestructibleMeshComponent.Server_DamageFragmentsByRadius");

	UPhotonDestructibleMeshComponent_Server_DamageFragmentsByRadius_Params params;
	params.WorldImpactVelocity = WorldImpactVelocity;
	params.HitPoint = HitPoint;
	params.HP = HP;
	params.Radius = Radius;
	params.Attenuation = Attenuation;
	params.WeaponType = WeaponType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PhotonBlast.PhotonDestructibleMeshComponent.Server_DamageFragmentsByHp
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// TArray<int>                    FragmentsIndex                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<float>                  HP                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FVector                 WorldImpactPoint               (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector4                WorldImpactVelocity            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPhotonDestructibleMeshComponent::Server_DamageFragmentsByHp(TArray<int> FragmentsIndex, TArray<float> HP, const struct FVector& WorldImpactPoint, const struct FVector4& WorldImpactVelocity)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonDestructibleMeshComponent.Server_DamageFragmentsByHp");

	UPhotonDestructibleMeshComponent_Server_DamageFragmentsByHp_Params params;
	params.FragmentsIndex = FragmentsIndex;
	params.HP = HP;
	params.WorldImpactPoint = WorldImpactPoint;
	params.WorldImpactVelocity = WorldImpactVelocity;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PhotonBlast.PhotonDestructibleMeshComponent.OnRep_ImpactData
// (Final, Native, Public)

void UPhotonDestructibleMeshComponent::OnRep_ImpactData()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonDestructibleMeshComponent.OnRep_ImpactData");

	UPhotonDestructibleMeshComponent_OnRep_ImpactData_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PhotonBlast.PhotonDestructibleMeshComponent.OnRep_FragmentsState
// (Final, Native, Public)

void UPhotonDestructibleMeshComponent::OnRep_FragmentsState()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonDestructibleMeshComponent.OnRep_FragmentsState");

	UPhotonDestructibleMeshComponent_OnRep_FragmentsState_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PhotonBlast.PhotonDestructibleMeshComponent.IsFragmentCanDestroy
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            FragmentItemIndex              (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPhotonDestructibleMeshComponent::IsFragmentCanDestroy(int FragmentItemIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonDestructibleMeshComponent.IsFragmentCanDestroy");

	UPhotonDestructibleMeshComponent_IsFragmentCanDestroy_Params params;
	params.FragmentItemIndex = FragmentItemIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PhotonBlast.PhotonDestructibleMeshComponent.IsFragmentCanBeDamaged
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            FragmentItemIndex              (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPhotonDestructibleMeshComponent::IsFragmentCanBeDamaged(int FragmentItemIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonDestructibleMeshComponent.IsFragmentCanBeDamaged");

	UPhotonDestructibleMeshComponent_IsFragmentCanBeDamaged_Params params;
	params.FragmentItemIndex = FragmentItemIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PhotonBlast.PhotonDestructibleMeshComponent.GetPhotonDestructibleMesh
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UPhotonDestructibleMesh* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UPhotonDestructibleMesh* UPhotonDestructibleMeshComponent::GetPhotonDestructibleMesh()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonDestructibleMeshComponent.GetPhotonDestructibleMesh");

	UPhotonDestructibleMeshComponent_GetPhotonDestructibleMesh_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PhotonBlast.PhotonDestructibleMeshComponent.GetFragmentTransform
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            FragmentIndex                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              OutTransform                   (Parm, OutParm, IsPlainOldData)
// bool                           WorldSpace                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPhotonDestructibleMeshComponent::GetFragmentTransform(int FragmentIndex, bool WorldSpace, struct FTransform* OutTransform)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonDestructibleMeshComponent.GetFragmentTransform");

	UPhotonDestructibleMeshComponent_GetFragmentTransform_Params params;
	params.FragmentIndex = FragmentIndex;
	params.WorldSpace = WorldSpace;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutTransform != nullptr)
		*OutTransform = params.OutTransform;

	return params.ReturnValue;
}


// Function PhotonBlast.PhotonDestructibleMeshComponent.GetFragmentsWorldPosition
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// int                            FragmentIndex                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 FragmentPosition               (Parm, OutParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPhotonDestructibleMeshComponent::GetFragmentsWorldPosition(int FragmentIndex, struct FVector* FragmentPosition)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonDestructibleMeshComponent.GetFragmentsWorldPosition");

	UPhotonDestructibleMeshComponent_GetFragmentsWorldPosition_Params params;
	params.FragmentIndex = FragmentIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (FragmentPosition != nullptr)
		*FragmentPosition = params.FragmentPosition;

	return params.ReturnValue;
}


// Function PhotonBlast.PhotonDestructibleMeshComponent.GetFragmentsByRadius
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 HitPoint                       (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// float                          Radius                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TArray<int>                    FragmentsIndex                 (Parm, OutParm, ZeroConstructor)
// TArray<float>                  ImpactDistance                 (Parm, OutParm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPhotonDestructibleMeshComponent::GetFragmentsByRadius(const struct FVector& HitPoint, float Radius, TArray<int>* FragmentsIndex, TArray<float>* ImpactDistance)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonDestructibleMeshComponent.GetFragmentsByRadius");

	UPhotonDestructibleMeshComponent_GetFragmentsByRadius_Params params;
	params.HitPoint = HitPoint;
	params.Radius = Radius;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (FragmentsIndex != nullptr)
		*FragmentsIndex = params.FragmentsIndex;
	if (ImpactDistance != nullptr)
		*ImpactDistance = params.ImpactDistance;

	return params.ReturnValue;
}


// Function PhotonBlast.PhotonDestructibleMeshComponent.GetFragmentItemCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UPhotonDestructibleMeshComponent::GetFragmentItemCount()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonDestructibleMeshComponent.GetFragmentItemCount");

	UPhotonDestructibleMeshComponent_GetFragmentItemCount_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PhotonBlast.PhotonDestructibleMeshComponent.GetFragmentBounds
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            FragmentIndex                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FBox                    OutBox                         (Parm, OutParm, IsPlainOldData)
// bool                           WorldSpace                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPhotonDestructibleMeshComponent::GetFragmentBounds(int FragmentIndex, bool WorldSpace, struct FBox* OutBox)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonDestructibleMeshComponent.GetFragmentBounds");

	UPhotonDestructibleMeshComponent_GetFragmentBounds_Params params;
	params.FragmentIndex = FragmentIndex;
	params.WorldSpace = WorldSpace;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutBox != nullptr)
		*OutBox = params.OutBox;

	return params.ReturnValue;
}


// Function PhotonBlast.PhotonDestructibleMeshComponent.GetFracturedMesh
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UPhotonFracturedMesh*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UPhotonFracturedMesh* UPhotonDestructibleMeshComponent::GetFracturedMesh()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonDestructibleMeshComponent.GetFracturedMesh");

	UPhotonDestructibleMeshComponent_GetFracturedMesh_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PhotonBlast.PhotonReplicationInstancedStaticMeshComponent.UnRegistLuaTick
// (Final, Native, Public, BlueprintCallable)

void UPhotonReplicationInstancedStaticMeshComponent::UnRegistLuaTick()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonReplicationInstancedStaticMeshComponent.UnRegistLuaTick");

	UPhotonReplicationInstancedStaticMeshComponent_UnRegistLuaTick_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PhotonBlast.PhotonReplicationInstancedStaticMeshComponent.UnRegisterFromCluster
// (Final, Native, Public, BlueprintCallable)

void UPhotonReplicationInstancedStaticMeshComponent::UnRegisterFromCluster()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonReplicationInstancedStaticMeshComponent.UnRegisterFromCluster");

	UPhotonReplicationInstancedStaticMeshComponent_UnRegisterFromCluster_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PhotonBlast.PhotonReplicationInstancedStaticMeshComponent.SetMoveable
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UPhotonReplicationInstancedStaticMeshComponent::SetMoveable(bool Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonReplicationInstancedStaticMeshComponent.SetMoveable");

	UPhotonReplicationInstancedStaticMeshComponent_SetMoveable_Params params;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PhotonBlast.PhotonReplicationInstancedStaticMeshComponent.SetClusterUniqueID
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            InClusterID                    (Parm, ZeroConstructor, IsPlainOldData)

void UPhotonReplicationInstancedStaticMeshComponent::SetClusterUniqueID(int InClusterID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonReplicationInstancedStaticMeshComponent.SetClusterUniqueID");

	UPhotonReplicationInstancedStaticMeshComponent_SetClusterUniqueID_Params params;
	params.InClusterID = InClusterID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PhotonBlast.PhotonReplicationInstancedStaticMeshComponent.SetClusterEntityState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EClusterEntityState            EntityState                    (Parm, ZeroConstructor, IsPlainOldData)

void UPhotonReplicationInstancedStaticMeshComponent::SetClusterEntityState(EClusterEntityState EntityState)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonReplicationInstancedStaticMeshComponent.SetClusterEntityState");

	UPhotonReplicationInstancedStaticMeshComponent_SetClusterEntityState_Params params;
	params.EntityState = EntityState;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PhotonBlast.PhotonReplicationInstancedStaticMeshComponent.RegistLuaTick
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          TickInterval                   (Parm, ZeroConstructor, IsPlainOldData)

void UPhotonReplicationInstancedStaticMeshComponent::RegistLuaTick(float TickInterval)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonReplicationInstancedStaticMeshComponent.RegistLuaTick");

	UPhotonReplicationInstancedStaticMeshComponent_RegistLuaTick_Params params;
	params.TickInterval = TickInterval;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PhotonBlast.PhotonReplicationInstancedStaticMeshComponent.RegisterToCluster
// (Final, Native, Public, BlueprintCallable)

void UPhotonReplicationInstancedStaticMeshComponent::RegisterToCluster()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonReplicationInstancedStaticMeshComponent.RegisterToCluster");

	UPhotonReplicationInstancedStaticMeshComponent_RegisterToCluster_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PhotonBlast.PhotonReplicationInstancedStaticMeshComponent.MarkPropDirty
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            PropIndex                      (Parm, ZeroConstructor, IsPlainOldData)

void UPhotonReplicationInstancedStaticMeshComponent::MarkPropDirty(int PropIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonReplicationInstancedStaticMeshComponent.MarkPropDirty");

	UPhotonReplicationInstancedStaticMeshComponent_MarkPropDirty_Params params;
	params.PropIndex = PropIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PhotonBlast.PhotonInstancedDestructibleMeshComponent.SetupFragmentsMaxHp
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          HP                             (Parm, ZeroConstructor, IsPlainOldData)

void UPhotonInstancedDestructibleMeshComponent::SetupFragmentsMaxHp(float HP)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonInstancedDestructibleMeshComponent.SetupFragmentsMaxHp");

	UPhotonInstancedDestructibleMeshComponent_SetupFragmentsMaxHp_Params params;
	params.HP = HP;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PhotonBlast.PhotonInstancedDestructibleMeshComponent.SetServerDamagedDelegate
// (Final, Native, Public)
// Parameters:
// struct FScriptDelegate         InDelegate                     (Parm, ZeroConstructor)

void UPhotonInstancedDestructibleMeshComponent::SetServerDamagedDelegate(const struct FScriptDelegate& InDelegate)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonInstancedDestructibleMeshComponent.SetServerDamagedDelegate");

	UPhotonInstancedDestructibleMeshComponent_SetServerDamagedDelegate_Params params;
	params.InDelegate = InDelegate;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PhotonBlast.PhotonInstancedDestructibleMeshComponent.SetFracturedMesh
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UPhotonDestructibleMesh* InFracturedMesh                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Force                          (Parm, ZeroConstructor, IsPlainOldData)

void UPhotonInstancedDestructibleMeshComponent::SetFracturedMesh(class UPhotonDestructibleMesh* InFracturedMesh, bool Force)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonInstancedDestructibleMeshComponent.SetFracturedMesh");

	UPhotonInstancedDestructibleMeshComponent_SetFracturedMesh_Params params;
	params.InFracturedMesh = InFracturedMesh;
	params.Force = Force;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PhotonBlast.PhotonInstancedDestructibleMeshComponent.Server_OnComponentHitAction
// (Final, Native, Public, HasOutParms, HasDefaults)
// Parameters:
// class UPrimitiveComponent*     HitComp                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector                 NormalImpulse                  (Parm, IsPlainOldData)
// struct FHitResult              Hit                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UPhotonInstancedDestructibleMeshComponent::Server_OnComponentHitAction(class UPrimitiveComponent* HitComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonInstancedDestructibleMeshComponent.Server_OnComponentHitAction");

	UPhotonInstancedDestructibleMeshComponent_Server_OnComponentHitAction_Params params;
	params.HitComp = HitComp;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PhotonBlast.PhotonInstancedDestructibleMeshComponent.Server_DamageFragmentsByRadius
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector4                WorldImpactVelocity            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 HitPoint                       (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// float                          HP                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Attenuation                    (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<enum EPhotonWeaponType> WeaponType                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPhotonInstancedDestructibleMeshComponent::Server_DamageFragmentsByRadius(const struct FVector4& WorldImpactVelocity, const struct FVector& HitPoint, float HP, float Radius, bool Attenuation, TEnumAsByte<enum EPhotonWeaponType> WeaponType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonInstancedDestructibleMeshComponent.Server_DamageFragmentsByRadius");

	UPhotonInstancedDestructibleMeshComponent_Server_DamageFragmentsByRadius_Params params;
	params.WorldImpactVelocity = WorldImpactVelocity;
	params.HitPoint = HitPoint;
	params.HP = HP;
	params.Radius = Radius;
	params.Attenuation = Attenuation;
	params.WeaponType = WeaponType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PhotonBlast.PhotonInstancedDestructibleMeshComponent.ReplaceAllInstances
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FTransform>      InstanceTransforms             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           bShouldReturnIndices           (Parm, ZeroConstructor, IsPlainOldData)
// TArray<int>                    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<int> UPhotonInstancedDestructibleMeshComponent::ReplaceAllInstances(TArray<struct FTransform> InstanceTransforms, bool bShouldReturnIndices)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonInstancedDestructibleMeshComponent.ReplaceAllInstances");

	UPhotonInstancedDestructibleMeshComponent_ReplaceAllInstances_Params params;
	params.InstanceTransforms = InstanceTransforms;
	params.bShouldReturnIndices = bShouldReturnIndices;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PhotonBlast.PhotonInstancedDestructibleMeshComponent.OnRep_ImpactData
// (Final, Native, Public)

void UPhotonInstancedDestructibleMeshComponent::OnRep_ImpactData()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonInstancedDestructibleMeshComponent.OnRep_ImpactData");

	UPhotonInstancedDestructibleMeshComponent_OnRep_ImpactData_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PhotonBlast.PhotonInstancedDestructibleMeshComponent.OnRep_FragmentsState
// (Final, Native, Public)

void UPhotonInstancedDestructibleMeshComponent::OnRep_FragmentsState()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonInstancedDestructibleMeshComponent.OnRep_FragmentsState");

	UPhotonInstancedDestructibleMeshComponent_OnRep_FragmentsState_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PhotonBlast.PhotonInstancedDestructibleMeshComponent.IsFragmentCanDestroy
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            InstanceIndex                  (Parm, ZeroConstructor, IsPlainOldData)
// int                            FragmentItemIndex              (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPhotonInstancedDestructibleMeshComponent::IsFragmentCanDestroy(int InstanceIndex, int FragmentItemIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonInstancedDestructibleMeshComponent.IsFragmentCanDestroy");

	UPhotonInstancedDestructibleMeshComponent_IsFragmentCanDestroy_Params params;
	params.InstanceIndex = InstanceIndex;
	params.FragmentItemIndex = FragmentItemIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PhotonBlast.PhotonInstancedDestructibleMeshComponent.GetPhotonDestructibleMesh
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UPhotonDestructibleMesh* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UPhotonDestructibleMesh* UPhotonInstancedDestructibleMeshComponent::GetPhotonDestructibleMesh()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonInstancedDestructibleMeshComponent.GetPhotonDestructibleMesh");

	UPhotonInstancedDestructibleMeshComponent_GetPhotonDestructibleMesh_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PhotonBlast.PhotonInstancedDestructibleMeshComponent.GetInstanceItemCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UPhotonInstancedDestructibleMeshComponent::GetInstanceItemCount()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonInstancedDestructibleMeshComponent.GetInstanceItemCount");

	UPhotonInstancedDestructibleMeshComponent_GetInstanceItemCount_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PhotonBlast.PhotonInstancedDestructibleMeshComponent.GetFragmentTransform
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            InstanceIndex                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            FragmentIndex                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              OutTransform                   (Parm, OutParm, IsPlainOldData)
// bool                           WorldSpace                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPhotonInstancedDestructibleMeshComponent::GetFragmentTransform(int InstanceIndex, int FragmentIndex, bool WorldSpace, struct FTransform* OutTransform)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonInstancedDestructibleMeshComponent.GetFragmentTransform");

	UPhotonInstancedDestructibleMeshComponent_GetFragmentTransform_Params params;
	params.InstanceIndex = InstanceIndex;
	params.FragmentIndex = FragmentIndex;
	params.WorldSpace = WorldSpace;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutTransform != nullptr)
		*OutTransform = params.OutTransform;

	return params.ReturnValue;
}


// Function PhotonBlast.PhotonInstancedDestructibleMeshComponent.GetFragmentsWorldPosition
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// int                            InstanceIndex                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            FragmentIndex                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 FragmentPosition               (Parm, OutParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPhotonInstancedDestructibleMeshComponent::GetFragmentsWorldPosition(int InstanceIndex, int FragmentIndex, struct FVector* FragmentPosition)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonInstancedDestructibleMeshComponent.GetFragmentsWorldPosition");

	UPhotonInstancedDestructibleMeshComponent_GetFragmentsWorldPosition_Params params;
	params.InstanceIndex = InstanceIndex;
	params.FragmentIndex = FragmentIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (FragmentPosition != nullptr)
		*FragmentPosition = params.FragmentPosition;

	return params.ReturnValue;
}


// Function PhotonBlast.PhotonInstancedDestructibleMeshComponent.GetFragmentItemCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UPhotonInstancedDestructibleMeshComponent::GetFragmentItemCount()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonInstancedDestructibleMeshComponent.GetFragmentItemCount");

	UPhotonInstancedDestructibleMeshComponent_GetFragmentItemCount_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PhotonBlast.PhotonInstancedDestructibleMeshComponent.GetFracturedMesh
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UPhotonFracturedMesh*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UPhotonFracturedMesh* UPhotonInstancedDestructibleMeshComponent::GetFracturedMesh()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonInstancedDestructibleMeshComponent.GetFracturedMesh");

	UPhotonInstancedDestructibleMeshComponent_GetFracturedMesh_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PhotonBlast.PhotonInstancedDestructibleMeshComponent.AddInstanceWorldSpace
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTransform              WorldTransform                 (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UPhotonInstancedDestructibleMeshComponent::AddInstanceWorldSpace(const struct FTransform& WorldTransform)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonInstancedDestructibleMeshComponent.AddInstanceWorldSpace");

	UPhotonInstancedDestructibleMeshComponent_AddInstanceWorldSpace_Params params;
	params.WorldTransform = WorldTransform;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PhotonBlast.PhotonInstancedDestructibleMeshComponent.AddInstances
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FTransform>      InstanceTransforms             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           bShouldReturnIndices           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bMarkRenderStateDirty          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<int>                    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<int> UPhotonInstancedDestructibleMeshComponent::AddInstances(TArray<struct FTransform> InstanceTransforms, bool bShouldReturnIndices, bool bMarkRenderStateDirty)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonInstancedDestructibleMeshComponent.AddInstances");

	UPhotonInstancedDestructibleMeshComponent_AddInstances_Params params;
	params.InstanceTransforms = InstanceTransforms;
	params.bShouldReturnIndices = bShouldReturnIndices;
	params.bMarkRenderStateDirty = bMarkRenderStateDirty;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PhotonBlast.PhotonInstancedDestructibleMeshComponent.AddInstance
// (Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTransform              InstanceTransform              (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UPhotonInstancedDestructibleMeshComponent::AddInstance(const struct FTransform& InstanceTransform)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonInstancedDestructibleMeshComponent.AddInstance");

	UPhotonInstancedDestructibleMeshComponent_AddInstance_Params params;
	params.InstanceTransform = InstanceTransform;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PhotonBlast.PhotonReplicationSkeletalMeshComponent.UnRegistLuaTick
// (Final, Native, Public, BlueprintCallable)

void UPhotonReplicationSkeletalMeshComponent::UnRegistLuaTick()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonReplicationSkeletalMeshComponent.UnRegistLuaTick");

	UPhotonReplicationSkeletalMeshComponent_UnRegistLuaTick_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PhotonBlast.PhotonReplicationSkeletalMeshComponent.UnRegisterFromCluster
// (Final, Native, Public, BlueprintCallable)

void UPhotonReplicationSkeletalMeshComponent::UnRegisterFromCluster()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonReplicationSkeletalMeshComponent.UnRegisterFromCluster");

	UPhotonReplicationSkeletalMeshComponent_UnRegisterFromCluster_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PhotonBlast.PhotonReplicationSkeletalMeshComponent.SetMoveable
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UPhotonReplicationSkeletalMeshComponent::SetMoveable(bool Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonReplicationSkeletalMeshComponent.SetMoveable");

	UPhotonReplicationSkeletalMeshComponent_SetMoveable_Params params;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PhotonBlast.PhotonReplicationSkeletalMeshComponent.SetClusterUniqueID
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            InClusterID                    (Parm, ZeroConstructor, IsPlainOldData)

void UPhotonReplicationSkeletalMeshComponent::SetClusterUniqueID(int InClusterID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonReplicationSkeletalMeshComponent.SetClusterUniqueID");

	UPhotonReplicationSkeletalMeshComponent_SetClusterUniqueID_Params params;
	params.InClusterID = InClusterID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PhotonBlast.PhotonReplicationSkeletalMeshComponent.SetClusterEntityState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EClusterEntityState            EntityState                    (Parm, ZeroConstructor, IsPlainOldData)

void UPhotonReplicationSkeletalMeshComponent::SetClusterEntityState(EClusterEntityState EntityState)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonReplicationSkeletalMeshComponent.SetClusterEntityState");

	UPhotonReplicationSkeletalMeshComponent_SetClusterEntityState_Params params;
	params.EntityState = EntityState;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PhotonBlast.PhotonReplicationSkeletalMeshComponent.RegistLuaTick
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          TickInterval                   (Parm, ZeroConstructor, IsPlainOldData)

void UPhotonReplicationSkeletalMeshComponent::RegistLuaTick(float TickInterval)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonReplicationSkeletalMeshComponent.RegistLuaTick");

	UPhotonReplicationSkeletalMeshComponent_RegistLuaTick_Params params;
	params.TickInterval = TickInterval;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PhotonBlast.PhotonReplicationSkeletalMeshComponent.RegisterToCluster
// (Final, Native, Public, BlueprintCallable)

void UPhotonReplicationSkeletalMeshComponent::RegisterToCluster()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonReplicationSkeletalMeshComponent.RegisterToCluster");

	UPhotonReplicationSkeletalMeshComponent_RegisterToCluster_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PhotonBlast.PhotonReplicationSkeletalMeshComponent.MarkPropDirty
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            PropIndex                      (Parm, ZeroConstructor, IsPlainOldData)

void UPhotonReplicationSkeletalMeshComponent::MarkPropDirty(int PropIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonReplicationSkeletalMeshComponent.MarkPropDirty");

	UPhotonReplicationSkeletalMeshComponent_MarkPropDirty_Params params;
	params.PropIndex = PropIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

