#include <iostream>
#include "cclass.h"

using namespace std;

int cClass::counter = 0;


int main()
{
    cClass first;
    cClass second( 3 );
    cClass three( 3, 3.14, 1 );
    cClass fourth( 9, 1.25, 0, 0);

    return 0;
}
