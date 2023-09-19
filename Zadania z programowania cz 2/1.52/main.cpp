#include <iostream>
#include "vectorn.hpp"

int main(int argc, char* argv[])
{
    vectorn vec(3);
    vec.at(2) = 5;
    vec.at(1) = 53;
    vec.at(0) = 11;
    vectorn vec2(2);
    
    vec2.at(1) = 53;
    vec2.at(0) = 11;

    vectorn vec3 {addV(vec,vec2)};

    std::cout << vec3.at(0) << " " << vec3.at(1)
        << " " << vec3.at(2);
        
    return 0;
}