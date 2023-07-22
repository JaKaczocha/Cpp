#include <iostream>

int main()
{
    int n, number;
    unsigned long long  factorial = 1;
    std::cout << "enter : ";
    std::cin >> n;



    if (n > 1) {
        for (int i = 2; i <= n; i++)
        {
            factorial *= i;
        }
    }
    
    

    std::cout << "factorial: " << factorial;


}


