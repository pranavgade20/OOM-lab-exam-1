#ifndef OOM_PROJECT_COMPRESSORSIZE_H
#define OOM_PROJECT_COMPRESSORSIZE_H

enum Size {
    SMALL, LARGE
};
class CompressorSize {
    static float getCapacity(Size size) {
        if (size == SMALL) return 0.5;
        return 3;
    }
};


#endif //OOM_PROJECT_COMPRESSORSIZE_H
