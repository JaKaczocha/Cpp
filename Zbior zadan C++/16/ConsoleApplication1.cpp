#include <iostream>

int main()
{
    

    for (int divident = 2, sum = 0; divident <= 100000; divident++, sum = 0) {
         
        for (int divider = 1; divider < divident; divider++) {
            if(divident % divider == 0) {
                sum += divider;
            }
        }

        if (divident == sum) {
            std::cout << divident << "  ";
        }    
    }
    
}


