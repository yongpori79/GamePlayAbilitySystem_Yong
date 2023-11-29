// Fill out your copyright notice in the Description page of Project Settings.


#include "AuraEnemy.h"
#include "Engine/World.h"
#include "Kismet/GameplayStatics.h"

AAuraEnemy::AAuraEnemy()
{
	PrimaryActorTick.bCanEverTick = true;
	GetMesh()->SetCollisionResponseToChannel(ECC_Visibility, ECR_Block);
}

void AAuraEnemy::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);	

	
		
}

void AAuraEnemy::BeginPlay()
{
	Super::BeginPlay();
	
}

void AAuraEnemy::HighLightActor()
{
	GetMesh()->SetRenderCustomDepth(true);
	GetMesh()->SetCustomDepthStencilValue(300);

	Weapon->SetRenderCustomDepth(true);
	Weapon->SetCustomDepthStencilValue(500);
	
}

void AAuraEnemy::UnHighLightActor()
{
	GetMesh()->SetRenderCustomDepth(false);
	Weapon->SetRenderCustomDepth(false);
}
