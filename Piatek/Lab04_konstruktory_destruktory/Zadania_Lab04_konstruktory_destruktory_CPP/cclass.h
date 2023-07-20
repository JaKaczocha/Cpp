#ifndef CCLASS_H
#define CCLASS_H

#include <string>

class cClass
{
public:
    cClass();
    cClass( int d );
    cClass( int d, float f, bool b );
    cClass( int d, float f, bool b, int id );
    ~cClass();

    int d;
    float f;

private:
    bool b;
    std::string abc;
    const int id;
    static int counter;
};

#endif // CCLASS_H
