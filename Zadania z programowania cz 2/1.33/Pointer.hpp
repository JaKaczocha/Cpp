#ifndef POINTER_HPP
#define POINTER_HPP

class Pointer
{
private:
    int* ptr;
    int size;
public:
    Pointer(int size);
    ~Pointer();
    int* getPtr();
    void cpy(Pointer& pCpy);
};


inline int* Pointer::getPtr()
{
    return ptr;
}
inline void Pointer::cpy(Pointer& pCpy)
{
    pCpy.ptr = ptr;
}

#endif