#include <iostream>

using namespace std;

void convAstroUnit( double lightYears);

int main()
{
    double length;
    cout << "enter length in light years: ";
    cin >> length;
    convAstroUnit( length );
    return 0;
}

void convAstroUnit( double lightYears)
{
    double astroUnit = 63240.0 * lightYears;

    cout << lightYears << " light years = " << astroUnit << " astro unit\n";
}
