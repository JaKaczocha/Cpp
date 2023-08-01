#include <iostream>

int* makeArray(const unsigned int size);

int main()
{
    int* array{ makeArray(3) };

    delete[] array;
    array = nullptr;
}

int* makeArray(const unsigned int size)
{
    return new int[size];
}
