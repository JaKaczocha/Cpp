#include <iostream>
#include "vectorn.hpp"

int main(int argc, char* argv[])
{
    vectorn vec(3);
    vec.at(2) = 5;
    vec.at(1) = 53;
    vec.at(0) = 11;

    std::cout << vec.at(0) << " " << vec.at(1)
        << " " << vec.at(2);
        
    return 0;
}