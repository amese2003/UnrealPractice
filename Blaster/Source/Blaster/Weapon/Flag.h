#pragma once

#include "CoreMinimal.h"
#include "BlasterWeapon.h"
#include "Flag.generated.h"

/**
 *
 */
UCLASS()
class BLASTER_API AFlag : public ABlasterWeapon
{
	GENERATED_BODY()
public:
	AFlag();
	virtual void Dropped() override;
	void ResetFlag();

protected:
	virtual void OnEquipped() override;
	virtual void OnDropped() override;

private:

	UPROPERTY(VisibleAnywhere)
		UStaticMeshComponent* FlagMesh;

	FTransform InitialTransform;

public:
	FORCEINLINE FTransform GetInitialTransform() const { return InitialTransform; }
};