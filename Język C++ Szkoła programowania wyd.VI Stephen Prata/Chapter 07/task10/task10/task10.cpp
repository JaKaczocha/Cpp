#include <iostream>

double calculate(double a, double b, double (*fun)(double, double));
double add(double a, double b);
double divide(double a, double b);
double multipli(double a, double b);
double substract(double a, double b);

int main()
{
    double a, b;
    double (*pf[4])(double, double) = {add, divide, multipli, substract};
    do
    {
        std::cout << "enter a: ";
        std::cin >> a;
        std::cout << "enter b: ";
        std::cin >> b;
        
        std::cout << "add( " << a << ", " << b << ") = " << calculate(a, b, pf[0]) << std::endl;
        std::cout << "divide( " << a << ", " << b << ") = " << calculate(a, b, pf[1]) << std::endl;
        std::cout << "multipli( " << a << ", " << b << ") = " << calculate(a, b, pf[2]) << std::endl;
        std::cout << "substract( " << a << ", " << b << ") = " << calculate(a, b, pf[3]) << std::endl;
    } while (a || b);
}

double calculate(double a, double b, double (*fun)(double, double))
{
    return fun(a, b);
}
double add(double a, double b)
{
    return a + b;
}
double divide(double a, double b)
{
    if (b == 0)
        return 0;
    return a / b;
}
double multipli(double a, double b)
{
    return a * b;
}
double substract(double a, double b)
{
    return a - b;
}

