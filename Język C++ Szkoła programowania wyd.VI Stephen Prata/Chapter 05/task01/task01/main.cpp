#include <iostream>

using namespace std;

int main()
{
    int min, max, sum = 0;
    cout << "enter integer number: ";
    cin >> min;
    cout << "enter bigger than before integer number: ";
    cin >> max;

    for ( int i = min; i <= max; i++ )
    {
        sum += i;
    }

    cout << "sum digits between this numbers: " << sum << endl;


    return 0;
}
