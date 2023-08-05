#include <iostream>

int**  transpose(int** matrix, int n, int m);

int main()
{
    constexpr int size{ 4 }, sizeS{ 6 };

    int** matrix{ new int* [size] };
    for (int i = 0; i < size; i++)
    {
        matrix[i] = new int[sizeS];
        for (int j = 0; j < sizeS; j++)
        {
            matrix[i][j] = i + j + i;
        }
    }

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < sizeS; j++)
        {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
    int** mat = transpose(matrix, size, sizeS);

    for (int i = 0; i < sizeS; i++)
    {
        for (int j = 0; j < size; j++)
        {
            std::cout << mat[i][j] << " ";
        }
        std::cout << std::endl;
    }


    for (int i = 0; i < size; i++)
    {
        delete[] matrix[i];
    }
    delete[] matrix;

    for (int i = 0; i < sizeS; i++)
    {
        delete[] mat[i];
    }
    delete[] mat;
}

int** transpose(int** matrix, int n, int m)
{  
    int** mat{ new int* [m] };
    for (int i = 0; i < m; i++)
    {
        mat[i] = new int[n];
        
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            mat[j][i] = matrix[i][j];
        }
    }

    return mat;
}


