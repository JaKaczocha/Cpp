#include <iostream>
#include <fstream>

int main()
{
    int height;
    std::ofstream myStream;
    myStream.open("output.txt");

    std::cout << "enter triangle height:";
    std::cin >> height;

    for (int i = 1; i <= height; i++)
    {
        for (int j = 1, sum = 0; j <= i; j++, sum = 0)
        {
            for (int g = 0; g < j; g++)
            {
                sum += i;
            }

            std::cout <<  sum << ' ';
            myStream << sum << ' ';
        }
        std::cout << std::endl;
        myStream << std::endl;
    }

}

