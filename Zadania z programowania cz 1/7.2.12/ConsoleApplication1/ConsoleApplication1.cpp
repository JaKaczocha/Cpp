#include <iostream>

enum class numType
{
    integer,
    doublePrec
};
union number
{
    int i;
    double db;
};
struct complexNumber
{
    number re, im;
    numType type;
};

complexNumber add(const complexNumber* const c1, const complexNumber* const c2);

int main()
{
    std::cout << "Hello World!\n";
}

complexNumber add(const complexNumber* const c1, const complexNumber* const c2)
{
    complexNumber tmp;

    if (c1->type == numType::integer && c2->type == numType::integer)
    {
        tmp.type = numType::integer;
        tmp.im.i = c1->im.i + c2->im.i;
        tmp.re.i = c1->re.i + c2->re.i;
    }
    else
    {
        tmp.type = numType::doublePrec;
        tmp.im.db = c1->im.db + c2->im.db;
        tmp.re.db = c1->re.db + c2->re.db;
    }
    return tmp;
}
