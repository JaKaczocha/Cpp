#include "wallet.hpp"


int main(int argc, char* argv[])
{

    wallet wallet1;
    wallet1.initiate();
    wallet1.earnings(123.5);
    wallet1.outgoings(11.33);
    wallet1.value();

    return 0;
}