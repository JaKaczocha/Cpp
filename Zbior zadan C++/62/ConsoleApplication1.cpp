#include <iostream>


void putValue(int **array, int sizeF,int sizeS);

int main()
{
    constexpr int size = 13;
    
    int **array = new int* [size];
    for (int i = 0; i < size; i++)
    {
        array[i] = new int[size];
    }

    putValue(array, size, size);

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            std::cout << array[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

void putValue(int **array, int sizeF, int sizeS)
{
    for (int i = 0; i < sizeF; i++) 
    {
        for (int j = 0; j < sizeS; j++)
        {
            array[i][j] = i * j;
        }
    }
}





