#include "Cure.hpp"

Cure::Cure(void)
{
    this->_type = "cure";
    std::cout << " constructor called" << std::endl;
    return ;
}

Cure::Cure(Cure const &src)
{
    this->_type = src.getType();
    return ;
}

Cure::~Cure(void)
{
    std::cout << "Cure destructor called" << std::endl;
    return ;
}

Cure *Cure::clone() const
{
    Cure *newInstance;

    newInstance = new Cure();
    return (newInstance);
}

void    use(ICharacter & target)
{
    std::cout << "Cure: \"* heals " << target << "'s wound *\"" << std::endl;
    return ;
}

Cure &   Cure::operator=(Cure const &rhs)
{
    if (this != &rhs)
    {
        this->_type = rhs.getType();
    }
    return (*this);
}