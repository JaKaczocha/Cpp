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
    Pizza* myPizza = new Pizza;

    cout << "pizza diameter: ";
    cin >> (*myPizza).diameter;
    cin.ignore();
    cout << "pizza made by: ";
    getline( cin, myPizza->company );

    cout << "pizza weigth: ";
    cin >> myPizza->weigth;



    cout << endl << endl;
    cout << "pizza company: " << (*myPizza).company << endl;
    cout << "pizza weigth: " << myPizza->weigth << endl;
    cout << "pizza diameter: " << myPizza->diameter << endl;

    myPizza = NULL;
    delete myPizza;

    return 0;
}
