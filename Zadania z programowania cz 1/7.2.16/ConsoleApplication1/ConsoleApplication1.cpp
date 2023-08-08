#include <iostream>


enum class connection
{
    established,
    notEstablished,
    inProgress
};

struct PC
{
    connection status;
    std::string owner, IP;

};

void printPCinfo(const PC* const pc);

int main()
{
    
}

void printPCinfo(const PC* const pc)
{
    switch (pc->status)
    {
    case connection::established:
        std::cout << pc->owner << " PC is established with " << pc->IP;
        break;
    case connection::notEstablished:
        std::cout << pc->owner << " PC is not established with " << pc->IP;
        break;
    case connection::inProgress:
        std::cout << pc->owner << " PC is in progress to established with " << pc->IP;
        break;
    default:
        break;
    } 
}