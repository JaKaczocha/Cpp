#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <cmath>

using namespace std;

void task01();
void task02();

int main()
{
    task01();
    task02();

    return 0;
}

void task01()
{
    cout << "\n\ntask01\n\n";

    char ch;
    size_t D;
    float Z1, Z2;
    string str;

    cout << "enter single char: ";
    cin >> ch;
    cout << "enter size of vector: ";
    cin >> D;
    cout << "enter float to primed: ";
    cin >> Z1;
    cout << "enter float to increase from the cube: ";
    cin >> Z2;

    int array[ 15 ];
    for( int i = 0; i < 15; i++ )
    {
        array[ i ] = D - i * 3;
    }
    vector < int > vec( D );

    for( unsigned long long i = 0; i < vec.size(); i++ )
    {
        vec[ i ] = 100 + i;
    }
    cout << "enter quote: ";
    cin.ignore();
    getline( cin, str );


    fstream file;

    file.open( "Zapis_testowy.txt", ios::out );
    if( file.good() != true )
    {
        cout << "error";
        file.close();
        return;
    }
    file << sqrt( Z1) << endl;
    file << pow( Z2, 3) << endl;
    file << ch << endl;
    for( int i = 0; i < 15; i++ )
    {
        file << array[ i ] << ' ';
    }
    file << endl;
    file << D << endl;
    for( int i = 0; i < D; i++ )
    {
        file << vec[ i ] << ' ';
    }
    file << endl;
    file << str << endl;

    file.close();


}

void task02()
{
    cout << "\n\ntask02\n\n";


    fstream file;
    char ch;
    size_t D;
    float Z1, Z2;
    string str;

    file.open( "Zapis_testowy.txt", ios::in );

    if( file.good() != true )
    {
        cout << "error";
        file.close();
        return;
    }
    file >> Z1;
    cout << "Z1 = " << Z1 << endl;
    file >> Z2;
    cout << "Z2 = " << Z2 << endl;
    file >> ch;
    cout << "10 x char: ";
    for( int i = 0; i < 10; i++ )
    {
        cout << ch;
    }
    cout << endl;
    int array[ 15 ];
    for( int i = 0; i < 15; i++ )
    {
        file >> array[ i ];
        cout << array[ i ] << ' ';
    }
    cout << endl;
    file >> D;
    vector < int > vec( D );
    for( int i = 0; i < D; i++ )
    {
        file >> vec[ i ];
        cout << vec[ i ] << ' ';
    }
    cout << endl;

    cout << "string: ";
    while( getline(file, str) )
    {
      cout << str;
    }
    cout << endl;

}
