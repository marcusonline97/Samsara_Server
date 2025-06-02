// Copyright Epic Games, Inc. All Rights Reserved.

#include "SamsaraPickUpComponent.h"

USamsaraPickUpComponent::USamsaraPickUpComponent()
{
	// Setup the Sphere Collision
	SphereRadius = 32.f;
}

void USamsaraPickUpComponent::BeginPlay()
{
	Super::BeginPlay();

	// Register our Overlap Event
	OnComponentBeginOverlap.AddDynamic(this, &USamsaraPickUpComponent::OnSphereBeginOverlap);
}

void USamsaraPickUpComponent::OnSphereBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	// Checking if it is a First Person Character overlapping
	ASamsaraCharacter* Character = Cast<ASamsaraCharacter>(OtherActor);
	if(Character != nullptr)
	{
		// Notify that the actor is being picked up
		OnPickUp.Broadcast(Character);

		// Unregister from the Overlap Event so it is no longer triggered
		OnComponentBeginOverlap.RemoveAll(this);
	}
}
