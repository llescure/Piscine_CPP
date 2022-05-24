#include "Ice.hpp"

Ice::Ice(void)
{
    this->_type = "ice";
    std::cout << "Ice constructor called" << std::endl;
    return ;
}

Ice::Ice(Ice const &src)
{
    this->_type = src.getType();
    return ;
}

Ice::~Ice(void)
{
    std::cout << "Ice destructor called" << std::endl;
    return ;
}

Ice *Ice::clone() const
{
    Ice *newInstance;

    newInstance = new Ice();
    return (newInstance);
}

void    Ice::use(ICharacter & target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
    return ;
}

Ice &   Ice::operator=(Ice const &rhs)
{
    if (this != &rhs)
    {
        this->_type = rhs.getType();
    }
    return (*this);
}