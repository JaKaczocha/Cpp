#include "Id.hpp"
#include <iostream>

size_t Id::id{0};

int main(int argc, char* argv[])
{
    Id id;
    id.getId();
    id.getId();
    id.getId();
    id.getId();

    std::cout << id.getId();
    
    return 0;
}