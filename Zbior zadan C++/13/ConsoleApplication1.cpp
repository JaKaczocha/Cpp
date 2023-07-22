#include <iostream>

int main()
{
    for (int i = 31; i <= 255; i++) {
        std::cout << i << ":  " << char(i) << std::endl;
    }
}

