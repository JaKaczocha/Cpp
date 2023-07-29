#include <iostream>


unsigned long long power(unsigned int m,unsigned int n);

int main()
{
    unsigned m, n;
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

unsigned long long power(unsigned int m, unsigned int n)
{
    if (n == 0)
    {
        return 1;
    }
    else if (m == 0)
    {
        return 0;
    }
    else
    {
        int power = 1;
        for (int i = 0; i < n; i++)
        {
            power *= m;
        }

        return power;
    }
    
}

