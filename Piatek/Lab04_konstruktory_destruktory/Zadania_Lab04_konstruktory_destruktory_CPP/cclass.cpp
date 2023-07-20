#include "cclass.h"
#include <iostream>
#include <cmath>

cClass::cClass() : id(11)
{
    std::cout << "object created" << std::endl;

    counter++;
    std::cout << "object cout: " << counter << std::endl;
}

cClass::cClass( int d ) : d(d), f( sqrt(d) ), id( 22 )
{

    counter++;
    std::cout << "object cout: " << counter << std::endl;
}
cClass::cClass( int d, float f, bool b ) : id( 33 ), f( f ), b( b ), d( d )
{
    b ? abc = "TRUE" : abc = "FALSE";
    counter++;
    std::cout << "object cout: " << counter << std::endl;
}
cClass::cClass( int d, float f, bool b, int id ) : id( id ), f( f ), b( b ), d( d )
{
    b ? abc = "TRUE" : abc = "FALSE";
    counter++;
    std::cout << "object cout: " << counter << std::endl;
}
cClass::~cClass()
{
    std::cout << "object destroyed" << std::endl;
    counter--;
    std::cout << "object cout: " << counter << std::endl;
}
