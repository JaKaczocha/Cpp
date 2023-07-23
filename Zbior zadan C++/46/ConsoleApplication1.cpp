#include <iostream>


struct minMax {
    int min;
    int max;
};

minMax minMaxArray(int Array[], int size);

int main()
{
    int size;
    int* array;
    std::cout << "enter size of array: ";
    std::cin >> size;

    array = new int[size];

    for (int i = 0; i < size; i++)
    {
        std::cout << "enter number to array: ";
        std::cin >> array[i];
    }
    minMax minMaxObj = minMaxArray(array, size);

    std::cout << "min: " << minMaxObj.min << "   max: " << minMaxObj.max <<  std::endl;

    delete[] array;
    array = NULL;
}

minMax minMaxArray(int Array[], int size)
{
    minMax minMaxObj;

    minMaxObj.min = Array[0];
    minMaxObj.max = Array[0];

    for (int i = 1; i < size; i++) {
        if (minMaxObj.min > Array[i])
        {
            minMaxObj.min = Array[i];
        }
        else if (minMaxObj.max < Array[i])
        {
            minMaxObj.max = Array[i];
        }
    }
    return minMaxObj;
}

