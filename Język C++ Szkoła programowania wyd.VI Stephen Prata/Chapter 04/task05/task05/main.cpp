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
    Bar snack{ "Mocha Munch", 2.3, 350 };

    cout << snack.brand << " " << snack.weigth << " " << snack.cal << endl;

    return 0;
}
