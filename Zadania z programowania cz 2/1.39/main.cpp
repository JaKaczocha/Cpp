#include "Semafor.hpp"
#include <iostream>

int main(int argc, char* argv[])
{
    Semafor sem(10);
    for(int i = 0; i < 5;i++)
    {
        sem.book();
    }
    std::cout << sem.state();

    return 0;
}