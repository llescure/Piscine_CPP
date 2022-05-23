#include "Character.hpp"

ICharacter::ICharacter(void)
{
    return ;
}

Character::Character(std::string name): _name(name)
{
    std::cout << "Character constructor called" << std::endl;
    for (int i = 0; i < 4; i++)
    {
        this->_inventory[i] = new AMateria();
    }
    return ;
}

Character::Character(Character const &src)
{
    std::cout << "Copy constructor called" << std::endl;
    this->_name = src.getName();
    for (int i = 0; i < 4; i++)
    {
        this->_inventory[i] = new AMateria(src.getInventory(i));
    }
    return ;
}

Character::~Character(void)
{
    delete [] this->_inventory;
    std::cout << "Character destructor called" << std::endl;
    return ;
}

std::string const &Character::getName(void) const
{
    return (this->_name);
}

Character   & Character::operator=(Character const &rhs)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &rhs)
    {
        this->_name = rhs.getName();
        for (int i = 0; i < 4; i++)
        {
            this->_inventory[i] = new AMateria(rhs.getInventory(i));
        }
    }
    return (*this);
}

void    Character::equip(AMateria *m)
{
    for (int i = 0; i < 4; i++)
    {
        if (_inventory[i]->getType().empty() == true)
        {
            _inventory[i] = m;
            return ;
        }
    }
    std::cout << "The inventory is already full" << std::endl;
}

void    Character::use(int idx, ICharacter &target)
{
    std::string type;

    type = this->_inventory[idx]->getType();
    if (type.empty() == false)
    {
        this->_inventory[idx]->use(target);
        return ;
    }
    std::cout << "The materia given doesn't exist" << std::endl;
}

void    Character::unequip(int idx)
{
        std::string type;

    type = this->_inventory[idx]->getType();
    if (type.empty() == false)
    {
      std::cout << "Noted" << std::endl;    
        return ;
    }
    std::cout << "The materia given doesn't exist" << std::endl;    
}