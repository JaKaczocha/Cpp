#include <iostream>

void printArr(int** array, int y, int x);

int main()
{
    constexpr int sizeF = 5, sizeS = 7;
    int** array{ new int* [sizeF] };
    for (int i = 0; i < sizeF; i++)
    {
        array[i] = new int[sizeS];
        for (int j = 0; j < sizeS; j++)
        {
            array[i][j] = i + j;
        }
    }

    printArr(array, sizeF, sizeS);

}

void printArr(int** array, int y, int x)
{
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            std::cout << array[j][i] << " ";
        }
        std::cout << std::endl;
    }
}

