#include <iostream>
#include <cctype>
#include <fstream>
#include <cstdlib>

using namespace std;

struct sponsors
{
    string surname;
    double amount;
};

int main()
{
    int number;

    ifstream file("donators.txt");

    if(!file.is_open())
    {
        cout << "error";
        exit(EXIT_FAILURE);
    }


    file >> number;
    sponsors* donators = new sponsors [ number ];

    for( int i = 0; i < number; i++ )
    {
        file.ignore();
        getline(file, donators[ i ].surname);

        file >> donators[i].amount;
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
    file.close();

    return 0;
}
