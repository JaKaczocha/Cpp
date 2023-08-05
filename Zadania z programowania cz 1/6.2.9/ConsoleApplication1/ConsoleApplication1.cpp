#include <iostream>

void setZero(int** array, const unsigned int sizeF, const unsigned int sizeS);

int main()
{
    constexpr int size{ 5 };
    int** array{ new int* [size] };
    
    for (int i = 0; i < size; i++)
    {
        array[i] = new int[3];
        for (int j = 0; j < 3; j++)
        {
            array[i][j] = 3;
        }
        
    }
    
    setZero(array, size, 3);

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            std::cout << array[i][j] << " ";
        }
        std::cout << std::endl;
    }
    for (int i = 0; i < size; i++)
    {
        delete[] array[i];
    }
    delete[] array;
}

void setZero(int** array, const unsigned int sizeF, const unsigned int sizeS)
{
    for (int i = 0; i < sizeF; i++)
    {
        for (int j = 0; j < sizeS; j++)
        {
            array[i][j] = 0;
        }
    }
}

