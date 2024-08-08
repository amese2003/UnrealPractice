#include "ElimAnnouncement.h"
#include "Components/TextBlock.h"
#include UE_INLINE_GENERATED_CPP_BY_NAME(ElimAnnouncement)

void UElimAnnouncement::SetElimAnnouncementText(FString AttackerName, FString VictimName)
{
	FString ElimAnnouncementText = FString::Printf(TEXT("%s elimmed %s!"), *AttackerName, *VictimName);
	if (AnnouncementText)
	{
		AnnouncementText->SetText(FText::FromString(ElimAnnouncementText));
	}
}