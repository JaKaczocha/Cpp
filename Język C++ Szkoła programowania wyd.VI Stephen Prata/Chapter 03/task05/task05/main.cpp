#include <iostream>

using namespace std;

int main()
{
    long long population, groupPopulation;
    double percent;
    cout << "enter world population: ";
    cin >> population;
    cout << "enter population of the chosen group: ";
    cin >> groupPopulation;

    percent = ( groupPopulation * 100.0 ) / population;
    cout << "population of this group represent " << percent <<"% of global population" << endl;


    return 0;
}
