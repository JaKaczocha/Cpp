#include <iostream>
#include <vector>
#include "constructors.h"

using namespace std;

int main()
{
    vector < Constructors > vec;

    for( int i = 0; i < 10; i++ )
    {
        vec.push_back( Constructors( i ) );
        cout << "----------------\n";
    }


    return 0;
}
