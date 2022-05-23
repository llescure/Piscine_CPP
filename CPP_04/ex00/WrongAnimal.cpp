#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void): _type("WrongOctopus")
{
    std::cout << "WrongAnimal constructor called" << std::endl;
    return ;
}

WrongAnimal::WrongAnimal(WrongAnimal const &src)
{
    std::cout << "WrongAnimal copy constructor called" << std::endl;
    *this = src;
    return ;
}

WrongAnimal::~WrongAnimal(void)
{
    std::cout << "WrongAnimal destructor called" << std::endl;
    return ;
}

WrongAnimal & WrongAnimal::operator=(WrongAnimal const &rhs)
{
    if (this != &rhs)
    {
        this->_type = rhs.getType();
    }
    return (*this);
}

const std::string     WrongAnimal::getType(void) const
{
    return (this->_type);
}

void    WrongAnimal::makeSound(void) const
{
    std::cout << this->_type << ": Blorp Blorp" << std::endl;
    return ;
}