#include "SquareMatrix.hpp"

SquareMatrix::SquareMatrix(unsigned int n) : size(n)
{
    array = new double* [size];
    for(int i = 0; i < size; i++)
    {
        array[i] = new double[size];
    }
}

SquareMatrix::~SquareMatrix()
{
    for(int i = 0; i < size; i++)
    {
        delete [] array[i];
    }
    delete [] array;
}
