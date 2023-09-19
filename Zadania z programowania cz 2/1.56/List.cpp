#include "List.hpp"
#include <iostream>
List::List()
{

}

List::List(const List &list)
{
    stuffMap = list.stuffMap;
}

List::~List()
{

}

void List::print() const
{
    for (auto &i : stuffMap)
    {
        std::cout << "stuff: " << i.first << " count: "<< i.second << std::endl;
    }
}

void List::add(std::string name, int count)
{
    stuffMap.insert(std::make_pair(name, count));
}

void List::delStuff(std::string name)
{
    stuffMap.erase(name);
}

void List::delAll()
{
    stuffMap.clear();
}
