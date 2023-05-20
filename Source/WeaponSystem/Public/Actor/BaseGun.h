// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DamageEvents.h"
#include "GameFramework/Actor.h"
#include "BaseGun.generated.h"

UENUM()
enum class EWeaponType : uint8
{
	Primary,
	Secondary,
	Melee
};

UCLASS()
class WEAPONSYSTEM_API ABaseGun : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ABaseGun();UPROPERTY(BlueprintReadWrite,EditAnywhere, Category="Skeletal Mesh")
	USkeletalMeshComponent* MeshComponent;

	UPROPERTY(Replicated, EditAnywhere, Category="GunDetails")
	float Damage;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="GunDetails")
	float MaxBulletDistance;
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="GunDetails")
	float FireRate;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="GunDetails")
	int MagazineCapacity;

	UPROPERTY(BlueprintReadOnly, Category="GunDetails")
	int CurrentBulletInMagazine;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="GunDetails")
	bool bIsOneHanded;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="GunDetails")
	FName GunName;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="GunDetails")
	EWeaponType WeaponType;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="GunDetails")
	FPointDamageEvent PointDamageEvent;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="GunDetails")
	UAudioComponent* AudioComponent;
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	virtual void GetLifetimeReplicatedProps(TArray< FLifetimeProperty > & OutLifetimeProps) const override;



public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION()
	void Reload();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void BP_FireFeedback(bool IsReloading, bool IsPrimaryShoot);
};
