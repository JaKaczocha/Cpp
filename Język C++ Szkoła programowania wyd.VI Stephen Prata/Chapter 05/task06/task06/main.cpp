#include <iostream>


int main()
{
    using std::cin;
    using std::cout;
    using std::string;
    using std::endl;

    const int YEAR{12};
    const int PERIOD{3};
    const string MONTHS[ YEAR ] = { "January", "February", "March", "April", "May", "June",
                                    "July", "August", "September", "October", "November", "December"};
    int solds[ YEAR ][ PERIOD ]{};
    int sum, sumAll = 0;

    for( int j = 0; j < PERIOD; j++ )
    {
        for ( int i = 0; i < YEAR; i++ )
        {
            cout << "year: " << j + 1 << ". enter solds in " << MONTHS[ i ] << ": ";
            cin >> solds[ i ][ j ];
        }
    }

    for( int j = 0; j < PERIOD; j++ )
    {
        sum = 0;
        for ( int i = 0; i < YEAR; i++ )
        {
            sum += solds[ i ][ j ];
        }
        cout << "In year number: " << j + 1 << " we sold: " << sum << " books.\n";
        sumAll += sum;
    }

    cout << "Over the entire time period we sold: " << sumAll << endl;

    return 0;
}
