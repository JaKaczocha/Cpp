#include "post.hpp"

#include <iostream>

post::post(std::string sender, std::string reciver, std::string title, std::string content) :
	sender(sender), reciver(reciver), title(title), content(content)
{
}