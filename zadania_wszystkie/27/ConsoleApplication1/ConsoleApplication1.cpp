#include <iostream>
#include <fstream>;

int main()
{
    char ch;
    uint32_t wholeCounter{ 0 }, largeCounter{ 0 };
    std::cout << "(press y to exit)\n\n";

    while (1)
    {
        std::cin >> ch;
        if (ch == 'y')
        {
            break;
        }
        else if (ch >= 'A' && ch <= 'Z')
        {
            largeCounter++;
        }
        wholeCounter++;

    }

    std::cout << "number large letters: " << largeCounter << std::endl;
    std::cout << "number of characters: " << wholeCounter << std::endl;

    std::ofstream myStream;

    myStream.open("output.txt");
    myStream << "number large letters: " << largeCounter << std::endl;
    myStream << "number of characters: " << wholeCounter << std::endl;
}

