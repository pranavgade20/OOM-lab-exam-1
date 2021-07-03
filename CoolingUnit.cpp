#include "CoolingUnit.h"

float CoolingUnit::getRequiredTemp() const {
    return required_temp;
}

void CoolingUnit::setRequiredTemp(float requiredTemp) {
    std::cout << "Setting required temperature to " << requiredTemp << std::endl;
    required_temp = requiredTemp;
}

float CoolingUnit::getCurrentTemp() const {
    return current_temp;
}

void CoolingUnit::setCurrentTemp(float currentTemp) {
    std::cout << "Setting current temperature to " << currentTemp << std::endl;
    current_temp = currentTemp;
}

/**
 * reduces the temperature
 * @return true if temperature was reduced, false otherwise
 */
bool CoolingUnit::cool() {
    std::cout << "Switching on the compressor. Trying to reduce temperature to " << required_temp
            << " from " << current_temp << std::endl;
    compressor.switch_on();
    if (current_temp <= required_temp) {
        std::cout << "Temperature was not reduced, because required temperature <= current temperature" << std::endl;
        return false;
    }
    if (required_temp < MINIMUM_TEMP) {
        current_temp = MINIMUM_TEMP;
    } else {
        current_temp = required_temp;
    }
    std::cout << "Temperature was reduced to " << current_temp << std::endl;
    compressor.switch_off();
    return true;
}
