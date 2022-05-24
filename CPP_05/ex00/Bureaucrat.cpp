#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade): _name(name), _grade(grade)
{
    std::cout << "Bureaucrat constructor called" << std::endl;
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

std::string &Bureaucrat::getName(void)
{
    return (this->_name);
}

int &Bureaucrat::getGrade(void)
{
    return (this->_grade);
}

Bureaucrat  &Bureaucrat::operator=(Bureaucrat const &rhs)
{
    if (this == &rhs)
    {
        this->_name = rhs.getName();
        this->_grade = rhs.getGrade();
    }
}