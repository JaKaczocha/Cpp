#include <iostream>
#include "List.hpp"


int main(int argc, char* argv[])
{
    List l;
    l.add("cucumber", 5);
    l.add("fiat", 1);
    l.add("cake",4);

    l.print();
    l.delStuff("cucumber");
    l.delStuff("tomato");
    std::cout << "----" << std::endl;
    l.print();
    std::cout << "----" << std::endl;
    l.delAll();
    l.print();
    return 0;
}

