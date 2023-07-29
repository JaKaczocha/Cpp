#include <iostream>

int main()
{
    int n,m;
    uint64_t product = 1;
    std::cout << "enter n: ";
    std::cin >> n;

    std::cout << "enter m: ";
    do
    {
        std::cin >> m;
    } while (m <= n);
   

    for (int i = n; i <= m; i++)
    {
        product *= i;
    }

    std::cout << "product of numbers from n to m " << " equals " << product;


}



