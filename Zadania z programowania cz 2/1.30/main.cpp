#include "Vect.hpp"
#include <iostream>

int main(int argc, char* argv[])
{
    Vect v, v2;

    v.inputDim();
    v.printDim();
    v2.inputDim();
    v2.printDim();

    std::cout << compare(v,v2);
    
    return 0;
}