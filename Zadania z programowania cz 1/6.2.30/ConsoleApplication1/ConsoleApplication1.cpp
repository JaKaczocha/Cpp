#include <iostream>

int** matNxNSum(int**  mat1, int**  mat2, const int size);

int main()
{
    constexpr int size{ 6 };

    int** matrix1{ new int* [size] };
    int** matrix2{ new int* [size] };
    for (int i = 0; i < size; i++)
    {
        matrix1[i] = new int[size];
        matrix2[i] = new int[size];
        for (int j = 0; j < size; j++)
        {
            matrix1[i][j] = 1 + 2 * j + i;
            matrix2[i][j] = -5 + j * j;
        }
    }


    for (int j = 0; j < size; j++)
    {
        for (int i = 0; i < size; i++)
        {
            std::cout << matrix1[j][i] << " ";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
    for (int j = 0; j < size; j++)
    {
        for (int i = 0; i < size; i++)
        {
            std::cout << matrix2[j][i] << " ";
        }
        std::cout << std::endl;
    }

    int** matSum{ matNxNSum(matrix1, matrix2, size) };

    std::cout << std::endl;
    for (int j = 0; j < size; j++)
    {
        for (int i = 0; i < size; i++)
        {
            std::cout << matSum[j][i] << " ";
        }
        std::cout << std::endl;
    }


    for (int i = 0; i < size; i++)
    {
        delete[] matrix1[i];
        delete[] matrix2[i];
        delete[] matSum[i];
    }
    delete[] matrix1;
    delete[] matrix2;
    delete[] matSum;
}

int** matNxNSum(int** mat1, int** mat2, const int size)
{
    int** mat{ new int* [size] };
    for (int i = 0; i < size; i++)
    {
        mat[i] = new int[size] {0};
    }

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            mat[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
    
    return mat;
}
