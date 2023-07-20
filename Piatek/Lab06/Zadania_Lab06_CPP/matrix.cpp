#include "matrix.h"
#include <iostream>

Matrix::Matrix()
{

}
Matrix::Matrix( int matrix[ side_ ][ side_ ] )
{
    for( int i = 0; i < side_; i++ )
    {
        for( int j = 0; j < side_; j++ )
        {
            this->matrix_[ i ][ j ] = matrix[ i ][ j ];
        }
    }
}

Matrix Matrix::operator+( const Matrix &obj )
{
    Matrix objTmp;

    for( int i = 0; i < side_; i++ )
    {
        for( int j = 0; j < side_; j++ )
        {
            objTmp.matrix_[ i ][ j ] = matrix_[ i ][ j ] + obj.matrix_[ i ][ j ];
        }
    }

    return objTmp;
}

Matrix Matrix::operator*( const Matrix &obj )
{
    Matrix objTmp;
    for( int y = 0; y < side_; y++ )
    {
        for( int x = 0; x < side_; x++ )
        {

            for( int j = 0; j < side_; j++ )
            {
                objTmp.matrix_[ y ][ x ] += matrix_[ y ][ j ] * obj.matrix_[ j ][ x ];
            }

        }
    }

    return objTmp;
}
int& Matrix::operator()( int y, int x )
{
    return matrix_[ y ][ x ];
}

void Matrix::Print()
{
    for( int i = 0; i < side_; i++ )
    {
        for( int j = 0; j < side_; j++ )
        {
            std::cout << matrix_[ i ][ j ] << ' ';
        }
        std::cout << std::endl;
    }
}
