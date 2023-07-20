#ifndef BASE_H
#define BASE_H

#include <string>

class Base
{
public:
    Base();

    void print();
    float calc();
    int a_, b_, c_;
protected:
    float protected_;
    void setAbc( std::string newAbc );
    std::string getAbc();
private:

    std::string abc_;

};

#endif // BASE_H
