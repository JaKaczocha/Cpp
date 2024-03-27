#include <iostream>
#include "Person.h"
int main()
{
    Person one;
    Person two("Staszek");
    Person three("Jace123412341234123412k", "Placek");
    one.show();
    std::cout << std::endl;
    one.FormalShow();
    std::cout << std::endl;
    std::cout << std::endl;

    two.show();
    std::cout << std::endl;
    two.FormalShow();
    std::cout << std::endl;
    std::cout << std::endl;

    three.show();
    std::cout << std::endl;
    three.FormalShow();
    std::cout << std::endl;
    std::cout << std::endl;



}

