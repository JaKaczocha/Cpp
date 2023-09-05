#include "number.hpp"

#include <iostream>

number::number(/* args */)
{
}

number::~number()
{
}

void number::input()
{
    std::cin >> val;
}

void number::print() const
{
    std::cout << "val: " << val << std::endl;
}

void number::give_val(int val)
{
    this->val = val;
}

int number::value() const
{
    return val;
}

int number::value_abs() const
{
    return val >= 0 ? val : -val ;
}
