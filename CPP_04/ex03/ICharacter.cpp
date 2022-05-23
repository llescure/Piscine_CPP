#include "ICharacter.hpp"

ICharacter::~ICharacter(void)
{
    return ;
}

AMateria *ICharacter::getInventory(int const id) const
{
    return (this->_inventory[id]);
}
