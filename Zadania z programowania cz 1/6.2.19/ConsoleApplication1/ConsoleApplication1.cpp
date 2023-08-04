#include <iostream>

void copyMatrix(int** dest, int** src, int sizeF, int sizeS);


int main()
{
    std::cout << "Hello World!\n";
}

void copyMatrix(int** dest, int** src, int sizeF, int sizeS)
{
    for (int i = 0; i < sizeF; i++)
    {
        for (int j = 0; j < sizeS; j++)
        {
            dest[i][j] = src[i][j];
        }
    }
}
