#include <iostream>

int* noZeroCpy(const unsigned int size, const int* const array);

int main()
{
    int array[5]{ 6,3,0,-3,-6 };

    int* cpy{ noZeroCpy(5, array) };

    for (int i = 0; i < 5; i++)
    {
        std::cout << cpy[i] << " ";
    }
}

int* noZeroCpy(const unsigned int size, const int* const array)
{
    int count{ 0 };
    for(int i = 0; i < size; i++)
    { 
        if (array[i] != 0)
        {
            count++;
        }
    }

    int* cpyArray{ new int[count] };

    for (int i = 0, j = 0; i < size; i++)
    {
        if (array[i] != 0)
        {
            cpyArray[j] = array[i];
            j++;
        }
    }

    return cpyArray;
}

