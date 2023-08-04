#include <iostream>

void setZero(int** array, const unsigned int sizeF, const unsigned int sizeS);

int main()
{
    int** array{ new int* [5] };
    
    for (int i = 0; i < 5; i++)
    {
        array[i] = new int[3];
        for (int j = 0; j < 3; j++)
        {
            array[i][j] = 3;
        }
        
    }
    
    setZero(array, 5, 3);

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            std::cout << array[i][j] << " ";
        }
        std::cout << std::endl;
    }
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

