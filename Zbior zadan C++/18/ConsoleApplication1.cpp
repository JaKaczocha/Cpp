#include <iostream>

int main()
{
    int n, m; // m - height
    
    std::cout << "enter width: ";
    std::cin >> n;
    std::cout << "enter heigth: ";
    std::cin >> m;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            std::cout << "*";
        }
        std::cout << '\n';
    }
}

