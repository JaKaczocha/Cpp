#ifndef HIDDEN_NUMBER_HPP
#define HIDDEN_NUMBER_HPP


class HiddenNumber
{
    friend void inc(HiddenNumber& hid);
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

inline void inc(HiddenNumber& hid)
{
    hid.number++;
}

#endif