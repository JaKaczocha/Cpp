#include <iostream>

long long sum(int array[100][100][10]);

// we have 10 bc numbers was too big for cheap

int main()
{
    int array[100][100][10];

    for (int i = 0; i < 100; i++)
    {
        for (int j = 0; j < 100; j++)
        {
            for (int k = 0; k < 10; k++)
            {
                array[i][j][k] = i/50 + j/50 + k / 3;
            }
        }
    }
    std::cout << sum(array);
}

long long sum(int array[100][100][10])
{
    long long sum = 0;
    for (int i = 0; i < 100; i++)
    {
        for (int j = 0; j < 100; j++)
        {
            for (int k = 0; k < 10; k++)
            {
                sum += array[i][j][k];
            }
        }
    }
    return sum;
}


