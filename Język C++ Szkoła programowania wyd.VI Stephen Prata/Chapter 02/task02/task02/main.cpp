#include <iostream>

using namespace std;

int main()
{

    cout << "enter length in nautical mile: ";
    int mileLength, meterLength;
    cin >> mileLength;
    meterLength = mileLength * 1852;
    cout << "length in meters: " << meterLength << endl;

    return 0;
}
