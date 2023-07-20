#ifndef CLASSTEMPLATE_H
#define CLASSTEMPLATE_H



template < typename T >
class ClassTemplate
{
    static const int size_ = 10;
public:



    ClassTemplate( T array[ size_] );

    T *array;
    T min, max;
    void calculate();



};

#endif // CLASSTEMPLATE_H
