#include <iostream>

int matrixDeterminant(int** matrix, int side);

int main()
{
    constexpr int size{ 4 };
    int** matrix{ new int*[size] };
    for (int i{ 0 }; i < size; i++)
    {
        matrix[i] = new int[size];
        for (int j{ 0 }; j < size; j++)
        {
            matrix[i][j] = i + 2 * j;
        }
    }

    matrixDeterminant(matrix, size);

}

int matrixDeterminant(int** matrix, int side)
{
    int determinant{ 0 };

    //TODO

    
    return determinant;
}
