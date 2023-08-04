#include <iostream>

int sum(int** array, const unsigned int sizeF, const unsigned int sizeS);

int main()
{
    std::cout << "Hello World!\n";
}

int sum(int** array, const unsigned int sizeF, const unsigned int sizeS)
{
    int sum{ 0 };
    for (int i = 0; i < sizeF; i++)
    {
        for (int j = 0; j < sizeS; j++)
        {
            sum += array[i][j];
        }
    }
    return sum;
}


