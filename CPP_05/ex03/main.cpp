#include <iostream>
#include <string>
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main(void)
{
    std::cout << "Test constructor:" << std::endl;
    Intern      someRandomIntern;
    Bureaucrat  schtroumpf("Schtroumpf", 10);
    AForm       *rrf;
    AForm       *fail;

    std::cout << std::endl;
    std::cout << "Test successful creation of form:" << std::endl;
    rrf = someRandomIntern.makeForm("Robotomy Request Form", "Bender");
    if (rrf != NULL)
    {
        rrf->beSigned(schtroumpf);
        schtroumpf.executeForm(*rrf);
    }
    
    std::cout << std::endl;
    std::cout << "Test failed creation of form:" << std::endl;
    fail = someRandomIntern.makeForm("Be Nice Form", "Gargamelle");
    if (fail != NULL)
    {
        fail->beSigned(schtroumpf);
        schtroumpf.executeForm(*fail);
    }
    std::cout << std::endl;
    std::cout << "Test destructor:" << std::endl;    
    delete(rrf);
    delete(fail);
}