#include <iostream>

int main()
{
    unsigned int a, b, tmp, tmpA,tmpB;
    std::cout << "enter A and B";

    std::cin >> a >> b;

    if (a < b) {
        std::swap(a, b);
    }

    tmpB = b;
    tmpA = a;
    while (tmpB != 0 && tmpA != tmpB) {
        tmp = tmpB;
        tmpB = tmpA % tmpB;
        tmpA = tmp;
    }

    std::cout << "lcm: " << ( a * b ) /tmpA;

}

