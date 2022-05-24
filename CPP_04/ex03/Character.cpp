#include "Character.hpp"

Character::Character(std::string name)
{
    this->_name = name;
    std::cout << "Character constructor called" << std::endl;
    for (int i = 0; i < 4; i++)
    {
        this->_inventory[i] = 0;
        this->_deleted[i] = 0;
    }
    return ;
}

Character::Character(Character const &src)
{
    std::cout << "Copy constructor called" << std::endl;
    this->_name = src.getName();
    for (int i = 0; i < 4; i++)
    {
        this->_inventory[i] =  src.getInventory(i)->clone();
        this->_deleted[i] =  src.getDeleted(i)->clone();
    }
    return ;
}

Character::~Character(void)
{
    std::cout << "Character destructor called" << std::endl;
    for (int i = 0; i < 4; i++)
    {
        delete this->_deleted[i];
        delete this->_inventory[i];            
    }
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
            this->_inventory[i] =  rhs.getInventory(i)->clone();
            this->_deleted[i] =  rhs.getDeleted(i)->clone();
        }
    }
    return (*this);
}

void    Character::equip(AMateria *m)
{
    AMateria *current;

    for (int i = 0; i < 4; i++)
    {
        current = this->_inventory[i];
        if (current == 0)
        {
            _inventory[i] = m;
            return ;
        }
    }
    std::cout << "The inventory is already full" << std::endl;
}

void    Character::use(int idx, ICharacter &target)
{
    AMateria *current;

    if (idx > 3 || idx < 0)
    {
        std::cout << "The character can only have 4 Mastrias" << std::endl;
        return;
    }
    current = this->_inventory[idx];
    if (current != 0)
    {
        this->_inventory[idx]->use(target);
        return ;
    }
    std::cout << "The materia given doesn't exist" << std::endl;
}

void    Character::unequip(int idx)
{
    if (idx > 3 || idx < 0)
    {
        std::cout << "The character can only have 4 Mastrias" << std::endl;
        return;
    }
    if (this->_inventory[idx] != 0)
    {
        for (int i = 0; i < 4; i++)
        {
            if (this->_deleted[i] == 0)
            {
                this->_deleted[i] = this->_inventory[idx];
                break ;
            }
        }
        this->_inventory[idx] = 0;
        return ;
    }
    std::cout << "The materia given doesn't exist" << std::endl;    
}

AMateria *Character::getInventory(int const id) const
{
    return (this->_inventory[id]);
}

AMateria *Character::getDeleted(int const id) const
{
    return (this->_deleted[id]);
}