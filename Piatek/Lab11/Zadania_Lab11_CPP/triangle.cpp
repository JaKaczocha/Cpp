#include "triangle.h"
#include <iostream>
#include <cmath>

Triangle::Triangle( float a, float b, float c ) : a_( a ), b_( b ), c_( c )
{
    if( a + b > c && a + c > b && b + c > a )
    {
        isTriangle_ = true;
        circuit_ = a + b + c;
        float half;
        half = circuit_ / 2.0;
        field_ = sqrt( half * ( half - a ) * ( half - b ) * ( half - c ) );


    }
    else
    {
        isTriangle_ = false;
        field_ = 0;
        circuit_ = 0;
    }
}

void Triangle::print()
{
    if( isTriangle_ )
    {
        std::cout << "a = " << a_ << "\nb = " << b_ << "\nc = " << c_ << std::endl;
        std::cout << "field = " << field_ << "\ncircuit = " << circuit_ << std::endl;
    }
    else
    {
        std::cout << "It is impossible to build triangle with the given sides.";
    }
}

float Triangle::getField() const
{
    return field_;
}
