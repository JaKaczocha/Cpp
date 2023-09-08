#include "Semafor.hpp"
#include <iostream>

int main(int argc, char* argv[])
{
    Semafor sem(30);
    for(int i = 0; i < 45;i++)
    {
        sem.book(i);
    }

    sem.free(22);
    sem.book(4);
    sem.free(11);
    sem.book(4);
    sem.free(4);
    sem.book(4);
    sem.printReservation();

    return 0;
}