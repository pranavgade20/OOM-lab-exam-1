#include "Freezer.h"


/**
 * plug in the freezer
 *
 * this method plugs the freezzer in, if not plugged in already.
 * it also checks if we need to reduce the temperature, and calls cool() if cooling is required.
 */
void Freezer::plug_in() {
    if (plugged_in) {
        std::cout << "Freezer is plugged in already." << std::endl;
        return;
    }
    std::cout << "Plugging in freezer..." << std::endl;
    plugged_in = true;
    if (getRequiredTemp() < getCurrentTemp()) cool();
}

/**
 * plug out the freezer
 *
 * this method unplugs the freezer, if not unplugged already.
 */
void Freezer::plug_out() {
    if (!plugged_in) {
        std::cout << "Freezer is plugged out already." << std::endl;
        return;
    }
    std::cout << "Plugging out freezer..." << std::endl;
    plugged_in = false;
}

/**
 * change the current temperature
 * @param currentTemp currentTemp the value to be assigned to current_temp.
 */
void Freezer::setCurrentTemp(float currentTemp) {
    CoolingUnit::setCurrentTemp(currentTemp);
    if (plugged_in && getRequiredTemp() < getCurrentTemp()) cool();
}
