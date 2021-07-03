#ifndef OOM_PROJECT_COOLINGUNIT_H
#define OOM_PROJECT_COOLINGUNIT_H

#include <iostream>

#include "Compressor.h"

/**
 * Class to represent a cooling unit. AirConditioner and Freezer can inherit from this.
 */
class CoolingUnit {
private:
    const float MINIMUM_TEMP = -5.5; // you cannot cool below this temperature
    float required_temp = 25; // default value
    float current_temp = 25; // default value
    Compressor compressor; // this keeps track of the compressor in this cooling unit
protected:
    /**
     * A constructor to build a CoolingUnit with a compressor of a given size.
     * @param size size of compressor used in this CoolingUnit
     */
    CoolingUnit(Size size) : compressor(size) {};
    /**
     * A constructor to build a CoolingUnit with a compressor of a given size, and a default target temperature.
     * @param size size of compressor used in this CoolingUnit
     * @param requiredTemp the default target(required) temperature
     */
    CoolingUnit(Size size, float requiredTemp) : compressor(size), required_temp(requiredTemp) {};

    bool cool();
    virtual void setRequiredTemp(float requiredTemp);
    virtual void setCurrentTemp(float currentTemp);
public:
    float getRequiredTemp() const;
    float getCurrentTemp() const;
};


#endif //OOM_PROJECT_COOLINGUNIT_H
