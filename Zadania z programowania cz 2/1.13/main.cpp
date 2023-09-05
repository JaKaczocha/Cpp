#include <iostream>
#include "function.hpp"

int main()
{
    function fun;
    fun.a = 1.72;
    fun.b = 24.563;

    std::cout << fun.value(-34);
}