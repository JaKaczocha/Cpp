#include <iostream>

#include "number.hpp"

int main(int argc, char *argv[])
{
    std::cout << "argc: " << argc << std::endl;
    for(int i = 0; i < argc; i++)
    {
        std::cout << "argv[" << i << "]: " << argv[i] << std::endl; 
    }
    number num1;
    std::cout << "enter number: ";
    num1.input();

    num1.print();
}