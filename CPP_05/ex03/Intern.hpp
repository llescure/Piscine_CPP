#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include <string>
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

# define NUMBER_FORM_TYPE   3

class Aform;

class Intern
{
    public:

    Intern(void);
    Intern(Intern const &src);
    virtual ~Intern(void);

    AForm    *makeForm(std::string formName, std::string target);

    Intern  &operator=(Intern const &rhs);
};

#endif