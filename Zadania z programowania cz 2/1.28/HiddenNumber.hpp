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
    void inc();

};

inline void HiddenNumber::reset()
{
    number = 0;
}
inline void HiddenNumber::inc()
{
    number++;
}
#endif