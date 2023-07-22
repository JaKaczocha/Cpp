#include <iostream>

int main()
{
    unsigned int a, b, tmp;
    std::cout << "enter A and B";
    
    std::cin >> a >> b;

    if (a < b) {
        std::swap(a, b);
    }

    while (b != 0 && a != b) {
        tmp = b;
        b = a % b;
        a = tmp;
    }

    std::cout << "gcd: " << a;
   
}


