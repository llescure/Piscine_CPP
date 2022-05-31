#include "AForm.hpp"

/******************/
/* Canonical Form */
/******************/

AForm::AForm(std::string name,
           int const gradeToSign, int const gradeToExecute) : _name(name),
                                                              _isSigned(false),
                                                              _gradeToSign(gradeToSign),
                                                              _gradeToExecute(gradeToExecute)
{
    std::cout << "AForm constructor called" << std::endl;
    return;
}

AForm::~AForm(void)
{
    std::cout << "AForm destructor called" << std::endl;
}

AForm::AForm(AForm const &src): _name(src._name), _isSigned(src._isSigned),
                            _gradeToSign(src._gradeToSign),
                            _gradeToExecute(src._gradeToExecute)
{
    std::cout << "AForm copy constructor called" << std::endl;
}

AForm &AForm::operator=(AForm const &rhs)
{
    std::cout << "AForm copy operator called" << std::endl;
    if (this != &rhs)
    {
        this->_isSigned = rhs.getIsSigned();
    }
    return (*this);
}

/********************/
/* Member functions */
/********************/

std::string const   &AForm::getName(void) const
{
    return (this->_name);
}

bool const  &AForm::getIsSigned(void) const
{
    return (this->_isSigned);
}

int const   &AForm::getGradeToSign(void) const
{
    return (this->_gradeToSign);
}

int const   &AForm::getGradeToExecute(void) const
{
    return (this->_gradeToExecute);
}

void    AForm::beSigned(Bureaucrat const &bureaucrat)
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

void    AForm::execute(Bureaucrat const &executor) const
{
    try
    {
        if (this->_isSigned == false)
        {
            throw std::invalid_argument("form was not signed.");
        }
        else if (executor.getGrade() > this->getGradeToExecute())
        {
            throw GradeTooLowException();
        }
        else
        {
            this->setAction();
        }
    }
    catch(GradeTooLowException& e)
    {
        std::cerr << executor.getName() << " couldn't execute ";
        std::cerr << this->_name << " because " << e.what() << std::endl;
    }
    catch(std::invalid_argument &e)
    {
        std::cerr << executor.getName() << " couldn't execute ";
        std::cerr << this->_name << " because " << e.what() << std::endl;
    }
    
}

void    AForm::setAction(void) const
{
    return ;
}

/*************/
/* Operators */
/*************/

std::ostream    & operator<<(std::ostream &o, AForm const &i )
{
    if (i.getName().empty() == true)
    {
        o << "The AForm doesn't exist";
        return (o);
    }
    if (i.getIsSigned() == true)
    {
        o << "AForm " << i.getName() << " is signed. It needs at least a ";
        o << i.getGradeToSign() << " to be signed. It needs at least a ";
        o << i.getGradeToExecute() << " to be executed.";
        return (o);
    }
    else
    {
        o << "AForm " << i.getName() << " is not signed. It needs at least a ";
        o << i.getGradeToSign() << " to be signed. It needs at least a ";
        o << i.getGradeToExecute() << " to be executed.";
        return (o);
    }
}

/*********************/
/* Exception classes */
/*********************/

const char *AForm::GradeTooHighException::what() const throw()
{
    return ("The bureaucrat grade is too high");
}

const char *AForm::GradeTooLowException::what() const throw()
{
    return ("The bureaucrat grade is too low");
}