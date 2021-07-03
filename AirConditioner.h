#ifndef OOM_PROJECT_AIRCONDITIONER_H
#define OOM_PROJECT_AIRCONDITIONER_H

#include "CoolingUnit.h"

class AirConditioner : protected CoolingUnit {
public:
    AirConditioner() : CoolingUnit(SMALL) {};
    void setRequiredTemp(float requiredTemp) override;
    void setCurrentTemp(float currentTemp) override;
};


#endif //OOM_PROJECT_AIRCONDITIONER_H
