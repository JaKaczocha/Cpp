#include <iostream>
#include "Queue.hpp"


int main(int argc, char* argv[])
{

    Queue q;

    q.addEle(1);
    q.addEle(6);
    q.addEle(73);
    q.addEle(-43);
    q.deleteEle();
    q.addEle(55);
    q.deleteEle();


    std::cout << "q size: " << q.getCurrSize() << std::endl;
    std::cout << q.empty() << std::endl;

    Queue cp(q);

    cp.printFirst();
    cp.deleteEle();
    cp.printFirst();
    cp.deleteEle();
    cp.printFirst();
    cp.deleteEle();
    cp.printFirst();
    cp.deleteEle();
    cp.printFirst();
    cp.deleteEle();
    cp.printFirst();
    cp.deleteEle();
    std::cout << "q size 2 : " << q.getCurrSize() << std::endl;
    std::cout << "\n------\n";

    q.printFirst();
    q.deleteEle();
    q.printFirst();
    q.deleteEle();
    q.printFirst();
    q.deleteEle();
    q.printFirst();
    q.deleteEle();
    q.printFirst();
    q.deleteEle();
    q.printFirst();
    q.deleteEle();

    q.addEle(14);
    q.printFirst();
    q.deleteEle();
    std::cout << std::endl;
    std::cout << q.empty();
    return 0;
}