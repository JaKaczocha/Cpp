#include <iostream>
#include "SquereFun.hpp"

int main()
{
    SquereFun fun;
    fun.a = 3;
    fun.b = 8;
    fun.c = 5;

    std::cout << "value x = 4: " << fun.value(4) << "\n";
    std::cout << "zero exist: " << fun.zero();
}