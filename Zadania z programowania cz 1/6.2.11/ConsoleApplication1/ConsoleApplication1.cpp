#include <iostream>

int sum(int array[][100], const unsigned int size);

int main()
{
    std::cout << "Hello World!\n";
}

int sum(int array[][100], const unsigned int size)
{
    int sum{ 0 };
    
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < 100; j++)
        {
            sum += array[i][j];
        }
    }
    return sum;
}


