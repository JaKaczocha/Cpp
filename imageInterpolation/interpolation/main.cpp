#include <iostream>
#include <fstream>
#include <stdint.h>
#include <math.h>

/*
// Funkcja wykonująca interpolację sześcienną
double cubicInterpolate(double p0, double p1, double p2, double p3, double x) {
    double a = -0.5 * p0 + 1.5 * p1 - 1.5 * p2 + 0.5 * p3;
    double b = p0 - 2.5 * p1 + 2 * p2 - 0.5 * p3;
    double c = -0.5 * p0 + 0.5 * p2;
    double d = p1;

    return a * x * x * x + b * x * x + c * x + d;
}


// Funkcja wykonująca bicubiczną interpolację na danym zestawie punktów
double bicubicInterpolate(double p00, double p01, double p02, double p03,
                          double p10, double p11, double p12, double p13,
                          double p20, double p21, double p22, double p23,
                          double p30, double p31, double p32, double p33,
                          double x_ratio, double y_ratio) {
    double interpolatedValue =
        cubicInterpolate(p00, p01, p02, p03, x_ratio) * cubicInterpolate(1, 0, 0, 0, y_ratio) +
        cubicInterpolate(p10, p11, p12, p13, x_ratio) * cubicInterpolate(0, 1, 0, 0, y_ratio) +
        cubicInterpolate(p20, p21, p22, p23, x_ratio) * cubicInterpolate(0, 0, 1, 0, y_ratio) +
        cubicInterpolate(p30, p31, p32, p33, x_ratio) * cubicInterpolate(0, 0, 0, 1, y_ratio);

    return interpolatedValue;
}



// Interpolacja metoda bicubiczna dla pikseli RGB565
uint16_t calcBicubic(uint16_t p00, uint16_t p01, uint16_t p02, uint16_t p03,
                     uint16_t p10, uint16_t p11, uint16_t p12, uint16_t p13,
                     uint16_t p20, uint16_t p21, uint16_t p22, uint16_t p23,
                     uint16_t p30, uint16_t p31, uint16_t p32, uint16_t p33,
                     double x_ratio, double y_ratio) {
    // Interpolacja bicubiczna dla każdej składowej koloru osobno

    // Interpolacja dla czerwonej składowej
    uint8_t r = ((uint8_t)((bicubicInterpolate(p00 >> 11 & 0x1F, p01 >> 11 & 0x1F,
                                              p02 >> 11 & 0x1F, p03 >> 11 & 0x1F,
                                              p10 >> 11 & 0x1F, p11 >> 11 & 0x1F,
                                              p12 >> 11 & 0x1F, p13 >> 11 & 0x1F,
                                              p20 >> 11 & 0x1F, p21 >> 11 & 0x1F,
                                              p22 >> 11 & 0x1F, p23 >> 11 & 0x1F,
                                              p30 >> 11 & 0x1F, p31 >> 11 & 0x1F,
                                              p32 >> 11 & 0x1F, p33 >> 11 & 0x1F,
                                              x_ratio, y_ratio))) << 11);

    // Interpolacja dla zielonej składowej
    uint8_t g = ((uint8_t)(bicubicInterpolate(p00 >> 5 & 0x3F, p01 >> 5 & 0x3F,
                                              p02 >> 5 & 0x3F, p03 >> 5 & 0x3F,
                                              p10 >> 5 & 0x3F, p11 >> 5 & 0x3F,
                                              p12 >> 5 & 0x3F, p13 >> 5 & 0x3F,
                                              p20 >> 5 & 0x3F, p21 >> 5 & 0x3F,
                                              p22 >> 5 & 0x3F, p23 >> 5 & 0x3F,
                                              p30 >> 5 & 0x3F, p31 >> 5 & 0x3F,
                                              p32 >> 5 & 0x3F, p33 >> 5 & 0x3F,
                                              x_ratio, y_ratio)) << 5);

    // Interpolacja dla niebieskiej składowej
    uint8_t b = ((uint8_t)(bicubicInterpolate(p00 & 0x1F, p01 & 0x1F,
                                              p02 & 0x1F, p03 & 0x1F,
                                              p10 & 0x1F, p11 & 0x1F,
                                              p12 & 0x1F, p13 & 0x1F,
                                              p20 & 0x1F, p21 & 0x1F,
                                              p22 & 0x1F, p23 & 0x1F,
                                              p30 & 0x1F, p31 & 0x1F,
                                              p32 & 0x1F, p33 & 0x1F,
                                              x_ratio, y_ratio)) );

    // Składanie składowych koloru w piksel RGB565
    return (r & 0xF800) | (g & 0x07E0) | (b & 0x001F);
}

// Clamp function
int clamp(int value, int min, int max) {
    if (value < min) return min;
    if (value > max) return max;
    return value;
}

void bicubic(  uint16_t dest[128*6][128*6], const uint16_t src[8][8]) {
    uint16_t p00=0, p01=0, p02=0, p03=0;
    uint16_t p10=0, p11=0, p12=0, p13=0;
    uint16_t p20=0, p21=0, p22=0, p23=0;
    uint16_t p30=0, p31=0, p32=0, p33=0;

    float gx = 0.0, gy = 0.0;
    int xIndex, yIndex;
    int xFloor, yFloor;
    double xRatio, yRatio;

    for(int y = 0; y < 128*6; y++) {
        for(int x = 0; x < 128*6; x++) {
            gx = (x * 7.0) / (128*6 - 1);
            gy = (y * 7.0) / (128*6 - 1);

            xIndex = (int)gx;
            yIndex = (int)gy;

            xRatio = gx - xIndex;
            yRatio = gy - yIndex;

            // Getting the indices for 16 pixels surrounding the (x, y) point
            xFloor = xIndex - 1;
            yFloor = yIndex - 1;

            // Extracting pixels for bicubic interpolation
            for (int i = 0; i < 4; i++) {
                for (int j = 0; j < 4; j++) {
                    int xIndexClamped = clamp(xFloor + j, 0, 128 * 6 - 1);
                    int yIndexClamped = clamp(yFloor + i, 0, 128 * 6 * 1);

                    switch (i) {
                    case 0:
                        switch (j) {
                        case 0: p00 = src[yIndexClamped][xIndexClamped]; break;
                        case 1: p01 = src[yIndexClamped][xIndexClamped]; break;
                        case 2: p02 = src[yIndexClamped][xIndexClamped]; break;
                        case 3: p03 = src[yIndexClamped][xIndexClamped]; break;
                        }
                        break;
                    case 1:
                        switch (j) {
                        case 0: p10 = src[yIndexClamped][xIndexClamped]; break;
                        case 1: p11 = src[yIndexClamped][xIndexClamped]; break;
                        case 2: p12 = src[yIndexClamped][xIndexClamped]; break;
                        case 3: p13 = src[yIndexClamped][xIndexClamped]; break;
                        }
                        break;
                    case 2:
                        switch (j) {
                        case 0: p20 = src[yIndexClamped][xIndexClamped]; break;
                        case 1: p21 = src[yIndexClamped][xIndexClamped]; break;
                        case 2: p22 = src[yIndexClamped][xIndexClamped]; break;
                        case 3: p23 = src[yIndexClamped][xIndexClamped]; break;
                        }
                        break;
                    case 3:
                        switch (j) {
                        case 0: p30 = src[yIndexClamped][xIndexClamped]; break;
                        case 1: p31 = src[yIndexClamped][xIndexClamped]; break;
                        case 2: p32 = src[yIndexClamped][xIndexClamped]; break;
                        case 3: p33 = src[yIndexClamped][xIndexClamped]; break;
                        }
                        break;
                    }
                }
            }

            // Perform bicubic interpolation
            uint16_t interpolatedPixel = calcBicubic(p00, p01, p02, p03,
                                                     p10, p11, p12, p13,
                                                     p20, p21, p22, p23,
                                                     p30, p31, p32, p33,
                                                     xRatio, yRatio);
            // Assign the interpolated pixel value to the destination array
            dest[y][x] = interpolatedPixel;
        }
    }
}

*/

