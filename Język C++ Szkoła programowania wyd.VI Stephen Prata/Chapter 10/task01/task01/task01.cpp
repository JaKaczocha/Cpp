#include <iostream>
#include "RachunekBankowy.h"

int main()
{
    RachunekBankowy rB("Kaczocha","12321");
    rB.showInfo();
    rB.add(230);
    rB.take(123);
    rB.take(123);
    rB.showInfo();
    
}
