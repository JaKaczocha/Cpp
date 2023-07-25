#include <iostream>


void array1d(int** array2D, int sizeF, int sizeS);

int main()
{
    constexpr int size = 10, size2 = 5;

    int** array = new int* [size];

    for (int i = 0; i < size; i++)
    {
        array[i] = new int[size2] ;
        for (int j = 0; j < size2; j++)
        {
            array[i][j] = i + j;
        }
    }

    array1d(array, size,size2);
    
    delete[] array;
    array = NULL;
}

void array1d(int** array2D, int sizeF,int sizeS)
{
    int* array{ new int[sizeF] {} };

    for (int i = 0; i < sizeF; i++)
    {
        for (int j = 0; j < sizeS; j++)
        {
            array[i] += array2D[i][j];
        }
    }

    for (int i = 0; i < sizeF; i++)
    {
        std::cout << array[i] << ",   ";
    }
}
