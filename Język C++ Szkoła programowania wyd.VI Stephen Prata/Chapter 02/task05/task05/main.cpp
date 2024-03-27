#include <iostream>

using namespace std;

double c_to_fahr( double celcius );
int main()
{
    double degree;
    cout << "enter temperature in celcius degree: " << endl;
    cin >> degree;

    cout << degree << " Celcius degree = ";
    degree = c_to_fahr( degree );
    cout << degree << " Farhrenheit degree.\n";

    return 0;
}


double c_to_fahr( double celcius )
{
    return celcius * 1.8 + 32;
}
