#include <iostream>


int main()
{
    using namespace std;

    cout << "What is your name and middle name? ";
    char name[ 30 ];
    cin.getline(name, 30);

    cout << "What's your last name? ";
    string lastName;
    cin >> lastName;

    cout <<"What grade do you deserve? ";
    short grade;
    cin >> grade;

    cout << "How old are you? ";
    int age;
    cin >> age;

    cout << endl << endl;

    cout << "last name: " << lastName << ", " << name << endl;
    cout << "grade: " << --grade << endl;
    cout << "age: " << age<< endl;

    return 0;
}
