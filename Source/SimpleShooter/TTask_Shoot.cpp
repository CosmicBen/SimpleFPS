#include "TTask_Shoot.h"

#include "AIController.h"
#include "ShooterCharacter.h"

UTTask_Shoot::UTTask_Shoot()
{
	NodeName = TEXT("Shoot");
}

EBTNodeResult::Type UTTask_Shoot::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	Super::ExecuteTask(OwnerComp, NodeMemory);

	AAIController* Owner = OwnerComp.GetAIOwner();
	if (!Owner) { return EBTNodeResult::Failed; }

	AShooterCharacter* Character = Cast<AShooterCharacter>(Owner->GetPawn());
	if (!Character) { return EBTNodeResult::Failed;	}

	Character->Shoot();

	return EBTNodeResult::Succeeded;
}