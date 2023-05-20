// Fill out your copyright notice in the Description page of Project Settings.


#include "Actor/BaseGun.h"

#include "Components/AudioComponent.h"
#include "Net/UnrealNetwork.h"



// Sets default values
ABaseGun::ABaseGun()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	
	MeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMeshComponent"));

	MeshComponent->SetupAttachment(RootComponent);

	AudioComponent = CreateDefaultSubobject<UAudioComponent>(TEXT("AudioComponent"));
	
	AudioComponent->SetupAttachment(RootComponent);
}

// Called when the game starts or when spawned
void ABaseGun::BeginPlay()
{
	Super::BeginPlay();
	
	PointDamageEvent.Damage = Damage;
	CurrentBulletInMagazine = MagazineCapacity;
}

void ABaseGun::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ABaseGun, Damage);
}

// Called every frame
void ABaseGun::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ABaseGun::Reload()
{
	CurrentBulletInMagazine = MagazineCapacity;
}

