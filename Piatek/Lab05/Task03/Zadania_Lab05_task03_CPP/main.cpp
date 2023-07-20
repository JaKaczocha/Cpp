#include <iostream>
#include "myarray.h"
using namespace std;

int main()
{
    MyArray first( 20 ), second( 10 );

    cout << "\nFIRST:\n";
    first.Print();
    cout << "\nSECOND:\n";
    second.Print();

    first = second;

    first.array[ 0 ] = 100;
    first.array[ 1 ] = 50;

    cout << "\nCHANGES IN FIRST....";
    cout << "\nSECOND:\n";
    second.Print();

    return 0;
}
