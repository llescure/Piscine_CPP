#include "Intern.hpp"

/******************/
/* Canonical Form */
/******************/

Intern::Intern(void)
{
    std::cout << "Intern constructor called" << std::endl;
    return;
}

Intern::Intern(Intern const &src)
{
    *this = src;
    return;
}

Intern::~Intern(void)
{
    std::cout << "Intern destructor called" << std::endl;
    return;
}

Intern &Intern::operator=(Intern const &rhs)
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

AForm *Intern::makeForm(std::string formName, std::string target)
{
    int i;
    std::string formType[NUMBER_FORM_TYPE] =
        {
            "Shrubbery Creation Form",
            "Robotomy Request Form",
            "Presidential Pardon Form"
        };

    i = 0;
    while (i < NUMBER_FORM_TYPE)
    {
        if (formName.compare(formType[i]) == 0)
        {
            break;
        }
        i++;
    }

    switch (i)
    {
    case 0:
        return (new ShrubberyCreationForm(target));
    case 1:
        return (new RobotomyRequestForm(target));
    case 2:
        return (new PresidentialPardonForm(target));
    default:
        std::cout << "The form name given to the intern doesn't exist" << std::endl;
        break;
    }
    return (NULL);
}