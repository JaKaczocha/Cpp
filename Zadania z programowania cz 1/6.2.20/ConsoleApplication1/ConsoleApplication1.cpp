#include <iostream>

void swapMatrix(int** matrix1, int** matrix2, int sizeF, int sizeS);


int main()
{
    std::cout << "Hello World!\n";
}

void swapMatrix(int** matrix1, int** matrix2, int sizeF, int sizeS)
{
    for (int i = 0; i < sizeF; i++)
    {
        for (int j = 0; j < sizeS; j++)
        {
            std::swap(matrix1[i][j], matrix2[i][j]);
        }
    }
}
