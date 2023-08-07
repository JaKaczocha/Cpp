#include <iostream>

struct complexNumber
{
    double re, im;
};

inline complexNumber add(const complexNumber num1, const complexNumber num2);

int main()
{
    complexNumber cn1{ 1,5 };
    complexNumber cn2{ 3,3 };

    complexNumber cn3{ add(cn1,cn2) };
    std::cout << cn3.re << " + " << cn3.im << "i";
}

inline complexNumber add(const complexNumber num1, const complexNumber num2)
{
    complexNumber cn;
    cn.re = num1.re + num2.re;
    cn.im = num1.im + num2.im;
    return  cn;
}


