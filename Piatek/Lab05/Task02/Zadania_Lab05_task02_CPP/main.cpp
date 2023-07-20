#include <iostream>

#include "point.h"

using namespace std;

int main()
{
    float width, height, x0, y0, x, y;
    cout << "box: \n";
    cout << "enter x0: ";
    cin >> x0;
    cout << "enter y0: ";
    cin >> y0;
    cout << "enter width: ";
    cin >> width;
    cout << "enter height: ";
    cin >> height;

    cout << "point: \n";
    cout << "enter x: ";
    cin >> x;
    cout << "enter y: ";
    cin >> y;
    Rectangle box( x0, y0, width, height);
    Point point( x, y );
    cout << "is point in box?" << ( point.Collision( box )  ? " TRUE\n" : "FALSE\n" );

    return 0;
}
