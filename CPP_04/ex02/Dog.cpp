#include "Dog.hpp"

Dog::Dog(void)
{
    std::cout << "Dog constructor called" << std::endl;
    this->_type = "Dog";
    this->_attribute = new Brain;
    return ;
}

Dog::~Dog(void)
{
    std::cout << "Dog destructor called" << std::endl;
    delete this->_attribute;
    return ;
}

Dog::Dog(Dog const &src)
{
    std::cout << "Dog copy constructor called" << std::endl;
    this->_type = src.getType();
    this->_attribute = new Brain(*src.getBrain());
    return ;
}

Dog & Dog::operator=(Dog const &rhs)
{
    if (this != &rhs)
    {
        this->_type = rhs.getType();
        this->_attribute = new Brain(*rhs.getBrain());
    }
    return (*this);
}

void    Dog::makeSound(void) const
{
    std::cout << this->_type << ": Ouaf-ouaf" << std::endl;
    return ;
}

void    Dog::addIdea(const std::string idea, const int id) const
{
    std::cout << "Dog has a new idea" << std::endl;
    this->_attribute->ideas[id] = idea;
    return ;
}

void    Dog::showIdeas(void) const
{
    for (int i = 0; i < 100; i++)
    {
        if (this->_attribute->ideas[i].empty() == true)
        {
            return ;
        }
        std::cout << "Dog's idea: " << this->_attribute->ideas[i] << std::endl;
    }
}

Brain   *Dog::getBrain(void) const
{
    return (this->_attribute);
}