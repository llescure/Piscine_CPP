#include "Animal.hpp"

Animal::Animal(void): _type("Octopus")
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

Animal & Animal::operator=(Animal const &rhs)
{
    if (this != &rhs)
    {
        this->_type = rhs.getType();
    }
    return (*this);
}

const std::string     Animal::getType(void) const
{
    return (this->_type);
}

void    Animal::makeSound(void) const
{
    std::cout << this->_type << ": Blopblopblop" << std::endl;
    return ;
}

void    Animal::addIdea(const std::string idea, const int id) const
{
    (void) idea;
    (void) id;
    std::cout << this->_type << " has no brain. It can't have new idea" << std::endl;
    return ;
}

void    Animal::showIdeas(void) const
{
    std::cout << this->_type << " has no brain. It can't have new idea" << std::endl;    
}