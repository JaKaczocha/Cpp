#include <iostream>

using namespace std;

struct Bar
{
    string brand;
    double weigth;
    int cal;
};


int main()
{
    Bar* snacks = new Bar[ 3 ]{ {"Mi5lky Way", 3.2, 250}, {"Snickers", 2.9, 400}, {"KitKat", 4, 200} };

    cout << snacks[ 0 ].brand << " " << snacks[ 0 ].weigth << " " << (&snacks[ 0 ])->cal << endl;
    cout << snacks[ 1 ].brand << " " << snacks[ 1 ].weigth << " " << (&snacks[ 1 ])->cal << endl;
    cout << snacks[ 2 ].brand << " " << snacks[ 2 ].weigth << " " << (&snacks[ 2 ])->cal << endl;

    delete []snacks;
    snacks = NULL;

    return 0;
}
