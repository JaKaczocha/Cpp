#include <iostream>
#include <vector>
#include "classlab04.h"

using namespace std;

string ClassLab04::abc = "";

int main()
{

    vector<ClassLab04> vec(5);

    string abc;
    char c;
    bool b;
    int d2;
    for( int i = 0; i < 5; i++ )
    {
        cout << "enter bool value: ";
        cin >> b;
        cout << "enter char: ";
        cin >> c;
        vec[ i ].SetPrivate( b, c );
        cout << "enter float: ";
        cin >> vec[ i ].f;
        cout << "enter int: ";
        cin >> vec[ i ].d;
        cout << "enter d2 value: ";
        cin >> d2;
        vec[ i ].SetD2( d2 );
        cout << "enter string: ";
        cin.ignore();
        getline( cin, abc);
        vec[ i ].abc = abc;

    }

    for( int i = 0; i < 5; i++ )
    {
        cout << "vec[ " << i + 1 << " ]:\n";

        vec[ i ].Drukuj();

        cout << "d2 = " << vec[ i ].GetD2() << endl;
        cout << "abc = " << vec[ i ].abc << endl;
    }



    return 0;
}
