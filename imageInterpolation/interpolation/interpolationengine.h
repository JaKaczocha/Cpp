#ifndef INTERPOLATIONENGINE_H
#define INTERPOLATIONENGINE_H

#include <cstdint>

class InterpolationEngine
{
public:
    InterpolationEngine();


    static int nearestNeighbor(uint16_t dest[128*6][128*6], const uint16_t destWidth, const uint16_t destHeight, const uint16_t src[8][8],const uint16_t srcWidth, const uint16_t srcHeight);
    static int bilinear(uint16_t dest[128*6][128*6], const uint16_t destWidth, const uint16_t destHeight, const uint16_t src[8][8],const uint16_t srcWidth, const uint16_t srcHeight);
private:
    static uint16_t linear(int coord1, uint16_t value1, int coord2, uint16_t value2, int target);
};

#endif // INTERPOLATIONENGINE_H
