#include <iostream>

int main()
{
    int first, second, third;

    std::cout << "enter first: ";
    std::cin >> first;
    std::cout << "enter second: ";
    std::cin >> second;
    std::cout << "enter third: ";
    std::cin >> third;

    if (third > second)
    {
        std::swap(third, second);
    }
    if (second > first)
    {
        std::swap(second, first);
    }
    if (third > second)
    {
        std::swap(third, second);
    }

    if (first == second && second == third)
    {
        std::cout << "greatest: " << first << ", " << second << ", " << third;
    }
    else if (first == second)
    {
        std::cout << "greatest: " << first << ", " << second;
    }
    else
    {
        std::cout << "greatest: " << first;
    }
}
