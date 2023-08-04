#include <iostream>

void reverseRows(int** mat, int sizeF, int sizeS);

int main()
{
    
}

void reverseRows(int** mat, int sizeF, int sizeS)
{
    for (int i = 0; i < sizeF; i++)
    {
        for (int j = 0, k = sizeS - 1; j < sizeS / 2; j++, k--)
        {
            std::swap(mat[i][j], mat[i][k]);
        }
    }
}

