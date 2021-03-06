#include "Bureaucrat.hpp"

/******************/
/* Canonical Form */
/******************/

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
    std::cout << "Bureaucrat constructor called" << std::endl;
    try
    {
        if (grade < 1)
        {
            throw GradeTooHighException();
        }
        else if (grade > 150)
        {
            throw GradeTooLowException();
        }
    }
    catch (GradeTooHighException &e)
    {
        std::cerr << e.what() << '\n';
        return;
    }
    catch (GradeTooLowException &e)
    {
        std::cerr << e.what() << std::endl;
        return;
    }

    this->_grade = grade;
    return;
}

Bureaucrat::Bureaucrat(Bureaucrat const &src) : _name(src._name), _grade(src._grade)
{
    std::cout << "Bureaucrat copy constructor called" << std::endl;
    return;
}

Bureaucrat::~Bureaucrat(void)
{
    std::cout << "Bureaucrat destructor called" << std::endl;
    return;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &rhs)
{
    if (this == &rhs)
    {
        this->_grade = rhs.getGrade();
    }
    return (*this);
}

/********************/
/* Member functions */
/********************/

std::string const   &Bureaucrat::getName(void) const
{
    return (this->_name);
}

int const   &Bureaucrat::getGrade(void) const
{
    return (this->_grade);
}

void    Bureaucrat::increaseGrade(void)
{
    try
    {
        this->_grade--;
        if (this->_grade < 1)
        {
            throw GradeTooHighException();
        }
    }
    catch (GradeTooHighException &e)
    {
        std::cerr << e.what() << std::endl;
    }
}

void    Bureaucrat::decreaseGrade(void)
{
    try
    {
        this->_grade++;
        if (this->_grade > 150)
        {
            throw GradeTooLowException();
        }
    }
    catch (GradeTooLowException &e)
    {
        std::cerr << e.what() << std::endl;
    }
}

void    Bureaucrat::signForm(AForm const &form)
{
    try
    {
        if (form.getIsSigned() == false && form.getGradeToSign() < this->_grade)
        {
            throw GradeTooLowException();
        }
        else if (form.getIsSigned() == false && form.getGradeToSign() >= this->_grade)
        {
            throw std::invalid_argument("form was not signed.");
        }
        std::cout << this->_name << " signed " << form.getName() << std::endl;
    }
    catch (GradeTooLowException &e)
    {
        std::cerr << this->_name << " couldn't sign " << form.getName();
        std::cerr << " because " << e.what() << std::endl; 
    }
    catch (std::invalid_argument &e)
    {
        std::cerr << this->_name << " couldn't sign " << form.getName();
        std::cerr << " because " << e.what() <<std::endl;         
    }
}

void    Bureaucrat::executeForm(AForm const &form)
{
    try
    {
        form.execute(*this);
        if (form.getIsSigned() == true && this->_grade <= form.getGradeToExecute())
        {
            std::cout << this->_name << " executed " << form.getName() << std::endl;
        }
    }
    catch(GradeTooLowException& e)
    {
        std::cerr << this->_name << " couldn't execute " << form.getName();
        std::cerr << " because " << e.what() << std::endl;
    }
    catch (std::invalid_argument &e)
    {
        std::cerr << this->_name << " couldn't execute " << form.getName();
        std::cerr << " because " << e.what() <<std::endl;
    }
}   

/*************/
/* Operators */
/*************/

std::ostream    & operator<<(std::ostream &o, Bureaucrat const &i )
{
    if (i.getName().empty() == true)
    {
        o << "The bureaucrat doesn't exist";
        return (o);
    }
    if (i.getGrade() < 1 || i.getGrade() > 150)
    {
        o << "Can't display bureaucrat. His grade is too low or too high" << std::endl;
        return (o);
    }
    o << i.getName() << ", bureaucrat grade " << i.getGrade() << ".";
    return (o);
}

/*********************/
/* Exception classes */
/*********************/

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
    return ("The bureaucrat grade is too high");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
    return ("The bureaucrat grade is too low");
}