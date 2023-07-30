#include <iostream>

uint64_t nthPowerOf2(int n);

int main()
{
    int number;
    std::cout << "enter number: ";
    do
    {
        std::cin >> number;
    } while (number < 0);
    

    std::cout << "2^" << number << " = " << nthPowerOf2(number);
}

unsigned long long nthPowerOf2(int n)
{
    return std::pow(2, n);
}


