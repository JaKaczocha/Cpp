#include <iostream>
#include "writing.hpp"

int main(int argc, char* argv[])
{
    writing wr,wr2;

    wr.add("ala");


    wr.add(" MA ");
    

    wr2.add(wr);
    writing wr5(wr2);


    wr.add(wr5);

    std::cout << wr.getStr();

    return 0;
}
