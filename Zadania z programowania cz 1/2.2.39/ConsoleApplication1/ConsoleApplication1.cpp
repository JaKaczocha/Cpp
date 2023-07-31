#include <iostream>
#include <cmath>
int max(int a, int b);
int max(int a, int b, int c);
int max(int a, int b, int c, int d);
int max(int a, int b, int c, int d, int e);


int main()
{
    std::cout << max(5, 7) << std::endl;
    std::cout << max(5, 3, 4) << std::endl;
    std::cout << max(5, 3, 8, 9, 4) << std::endl;
    std::cout << max(5, 6, 1,4) << std::endl;
    
}


int max(int a, int b)
{
    return std::max({ a,b });
}
int max(int a, int b, int c)
{
    return std::max({ a,b,c });
}
int max(int a, int b, int c, int d)
{
    return std::max({ a,b,c,d });
}
int max(int a, int b, int c, int d, int e)
{
    return std::max({ a,b,c,d,e });
}
