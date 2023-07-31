#include <iostream>

double* newdoubleArray(const unsigned int size);

int main()
{
    double* array = newdoubleArray(4);

    array[0] = 4;
    array[2] = 4;

    for (int i = 0; i < 4; i++)
    {
        std::cout << array[i] << " ";
    }

    delete[] array;
    array = nullptr;
}

double* newdoubleArray(const unsigned int size)
{
    return new double[size];
}


