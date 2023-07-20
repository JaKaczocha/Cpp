#ifndef MYARRAY_H
#define MYARRAY_H


class MyArray
{
public:
    MyArray();
    MyArray( int size );
    ~MyArray();

    MyArray &operator=( const MyArray &obj );

    void Print();

    int *array, size;



};

#endif // MYARRAY_H
