#ifndef OOM_PROJECT_FREEZER_H
#define OOM_PROJECT_FREEZER_H

#include "CoolingUnit.h"

class Freezer : protected CoolingUnit {
private:
    bool plugged_in = false;
public:
    Freezer() : CoolingUnit(LARGE, -5.5) {};
    void setCurrentTemp(float currentTemp) override;
    void plug_in();
    void plug_out();
};


#endif //OOM_PROJECT_FREEZER_H
