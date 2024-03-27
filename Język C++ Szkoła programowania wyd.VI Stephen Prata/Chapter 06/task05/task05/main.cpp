#include <iostream>

using namespace std;

int main()
{
    int income, tax;
    cout << "state your income: ";

    while( cin >> income && income >= 0 )
    {
        tax = 0;
        if( income <= 5000)
        {

        }
        else if ( income <= 15000 )
        {
            income -= 5000;
            tax += income / 10;
        }
        else if ( income <= 35000 )
        {
            income -= 5000;
            tax += income / 10;
            income -= 10000;
            tax += income / 20;
        }
        else if ( income > 35000)
        {
            income -= 5000;
            tax += income / 10;
            income -= 10000;
            tax += income / 20;
            income -= 20000;
            tax += income / 20;
        }
        cout << "tax = " << tax << endl << endl;
        cout << "state your income: ";
    }

    cout << "\n!!!ERROR!!!\n";
    return 0;
}
