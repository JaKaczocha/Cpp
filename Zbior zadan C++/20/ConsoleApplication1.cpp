#include <iostream>

int main()
{
    int n, m; // m - height


    std::cout << "enter heigth: ";
    std::cin >> m;
    for (int i = 0; i < m; i++)
    {

        for (int j = 1; j < m - i; j++)
        {
            std::cout << " ";
        }

        for (int j = 0; j < 2 * i + 1; j++)
        {
            std::cout << "*";
        }
        std::cout << '\n';
    }
}

