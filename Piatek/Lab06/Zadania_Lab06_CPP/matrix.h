#ifndef MATRIX_H
#define MATRIX_H



class Matrix
{
public:
    static const int side_ = 3;

    Matrix();
    Matrix( int matrix[ side_ ][ side_ ] );
    void Print();

    int matrix_[ side_ ][ side_ ] = {};

    Matrix operator+( const Matrix &obj );
    Matrix operator*( const Matrix &obj );
    int& operator()( int y, int x );

};

#endif // MATRIX_H
