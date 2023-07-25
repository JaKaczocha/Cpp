#include <iostream>

void insertSort(int array[], int size);


int main()
{
    int array[11]{ 6,8,4,8,1,3,9,0,6,4,5 };

    insertSort(array, 11);

    for (int i = 0; i < 11; i++)
    {
        std::cout << array[i] << ", ";
    }
}

void insertSort(int array[], int size)
{
    for (int i = 1; i < size; i++)
    {
        for (int j = i - 1, tmp = i; j >= 0; j--,tmp--)
        {   
            if (array[j] > array[tmp])
            {
                std::swap(array[tmp], array[j]);   
            }
            else {
                break;
            }
        }
    }    
}

