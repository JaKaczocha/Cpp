#include <iostream>

using namespace std;

int main()
{
    const double inchToMeter = 0.0254, feetToInch = 12, poundToKilogram = 2.2;

    int feet, inch;
    double pound, meter, kilogram, bmi;
    cout << "enter your height in feet and inch\n";
    cout << "feets: ";
    cin >> feet;
    cout << "inches: ";
    cin >> inch;
    cout << "enter your weight in pound: ";
    cin >> pound;

    inch += feet * feetToInch;

    meter = inch * inchToMeter;

    kilogram = pound / poundToKilogram;

    bmi = kilogram / ( meter * meter );

    cout << "your bmi = " << bmi << endl;

    return 0;
}
