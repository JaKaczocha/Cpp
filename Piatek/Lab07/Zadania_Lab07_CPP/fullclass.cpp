#include "fullclass.h"
#include <iostream>
#include <cmath>

FullClass::FullClass()
{

}

void FullClass::Set()
{
    int x, y;
    for( int i = 0; i < size_; i++ )
    {
        std::cout << "\nobject number: " << i + 1 <<".\n";
        std::cout << "enter X coordinate: ";
        std::cin >> x;
        array1_[ i ].setX( x );
        std::cout << "enter Y coordinate: ";
        std::cin >> y;
        array1_[ i ].setY( y );
    }
}
void FullClass::Calc()
{
    int x, y;
    for( int i = 0; i < size_ - 1; i++ )
    {
        x = (array1_[ i ].getX() - array1_[ i + 1].getX());
        y = (array1_[ i ].getY() - array1_[ i + 1].getY());

        array2_[ i ] = sqrt( x * x + y * y );
    }
    x = (array1_[ size_ - 1 ].getX() - array1_[ 0].getX());
    y = (array1_[ size_ - 1 ].getY() - array1_[ 0 ].getY());

    array2_[ size_ - 1 ] = sqrt( x * x + y * y );
}
void FullClass::Print()
{
    for( int i = 0; i < size_; i++ )
    {
        std::cout << i + 1 << " - " << ( ( i + 1 ) % size_ ) + 1<< "   " << array2_[ i ] << std::endl;
    }
}
