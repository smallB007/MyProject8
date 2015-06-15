// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
#pragma once 
#include "GameFramework/HUD.h"
#include "MyProject8HUD.generated.h"

UCLASS()
class AMyProject8HUD : public AHUD
{
	GENERATED_BODY()

public:
	AMyProject8HUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

