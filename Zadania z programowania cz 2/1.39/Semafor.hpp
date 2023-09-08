#ifndef SEMAFOR_HPP
#define SEMAFOR_HPP

class Semafor
{
public:
    Semafor();
    Semafor(unsigned int maxBorder);

    bool book();
    bool free();
    bool state() const;
private:
    unsigned int status;
    unsigned int max;
};

#endif
