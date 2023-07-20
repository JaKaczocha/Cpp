#include <iostream>
#include <vector>


using namespace std;

void task01();
void task02();

void task01Scan( vector<float> &vec);
void task01Print( const vector<float> &vec);
int main()
{
    task01();
    task02();

    return 0;
}

void task01()
{
    cout << "\n\ntask01\n\n";

    vector < float > vec;

    task01Scan( vec );
    task01Print( vec );
    vec.pop_back();
    vec.pop_back();

    vec[ 1 ] = 55.66;
    cout << endl << endl << "size = "<< vec.size();
    task01Print( vec );

}
void task01Scan( vector<float> &vec)
{
    float number;

    for( int i = 0; i < 4; i++ )
    {
        cout << "enter float number: ";
        cin >> number;
        vec.push_back( number );
    }
}
void task01Print( const vector<float> &vec)
{
    cout << "\nvector: ";
    for( size_t i = 0; i < vec.size(); i++ )
    {
        cout << vec[ i ] << ' ';
    }
}
void task02()
{
    cout << "\n\ntask02\n\n";

    int size;
    cout << "enter size of vector: ";
    cin >> size;

    vector < float > vec( size );

    cout << "enter " << size <<" numbers: ";
    for( int i = 0; i < size; i++)
    {
        cin >> vec[ i ];
    }
    task01Print( vec );

    float number;
    cout << "enter number to insert: ";
    cin >> number;
    vec.insert( vec.end() - 2, number );
    cout << "enter number to insert: ";
    cin >> number;
    vec.insert( vec.begin() + 2, number );
    cout << "enter number to insert: ";
    cin >> number;
    vec.insert( vec.begin() + (int)( vec.size() / 2 ) , number );

    int index;
    cout << "enter index to remove: ";
    cin >> index;
    vec.erase( vec.begin() + index );

    float min = *vec.begin();
    float max = *vec.begin();

    for( size_t i = 1; i < vec.size(); i++)
    {
        if( vec[ i ] < min )
        {
            min = vec[ i ];
        }
        if( vec[ i ] > max )
        {
            max = vec[ i ];
        }
    }
    cout << "min in vector: " << min << endl;
    cout << "max in vector: " << max << endl;

    cout << "enter new size: ";
    cin >> size;
    vec.resize( size );

    task01Print( vec );
}
