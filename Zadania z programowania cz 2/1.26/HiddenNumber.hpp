#ifndef HIDDEN_NUMBER_HPP
#define HIDDEN_NUMBER_HPP

class HiddenNumber
{
private:
    int number;
public:
    HiddenNumber(/* args */);
    ~HiddenNumber();

    void reset();

};

inline void HiddenNumber::reset()
{
    number = 0;
}
#endif