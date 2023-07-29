#include <iostream>


long double power(int m, int n);

int main()
{
    int m, n;
    std::cout << "enter number: ";
    std::cin >> m;

    if (m == 0)
    {
        std::cout << "enter positive number: ";
        do
        {
            std::cin >> n;
        } while (n == 0);
    }
    else
    {
        std::cout << "enter positive: ";
        std::cin >> n;
    }

    std::cout << "power of " << m << "^" << n << " is " << power(m, n);
}

long double power(int m, int n)
{
    return std::pow(m, n);
}

