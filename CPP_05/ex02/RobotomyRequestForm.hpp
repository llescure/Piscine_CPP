#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include <iostream>
#include <string>
#include <cstdlib>
#include "AForm.hpp"

class RobotomyRequestForm: public AForm
{
    public:

    RobotomyRequestForm(std::string target);
    RobotomyRequestForm(RobotomyRequestForm const &src);
    virtual ~RobotomyRequestForm(void);

    virtual void        setAction(void) const;
    std::string const   &getTarget(void) const;

    RobotomyRequestForm   &operator=(RobotomyRequestForm const &rhs);


    private:
    std::string _target;

};

#endif