// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "BlasterHUD.generated.h"

USTRUCT(BlueprintType)
struct FHUDPackage
{
	GENERATED_BODY()

	class UTexture2D* CrosshairsCenter;
	class UTexture2D* CrosshairsLeft;
	class UTexture2D* CrosshairsRight;
	class UTexture2D* CrosshairsTop;
	class UTexture2D* CrosshairsBottom;
	float CrosshairSpread;
	FLinearColor CrosshairsColor;
};


/**
 * 
 */
UCLASS()
class BLASTER_API ABlasterHUD : public AHUD
{
	GENERATED_BODY()

public:
	virtual void DrawHUD() override;
	void DrawCrosshair(UTexture2D* Texture, FVector2D ViewportCenter, FVector2D Spread, FLinearColor CrosshairColor);
	void AddCharacterOverlay();
	void AddAnnouncement();
	void AddElimAnnouncement(FString Attacker, FString Victim);

protected:
	virtual void BeginPlay() override;
	


private:
	FHUDPackage HUDPackage;

	UPROPERTY(EditAnywhere)
		float CrosshairSpreadMax = 16.f;

	UPROPERTY()
		class APlayerController* OwningPlayer;

public:

	UPROPERTY(EditAnywhere, Category = "Player Stats")
		TSubclassOf<class UUserWidget> CharacterOverlayClass;

	UPROPERTY()
	class UCharacterOverlay* CharacterOverlay;

	UPROPERTY(EditAnywhere, Category = "Announcements")
		TSubclassOf<UUserWidget> AnnouncementClass;

	UPROPERTY()
		class UAnnouncement* Announcement;

	UPROPERTY(EditAnywhere)
		TSubclassOf<class UElimAnnouncement> ElimAnnouncementClass;

	

public:
	FORCEINLINE void SetHUDPackage(const FHUDPackage& Package) { HUDPackage = Package; }
	
};
