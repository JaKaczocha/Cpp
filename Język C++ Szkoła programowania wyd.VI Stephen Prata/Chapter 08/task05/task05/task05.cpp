
#include <iostream>

const int SIZE = 5;

template <typename T>
T max5(T array[]);

int main()
{
    double arrD[5] = { 1,5,2,6.5,7.2 };
    int arrI[5]{ 1, 4,2,-2,3 };
    std::cout << max5(arrD) << std::endl;
    std::cout << max5(arrI) << std::endl;
}

template <typename T>
T max5(T array[])
{
    T max = array[0];
    for (int i = 1; i < SIZE; i++)
    {
        if (max < array[i])
        {
            max = array[i];
        }
    }
    return max;
}