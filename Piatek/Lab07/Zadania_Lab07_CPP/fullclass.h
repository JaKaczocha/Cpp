#ifndef FULLCLASS_H
#define FULLCLASS_H

#include "miniclass.h"

class FullClass
{
public:
    FullClass();
    void Set();
    void Calc();
    void Print();

private:
    const int size_{ 10 };
    MiniClass array1_[ 10 ];
    float array2_[ 10 ];
};

#endif // FULLCLASS_H
