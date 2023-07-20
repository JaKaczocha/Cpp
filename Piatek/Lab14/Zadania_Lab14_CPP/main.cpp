#include <iostream>
#include "auxiliaryclass.h"
#include <set>

using namespace std;

void task01();
void task02();
void task03();
void task04();

void task01SetString( string abc, AuxiliaryClass &ThisClass );
void task01CompareString( string abc, AuxiliaryClass &ThisClass );
void task01AddString( string abc, AuxiliaryClass &ThisClass );
void task01Operations( string abc, AuxiliaryClass &ThisClass, void(*operation)( string abc, AuxiliaryClass& ThisClass ) );


void task02Sum( AuxiliaryClass& ThisClass  );
void task02Product( AuxiliaryClass& ThisClass );
void task02Min( AuxiliaryClass& ThisClass );
void task02Max( AuxiliaryClass& ThisClass );
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

    AuxiliaryClass first( 2, 4, 6 );
    AuxiliaryClass second;
    AuxiliaryClass third( 1, 5, 6 );

    first.abc_ = "mikel! ";
    second.abc_ = "u like me?";
    third.abc_ = " mike!";
    task01Operations( "wanna play?", first, task01SetString );
    task01Operations( "u like me?", second, task01CompareString );
    task01Operations( " go with me", third, task01AddString );

    first.print();
    second.print();
    third.print();


}
void task01SetString( string abc, AuxiliaryClass &ThisClass )
{
    ThisClass.abc_ = abc;
}
void task01CompareString( string abc, AuxiliaryClass &ThisClass )
{
    if( ThisClass.abc_ == abc )
    {
        ThisClass.abc_ = "texts the same";
    }
    else
    {
        ThisClass.abc_ = "texts quite different";
    }
}
void task01AddString( string abc, AuxiliaryClass &ThisClass )
{
    ThisClass.abc_ += abc;
}
void task01Operations( string abc, AuxiliaryClass &ThisClass, void(*operation)( string abc, AuxiliaryClass& ThisClass) )
{
    operation( abc, ThisClass );
}

void task02()
{
    cout << "\n\ntask02\n\n";
    typedef void( *operations )( AuxiliaryClass& );

    operations operationsArray[ 4 ] = { task02Sum, task02Product, task02Min, task02Max };
    AuxiliaryClass classArray[ 4 ] = { { 3, 5, 1 }, { 1, 5,7 }, { 1, 9, 3 }, { 21, 99, 20} };
    for( int i = 0; i < 4; i++ )
    {
        operationsArray[ i ]( classArray[ i ]);

    }
    for( int i = 0; i < 4; i++ )
    {
        classArray[ i ].print();
    }


}
void task02Sum( AuxiliaryClass& ThisClass  )
{
    ThisClass.average_ = ThisClass.a_ + ThisClass.b_ + ThisClass.c_;
}

void task02Product( AuxiliaryClass& ThisClass )
{
    ThisClass.average_ = ThisClass.a_ * ThisClass.b_ * ThisClass.c_;
}
void task02Min( AuxiliaryClass& ThisClass )
{
    int a = ThisClass.a_, b = ThisClass.b_, c = ThisClass.c_;
    if( a < b && a < c )
    {
        ThisClass.average_ = a;
    }
    else if( b < a && b < c)
    {
        ThisClass.average_ = b;
    }
    else
    {
        ThisClass.average_ = c;
    }

}
void task02Max( AuxiliaryClass& ThisClass )
{
    int a = ThisClass.a_, b = ThisClass.b_, c = ThisClass.c_;
    if( a > b && a > c )
    {
        ThisClass.average_ = a;
    }
    else if( b > a && b > c)
    {
        ThisClass.average_ = b;
    }
    else
    {
        ThisClass.average_ = c;
    }
}

void task03()
{
    cout << "\n\ntask03\n\n";

    AuxiliaryClass first;
    AuxiliaryClass second;
    AuxiliaryClass third;

    first.abc_ = "olaf";
    second.abc_ = "muua";
    third.abc_ = "no hands";

    cout << endl;
    cout << []( AuxiliaryClass first, AuxiliaryClass second )
    { return first.abc_ > second.abc_ ?  "first - " :  "       ";}( first, second ) << first.abc_ << endl;
    cout << []( AuxiliaryClass first, AuxiliaryClass second )
    { return first.abc_ < second.abc_ ?  "first - " :  "       ";}( first, second ) << second.abc_ << endl;

    cout << endl;
    cout << []( AuxiliaryClass first, AuxiliaryClass second )
    { return first.abc_ > second.abc_ ?  "first - " :  "       ";}( first, third ) << first.abc_ << endl;
    cout << []( AuxiliaryClass first, AuxiliaryClass second )
    { return first.abc_ < second.abc_ ?  "first - " :  "       ";}( first, third ) << third.abc_ << endl;

    cout << endl;
    cout << []( AuxiliaryClass first, AuxiliaryClass second )
    { return first.abc_ > second.abc_ ?  "first - " :  "       ";}( second, third ) << second.abc_ << endl;
    cout << []( AuxiliaryClass first, AuxiliaryClass second )
    { return first.abc_ < second.abc_ ?  "first - " :  "       ";}( second, third ) << third.abc_ << endl;
}

void task04()
{
    cout << "\n\ntask04\n\n";

    multiset< AuxiliaryClass, bool(*)(AuxiliaryClass, AuxiliaryClass )>myMultiSet {
        [] (AuxiliaryClass first, AuxiliaryClass second)
    { return first.getAverage() < second.getAverage(); } };

    myMultiSet.emplace( AuxiliaryClass( 1, 5, 2 ) );
    myMultiSet.emplace( AuxiliaryClass( 1, 1, 2 ) );
    myMultiSet.insert( { 44, -22, -40 } );
    myMultiSet.insert( { 99, 2, -120 } );
    myMultiSet.emplace( AuxiliaryClass( 5, 6, 10 ) );

    for( auto& it : myMultiSet )
    {
        it.print();
    }

}
