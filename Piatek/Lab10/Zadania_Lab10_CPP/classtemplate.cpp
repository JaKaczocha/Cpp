#include "classtemplate.h"


template < typename T >
ClassTemplate< T >::ClassTemplate( T array2[ size_])
{
    array = new T [ size_ ];
    for( int i = 0; i < size_; i++ )
    {
        array[ i ] = array2[ i ];
    }
}
template< typename T >
void ClassTemplate< T >::calculate()
{
    min = array[ 0 ];
    max = array[ 0 ];
    for( int i = 1; i < size_; i++ )
    {
        if( array[ i ] > max )
        {
            max = array[ i ];
        }
        else if( array[ i ] < min )
        {
            min = array[ i ];
        }
    }
}

template class ClassTemplate<float>;
template class ClassTemplate<char>;
template class ClassTemplate<int>;
