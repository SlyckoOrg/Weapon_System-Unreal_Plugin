// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WeaponSystem/Public/Actor/BaseGrenade.h"
#include "Engine/Classes/Engine/DamageEvents.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseGrenade() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRadialDamageEvent();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRadialDamageParams();
	UPackage* Z_Construct_UPackage__Script_WeaponSystem();
	WEAPONSYSTEM_API UClass* Z_Construct_UClass_ABaseGrenade();
	WEAPONSYSTEM_API UClass* Z_Construct_UClass_ABaseGrenade_NoRegister();
	WEAPONSYSTEM_API UEnum* Z_Construct_UEnum_WeaponSystem_EBaseGrenadeState();
	WEAPONSYSTEM_API UFunction* Z_Construct_UDelegateFunction_WeaponSystem_OnExploded__DelegateSignature();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBaseGrenadeState;
	static UEnum* EBaseGrenadeState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EBaseGrenadeState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EBaseGrenadeState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_WeaponSystem_EBaseGrenadeState, Z_Construct_UPackage__Script_WeaponSystem(), TEXT("EBaseGrenadeState"));
		}
		return Z_Registration_Info_UEnum_EBaseGrenadeState.OuterSingleton;
	}
	template<> WEAPONSYSTEM_API UEnum* StaticEnum<EBaseGrenadeState>()
	{
		return EBaseGrenadeState_StaticEnum();
	}
	struct Z_Construct_UEnum_WeaponSystem_EBaseGrenadeState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_WeaponSystem_EBaseGrenadeState_Statics::Enumerators[] = {
		{ "EBaseGrenadeState::Ready", (int64)EBaseGrenadeState::Ready },
		{ "EBaseGrenadeState::Exploded", (int64)EBaseGrenadeState::Exploded },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_WeaponSystem_EBaseGrenadeState_Statics::Enum_MetaDataParams[] = {
		{ "Exploded.Name", "EBaseGrenadeState::Exploded" },
		{ "ModuleRelativePath", "Public/Actor/BaseGrenade.h" },
		{ "Ready.Name", "EBaseGrenadeState::Ready" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_WeaponSystem_EBaseGrenadeState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_WeaponSystem,
		nullptr,
		"EBaseGrenadeState",
		"EBaseGrenadeState",
		Z_Construct_UEnum_WeaponSystem_EBaseGrenadeState_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_WeaponSystem_EBaseGrenadeState_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_WeaponSystem_EBaseGrenadeState_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_WeaponSystem_EBaseGrenadeState_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_WeaponSystem_EBaseGrenadeState()
	{
		if (!Z_Registration_Info_UEnum_EBaseGrenadeState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBaseGrenadeState.InnerSingleton, Z_Construct_UEnum_WeaponSystem_EBaseGrenadeState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EBaseGrenadeState.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_WeaponSystem_OnExploded__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_WeaponSystem_OnExploded__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Actor/BaseGrenade.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_WeaponSystem_OnExploded__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_WeaponSystem, nullptr, "OnExploded__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_WeaponSystem_OnExploded__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WeaponSystem_OnExploded__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_WeaponSystem_OnExploded__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_WeaponSystem_OnExploded__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(ABaseGrenade::execOnRep_State)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_State();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABaseGrenade::execOnExplode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnExplode();
		P_NATIVE_END;
	}
	void ABaseGrenade::StaticRegisterNativesABaseGrenade()
	{
		UClass* Class = ABaseGrenade::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnExplode", &ABaseGrenade::execOnExplode },
			{ "OnRep_State", &ABaseGrenade::execOnRep_State },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABaseGrenade_OnExplode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseGrenade_OnExplode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Actor/BaseGrenade.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseGrenade_OnExplode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseGrenade, nullptr, "OnExplode", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseGrenade_OnExplode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseGrenade_OnExplode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseGrenade_OnExplode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseGrenade_OnExplode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseGrenade_OnRep_State_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseGrenade_OnRep_State_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Actor/BaseGrenade.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseGrenade_OnRep_State_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseGrenade, nullptr, "OnRep_State", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseGrenade_OnRep_State_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseGrenade_OnRep_State_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseGrenade_OnRep_State()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseGrenade_OnRep_State_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABaseGrenade);
	UClass* Z_Construct_UClass_ABaseGrenade_NoRegister()
	{
		return ABaseGrenade::StaticClass();
	}
	struct Z_Construct_UClass_ABaseGrenade_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RadialDamageEvent_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RadialDamageEvent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SphereComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SphereComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SphereComponentGrenadeRange_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SphereComponentGrenadeRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMeshComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RadialDamageParams_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RadialDamageParams;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnExploded_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnExploded;
		static const UECodeGen_Private::FBytePropertyParams NewProp_State_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_State_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_State;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABaseGrenade_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_WeaponSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABaseGrenade_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABaseGrenade_OnExplode, "OnExplode" }, // 3840795370
		{ &Z_Construct_UFunction_ABaseGrenade_OnRep_State, "OnRep_State" }, // 384495465
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseGrenade_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Actor/BaseGrenade.h" },
		{ "ModuleRelativePath", "Public/Actor/BaseGrenade.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseGrenade_Statics::NewProp_RadialDamageEvent_MetaData[] = {
		{ "ModuleRelativePath", "Public/Actor/BaseGrenade.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABaseGrenade_Statics::NewProp_RadialDamageEvent = { "RadialDamageEvent", nullptr, (EPropertyFlags)0x0010008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABaseGrenade, RadialDamageEvent), Z_Construct_UScriptStruct_FRadialDamageEvent, METADATA_PARAMS(Z_Construct_UClass_ABaseGrenade_Statics::NewProp_RadialDamageEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseGrenade_Statics::NewProp_RadialDamageEvent_MetaData)) }; // 131670759
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseGrenade_Statics::NewProp_SphereComponent_MetaData[] = {
		{ "Category", "BaseGrenade" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actor/BaseGrenade.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseGrenade_Statics::NewProp_SphereComponent = { "SphereComponent", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABaseGrenade, SphereComponent), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABaseGrenade_Statics::NewProp_SphereComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseGrenade_Statics::NewProp_SphereComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseGrenade_Statics::NewProp_SphereComponentGrenadeRange_MetaData[] = {
		{ "Category", "BaseGrenade" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actor/BaseGrenade.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseGrenade_Statics::NewProp_SphereComponentGrenadeRange = { "SphereComponentGrenadeRange", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABaseGrenade, SphereComponentGrenadeRange), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABaseGrenade_Statics::NewProp_SphereComponentGrenadeRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseGrenade_Statics::NewProp_SphereComponentGrenadeRange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseGrenade_Statics::NewProp_StaticMeshComponent_MetaData[] = {
		{ "Category", "BaseGrenade" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actor/BaseGrenade.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseGrenade_Statics::NewProp_StaticMeshComponent = { "StaticMeshComponent", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABaseGrenade, StaticMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABaseGrenade_Statics::NewProp_StaticMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseGrenade_Statics::NewProp_StaticMeshComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseGrenade_Statics::NewProp_RadialDamageParams_MetaData[] = {
		{ "Category", "GrenadeDetails" },
		{ "ModuleRelativePath", "Public/Actor/BaseGrenade.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABaseGrenade_Statics::NewProp_RadialDamageParams = { "RadialDamageParams", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABaseGrenade, RadialDamageParams), Z_Construct_UScriptStruct_FRadialDamageParams, METADATA_PARAMS(Z_Construct_UClass_ABaseGrenade_Statics::NewProp_RadialDamageParams_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseGrenade_Statics::NewProp_RadialDamageParams_MetaData)) }; // 2887229023
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseGrenade_Statics::NewProp_OnExploded_MetaData[] = {
		{ "ModuleRelativePath", "Public/Actor/BaseGrenade.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ABaseGrenade_Statics::NewProp_OnExploded = { "OnExploded", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABaseGrenade, OnExploded), Z_Construct_UDelegateFunction_WeaponSystem_OnExploded__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ABaseGrenade_Statics::NewProp_OnExploded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseGrenade_Statics::NewProp_OnExploded_MetaData)) }; // 1378509471
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ABaseGrenade_Statics::NewProp_State_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseGrenade_Statics::NewProp_State_MetaData[] = {
		{ "Category", "BaseGrenade" },
		{ "ModuleRelativePath", "Public/Actor/BaseGrenade.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ABaseGrenade_Statics::NewProp_State = { "State", "OnRep_State", (EPropertyFlags)0x0020080100000024, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABaseGrenade, State), Z_Construct_UEnum_WeaponSystem_EBaseGrenadeState, METADATA_PARAMS(Z_Construct_UClass_ABaseGrenade_Statics::NewProp_State_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseGrenade_Statics::NewProp_State_MetaData)) }; // 587922460
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABaseGrenade_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseGrenade_Statics::NewProp_RadialDamageEvent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseGrenade_Statics::NewProp_SphereComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseGrenade_Statics::NewProp_SphereComponentGrenadeRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseGrenade_Statics::NewProp_StaticMeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseGrenade_Statics::NewProp_RadialDamageParams,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseGrenade_Statics::NewProp_OnExploded,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseGrenade_Statics::NewProp_State_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseGrenade_Statics::NewProp_State,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABaseGrenade_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABaseGrenade>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABaseGrenade_Statics::ClassParams = {
		&ABaseGrenade::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABaseGrenade_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABaseGrenade_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABaseGrenade_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseGrenade_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABaseGrenade()
	{
		if (!Z_Registration_Info_UClass_ABaseGrenade.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABaseGrenade.OuterSingleton, Z_Construct_UClass_ABaseGrenade_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABaseGrenade.OuterSingleton;
	}
	template<> WEAPONSYSTEM_API UClass* StaticClass<ABaseGrenade>()
	{
		return ABaseGrenade::StaticClass();
	}

	void ABaseGrenade::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_State(TEXT("State"));

		const bool bIsValid = true
			&& Name_State == ClassReps[(int32)ENetFields_Private::State].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ABaseGrenade"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABaseGrenade);
	ABaseGrenade::~ABaseGrenade() {}
	struct Z_CompiledInDeferFile_FID_projet8inf916_Plugins_WeaponSystem_Source_WeaponSystem_Public_Actor_BaseGrenade_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_projet8inf916_Plugins_WeaponSystem_Source_WeaponSystem_Public_Actor_BaseGrenade_h_Statics::EnumInfo[] = {
		{ EBaseGrenadeState_StaticEnum, TEXT("EBaseGrenadeState"), &Z_Registration_Info_UEnum_EBaseGrenadeState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 587922460U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_projet8inf916_Plugins_WeaponSystem_Source_WeaponSystem_Public_Actor_BaseGrenade_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABaseGrenade, ABaseGrenade::StaticClass, TEXT("ABaseGrenade"), &Z_Registration_Info_UClass_ABaseGrenade, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABaseGrenade), 396035576U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_projet8inf916_Plugins_WeaponSystem_Source_WeaponSystem_Public_Actor_BaseGrenade_h_728019194(TEXT("/Script/WeaponSystem"),
		Z_CompiledInDeferFile_FID_projet8inf916_Plugins_WeaponSystem_Source_WeaponSystem_Public_Actor_BaseGrenade_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_projet8inf916_Plugins_WeaponSystem_Source_WeaponSystem_Public_Actor_BaseGrenade_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_projet8inf916_Plugins_WeaponSystem_Source_WeaponSystem_Public_Actor_BaseGrenade_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_projet8inf916_Plugins_WeaponSystem_Source_WeaponSystem_Public_Actor_BaseGrenade_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
