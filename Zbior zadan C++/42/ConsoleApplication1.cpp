#include <iostream>


float geoMean(int array[], int size);

int main()
{
    constexpr int size = 5;
    int array[size];
    for (int i = 0; i < size; i++)
    {
        std::cout << "enter number: ";
        std::cin >> array[i];
    }

    std::cout << "geoMean: "  << geoMean(array, size);

}


float geoMean(int array[], int size)
{
    float mean =  1;
    if (size < 1) {
        return 0;
    }
    for (int i = 0; i < size; i++)
    {
        mean *= array[i];
    }
    

    return sqrt(mean);
}
