#include <iostream>

int main()
{
    int n, k, m;

    std::cout << "enter n: ";
    std::cin >> n;
    std::cout << "enter k: ";
    std::cin >> k;
    std::cout << "enter m: ";
    std::cin >> m;

    std::cout << "multiplies of " << n << " bigger than k and lesser than m: " << std::endl;
    for (int i = n; i < m; i*=n)
    {
        if (i > k)
        {
            std::cout << i << std::endl;
        }
    }
}

