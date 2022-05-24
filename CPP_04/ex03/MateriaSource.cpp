#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
    std::cout << "Constructor MateriaSource called" << std::endl;
    for (int i = 0; i < 4; i++)
    {
        this->_inventory[i] = 0;
    }
    return ;
}

MateriaSource::MateriaSource(MateriaSource const & src)
{
    std::cout << "Copy constructor MateriaSource called" << std::endl;
    for (int i = 0; i < 4; i++)
    {
        this->_inventory[i] = src.getInventory(i)->clone();
    }
}

MateriaSource::~MateriaSource(void)
{
    std::cout << "Destructor MateriaSource called" << std::endl;
    for (int i = 0; i < 4; i++)
    {
        delete this->_inventory[i];            
    }
    return ;
}

AMateria *IMateriaSource::getInventory(int const id) const
{
    return (this->_inventory[id]);
}

MateriaSource &MateriaSource::operator=(MateriaSource const &rhs)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &rhs)
    {
        for (int i = 0; i < 4; i++)
        {
            this->_inventory[i] = rhs.getInventory(i)->clone();
        }
    }
    return (*this);
}

void    MateriaSource::learnMateria(AMateria *materia)
{
    AMateria *current;

    for (int i = 0; i < 4; i++)
    {
        current = this->_inventory[i];
        if (current == 0)
        {
            this->_inventory[i] = materia;
            return ;
        }
    }
    std::cout << "MateriaSource is already full. It can't learn new Materia" << std::endl;
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
    std::string typeInClass;

    for (int i = 0; i < 4; i++)
    {
        if (this->_inventory[i] != 0)
        {
            typeInClass = this->_inventory[i]->getType();
        }
        if (typeInClass.compare(type) == 0)
        {
            return (this->_inventory[i]->clone());
        }
    }
    std::cout << "This Materia doesn't exist" << std::endl;
    return (0);
}