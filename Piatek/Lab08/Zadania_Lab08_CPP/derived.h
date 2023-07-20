#ifndef DERIVED_H
#define DERIVED_H

#include "base.h"

class Derived : public Base
{
public:
    Derived();

    void print();
    void setPro( float newProAbs );
    void printPro();
    void setAbc( std::string newAbc );
    void printAbc();
};

#endif // DERIVED_H
