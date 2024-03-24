#include "interpolationengine.h"
#include <iostream>
#include <sstream>
#include <math.h>

InterpolationEngine::InterpolationEngine()
{

}

int InterpolationEngine::nearestNeighbor(uint16_t dest[128*6][128*6], const uint16_t destWidth, const uint16_t destHeight, const uint16_t src[8][8],const uint16_t srcWidth, const uint16_t srcHeight)
{
    if(destWidth < srcWidth || destHeight < srcHeight) {
        std::cout << "size error";
        return 1;
    }

    const int Xscale = destWidth / srcWidth;
    const int Yscale = destHeight / srcHeight;

    std::cout << "Yscale: " <<Yscale << "\n";
    std::cout << "Xscale: " <<Xscale << "\n";

    for(int ySrc = 0; ySrc < srcHeight; ySrc++) {
        for(int xSrc = 0; xSrc < srcWidth; xSrc++) {

            for(int i = 0; i < Yscale; i++) {
                for(int j = 0; j < Xscale; j++) {

                    dest[ySrc * Yscale + i][xSrc * Xscale + j] = src[ySrc][xSrc];
                }
            }


        }
    }

    return 0;
}


int InterpolationEngine::bilinear(uint16_t dest[128*6][128*6], const uint16_t destWidth, const uint16_t destHeight, const uint16_t src[8][8], const uint16_t srcWidth, const uint16_t srcHeight)
{
    const float Xscale = (float)destWidth / srcWidth; // Use floating point for scaling
    const float Yscale = (float)destHeight / srcHeight;

    for(int i = 0; i < destHeight; i++) {
        for(int j = 0; j < destWidth; j++) {
            float srcX = j / Xscale;
            float srcY = i / Yscale;

            int x1 = floor(srcX);
            int y1 = floor(srcY);
            int x2 = ceil(srcX);
            int y2 = ceil(srcY);

            // Ensure boundary conditions
            if (x2 >= srcWidth) x2 = srcWidth - 1;
            if (y2 >= srcHeight) y2 = srcHeight - 1;

            // Perform bilinear interpolation
            int R1 = linear(x1, src[y1][x1], x2, src[y1][x2], srcX);
            int R2 = linear(x1, src[y2][x1], x2, src[y2][x2], srcX);
            int P = linear(y1, R1, y2, R2, srcY);

            dest[i][j] = P;
        }
    }

    return 0;
}



uint16_t InterpolationEngine::linear(int coord1, uint16_t value1, int coord2, uint16_t value2,int target)
{
    //std::cout << "coord1: " << coord1 << " coord2: " << coord2 << "\n";
    int a = (coord2 - target) / (float)(coord2 - coord1) * value1;
    int b = (target - coord1) / (float)(coord2 - coord1) * value2;

    return a+b;

}

/*
int InterpolationEngine::bilinear(uint16_t dest[128][128], const uint16_t destWidth, const uint16_t destHeight, const uint16_t src[8][8], const uint16_t srcWidth, const uint16_t srcHeight)
{
    const int Xscale = destWidth /srcWidth;
    const int Yscale = destHeight / srcHeight;


    for(int i = 0; i < Yscale; i++) {
        for( int j = 0; j < Xscale; j++ ) {
            dest[i * srcHeight][j * srcWidth] = src[i][j];
        }
    }

    int R1 = 0, R2 = 0, P = 0;
    int y, x;
    for(int yDest = 0; yDest < destHeight; yDest++) {
        for(int xDest = 0; xDest < destWidth; xDest++) {

            std::cout  << "val1: " << src[yDest/Yscale][xDest/Xscale] << "\tval2: " << src[yDest/Yscale][xDest/Xscale + 1] << '\n';
            std::cout << "p1: (" << yDest/Yscale << " " << xDest/Xscale << ")\t p2: (" << yDest/Yscale << " " <<  xDest/Xscale + 1 <<")\n";
            R1 = linear(0,src[yDest/Yscale][xDest/Xscale], Xscale ,src[yDest/Yscale][xDest/Xscale + 1], xDest % Xscale);
            std::cout  << "val1: " << src[yDest/Yscale + 1][xDest/Xscale] << "\tval2: " << src[yDest/Yscale + 1][xDest/Xscale + 1] << "\n";
            std::cout << "p3: (" << yDest/Yscale+1 << " " << xDest/Xscale << ")\t p4: (" << yDest/Yscale+1 << " " <<  xDest/Xscale + 1 <<")\n";
            R2 = linear(0,src[yDest/Yscale + 1][xDest/Xscale], Xscale ,src[yDest/Yscale + 1][xDest/Xscale + 1], xDest % Xscale);

            std::cout  << "R1: " << R1 << "\tR2: " << R2 << "\n";

            P = linear(0,R1,Yscale,R2, yDest % Yscale );
            std::cout  <<  "P: " << P << "\n--------------------------\n";

            dest[yDest][xDest]  = P;
        }
    }

    return 0;

}
*/
