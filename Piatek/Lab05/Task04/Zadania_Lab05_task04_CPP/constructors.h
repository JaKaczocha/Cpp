#ifndef CONSTRUCTORS_H
#define CONSTRUCTORS_H


class Constructors
{
public:
    Constructors();
    Constructors( int id );
    Constructors( const Constructors &obj );
    Constructors( Constructors &&obj );
    ~Constructors();



private:
    int id;


};

#endif // CONSTRUCTORS_H
