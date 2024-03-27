#include <iostream>
#include <array>
using namespace std;

int main()
{
    array < float, 3 > array1;

    cout << "enter first time for 100 meters: ";
    cin >> array1.at(0);
    cout << "enter second time for 100 meters: ";
    cin >> array1.at(1);
    cout << "enter third time for 100 meters: ";
    cin >> array1.at(2);

    cout << endl;
    cout << "first time: " << array1.at(0) << "  second time: " << array1.at(1) << "  third time: "
         << array1.at(2) << endl << "average time: " << (array1[ 0 ] + array1[ 1 ] + array1[ 2 ]) / 3 << endl;

    return 0;
}
