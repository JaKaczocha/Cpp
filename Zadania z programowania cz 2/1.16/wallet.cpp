#include "wallet.hpp"

wallet::wallet(/* args*/)
{
    amount = 0.0;
}
wallet::~wallet()
{
}

void wallet::initiate()
{
    amount = 0.0;
}

void wallet::earnings(double number)
{
    amount += number;
}

void wallet::outgoings(double number)
{
    amount -= number;
}

double wallet::value() const
{
    return amount;
}
