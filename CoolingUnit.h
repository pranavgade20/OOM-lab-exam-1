#ifndef OOM_PROJECT_COOLINGUNIT_H
#define OOM_PROJECT_COOLINGUNIT_H

#include <iostream>

#include "Compressor.h"

class CoolingUnit {
private:
    const float MINIMUM_TEMP = -5.5;
    float required_temp = 25;
    float current_temp = 25;
    Compressor compressor;
protected:
    CoolingUnit(Size size) : compressor(size) {};
    CoolingUnit(Size size, float requiredTemp) : compressor(size), required_temp(requiredTemp) {};
    bool cool();
    virtual void setRequiredTemp(float requiredTemp);
    virtual void setCurrentTemp(float currentTemp);
public:
    float getRequiredTemp() const;
    float getCurrentTemp() const;
};


#endif //OOM_PROJECT_COOLINGUNIT_H
