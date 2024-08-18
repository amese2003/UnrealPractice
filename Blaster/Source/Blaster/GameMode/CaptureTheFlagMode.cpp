#include "CaptureTheFlagMode.h"
#include "Blaster/Weapon/Flag.h"
#include "Blaster/Placement/FlagZone.h"
#include "Blaster/GameState/BlasterGameState.h"
#include UE_INLINE_GENERATED_CPP_BY_NAME(CaptureTheFlagMode)

void ACaptureTheFlagMode::PlayerEliminated(ABlasterCharacter* ElimmedCharacter, ABlasterPlayerController* VictimController, ABlasterPlayerController* AttackerController)
{
	ABlasterGameMode::PlayerEliminated(ElimmedCharacter, VictimController, AttackerController);
}

void ACaptureTheFlagMode::FlagCaptured(AFlag* Flag, AFlagZone* Zone)
{
	bool bValidCapture = Flag->GetTeam() != Zone->Team;
	ABlasterGameState* BGameState = Cast<ABlasterGameState>(GameState);

	if (BGameState && bValidCapture)
	{
		if (Zone->Team == ETeam::ET_BlueTeam)
		{
			BGameState->BlueTeamScores();
		}

		if (Zone->Team == ETeam::ET_RedTeam)
		{
			BGameState->RedTeamScores();
		}
	}
}
