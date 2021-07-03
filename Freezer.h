#ifndef OOM_PROJECT_FREEZER_H
#define OOM_PROJECT_FREEZER_H

#include "CoolingUnit.h"

/**
 * class representing a freezer. Inherits all protected attributes from CoolingUnit.
 */
class Freezer : protected CoolingUnit {
private:
    bool plugged_in = false; // is the freezer plugged in
public:
    /**
     * Default constructor, create a freezer with a large compressor size,
     * and initial required temperature of -5.5
     */
    Freezer() : CoolingUnit(LARGE, -5.5) {};

    void setCurrentTemp(float currentTemp) override;
    void plug_in();
    void plug_out();
};


#endif //OOM_PROJECT_FREEZER_H
