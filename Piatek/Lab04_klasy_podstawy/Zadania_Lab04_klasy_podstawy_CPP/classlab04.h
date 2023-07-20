#ifndef CLASSLAB04_H
#define CLASSLAB04_H

#include <string>

class ClassLab04
{
public:
    ClassLab04();
    void Drukuj();
    void SetPrivate(bool b, char c);
    void SetD2(int d2);
    int GetD2();
    int d;
    float f;
    static std::string abc;
private:
    bool b;
    char c;
    int d2;
};

#endif // CLASSLAB04_H
