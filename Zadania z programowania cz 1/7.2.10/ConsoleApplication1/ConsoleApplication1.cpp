#include <iostream>

union superInt
{
    int integer;
    unsigned int uInteger;
};

int main()
{
    superInt karamba;
    karamba.integer = -44;
    karamba.uInteger = 2;
}

