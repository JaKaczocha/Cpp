#include <iostream>

void destroy2D(int** arr,const unsigned int n);

int main()
{
    int** arr{ new int* [5] };
    for (int i = 0; i < 5; i++)
    {
        arr[i] = new int[12];
    }

    destroy2D(arr, 5);
    
}

void destroy2D(int** arr, const unsigned int n)
{
    for (int i = 0; i < n; i++)
    {
        delete[] arr[i];
    }
    delete[] arr;
}

