#include <iostream>

int** createTab(const unsigned int n, const unsigned int m);

int main()
{
        
}

int** createTab(const unsigned int n, const unsigned int m)
{
    int** array{ new int* [n] };
    for (int i = 0; i < n; i++)
    {
        array[i] = new int[m];
    }
    return array;
}

