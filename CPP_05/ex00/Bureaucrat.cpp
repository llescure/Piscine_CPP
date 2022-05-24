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
    this->_grade--;
}

void    Bureaucrat::decreaseGrade(void)
{
    this->_grade++;
}

Bureaucrat  &Bureaucrat::operator=(Bureaucrat const &rhs)
{
    if (this == &rhs)
    {
        this->_name = rhs.getName();
        this->_grade = rhs.getGrade();
    }
}

std::ostream    & operator<<(std::ostream &o, Bureaucrat const &i )
{
    o << i.getName() << ", bureaucrat grade" << i.getGrade();
    return (o);
}