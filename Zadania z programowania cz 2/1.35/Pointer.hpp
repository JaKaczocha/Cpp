#ifndef POINTER_HPP
#define POINTER_HPP

class Pointer
{
private:
    int* ptr;
    int size;
public:
    Pointer();
    Pointer(int size);
    ~Pointer();
    int* getPtr();
    void cpy(Pointer& pCpy);
    friend void copy ( int* ptr, Pointer& pointer) ;
};


inline int* Pointer::getPtr()
{
    return ptr;
}
inline void Pointer::cpy(Pointer& pCpy)
{
    pCpy.ptr = ptr;
}
inline void copy ( int* ptr, Pointer& pointer)
{
    pointer.ptr = ptr;
}
#endif