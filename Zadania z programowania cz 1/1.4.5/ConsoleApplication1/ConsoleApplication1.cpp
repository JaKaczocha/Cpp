#include <iostream>

int main()
{
    int number;
    uint64_t sum = 0;
    std::cout << "enter number: ";
    do
    {
        std::cin >> number;
    } while (number < 0);
    
    for (int i = 1; i <= number; i++)
    {
        sum += i * i;
    }

    std::cout << "sum of squares of consecutive numbers from 0 to " << number << " equals: " << sum;
}

