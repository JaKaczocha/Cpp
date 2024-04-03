#include <iostream>
#include <fstream>
#include <stdint.h>
#include <math.h>
#include <chrono>

#define CLAMP(x, low, high) ((x) > (high) ? (high) : ((x) < (low) ? (low) : (x)))

volatile float CubicHermite(float A, float B, float C, float D, float t) {
    float a = -A * 0.5f + (3.0f * B) * 0.5f - (3.0f * C) * 0.5f + D * 0.5f;
    float b = A - (5.0f * B) * 0.5f + 2.0f * C - D * 0.5f;
    float c = -A * 0.5f + C * 0.5f;
    float d = B;

    return a * t * t * t + b * t * t + c * t + d;
}

volatile float bicubicInterpolate(float p[4][4], float x, float y) {
    float arr[4];
    arr[0] = CubicHermite(p[0][0], p[0][1], p[0][2], p[0][3], y);
    arr[1] = CubicHermite(p[1][0], p[1][1], p[1][2], p[1][3], y);
    arr[2] = CubicHermite(p[2][0], p[2][1], p[2][2], p[2][3], y);
    arr[3] = CubicHermite(p[3][0], p[3][1], p[3][2], p[3][3], y);
    return CubicHermite(arr[0], arr[1], arr[2], arr[3], x);
}

volatile void bicubicResize(uint16_t dest[], const uint16_t destWidth, const uint16_t destHeight, const uint16_t src[], const uint16_t srcWidth, const uint16_t srcHeight) {
    for (int i = 0; i < destHeight; i++) {
        for (int j = 0; j < destWidth; j++) {
            float x = (float)j / (float)destWidth * (float)srcWidth;
            float y = (float)i / (float)destHeight * (float)srcHeight;

            int xInt = (int)x;
            int yInt = (int)y;

            float p[4][4];
            for (int m = -1; m <= 2; m++) {
                for (int n = -1; n <= 2; n++) {
                    int xIndex = xInt + m;
                    int yIndex = yInt + n;
                    xIndex = xIndex < 0 ? 0 : xIndex >= srcWidth ? srcWidth - 1 : xIndex;
                    yIndex = yIndex < 0 ? 0 : yIndex >= srcHeight ? srcHeight - 1 : yIndex;
                    p[m + 1][n + 1] = src[yIndex * srcWidth + xIndex];
                }
            }

            float interpolatedValue = bicubicInterpolate(p, x - xInt, y - yInt);
            interpolatedValue = CLAMP(interpolatedValue, 1.0f, 4000.0f); // Zapewnienie, że wartość mieści się w zakresie uint16_t
            dest[i * destWidth + j] = (uint16_t)interpolatedValue;
        }
    }
}

volatile int nearestNeighbor(uint16_t dest[], const uint16_t destWidth, const uint16_t destHeight, const uint16_t src[],const uint16_t srcWidth, const uint16_t srcHeight)
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

                    dest[(ySrc * Yscale + i)*destWidth+(xSrc * Xscale + j)] = src[ySrc*srcWidth + xSrc];
                }
            }


        }
    }

    return 0;
}




volatile void bilinear(uint16_t dest[], uint16_t destWidth, uint16_t destHeight, const uint16_t src[], uint16_t srcWidth, uint16_t srcHeight) {
    float x_ratio = ((float)(srcWidth - 1)) / destWidth;
    float y_ratio = ((float)(srcHeight - 1)) / destHeight;
    float x_diff, y_diff;
    int offset = 0;

    for (int y = 0; y < destHeight; y++) {
        for (int x = 0; x < destWidth; x++) {
            int x_src = (int)(x_ratio * x);
            int y_src = (int)(y_ratio * y);
            x_diff = (x_ratio * x) - x_src;
            y_diff = (y_ratio * y) - y_src;
            int index = y_src * srcWidth + x_src;
            uint16_t a = src[index];
            uint16_t b = src[index + 1];
            uint16_t c = src[index + srcWidth];
            uint16_t d = src[index + srcWidth + 1];

            // Interpolacja biliniowa
            uint16_t interpolated_value = (uint16_t)(a * (1 - x_diff) * (1 - y_diff) + b * x_diff * (1 - y_diff) + c * y_diff * (1 - x_diff) + d * x_diff * y_diff);

            dest[offset++] = interpolated_value;
        }
    }
}

