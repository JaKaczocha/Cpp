#include <iostream>
#include "Section.hpp"


int main(int argc, char* argv[])
{
    Section s,s2;
    s.enterCoordinates();
    s.printCoordinates();

    s2.enterCoordinates();
    s2.printCoordinates();
    std::cout << s.intersect(s2);
    return 0;
}