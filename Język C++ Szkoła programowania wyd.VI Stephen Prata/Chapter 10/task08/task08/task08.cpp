#include <iostream>
#include "List.h"

int main()
{
    List lista;
    int pierwszy = 1;
    int drugi = 2;
    int trzeci = 3;
    int czwarty = 4;
    int piaty = 5;
    int szósty = 6;

    lista.getSize();

    lista.addFront(pierwszy);
    lista.addFront(drugi);
    lista.addFront(trzeci);

    std::cout << lista.getData() << std::endl; 
    lista.next();
    std::cout << lista.getData() << std::endl;
    lista.next();
    std::cout << lista.getData() << std::endl;
    lista.next();
    std::cout << lista.getData() << std::endl;
    lista.previous();
    std::cout << lista.getData() << std::endl;

    lista.popBack();
    lista.popFront();
    lista.addBack(czwarty);
    lista.next();
    lista.next();
    lista.addBeforCurrent(szósty);
    std::cout << lista.getData() << std::endl;

    lista.previous();
    std::cout << lista.getData() << std::endl;
    
    while (!lista.isEmpty())
    {
        lista.popFront();
        std::cout << "rozmiar: " << lista.getSize() << std::endl;
    }
    
    

}

