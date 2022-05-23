#include "Materia.hpp"

AMateria::AMateria(std::string const &type): _type(type)
{
    std::cout << "AMateria constructor called" << std::endl;
    return ;
}

AMateria::AMateria(AMateria const &src)
{
    *this = src;
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

AMateria *AMateria::clone()
{
    return (this);
}

void    AMateria::use(ICharacter & target)
{

}

AMateria & AMateria::operator=(AMateria const &rhs)
{
    if (this != &rhs)
    {
        *this = rhs;
    }
    return (*this);
}