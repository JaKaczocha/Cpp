#include <iostream>

int main()
{
    int number;
    uint64_t product = 1;
    std::cout << "enter number: ";
    do
    {
        std::cin >> number;
    } while (number <= 2);

    for (int i = 2; i <= number; i += 2)
    {
        product *= i;
    }

    std::cout << "product of sequence of consecutive even numbers by the number " << number << " is " << product;

   
}


