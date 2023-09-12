#include "SquareMatrix.hpp"

SquareMatrix::SquareMatrix(unsigned int n) : size(n)
{
    array = new double* [size];
    for(int i = 0; i < size; i++)
    {
        array[i] = new double[size];
    }
}

SquareMatrix::SquareMatrix(const SquareMatrix &sm)
{
    this->size = sm.size;
    this->array = new double* [this->size];
    for(int i = 0; i < this->size; i++)
    {
        this->array[i] = new double[this->size];
        for(int j = 0; j < this->size; j++)
        {
            this->array[i][j] = sm.array[i][j];
        }
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
