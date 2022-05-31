#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include <iostream>
#include <string>
#include "AForm.hpp"

class PresidentialPardonForm: public AForm
{
    public:

    PresidentialPardonForm(std::string target);
    PresidentialPardonForm(PresidentialPardonForm const &src);
    virtual ~PresidentialPardonForm(void);

    PresidentialPardonForm    &operator=(PresidentialPardonForm const &rhs);

    virtual void        setAction(void) const;
    std::string const   &getTarget(void) const;


    private:

    std::string _target;
};

#endif