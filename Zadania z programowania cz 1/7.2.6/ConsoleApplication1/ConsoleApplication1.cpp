#include <iostream>

struct pointN
{
    float* coordinates;
    int dimensions;
};

void copy(const pointN src[], pointN dest[], int size);

int main()
{
    constexpr int size{ 10 };
    pointN arrayS[size];
    for (int i{ 0 }; i < size; i++)
    {
        arrayS[i].dimensions = i + 1;
        arrayS[i].coordinates = new float[arrayS[i].dimensions];
        for (int j = 0; j < arrayS[i].dimensions; j++)
        {
            arrayS[i].coordinates[j] = j * j + i;
        }
    }
    pointN arrayD[size];

    copy(arrayS, arrayD, size);

    
    std::cout << arrayD[1].coordinates[1] << "   " << arrayS[1].coordinates[1];

    for (int i{ 0 }; i < size; i++)
    {
        delete[] arrayS[i].coordinates;
    }
}

void copy(const pointN src[], pointN dest[], int size)
{
    for (int i = 0; i < size; i++)
    {
        dest[i].dimensions = src[i].dimensions;
        dest[i].coordinates = new float[dest[i].dimensions];
        for (int j = 0; j < dest[i].dimensions; j++)
        {
            dest[i].coordinates[j] = src[i].coordinates[j];
        }
    }
}

