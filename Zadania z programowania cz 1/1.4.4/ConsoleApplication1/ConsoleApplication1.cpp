#include <iostream>

int main()
{
    int number;
    uint64_t factorial = 1;
    
    std::cout << "enter number: ";
    
    do 
    {
        std::cin >> number;
    } while (number < 0);

    for (int i = 2; i <= number; i++)
    {
        factorial *= i;
    }

    std::cout << "factorial: " << factorial;

}

