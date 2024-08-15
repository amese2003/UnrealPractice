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

	UFUNCTION(BlueprintCallable)
		void FinishSwap();

	UFUNCTION(BlueprintCallable)
		void FinishSwapAttachWeapons();

	void PickupAmmo(EWeaponType WeaponType, int32 AmmoAmount);

protected:
	virtual void BeginPlay() override;
	void SetAiming(bool bIsAiming);

	UFUNCTION(Server, Reliable)
		void ServerSetAiming(bool bIsAiming);

	UFUNCTION(Server, Reliable)
		void ServerLaunchGrenade(const FVector_NetQuantize& Target);

	UFUNCTION()
		void OnRep_EquippedWeapon();

	UFUNCTION()
		void OnRep_SecondaryWeapon();
	
	void Fire();
	void FireProjectileWeapon();
	void FireHitScanWeapon();
	void FireShotgun();
	void LocalFire(const FVector_NetQuantize& TraceHitTarget);
	void ShotgunLocalFire(const TArray<FVector_NetQuantize>& TraceHitTargets);

	UFUNCTION(Server, Reliable, WithValidation)
		void ServerFire(const FVector_NetQuantize& TraceHitTarget, float FireDelay);

	UFUNCTION(Server, Reliable)
		void ServerReload();

	UFUNCTION(NetMulticast, Reliable)
		void MulticastFire(const FVector_NetQuantize& TraceHitTarget);

	UFUNCTION(Server, Reliable, WithValidation)
		void ServerShotgunFire(const TArray<FVector_NetQuantize>& TraceHitTargets, float FireDelay);

	UFUNCTION(NetMulticast, Reliable)
		void MulticastShotgunFire(const TArray<FVector_NetQuantize>& TraceHitTargets);

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

	UPROPERTY(EditAnywhere)
		int32 MaxCarriedAmmo = 500;

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
	void AttachActorToBackpack(AActor* ActorToAttach);
	void AttachFlagToLeftHand(ABlasterWeapon* Flag);
	void UpdateCarriedAmmo();
	void PlayEquipWeaponSound(ABlasterWeapon* WeaponToEquip);
	void ReloadEmptyWeapon();
	void ShowAttachedGrenade(bool bShowGrenade);
	void EquipPrimaryWeapon(ABlasterWeapon* WeaponToEquip);
	void EquipSecondaryWeapon(ABlasterWeapon* WeaponToEquip);
	void SwapWeapons();

private:
	UPROPERTY()
	class ABlasterCharacter* Character;

	UPROPERTY()
	class ABlasterPlayerController* Controller;

	UPROPERTY()
	class ABlasterHUD* HUD;
	

	

	UPROPERTY(ReplicatedUsing = OnRep_EquippedWeapon)
	class ABlasterWeapon* EquippedWeapon;

	UPROPERTY(ReplicatedUsing = OnRep_SecondaryWeapon)
		class ABlasterWeapon* SecondaryWeapon;

	UPROPERTY(ReplicatedUsing = OnRep_Aiming)
		bool bAiming = false;

	bool bAimButtonPressed = false;

	UFUNCTION()
		void OnRep_Aiming();

	UPROPERTY(ReplicatedUsing = OnRep_HoldingTheFlag)
		bool bHoldingTheFlag = false;

	UFUNCTION()
		void OnRep_HoldingTheFlag();

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
	bool ShouldSwapWeapons();

	bool bLocallyReloading = false;
	bool bHoldingTheFlag = false;
};
