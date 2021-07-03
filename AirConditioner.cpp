#include "AirConditioner.h"

void AirConditioner::setRequiredTemp(float requiredTemp) {
    CoolingUnit::setRequiredTemp(requiredTemp);
    if (getRequiredTemp() < getCurrentTemp()) cool();
}

void AirConditioner::setCurrentTemp(float currentTemp) {
    CoolingUnit::setCurrentTemp(currentTemp);
    if (getRequiredTemp() < getCurrentTemp()) cool();
}
