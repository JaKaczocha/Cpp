#include <iostream>

using namespace std;

int main()
{
    double burns, kilometersPerLiter, milesPerGalon;
    cout << "how many liters of gasoline vehicle burns per 100 kilometers: ";
    cin >> burns;


    kilometersPerLiter = ( 100 / burns );

    cout << "vehicle can road " << kilometersPerLiter << " km / liter\n";

    milesPerGalon = ( kilometersPerLiter * 3.875 ) * 0.6214;
    cout << "vehicle can road " << milesPerGalon << "miles / galon.\n";
    return 0;
}
