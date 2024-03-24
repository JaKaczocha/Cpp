#include <stdio.h>
#include "interpolation.h"
#include "render.h"
#include "colorConverter.h"

#include <stdio.h>



#define TOF_WIDTH 8
#define TOF_HEIGHT 8

struct Matrix {
    uint16_t* array;
    uint16_t width;
    uint16_t height;
};
uint16_t pixelArr[64];

uint16_t  interpArr[64*64];
uint16_t  interpArr128[128*128];

int status;
const uint16_t modeCounter = 4;

uint16_t pixelArr[TOF_WIDTH * TOF_HEIGHT];
uint16_t minValue = 1, maxValue = 4000;

volatile int IntCount;
uint8_t p_data_ready;

uint8_t resolution, isAlive;
uint16_t idx;
volatile int16_t colorMode = 0;
volatile uint16_t bounce = 0;

uint16_t oldVal = 999;
//INTERPOLACJA LINOWA ŻEBY ZWIEKSZYC ROZDZIELCZOSC!!!!!!!!!11!1










/*
 * @brief   Application entry point.
 */
int main(void) {
    /* Init board hardware. */

    struct Matrix srcMatrix;
    srcMatrix.array = pixelArr;
    srcMatrix.width = TOF_WIDTH;
    srcMatrix.height = TOF_HEIGHT;
    struct Matrix tmpMatrix;
    uint16_t tmpArray[64 * 64];
    tmpMatrix.array = interpArr;
    tmpMatrix.width = 64;
    tmpMatrix.height = 64;
    struct Matrix dstMatrix;
    uint16_t dstArray[128 * 128];
    dstMatrix.array =  interpArr128;
    dstMatrix.width = 128;
    dstMatrix.height = 128;

    int counter = 0;
    while(1) {
        switch(colorMode)
        {
        case 0:
            drawColorBilinear(srcMatrix,tmpMatrix,dstMatrix,minValue,maxValue);
            break;
        case 1:
            drawGreyBilinear(srcMatrix,tmpMatrix,dstMatrix,minValue,maxValue);
            break;
        case 2:
            drawColorNearest(srcMatrix,tmpMatrix,dstMatrix,minValue,maxValue);
            break;
        case 3:
            drawGreyNearest(srcMatrix,tmpMatrix,dstMatrix,minValue,maxValue);
            break;
        default:
            drawColorBilinear(srcMatrix,tmpMatrix,dstMatrix,minValue,maxValue);
            break;
        }
        counter++;
        printf("%09d\r", counter);


    }
    return 0 ;
}
