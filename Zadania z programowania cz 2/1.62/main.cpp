#include <iostream>
#include "Attraction.hpp"

int main(int argc, char* argv[])
{
   
    Castle c;
    c.init("43.12", "c1", "al o ha");
    std::cout << c.getName();
    
    std::cout << c.getName();
    return 0;
}
