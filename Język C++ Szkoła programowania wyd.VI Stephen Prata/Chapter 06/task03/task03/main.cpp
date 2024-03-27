#include <iostream>

using namespace std;

int main()
{
    cout << "r) herbivoreca\tp) pianist" << endl;
    cout << "d) tree       \tg) game" << endl;

    cout <<"enter the letter: ";
    char ch;

    while( cin >> ch && ch != 'r' && ch != 'p' && ch != 'd' && ch != 'g' )
    {
        cout << "enter the letter: ";
    }

    switch ( ch )
    {
    case 'r':
        cout << "giraffe is herbiovera \n";
        break;
    case 'p':
        cout << "polish had the best pianist ever\n";
        break;
    case 'd':
        cout << "oak can be very pretty\n";
        break;
    case 'g':
        cout << "lol is a game\n";
        break;

    }

    return 0;
}
