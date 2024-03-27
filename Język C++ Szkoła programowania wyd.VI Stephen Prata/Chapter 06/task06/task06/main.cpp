#include <iostream>
#include <cctype>
using namespace std;

struct sponsors
{
    string surname;
    double amount;
};

int main()
{
    int number;
    cout << "enter number of donators: ";
    cin >> number;
    sponsors* donators = new sponsors [ number ];

    for( int i = 0; i < number; i++ )
    {
        cin.ignore();
        cout << "enter surename: ";
        getline(cin, donators[ i ].surname);
        cout << "enter donation: ";
        cin >> donators[i].amount;
    }

    cout << "Our wonderful donators:\n";
    for( int i = 0; i < number; i++ )
    {
        if ( donators[ i ].amount >= 10000 && !isalpha(donators[i].surname[0]) )
        {
            cout << "Anonymous   " << donators[i].amount << endl;
        }
        if ( donators[ i ].amount >= 10000 )
        {
            cout << donators[i].surname << "   " << donators[i].amount << endl;
        }
    }

    cout << "Other donators:\n";
    for( int i = 0; i < number; i++ )
    {
        if ( donators[ i ].amount < 10000 && !isalpha(donators[i].surname[0]) )
        {
            cout << "Anonymous   " << donators[i].amount << endl;
        }
        else if( donators[ i ].amount < 10000 )
        {
            cout << donators[i].surname << "   " << donators[i].amount << endl;
        }
    }

    delete [] donators;
    donators = nullptr;
    return 0;
}
