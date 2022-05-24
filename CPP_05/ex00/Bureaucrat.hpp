#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <string>

class Bureaucrat
{
    public:

    Bureaucrat(std::string name, int grade);
    Bureaucrat(Bureaucrat const &src);
    ~Bureaucrat(void);

    Bureaucrat  &operator=(Bureaucrat const &rhs);

    std::string const   &getName(void) const;
    int const           &getGrade(void) const;
    void                increaseGrade(void);
    void                decreaseGrade(void);


    private:

    std::string const   _name;
    int                 _grade;
};

std::ostream &operator<<(std::ostream & o, Bureaucrat const & i);

#endif