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
private:

	UPROPERTY(VisibleAnywhere)
		UStaticMeshComponent* FlagMesh;
};