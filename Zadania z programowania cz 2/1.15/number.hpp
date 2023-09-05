#ifndef NUMBER_HPP
#define NUMBER_HPP

class number
{
public:
    number(/* args */);
    ~number();

    void input();
    void print() const;

    void give_val(int val);
    int value() const;
    int value_abs() const;

private:
    int val;
};





#endif