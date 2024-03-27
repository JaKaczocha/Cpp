#include <iostream>
#include <vector>

using namespace std;

struct zpdw
{
    string name;
    string position;
    string nickname;
    int preference;
};

int main()
{
    vector< zpdw >list{{"karol", "junior", "wkdik", 2},{"ada","mid", "olada", 1 },
                         {"mariusz", "senior", "mak", 2},{"kuba","kox", "kox", 0 }};
    cout << "a) name list    \tb) position list" << endl;
    cout << "c) nickname list\td) list by preference" << endl;
    cout << "q) end\n";

    cout <<"choose option: ";
    char ch;
    while( cin >> ch && ch != 'q' )
    {
        switch( ch )
        {
        case 'a':
            for( auto it : list )
            {
                cout << it.name << endl;
            }
            break;
        case 'b':
            for( auto it : list )
            {
                cout << it.position << endl;
            }
            break;
        case 'c':
            for( auto it : list )
            {
                cout << it.nickname << endl;
            }
            break;

        case 'd':
            for( auto it : list )
            {
                if( it.preference == 0 )
                {
                    cout << it.name << endl;
                }
                else if( it.preference == 1)
                {
                    cout << it.position << endl;
                }
                else if ( it.preference == 2)
                {
                    cout << it.nickname << endl;
                }
            }


        }
        cout <<"choose option: ";
    }
    cout << "See you later!\n";

    return 0;
}
