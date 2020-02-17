// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Engine.h"
#include "GameFramework/GameStateBase.h"
#include "CastleGameGameStateBase.generated.h"

/**
 * 
 */
UCLASS()
class CASTLEGAME_API ACastleGameGameStateBase : public AGameStateBase
{
	GENERATED_BODY()
	

public:
	ACastleGameGameStateBase();
	UDataTable* GetItemDB() const;

protected:
	UPROPERTY(EditDefaultsOnly)
		class UDataTable* ItemDB;
};
