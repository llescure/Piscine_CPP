#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
    this->_name = name;
    return ;
}

HumanB::~HumanB(void)
{
    return ;
}

void    HumanB::attack(void) const
{
    std::cout << this->_name << " attacks with their " << this->_weapon.getType() << std::endl;
    return ;
}

void    HumanB::setWeapon(const Weapon weapon) const
{
    this->_weapon = weapon;
    return ;
}