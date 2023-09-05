#ifndef SQUERE_FUN
#define SQUERE_FUN

class SquereFun
{
private:
    /* data */
public:
    SquereFun(/* args */);
    ~SquereFun();

    double a, b, c;

    double value(double x) {return a * x * x + b * x + c;};
    bool zero() {return (b * b - 4 * a * c >= 0 ? true : false); };
};




#endif