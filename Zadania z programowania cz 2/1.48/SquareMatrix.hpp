#ifndef SQUARE_MATRIX_HPP
#define SQUARE_MATRIX_HPP

class SquareMatrix
{
public:
    SquareMatrix(unsigned int n);
    SquareMatrix(const SquareMatrix& sm);
    ~SquareMatrix();
    int size;
    double** array;
private:
    
};
#endif