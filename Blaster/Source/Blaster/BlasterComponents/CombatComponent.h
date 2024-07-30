// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Blaster/HUD/BlasterHUD.h"
#include "Blaster/Weapon/WeaponType.h"
#include "Blaster/BlasterTypes/CombatState.h"
#include "CombatComponent.generated.h"

class ABlasterWeapon;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class BLASTER_API UCombatComponent : public UActorComponent
{
	GENERATED_BODY()


public:	
	UCombatComponent();
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	friend class ABlasterCharacter;

	void EquipWeapon(class ABlasterWeapon* WeaponToEquip);
	void Reload();
	void FireButtonPressed(bool bPressed);

	UFUNCTION(BlueprintCallable)
		void FinishReloading();

	UFUNCTION(BlueprintCallable)
		void ShotgunShellReload();

	void JumpToShotgunEnd();

	UFUNCTION(BlueprintCallable)
		void ThrowGrenadeFinished();

	UFUNCTION(BlueprintCallable)
		void LaunchGrenade();

protected:
	virtual void BeginPlay() override;
	void SetAiming(bool bIsAiming);

	UFUNCTION(Server, Reliable)
		void ServerSetAiming(bool bIsAiming);

	UFUNCTION(Server, Reliable)
		void ServerLaunchGrenade(const FVector_NetQuantize& Target);

	UFUNCTION()
		void OnRep_EquippedWeapon();

	

	void Fire();

	UFUNCTION(Server, Reliable)
		void ServerFire(const FVector_NetQuantize& TraceHitTarget);

	UFUNCTION(Server, Reliable)
		void ServerReload();

	UFUNCTION(NetMulticast, Reliable)
		void MulticastFire(const FVector_NetQuantize& TraceHitTarget);

	void HandleReload();
	int32 AmountToReload();

	void TraceUnderCrosshairs(FHitResult& TraceHitResult);

	void SetHUDCrosshairs(float DeltaTime);

	void InterpFOV(float DeltaTime);

	void StartFireTimer();
	void FireTimerFinished();
	
	bool CanFire();

	UPROPERTY(ReplicatedUsing = OnRep_CarriedAmmo)
	int32 CarriedAmmo;

	UFUNCTION()
		void OnRep_CarriedAmmo();

	TMap<EWeaponType, int32> CarriedAmmoMap;

	void InitializeCarriedAmmo();

	UPROPERTY(EditAnywhere)
	int32 StartingARAmmo = 30;

	UPROPERTY(EditAnywhere)
		int32 StartingRocketAmmo = 1;

	UPROPERTY(EditAnywhere)
		int32 StartingPistolAmmo = 0;

	UPROPERTY(EditAnywhere)
		int32 StartingSMGAmmo = 0;

	UPROPERTY(EditAnywhere)
		int32 StartingShotgunAmmo = 0;

	UPROPERTY(EditAnywhere)
		int32 StartingSniperAmmo = 0;

	UPROPERTY(EditAnywhere)
		int32 StartingGrenadeLauncherAmmo = 0;

	UPROPERTY(ReplicatedUsing = OnRep_CombatState)
		ECombatState CombatState = ECombatState::ECS_Unoccupied;

	UPROPERTY(ReplicatedUsing = OnRep_Grenades)
		int32 Grenades = 4;

	UFUNCTION()
		void OnRep_CombatState();

	UFUNCTION()
		void OnRep_Grenades();

	void UpdateAmmoValues();
	void UpdateShotgunAmmoValues();
	
	void ThrowGrenade();

	UFUNCTION(Server, Reliable)
		void ServerThrowGrenade();

	UPROPERTY(EditAnywhere)
		TSubclassOf<class AProjectile> GrenadeClass;

	UPROPERTY(EditAnywhere)
		int32 MaxGrenades = 4;

	void UpdateHUDGrenades();

	void DropEquippedWeapon();
	void AttachActorToRightHand(AActor* ActorToAttach);
	void AttachActorToLeftHand(AActor* ActorToAttach);
	void UpdateCarriedAmmo();
	void PlayEquipWeaponSound();
	void ReloadEmptyWeapon();
	void ShowAttachedGrenade(bool bShowGrenade);

	

private:
	UPROPERTY()
	class ABlasterCharacter* Character;

	UPROPERTY()
	class ABlasterPlayerController* Controller;

	UPROPERTY()
	class ABlasterHUD* HUD;
	

	

	UPROPERTY(ReplicatedUsing = OnRep_EquippedWeapon)
	class ABlasterWeapon* EquippedWeapon;

	UPROPERTY(Replicated)
		bool bAiming;

	UPROPERTY(EditAnywhere)
	float BaseWalkSpeed;
	UPROPERTY(EditAnywhere)
	float AimWalkSpeed;
		
	bool bFireButtonPressed = false;

	


	float CrosshairVelocityFactor;
	float CrosshairInAirFactor;
	float CrosshairAimFactor;
	float CrosshairShootingFactor;

	FVector HitTarget;

	FHUDPackage HUDPackage;

	float DefaultFOV;

	UPROPERTY(EditAnywhere, Category = Combat)
		float ZoomedFOV = 30.f;

	float CurrentFOV;

	UPROPERTY(EditAnywhere, Category = Combat)
		float ZoomInterpSpeed = 20.f;

	

	FTimerHandle FireTimer;
	bool bCanFire = true;

public:
	FORCEINLINE int32 GetGrenades() const { return Grenades; }
};
