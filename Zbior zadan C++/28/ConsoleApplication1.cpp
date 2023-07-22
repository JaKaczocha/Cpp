#include <iostream>

int main()
{
    int p, k;

    std::cout << "enter p: ";
    std::cin >> p;

    std::cout << "enter k: ";
    std::cin >> k;

    int i = 0;
    do {
        if (pow(k, i) == p)
        {
            std::cout << "p is " << i << " power of k.";
        }
    } while (pow(k, i++) < p);
    
    
}

