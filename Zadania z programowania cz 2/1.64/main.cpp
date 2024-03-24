#include <iostream>
#include "Queue.hpp"

int main() {
    Queue qlele;
    qlele.addEle(1);
    qlele.addEle(34);
    qlele.addEle(8);
    qlele.deleteEle();
    qlele.addEle(2);

    const myList  * const listTmp = qlele.getList();

    std::list<size_t> list = listTmp->getList();

    for (const auto &i : list)
    {
        std::cout << i << " ";
       
    }
    
}