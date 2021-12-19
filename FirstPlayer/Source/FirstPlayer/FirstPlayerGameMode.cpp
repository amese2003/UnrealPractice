// Copyright Epic Games, Inc. All Rights Reserved.

#include "FirstPlayerGameMode.h"
#include "FirstPlayerHUD.h"
#include "FirstPlayerCharacter.h"
#include "UObject/ConstructorHelpers.h"
#include "MyHUD.h"

AFirstPlayerGameMode::AFirstPlayerGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AFirstPlayerHUD::StaticClass();

	static ConstructorHelpers::FClassFinder<UMyHUD> UI_HUD(TEXT("WidgetBlueprint'/Game/WBP_HUD.WBP_HUD_C'"));

	if (UI_HUD.Succeeded())
	{
		HUD_Class = UI_HUD.Class;

		CurrentWidget = CreateWidget(GetWorld(), HUD_Class);


		if (CurrentWidget)
		{
			CurrentWidget->AddToViewport();
			//CurrentWidget->RemoveFromViewport();
		}
	}

}
