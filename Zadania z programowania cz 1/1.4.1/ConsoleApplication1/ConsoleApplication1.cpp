#include <iostream>

int main()
{
    int n, m;

    std::cout << "enter n: ";
    std::cin >> n;
    std::cout << "enter m: ";
    std::cin >> m;

    std::cout << "multiplies of " << n << " less than " << m << ": ";
    for (int i = n; i < m; i *= n)
    {
        std::cout << i << std::endl;
    }
}

