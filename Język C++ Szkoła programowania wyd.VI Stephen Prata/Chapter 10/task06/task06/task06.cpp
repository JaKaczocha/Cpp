#include <iostream>
#include "Move.h"

int main()
{
    Move z(3,5);
    Move m2;

    m2.showmove();
    m2 = m2.add(z);
    m2.showmove();
    m2 = m2.add(z);
    m2.showmove();
    m2 = m2.add(z);
    m2.showmove();
    m2.reset(1, 0);
    m2.showmove();
}

