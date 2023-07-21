#include <iostream>

int main()
{
    int number;
    bool isPrime = true;
    std::cout << "enter number: ";
    std::cin >> number;

    if (number == 1) {
        std::cout << number << " is not prime";
    }
    else if (number == 2) {
        std::cout << number << " is prime";
    }
    else {
        for (int i = 2; i < number; i++) {
            if (!(number % i)) {
                isPrime = false;
            }
        }

        if (isPrime) {
            std::cout << number << " is prime";
        }
        else {
            std::cout << number << " is not prime";
        }
    }
}

