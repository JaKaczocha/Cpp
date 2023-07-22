#include <iostream>
#include <windows.h>


int main()
{
    int i = 1;
    HANDLE col;
    col = GetStdHandle(STD_OUTPUT_HANDLE);

    while (i == 1 || i == 2 || i == 3)
    {
        std::cout << "enter 1 for red, 2 for blue, 3 for yellow: ";
        std::cin >> i;

        switch (i)
        {
        case 1:
            SetConsoleTextAttribute(col, 4);
            std::cout << "RED" << std::endl;
            break;
        case 2:
            SetConsoleTextAttribute(col, 1);
            std::cout << "BLUE" << std::endl;
            break;
        case 3:
            SetConsoleTextAttribute(col, 6);
            std::cout << "YELLOW" << std::endl;
            break;
        default:
            break;
        }
        

    }
}


