#include "Compressor.h"

/**
 * Change the state of the compressor to on from off.
 */
void Compressor::switch_on() {
    std::cout << "Switched on the compressor" << std::endl;
    switched_on = true;
}

/**
 * Change the state of the compressor to off from on.
 */
void Compressor::switch_off() {
    std::cout << "Switched off the compressor" << std::endl;
    switched_on = false;
}
