#include "overderived.h"
#include <iostream>

OverDerived::OverDerived()
{

}

void OverDerived::print()
{
    std::cout << "Class over derivative" << std::endl;

    Base::print();
    Derived::print();

    std::cout << "abc : " << Base::getAbc();
}
