#include <iostream>

using namespace std;

void display( int hours, int minutes);

int main()
{
    int hours, minutes;
    cout << "enter hours: ";
    cin >> hours;
    cout << "enter minutes: ";
    cin >> minutes;

    display( hours, minutes);

    return 0;
}

void display( int hours, int minutes )
{
    cout << "Time: " << hours << ':' << minutes << endl;
}
