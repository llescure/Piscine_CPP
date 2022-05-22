#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void): _type("Octopus")
{
    std::cout << "Animal constructor called" << std::endl;
    return ;
}

WrongAnimal::WrongAnimal(Animal const &src)
{
    std::cout << "Animal copy constructor called" << std::endl;
    *this = src;
    return ;
}

WrongAnimal::~WrongAnimal(void)
{
    std::cout << "Animal destructor called" << std::endl;
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