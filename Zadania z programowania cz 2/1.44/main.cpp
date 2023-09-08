#include "Person.hpp"

int main(int argc, char* argv[])
{
    Person per("kaja", "wlad");

    
    per.printData();

    std::vector abc {personVector(5)};
    
    for (auto &i : abc)
    {
        i.printData();
    }
    
    return 0;
}