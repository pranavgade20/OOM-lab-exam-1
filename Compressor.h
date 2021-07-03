#ifndef OOM_PROJECT_COMPRESSOR_H
#define OOM_PROJECT_COMPRESSOR_H

#include <iostream>

#include "CompressorSize.h"

class Compressor {
private:
    Size size = SMALL;
    bool switched_on = false;
public:
    Compressor(Size size) : size(size) {};

    void switch_on();
    void switch_off();
};


#endif //OOM_PROJECT_COMPRESSOR_H
