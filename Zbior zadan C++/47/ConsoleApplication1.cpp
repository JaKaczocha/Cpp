#include <iostream>


int maxArray(int Array[], int size, int max);

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
    int max = maxArray(array, size,array[0]);

    std::cout << "max: " << max << std::endl;
    delete[] array;
    array = NULL;
}

int maxArray(int Array[], int size, int max)
{
    
    
    if (max < Array[0]) 
    {
        max = Array[0];
    }
    if (size >= 1) 
    {
        max = maxArray(&Array[1], size - 1,max);
    }
    

    return max;
}
