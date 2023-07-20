#ifndef OVERDERIVED_H
#define OVERDERIVED_H

#include "derived.h"

class OverDerived : private Derived
{
public:
    OverDerived();
    void print();
};

#endif // OVERDERIVED_H
