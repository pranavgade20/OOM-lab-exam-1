#include "Compressor.h"

void Compressor::switch_on() {
    std::cout << "Switched on the compressor" << std::endl;
    switched_on = true;
}

void Compressor::switch_off() {
    std::cout << "Switched off the compressor" << std::endl;
    switched_on = false;
}
