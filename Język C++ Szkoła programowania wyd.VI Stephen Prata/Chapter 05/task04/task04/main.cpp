#include <iostream>

using namespace std;

int main()
{
    double profitCleo = 0.0, profitDafne = 0.0, inputCleo, inputDafne;

    cout << "enter Cleo input: ";
    cin >> inputCleo;
    cout << "enter Dafne input: ";
    cin >> inputDafne;

    int i = 0;
    while ( profitCleo >= profitDafne )
    {
        i++;
        profitCleo += inputCleo * 0.10;

        profitDafne += ( inputDafne + profitDafne ) * 0.05;
        cout << i << ". Cleo profit: " << profitCleo << "\t\tDafne profit: " << profitDafne << endl;
    }





    return 0;
}
