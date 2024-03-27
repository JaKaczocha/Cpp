#include <iostream>

using namespace std;

int main()
{
    double fuel, length, restOfFuel, burns, restOfLength;
    cout << "enter route length in kilometers: ";
    cin >> length;
    cout << "enter the amount of fuel consumed in liters: ";
    cin >> fuel;
    cout << "enter how much fuel is left: ";
    cin >> restOfFuel;

    burns = ( fuel / length ) * 100;
    cout << "vehicle burns: " << burns <<" l/100km." << endl;

    restOfLength = ( restOfFuel / burns ) * 100;

    cout << "fuel left for " << restOfLength <<" kilometers." << endl;

    return 0;
}
