#include "AirConditioner.h"

/**
 * change the required temperature, and run cool() if necessry.
 * @param requiredTemp the value to be assigned to required_temp.
 */
void AirConditioner::setRequiredTemp(float requiredTemp) {
    CoolingUnit::setRequiredTemp(requiredTemp);
    if (getRequiredTemp() < getCurrentTemp()) cool();
}

/**
 * change the current temperature, and run cool() if necessry.
 * @param currentTemp the value to be assigned to current_temp.
 */
void AirConditioner::setCurrentTemp(float currentTemp) {
    CoolingUnit::setCurrentTemp(currentTemp);
    if (getRequiredTemp() < getCurrentTemp()) cool();
}
