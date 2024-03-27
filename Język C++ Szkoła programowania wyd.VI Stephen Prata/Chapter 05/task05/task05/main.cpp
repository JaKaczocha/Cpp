#include <iostream>



int main()
{
    using std::cin;
    using std::cout;
    using std::string;

    const int YEAR{12};
    const string MONTHS[ YEAR ] = { "January", "February", "March", "April", "May", "June",
                                    "July", "August", "September", "October", "November", "December"};
    int solds[ YEAR ]{};
    int sum = 0;

    for ( int i = 0; i < YEAR; i++ )
    {
        cout << "enter solds in " << MONTHS[ i ] << " ";
        cin >> solds[ i ];
    }

    for ( int i = 0; i < YEAR; i++ )
    {
        sum += solds[ i ];
    }

    cout << "In this year we sold: " << sum << " books.\n";
    return 0;
}
