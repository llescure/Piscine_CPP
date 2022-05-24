#include "Materia.hpp"

AMateria::AMateria(void)
{
    return ;
}

AMateria::AMateria(std::string const &type): _type(type)
{
    std::cout << "AMateria constructor called" << std::endl;
    return ;
}

AMateria::AMateria(AMateria const &src)
{
    this->_type = src.getType();
    return ;
}

AMateria::~AMateria(void)
{
    std::cout << "AMateria destructor called" << std::endl;
    return ;
}

std::string const & AMateria::getType() const
{
    return (this->_type);
}

void    AMateria::use(ICharacter & target)
{
    (void)target;
}

AMateria & AMateria::operator=(AMateria const &rhs)
{
    if (this != &rhs)
    {
        this->_type = rhs.getType();
    }
    return (*this);
}