#include "Dog.hpp"

Dog::Dog(void)
{
    std::cout << "Dog constructor called" << std::endl;
    this->_type = "Dog";
    return ;
}

Dog::~Dog(void)
{
    std::cout << "Dog destructor called" << std::endl;
    return ;
}

Dog::Dog(Dog const &src)
{
    *this = src;
    return ;
}

Dog & Dog::operator=(Dog const &rhs)
{
    if (this != &rhs)
    {
        this->_type = rhs.getType();
    }
    return (*this);
}

void    Dog::makeSound(void) const
{
    std::cout << this->_type << ": Ouaf-ouaf" << std::endl;
    return ;
}