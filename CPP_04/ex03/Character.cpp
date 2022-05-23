#include "Character.hpp"

Character::Character(std::string name): _name(name)
{
    std::cout << "Character constructor called" << std::endl;
    return ;
}

Character::Character(Character const &src)
{
    this->_name = src.getName();
    return ;
}

Character::~Character(void)
{
    std::cout << "Character destructor called" << std::endl;
    return ;
}

std::string &Character::getName(void) const
{
    return (this->_name);
}

Character   & Character::operator=(Character const &rhs)
{
    if (this != &rhs)
    {
        this->_name = rhs.getName();
    }
}