#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char name[ 20 ];
    cout << "Please enter your name: ";
    cin.getline(name, 20);

    char lastName[ 20 ];
    cout << "please enter your last name: ";
    cin.getline(lastName, 20);



    char cString[ 20 ];
    strcpy( cString,lastName);
    strcat( cString, ", ");
    strcat( cString, name);

    cout << "in one caption: ";
    puts(cString);


    return 0;
}
