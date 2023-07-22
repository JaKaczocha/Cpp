#include <iostream>

int main()
{
    int n, m; // m - height

 
    std::cout << "enter heigth: ";
    std::cin >> m;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            std::cout << "*";
        }
        std::cout << '\n';
    }
}

