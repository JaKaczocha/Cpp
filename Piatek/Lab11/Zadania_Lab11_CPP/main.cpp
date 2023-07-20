#include <iostream>
#include <stack>
#include <queue>

#include "triangle.h"

using namespace std;

void task02();
void task03();
void task04();

struct priority
{
    bool operator()( const Triangle &obj1, const Triangle &obj2)
    {
        return obj1.getField() > obj2.getField();
    }
};

int main()
{
    task02();
    task03();
    task04();

    return 0;
}

void task02()
{
    cout << "\n\ntask02\n\n";

    stack <Triangle> stack;
    stack.push( { 1, 3, 2 });
    stack.top().print();
    stack.push( { 1, 2, 2 });
    stack.top().print();
    stack.emplace( Triangle( 5, 3, 3) );
    stack.top().print();
    stack.emplace( Triangle( 10, 10, 10 ) );
    stack.top().print();
    stack.pop();
    cout << "stack size = " << stack.size() << endl;
    cout << "is stack empty? " << stack.empty() << endl;
    stack.top().print();

}

void task03()
{
    cout << "\n\ntask03\n\n";

    queue <Triangle> queue;
    queue.push( {1, 3, 2.0});
    queue.front().print();
    queue.push( { 7.5, 5.0, 8.3});
    queue.back().print();
    queue.emplace( Triangle( 4.3, 2.6, 3 ) );
    queue.emplace( Triangle(3.7, 2.0, 3 ) );

    while( !queue.empty() )
    {
        cout << "\nqueue size: " << queue.size() << endl;
        queue.pop();
        queue.front().print();
    }
}

void task04()
{
    cout << "\n\ntask04\n\n";

    priority_queue <Triangle, vector<Triangle>, priority> priorityQ;

    priorityQ.emplace( Triangle{ 3, 4, 5 });
    priorityQ.emplace( Triangle{ 4, 4, 4 });
    priorityQ.emplace( Triangle{ 10, 6, 5 });
    priorityQ.emplace( Triangle{ 7.2, 5.5, 5 });
    priorityQ.push( { 5.2, 20.6, 24 } );
    priorityQ.push( { 2, 22.6, 29 } );
    while( !priorityQ.empty() )
    {
        Triangle obj = priorityQ.top();
        cout << "\npriorityQueue size: " << priorityQ.size() << endl;
        obj.print();
        priorityQ.pop();
    }
}
