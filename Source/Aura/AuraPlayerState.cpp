// Fill out your copyright notice in the Description page of Project Settings.


#include "AuraPlayerState.h"

#include "AbilitySystemComponent.h"

AAuraPlayerState::AAuraPlayerState()
{
	AbilitySystemComponent = CreateDefaultSubobject<UAbilitySystemComponent>(TEXT("AbilitySystemComponent"));
	AbilitySystemComponent->SetIsReplicated(true);

	Attributes = CreateDefaultSubobject<UAttributeSet>(TEXT("Attributeset"));
}

UAbilitySystemComponent* AAuraPlayerState::GetAbilitySystemComponent() const
{
	return AbilitySystemComponent;
}
