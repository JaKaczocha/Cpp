#include <iostream>

using namespace std;

#include "overderived.h"

int main()
{
    Derived derive;

    derive.Derived::print();
    derive.Base::print();
    derive.a_ = 3;
    derive.b_ = 3;
    derive.c_ = 4;

    derive.calc();

    derive.setPro( -3.5 );
    derive.printPro();

    string abc;
    cout << "enter quote: ";
    getline( cin, abc );
    derive.setAbc( abc );
    derive.printAbc();

    OverDerived overDerive;
    overDerive.print();

    return 0;
}
