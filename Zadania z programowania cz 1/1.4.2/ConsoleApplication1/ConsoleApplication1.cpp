#include <iostream>

int main()
{
    int n, m;

    std::cout << "enter n: ";
    std::cin >> n;
    std::cout << "enter m: ";
    std::cin >> m;

    std::cout << m << " first multiplies of " << n << ": " << std::endl;
    for (int i = 0; i < m; i++)
    {
        std::cout << pow(n,2 + i) << std::endl;
    }
}

