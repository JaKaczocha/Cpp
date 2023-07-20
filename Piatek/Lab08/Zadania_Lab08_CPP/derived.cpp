#include "derived.h"
#include <iostream>
#include <math.h>

Derived::Derived()
{

}

void Derived::print()
{
    std::cout << "Derived class" << std::endl;
}

void Derived::setPro( float newProAbs )
{
    protected_ = abs( newProAbs );
}
void Derived::printPro()
{
    std::cout << "protected float = " << protected_ << std::endl;
}

void Derived::setAbc(std::string newAbc)
{
    Base::setAbc( newAbc );
}

void Derived::printAbc()
{
    std::cout << "string = " << getAbc() << std::endl;
}
