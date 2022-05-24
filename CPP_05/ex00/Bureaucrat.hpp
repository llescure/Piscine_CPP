#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <string>

class Bureaucrat
{
    public:

    Bureaucrat(std::string name, int grade);
    Bureaucrat(Bureaucrat const &src)
    ~Bureaucrat(void);

    Bureaucrat  &operator=(Bureaucrat const &rhs);

    std::string &getName(void);
    int         &getGrade(void);
    void        increaseGrade(void);
    void        decreaseGrade(void);


    private:

    std::string _name;
    int         _grade;
};

#endif