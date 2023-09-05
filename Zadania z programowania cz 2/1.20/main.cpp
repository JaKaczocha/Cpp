#include <iostream>

#include "point.hpp"
#include "point3.hpp"



int main(int argc, char* argv[])
{
    point3 p3(7,6,2);
    point p2;

    p2.project(p3);

    std::cout << p2.getX() << " " << p2.getY();  
    return 0;
}

