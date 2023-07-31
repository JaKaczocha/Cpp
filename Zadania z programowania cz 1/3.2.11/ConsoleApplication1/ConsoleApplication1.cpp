#include <iostream>

int* newIntArray(const unsigned int size);

int main()
{
    int* array = newIntArray(4);

    array[0] = 4;
    array[2] = 4;

    for (int i = 0; i < 4; i++)
    {
        std::cout << array[i] << " ";
    }

    delete[] array;
    array = nullptr;
}

int* newIntArray(const unsigned int size)
{
    return new int[size];
}


