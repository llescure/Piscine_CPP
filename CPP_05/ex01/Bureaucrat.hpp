#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include "Form.hpp"

class Form;

class Bureaucrat
{
    public:

    Bureaucrat(void);
    Bureaucrat(std::string name, int grade);
    Bureaucrat(Bureaucrat const &src);
    ~Bureaucrat(void);

    Bureaucrat  &operator=(Bureaucrat const &rhs);

    std::string const   &getName(void) const;
    int const           &getGrade(void) const;
    void                increaseGrade(void);
    void                decreaseGrade(void);
    void                signForm(Form const &form);


    private:

    std::string const   _name;
    int                 _grade;

    class GradeTooHighException: public std::exception
    {
        public:

        virtual const char * what() const throw();
    };

    class GradeTooLowException: public std::exception
    {
        public:
        
        virtual const char * what() const throw();
    };
};

std::ostream &operator<<(std::ostream & o, Bureaucrat const & i);

#endif