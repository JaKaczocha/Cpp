#include <iostream>


float aritMean(int array[], int size);

int main()
{
    constexpr int size{ 3 };
    
    int array[size]{ 3 ,5, 6};

    float mean = aritMean(array, size);

    std::cout << "mean: " << mean;
}

float aritMean(int array[], int size)
{
    int mean = 0;
    for (int i = 0; i < size; i++)
    {
        mean += array[i];
    }
    return ( mean / static_cast<float>(size) );
}


