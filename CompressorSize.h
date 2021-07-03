#ifndef OOM_PROJECT_COMPRESSORSIZE_H
#define OOM_PROJECT_COMPRESSORSIZE_H

/**
 * This enum represents the size of the compressor
 */
enum Size {
    SMALL, LARGE
};

/**
 * This is a helper class with a single static method to get the capacity of the compressor from the enum above.
 * Right now, this is not used anywhere in the project.
 */
class CompressorSize {
    static float getCapacity(Size size) {
        if (size == SMALL) return 0.5; // SMALL size has capacity 0.5 liters
        return 3; // LARGE size has capacity 3 liters
    }
};


#endif //OOM_PROJECT_COMPRESSORSIZE_H
