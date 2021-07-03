#ifndef OOM_PROJECT_AIRCONDITIONER_H
#define OOM_PROJECT_AIRCONDITIONER_H

#include "CoolingUnit.h"

/**
 * class to represent an air conditioner.
 */
class AirConditioner : protected CoolingUnit {
public:
    /**
     * default constructor - creates an sir conditionser with a small compressor
     */
    AirConditioner() : CoolingUnit(SMALL) {};
    void setRequiredTemp(float requiredTemp) override;
    void setCurrentTemp(float currentTemp) override;
};


#endif //OOM_PROJECT_AIRCONDITIONER_H
