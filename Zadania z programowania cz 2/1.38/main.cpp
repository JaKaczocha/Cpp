#include <iostream>
#include "SemaforBin.hpp"

int main(int argc, char* argv[])
{
    SemaforBin smfb;
    smfb.book();
    std::cout << smfb.status();
    smfb.free();
    std::cout << smfb.status();

    return 0;
}