#include "Cat.hpp"

Cat::Cat(void)
{
    std::cout << "Cat constructor called" << std::endl;
    this->_type = "Cat";
    this->_attribute = new Brain;
    return ;
}

Cat::Cat(Cat const &src)
{
    std::cout << "Cat copy constructor called" << std::endl;
    *this = src;
    return ;
}

Cat::~Cat(void)
{
    std::cout << "Cat destructor called" << std::endl;
    delete this->_attribute;
    return ;
}

Cat & Cat::operator=(Cat const &rhs)
{
    if (this != &rhs)
    {
        this->_type = rhs.getType();
    }
    return (*this);
}

void    Cat::makeSound(void) const
{
    std::cout << this->_type << ": Miaouuuuuuuuuu" << std::endl;
    return ;
}

void    Cat::addIdea(const std::string idea) const
{
    std::cout << "Cat has a new idea" << std::endl;
    this->_attribute->ideas[0] = idea;
    return ;
}