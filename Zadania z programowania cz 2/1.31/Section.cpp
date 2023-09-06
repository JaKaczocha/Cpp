#include "Section.hpp"
#include <iostream>

Section::Section(/* args */)
{
}

Section::~Section()
{
}

void Section::enterCoordinates()
{
    std::cout << "enter x1: ";
    std::cin >> x1;
    std::cout << "enter y1: ";
    std::cin >> y1;

    std::cout << "enter x2: ";
    std::cin >> x2;
    std::cout << "enter y2: ";
    std::cin >> y2;
}

bool Section::intersect(const Section& s) const
{     
    //TODO
}