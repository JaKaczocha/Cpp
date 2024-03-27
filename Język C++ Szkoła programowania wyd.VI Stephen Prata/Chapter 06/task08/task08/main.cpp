#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

int main()
{

    ifstream file("myFILE33.txt");
    char ch;
    int numberOfChar = 0;





    if( !file.is_open() )
    {
        cout << "mybad";
        exit(EXIT_FAILURE);
    }

    while( file.good() )
    {
        file >> ch;
        numberOfChar++;
    }
    cout << "char count = " << numberOfChar << endl;

    file.close();

    return 0;
}
