#include <iostream>

double* makeArray(const unsigned int size);

int main()
{
    double* array{ makeArray(3) };

    delete[] array;
    array = nullptr;
}

double* makeArray(const unsigned int size)
{
    return new double[size];
}
