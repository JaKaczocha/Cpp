#include <iostream>
#include <array>

using namespace std;

int main()
{
    array< double, 10 >donations = {};

    double average = 0, i = 0;
    for( auto& it : donations )
    {
        cin >> it;
        i++;
        average += it;
        if( cin.fail() )
        {
            i--;
            cin.clear();
            break;
        }

    }
    average /= i;
    cout << "average donation = " << average << endl;
    cout << "over average = ";
    for( auto it : donations)
    {
        if( it > average )
        {
            cout << it << "  ";
        }
    }
    cout << endl;


    return 0;
}
