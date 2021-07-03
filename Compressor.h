#ifndef OOM_PROJECT_COMPRESSOR_H
#define OOM_PROJECT_COMPRESSOR_H

#include <iostream>

#include "CompressorSize.h"

/**
 * This class represents the compressor. It has a field representing its size,
 * and one representing its current state - eiter turned on or off
 */
class Compressor {
private:
    const Size size = SMALL;
    bool switched_on = false;
public:
    /**
     * When we instantiate a compressor, we must specify the size. The size can not be changed later.
     * @param size the size - either SMALL or LARGE
     */
    Compressor(Size size) : size(size) {};

    void switch_on();
    void switch_off();
};


#endif //OOM_PROJECT_COMPRESSOR_H
