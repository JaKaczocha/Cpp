#include <iostream>

#include "post.hpp"

void print(post mail)
{
    std::cout << "sender: " << mail.sender << std::endl;
    std::cout << "reciver: " << mail.reciver << std::endl;
    std::cout << "title: " << mail.title << std::endl;
    std::cout << "content: " << mail.content << std::endl;
}
int main()
{
    post mail("kuba", "ala", "my 5 conins", "i 5 coin u and u will give my your");
    print(mail);
}

