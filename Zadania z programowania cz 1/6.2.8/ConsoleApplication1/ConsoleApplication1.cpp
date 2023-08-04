#include <iostream>

void setZero(int array[][100], const unsigned int size);

int main()
{
    std::cout << "Hello World!\n";
}

void setZero(int array[][100], const unsigned int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < 100; j++)
        {
            array[i][j] = 0;
        }
    }
}

