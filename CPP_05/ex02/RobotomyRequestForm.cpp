#include "RobotomyRequestForm.hpp"

/******************/
/* Canonical Form */
/******************/

RobotomyRequestForm::RobotomyRequestForm(std::string target):
    AForm("Robotomy Request Form", 72, 45)
{
    std::cout << "RobotomyRequestForm constructor called" << std::endl;
    this->_target = target;
    return ;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src):
    AForm("Robotomy Request Form", 72, 45)
{
    std::cout << "RobotomyRequestForm copy constructor called" << std::endl;
    this->_target = src.getTarget();
    return ;
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
    std::cout << "RobotomyRequestForm destructor called" << std::endl;
    return ;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &rhs)
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

std::string const   &RobotomyRequestForm::getTarget(void) const
{
    return (this->_target);
}

void    RobotomyRequestForm::setAction(void) const
{
    int random;

    srand(time(NULL));
    random = rand() % 2 + 1;
    std::cout << "Bzut bzut drrrrrrrrrr" << std::endl;
    if (random == 2)
    {
        std::cout << this->_target << " has been robotomized successfully !" << std::endl;
    }
    else
    {
        std::cout << "Robotomy failed on " << this->_target << std::endl;
    }
    return ;
}