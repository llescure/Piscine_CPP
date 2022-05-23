#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
    std::cout << "WrongCat constructor called" << std::endl;
    this->_type = "WrongCat";
    return ;
}

WrongCat::WrongCat(WrongCat const &src)
{
    *this = src;
    return ;
}

WrongCat::~WrongCat(void)
{
    std::cout << "WrongCat destructor called" << std::endl;
    return ;
}

WrongCat & WrongCat::operator=(WrongCat const &rhs)
{
    if (this != &rhs)
    {
        this->_type = rhs.getType();
    }
    return (*this);
}

void    WrongCat::makeSound(void) const
{
    std::cout << this->_type << ": [cough] Miaou [cough]" << std::endl;
    return ;
}