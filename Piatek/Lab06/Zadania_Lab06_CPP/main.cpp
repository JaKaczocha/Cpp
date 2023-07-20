#include <iostream>
#include "matrix.h"

using namespace std;

void task01();
void task02();
void task03();
void task04();


void task01F( int d = 1, float f = 12.5, bool boolean= false, string abc = "You're awesome!");

int task02Average( int a, int b );
float task02Average( float a, float b );
char task02Average( char a, char b );

int main()
{
    task01();
    task02();
    task03();
    task04();

    return 0;
}

void task01()
{
    cout << "\n\ntask01\n\n";

    task01F();
    task01F( 2 );
    task01F( 3, 5.5 );
    task01F( 4, 5.5, true );
    task01F( 5, 6.5, true, "Koniec" );
    task01F( 0, 0.0, false, "Ciekawe czy sie wyswietli" );

}
void task01F( int d, float f, bool boolean, string abc)
{
    cout << d * f << "   ";
    cout << (boolean ? abc + "\n": "\n") ;
}

void task02()
{
    cout << "\n\ntask02\n\n";

    task02Average( 3, 8 );
    task02Average( (float)3.0, 2.2 );
    task02Average( 'a' , 'd' );

}
int task02Average( int a, int b )
{
    cout << ( a + b ) / 2 << endl;

    return ( a + b ) / 2;
}
float task02Average( float a, float b )
{
    cout << ( a + b ) / 2 << endl;

    return ( a + b ) / 2;
}
char task02Average( char a, char b )
{
    cout << (char)(( (int)a + (int)b ) / 2) << endl;

    return ( a + b ) / 2;
}

void task03()
{
    cout << "\n\ntask03\n\n";

    int array1[ Matrix::side_ ][ Matrix::side_ ] = { { 1, 2, 3},{ 4, 5, 4}, {3, 2, 1} };
    int array2[ Matrix::side_ ][ Matrix::side_ ] = { { 1, 2, 3},{ 4, 5, 4}, {3, 2, 1} };

    Matrix first( array1 );
    Matrix second( array2 );
    Matrix sum = first + second;
    Matrix product = first * second;

    cout << "First: " << endl;
    first.Print();
    cout << "Second: " << endl;
    second.Print();
    cout << "Sum: " << endl;
    sum.Print();
    cout << "Product: " << endl;
    product.Print();

}

void task04()
{
    cout << "\n\ntask04\n\n";

    Matrix mat;
    for( int i = 0; i < Matrix::side_; i++ )
    {
        for( int j = 0; j < Matrix::side_; j++ )
        {
            mat( i, j ) = i + j;
        }
    }

    cout << "matrix:\n";
    for( int i = 0; i < Matrix::side_; i++ )
    {
        for( int j = 0; j < Matrix::side_; j++ )
        {
            cout << mat( i, j ) << ' ';
        }
        cout << endl;
    }
}

