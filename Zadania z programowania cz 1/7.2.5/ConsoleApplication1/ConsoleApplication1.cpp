#include <iostream>

struct point10
{
    float coordinates[10];
};

void copy(const point10 src[], point10 dest[], const unsigned int size);

int main()
{
    constexpr int size{ 5 };
    point10 array[size];
    for (int i{ 0 }; i < size; i++)
    {
        for (int j{ 0 }; j < 10; j++)
        {
            array[i].coordinates[j] = i + j * j;
        }
    }

    point10 array2[size];


    copy(array, array2, size);

    std::cout << array[2].coordinates[2] << "   " << array2[2].coordinates[2];

}

void copy(const point10 src[], point10 dest[], const unsigned int size)
{
    for (int i{ 0 }; i < size; i++)
    {
        dest[i] = src[i];
    }
}

