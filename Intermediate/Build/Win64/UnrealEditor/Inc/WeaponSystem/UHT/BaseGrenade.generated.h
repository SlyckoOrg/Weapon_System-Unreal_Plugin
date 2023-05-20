// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Actor/BaseGrenade.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef WEAPONSYSTEM_BaseGrenade_generated_h
#error "BaseGrenade.generated.h already included, missing '#pragma once' in BaseGrenade.h"
#endif
#define WEAPONSYSTEM_BaseGrenade_generated_h

#define FID_projet8inf916_Plugins_WeaponSystem_Source_WeaponSystem_Public_Actor_BaseGrenade_h_18_DELEGATE \
static inline void FOnExploded_DelegateWrapper(const FMulticastScriptDelegate& OnExploded) \
{ \
	OnExploded.ProcessMulticastDelegate<UObject>(NULL); \
}


#define FID_projet8inf916_Plugins_WeaponSystem_Source_WeaponSystem_Public_Actor_BaseGrenade_h_23_SPARSE_DATA
#define FID_projet8inf916_Plugins_WeaponSystem_Source_WeaponSystem_Public_Actor_BaseGrenade_h_23_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRep_State); \
	DECLARE_FUNCTION(execOnExplode);


#define FID_projet8inf916_Plugins_WeaponSystem_Source_WeaponSystem_Public_Actor_BaseGrenade_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_State); \
	DECLARE_FUNCTION(execOnExplode);


#define FID_projet8inf916_Plugins_WeaponSystem_Source_WeaponSystem_Public_Actor_BaseGrenade_h_23_ACCESSORS
#define FID_projet8inf916_Plugins_WeaponSystem_Source_WeaponSystem_Public_Actor_BaseGrenade_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABaseGrenade(); \
	friend struct Z_Construct_UClass_ABaseGrenade_Statics; \
public: \
	DECLARE_CLASS(ABaseGrenade, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/WeaponSystem"), NO_API) \
	DECLARE_SERIALIZER(ABaseGrenade) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		State=NETFIELD_REP_START, \
		NETFIELD_REP_END=State	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_projet8inf916_Plugins_WeaponSystem_Source_WeaponSystem_Public_Actor_BaseGrenade_h_23_INCLASS \
private: \
	static void StaticRegisterNativesABaseGrenade(); \
	friend struct Z_Construct_UClass_ABaseGrenade_Statics; \
public: \
	DECLARE_CLASS(ABaseGrenade, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/WeaponSystem"), NO_API) \
	DECLARE_SERIALIZER(ABaseGrenade) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		State=NETFIELD_REP_START, \
		NETFIELD_REP_END=State	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_projet8inf916_Plugins_WeaponSystem_Source_WeaponSystem_Public_Actor_BaseGrenade_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABaseGrenade(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABaseGrenade) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseGrenade); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseGrenade); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseGrenade(ABaseGrenade&&); \
	NO_API ABaseGrenade(const ABaseGrenade&); \
public: \
	NO_API virtual ~ABaseGrenade();


#define FID_projet8inf916_Plugins_WeaponSystem_Source_WeaponSystem_Public_Actor_BaseGrenade_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseGrenade(ABaseGrenade&&); \
	NO_API ABaseGrenade(const ABaseGrenade&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseGrenade); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseGrenade); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABaseGrenade) \
	NO_API virtual ~ABaseGrenade();


#define FID_projet8inf916_Plugins_WeaponSystem_Source_WeaponSystem_Public_Actor_BaseGrenade_h_20_PROLOG
#define FID_projet8inf916_Plugins_WeaponSystem_Source_WeaponSystem_Public_Actor_BaseGrenade_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_projet8inf916_Plugins_WeaponSystem_Source_WeaponSystem_Public_Actor_BaseGrenade_h_23_SPARSE_DATA \
	FID_projet8inf916_Plugins_WeaponSystem_Source_WeaponSystem_Public_Actor_BaseGrenade_h_23_RPC_WRAPPERS \
	FID_projet8inf916_Plugins_WeaponSystem_Source_WeaponSystem_Public_Actor_BaseGrenade_h_23_ACCESSORS \
	FID_projet8inf916_Plugins_WeaponSystem_Source_WeaponSystem_Public_Actor_BaseGrenade_h_23_INCLASS \
	FID_projet8inf916_Plugins_WeaponSystem_Source_WeaponSystem_Public_Actor_BaseGrenade_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_projet8inf916_Plugins_WeaponSystem_Source_WeaponSystem_Public_Actor_BaseGrenade_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_projet8inf916_Plugins_WeaponSystem_Source_WeaponSystem_Public_Actor_BaseGrenade_h_23_SPARSE_DATA \
	FID_projet8inf916_Plugins_WeaponSystem_Source_WeaponSystem_Public_Actor_BaseGrenade_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_projet8inf916_Plugins_WeaponSystem_Source_WeaponSystem_Public_Actor_BaseGrenade_h_23_ACCESSORS \
	FID_projet8inf916_Plugins_WeaponSystem_Source_WeaponSystem_Public_Actor_BaseGrenade_h_23_INCLASS_NO_PURE_DECLS \
	FID_projet8inf916_Plugins_WeaponSystem_Source_WeaponSystem_Public_Actor_BaseGrenade_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WEAPONSYSTEM_API UClass* StaticClass<class ABaseGrenade>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_projet8inf916_Plugins_WeaponSystem_Source_WeaponSystem_Public_Actor_BaseGrenade_h


#define FOREACH_ENUM_EBASEGRENADESTATE(op) \
	op(EBaseGrenadeState::Ready) \
	op(EBaseGrenadeState::Exploded) 

enum class EBaseGrenadeState : uint8;
template<> struct TIsUEnumClass<EBaseGrenadeState> { enum { Value = true }; };
template<> WEAPONSYSTEM_API UEnum* StaticEnum<EBaseGrenadeState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
