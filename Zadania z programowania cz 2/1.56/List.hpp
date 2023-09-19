#ifndef LIST_HPP
#define LIST_HPP

#include <string>
#include <map>

class List
{
public:
    List();
    List(const List& list);
    ~List();
    void print() const;
    void add(std::string name, int count);
    void delStuff(std::string name);
    void delAll();
private:
    std::map<std::string, int> stuffMap;
};

#endif