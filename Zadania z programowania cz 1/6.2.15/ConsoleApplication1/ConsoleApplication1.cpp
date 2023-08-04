#include <iostream>

long long sum(int array[][100][100], int size);

// we have 10 bc numbers was too big for cheap

int main()
{
    constexpr int size{ 5 };
    int array[size][100][100];

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < 100; j++)
        {
            for (int k = 0; k < 100; k++)
            {
                array[i][j][k] = i / 50 + j / 50 + k / 3;
            }
        }
    }
    std::cout << sum(array,size);
}

long long sum(int array[][100][100],int size)
{
    long long sum = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < 100; j++)
        {
            for (int k = 0; k < 100; k++)
            {
                sum += array[i][j][k];
            }
        }
    }
    return sum;
}


