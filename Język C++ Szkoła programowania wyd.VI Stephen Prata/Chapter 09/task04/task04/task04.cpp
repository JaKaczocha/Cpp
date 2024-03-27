#include "sales.h"
#include <iostream>

int main()
{
    SALES::Sales gminaGreboszow,gminaRadgoszcz;
    SALES::setSales(gminaGreboszow);
    SALES::showSales(gminaGreboszow);

    double arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
    SALES::setSales(gminaRadgoszcz,arr , 10);
    SALES::showSales(gminaRadgoszcz);

}
