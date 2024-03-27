#include <iostream>

using namespace std;

int main()
{
    const double hoursInDay = 1 / 24.0, minutesInHour = 1 / 60.0, secondsInMinute = 1 / 60.0;
    long long seconds, minutes, hours, days;
    cout << "enter time in seconds: ";
    cin >> seconds;

    cout << seconds << " seconds = ";

    days = int( seconds * secondsInMinute * minutesInHour * hoursInDay );
    seconds -= days / hoursInDay / minutesInHour / secondsInMinute;


    hours = int( seconds * secondsInMinute * minutesInHour );
    seconds -= hours / minutesInHour / secondsInMinute;

    minutes = int( seconds * secondsInMinute );
    seconds -= minutes / secondsInMinute;

    cout << days << " days, " << hours << " hours, " << minutes << " minutes, " << seconds << "seconds." << endl;


    return 0;
}
