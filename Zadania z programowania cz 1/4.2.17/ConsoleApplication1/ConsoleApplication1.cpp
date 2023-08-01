#include <iostream>

double* cpyArray(const unsigned int size, const double* const array);

int main()
{
    constexpr unsigned int size{ 7 };
    double array[size]{ 1,6,12,8,2,3,4 };
    
    double* myCopy{ cpyArray(size,array) };

    for (int i = 0; i < size; i++)
    {
        std::cout << myCopy[i] << std::endl;
    }
}

double* cpyArray(const unsigned int size,const double* const array)
{
    double* cpy = new double[size];

    std::memcpy(cpy, array, size * sizeof(double));

    return cpy;
}

