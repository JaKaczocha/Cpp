#include "auxiliaryclass.h"
#include <iostream>

AuxiliaryClass::AuxiliaryClass()
{
    a_ = 0;
    b_ = 0;
    c_ = 0;
    average_ = 0;
    abc_ = "";
}
AuxiliaryClass::AuxiliaryClass(int a, int b, int c) : a_( a ), b_( b ), c_( c )
{
    average_ = ( a + b + c ) / 3.0;
}

void AuxiliaryClass::print() const
{
    std::cout << "a = " << a_ << std::endl << "b = " << b_ << std::endl <<
                 "c = " << c_ << std::endl << "average = " << average_ << std::endl <<
                 "string = " << abc_ << std::endl;
}



