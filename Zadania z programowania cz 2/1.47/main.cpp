#include <iostream>
#include "stack.hpp"

int main(int argc, char* argv[])
{

    Stack stack;

    stack.addEle(34);
    stack.addEle(1);
    stack.empty();
    Stack cpy{stack};
    std::cout << stack.getEle() << std::endl;
    stack.deleteEle();
    std::cout << stack.getEle() << std::endl << std:: endl;


    std::cout << cpy.getEle() << std::endl;
    cpy.deleteEle();
    std::cout << cpy.getEle() << std::endl << std:: endl;
    cpy.deleteEle();
    std::cout << cpy.getEle() << std::endl << std:: endl;

    std::cout << "---------------";
    stack.addEle(34);
    stack.addEle(1);
    stack.empty();
    
    std::cout << stack.getEle() << std::endl;
    stack.deleteEle();
    std::cout << stack.getEle() << std::endl << std:: endl;
    return 0;
}
