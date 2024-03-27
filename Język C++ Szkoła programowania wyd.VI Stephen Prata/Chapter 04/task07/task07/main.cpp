#include <iostream>
#include <string>

using namespace std;

struct Pizza
{
    string company;
    float diameter;
    float weigth;
};

int main()
{
    Pizza myPizza;
    cout << "pizza made by: ";
    getline( cin, myPizza.company );

    cout << "pizza weigth: ";
    cin >> myPizza.weigth;

    cout << "pizza diameter: ";
    cin >> (*(&myPizza)).diameter;

    cout << endl << endl;
    cout << "pizza company: " << myPizza.company << endl;
    cout << "pizza weigth: " << myPizza.weigth << endl;
    cout << "pizza diameter: " << myPizza.diameter << endl;

    return 0;
}
