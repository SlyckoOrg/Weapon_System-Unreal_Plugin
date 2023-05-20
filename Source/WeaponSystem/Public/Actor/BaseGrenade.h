// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DamageEvents.h"
#include "GameFramework/Actor.h"
#include "Components/SphereComponent.h"
#include "BaseGrenade.generated.h"

UENUM()
enum class EBaseGrenadeState : uint8
{
	Ready,
	Exploded
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnExploded);
	DECLARE_DELEGATE_RetVal_FourParams(bool, FGrenadeExplosionDelegate, USphereComponent* ,FRadialDamageEvent& ,EBaseGrenadeState, AActor*)
UCLASS()
class WEAPONSYSTEM_API ABaseGrenade : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ABaseGrenade();

	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	UPROPERTY()
	FRadialDamageEvent RadialDamageEvent;

	UFUNCTION()
	void OnExplode();
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	USphereComponent* SphereComponent;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	USphereComponent* SphereComponentGrenadeRange;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	UStaticMeshComponent* StaticMeshComponent;
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="GrenadeDetails")
	FRadialDamageParams RadialDamageParams;

	UPROPERTY(BlueprintAssignable)
	FOnExploded OnExploded;

	FGrenadeExplosionDelegate GrenadeExplosionDelegate;

	void SetGrenadeExplosionDelegate(FGrenadeExplosionDelegate Delegate)
	{
		GrenadeExplosionDelegate = Delegate;
	}

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(ReplicatedUsing=OnRep_State, BlueprintReadWrite)
	EBaseGrenadeState State;

	UFUNCTION()
	void OnRep_State() const;

};
