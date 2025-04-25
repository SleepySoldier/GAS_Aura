// Copyright SleepySoldier.


#include "Character/AuraCharacterBase.h"

AAuraCharacterBase::AAuraCharacterBase()
{
	PrimaryActorTick.bCanEverTick = false;

	Weapon = CreateDefaultSubobject<USkeletalMeshComponent>("Weapon");
	Weapon->SetupAttachment(GetMesh(), FName("WeaponHandSocket"));
	Weapon->SetCollisionEnabled(ECollisionEnabled::NoCollision);

	GetMesh()->SetWorldLocationAndRotation(FVector(0.f,0.f, -90.f), FRotator(0.f,-90.f, 0.f));
}

void AAuraCharacterBase::BeginPlay()
{
	Super::BeginPlay();
	
}


