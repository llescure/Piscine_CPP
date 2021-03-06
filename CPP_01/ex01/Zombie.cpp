#include "Zombie.hpp"

Zombie::Zombie(void)
{
    return ;
}

Zombie::Zombie(std::string name): _name(name)
{
    return ;
}

Zombie::~Zombie(void)
{
    std::cout<< this->_name << " is destroyed" <<std::endl;
    return ;
}

void    Zombie::announce(void) const
{
    std::cout<< this->_name << ": BraiiiiiiinnnzzzZ..." <<std::endl;
    return ;
}

void    Zombie::setName(const std::string name)
{   
    this->_name = name;
}