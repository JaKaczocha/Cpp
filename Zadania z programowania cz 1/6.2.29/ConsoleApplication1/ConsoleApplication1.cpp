// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>


void matrixIjkToKij(int matrix[][50][50],int sizeF);

int main()
{
    

    int array3D[50][50][50];


    for (int i = 0; i < 50; i++)
    {
        for (int j = 0; j < 50; j++)
        {
            

            for (int z = 0; z < 50; z++)
            {
                array3D[i][j][z] = i + 2 * j + 3 * z;
            }
        }
    }
    std::cout << array3D[1][3][6] << " : " << array3D[6][1][3] << std::endl << std::endl;

    matrixIjkToKij(array3D, 50);
    std::cout << array3D[1][3][6] << " : " << array3D[6][1][3] << std::endl;

}

void matrixIjkToKij(int matrix[][50][50], int sizeF)
{
    for (int i = 0; i < sizeF; i++)
    {
        for (int j = i; j < 50; j++)
        {
            for (int k = j; k < 50; k++)
            {
                matrix[k][i][j] = matrix[i][j][k];
            }
        }
    }
}
