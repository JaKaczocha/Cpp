#include <iostream>
#include <cctype>
#include <string>

int main()
{
    int n;
    int number;
    int max;

    std::cout << "n: ";
    std::cin >> n;

    std::cout << "enter the number: ";
    std::cin >> max;

    for (int i = 0; i < n - 1; i++)
    {
        std::cout << "enter the number: ";
        std::cin >> number;

        if (number > max)
        {
            max = number;
        }
    }
    
    std::cout << "max: " << max;
}


