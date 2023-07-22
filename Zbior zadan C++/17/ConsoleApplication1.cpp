#include <iostream>

int main()
{
    int position,fib;
    std::cout << "enter position: ";
    std::cin >> position;

    int array[3]{ 1,1,0 };

    for (int i = 3; i <= position; i++)
    {
        array[2] = array[0] + array[1];

        array[0] = array[1];
        array[1] = array[2];
    }
    fib = array[1];

    std::cout << "fibonacci number on position " << position << " is " << fib << std::endl;
    
}


