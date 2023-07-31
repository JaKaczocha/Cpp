#include <iostream>

double pot(double base, unsigned int power);
auto pot(int base, unsigned int power) -> decltype(base);
auto pot(unsigned int base, unsigned int power) -> decltype(base);

int main()
{
   
    std::cout << "1. " << pot(2, 6)  <<std::endl;
    std::cout << "1. " << pot(2.2, 6)  << std::endl;
    std::cout << "1. " << pot(static_cast<unsigned int>(2), 6)  << std::endl;
}

double pot(double base, unsigned int power)
{
    return std::pow(base, power);
}
auto pot(int base, unsigned int power) -> decltype(base)
{
    return std::pow(base, power);
}
auto pot(unsigned int base, unsigned int power) -> decltype(base)
{
    return std::pow(base, power);
}
