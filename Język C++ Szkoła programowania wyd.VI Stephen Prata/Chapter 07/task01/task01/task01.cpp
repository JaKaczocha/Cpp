#include <iostream>

double harmonicMean();

int main()
{
    std::cout << "your harmonic mean = " << harmonicMean() << std::endl;
}

double harmonicMean()
{
    double first, second, mean = 0;

    std::cout << "podaj pare liczb." << std::endl;
    std::cin >> first;
    std::cin >> second;
    if (!second && !first)
    {
        return 0;
    }
    mean = (2.0 * first * second) / (first + second);
    if (!first || !second) {
        return mean;
    }

    while (true)
    {
        std::cout << "podaj pare liczb." << std::endl;
        std::cin>>first;
        std::cin>>second;

        
        if (!first || !second) {
            return mean;
        }
        mean = (2.0 * first * second) / (first + second);

    }
    
}


