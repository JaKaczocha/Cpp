#include <iostream>

int main()
{
    int n;
    std::cout << "enter n: ";
    std::cin >> n;

    std::cout << "Pythagorean triple:\n";
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j < n; j++)
        {
            for (int k = 1; k <= j; k++)
            {
                if (i * i == k * k + j * j )
                {
                    std::cout << i << " " << j << " " << k << std::endl;
                }
            }
        }
    }
}

