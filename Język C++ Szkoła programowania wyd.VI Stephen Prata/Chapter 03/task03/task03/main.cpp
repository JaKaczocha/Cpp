#include <iostream>

using namespace std;

int main()
{
    const double minToDegree = 1 / 60.0, secToMinute = 1/ 60.0;

    double degrees, minutes, seconds;
    cout << "enter degrees: ";
    cin >> degrees;
    cout << "enter minutes: ";
    cin >> minutes;
    cout << "enter seconds: ";
    cin >> seconds;

    cout << degrees << " degree, " << minutes << " minute, " << seconds << " second = ";

    degrees += (minutes + ( seconds * secToMinute ) ) * minToDegree;

    cout << degrees << " degree\n";


    return 0;
}
