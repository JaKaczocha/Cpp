#include <iostream>
#include <string>
#include <classtemplate.h>

using namespace std;

void task01();
void task02();
void task03();
void task04();

template < typename T >
void task01Average( T a, T b, T c)
{

    cout << typeid ( T ).name() << " average = " << (T)(( a + b + c ) / (T) 3.0) << endl;
}

template < typename T1, typename T2 >
void task02Compare( T1 first, T2 second )
{
    if( typeid ( T1 )  == typeid( T2 ) )
    {
        cout << "Parameters are the same " << "( " << typeid( first ).name() <<
                ", " << typeid ( second ).name() << " )\n";
    }
    else
    {
        cout << "Parameters are different " << "( " << typeid( first ).name() <<
                ", " << typeid ( second ).name() << " )\n";
    }
}
void task04Malloc(int* array, int size );

int main()
{
    task01();
    task02();
    task03();
    task04();

    return 0;
}

void task01()
{
    cout << "\n\ntask01\n\n";

    task01Average( 1, 1, 2 );
    task01Average( 1.0, 1.5, 2.5 );
    task01Average( (long long)6, (long long)1, (long long)2 );
    task01Average( (float)1.3, (float)1.5, (float)2.5 );
    task01Average( 'c', 'A', 'Z' );
    task01Average( (short)1, (short)1, (short)6 );
}

void task02()
{
    cout << "\n\ntask02\n\n";

    task02Compare( 2, 2.0 );
    task02Compare( 1, ( bool )0 );
    task02Compare( ( bool )0, ( bool ) 2.0 );
    task02Compare( ( float )2.333, 2.0 );
    task02Compare( (long long )2, 2213456666665 );
    task02Compare( '2', ( char )2213456666665 );
    string abc = "324 sd g";
    task02Compare( abc, ( string )"2213456666665" );
    task02Compare( ( short )2.333,(short) 2.0 );
}

void task03()
{
    cout << "\n\ntask03\n\n";
    int array1[ 10 ] = { 1, 2, 3, 5, 4, 10, 21, -2, 2, 4 };
    float array2[ 10 ] = { 1.2, 2.0, 3.1, 5.0, 4.0, 10.3, 21.4, -2.2, 2.1, 4.1 };
    char array3[ 10 ] = { 'a', 'f', 'Y', 'O', '|', '-', '~', '0', 'L', '+'};

    ClassTemplate<int>Class1( array1 );
    ClassTemplate<float>Class2( array2 );
    ClassTemplate<char>Class3( array3 );

    Class1.calculate();
    Class2.calculate();
    Class3.calculate();
    cout <<"Class1:\n";
    cout << "min = " << Class1.min << "    max = " << Class1.max << endl;
    cout <<"Class2:\n";
    cout << "min = " << Class2.min << "    max = " << Class2.max << endl;
    cout <<"Class3:\n";
    cout << "min = " << Class3.min << "    max = " << Class3.max << endl;
}
void task04()
{
    cout << "\n\ntask04\n\n";

    int *array, size;
    array = nullptr;

    cout << "enter array size: ";
    cin >> size;

    try
    {
        task04Malloc( array, size );
    }
    catch ( string abc)
    {
        cout << abc << endl;
    }
    catch ( int number )
    {
        cout << "you crossed max size by: " << number << endl ;
    }
    catch(...)
    {
        cout << "something has gone wrong.";
    }

    delete [] array;
    array = nullptr;
}
void task04Malloc(int* array, int size )
{
    if( size < 0 )
    {
        throw "size is negative!";
    }
    else if( size > 10000000 )
    {
        throw size - 10000000;
    }
    else if( size == 0 )
    {
        throw false;
    }

    array = new int[ size ];
}
