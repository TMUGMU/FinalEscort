#include "Events/FinalEscortBaseEvent.h"

void UFinalEscortBaseEvent::TriggerEvent_Implementation()
{
    UE_LOG(LogTemp, Warning, TEXT("Base Event Triggered: %s"), *EventName);
}