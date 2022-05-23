#include "Ice.hpp"

Ice::Ice(void)
{
    this->_type = "ice";
    std::cout << "Ice constructor called" << std::endl;
    return ;
}

Ice::Ice(Ice const &src)
{
    *this = src;
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

void    use(ICharacter & target)
{
    std::cout << "Ice: \"* shoots an ice bolt at " << target << " *\"" << std::endl;
    return ;
}

Ice &   Ice::operator=(Ice const &rhs)
{
    if (this != &rhs)
    {
        *this = rhs;
    }
    return (*this);
}