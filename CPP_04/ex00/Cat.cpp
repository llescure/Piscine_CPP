#include "Cat.hpp"

Cat::Cat(void)
{
    std::cout << "Cat constructor called" << std::endl;
    this->_type = "Cat";
    return ;
}

Cat::Cat(Cat const &src)
{
    *this = src;
    return ;
}

Cat::~Cat(void)
{
    std::cout << "Cat destructor called" << std::endl;
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