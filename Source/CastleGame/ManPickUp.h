// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Interactable.h"
#include "ManPickUp.generated.h"

/**
 * 
 */
UCLASS()
class CASTLEGAME_API AManPickUp : public AInteractable
{
	GENERATED_BODY()
	

public:
	AManPickUp();

	void Interact_Implementation(APlayerController* Controller) override;

protected:
	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* PickupMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName ItemID;
};
