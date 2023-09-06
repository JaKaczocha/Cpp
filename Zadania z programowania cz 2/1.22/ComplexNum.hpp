#ifndef COMPLEXNUM_HPP
#define COMPLEXNUM_HPP

class ComplexNum
{
private:
    double real, im;
public:
    ComplexNum(double R,double IM);
    ~ComplexNum();

    void setR(double r);
    void setIm(double im);

    double getR();
    double getIm();
};

inline void ComplexNum::setR(double r) 
{
    this->real = r;
};
inline void ComplexNum::setIm(double im) 
{
    this->im = im;
};

inline double ComplexNum::getR() 
{
    return real;
};
inline double ComplexNum::getIm()
{
    return im;
};


#endif