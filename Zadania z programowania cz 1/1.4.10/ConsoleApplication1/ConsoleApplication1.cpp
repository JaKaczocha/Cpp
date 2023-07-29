#include <iostream>

int main()
{
    int number, squareRoot;
    std::cout << "enter number: ";

    do
    {
        std::cin >> number;
    } while (number < 0);

    for (int i = 0; i * i <= number; i++)
    {
        squareRoot = i;
    }

    std::cout << "square root of: " << number << " rounded to whole equals : " << squareRoot;
   
}

