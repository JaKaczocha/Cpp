#include <iostream>

using namespace std;

int main()
{
    const double cmToCal = 2.54;
    double heightCm, heightInch;
    int heightFeet;
    cout << "enter your height in cm: ";
    cin >> heightCm;

    heightInch = heightCm / cmToCal;


    heightFeet = (int)(heightInch / 12);
    heightInch = heightInch - 12 * heightFeet;


    cout << "you are " << heightFeet <<'\'' << (int)heightInch << '\"' << " tall." << endl;

    return 0;
}
