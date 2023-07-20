#include "constructors.h"
#include <iostream>

Constructors::Constructors()
{

}

Constructors::Constructors( int id ) : id( id )
{
    std::cout << "Created..." << id << std::endl;
}

Constructors::~Constructors()
{
    std::cout << "Destroyed..." << id << std::endl;
}

Constructors::Constructors( const Constructors &obj )
{
    this->id = obj.id;
    std::cout << "Copied..." << id << std::endl;
}

Constructors::Constructors( Constructors &&obj )
{
    this->id = obj.id;
    std::cout << "Shifted..." << id << std::endl;
}
