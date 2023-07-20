#ifndef AUXILIARYCLASS_H
#define AUXILIARYCLASS_H

#include <string>




class AuxiliaryClass
{
public:
    AuxiliaryClass();
    AuxiliaryClass(int a, int b, int c);

    void print() const;

    std::string abc_;
private:
    friend struct comparator ;
    int a_, b_, c_;
    float average_;
};

struct comparator
{
    bool operator()( const AuxiliaryClass obj1, const AuxiliaryClass obj2 ) const
    {
        return obj1.average_ < obj2.average_;
    }
};

#endif // AUXILIARYCLASS_H

