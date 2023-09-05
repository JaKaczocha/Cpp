#ifndef WALLET_CPP
#define WALLET_CPP

class wallet
{
public:

    wallet(/* args */);
    ~wallet();

    void initiate();
    void earnings(double number);
    void outgoings(double number);
    double value() const;

private:
    double amount;
};

#endif


