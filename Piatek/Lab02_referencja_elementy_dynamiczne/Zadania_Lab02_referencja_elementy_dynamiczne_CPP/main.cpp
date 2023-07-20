#include <iostream>

using namespace std;

void task01();
void task02();
void task03();
//
//FINISHED
//
void task01Set(int &number, string &str, int array[]);
void task01Print(const int number, const string &str, const int array[]);

struct sTask03
{
    int a, b, sum, product;
    float average;
};
void task03Scan( struct sTask03 &str );
void task03Calc( struct sTask03 &str );
void task03Print( const struct sTask03 &str );

int main()
{
    task01();
    task02();
    task03();

    return 0;
}

void task01()
{
    cout << "\n\ntask01\n\n";

    const int size = 12;
    int number;
    string str;
    int array[ size ];

    task01Set( number, str, array);
    task01Print( number, str, array);

}
void task01Set(int &number, string &str, int array[])
{
    cout << "enter number: ";
    cin >> number;
    cin.ignore();
    cout << "enter string: ";
    getline( cin, str );
    for( int i = 0; i < 12; i++)
    {
        cout << i+1 <<". enter number for array: ";
        cin >> array[ i ];
    }

}
void task01Print(const int number, const string &str, const int array[])
{
    cout << "number: " << number << endl;
    cout << "string: " << str << endl;
    cout << "array: ";
    for( int i = 0; i < 12; i++ )
    {
        cout << array[ i ] <<" ";
    }
    cout << endl;
}
void task02()
{
    cout << "\n\ntask02\n\n";

    int size;
    cout << "enter array size: ";
    cin >> size;

    int *array;
    array = new int [ size ];

    for( int i = 0; i < size; i++)
    {
        array[ i ] = 10 + i * 5;
    }
    cout << "array: ";
    for( int i = 0; i < size; i++)
    {
        cout << array[ i ] << ' ';
    }
    cout << endl;

    int newSize, *newArray;
    cout << "enter array new size: ";
    cin >> newSize;

    newArray = new int [ newSize ];

    for( int i = 0; i < newSize; i++ )
    {
        if( i >= size )
        {
            newArray[ i ] = 0;
            continue;
        }
        else
        {
            newArray[ i ] = array[ i ];
        }

    }

    int *tmp;
    tmp = array;
    array = newArray;
    newArray = tmp;

    tmp = NULL;
    delete [] newArray;
    newArray = NULL;

    cout << "new array: ";
    for( int i = 0; i < newSize; i++)
    {
        cout << array[ i ] << ' ';
    }
    cout << endl;

    delete []  array;
    array = NULL;
}

void task03()
{
    cout << "\n\ntask03\n\n";

    struct sTask03 str;

    task03Scan( str );
    task03Calc( str );
    task03Print( str );


}
void task03Scan( struct sTask03 &str )
{
    cout << "enter A value: ";
    cin >> str.a;
    cout << "enter B value: ";
    cin >> str.b;
}
void task03Calc( sTask03 &str )
{
    str.sum = str.a + str.b;
    str.product = str.a * str.b;
    str.average = str.sum / 2.0;

}
void task03Print( const struct sTask03 &str )
{
    cout << "a = " << str.a << endl << "b = " << str.b << endl;
    cout << "sum = " << str.sum << endl << "product = " << str.product << endl;
    cout << "average = " << str.average << endl;
}
