#include <iostream>

using namespace std;

int main()
{
    int years;
    cout << "state your age: " << endl;
    cin >> years;
    int month = years * 12;
    cout << "you have been alive for " << month << " months.\n";
    return 0;
}
