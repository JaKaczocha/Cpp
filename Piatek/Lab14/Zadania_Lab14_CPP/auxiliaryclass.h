#ifndef AUXILIARYCLASS_H
#define AUXILIARYCLASS_H

#include <string>




class AuxiliaryClass
{
public:
    AuxiliaryClass();
    AuxiliaryClass(int a, int b, int c);

    void print() const;
    float getAverage();
    std::string abc_;

private:
    friend struct comparator;
    friend void task02Sum( AuxiliaryClass& ThisClass  );
    friend void task02Product( AuxiliaryClass& ThisClass );
    friend void task02Min( AuxiliaryClass& ThisClass );
    friend void task02Max( AuxiliaryClass& ThisClass ) ;

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

