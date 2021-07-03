#include "Freezer.h"

void Freezer::plug_in() {
    if (plugged_in) {
        std::cout << "Freezer is plugged in already." << std::endl;
        return;
    }
    std::cout << "Plugging in freezer..." << std::endl;
    plugged_in = true;
    if (getRequiredTemp() < getCurrentTemp()) cool();
}

void Freezer::plug_out() {
    if (!plugged_in) {
        std::cout << "Freezer is plugged out already." << std::endl;
        return;
    }
    std::cout << "Plugging out freezer..." << std::endl;
    plugged_in = false;
}

void Freezer::setCurrentTemp(float currentTemp) {
    CoolingUnit::setCurrentTemp(currentTemp);
    if (plugged_in && getRequiredTemp() < getCurrentTemp()) cool();
}
