#include "classlab04.h"
#include <iostream>

using std::cout;
using std::endl;

ClassLab04::ClassLab04()
{

}

void ClassLab04::Drukuj()
{
    cout << "Printing works" << endl;
    cout << "d = " << d << endl;
    cout << "f = " << f << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;
}

void ClassLab04::SetPrivate(bool b, char c)
{
    this->b = b;
    this->c = c;
}

void ClassLab04::SetD2(int d2)
{
    this->d2 = d2;
}

int ClassLab04::GetD2()
{
    return d2;
}