const uint16_t p1_width = 8;
const uint16_t p1_height = 8;

// array size is 128
const uint16_t plansza1[8*8]  = {
    0x939d, 0x7b9c, 0x939d, 0xfc00, 0x9c9d, 0x9c9d, 0x523b, 0x9c9d,
    0x7b9c, 0x939d, 0x7b9c, 0xfa05, 0x7b9c, 0x9c9d, 0x523b, 0x523b,
    0xcb7d, 0xa97c, 0xcb7d, 0x975a, 0x7b9c, 0x7b9c, 0x9c9d, 0x7b9c,
    0xa97c, 0xcb7d, 0xcb7d, 0xbf9e, 0xb723, 0xfc0d, 0xfc9d, 0x56dc,
    0xbf9e, 0xbf12, 0x8f96, 0x8f5d, 0x8f5d, 0x25d8, 0x8f96, 0x25d8,
    0xa97c, 0xa97c, 0x973d, 0x973d, 0x25d8, 0x971d, 0xf010, 0xc000,
    0x339a, 0x973d, 0xb70d, 0x339a, 0xf231, 0x339a, 0x975a, 0xc001,
    0x9c9d, 0x323a, 0xfa11, 0xfb01, 0xf021, 0x323a, 0x971d, 0x323a
};

// array size is 128
const uint16_t plansza2[8*8]   = {
    0xa743, 0xa743, 0x47a1, 0x07e0, 0x07e0, 0x07e0, 0x07e0, 0x07e0,
    0xb723, 0xb723, 0xb723, 0x9743, 0x5781, 0x07e0, 0x07e0, 0x07e0,
    0xb723, 0xb723, 0xb723, 0xb723, 0xb723, 0x07e0, 0x07e0, 0x07e0,
    0xb723, 0xb723, 0xaf23, 0xb723, 0xb723, 0x5781, 0x07e0, 0x07e0,
    0xb723, 0xb723, 0xb723, 0xb723, 0xb723, 0xb723, 0x07e0, 0x07e0,
    0xb723, 0xb723, 0xa743, 0xb723, 0x07e0, 0x07e0, 0x07e0, 0x07e0,
    0xb723, 0x6f82, 0x5781, 0xb723, 0x07e0, 0x07e0, 0x07e0, 0x07e0,
    0x07e0, 0x07e0, 0x07e0, 0x07e0, 0x07e0, 0x07e0, 0x07e0, 0x07e0
};

#pragma pack(push, 1)
struct BMPHeader {
    uint16_t signature;
    uint32_t fileSize;
    uint32_t reserved;
    uint32_t dataOffset;
    uint32_t headerSize;
    uint32_t width;
    uint32_t height;
    uint16_t planes;
    uint16_t bitsPerPixel;
    uint32_t compression;
    uint32_t dataSize;
    uint32_t horizontalResolution;
    uint32_t verticalResolution;
    uint32_t colors;
    uint32_t importantColors;
};
#pragma pack(pop)

