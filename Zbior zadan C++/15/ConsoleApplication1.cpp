#include <iostream>

int main()
{
    int start, stop;
    bool isPrime = true;
    std::cout << "enter start number: ";
    std::cin >> start;
    std::cout << "enter stop number:";
    std::cin >> stop;

    for (int i = start; i < stop; i++) {
        isPrime = true;
        if (i == 1) {
            std::cout << i << " ";
        }
        else if (i == 2) {
            std::cout << i << " ";
        }
        else {
            for (int j = 2; j < i; j++) {
                if (!(i % j)) {
                    isPrime = false;
                }
            }

            if (isPrime) {
                std::cout << i << "  ";
            }
           
        }
    }
    
}

