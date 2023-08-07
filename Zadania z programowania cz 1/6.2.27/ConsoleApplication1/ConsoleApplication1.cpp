#include <iostream>

void matrixIjkToKij(int*** matrix, int sizeF, int sizeS, int sizeT);

int main()
{
    constexpr int sizeF { 7 }, sizeS { 7 }, sizeT{ 7 };

    int*** array3D = new int** [sizeF];
    for (int i = 0; i < sizeF; i++)
    {
        array3D[i] = new int* [sizeS];
    }

    for (int i = 0; i < sizeF; i++)
    {
        for (int j = 0; j < sizeS; j++)
        {
            array3D[i][j] = new int[sizeT];

            for (int z = 0; z < sizeT; z++)
            {
                array3D[i][j][z] = i + 2 * j + 3 * z;
            }
        }
    } 

    std::cout << array3D[1][3][6] << " : " << array3D[6][1][3] << std::endl << std::endl;

    matrixIjkToKij(array3D, sizeF, sizeS, sizeT);
    std::cout << array3D[1][3][6] << " : " << array3D[6][1][3] << std::endl;

    for (int i = 0; i < sizeF; i++)
    {
        for (int j = 0; j < sizeS; j++)
        {
            delete[] array3D[i][j];
        }
        delete[] array3D[i];
       
    }
    delete[] array3D;


}

void matrixIjkToKij(int*** matrix, int sizeF, int sizeS, int sizeT)
{
    for (int i = 0; i < sizeF; i++)
    {
        for (int j = i; j < sizeS; j++)
        {
            for (int k = j; k < sizeT; k++)
            {
                matrix[k][i][j] = matrix[i][j][k];
            }
        }
    }
}
