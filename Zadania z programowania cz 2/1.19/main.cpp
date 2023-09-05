#include <iostream>

#include "point.hpp"
#include "point3.hpp"

point project(point3 p3);

int main(int argc, char* argv[])
{
    point3 p3(1,6,2);
    point p2{project(p3)};

    
    std::cout << p2.getX() << " " << p2.getY();  
    return 0;
}

point project(point3 p3)
{
    return point(p3.getX(), p3.getY());
}