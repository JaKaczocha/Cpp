#include <iostream>

void bubbleSort(int array[], int size);

int main()
{
    int array[5]{ 123,3,12,6,7 };
    bubbleSort(array, 5);
    
    for (int i = 0; i < 5; i++)
    {
        std::cout << "  " << array[i];
    }
}

void bubbleSort(int array[], int size)
{
    int tmp;
    for (int i = 0; i < size; i++)
    {
        for (int j = 1; j < size; j++)
        {
            if (array[j - 1] > array[j])
            {
                std::swap(array[j - 1], array[j]);
            }
            
        }
    }
    

}


