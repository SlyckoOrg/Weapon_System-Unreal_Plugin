// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Actor/BaseGun.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef WEAPONSYSTEM_BaseGun_generated_h
#error "BaseGun.generated.h already included, missing '#pragma once' in BaseGun.h"
#endif
#define WEAPONSYSTEM_BaseGun_generated_h

#define FID_projet8inf916_Plugins_WeaponSystem_Source_WeaponSystem_Public_Actor_BaseGun_h_21_SPARSE_DATA
#define FID_projet8inf916_Plugins_WeaponSystem_Source_WeaponSystem_Public_Actor_BaseGun_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execReload);


#define FID_projet8inf916_Plugins_WeaponSystem_Source_WeaponSystem_Public_Actor_BaseGun_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execReload);


#define FID_projet8inf916_Plugins_WeaponSystem_Source_WeaponSystem_Public_Actor_BaseGun_h_21_ACCESSORS
#define FID_projet8inf916_Plugins_WeaponSystem_Source_WeaponSystem_Public_Actor_BaseGun_h_21_CALLBACK_WRAPPERS
#define FID_projet8inf916_Plugins_WeaponSystem_Source_WeaponSystem_Public_Actor_BaseGun_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABaseGun(); \
	friend struct Z_Construct_UClass_ABaseGun_Statics; \
public: \
	DECLARE_CLASS(ABaseGun, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/WeaponSystem"), NO_API) \
	DECLARE_SERIALIZER(ABaseGun) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Damage=NETFIELD_REP_START, \
		NETFIELD_REP_END=Damage	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_projet8inf916_Plugins_WeaponSystem_Source_WeaponSystem_Public_Actor_BaseGun_h_21_INCLASS \
private: \
	static void StaticRegisterNativesABaseGun(); \
	friend struct Z_Construct_UClass_ABaseGun_Statics; \
public: \
	DECLARE_CLASS(ABaseGun, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/WeaponSystem"), NO_API) \
	DECLARE_SERIALIZER(ABaseGun) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Damage=NETFIELD_REP_START, \
		NETFIELD_REP_END=Damage	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_projet8inf916_Plugins_WeaponSystem_Source_WeaponSystem_Public_Actor_BaseGun_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABaseGun(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABaseGun) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseGun); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseGun); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseGun(ABaseGun&&); \
	NO_API ABaseGun(const ABaseGun&); \
public: \
	NO_API virtual ~ABaseGun();


#define FID_projet8inf916_Plugins_WeaponSystem_Source_WeaponSystem_Public_Actor_BaseGun_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseGun(ABaseGun&&); \
	NO_API ABaseGun(const ABaseGun&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseGun); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseGun); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABaseGun) \
	NO_API virtual ~ABaseGun();


#define FID_projet8inf916_Plugins_WeaponSystem_Source_WeaponSystem_Public_Actor_BaseGun_h_18_PROLOG
#define FID_projet8inf916_Plugins_WeaponSystem_Source_WeaponSystem_Public_Actor_BaseGun_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_projet8inf916_Plugins_WeaponSystem_Source_WeaponSystem_Public_Actor_BaseGun_h_21_SPARSE_DATA \
	FID_projet8inf916_Plugins_WeaponSystem_Source_WeaponSystem_Public_Actor_BaseGun_h_21_RPC_WRAPPERS \
	FID_projet8inf916_Plugins_WeaponSystem_Source_WeaponSystem_Public_Actor_BaseGun_h_21_ACCESSORS \
	FID_projet8inf916_Plugins_WeaponSystem_Source_WeaponSystem_Public_Actor_BaseGun_h_21_CALLBACK_WRAPPERS \
	FID_projet8inf916_Plugins_WeaponSystem_Source_WeaponSystem_Public_Actor_BaseGun_h_21_INCLASS \
	FID_projet8inf916_Plugins_WeaponSystem_Source_WeaponSystem_Public_Actor_BaseGun_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_projet8inf916_Plugins_WeaponSystem_Source_WeaponSystem_Public_Actor_BaseGun_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_projet8inf916_Plugins_WeaponSystem_Source_WeaponSystem_Public_Actor_BaseGun_h_21_SPARSE_DATA \
	FID_projet8inf916_Plugins_WeaponSystem_Source_WeaponSystem_Public_Actor_BaseGun_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_projet8inf916_Plugins_WeaponSystem_Source_WeaponSystem_Public_Actor_BaseGun_h_21_ACCESSORS \
	FID_projet8inf916_Plugins_WeaponSystem_Source_WeaponSystem_Public_Actor_BaseGun_h_21_CALLBACK_WRAPPERS \
	FID_projet8inf916_Plugins_WeaponSystem_Source_WeaponSystem_Public_Actor_BaseGun_h_21_INCLASS_NO_PURE_DECLS \
	FID_projet8inf916_Plugins_WeaponSystem_Source_WeaponSystem_Public_Actor_BaseGun_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WEAPONSYSTEM_API UClass* StaticClass<class ABaseGun>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_projet8inf916_Plugins_WeaponSystem_Source_WeaponSystem_Public_Actor_BaseGun_h


#define FOREACH_ENUM_EWEAPONTYPE(op) \
	op(EWeaponType::Primary) \
	op(EWeaponType::Secondary) \
	op(EWeaponType::Melee) 

enum class EWeaponType : uint8;
template<> struct TIsUEnumClass<EWeaponType> { enum { Value = true }; };
template<> WEAPONSYSTEM_API UEnum* StaticEnum<EWeaponType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
