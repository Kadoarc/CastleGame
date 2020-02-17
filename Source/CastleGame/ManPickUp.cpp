// Fill out your copyright notice in the Description page of Project Settings.


#include "ManPickUp.h"
#include "CastleGameController.h"

AManPickUp::AManPickUp()
{
	PickupMesh = CreateDefaultSubobject<UStaticMeshComponent>("PickupMesh");
	RootComponent = Cast<USceneComponent>(PickupMesh);

	ItemID = FName("No ID");

	Super::Name = "Item";
	Super::Action = "pickup";
}

void AManPickUp::Interact_Implementation(APlayerController* Controller)
{
	Super::Interact_Implementation(Controller);
	ACastleGameController* IController = Cast<ACastleGameController>(Controller);
	if (IController->AddItemToInventoryByID(ItemID))
		Destroy();
}

