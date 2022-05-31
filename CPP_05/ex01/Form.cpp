#include "Form.hpp"

/******************/
/* Canonical Form */
/******************/

Form::Form(std::string name,
           int const gradeToSign, int const gradeToExecute) : _name(name),
                                                              _isSigned(false),
                                                              _gradeToSign(gradeToSign),
                                                              _gradeToExecute(gradeToExecute)
{
    return;
}

Form::~Form(void)
{
    std::cout << "Form destructor called" << std::endl;
}

Form::Form(Form const &src): _name(src._name), _isSigned(src._isSigned),
                            _gradeToSign(src._gradeToSign),
                            _gradeToExecute(src._gradeToExecute)
{
    std::cout << "Form copy constructor called" << std::endl;
}

Form &Form::operator=(Form const &rhs)
{
    std::cout << "Form copy operator called" << std::endl;
    if (this != &rhs)
    {
        this->_isSigned = rhs.getIsSigned();
    }
    return (*this);
}

/********************/
/* Member functions */
/********************/

std::string const &Form::getName(void) const
{
    return (this->_name);
}

bool const &Form::getIsSigned(void) const
{
    return (this->_isSigned);
}

int const &Form::getGradeToSign(void) const
{
    return (this->_gradeToSign);
}

int const &Form::getGradeToExecute(void) const
{
    return (this->_gradeToExecute);
}

void Form::beSigned(Bureaucrat const &bureaucrat)
{
    try
    {
        if (bureaucrat.getGrade() > this->_gradeToSign)
        {
            throw GradeTooLowException();
        }
        else
        {
            this->_isSigned = true;
        }
    }
    catch (GradeTooLowException &e)
    {
        std::cerr << e.what() << std::endl;
    }
}

/*************/
/* Operators */
/*************/

std::ostream    & operator<<(std::ostream &o, Form const &i )
{
    if (i.getName().empty() == true)
    {
        o << "The form doesn't exist";
        return (o);
    }
    if (i.getIsSigned() == true)
    {
        o << "Form " << i.getName() << " is signed. It needs at least a ";
        o << i.getGradeToSign() << " to be signed. It needs at least a ";
        o << i.getGradeToExecute() << " to be executed.";
        return (o);
    }
    else
    {
        o << "Form " << i.getName() << " is not signed. It needs at least a ";
        o << i.getGradeToSign() << " to be signed. It needs at least a ";
        o << i.getGradeToExecute() << " to be executed.";
        return (o);
    }
}

/*********************/
/* Exception classes */
/*********************/

const char *Form::GradeTooHighException::what() const throw()
{
    return ("The bureaucrat grade is too high");
}

const char *Form::GradeTooLowException::what() const throw()
{
    return ("The bureaucrat grade is too low");
}