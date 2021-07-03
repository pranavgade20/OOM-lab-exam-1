#include "CoolingUnit.h"

/**
 * getter to get the required temperature.
 * @return required_temp
 */
float CoolingUnit::getRequiredTemp() const {
    return required_temp;
}

/**
 * setter to set the required temperature.
 * @param requiredTemp the value to be assigned to required_temp.
 */
void CoolingUnit::setRequiredTemp(float requiredTemp) {
    std::cout << "Setting required temperature to " << requiredTemp << std::endl;
    required_temp = requiredTemp;
}

/**
 * getter to get the current temperature.
 * @return current_temp
 */
float CoolingUnit::getCurrentTemp() const {
    return current_temp;
}

/**
 * setter to set the current temperature.
 * @param currentTemp the value to be assigned to current_temp.
 */
void CoolingUnit::setCurrentTemp(float currentTemp) {
    std::cout << "Setting current temperature to " << currentTemp << std::endl;
    current_temp = currentTemp;
}

/**
 * start the compressor, and reduce the temperature to required_temperature. then, switch off the compressor
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
