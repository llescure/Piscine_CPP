#include "PresidentialPardonForm.hpp"

/******************/
/* Canonical Form */
/******************/

PresidentialPardonForm::PresidentialPardonForm(std::string target):
    AForm("Presidential pardon form", 25, 5)
{
    std::cout << "PresidentialPardonForm constructor called" << std::endl;
    this->_target = target;
    return ;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &src):
    AForm("Presidential pardon form", 25, 5)
{
    std::cout << "PresidentialPardonForm copy constructor called" << std::endl;
    this->_target = src.getTarget();
    return ;
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
    std::cout << "PresidentialPardonForm destructor called" << std::endl;
    return ;
}

PresidentialPardonForm  &PresidentialPardonForm::operator=(PresidentialPardonForm const &rhs)
{
    if (this != &rhs)
    {
        *this = rhs;
    }
    return (*this);
}

/********************/
/* Member functions */
/********************/

std::string const   &PresidentialPardonForm::getTarget(void) const
{
    return (this->_target);
}

void    PresidentialPardonForm::setAction(void) const
{
    std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
    return ;
}