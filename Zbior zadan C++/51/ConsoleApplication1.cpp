#include <iostream>


int binSearch(int array[], int size, int value);

int main()
{
    constexpr int size = 3513;

    int array[size];
    for (int i = 0; i < size; i++)
    {
        array[i] = i * 2;
    }

    int index = binSearch(array, size, 292);

    std::cout << "index: " << index;
}

int binSearch(int array[], int size, int value)
{
    int start = 0, stop = size - 1, mid = (start + stop) / 2;;
    
    int i = 0;
    while (true)
    {
        if (array[mid] == value)
        {
            return mid;
        }
        else if ((stop - start) <= 1 && array[stop] != value && array[start] != value)
        {
            return -1;
        }
        else if (array[mid] > value)
        {
            stop = mid;
            start = start;
            mid = (start + stop) / 2;

        }
        else if (array[mid] < value)
        {
            start = mid;
            stop = stop;
            mid = (start + stop) / 2;
        }     
    }
}
