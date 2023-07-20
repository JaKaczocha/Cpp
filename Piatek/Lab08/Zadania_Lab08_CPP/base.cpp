#include "base.h"
#include <iostream>

Base::Base() : abc_( "text field from base class")
{

}

void Base::print()
{
    std::cout << "Base Class" << std::endl;
}

float Base::calc()
{
    std::cout << "( "<< a_ << " + " << b_ << " + " << c_ << ")"
              << " / 3.0"<< " = "<< ( a_ + b_ + c_ )  / 3.0 << std::endl;

    return ( a_ + b_ + c_ ) / 3.0;
}

void Base::setAbc( std::string newAbc )
{
    this->abc_ = newAbc;
}

std::string Base::getAbc()
{
    return abc_;
}
