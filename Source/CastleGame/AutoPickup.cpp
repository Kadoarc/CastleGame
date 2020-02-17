// Fill out your copyright notice in the Description page of Project Settings.


#include "AutoPickup.h"
#include "CastleGameController.h"


AAutoPickup::AAutoPickup()
{
	PickupMesh = CreateDefaultSubobject<UStaticMeshComponent>("PickupMesh");
	RootComponent = Cast<USceneComponent>(PickupMesh);

	ItemID = FName("No ID");
}

void AAutoPickup::Collect_Implementation(APlayerController* Controller)
{
	ACastleGameController* IController = Cast<ACastleGameController>(Controller);
	if (IController->AddItemToInventoryByID(ItemID))
		Destroy();
}

FName AAutoPickup::GetItemID()
{
	return ItemID;
}

