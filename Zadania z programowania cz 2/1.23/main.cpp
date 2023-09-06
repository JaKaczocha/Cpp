#include "PersonalData.hpp"
#include <iostream>

int main(int argc, char* argv[])
{
    PersonalData p;
    p.setAddress("kiszka");
    p.setLastname("karamba");
    p.setName("kaska");
    std::cout << p.getAddress();
    return 0;
}
