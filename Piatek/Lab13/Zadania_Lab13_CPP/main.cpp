#include <iostream>
#include <ctime>
#include <vector>
#include <tuple>
#include <map>
#include "auxiliaryclass.h"

using namespace std;

void task01();
void task02();
void task03();
void task04();

tuple< int, int, int > task01tuple()
{
    int a = rand() %  201 - 100;
    int b = rand() %  201 - 100;
    int c = rand() %  201 - 100;

    return { a, b, c };
}

int main()
{

    srand( time ( NULL ) );
    task01();
    task02();
    task03();
    task04();

    return 0;
}

void task01()
{
    cout << "\n\ntask01\n\n";

    tuple<int, int, int> myTuple = task01tuple();
    AuxiliaryClass first( get<0>(myTuple), get<1>(myTuple), get<2>(myTuple) );
    myTuple = task01tuple();
    AuxiliaryClass second( get<0>(myTuple), get<1>(myTuple), get<2>(myTuple) );
    myTuple = task01tuple();
    AuxiliaryClass third( get<0>(myTuple), get<1>(myTuple), get<2>(myTuple) );
    myTuple = task01tuple();
    AuxiliaryClass fourth( get<0>(myTuple), get<1>(myTuple), get<2>(myTuple) );
    myTuple = task01tuple();
    AuxiliaryClass fifth( get<0>(myTuple), get<1>(myTuple), get<2>(myTuple) );

    cout << "first:\n";
    first.print();
    cout << "second:\n";
    second.print();
    cout << "third:\n";
    third.print();
    cout << "fourth:\n";
    fourth.print();
    cout << "fifth:\n";
    fifth.print();

}

void task02()
{
    cout << "\n\ntask02\n\n";

    vector< pair< int, AuxiliaryClass > > vec( 6 );

    vec.at( 0 ).first = 100;
    vec.at( 0 ).second = AuxiliaryClass( 2, 5, 99 );
    vec.at( 4 ).first = 50;
    vec.at( 4 ).second = AuxiliaryClass( 3, 1, -5 );
    vec.at( 5 ).first = 30;
    vec.at( 1 ).second = AuxiliaryClass( -4, -7, -10 );

    int index ;

    index = rand() % 6;
    vec.at( index ).second.abc_ = "al capone";

    index = rand() % 6;
    vec.at( index ).second.abc_ = "amir";

    index = rand() % 6;
    vec.at( index ).second.abc_ = "zjzj";


    for( auto& it : vec )
    {
        cout << "key:" << it.first << "    value:";
        it.second.print();
        cout << endl;
    }

}

void task03()
{
    cout << "\n\ntask03\n\n";

    map< AuxiliaryClass, string, comparator> myMap;
    myMap.emplace( AuxiliaryClass( 1, 5, 2 ), "zzz" );
    myMap.emplace( AuxiliaryClass( 3, 3, 4 ), "uff" );
    myMap.emplace( AuxiliaryClass( 99, 0, 2 ), "CARAMBA");
    myMap.emplace( AuxiliaryClass( 3, 3, 2 ), "CcooA");
    myMap.emplace( AuxiliaryClass( 2, 2, 2 ), "CcooA");
    myMap.emplace( AuxiliaryClass( 3, 3, 3 ), "kkkke");
    myMap.emplace( AuxiliaryClass(35, 14, 12), "pair");
    myMap.emplace( AuxiliaryClass(35, 56, 12), "pairMaRot");
    myMap.find( {3, 0, 6} )->second = "RATATUi";

    auto it = myMap.begin();
    advance( it, 3);
    it->second = "dog and clara";
    myMap.erase( ++it );
    myMap.erase( {3,3,4} );


    for( auto& it : myMap )
    {
        cout << "----------\n";
        it.first.print();
        cout << it.second << endl;
        cout << "----------\n";
    }


}

void task04()
{
    cout << "\n\ntask04\n\n";

    multimap< AuxiliaryClass, string, comparator> myMultiMap;
    myMultiMap.emplace( AuxiliaryClass( 1, 5, 2 ), "zzz" );
    myMultiMap.emplace( AuxiliaryClass( 3, 3, 4 ), "uff" );
    myMultiMap.emplace( AuxiliaryClass( 99, 0, 2 ), "CARAMBA");
    myMultiMap.emplace( AuxiliaryClass( 3, 3, 2 ), "CcooA");
    myMultiMap.emplace( AuxiliaryClass( 2, 2, 2 ), "CcooA");
    myMultiMap.emplace( AuxiliaryClass( 3, 3, 3 ), "kkkke");
    myMultiMap.emplace( AuxiliaryClass(35, 14, 12), "pair");
    myMultiMap.emplace( AuxiliaryClass(35, 56, 12), "pairMaRot");
    myMultiMap.emplace( AuxiliaryClass(35, 14, 12), "pair");
    myMultiMap.emplace( AuxiliaryClass(35, 56, 12), "pairMaRot");
    myMultiMap.find( {3, 0, 6} )->second = "RATATUi";

    auto it = myMultiMap.begin();
    advance( it, 3);
    it->second = "dog and clara";
    myMultiMap.erase( ++it );
    myMultiMap.erase( {3,3,4} );


    for( auto& it : myMultiMap )
    {
        cout << "----------\n";
        it.first.print();
        cout << it.second << endl;
        cout << "----------\n";
    }

}
