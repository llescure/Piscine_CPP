#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include <iostream>
#include <string>
#include <fstream>
#include "AForm.hpp"

class ShrubberyCreationForm: public AForm
{
    public:

    ShrubberyCreationForm(std::string target);
    ShrubberyCreationForm(ShrubberyCreationForm const &src);
    virtual ~ShrubberyCreationForm(void);

    virtual void        setAction(void) const;
    std::string const   &getTarget(void) const;

    private:

    std::string _target;

    ShrubberyCreationForm &operator=(ShrubberyCreationForm const &rhs);
};

std::string create_tree(void);

#endif