#include <iostream>



int main()
{
    using std::cout;
    using std::cin;
    using std::endl;

    int number, sum = 0;

    do
    {
        cout << "enter number: ";
        cin >> number;
        if( cin.fail() )
        {
            cin.clear();
            continue;
        }
        sum += number;
        cout << "numbers sum = " << sum << endl;
    } while ( number != 0);
    return 0;
}
