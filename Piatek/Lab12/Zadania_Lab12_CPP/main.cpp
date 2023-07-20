#include <iostream>
#include <auxiliaryclass.h>
#include <array>
#include <list>
#include <set>

using namespace std;

void task01();
void task02();
void task03();
void task04();

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

    array < AuxiliaryClass, 7 > array { AuxiliaryClass(2, 4, 1), AuxiliaryClass( 3, 5, 10) };
    array[ 2 ] = AuxiliaryClass( 1, 3, 2 );
    array[ 3 ] = AuxiliaryClass( 3, 3, 2 );
    array[ 4 ] = { 3, 2, 0};
    array[ 5 ] = AuxiliaryClass( 9, 9, 1);
    array[ 6 ] = { 0, 0, 2 };

    array[ 4 ].abc_ = "ala has dog";
    array[ 2 ].abc_ = "tt ww qq";
    array[ 1 ].abc_ = "zz mirage";

    for( unsigned long long i = 0; i < array.size(); i++ )
    {
        cout << "\narray[ " << i << " ]: \n";
        array.at( i ).print();
    }

    for( auto *i = array.begin(); i != array.end(); i++ )
    {
        cout << "\n & =  " << i << " :\n";
        (*i).print();
    }

    for( auto& i : array )
    {
        cout << "array " << &i << ": " << endl;
        i.print();
    }

}

void task02()
{
    cout << "\n\ntask02\n\n";

    list< AuxiliaryClass > myList;

    myList.emplace_back( AuxiliaryClass(1, 2, 5 ) );
    myList.emplace_back( AuxiliaryClass(6, 2, 2 ) );
    myList.emplace_front( AuxiliaryClass(1, 2, 5 ) );
    myList.emplace_back( AuxiliaryClass(0, 20, 57 ) );
    myList.emplace_front( AuxiliaryClass(16, 22, 52 ) );

    list <AuxiliaryClass>:: iterator it = myList.begin();
    advance( it, 3 );
    myList.emplace( it, AuxiliaryClass( 0, 0 , 0 ) );
    myList.emplace_back( AuxiliaryClass(6, 2, 2 ) );
    myList.insert( it, { 600, 200, 200 } );
    it = myList.begin();
    advance( it, 1);
    myList.emplace( it, AuxiliaryClass( 99, 99, 99 ) );
    myList.emplace_front( 69, 69, 69 );
    it = myList.begin();
    *it = ( AuxiliaryClass( 4, 5, 1 ) );

    int i = 0;
    for( auto& it : myList )
    {
        cout << "\nelement number: " << i << endl;
        it.print();
        i++;
    }

}

void task03()
{
    cout << "\n\ntask03\n\n";

    set< AuxiliaryClass, comparator > mySet;

    mySet.emplace( AuxiliaryClass( 3, 4, 5 ) );
    mySet.emplace( AuxiliaryClass( 3, 40, 5 ) );
    mySet.emplace( AuxiliaryClass( 30, 4, 5 ) );
    mySet.emplace( AuxiliaryClass( 3, 0, 0 ) );
    mySet.emplace( AuxiliaryClass( 3, 5, 4 ) );
    mySet.insert( { 1, 1, 1 } );
    mySet.insert( { 0, 0, 77 } );
    mySet.insert( { 0, 0, 771 } );
    mySet.erase( { 0, 0 , 77 } );

    set< AuxiliaryClass >::iterator it = mySet.begin();
    advance( it, 2 );




    cout << "\n\nelement iterator 2:\n ";
    it->print();
    cout << endl << endl;

    int id = 0;
    for( set<AuxiliaryClass, comparator >::iterator it = mySet.begin(); it != mySet.end(); it++ )
    {
        cout << "\nid = " << id << ":\n";
        (*it).print();
        id++;
    }
    id = 0;
    for( const AuxiliaryClass& it : mySet)
    {
        cout << "\nid = " << id << ":\n";
        it.print();
        id++;
    }

}

void task04()
{
    cout << "\n\ntask04\n\n";

    multiset< AuxiliaryClass, comparator > myMultiSet;

    myMultiSet.emplace( AuxiliaryClass( 3, 4, 5 ) );
    myMultiSet.emplace( AuxiliaryClass( 3, 40, 5 ) );
    myMultiSet.emplace( AuxiliaryClass( 30, 4, 5 ) );
    myMultiSet.emplace( AuxiliaryClass( 3, 0, 0 ) );
    myMultiSet.emplace( AuxiliaryClass( 3, 5, 4 ) );
    myMultiSet.insert( { 1, 1, 1 } );
    myMultiSet.insert( { 0, 0, 77 } );
    myMultiSet.insert( { 0, 0, 771 } );
    myMultiSet.erase( { 0, 0 , 77 } );

    multiset< AuxiliaryClass >::iterator it = myMultiSet.begin();
    advance( it, 2 );

    cout << "\n\nelement iterator 2:\n ";
    it->print();
    cout << endl << endl;

    int id = 0;
    for( multiset<AuxiliaryClass, comparator >::iterator it = myMultiSet.begin(); it != myMultiSet.end(); it++ )
    {
        cout << "\nid = " << id << ":\n";
        (*it).print();
        id++;
    }
    id = 0;
    for( const AuxiliaryClass& it : myMultiSet)
    {
        cout << "\nid = " << id << ":\n";
        it.print();
        id++;
    }
}