int nearestNeighbor(uint16_t dest[], const uint16_t destWidth, const uint16_t destHeight, const uint16_t src[],const uint16_t srcWidth, const uint16_t srcHeight)
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




void bilinear(uint16_t dest[], uint16_t destWidth, uint16_t destHeight, const uint16_t src[], uint16_t srcWidth, uint16_t srcHeight) {
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

uint16_t planszaDest[128 * 128];

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
    800, 700, 680, 660, 800, 622, 111, 50,
    750, 900, 740, 680, 844, 843, 22, 11,
    792, 600, 755, 1, 944, 999, 155, 234,
    400, 688, 830, 691, 735, 660, 380, 213,
    211, 478, 779, 468, 538, 752, 666, 313,
    322, 547, 587, 321, 420, 499, 544, 370,
    66, 156, 333, 443,  560, 600, 613, 390
};

uint16_t karamba [8*8];
int main()
{


    bilinear(planszaDest,128,128,plansza3,8,8);
    for(int i = 0; i < 128; i++) {

        for(int j = 0; j < 128; j++) {
            planszaDest[i*128+j] = convertToColor(planszaDest[i*128+j],1000);
        }
    }

    saveBMP("planszaDestgradient.bmp", planszaDest, 128, 128);


    nearestNeighbor(planszaDest,128,128,plansza3,8,8);
    for(int i = 0; i < 128; i++) {

        for(int j = 0; j < 128; j++) {
            planszaDest[i*128+j] = convertToColor(planszaDest[i*128+j],1000);
        }
    }

    saveBMP("planszaDest1.bmp", planszaDest, 128, 128);
    std::cout << "ala";



    return 0;
}
