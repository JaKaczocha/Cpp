#include <iostream>

int main()
{
    unsigned int n;
    size_t sum = 0, tmp = 1;
    
    std::cout << "enter n to calculate 0! + 1! + ... + n!: ";
    std::cin >> n;

    for (int j = 0; j <= n; j++)
    {
        tmp = 1;
        for (int i = 2; i <= j; i++)
        {
            tmp *= i;
        }
        sum += tmp;
    }

    std::cout << "result: " << sum;

}

