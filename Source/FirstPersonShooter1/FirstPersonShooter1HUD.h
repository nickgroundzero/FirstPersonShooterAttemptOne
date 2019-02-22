// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "FirstPersonShooter1HUD.generated.h"

UCLASS()
class AFirstPersonShooter1HUD : public AHUD
{
	GENERATED_BODY()

public:
	AFirstPersonShooter1HUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

