#include <iostream>


int sumArray(int Array[], int size);

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
    int sum = sumArray(array, size);

    std::cout << "sum: " << sum << std::endl;
    delete[] array;
    array = NULL;
}

int sumArray(int Array[], int size) 
{    
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += Array[i];
    }
    return sum;
}

