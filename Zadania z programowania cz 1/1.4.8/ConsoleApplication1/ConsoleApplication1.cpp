#include <iostream>

int main()
{
    int index, first = 0, second = 1;

    std::cout << "enter index of fibonacci number: ";
    std::cin >> index;

    if (index == 0)
    {
        std::cout << "number = " << first;
    }
    else if (index == 1)
    {
        std::cout << "number = " << second;
    }
    else
    {
        for (int i = 2; i <= index; i += 2)
        {
            first = first + second;
            second = second + first;
        }

        if (index % 2 == 0)
        {
            std::cout << "number = " << first;
        }
        else
        {
            std::cout << "number = " << second;
        }
    }
    

}

