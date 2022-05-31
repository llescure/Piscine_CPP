#ifndef AFORM_HPP
# define AFORM_HPP

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
    public:

    AForm(std::string name, int const gradeToSign,
        int const gradeToExecute);
    AForm(AForm const &src);
    virtual ~AForm(void);

    AForm &operator=(AForm const &rhs);
    
    virtual void        beSigned(Bureaucrat const &bureaucrat);
    virtual void        setAction(void) const;
    void                execute(Bureaucrat const &executor) const;        

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

 std::ostream &operator<<(std::ostream & o, AForm const & i);

#endif