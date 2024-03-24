#include "interpolation.h"
#include "colorConverter.h"


struct Matrix {
    uint16_t* array;
    uint16_t width;
    uint16_t height;
};

volatile void drawGreyBilinear(const struct Matrix src,struct Matrix bilinearTmp, struct Matrix dst,const uint16_t minValue,const  uint16_t maxValue)
{
	bilinear(bilinearTmp.array, bilinearTmp.width, bilinearTmp.height, src.array, src.width, src.height);

	for(int j=0; j<64; j++)
		{
			for(int i=0; i < 64; i++)
			{
				bilinearTmp.array[j*64+i] = convertToGreyscale(bilinearTmp.array[j*64+i],maxValue);
			}
		}

	nearestNeighbor(dst.array, dst.width, dst.height, bilinearTmp.array, bilinearTmp.width,bilinearTmp.height);
    //LCD_Set_Icon(0, 0, bilinearTmp.width, bilinearTmp.height, bilinearTmp.array);
}

volatile void drawGreyNearest(const struct Matrix src, struct Matrix nearestTmp,struct Matrix dst,const uint16_t minValue, const uint16_t maxValue)
{
	for(int j=0; j<8; j++)
		{
			for(int i=0; i<8; i++)
			{
				nearestTmp.array[j*8+i] = convertToGreyscale(src.array[j*8+i],maxValue);
			}
		}
	nearestNeighbor(dst.array, dst.width, dst.height, nearestTmp.array, nearestTmp.width, nearestTmp.height);
    //LCD_Set_Icon(0, 0, dst.width, dst.height, dst.array);
}

volatile void drawColorBilinear( const struct Matrix src,struct Matrix bilinearTmp, struct Matrix dst,const uint16_t minValue, const uint16_t maxValue)
{
	bilinear(bilinearTmp.array, bilinearTmp.width, bilinearTmp.height, src.array, src.width, src.height);

	for(int j=0; j<64; j++)
		{
			for(int i=0; i < 64; i++)
			{
				bilinearTmp.array[j*64+i] = convertToColor(bilinearTmp.array[j*64+i],maxValue);
			}
		}

	nearestNeighbor(dst.array, dst.width, dst.height, bilinearTmp.array, bilinearTmp.width, bilinearTmp.height);
    //LCD_Set_Icon(0, 0, dst.width, dst.height, dst.array);
}

volatile void drawColorNearest(const struct Matrix src, struct Matrix nearestTmp,struct Matrix dst,const uint16_t minValue,const  uint16_t maxValue)
{
	for(int j=0; j<8; j++)
		{
			for(int i=0; i<8; i++)
			{
				nearestTmp.array[j*8+i] = convertToColor(src.array[j*8+i],maxValue);
			}
		}
	nearestNeighbor(dst.array, dst.width, dst.height, nearestTmp.array, nearestTmp.width, nearestTmp.height);
    //LCD_Set_Icon(0, 0, dst.width, dst.height, dst.array);
}
