#include <iostream>
#include "Array.hpp"

int main(int argc, char* argv[])
{
    Array arr(5);
    arr.setValue(7,7);
    for(int i = 0; i < arr.getSize();i++)
    {
        std::cout << arr.value(i) << "  ";
    }

    return 0;
}
