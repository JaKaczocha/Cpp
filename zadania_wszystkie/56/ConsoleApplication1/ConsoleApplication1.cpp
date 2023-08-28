#include <iostream>

int main()
{
    float a1{ 0.0f }, q{ 0.0f };

    std::cout << "enter a1: ";
    std::cin >> a1;
    std::cout << "enter q: ";
    std::cin >> q;

    for (int i = 0; i < 10; i++)
    {
        std::cout << "a" << i + 1 << " - " << a1 * std::pow(q, i) << '\n';
    }
}

