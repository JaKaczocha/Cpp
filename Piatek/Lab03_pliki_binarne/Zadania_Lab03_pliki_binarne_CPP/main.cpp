#include <iostream>
#include <fstream>
#include <vector>
#include <string>

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

    const int sizeString = 8, sizeArray = 5;

    unsigned u;
    long long lli;
    short hi;
    char c;
    float f;
    double lf;
    char myString[ sizeString ];
    int array[ sizeArray ];

    cout << "enter unsigned: ";
    cin >> u;
    cout << "enter long long: ";
    cin >> lli;
    cout << "enter short: ";
    cin >> hi;
    cout << "enter char: ";
    cin >> c;
    cout << "enter float: ";
    cin >> f;
    cout << "enter double: ";
    cin >> lf;
    cout << "enter word( max 7 letters): ";
    cin.ignore();
    gets( myString );
    for( int i = 0; i < sizeArray; i++ )
    {
        cout << "enter int: ";
        cin >> array[ i ];
    }


    fstream file;
    file.open("plik_binarny.bin", ios::binary | ios::out );

    if( file.good() != true )
    {
        cout << "error!";
        file.close();
        return;
    }

    int vecSize;
    cout << "enter a size of the vector: ";
    cin >> vecSize;
    vector < int > vec ( vecSize );
    for( int i = 0; i < vec.size(); i++ )
    {
        vec[ i ] = i + 1;
    }
    vecSize = vec.size();
    string str;;
    cout << "enter quote: ";
    cin.ignore();
    getline( cin, str );
    str += '\0';
    int size = str.length();

    file.write( ( char* )&hi , sizeof( hi ) );
    file.write( ( char* )&f, sizeof( f ) );
    file.write( ( char* )&lli, sizeof( lli ) );
    file.write( ( char* )&lf, sizeof( lf ) );
    file.write( ( char* )&myString[ 0 ], sizeof( char ) * sizeString );
    file.write( ( char* )&u, sizeof( u ) );
    file.write( ( char* )&array[ 0 ], sizeof( int ) * sizeArray );
    file.write( &c, sizeof( char ) );
    file.write( ( char* )&vecSize, sizeof( vecSize ) );
    file.write( (char* )&vec[ 0 ], sizeof( int ) * vecSize );
    file.write( (char* )&size, sizeof( size ) );
    file.write( ( char* )&str[ 0 ], sizeof( char ) * size );


    file.close();
}
void task02()
{
    cout << "\n\ntask02\n\n";

    const int sizeString = 8, sizeArray = 5;

    unsigned u;
    long long lli;
    short hi;
    char c;
    float f;
    double lf;
    char myString[ sizeString ];
    int array[ sizeArray ];

    fstream file;
    file.open("plik_binarny.bin", ios::in | ios::binary);

    if( file.good() != true )
    {
        cout << "error";
        file.close();
        return;
    }

    file.read( ( char* )&hi, sizeof( hi ) );
    file.read( ( char* )&f, sizeof( f ) );
    file.read( ( char* )&lli, sizeof( lli ) );
    file.read( ( char* )&lf, sizeof( lf ) );
    file.read( ( char* )&myString[ 0 ], sizeof( char ) * sizeString );
    file.read( ( char* )&u, sizeof( u ) );
    file.read( ( char* )&array[ 0 ], sizeof( int ) * sizeArray );
    file.read( &c, sizeof( c ) );

    cout << "short: " << hi << endl;
    cout << "float: " << f << endl;
    cout << "long long: " << lli << endl;
    cout << "double: " << lf << endl;
    cout << "word: " << myString << endl;
    cout << "unsigned: " << u << endl;
    cout << "array: ";
    for( int i = 0; i < sizeArray; i++ )
    {
        cout << array[ i ] << ' ';
    }
    cout << endl;
    cout << "char: " << c << endl;

    int size;
    file.read( ( char* )&size, sizeof( size ) );

    vector < int > vec( size );
    file.read( ( char* )&vec[ 0 ], sizeof( int ) * size );
    cout << "vector: ";
    for( int i = 0; i < size; i++ )
    {
        cout << vec[ i ] << ' ';
    }
    cout << endl;

    file.read( ( char* )&size, sizeof( size ) );
    string str;
    str.resize( size );
    file.read( ( char* )&str[ 0 ], sizeof( char ) * size);
    cout << "quote: " << str << endl;


    file.close();
}
