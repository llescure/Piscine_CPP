#include "Animal.hpp"

Animal::Animal(void): type("Octopus")
{
    std::cout << "Animal constructor called" << std::endl;
    return ;
}

Animal::Animal(Animal const &src)
{
    std::cout << "Animal copy constructor called" << std::endl;
    *this = src;
    return ;
}

Animal::~Animal(void)
{
    std::cout << "Animal destructor called" << std::endl;
    return ;
}

Animal & Animal::operator(Animal const &rhs)
{
    if (this != &rhs)
    {
        this->type = rhs.getType(void);
    }
    return (*this);
}

const std::string     Animal::getType(void) const
{
    return (this->_type);
}

void    makeSound(void) const
{
    if (this->_type == "Cat")
    {
        std::cout << this->_type << ": Miaouuuuuuuuuu" << std::endl;
    }
    else if (this->_type == "Dog")
    {
        std::cout << this->_type << ": Ouaf-ouaf" << std::endl;
    }
    else
    {
        std::cout << this->_type << ": Blopblopblop" << std::endl;
    }
}