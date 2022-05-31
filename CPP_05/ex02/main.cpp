#include <iostream>
#include <string>
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void)
{
    std::cout << "Constructor:" << std::endl;

    ShrubberyCreationForm   shrubbery("home");
    RobotomyRequestForm     robotomy("Trump");
    PresidentialPardonForm  presidential("Toto");
    Bureaucrat              biden("Biden", 3);
    Bureaucrat              intern("Bob", 60);

    std::cout << std::endl;
    std::cout << "Test operator <<: " << std::endl;
    std::cout << biden << std::endl;
    std::cout << intern << std::endl;
    std::cout << shrubbery << std::endl;
    std::cout << robotomy << std::endl;
    std::cout << presidential << std::endl;
    std::cout << std::endl;

    std::cout << "Test execution successfull:" << std::endl;
    shrubbery.beSigned(biden);
    biden.signForm(shrubbery);
    robotomy.beSigned(biden);
    biden.signForm(robotomy);
    presidential.beSigned(biden);
    biden.signForm(presidential);
    biden.executeForm(shrubbery);
    biden.executeForm(robotomy);
    biden.executeForm(presidential);
    std::cout << std::endl;

    std::cout << "Test execution failed:" << std::endl;
    shrubbery.beSigned(intern);
    intern.signForm(shrubbery);
    robotomy.beSigned(biden);
    intern.signForm(robotomy);
    presidential.beSigned(biden);
    intern.signForm(presidential);
    intern.executeForm(shrubbery);
    intern.executeForm(robotomy);
    intern.executeForm(presidential);
    std::cout << std::endl;

    std::cout << "Test destructor:" << std::endl;
}