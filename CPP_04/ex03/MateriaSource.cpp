#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
    std::cout << "Constructor MateriaSource called" << std::endl;
    for (int i = 0; i < 4; i++)
    {
        this->_inventory = new AMateria();
    }
    return ;
}

MateriaSource::MateriaSource(MateriaSource const & src)
{
    std::cout << "Copy constructor MateriaSource called" << std::endl;
    for (int i = 0; i < 4; i++)
    {
        this->_inventory = new AMateria(*(src.getInventory(i)));
    }
}

MateriaSource::~MateriaSource(void)
{
    std::cout << "Constructor MateriaSource called" << std::endl;
    delete [] this->_inventory;
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
            this->_inventory = new AMateria(*(rhs.getInventory(i)));
        }
    }
    return (*this);
}

void    MateriaSource::learnMateria(AMateria *materia)
{
    std::string type;

    for (int i = 0; i < 4; i++)
    {
        type = this->_inventory[i]->getType();
        if (type.empty() == true)
        {
            this->_inventory = new AMateria(*materia);
        }
    }
    std::cout << "MateriaSource is already full. It can't learn new Materia" << std::endl;
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
    std::string typeInClass;
    AMateria    *materia;

    for (int i = 0; i < 4; i++)
    {
        typeInClass = this->_inventory[i]->getType();
        if (typeInClass.compare(type) == 0)
        {
            materia = new AMateria(type);
            return (materia);
        }
        else
        {
            return (0);
        }
    }
}