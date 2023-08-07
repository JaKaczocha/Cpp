#include <iostream>

void productNxN(int** mat1, int** mat2, int** mat3, const int size);
void productMat(int** mat1, int** mat2, int** mat3, const int sizeF, const int sizeFS, const int sizeS);

int main()
{
    constexpr int sizeF{ 3 }, sizeFS{ 3 }, sizeS{ 3 };
    int** mat1{ new int* [sizeF] };
    for (int i = 0; i < sizeF; i++)
    {
        mat1[i] = new int[sizeFS];
    }

    int** mat3{ new int* [sizeF] };
    for (int i = 0; i < sizeF; i++)
    {
        mat3[i] = new int[sizeS];
    }

    mat1[0][0] = 2;
    mat1[0][1] = 0;
    mat1[0][2] = 3;
    mat1[1][0] = 1;
    mat1[1][1] = 4;
    mat1[1][2] = -1;
    mat1[2][0] = 3;
    mat1[2][1] = 1;
    mat1[2][2] = 1;
    int** mat2{ new int* [sizeFS] };
    for (int i = 0; i < sizeFS; i++)
    {
        mat2[i] = new int[sizeS];
    }
    mat2[0][0] = 1;
    mat2[0][1] = 2;
    mat2[0][2] = -1;
    mat2[1][0] = 3;
    mat2[1][1] = 5;
    mat2[1][2] = 3;
    mat2[2][0] = 1;
    mat2[2][1] = 1;
    mat2[2][2] = 0;

    productNxN(mat1, mat2, mat3, sizeF) ;

    for (int i = 0; i < sizeF; i++)
    {
        for (int j = 0; j < sizeS; j++)
        {
            std::cout << mat3[i][j] << "  ";
        }
        std::cout << std::endl;

    }

    for (int i = 0; i < sizeFS; i++)
    {
        delete[] mat2[i];
    }
    delete[] mat2;
    for (int i = 0; i < sizeF; i++)
    {
        delete[] mat3[i];
        delete[] mat1[i];
    }
    delete[] mat3;
    delete[] mat1;
}

void productNxN(int** mat1, int** mat2, int** mat3, const int size)
{
    productMat(mat1, mat2, mat3, size, size, size);
}

void productMat(int** mat1, int** mat2, int** mat3, const int sizeF, const int sizeFS, const int sizeS)
{
    for (int y = 0; y < sizeF; y++)
    {
        for (int x = 0, sum = 0; x < sizeS; x++, sum = 0)
        {
            for (int i = 0; i < sizeFS; i++)
            {
                sum += mat1[y][i] * mat2[i][x];
            }
            mat3[y][x] = sum;
        }
    }
}


