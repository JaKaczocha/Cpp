#include <iostream>

int main()
{
    int a, b, range;

    std::cout << "enter start: ";
    std::cin >> a;
    std::cout << "enter stop: ";
    std::cin >> b;

    range = abs(a - b) + 1;

    for (int i = 0; true; i++) 
    {
        if (range < pow(2, i))
        {
            std::cout << i << " steps.";
            break;
        }
    }



}

