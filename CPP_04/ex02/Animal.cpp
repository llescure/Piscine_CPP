#include "Animal.hpp"

AAnimal::AAnimal(void): _type("Octopus")
{
    std::cout << "Animal constructor called" << std::endl;
    return ;
}

AAnimal::AAnimal(AAnimal const &src)
{
    std::cout << "Animal copy constructor called" << std::endl;
    *this = src;
    return ;
}

AAnimal::~AAnimal(void)
{
    std::cout << "Animal destructor called" << std::endl;
    return ;
}

AAnimal & AAnimal::operator=(AAnimal const &rhs)
{
    if (this != &rhs)
    {
        this->_type = rhs.getType();
    }
    return (*this);
}

const std::string     AAnimal::getType(void) const
{
    return (this->_type);
}

void    AAnimal::makeSound(void) const
{
    std::cout << this->_type << ": Blopblopblop" << std::endl;
    return ;
}

void    AAnimal::addIdea(const std::string idea, const int id) const
{
    (void) idea;
    (void) id;
    std::cout << this->_type << " has no brain. It can't have new idea" << std::endl;
    return ;
}

void    AAnimal::showIdeas(void) const
{
    std::cout << this->_type << " has no brain. It can't have new idea" << std::endl;    
}