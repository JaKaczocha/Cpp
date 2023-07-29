#include <iostream>

uint64_t nthPowerOf2(int n);

int main()
{
    int number;
    std::cout << "enter number: ";
    std::cin >> number;

    std::cout << "2^" << number << " = " << nthPowerOf2(number);
}

unsigned long long nthPowerOf2(int n)
{
    return std::pow(2, n);
}


