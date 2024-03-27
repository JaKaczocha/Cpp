#include <iostream>
#include <string>


int main()
{
    using namespace std;
    string name;
    cout << "Please enter your name: ";
    cin >> name;

    string lastName;
    cout << "please enter your last name: ";
    cin >> lastName;


    string cppString;

    cppString.append( lastName );
    cppString.append(", ");
    cppString.append( name );

    cout << "in one caption: " << cppString << endl;

    return 0;
}
