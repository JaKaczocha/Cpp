#include <iostream>

void transposeNxN(int** matrix, int n);

int main()
{
    constexpr int size{ 4 };

    int** matrix{ new int* [size] };
    for (int i = 0; i < size; i++)
    {
        matrix[i] = new int[size];
        for (int j = 0; j < size; j++)
        {
            matrix[i][j] = i + j + j;
        }
    }

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
    transposeNxN(matrix, size);

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }

    for (int i = 0; i < size; i++)
    {
        delete[] matrix[i];
    }
    delete[] matrix;
}

void transposeNxN(int** matrix, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n ; j++)
        {
            std::swap(matrix[i][j], matrix[j][i]);
        }
    }
}

