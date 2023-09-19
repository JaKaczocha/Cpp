#ifndef ARRAY_HPP
#define ARRAY_HPP

class Array
{
public:
    Array(int Size = 5);
    Array(const Array& cpy);
    ~Array();
    int value(int index) const;
    int getSize() const;
    void setValue(int index, int value);
private:
    int size;
    int* array;
};

#endif
