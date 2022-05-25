#include "Bureaucrat.hpp"

/******************/
/* Canonical Form */
/******************/

Bureaucrat::Bureaucrat(void)
{
    std::cout << "Bureaucrat default constructor called" << std::endl;
    return ;
}

Bureaucrat::Bureaucrat(std::string name, int grade)
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
    catch(GradeTooHighException& e)
    {
        std::cerr << e.what() << '\n';
        return ;
    }
    catch(GradeTooLowException& e)
    {
        std::cerr << e.what() << std::endl;
        return ;
    }

    this->_name = name;
    this->_grade = grade;    
    return ;
}

Bureaucrat::Bureaucrat(Bureaucrat const &src)
{
    std::cout << "Bureaucrat copy constructor called" << std::endl;
    this->_name = src.getName();
    this->_grade = src.getGrade();
    return ;
}

Bureaucrat::~Bureaucrat(void)
{
    std::cout << "Bureaucrat destructor called" << std::endl;
    return ;
}

Bureaucrat  &Bureaucrat::operator=(Bureaucrat const &rhs)
{
    if (this == &rhs)
    {
        this->_name = rhs.getName();
        this->_grade = rhs.getGrade();
    }
    return (*this);
}

/********************/
/* Member functions */
/********************/

std::string const &Bureaucrat::getName(void) const
{
    return (this->_name);
}

int const &Bureaucrat::getGrade(void) const
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
    catch (GradeTooHighException& e)
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
    catch (GradeTooLowException& e)
    {
        std::cerr << e.what() << std::endl;
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