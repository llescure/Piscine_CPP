#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
    public:

    Form(std::string name, int const gradeToSign,
        int const gradeToExecute);
    Form(Form const &src);
    ~Form(void);

    Form &operator=(Form const &rhs);
    
    void                beSigned(Bureaucrat const &bureaucrat);

    std::string const   &getName(void) const;
    bool const          &getIsSigned(void) const;
    int const           &getGradeToSign(void) const;
    int const           &getGradeToExecute(void) const;
    

    private:

    std::string const   _name;
    bool                _isSigned;
    int const           _gradeToSign;
    int const           _gradeToExecute;

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

 std::ostream &operator<<(std::ostream & o, Form const & i);

#endif