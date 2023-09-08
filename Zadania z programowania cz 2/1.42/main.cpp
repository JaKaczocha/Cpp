#include "constString.hpp"
#include <iostream>
int main(int argc, char* argv[])
{
    ConstString cst("karff13ola");
    std::cout << cst.at(3);
    return 0;
}
