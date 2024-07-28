#pragma once

#include "CoreMinimal.h"
#include "BlasterWeapon.h"
#include "HitScanWeapon.generated.h"

/**
 *
 */
UCLASS()
class BLASTER_API AHitScanWeapon : public ABlasterWeapon
{
	GENERATED_BODY()
public:
	virtual void Fire(const FVector& HitTarget) override;
	FVector TraceEndWithScatter(const FVector& TraceStart, const FVector& HitTarget);
private:

	UPROPERTY(EditAnywhere)
		float Damage = 20.f;

	UPROPERTY(EditAnywhere)
		class UParticleSystem* ImpactParticles;

	UPROPERTY(EditAnywhere)
		UParticleSystem* BeamParticles;

	UPROPERTY(EditAnywhere)
		UParticleSystem* MuzzleFlash;

	UPROPERTY(EditAnywhere)
		USoundCue* FireSound;

	UPROPERTY(EditAnywhere)
		USoundCue* HitSound;


	UPROPERTY(EditAnywhere, Category = "Weapon Scatter")
		float DistanceToSphere = 800.f;

	UPROPERTY(EditAnywhere, Category = "Weapon Scatter")
		float SphereRadius = 75.f;

	UPROPERTY(EditAnywhere, Category = "Weapon Scatter")
		bool bUseScatter = false;
};