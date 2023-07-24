#include <iostream>

void reverse(int array[], int size);

int main()
{
    constexpr int size{ 5 };

    int array[size]{ 5,12,6,8,2 };
    
    reverse(&array[0], size);
    
    for (int i = 0; i < size; i++)
    {
        std::cout << array[i] << "  ";
    }
}



void reverse(int array[], int size)
{
    for (int i = 0, j = size - 1; i < j; j--, i++)
    {
        std::swap(array[i], array[j]);
    }
}