void saveBMP(const char* filename, const uint16_t data[], int width, int height) {
    std::ofstream file(filename, std::ios::out | std::ios::binary);
    if (!file) {
        std::cerr << "Cannot open file for writing." << std::endl;
        return;
    }

    BMPHeader header;
    header.signature = 0x4D42;
    header.fileSize = sizeof(BMPHeader) + width * height * 3; // Assuming 24 bits per pixel
    header.reserved = 0;
    header.dataOffset = sizeof(BMPHeader);
    header.headerSize = sizeof(BMPHeader) - 14; // Extra 2 bytes for signature
    header.width = width;
    header.height = height;
    header.planes = 1;
    header.bitsPerPixel = 24; // 24 bits per pixel
    header.compression = 0;
    header.dataSize = width * height * 3;
    header.horizontalResolution = 0;
    header.verticalResolution = 0;
    header.colors = 0;
    header.importantColors = 0;

    file.write(reinterpret_cast<const char*>(&header), sizeof(header));

    for (int y = height - 1; y >= 0; --y) {
        for (int x = 0; x < width; ++x) {
            uint16_t pixel = data[y * width + x];
            uint8_t r = (pixel >> 8) & 0xF8;
            uint8_t g = (pixel >> 3) & 0xFC;
            uint8_t b = (pixel << 3) & 0xF8;
            file.put(b);
            file.put(g);
            file.put(r);
        }
        // Add padding if necessary
        for (int i = 0; i < (4 - (width * 3) % 4) % 4; ++i) {
            file.put(0);
        }
    }

    file.close();
    std::cout << "BMP saved to: " << filename << std::endl;
}

uint16_t planszaDest[160 * 128];
uint16_t planszaDestTmp[80 * 64];

uint16_t convertToColor(const uint16_t value,const float maxValue) {
    uint16_t r, g, b;

    // Map to red. The closer to 2000, the less intense the red.
    r = 31 - (int)((value / maxValue) * 31);
    g = 0;
    b = (int)((value / maxValue) * 31);


    // Combine the red, green and blue values into a uint16_t color value
    return (uint16_t)((r << 11) | (g << 5) | b);
}

uint16_t plansza3[8*8]  = {
    3800, 3700, 1680, 660, 800, 1622, 1111, 1950,
    3750,1900,1740, 680, 1844, 1843, 22, 911,
    1792, 2600, 2755, 1, 2944, 1999, 155, 234,
    1400,1688, 2830, 691, 3735, 1660, 1380, 3213,
    1211, 2478, 2779, 468, 2538, 1752, 666, 3313,
    322, 547, 3587, 3321, 3420, 3499, 3544, 3370,
    66, 156, 3999, 443,  1560, 600, 613, 390
};

uint16_t karamba [8*8];
int main()
{

    constexpr uint16_t repeat {1000};
    auto startBilinear = std::chrono::high_resolution_clock::now(); // Początek pomiaru dla bilinear
    for(volatile int i = 0; i < repeat; i++) {
        bilinear(planszaDestTmp,80,64,plansza3,8,8);
    }

    auto endBilinear = std::chrono::high_resolution_clock::now(); // Koniec pomiaru dla bilinear

    nearestNeighbor(planszaDest,160,128,planszaDestTmp,80,64);
    for(int i = 0; i < 128; i++) {

        for(int j = 0; j < 160; j++) {
            planszaDest[i*160+j] = convertToColor(planszaDest[i*160+j],4000);
        }
    }

    saveBMP("Zbilinear.bmp", planszaDest, 160, 128);

    auto startBicubic = std::chrono::high_resolution_clock::now();
    for(volatile int i = 0; i < repeat; i++) {
        bicubicResize(planszaDestTmp,80,64,plansza3,8,8);
    }
    auto endBicubic = std::chrono::high_resolution_clock::now();

    nearestNeighbor(planszaDest,160,128,planszaDestTmp,80,64);
    for(volatile int i = 0; i < 128; i++) {

        for(int j = 0; j < 160; j++) {
            planszaDest[i*160+j] = convertToColor(planszaDest[i*160+j],4000);
        }
    }

    saveBMP("Zbicubic.bmp", planszaDest, 160, 128);

    auto durationBilinear = std::chrono::duration_cast<std::chrono::microseconds>(endBilinear - startBilinear);
    auto durationBicubic = std::chrono::duration_cast<std::chrono::microseconds>(endBicubic - startBicubic);

    std::cout << "Czas interpolacji bilinear: " << durationBilinear.count()/repeat << " mikrosekund." << std::endl;
    std::cout << "Czas interpolacji bicubic: " << durationBicubic.count()/repeat << " mikrosekund." << std::endl;


    return 0;
}
