#include "ComplexNum.hpp"
#include <iostream>
ComplexNum sum(ComplexNum c1, ComplexNum c2)
{
    return ComplexNum(c1.getR() + c2.getR(), c1.getIm() + c2.getIm());
}

int main(int argc, char* argv[])
{
    std::cout << "good!";
    return 0;
}